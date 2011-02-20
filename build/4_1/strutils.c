/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY440 TY440;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY39221 TY39221;
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
struct TY440 {
  TY416 Sup;
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
typedef NI TY26131[256];
typedef NimStringDesc* TY47805[1];
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY39221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR C_24419);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void, nsuAddf)(NimStringDesc** S_24734, NimStringDesc* Formatstr_24735, NimStringDesc** A_24737, NI A_24737Len0);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18789, NI Addlen_18790);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(NI, Findnormalized_24706)(NimStringDesc* X_24708, NimStringDesc** Inarray_24710, NI Inarray_24710Len0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_24633, NimStringDesc* B_24634);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(void, raiseException)(E_Base* E_5604, NCSTRING Ename_5605);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* S_26238, TY22602 Chars_26240, NI Start_26241);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1355);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* S_23051, NI* Number_23053, NI Start_23054);
N_NIMCALL(void, Preprocesssub_26132)(NimStringDesc* Sub_26134, NI* A_26136);
N_NIMCALL(NI, Findaux_26163)(NimStringDesc* S_26165, NimStringDesc* Sub_26166, NI Start_26167, TY26131 A_26168);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_24960, NimStringDesc** A_24962, NI A_24962Len0);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18842, NI Elemsize_18843);
N_NIMCALL(NI, nsuFindStr)(NimStringDesc* S_26208, NimStringDesc* Sub_26209, NI Start_26210);
N_NIMCALL(NI, npuParseFloat)(NimStringDesc* S_23425, NF* Number_23427, NI Start_23428);
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* S_23044, NI64* Number_23046, NI Start_23047);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19403);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18832, NI Newlen_18833);
NIM_CONST TY22602 Whitespace_24403 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Letters_24405 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFE, 0xFF, 0xFF, 0x07, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Digits_24407 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Hexdigits_24409 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0x7E, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Identchars_24411 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Identstartchars_24413 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY22602 Newlines_24415 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP195602, "", 0);
NIM_CONST TY22602 Patternchars_24738 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP195603, "invalid format string", 21);
static NIM_CONST TY22602 TMP195631 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP195657, "invalid integer: ", 17);
NIM_CONST TY22602 Chars_24980 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP195707, "invalid float: ", 15);
STRING_LITERAL(TMP195748, "0123456789ABCDEF", 16);
extern TNimType* NTI24864; /* ref EInvalidValue */
extern TNimType* NTI440; /* EInvalidValue */
extern TY11196 Gch_11214;
extern TNimType* NTI39221; /* seq[string] */
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR C_24419) {
NIM_CHAR Result_24420;
Result_24420 = 0;
if (!(((NU8)(C_24419)) >= ((NU8)(65)) && ((NU8)(C_24419)) <= ((NU8)(90)))) goto LA2;
Result_24420 = ((NIM_CHAR) (((NI) ((NI32)(((NU8)(C_24419)) + 32)))));
goto LA1;
LA2: ;
Result_24420 = C_24419;
LA1: ;
return Result_24420;
}
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24587, NimStringDesc* B_24588) {
NI Result_24589;
NI I_24590;
NIM_BOOL LOC2;
NIM_CHAR LOC4;
NIM_CHAR LOC5;
Result_24589 = 0;
I_24590 = 0;
I_24590 = 0;
while (1) {
LOC2 = (I_24590 < A_24587->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = (I_24590 < B_24588->Sup.len);
LA3: ;
if (!LOC2) goto LA1;
LOC4 = nsuToLowerChar(A_24587->data[I_24590]);
LOC5 = nsuToLowerChar(B_24588->data[I_24590]);
Result_24589 = (NI32)(((NU8)(LOC4)) - ((NU8)(LOC5)));
if (!!((Result_24589 == 0))) goto LA7;
goto BeforeRet;
LA7: ;
I_24590 += 1;
} LA1: ;
Result_24589 = (NI32)(A_24587->Sup.len - B_24588->Sup.len);
BeforeRet: ;
return Result_24589;
}
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_24633, NimStringDesc* B_24634) {
NI Result_24635;
NI I_24636;
NI J_24637;
NIM_CHAR Aa_24666;
NIM_CHAR Bb_24667;
NIM_BOOL LOC5;
Result_24635 = 0;
I_24636 = 0;
I_24636 = 0;
J_24637 = 0;
J_24637 = 0;
while (1) {
while (1) {
if (!((NU8)(A_24633->data[I_24636]) == (NU8)(95))) goto LA2;
I_24636 += 1;
} LA2: ;
while (1) {
if (!((NU8)(B_24634->data[J_24637]) == (NU8)(95))) goto LA3;
J_24637 += 1;
} LA3: ;
Aa_24666 = 0;
Aa_24666 = nsuToLowerChar(A_24633->data[I_24636]);
Bb_24667 = 0;
Bb_24667 = nsuToLowerChar(B_24634->data[J_24637]);
Result_24635 = (NI32)(((NU8)(Aa_24666)) - ((NU8)(Bb_24667)));
LOC5 = !((Result_24635 == 0));
if (LOC5) goto LA6;
LOC5 = ((NU8)(Aa_24666) == (NU8)(0));
LA6: ;
if (!LOC5) goto LA7;
goto LA1;
LA7: ;
I_24636 += 1;
J_24637 += 1;
} LA1: ;
return Result_24635;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((int) ((NI32)((NI32)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
N_NIMCALL(NI, Findnormalized_24706)(NimStringDesc* X_24708, NimStringDesc** Inarray_24710, NI Inarray_24710Len0) {
NI Result_24711;
NI I_24712;
NI LOC3;
Result_24711 = 0;
I_24712 = 0;
I_24712 = 0;
while (1) {
if (!(I_24712 < (Inarray_24710Len0-1))) goto LA1;
LOC3 = nsuCmpIgnoreStyle(X_24708, Inarray_24710[I_24712]);
if (!(LOC3 == 0)) goto LA4;
Result_24711 = I_24712;
goto BeforeRet;
LA4: ;
I_24712 += 2;
} LA1: ;
Result_24711 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_24711;
}
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11614))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(void, nsuAddf)(NimStringDesc** S_24734, NimStringDesc* Formatstr_24735, NimStringDesc** A_24737, NI A_24737Len0) {
NI I_24740;
NI Num_24741;
NI J_24786;
NI J_24832;
NI X_24857;
NimStringDesc* LOC7;
NIM_BOOL LOC9;
TY440* E_24865;
NI J_24881;
NI X_24905;
NimStringDesc* LOC15;
NIM_BOOL LOC17;
TY440* E_24913;
TY440* E_24930;
I_24740 = 0;
I_24740 = 0;
Num_24741 = 0;
Num_24741 = 0;
while (1) {
if (!(I_24740 < Formatstr_24735->Sup.len)) goto LA1;
if (!((NU8)(Formatstr_24735->data[I_24740]) == (NU8)(36))) goto LA3;
switch (((NU8)(Formatstr_24735->data[(NI32)(I_24740 + 1)]))) {
case 35:
(*S_24734) = resizeString((*S_24734), A_24737[Num_24741]->Sup.len + 0);
appendString((*S_24734), A_24737[Num_24741]);
I_24740 += 2;
Num_24741 += 1;
break;
case 36:
(*S_24734) = addChar((*S_24734), 36);
I_24740 += 2;
break;
case 49 ... 57:
J_24786 = 0;
J_24786 = 0;
I_24740 += 1;
while (1) {
if (!(((NU8)(Formatstr_24735->data[I_24740])) >= ((NU8)(48)) && ((NU8)(Formatstr_24735->data[I_24740])) <= ((NU8)(57)))) goto LA5;
J_24786 = (NI32)((NI32)((NI32)(J_24786 * 10) + ((NU8)(Formatstr_24735->data[I_24740]))) - 48);
I_24740 += 1;
} LA5: ;
(*S_24734) = resizeString((*S_24734), A_24737[(NI32)(J_24786 - 1)]->Sup.len + 0);
appendString((*S_24734), A_24737[(NI32)(J_24786 - 1)]);
break;
case 123:
J_24832 = 0;
J_24832 = (NI32)(I_24740 + 1);
while (1) {
if (!!((((NU8)(Formatstr_24735->data[J_24832])) == ((NU8)(0)) || ((NU8)(Formatstr_24735->data[J_24832])) == ((NU8)(125))))) goto LA6;
J_24832 += 1;
} LA6: ;
X_24857 = 0;
LOC7 = 0;
LOC7 = copyStrLast(Formatstr_24735, (NI32)(I_24740 + 2), (NI32)(J_24832 - 1));
X_24857 = Findnormalized_24706(LOC7, A_24737, A_24737Len0);
LOC9 = (0 <= X_24857);
if (!(LOC9)) goto LA10;
LOC9 = (X_24857 < (A_24737Len0-1));
LA10: ;
if (!LOC9) goto LA11;
(*S_24734) = resizeString((*S_24734), A_24737[(NI32)(X_24857 + 1)]->Sup.len + 0);
appendString((*S_24734), A_24737[(NI32)(X_24857 + 1)]);
goto LA8;
LA11: ;
E_24865 = 0;
E_24865 = (TY440*) newObj(NTI24864, sizeof(TY440));
(*E_24865).Sup.Sup.Sup.m_type = NTI440;
asgnRefNoCycle((void**) &(*E_24865).Sup.Sup.message, copyString(((NimStringDesc*) &TMP195603)));
raiseException((E_Base*)E_24865, "EInvalidValue");
LA8: ;
I_24740 = (NI32)(J_24832 + 1);
break;
case 97 ... 122:
case 65 ... 90:
case 128 ... 255:
case 95:
J_24881 = 0;
J_24881 = (NI32)(I_24740 + 1);
while (1) {
if (!(((NU8)(Formatstr_24735->data[J_24881])) >= ((NU8)(97)) && ((NU8)(Formatstr_24735->data[J_24881])) <= ((NU8)(122)) || ((NU8)(Formatstr_24735->data[J_24881])) >= ((NU8)(65)) && ((NU8)(Formatstr_24735->data[J_24881])) <= ((NU8)(90)) || ((NU8)(Formatstr_24735->data[J_24881])) >= ((NU8)(48)) && ((NU8)(Formatstr_24735->data[J_24881])) <= ((NU8)(57)) || ((NU8)(Formatstr_24735->data[J_24881])) >= ((NU8)(128)) && ((NU8)(Formatstr_24735->data[J_24881])) <= ((NU8)(255)) || ((NU8)(Formatstr_24735->data[J_24881])) == ((NU8)(95)))) goto LA14;
J_24881 += 1;
} LA14: ;
X_24905 = 0;
LOC15 = 0;
LOC15 = copyStrLast(Formatstr_24735, (NI32)(I_24740 + 1), (NI32)(J_24881 - 1));
X_24905 = Findnormalized_24706(LOC15, A_24737, A_24737Len0);
LOC17 = (0 <= X_24905);
if (!(LOC17)) goto LA18;
LOC17 = (X_24905 < (A_24737Len0-1));
LA18: ;
if (!LOC17) goto LA19;
(*S_24734) = resizeString((*S_24734), A_24737[(NI32)(X_24905 + 1)]->Sup.len + 0);
appendString((*S_24734), A_24737[(NI32)(X_24905 + 1)]);
goto LA16;
LA19: ;
E_24913 = 0;
E_24913 = (TY440*) newObj(NTI24864, sizeof(TY440));
(*E_24913).Sup.Sup.Sup.m_type = NTI440;
asgnRefNoCycle((void**) &(*E_24913).Sup.Sup.message, copyString(((NimStringDesc*) &TMP195603)));
raiseException((E_Base*)E_24913, "EInvalidValue");
LA16: ;
I_24740 = J_24881;
break;
default:
E_24930 = 0;
E_24930 = (TY440*) newObj(NTI24864, sizeof(TY440));
(*E_24930).Sup.Sup.Sup.m_type = NTI440;
asgnRefNoCycle((void**) &(*E_24930).Sup.Sup.message, copyString(((NimStringDesc*) &TMP195603)));
raiseException((E_Base*)E_24930, "EInvalidValue");
break;
}
goto LA2;
LA3: ;
(*S_24734) = addChar((*S_24734), Formatstr_24735->data[I_24740]);
I_24740 += 1;
LA2: ;
} LA1: ;
}
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_24960, NimStringDesc** A_24962, NI A_24962Len0) {
NimStringDesc* Result_24963;
Result_24963 = 0;
Result_24963 = copyString(((NimStringDesc*) &TMP195602));
nsuAddf(&Result_24963, Formatstr_24960, A_24962, A_24962Len0);
return Result_24963;
}
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* S_24540) {
NimStringDesc* Result_24541;
NI I_24552;
NI HEX3Atmp_24582;
NI Res_24584;
Result_24541 = 0;
Result_24541 = copyString(((NimStringDesc*) &TMP195602));
I_24552 = 0;
HEX3Atmp_24582 = 0;
HEX3Atmp_24582 = (NI32)(S_24540->Sup.len - 1);
Res_24584 = 0;
Res_24584 = 0;
while (1) {
if (!(Res_24584 <= HEX3Atmp_24582)) goto LA1;
I_24552 = Res_24584;
if (!(((NU8)(S_24540->data[I_24552])) >= ((NU8)(65)) && ((NU8)(S_24540->data[I_24552])) <= ((NU8)(90)))) goto LA3;
Result_24541 = addChar(Result_24541, ((NIM_CHAR) (((NI) ((NI32)(((NU8)(S_24540->data[I_24552])) + 32))))));
goto LA2;
LA3: ;
if (!!(((NU8)(S_24540->data[I_24552]) == (NU8)(95)))) goto LA5;
Result_24541 = addChar(Result_24541, S_24540->data[I_24552]);
goto LA2;
LA5: ;
LA2: ;
Res_24584 += 1;
} LA1: ;
return Result_24541;
}
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* S_26238, TY22602 Chars_26240, NI Start_26241) {
NI Result_26242;
NI I_26253;
NI HEX3Atmp_26265;
NI Res_26267;
Result_26242 = 0;
I_26253 = 0;
HEX3Atmp_26265 = 0;
HEX3Atmp_26265 = (NI32)(S_26238->Sup.len - 1);
Res_26267 = 0;
Res_26267 = Start_26241;
while (1) {
if (!(Res_26267 <= HEX3Atmp_26265)) goto LA1;
I_26253 = Res_26267;
if (!((Chars_26240[((NU8)(S_26238->data[I_26253]))/8] &(1<<(((NU8)(S_26238->data[I_26253]))%8)))!=0)) goto LA3;
Result_26242 = I_26253;
goto BeforeRet;
LA3: ;
Res_26267 += 1;
} LA1: ;
Result_26242 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_26242;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817) {
(*Dest_18816).data[((*Dest_18816).Sup.len)-0] = C_18817;
(*Dest_18816).data[((NI32)((*Dest_18816).Sup.len + 1))-0] = 0;
(*Dest_18816).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_26268)(NimStringDesc* S_26270) {
NimStringDesc* Result_26271;
NIM_BOOL LOC2;
NI LOC3;
NimStringDesc* LOC7;
Result_26271 = 0;
LOC3 = nsuFindCharSet(S_26270, TMP195631, 0);
LOC2 = (0 <= LOC3);
if (!(LOC2)) goto LA4;
LOC2 = !(((NU8)(S_26270->data[0]) == (NU8)(34)));
LA4: ;
if (!LOC2) goto LA5;
LOC7 = 0;
LOC7 = rawNewString(S_26270->Sup.len + 2);
appendChar(LOC7, 34);
appendString(LOC7, S_26270);
appendChar(LOC7, 34);
Result_26271 = LOC7;
goto LA1;
LA5: ;
Result_26271 = copyString(S_26270);
LA1: ;
return Result_26271;
}
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_26216, NIM_CHAR Sub_26217, NI Start_26218) {
NI Result_26219;
NI I_26230;
NI HEX3Atmp_26233;
NI Res_26235;
Result_26219 = 0;
I_26230 = 0;
HEX3Atmp_26233 = 0;
HEX3Atmp_26233 = (NI32)(S_26216->Sup.len - 1);
Res_26235 = 0;
Res_26235 = Start_26218;
while (1) {
if (!(Res_26235 <= HEX3Atmp_26233)) goto LA1;
I_26230 = Res_26235;
if (!((NU8)(Sub_26217) == (NU8)(S_26216->data[I_26230]))) goto LA3;
Result_26219 = I_26230;
goto BeforeRet;
LA3: ;
Res_26235 += 1;
} LA1: ;
Result_26219 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_26219;
}
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25848, NimStringDesc* Prefix_25849) {
NIM_BOOL Result_25850;
NI I_25851;
Result_25850 = 0;
I_25851 = 0;
I_25851 = 0;
while (1) {
if (!((NU8)(Prefix_25849->data[I_25851]) == (NU8)(0))) goto LA3;
Result_25850 = NIM_TRUE;
goto BeforeRet;
LA3: ;
if (!!(((NU8)(S_25848->data[I_25851]) == (NU8)(Prefix_25849->data[I_25851])))) goto LA6;
Result_25850 = NIM_FALSE;
goto BeforeRet;
LA6: ;
I_25851 += 1;
}
BeforeRet: ;
return Result_25850;
}
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_24450) {
NimStringDesc* Result_24451;
NI I_24479;
NI HEX3Atmp_24480;
NI Res_24482;
Result_24451 = 0;
Result_24451 = mnewString(S_24450->Sup.len);
I_24479 = 0;
HEX3Atmp_24480 = 0;
HEX3Atmp_24480 = (NI32)(S_24450->Sup.len - 1);
Res_24482 = 0;
Res_24482 = 0;
while (1) {
if (!(Res_24482 <= HEX3Atmp_24480)) goto LA1;
I_24479 = Res_24482;
Result_24451->data[I_24479] = nsuToLowerChar(S_24450->data[I_24479]);
Res_24482 += 1;
} LA1: ;
return Result_24451;
}
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* S_25453) {
NI Result_25454;
NI L_25456;
TY440* E_25462;
NimStringDesc* LOC5;
Result_25454 = 0;
L_25456 = 0;
L_25456 = npuParseInt(S_25453, &Result_25454, 0);
if (!!((L_25456 == S_25453->Sup.len))) goto LA2;
E_25462 = 0;
E_25462 = (TY440*) newObj(NTI24864, sizeof(TY440));
(*E_25462).Sup.Sup.Sup.m_type = NTI440;
LOC5 = 0;
LOC5 = rawNewString(S_25453->Sup.len + 17);
appendString(LOC5, ((NimStringDesc*) &TMP195657));
appendString(LOC5, S_25453);
asgnRefNoCycle((void**) &(*E_25462).Sup.Sup.message, LOC5);
raiseException((E_Base*)E_25462, "EInvalidValue");
LA2: ;
return Result_25454;
}
N_NIMCALL(void, Preprocesssub_26132)(NimStringDesc* Sub_26134, NI* A_26136) {
NI M_26139;
NI I_26148;
NI Res_26159;
NI I_26157;
NI HEX3Atmp_26160;
NI Res_26162;
M_26139 = 0;
M_26139 = Sub_26134->Sup.len;
I_26148 = 0;
Res_26159 = 0;
Res_26159 = 0;
while (1) {
if (!(Res_26159 <= 255)) goto LA1;
I_26148 = Res_26159;
A_26136[(((NU8)(((NIM_CHAR) (((NI) (I_26148)))))))-0] = (NI32)(M_26139 + 1);
Res_26159 += 1;
} LA1: ;
I_26157 = 0;
HEX3Atmp_26160 = 0;
HEX3Atmp_26160 = (NI32)(M_26139 - 1);
Res_26162 = 0;
Res_26162 = 0;
while (1) {
if (!(Res_26162 <= HEX3Atmp_26160)) goto LA2;
I_26157 = Res_26162;
A_26136[(((NU8)(Sub_26134->data[I_26157])))-0] = (NI32)(M_26139 - I_26157);
Res_26162 += 1;
} LA2: ;
}
N_NIMCALL(NI, Findaux_26163)(NimStringDesc* S_26165, NimStringDesc* Sub_26166, NI Start_26167, TY26131 A_26168) {
NI Result_26169;
NI M_26172;
NI N_26175;
NI J_26176;
NI K_26188;
NI HEX3Atmp_26203;
NI Res_26205;
Result_26169 = 0;
M_26172 = 0;
M_26172 = Sub_26166->Sup.len;
N_26175 = 0;
N_26175 = S_26165->Sup.len;
J_26176 = 0;
J_26176 = Start_26167;
while (1) {
if (!(J_26176 <= (NI32)(N_26175 - M_26172))) goto LA1;
K_26188 = 0;
HEX3Atmp_26203 = 0;
HEX3Atmp_26203 = (NI32)(M_26172 - 1);
Res_26205 = 0;
Res_26205 = 0;
while (1) {
if (!(Res_26205 <= HEX3Atmp_26203)) goto LA3;
K_26188 = Res_26205;
if (!!(((NU8)(Sub_26166->data[K_26188]) == (NU8)(S_26165->data[(NI32)(K_26188 + J_26176)])))) goto LA5;
goto LA2;
LA5: ;
Res_26205 += 1;
} LA3: ;
Result_26169 = J_26176;
goto BeforeRet;
LA2: ;
J_26176 += A_26168[(((NU8)(S_26165->data[(NI32)(J_26176 + M_26172)])))-0];
} LA1: ;
Result_26169 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_26169;
}
N_NIMCALL(NI, nsuFindStr)(NimStringDesc* S_26208, NimStringDesc* Sub_26209, NI Start_26210) {
NI Result_26211;
TY26131 A_26212;
Result_26211 = 0;
memset((void*)&A_26212, 0, sizeof(A_26212));
Preprocesssub_26132(Sub_26209, A_26212);
Result_26211 = Findaux_26163(S_26208, Sub_26209, Start_26210, A_26212);
return Result_26211;
}
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* Formatstr_24967, NimStringDesc* A_24968) {
NimStringDesc* Result_24969;
TY47805 LOC1;
Result_24969 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = copyString(A_24968);
Result_24969 = nsuFormatOpenArray(Formatstr_24967, LOC1, 1);
goto BeforeRet;
BeforeRet: ;
return Result_24969;
}
N_NIMCALL(TY39221*, nsuSplitChar)(NimStringDesc* S_25365, NIM_CHAR Sep_25366) {
TY39221* Result_25368;
NimStringDesc* X_25385;
NI Last_25405;
NI First_25407;
NIM_BOOL LOC6;
Result_25368 = 0;
Result_25368 = (TY39221*) newSeq(NTI39221, 0);
X_25385 = 0;
Last_25405 = 0;
Last_25405 = 0;
if (!(0 < S_25365->Sup.len)) goto LA2;
while (1) {
if (!(Last_25405 <= S_25365->Sup.len)) goto LA4;
First_25407 = 0;
First_25407 = Last_25405;
while (1) {
LOC6 = (Last_25405 < S_25365->Sup.len);
if (!(LOC6)) goto LA7;
LOC6 = !(((NU8)(S_25365->data[Last_25405]) == (NU8)(Sep_25366)));
LA7: ;
if (!LOC6) goto LA5;
Last_25405 += 1;
} LA5: ;
X_25385 = copyStrLast(S_25365, First_25407, (NI32)(Last_25405 - 1));
Result_25368 = (TY39221*) incrSeq(&(Result_25368)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Result_25368->data[Result_25368->Sup.len-1], copyString(X_25385));
Last_25405 += 1;
} LA4: ;
LA2: ;
return Result_25368;
}
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_24976, NIM_BOOL Leading_24977, NIM_BOOL Trailing_24978) {
NimStringDesc* Result_24979;
NI First_24982;
NI Last_24985;
NIM_BOOL LOC9;
Result_24979 = 0;
First_24982 = 0;
First_24982 = 0;
Last_24985 = 0;
Last_24985 = (NI32)(S_24976->Sup.len - 1);
if (!Leading_24977) goto LA2;
while (1) {
if (!(((NU8)(S_24976->data[First_24982])) == ((NU8)(32)) || ((NU8)(S_24976->data[First_24982])) == ((NU8)(9)) || ((NU8)(S_24976->data[First_24982])) == ((NU8)(11)) || ((NU8)(S_24976->data[First_24982])) == ((NU8)(13)) || ((NU8)(S_24976->data[First_24982])) == ((NU8)(10)) || ((NU8)(S_24976->data[First_24982])) == ((NU8)(12)))) goto LA4;
First_24982 += 1;
} LA4: ;
LA2: ;
if (!Trailing_24978) goto LA6;
while (1) {
LOC9 = (0 <= Last_24985);
if (!(LOC9)) goto LA10;
LOC9 = (((NU8)(S_24976->data[Last_24985])) == ((NU8)(32)) || ((NU8)(S_24976->data[Last_24985])) == ((NU8)(9)) || ((NU8)(S_24976->data[Last_24985])) == ((NU8)(11)) || ((NU8)(S_24976->data[Last_24985])) == ((NU8)(13)) || ((NU8)(S_24976->data[Last_24985])) == ((NU8)(10)) || ((NU8)(S_24976->data[Last_24985])) == ((NU8)(12)));
LA10: ;
if (!LOC9) goto LA8;
Last_24985 -= 1;
} LA8: ;
LA6: ;
Result_24979 = copyStrLast(S_24976, First_24982, Last_24985);
return Result_24979;
}
N_NIMCALL(NIM_BOOL, Contains_26284)(NimStringDesc* S_26286, NimStringDesc* Sub_26287) {
NIM_BOOL Result_26288;
NI LOC1;
Result_26288 = 0;
LOC1 = nsuFindStr(S_26286, Sub_26287, 0);
Result_26288 = (0 <= LOC1);
goto BeforeRet;
BeforeRet: ;
return Result_26288;
}
N_NIMCALL(NF, nsuParseFloat)(NimStringDesc* S_25507) {
NF Result_25508;
NI L_25510;
TY440* E_25516;
NimStringDesc* LOC5;
Result_25508 = 0;
L_25510 = 0;
L_25510 = npuParseFloat(S_25507, &Result_25508, 0);
if (!!((L_25510 == S_25507->Sup.len))) goto LA2;
E_25516 = 0;
E_25516 = (TY440*) newObj(NTI24864, sizeof(TY440));
(*E_25516).Sup.Sup.Sup.m_type = NTI440;
LOC5 = 0;
LOC5 = rawNewString(S_25507->Sup.len + 15);
appendString(LOC5, ((NimStringDesc*) &TMP195707));
appendString(LOC5, S_25507);
asgnRefNoCycle((void**) &(*E_25516).Sup.Sup.message, LOC5);
raiseException((E_Base*)E_25516, "EInvalidValue");
LA2: ;
return Result_25508;
}
N_NIMCALL(NI64, nsuParseBiggestInt)(NimStringDesc* S_25480) {
NI64 Result_25481;
NI L_25483;
TY440* E_25489;
NimStringDesc* LOC5;
Result_25481 = 0;
L_25483 = 0;
L_25483 = npuParseBiggestInt(S_25480, &Result_25481, 0);
if (!!((L_25483 == S_25480->Sup.len))) goto LA2;
E_25489 = 0;
E_25489 = (TY440*) newObj(NTI24864, sizeof(TY440));
(*E_25489).Sup.Sup.Sup.m_type = NTI440;
LOC5 = 0;
LOC5 = rawNewString(S_25480->Sup.len + 17);
appendString(LOC5, ((NimStringDesc*) &TMP195657));
appendString(LOC5, S_25480);
asgnRefNoCycle((void**) &(*E_25489).Sup.Sup.message, LOC5);
raiseException((E_Base*)E_25489, "EInvalidValue");
LA2: ;
return Result_25481;
}
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI Count_25666, NIM_CHAR C_25667) {
NimStringDesc* Result_25668;
NI I_25677;
NI HEX3Atmp_25678;
NI Res_25680;
Result_25668 = 0;
Result_25668 = mnewString(Count_25666);
I_25677 = 0;
HEX3Atmp_25678 = 0;
HEX3Atmp_25678 = (NI32)(Count_25666 - 1);
Res_25680 = 0;
Res_25680 = 0;
while (1) {
if (!(Res_25680 <= HEX3Atmp_25678)) goto LA1;
I_25677 = Res_25680;
Result_25668->data[I_25677] = C_25667;
Res_25680 += 1;
} LA1: ;
return Result_25668;
}
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_25410, NI Len_25411) {
NimStringDesc* Result_25412;
NI64 Shift_25414;
NI J_25422;
NI HEX3Atmp_25423;
NI Res_25425;
Result_25412 = 0;
Shift_25414 = 0;
Result_25412 = mnewString(Len_25411);
J_25422 = 0;
HEX3Atmp_25423 = 0;
HEX3Atmp_25423 = (NI32)(Len_25411 - 1);
Res_25425 = 0;
Res_25425 = HEX3Atmp_25423;
while (1) {
if (!(0 <= Res_25425)) goto LA1;
J_25422 = Res_25425;
Result_25412->data[J_25422] = ((NimStringDesc*) &TMP195748)->data[(NI32)(((NI32)(NU32)(NU64)((NI64)((NU64)(X_25410) >> (NU64)(Shift_25414)))) & ((NI32) 15))];
Shift_25414 = (NI64)(Shift_25414 + 4);
Res_25425 -= 1;
} LA1: ;
return Result_25412;
}
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* S_26301, NimStringDesc* Sub_26302, NimStringDesc* By_26303) {
NimStringDesc* Result_26304;
TY26131 A_26305;
NI I_26307;
NI J_26308;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
Result_26304 = 0;
memset((void*)&A_26305, 0, sizeof(A_26305));
Result_26304 = copyString(((NimStringDesc*) &TMP195602));
Preprocesssub_26132(Sub_26302, A_26305);
I_26307 = 0;
I_26307 = 0;
while (1) {
J_26308 = 0;
J_26308 = Findaux_26163(S_26301, Sub_26302, I_26307, A_26305);
if (!(J_26308 < 0)) goto LA3;
goto LA1;
LA3: ;
LOC5 = 0;
LOC5 = copyStrLast(S_26301, I_26307, (NI32)(J_26308 - 1));
Result_26304 = resizeString(Result_26304, LOC5->Sup.len + 0);
appendString(Result_26304, LOC5);
Result_26304 = resizeString(Result_26304, By_26303->Sup.len + 0);
appendString(Result_26304, By_26303);
I_26307 = (NI32)(J_26308 + Sub_26302->Sup.len);
} LA1: ;
LOC6 = 0;
LOC6 = copyStr(S_26301, I_26307);
Result_26304 = resizeString(Result_26304, LOC6->Sup.len + 0);
appendString(Result_26304, LOC6);
return Result_26304;
}
N_NIMCALL(NimStringDesc*, nsuToBin)(NI64 X_26486, NI Len_26487) {
NimStringDesc* Result_26488;
NI64 Mask_26489;
NI64 Shift_26490;
NI J_26502;
NI HEX3Atmp_26508;
NI Res_26510;
Result_26488 = 0;
Mask_26489 = 0;
Mask_26489 = 1;
Shift_26490 = 0;
Shift_26490 = 0;
Result_26488 = mnewString(Len_26487);
J_26502 = 0;
HEX3Atmp_26508 = 0;
HEX3Atmp_26508 = (NI32)(Len_26487 - 1);
Res_26510 = 0;
Res_26510 = HEX3Atmp_26508;
while (1) {
if (!(0 <= Res_26510)) goto LA1;
J_26502 = Res_26510;
Result_26488->data[J_26502] = ((NIM_CHAR) (((NI) ((NI32)(((NI) ((NI64)((NU64)((X_26486 & Mask_26489)) >> (NU64)(Shift_26490)))) + 48)))));
Shift_26490 = (NI64)(Shift_26490 + 1);
Mask_26489 = (NI64)((NU64)(Mask_26489) << (NU64)(1));
Res_26510 -= 1;
} LA1: ;
return Result_26488;
}
N_NIMCALL(NimStringDesc*, nsuToOct)(NI64 X_26459, NI Len_26460) {
NimStringDesc* Result_26461;
NI64 Mask_26462;
NI64 Shift_26463;
NI J_26475;
NI HEX3Atmp_26481;
NI Res_26483;
Result_26461 = 0;
Mask_26462 = 0;
Mask_26462 = 7;
Shift_26463 = 0;
Shift_26463 = 0;
Result_26461 = mnewString(Len_26460);
J_26475 = 0;
HEX3Atmp_26481 = 0;
HEX3Atmp_26481 = (NI32)(Len_26460 - 1);
Res_26483 = 0;
Res_26483 = HEX3Atmp_26481;
while (1) {
if (!(0 <= Res_26483)) goto LA1;
J_26475 = Res_26483;
Result_26461->data[J_26475] = ((NIM_CHAR) (((NI) ((NI32)(((NI) ((NI64)((NU64)((X_26459 & Mask_26462)) >> (NU64)(Shift_26463)))) + 48)))));
Shift_26463 = (NI64)(Shift_26463 + 3);
Mask_26462 = (NI64)((NU64)(Mask_26462) << (NU64)(3));
Res_26483 -= 1;
} LA1: ;
return Result_26461;
}
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI X_25428, NI Minchars_25429) {
NimStringDesc* Result_25430;
NI I_25443;
NI HEX3Atmp_25448;
NI Res_25450;
NimStringDesc* LOC2;
NimStringDesc* LOC6;
Result_25430 = 0;
Result_25430 = nimIntToStr((NI32)abs(X_25428));
I_25443 = 0;
HEX3Atmp_25448 = 0;
HEX3Atmp_25448 = (NI32)(Minchars_25429 - Result_25430->Sup.len);
Res_25450 = 0;
Res_25450 = 1;
while (1) {
if (!(Res_25450 <= HEX3Atmp_25448)) goto LA1;
I_25443 = Res_25450;
LOC2 = 0;
LOC2 = rawNewString(Result_25430->Sup.len + 1);
appendChar(LOC2, 48);
appendString(LOC2, Result_25430);
Result_25430 = LOC2;
Res_25450 += 1;
} LA1: ;
if (!(X_25428 < 0)) goto LA4;
LOC6 = 0;
LOC6 = rawNewString(Result_25430->Sup.len + 1);
appendChar(LOC6, 45);
appendString(LOC6, Result_25430);
Result_25430 = LOC6;
LA4: ;
return Result_25430;
}
N_NIMCALL(NimStringDesc*, nsuToOctal)(NIM_CHAR C_25036) {
NimStringDesc* Result_25037;
NI Val_25043;
NI I_25066;
NI Res_25073;
Result_25037 = 0;
Result_25037 = mnewString(3);
Val_25043 = 0;
Val_25043 = ((NU8)(C_25036));
I_25066 = 0;
Res_25073 = 0;
Res_25073 = 2;
while (1) {
if (!(0 <= Res_25073)) goto LA1;
I_25066 = Res_25073;
Result_25037->data[I_25066] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(Val_25043 % 8) + 48)))));
Val_25043 = (NI32)(Val_25043 / 8);
Res_25073 -= 1;
} LA1: ;
return Result_25037;
}
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** A_26004, NI A_26004Len0, NimStringDesc* Sep_26005) {
NimStringDesc* Result_26006;
NI L_26033;
NI I_26042;
NI HEX3Atmp_26066;
NI Res_26068;
NI I_26065;
NI HEX3Atmp_26069;
NI Res_26071;
Result_26006 = 0;
if (!(0 < A_26004Len0)) goto LA2;
L_26033 = 0;
L_26033 = (NI32)(Sep_26005->Sup.len * (NI32)(A_26004Len0 - 1));
I_26042 = 0;
HEX3Atmp_26066 = 0;
HEX3Atmp_26066 = (A_26004Len0-1);
Res_26068 = 0;
Res_26068 = 0;
while (1) {
if (!(Res_26068 <= HEX3Atmp_26066)) goto LA4;
I_26042 = Res_26068;
L_26033 += A_26004[I_26042]->Sup.len;
Res_26068 += 1;
} LA4: ;
Result_26006 = mnewString(L_26033);
Result_26006 = setLengthStr(Result_26006, 0);
Result_26006 = resizeString(Result_26006, A_26004[0]->Sup.len + 0);
appendString(Result_26006, A_26004[0]);
I_26065 = 0;
HEX3Atmp_26069 = 0;
HEX3Atmp_26069 = (A_26004Len0-1);
Res_26071 = 0;
Res_26071 = 1;
while (1) {
if (!(Res_26071 <= HEX3Atmp_26069)) goto LA5;
I_26065 = Res_26071;
Result_26006 = resizeString(Result_26006, Sep_26005->Sup.len + 0);
appendString(Result_26006, Sep_26005);
Result_26006 = resizeString(Result_26006, A_26004[I_26065]->Sup.len + 0);
appendString(Result_26006, A_26004[I_26065]);
Res_26071 += 1;
} LA5: ;
goto LA1;
LA2: ;
Result_26006 = copyString(((NimStringDesc*) &TMP195602));
LA1: ;
return Result_26006;
}
N_NIMCALL(NIM_BOOL, Allcharsinset_25909)(NimStringDesc* S_25911, TY22602 Theset_25912) {
NIM_BOOL Result_25913;
NIM_CHAR C_25916;
NI I_25929;
Result_25913 = 0;
C_25916 = 0;
I_25929 = 0;
I_25929 = 0;
while (1) {
if (!(I_25929 < S_25911->Sup.len)) goto LA1;
C_25916 = S_25911->data[I_25929];
if (!!(((Theset_25912[((NU8)(C_25916))/8] &(1<<(((NU8)(C_25916))%8)))!=0))) goto LA3;
Result_25913 = NIM_FALSE;
goto BeforeRet;
LA3: ;
I_25929 += 1;
} LA1: ;
Result_25913 = NIM_TRUE;
goto BeforeRet;
BeforeRet: ;
return Result_25913;
}
N_NOINLINE(void, strutilsInit)(void) {
}

