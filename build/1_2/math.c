/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

N_NIMCALL(NIM_BOOL, Ispoweroftwo_97271)(NI X_97273) {
NIM_BOOL Result_97274;
Result_97274 = 0;
Result_97274 = ((NI64)(X_97273 & ((NI64)-(X_97273))) == X_97273);
goto BeforeRet;
BeforeRet: ;
return Result_97274;
}
N_NIMCALL(NI, Nextpoweroftwo_97277)(NI X_97279) {
NI Result_97280;
Result_97280 = 0;
Result_97280 = (NI64)(X_97279 - 1);
Result_97280 = (NI64)(Result_97280 | (NI64)((NU64)(Result_97280) >> (NU64)(32)));
Result_97280 = (NI64)(Result_97280 | (NI64)((NU64)(Result_97280) >> (NU64)(16)));
Result_97280 = (NI64)(Result_97280 | (NI64)((NU64)(Result_97280) >> (NU64)(8)));
Result_97280 = (NI64)(Result_97280 | (NI64)((NU64)(Result_97280) >> (NU64)(4)));
Result_97280 = (NI64)(Result_97280 | (NI64)((NU64)(Result_97280) >> (NU64)(2)));
Result_97280 = (NI64)(Result_97280 | (NI64)((NU64)(Result_97280) >> (NU64)(1)));
Result_97280 += 1;
return Result_97280;
}
N_NOINLINE(void, mathInit)(void) {
}

