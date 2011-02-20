/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct EOverflow EOverflow;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY428 TY428;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef NU8 TY22602[32];
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TY416 {
  E_Base Sup;
};
struct TY428 {
  TY416 Sup;
};
struct EOverflow {
  TY428 Sup;
};
struct TY10802 {
NI Refcount;
TNimType* Typ;
};
struct TY10818 {
NI Len;
NI Cap;
TY10802** D;
};
struct TY10814 {
NI Counter;
NI Max;
TY10810* Head;
TY10810** Data;
};
struct TY11194 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11196 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
TY11194 Stat;
};
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* S_23044, NI64* Number_23046, NI Start_23047);
N_NIMCALL(NI, Rawparseint_22945)(NimStringDesc* S_22947, NI64* B_22949, NI Start_22950);
static N_INLINE(NI, addInt)(NI A_6203, NI B_6204);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 A_6139, NI64 B_6140);
static N_INLINE(NI, subInt)(NI A_6403, NI B_6404);
static N_INLINE(NI64, subInt64)(NI64 A_6098, NI64 B_6099);
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void, raiseException)(E_Base* E_5604, NCSTRING Ename_5605);
N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* S_23087, NF64* Number_23089, NI Start_23090);
NIM_CONST TY22602 Whitespace_22601 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Identchars_22603 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Identstartchars_22605 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP195656, "overflow", 8);
extern TNimType* NTI6051; /* ref EOverflow */
extern TNimType* NTI432; /* EOverflow */
extern TY11196 Gch_11214;
static N_INLINE(NI, addInt)(NI A_6203, NI B_6204) {
NI Result_6205;
NIM_BOOL LOC2;
Result_6205 = 0;
Result_6205 = (NI64)((NU64)(A_6203) + (NU64)(B_6204));
LOC2 = (0 <= (NI64)(Result_6205 ^ A_6203));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_6205 ^ B_6204));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_6205;
}
static N_INLINE(NI, subInt)(NI A_6403, NI B_6404) {
NI Result_6405;
NIM_BOOL LOC2;
Result_6405 = 0;
Result_6405 = (NI64)((NU64)(A_6403) - (NU64)(B_6404));
LOC2 = (0 <= (NI64)(Result_6405 ^ A_6403));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_6405 ^ (NI64)((NU64) ~(B_6404))));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_6405;
}
static N_INLINE(NI64, subInt64)(NI64 A_6098, NI64 B_6099) {
NI64 Result_6100;
NIM_BOOL LOC2;
Result_6100 = 0;
Result_6100 = (NI64)((NU64)(A_6098) - (NU64)(B_6099));
LOC2 = (0 <= (Result_6100 ^ A_6098));
if (LOC2) goto LA3;
LOC2 = (0 <= (Result_6100 ^ ~(B_6099)));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_6100;
}
N_NIMCALL(NI, Rawparseint_22945)(NimStringDesc* S_22947, NI64* B_22949, NI Start_22950) {
NI Result_22951;
NI64 Sign_22952;
NI I_22953;
NI64 TMP195651;NI TMP195652;NI64 TMP195653;NI64 TMP195654;NI TMP195655;Result_22951 = 0;
Sign_22952 = 0;
Sign_22952 = -1;
I_22953 = 0;
I_22953 = Start_22950;
if (!((NU8)(S_22947->data[I_22953]) == (NU8)(43))) goto LA2;
I_22953 = addInt(I_22953, 1);
goto LA1;
LA2: ;
if (!((NU8)(S_22947->data[I_22953]) == (NU8)(45))) goto LA4;
I_22953 = addInt(I_22953, 1);
Sign_22952 = 1;
goto LA1;
LA4: ;
LA1: ;
if (!(((NU8)(S_22947->data[I_22953])) >= ((NU8)(48)) && ((NU8)(S_22947->data[I_22953])) <= ((NU8)(57)))) goto LA7;
(*B_22949) = 0;
while (1) {
if (!(((NU8)(S_22947->data[I_22953])) >= ((NU8)(48)) && ((NU8)(S_22947->data[I_22953])) <= ((NU8)(57)))) goto LA9;
TMP195651 = mulInt64((*B_22949), 10);TMP195652 = subInt(((NU8)(S_22947->data[I_22953])), 48);TMP195653 = subInt64((NI64)(TMP195651), ((NI64) ((NI64)(TMP195652))));(*B_22949) = (NI64)(TMP195653);
I_22953 = addInt(I_22953, 1);
while (1) {
if (!((NU8)(S_22947->data[I_22953]) == (NU8)(95))) goto LA10;
I_22953 = addInt(I_22953, 1);
} LA10: ;
} LA9: ;
TMP195654 = mulInt64((*B_22949), Sign_22952);(*B_22949) = (NI64)(TMP195654);
TMP195655 = subInt(I_22953, Start_22950);Result_22951 = (NI64)(TMP195655);
LA7: ;
return Result_22951;
}
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* S_23044, NI64* Number_23046, NI Start_23047) {
NI Result_23048;
Result_23048 = 0;
Result_23048 = Rawparseint_22945(S_23044, Number_23046, Start_23047);
return Result_23048;
}
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI64)((NU64)(((NI) (Usr_11614))) - (NU64)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
}
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
}
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230) {
NI Result_8006;
Result_8006 = 0;
(*Memloc_3229) -= X_3230;
Result_8006 = (*Memloc_3229);
return Result_8006;
}
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603) {
Addzct_11601(&Gch_11214.Zct, C_12603);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219) {
TY10802* C_13220;
NI LOC4;
TY10802* C_13222;
NI LOC9;
if (!!((Src_13219 == NIM_NIL))) goto LA2;
C_13220 = 0;
C_13220 = Usrtocell_11612(Src_13219);
LOC4 = Atomicinc_3221(&(*C_13220).Refcount, 8);
LA2: ;
if (!!(((*Dest_13218) == NIM_NIL))) goto LA6;
C_13222 = 0;
C_13222 = Usrtocell_11612((*Dest_13218));
LOC9 = Atomicdec_3226(&(*C_13222).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(NI, npuParseInt)(NimStringDesc* S_23051, NI* Number_23053, NI Start_23054) {
NI Result_23055;
NI64 Res_23056;
NIM_BOOL LOC2;
NIM_BOOL LOC4;
EOverflow* E_23069;
Result_23055 = 0;
Res_23056 = 0;
Result_23055 = npuParseBiggestInt(S_23051, &Res_23056, Start_23054);
LOC2 = NIM_FALSE;
if (!(LOC2)) goto LA3;
LOC4 = (Res_23056 < (IL64(-9223372036854775807) - IL64(1)));
if (LOC4) goto LA5;
LOC4 = (IL64(9223372036854775807) < Res_23056);
LA5: ;
LOC2 = LOC4;
LA3: ;
if (!LOC2) goto LA6;
E_23069 = 0;
E_23069 = (EOverflow*) newObj(NTI6051, sizeof(EOverflow));
(*E_23069).Sup.Sup.Sup.Sup.m_type = NTI432;
asgnRefNoCycle((void**) &(*E_23069).Sup.Sup.Sup.message, copyString(((NimStringDesc*) &TMP195656)));
raiseException((E_Base*)E_23069, "EOverflow");
goto LA1;
LA6: ;
(*Number_23053) = ((NI) (Res_23056));
LA1: ;
return Result_23055;
}
N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* S_23087, NF64* Number_23089, NI Start_23090) {
NI Result_23091;
NF Esign_23092;
NF Sign_23093;
NI I_23094;
NI Exponent_23095;
NI Flags_23096;
NIM_BOOL LOC7;
NIM_BOOL LOC12;
NIM_BOOL LOC17;
NIM_BOOL LOC25;
NIM_BOOL LOC30;
NIM_BOOL LOC35;
NF Hd_23221;
NF Hd_23396;
NI J_23420;
NI Res_23422;
Result_23091 = 0;
Esign_23092 = 0;
Esign_23092 = 1.0000000000000000e+00;
Sign_23093 = 0;
Sign_23093 = 1.0000000000000000e+00;
I_23094 = 0;
I_23094 = Start_23090;
Exponent_23095 = 0;
Flags_23096 = 0;
(*Number_23089) = 0.0;
if (!((NU8)(S_23087->data[I_23094]) == (NU8)(43))) goto LA2;
I_23094 += 1;
goto LA1;
LA2: ;
if (!((NU8)(S_23087->data[I_23094]) == (NU8)(45))) goto LA4;
Sign_23093 = -1.0000000000000000e+00;
I_23094 += 1;
goto LA1;
LA4: ;
LA1: ;
LOC7 = ((NU8)(S_23087->data[I_23094]) == (NU8)(78));
if (LOC7) goto LA8;
LOC7 = ((NU8)(S_23087->data[I_23094]) == (NU8)(110));
LA8: ;
if (!LOC7) goto LA9;
LOC12 = ((NU8)(S_23087->data[(NI64)(I_23094 + 1)]) == (NU8)(65));
if (LOC12) goto LA13;
LOC12 = ((NU8)(S_23087->data[(NI64)(I_23094 + 1)]) == (NU8)(97));
LA13: ;
if (!LOC12) goto LA14;
LOC17 = ((NU8)(S_23087->data[(NI64)(I_23094 + 2)]) == (NU8)(78));
if (LOC17) goto LA18;
LOC17 = ((NU8)(S_23087->data[(NI64)(I_23094 + 2)]) == (NU8)(110));
LA18: ;
if (!LOC17) goto LA19;
if (!!((((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) >= ((NU8)(97)) && ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) <= ((NU8)(122)) || ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) >= ((NU8)(65)) && ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) <= ((NU8)(90)) || ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) >= ((NU8)(48)) && ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) <= ((NU8)(57)) || ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) == ((NU8)(95))))) goto LA22;
(*Number_23089) = NAN;
Result_23091 = (NI64)((NI64)(I_23094 + 3) - Start_23090);
goto BeforeRet;
LA22: ;
LA19: ;
LA14: ;
Result_23091 = 0;
goto BeforeRet;
LA9: ;
LOC25 = ((NU8)(S_23087->data[I_23094]) == (NU8)(73));
if (LOC25) goto LA26;
LOC25 = ((NU8)(S_23087->data[I_23094]) == (NU8)(105));
LA26: ;
if (!LOC25) goto LA27;
LOC30 = ((NU8)(S_23087->data[(NI64)(I_23094 + 1)]) == (NU8)(78));
if (LOC30) goto LA31;
LOC30 = ((NU8)(S_23087->data[(NI64)(I_23094 + 1)]) == (NU8)(110));
LA31: ;
if (!LOC30) goto LA32;
LOC35 = ((NU8)(S_23087->data[(NI64)(I_23094 + 2)]) == (NU8)(70));
if (LOC35) goto LA36;
LOC35 = ((NU8)(S_23087->data[(NI64)(I_23094 + 2)]) == (NU8)(102));
LA36: ;
if (!LOC35) goto LA37;
if (!!((((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) >= ((NU8)(97)) && ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) <= ((NU8)(122)) || ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) >= ((NU8)(65)) && ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) <= ((NU8)(90)) || ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) >= ((NU8)(48)) && ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) <= ((NU8)(57)) || ((NU8)(S_23087->data[(NI64)(I_23094 + 3)])) == ((NU8)(95))))) goto LA40;
(*Number_23089) = ((NF64) ((INF * Sign_23093)));
Result_23091 = (NI64)((NI64)(I_23094 + 3) - Start_23090);
goto BeforeRet;
LA40: ;
LA37: ;
LA32: ;
Result_23091 = 0;
goto BeforeRet;
LA27: ;
while (1) {
if (!(((NU8)(S_23087->data[I_23094])) >= ((NU8)(48)) && ((NU8)(S_23087->data[I_23094])) <= ((NU8)(57)))) goto LA42;
Flags_23096 = (NI64)(Flags_23096 | 1);
(*Number_23089) = ((NF64) (((((NF) ((*Number_23089))) * 1.0000000000000000e+01) + ((double) ((NI64)(((NU8)(S_23087->data[I_23094])) - 48))))));
I_23094 += 1;
while (1) {
if (!((NU8)(S_23087->data[I_23094]) == (NU8)(95))) goto LA43;
I_23094 += 1;
} LA43: ;
} LA42: ;
if (!((NU8)(S_23087->data[I_23094]) == (NU8)(46))) goto LA45;
Hd_23221 = 0;
Hd_23221 = 1.0000000000000000e+00;
I_23094 += 1;
while (1) {
if (!(((NU8)(S_23087->data[I_23094])) >= ((NU8)(48)) && ((NU8)(S_23087->data[I_23094])) <= ((NU8)(57)))) goto LA47;
Flags_23096 = (NI64)(Flags_23096 | 2);
(*Number_23089) = ((NF64) (((((NF) ((*Number_23089))) * 1.0000000000000000e+01) + ((double) ((NI64)(((NU8)(S_23087->data[I_23094])) - 48))))));
Hd_23221 = (Hd_23221 * 1.0000000000000000e+01);
I_23094 += 1;
while (1) {
if (!((NU8)(S_23087->data[I_23094]) == (NU8)(95))) goto LA48;
I_23094 += 1;
} LA48: ;
} LA47: ;
(*Number_23089) = ((NF64) ((((NF) ((*Number_23089))) / Hd_23221)));
LA45: ;
if (!(Flags_23096 == 0)) goto LA50;
Result_23091 = 0;
goto BeforeRet;
LA50: ;
if (!(((NU8)(S_23087->data[I_23094])) == ((NU8)(101)) || ((NU8)(S_23087->data[I_23094])) == ((NU8)(69)))) goto LA53;
I_23094 += 1;
if (!((NU8)(S_23087->data[I_23094]) == (NU8)(43))) goto LA56;
I_23094 += 1;
goto LA55;
LA56: ;
if (!((NU8)(S_23087->data[I_23094]) == (NU8)(45))) goto LA58;
Esign_23092 = -1.0000000000000000e+00;
I_23094 += 1;
goto LA55;
LA58: ;
LA55: ;
if (!!((((NU8)(S_23087->data[I_23094])) >= ((NU8)(48)) && ((NU8)(S_23087->data[I_23094])) <= ((NU8)(57))))) goto LA61;
Result_23091 = 0;
goto BeforeRet;
LA61: ;
while (1) {
if (!(((NU8)(S_23087->data[I_23094])) >= ((NU8)(48)) && ((NU8)(S_23087->data[I_23094])) <= ((NU8)(57)))) goto LA63;
Exponent_23095 = (NI64)((NI64)((NI64)(Exponent_23095 * 10) + ((NU8)(S_23087->data[I_23094]))) - 48);
I_23094 += 1;
while (1) {
if (!((NU8)(S_23087->data[I_23094]) == (NU8)(95))) goto LA64;
I_23094 += 1;
} LA64: ;
} LA63: ;
LA53: ;
Hd_23396 = 0;
Hd_23396 = 1.0000000000000000e+00;
J_23420 = 0;
Res_23422 = 0;
Res_23422 = 1;
while (1) {
if (!(Res_23422 <= Exponent_23095)) goto LA65;
J_23420 = Res_23422;
Hd_23396 = (Hd_23396 * 1.0000000000000000e+01);
Res_23422 += 1;
} LA65: ;
if (!(0.0 < Esign_23092)) goto LA67;
(*Number_23089) = ((NF64) ((((NF) ((*Number_23089))) * Hd_23396)));
goto LA66;
LA67: ;
(*Number_23089) = ((NF64) ((((NF) ((*Number_23089))) / Hd_23396)));
LA66: ;
(*Number_23089) = ((NF64) ((((NF) ((*Number_23089))) * Sign_23093)));
Result_23091 = (NI64)(I_23094 - Start_23090);
BeforeRet: ;
return Result_23091;
}
N_NIMCALL(NI, npuParseFloat)(NimStringDesc* S_23425, NF* Number_23427, NI Start_23428) {
NI Result_23429;
NF64 Bf_23430;
Result_23429 = 0;
Bf_23430 = 0;
Result_23429 = npuParseBiggestFloat(S_23425, &Bf_23430, Start_23428);
(*Number_23427) = ((NF) (Bf_23430));
return Result_23429;
}
N_NOINLINE(void, parseutilsInit)(void) {
}

