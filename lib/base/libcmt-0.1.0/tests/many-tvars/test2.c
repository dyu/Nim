/*
 * Blocking test.
 *
 * A simple test of many threads performing a single (not compound)
 * transaction that will try to increment the shared variables 'shared_i'
 * and 'shared_j' while other thread is performing a transaction that
 * try to decrement the same shared variables if theya are greater than
 * a fixed value, and blocks otherwise.
 */

#include <gtransaction.h>

#define NR_THREADS            3
#define MAX_SECONDS_TO_SLEEP  3
#define N                     5

static gint shared_i, shared_j;
static GTVar *tvar_i, *tvar_j;
static GRand *random_generator, *random_inc;

static void copy_gint (gpointer dst, gconstpointer src)
{
  g_return_if_fail (dst != NULL && src != NULL);

  *(gint*)dst = *(gint*)src;
}

static gint compare_gint (gconstpointer i, gconstpointer j)
{
  g_return_val_if_fail (i != NULL && j != NULL, -1);

  return (*(gint*)i == *(gint*)j ? 0 : (*(gint*)i < *(gint*)j ? -1 : 1));
}

static void
decrement_int_or_block (GTransaction *tr, gpointer user_data)
{
  int *i, *j;

  i = g_transaction_read_tvar (tr, tvar_i);
  j = g_transaction_read_tvar (tr, tvar_j);
  g_assert (i != NULL && j != NULL);
  while (*i < N || *j < N) {
    g_print ("Decrementor thread blocks (shared_i == %d, shared_j == %d)\n", *i, *j);
    g_transaction_retry (tr);
  }
  *i -= N;
  *j -= N;
  g_print ("Decrementor thread set shared_i = %d, shared_j = %d\n", *i, *j);
}

static void
increment_int (GTransaction *tr, gpointer user_data)
{
  gint *i, id, inc;

  g_assert (user_data != NULL);

  id = *(gint*)user_data;
  i = g_transaction_read_tvar (tr, tvar_i);
  g_assert (i != NULL);
  (*i)++;

  i = g_transaction_read_tvar (tr, tvar_j);
  inc = g_rand_int_range (random_inc, 1, 2);
  (*i) += inc;

  g_print ("Thread %d set shared int to %d\n", id, *i);
}

static gpointer worker_dec (gpointer arg)
{
  GTransaction *tr;
  gint seconds;

  tr = g_transaction_new ("Decrement", decrement_int_or_block, NULL);
  g_transaction_add_tvar (tr, tvar_i);
  g_transaction_add_tvar (tr, tvar_j);
  while (1) {
    g_transaction_do (tr);
    seconds = g_rand_int_range (random_generator,
                                1,
                                MAX_SECONDS_TO_SLEEP);
    g_usleep (seconds*G_USEC_PER_SEC);
  }
}

static gpointer worker_inc (gpointer arg)
{
  GTransaction *tr;
  gchar *names[] = { "tr0", "tr1", "tr2", "tr3", "tr4" };
  gint id;
  gint seconds;

  g_return_val_if_fail (arg != NULL, NULL);

  id = *(gint*)arg;

  tr = g_transaction_new (names[id], increment_int, &id);
  g_transaction_add_tvar (tr, tvar_i);
  g_transaction_add_tvar (tr, tvar_j);
  while (1) {
    g_transaction_do (tr);
    seconds = g_rand_int_range (random_generator,
                                1,
                                MAX_SECONDS_TO_SLEEP);
    g_usleep (seconds*G_USEC_PER_SEC);
  }
}

int main (int argc, char *argv[])
{
  GThread *threads[NR_THREADS];
  gint i, args[NR_THREADS];

  if (!g_thread_supported ())
    g_thread_init (NULL);

  tvar_i = g_transaction_var_new_contiguous (&shared_i,
				  sizeof(gint),
				  copy_gint,
				  compare_gint);
  tvar_j = g_transaction_var_new_contiguous (&shared_j,
				  sizeof(gint),
				  copy_gint,
				  compare_gint);
  random_generator = g_rand_new ();
  random_inc = g_rand_new ();
  for (i = 0; i < NR_THREADS - 1; i++)
    args[i] = i+1;
  for (i = 0; i < NR_THREADS - 1; i++)
    threads[i] = g_thread_create (worker_inc, &args[i], TRUE, NULL);
  threads[NR_THREADS - 1] = g_thread_create (worker_dec, NULL, TRUE, NULL);
  for (i = 0; i < NR_THREADS; i++)
    (void) g_thread_join (threads[i]);

  return 0;
}
