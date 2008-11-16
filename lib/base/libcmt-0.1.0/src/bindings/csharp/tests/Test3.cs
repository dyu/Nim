//
// Simple test of orElse composition without blocking.
//
// There are no threading nor transactional variables nor blocking transactions.
//

using System;
using LibCMT;

public class Test3
{
    public static void Hello (GTransaction tx, object user_data)
    {
      Console.WriteLine ("Hello... ");
    }

    public static void World (GTransaction tx, object user_data)
    {
      Console.WriteLine ("World!");
    }
    public static void Main ()
    {
      GTransaction tx;

      Console.WriteLine ("Creating the 'Hello' callback...");
      GTransaction.GTransactionFunc helloCb = new GTransaction.GTransactionFunc (Hello);
      
      Console.WriteLine ("Creating the 'World' callback...");
      GTransaction.GTransactionFunc worldCb = new GTransaction.GTransactionFunc (World);

      Console.WriteLine ("Creating the 'Hello' transaction...");
      GTransaction helloTx = new GTransaction ("Hello", helloCb, null);

      Console.WriteLine ("Creating the 'World' transaction...");
      GTransaction worldTx = new GTransaction ("World", worldCb, null);

      Console.WriteLine ("Creating the 'Hello || World' orElse transaction...");
      tx = helloTx.OrElse (worldTx);

      Console.WriteLine ("Running the transaction...");
      tx.Run (null);

      Console.WriteLine ("Exit");
    }
}
