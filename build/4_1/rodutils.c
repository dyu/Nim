/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NIM_CHAR TY59015[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18708);
STRING_LITERAL(TMP196458, "NAN", 3);
STRING_LITERAL(TMP196459, "0.0", 3);
STRING_LITERAL(TMP196460, "INF", 3);
STRING_LITERAL(TMP196461, "-INF", 4);
N_NIMCALL(NimStringDesc*, Tostrmaxprecision_59011)(NF64 F_59013) {
NimStringDesc* Result_59014;
TY59015 Buf_59017;
Result_59014 = 0;
if (!!((((NF) (F_59013)) == ((NF) (F_59013))))) goto LA2;
Result_59014 = copyString(((NimStringDesc*) &TMP196458));
goto LA1;
LA2: ;
if (!(((NF) (F_59013)) == 0.0)) goto LA4;
Result_59014 = copyString(((NimStringDesc*) &TMP196459));
goto LA1;
LA4: ;
if (!(((NF) (F_59013)) == (5.0000000000000000e-01 * ((NF) (F_59013))))) goto LA6;
if (!(0.0 < ((NF) (F_59013)))) goto LA9;
Result_59014 = copyString(((NimStringDesc*) &TMP196460));
goto LA8;
LA9: ;
Result_59014 = copyString(((NimStringDesc*) &TMP196461));
LA8: ;
goto LA1;
LA6: ;
memset((void*)&Buf_59017, 0, sizeof(Buf_59017));
sprintf(((NCSTRING) (Buf_59017)), "%#.16e", F_59013);
Result_59014 = cstrToNimstr(((NCSTRING) (Buf_59017)));
LA1: ;
return Result_59014;
}
N_NOINLINE(void, rodutilsInit)(void) {
}

