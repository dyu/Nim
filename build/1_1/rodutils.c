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
typedef NIM_CHAR TY54015[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18508);
STRING_LITERAL(TMP192462, "NAN", 3);
STRING_LITERAL(TMP192463, "0.0", 3);
STRING_LITERAL(TMP192464, "INF", 3);
STRING_LITERAL(TMP192465, "-INF", 4);
N_NIMCALL(NimStringDesc*, Tostrmaxprecision_54011)(NF64 F_54013) {
NimStringDesc* Result_54014;
TY54015 Buf_54017;
Result_54014 = 0;
if (!!((((NF) (F_54013)) == ((NF) (F_54013))))) goto LA2;
Result_54014 = copyString(((NimStringDesc*) &TMP192462));
goto LA1;
LA2: ;
if (!(((NF) (F_54013)) == 0.0)) goto LA4;
Result_54014 = copyString(((NimStringDesc*) &TMP192463));
goto LA1;
LA4: ;
if (!(((NF) (F_54013)) == (5.0000000000000000e-01 * ((NF) (F_54013))))) goto LA6;
if (!(0.0 < ((NF) (F_54013)))) goto LA9;
Result_54014 = copyString(((NimStringDesc*) &TMP192464));
goto LA8;
LA9: ;
Result_54014 = copyString(((NimStringDesc*) &TMP192465));
LA8: ;
goto LA1;
LA6: ;
memset((void*)&Buf_54017, 0, sizeof(Buf_54017));
sprintf(((NCSTRING) (Buf_54017)), "%#.16e", F_54013);
Result_54014 = cstrToNimstr(((NCSTRING) (Buf_54017)));
LA1: ;
return Result_54014;
}
N_NOINLINE(void, rodutilsInit)(void) {
}

