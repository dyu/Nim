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
N_NIMCALL(NI, Gethashstr_44031)(NimStringDesc* S_44033) {
NI Result_44130;
NI H_44131;
NI I_44157;
NI HEX3Atmp_44163;
NI Res_44165;
Result_44130 = 0;
H_44131 = 0;
H_44131 = 0;
I_44157 = 0;
HEX3Atmp_44163 = 0;
HEX3Atmp_44163 = S_44033->Sup.len;
Res_44165 = 0;
Res_44165 = 1;
while (1) {
if (!(Res_44165 <= HEX3Atmp_44163)) goto LA1;
I_44157 = Res_44165;
H_44131 = (NI32)((NU32)(H_44131) + (NU32)(((NU8)(S_44033->data[I_44157]))));
H_44131 = (NI32)((NU32)(H_44131) + (NU32)((NI32)((NU32)(H_44131) << (NU32)(10))));
H_44131 = (NI32)(H_44131 ^ (NI32)((NU32)(H_44131) >> (NU32)(6)));
Res_44165 += 1;
} LA1: ;
H_44131 = (NI32)((NU32)(H_44131) + (NU32)((NI32)((NU32)(H_44131) << (NU32)(3))));
H_44131 = (NI32)(H_44131 ^ (NI32)((NU32)(H_44131) >> (NU32)(11)));
H_44131 = (NI32)((NU32)(H_44131) + (NU32)((NI32)((NU32)(H_44131) << (NU32)(15))));
Result_44130 = ((NI) (H_44131));
return Result_44130;
}
N_NIMCALL(NI, Gethashstrci_44034)(NimStringDesc* S_44036) {
NI Result_44224;
NI H_44225;
NIM_CHAR C_44226;
NI I_44237;
NI HEX3Atmp_44270;
NI Res_44272;
Result_44224 = 0;
H_44225 = 0;
C_44226 = 0;
H_44225 = 0;
I_44237 = 0;
HEX3Atmp_44270 = 0;
HEX3Atmp_44270 = (NI32)((NI32)(S_44036->Sup.len + 0) - 1);
Res_44272 = 0;
Res_44272 = 0;
while (1) {
if (!(Res_44272 <= HEX3Atmp_44270)) goto LA1;
I_44237 = Res_44272;
C_44226 = S_44036->data[I_44237];
if (!(((NU8)(C_44226)) >= ((NU8)(65)) && ((NU8)(C_44226)) <= ((NU8)(90)))) goto LA3;
C_44226 = ((NIM_CHAR) (((NI) ((NI32)(((NU8)(C_44226)) + 32)))));
LA3: ;
H_44225 = (NI32)((NU32)(H_44225) + (NU32)(((NU8)(C_44226))));
H_44225 = (NI32)((NU32)(H_44225) + (NU32)((NI32)((NU32)(H_44225) << (NU32)(10))));
H_44225 = (NI32)(H_44225 ^ (NI32)((NU32)(H_44225) >> (NU32)(6)));
Res_44272 += 1;
} LA1: ;
H_44225 = (NI32)((NU32)(H_44225) + (NU32)((NI32)((NU32)(H_44225) << (NU32)(3))));
H_44225 = (NI32)(H_44225 ^ (NI32)((NU32)(H_44225) >> (NU32)(11)));
H_44225 = (NI32)((NU32)(H_44225) + (NU32)((NI32)((NU32)(H_44225) << (NU32)(15))));
Result_44224 = ((NI) (H_44225));
return Result_44224;
}
N_NIMCALL(NI, Getnormalizedhash_44037)(NimStringDesc* S_44039) {
NI Result_44169;
NI H_44170;
NIM_CHAR C_44171;
NI I_44182;
NI HEX3Atmp_44218;
NI Res_44220;
Result_44169 = 0;
H_44170 = 0;
C_44171 = 0;
H_44170 = 0;
I_44182 = 0;
HEX3Atmp_44218 = 0;
HEX3Atmp_44218 = (NI32)((NI32)(S_44039->Sup.len + 0) - 1);
Res_44220 = 0;
Res_44220 = 0;
while (1) {
if (!(Res_44220 <= HEX3Atmp_44218)) goto LA1;
I_44182 = Res_44220;
C_44171 = S_44039->data[I_44182];
if (!((NU8)(C_44171) == (NU8)(95))) goto LA4;
goto LA2;
LA4: ;
if (!(((NU8)(C_44171)) >= ((NU8)(65)) && ((NU8)(C_44171)) <= ((NU8)(90)))) goto LA7;
C_44171 = ((NIM_CHAR) (((NI) ((NI32)(((NU8)(C_44171)) + 32)))));
LA7: ;
H_44170 = (NI32)((NU32)(H_44170) + (NU32)(((NU8)(C_44171))));
H_44170 = (NI32)((NU32)(H_44170) + (NU32)((NI32)((NU32)(H_44170) << (NU32)(10))));
H_44170 = (NI32)(H_44170 ^ (NI32)((NU32)(H_44170) >> (NU32)(6)));
LA2: ;
Res_44220 += 1;
} LA1: ;
H_44170 = (NI32)((NU32)(H_44170) + (NU32)((NI32)((NU32)(H_44170) << (NU32)(3))));
H_44170 = (NI32)(H_44170 ^ (NI32)((NU32)(H_44170) >> (NU32)(11)));
H_44170 = (NI32)((NU32)(H_44170) + (NU32)((NI32)((NU32)(H_44170) << (NU32)(15))));
Result_44169 = ((NI) (H_44170));
return Result_44169;
}
N_NIMCALL(NI, Conchash_44040)(NI H_44042, NI Val_44043) {
NI Result_44051;
Result_44051 = 0;
Result_44051 = (NI32)((NU32)(H_44042) + (NU32)(Val_44043));
Result_44051 = (NI32)((NU32)(Result_44051) + (NU32)((NI32)((NU32)(Result_44051) << (NU32)(10))));
Result_44051 = (NI32)(Result_44051 ^ (NI32)((NU32)(Result_44051) >> (NU32)(6)));
return Result_44051;
}
N_NOINLINE(void, nhashesInit)(void) {
}

