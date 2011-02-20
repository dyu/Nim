/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY55526 TY55526;
typedef struct TY55552 TY55552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY47538 TY47538;
typedef struct TY55548 TY55548;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY103008 TY103008;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55550 TY55550;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY10802 TY10802;
typedef struct TY10814 TY10814;
typedef struct TY11196 TY11196;
typedef struct TY10818 TY10818;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY55544 TY55544;
typedef struct TY43013 TY43013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY47538 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY55526 {
TY55552* Typ;
NimStringDesc* Comment;
TY47538 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY55548* Sym;
} S4;
struct {TY54011* Ident;
} S5;
struct {TY55520* Sons;
} S6;
} KindU;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY55540 {
NU8 K;
NU8 S;
NU8 Flags;
TY55552* T;
TY52008* R;
NI A;
};
struct TY55552 {
  TY54005 Sup;
NU8 Kind;
TY55550* Sons;
TY55526* N;
NU8 Flags;
NU8 Callconv;
TY55548* Owner;
TY55548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY55540 Loc;
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
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TY55548 {
  TY54005 Sup;
NU8 Kind;
NU8 Magic;
TY55552* Typ;
TY54011* Name;
TY47538 Info;
TY55548* Owner;
NU32 Flags;
TY55530 Tab;
TY55526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY55540 Loc;
TY55544* Annex;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY55544 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55526* Path;
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY103008 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Internalerror_48159)(TY47538 Info_48161, NimStringDesc* Errmsg_48162);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(NIM_BOOL, Levalue_55865)(TY55526* A_55867, TY55526* B_55868);
N_NIMCALL(NIM_BOOL, Samevalue_55861)(TY55526* A_55863, TY55526* B_55864);
N_NIMCALL(TY55526*, Nodesetop_104697)(TY55526* A_104699, TY55526* B_104700, NU8 Op_104701);
N_NIMCALL(void, Tobitset_104001)(TY55526* S_104003, TY103008** B_104005);
N_NIMCALL(NI64, Firstord_97001)(TY55552* T_97003);
N_NIMCALL(void, Bitsetinit_103010)(TY103008** B_103013, NI Length_103014);
N_NIMCALL(NI64, Getsize_97115)(TY55552* Typ_97117);
N_NIMCALL(NI64, Getordvalue_97109)(TY55526* N_97111);
N_NIMCALL(void, Bitsetincl_103035)(TY103008** X_103038, NI64 Elem_103039);
N_NIMCALL(void, Bitsetunion_103015)(TY103008** X_103018, TY103008* Y_103019);
N_NIMCALL(void, Bitsetdiff_103020)(TY103008** X_103023, TY103008* Y_103024);
N_NIMCALL(void, Bitsetsymdiff_103025)(TY103008** X_103028, TY103008* Y_103029);
N_NIMCALL(void, Bitsetintersect_103030)(TY103008** X_103033, TY103008* Y_103034);
N_NIMCALL(TY55526*, Totreeset_104633)(TY103008* S_104635, TY55552* Settype_104636, TY47538 Info_104637);
N_NIMCALL(TY55526*, Newnodei_55738)(NU8 Kind_55740, TY47538 Info_55741);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11080)(TY10814* S_11083, TY10802* Cell_11084);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NIM_BOOL, Bitsetin_103045)(TY103008* X_103047, NI64 E_103048);
N_NIMCALL(void, Addson_55824)(TY55526* Father_55826, TY55526* Son_55827);
N_NIMCALL(TY55526*, Newinttypenode_55718)(NU8 Kind_55720, NI64 Intval_55721, TY55552* Typ_55722);
N_NIMCALL(NIM_BOOL, Bitsetcontains_103053)(TY103008* X_103055, TY103008* Y_103056);
N_NIMCALL(NIM_BOOL, Bitsetequals_103049)(TY103008* X_103051, TY103008* Y_103052);
STRING_LITERAL(TMP196011, "inSet", 5);
extern TY11196 Gch_11214;
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806) {
NI Result_56880;
Result_56880 = 0;
if (!(*N_55806).KindU.S6.Sons == 0) goto LA2;
Result_56880 = 0;
goto LA1;
LA2: ;
Result_56880 = (*N_55806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_56880;
}
N_NIMCALL(NIM_BOOL, Inset_104010)(TY55526* S_104012, TY55526* Elem_104013) {
NIM_BOOL Result_104057;
NI I_104090;
NI HEX3Atmp_104172;
NI LOC4;
NI Res_104174;
NIM_BOOL LOC10;
NIM_BOOL LOC15;
Result_104057 = 0;
if (!!(((*S_104012).Kind == ((NU8) 31)))) goto LA2;
Internalerror_48159((*S_104012).Info, ((NimStringDesc*) &TMP196011));
LA2: ;
I_104090 = 0;
HEX3Atmp_104172 = 0;
LOC4 = Sonslen_55804(S_104012);
HEX3Atmp_104172 = (NI64)(LOC4 - 1);
Res_104174 = 0;
Res_104174 = 0;
while (1) {
if (!(Res_104174 <= HEX3Atmp_104172)) goto LA5;
I_104090 = Res_104174;
if (!((*(*S_104012).KindU.S6.Sons->data[I_104090]).Kind == ((NU8) 35))) goto LA7;
LOC10 = Levalue_55865((*(*S_104012).KindU.S6.Sons->data[I_104090]).KindU.S6.Sons->data[0], Elem_104013);
if (!(LOC10)) goto LA11;
LOC10 = Levalue_55865(Elem_104013, (*(*S_104012).KindU.S6.Sons->data[I_104090]).KindU.S6.Sons->data[1]);
LA11: ;
if (!LOC10) goto LA12;
Result_104057 = NIM_TRUE;
goto BeforeRet;
LA12: ;
goto LA6;
LA7: ;
LOC15 = Samevalue_55861((*S_104012).KindU.S6.Sons->data[I_104090], Elem_104013);
if (!LOC15) goto LA16;
Result_104057 = NIM_TRUE;
goto BeforeRet;
LA16: ;
LA6: ;
Res_104174 += 1;
} LA5: ;
Result_104057 = NIM_FALSE;
BeforeRet: ;
return Result_104057;
}
N_NIMCALL(void, Tobitset_104001)(TY55526* S_104003, TY103008** B_104005) {
NI64 First_104524;
NI64 J_104525;
NI64 LOC1;
NI I_104534;
NI HEX3Atmp_104630;
NI LOC2;
NI Res_104632;
NI64 LOC8;
NI64 LOC9;
First_104524 = 0;
J_104525 = 0;
First_104524 = Firstord_97001((*(*S_104003).Typ).Sons->data[0]);
LOC1 = Getsize_97115((*S_104003).Typ);
Bitsetinit_103010(B_104005, ((NI) (LOC1)));
I_104534 = 0;
HEX3Atmp_104630 = 0;
LOC2 = Sonslen_55804(S_104003);
HEX3Atmp_104630 = (NI64)(LOC2 - 1);
Res_104632 = 0;
Res_104632 = 0;
while (1) {
if (!(Res_104632 <= HEX3Atmp_104630)) goto LA3;
I_104534 = Res_104632;
if (!((*(*S_104003).KindU.S6.Sons->data[I_104534]).Kind == ((NU8) 35))) goto LA5;
J_104525 = Getordvalue_97109((*(*S_104003).KindU.S6.Sons->data[I_104534]).KindU.S6.Sons->data[0]);
while (1) {
LOC8 = Getordvalue_97109((*(*S_104003).KindU.S6.Sons->data[I_104534]).KindU.S6.Sons->data[1]);
if (!(J_104525 <= LOC8)) goto LA7;
Bitsetincl_103035(B_104005, (NI64)(J_104525 - First_104524));
J_104525 += 1;
} LA7: ;
goto LA4;
LA5: ;
LOC9 = Getordvalue_97109((*S_104003).KindU.S6.Sons->data[I_104534]);
Bitsetincl_103035(B_104005, (NI64)(LOC9 - First_104524));
LA4: ;
Res_104632 += 1;
} LA3: ;
}
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618) {
NIM_BOOL Result_11619;
Result_11619 = 0;
Result_11619 = !((((*(*C_11618).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11619;
}
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254) {
Incl_11080(&Gch_11214.Cycleroots, C_12254);
}
static N_INLINE(void, Incref_13202)(TY10802* C_13204) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3221(&(*C_13204).Refcount, 8);
LOC3 = Canbecycleroot_11616(C_13204);
if (!LOC3) goto LA4;
Rtladdcycleroot_12252(C_13204);
LA4: ;
}
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI64)((NU64)(((NI) (Usr_11614))) - (NU64)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
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
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_13003).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12601(C_13003);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11616(C_13003);
if (!LOC5) goto LA6;
Rtladdcycleroot_12252(C_13003);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215) {
TY10802* LOC4;
TY10802* LOC8;
if (!!((Src_13215 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11612(Src_13215);
Incref_13202(LOC4);
LA2: ;
if (!!(((*Dest_13214) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11612((*Dest_13214));
Decref_13001(LOC8);
LA6: ;
(*Dest_13214) = Src_13215;
}
N_NIMCALL(TY55526*, Totreeset_104633)(TY103008* S_104635, TY55552* Settype_104636, TY47538 Info_104637) {
TY55526* Result_104638;
NI64 A_104639;
NI64 B_104640;
NI64 E_104641;
NI64 First_104642;
TY55552* Elemtype_104643;
TY55526* N_104644;
NIM_BOOL LOC3;
NIM_BOOL LOC8;
NIM_BOOL LOC10;
TY55526* LOC16;
TY55526* LOC17;
TY55526* LOC18;
Result_104638 = 0;
A_104639 = 0;
B_104640 = 0;
E_104641 = 0;
First_104642 = 0;
Elemtype_104643 = 0;
N_104644 = 0;
Elemtype_104643 = (*Settype_104636).Sons->data[0];
First_104642 = Firstord_97001(Elemtype_104643);
Result_104638 = Newnodei_55738(((NU8) 31), Info_104637);
asgnRef((void**) &(*Result_104638).Typ, Settype_104636);
(*Result_104638).Info = Info_104637;
E_104641 = 0;
while (1) {
if (!(E_104641 < ((NI64) ((NI64)((S_104635->Sup.len-1) * 8))))) goto LA1;
LOC3 = Bitsetin_103045(S_104635, E_104641);
if (!LOC3) goto LA4;
A_104639 = E_104641;
B_104640 = E_104641;
while (1) {
B_104640 += 1;
LOC8 = (((NI64) ((NI64)((S_104635->Sup.len-1) * 8))) < B_104640);
if (LOC8) goto LA9;
LOC10 = Bitsetin_103045(S_104635, B_104640);
LOC8 = !(LOC10);
LA9: ;
if (!LOC8) goto LA11;
goto LA6;
LA11: ;
} LA6: ;
B_104640 -= 1;
if (!(A_104639 == B_104640)) goto LA14;
LOC16 = 0;
LOC16 = Newinttypenode_55718(((NU8) 6), (NI64)(A_104639 + First_104642), Elemtype_104643);
Addson_55824(Result_104638, LOC16);
goto LA13;
LA14: ;
N_104644 = Newnodei_55738(((NU8) 35), Info_104637);
asgnRef((void**) &(*N_104644).Typ, Elemtype_104643);
LOC17 = 0;
LOC17 = Newinttypenode_55718(((NU8) 6), (NI64)(A_104639 + First_104642), Elemtype_104643);
Addson_55824(N_104644, LOC17);
LOC18 = 0;
LOC18 = Newinttypenode_55718(((NU8) 6), (NI64)(B_104640 + First_104642), Elemtype_104643);
Addson_55824(N_104644, LOC18);
Addson_55824(Result_104638, N_104644);
LA13: ;
E_104641 = B_104640;
LA4: ;
E_104641 += 1;
} LA1: ;
return Result_104638;
}
N_NIMCALL(TY55526*, Nodesetop_104697)(TY55526* A_104699, TY55526* B_104700, NU8 Op_104701) {
TY55526* Result_104702;
TY103008* X_104703;
TY103008* Y_104704;
Result_104702 = 0;
X_104703 = 0;
Y_104704 = 0;
Tobitset_104001(A_104699, &X_104703);
Tobitset_104001(B_104700, &Y_104704);
switch (Op_104701) {
case ((NU8) 0):
Bitsetunion_103015(&X_104703, Y_104704);
break;
case ((NU8) 1):
Bitsetdiff_103020(&X_104703, Y_104704);
break;
case ((NU8) 2):
Bitsetsymdiff_103025(&X_104703, Y_104704);
break;
case ((NU8) 3):
Bitsetintersect_103030(&X_104703, Y_104704);
break;
}
Result_104702 = Totreeset_104633(X_104703, (*A_104699).Typ, (*A_104699).Info);
return Result_104702;
}
N_NIMCALL(TY55526*, Diffsets_104030)(TY55526* A_104032, TY55526* B_104033) {
TY55526* Result_104720;
Result_104720 = 0;
Result_104720 = Nodesetop_104697(A_104032, B_104033, ((NU8) 1));
return Result_104720;
}
N_NIMCALL(NI64, Cardset_104050)(TY55526* S_104052) {
NI64 Result_104752;
NI I_104761;
NI HEX3Atmp_104843;
NI LOC1;
NI Res_104845;
NI64 LOC6;
NI64 LOC7;
Result_104752 = 0;
Result_104752 = 0;
I_104761 = 0;
HEX3Atmp_104843 = 0;
LOC1 = Sonslen_55804(S_104052);
HEX3Atmp_104843 = (NI64)(LOC1 - 1);
Res_104845 = 0;
Res_104845 = 0;
while (1) {
if (!(Res_104845 <= HEX3Atmp_104843)) goto LA2;
I_104761 = Res_104845;
if (!((*(*S_104052).KindU.S6.Sons->data[I_104761]).Kind == ((NU8) 35))) goto LA4;
LOC6 = Getordvalue_97109((*(*S_104052).KindU.S6.Sons->data[I_104761]).KindU.S6.Sons->data[1]);
LOC7 = Getordvalue_97109((*(*S_104052).KindU.S6.Sons->data[I_104761]).KindU.S6.Sons->data[0]);
Result_104752 = (NI64)((NI64)((NI64)(Result_104752 + LOC6) - LOC7) + 1);
goto LA3;
LA4: ;
Result_104752 += 1;
LA3: ;
Res_104845 += 1;
} LA2: ;
return Result_104752;
}
N_NIMCALL(NIM_BOOL, Containssets_104042)(TY55526* A_104044, TY55526* B_104045) {
NIM_BOOL Result_104735;
TY103008* X_104736;
TY103008* Y_104737;
Result_104735 = 0;
X_104736 = 0;
Y_104737 = 0;
Tobitset_104001(A_104044, &X_104736);
Tobitset_104001(B_104045, &Y_104737);
Result_104735 = Bitsetcontains_103053(X_104736, Y_104737);
return Result_104735;
}
N_NIMCALL(NIM_BOOL, Equalsets_104046)(TY55526* A_104048, TY55526* B_104049) {
NIM_BOOL Result_104744;
TY103008* X_104745;
TY103008* Y_104746;
Result_104744 = 0;
X_104745 = 0;
Y_104746 = 0;
Tobitset_104001(A_104048, &X_104745);
Tobitset_104001(B_104049, &Y_104746);
Result_104744 = Bitsetequals_103049(X_104745, Y_104746);
return Result_104744;
}
N_NIMCALL(TY55526*, Intersectsets_104034)(TY55526* A_104036, TY55526* B_104037) {
TY55526* Result_104725;
Result_104725 = 0;
Result_104725 = Nodesetop_104697(A_104036, B_104037, ((NU8) 3));
return Result_104725;
}
N_NIMCALL(TY55526*, Unionsets_104026)(TY55526* A_104028, TY55526* B_104029) {
TY55526* Result_104715;
Result_104715 = 0;
Result_104715 = Nodesetop_104697(A_104028, B_104029, ((NU8) 0));
return Result_104715;
}
N_NIMCALL(TY55526*, Symdiffsets_104038)(TY55526* A_104040, TY55526* B_104041) {
TY55526* Result_104730;
Result_104730 = 0;
Result_104730 = Nodesetop_104697(A_104040, B_104041, ((NU8) 2));
return Result_104730;
}
N_NIMCALL(NIM_BOOL, Overlap_104006)(TY55526* A_104008, TY55526* B_104009) {
NIM_BOOL Result_104179;
NIM_BOOL LOC7;
NIM_BOOL LOC8;
NIM_BOOL LOC11;
NIM_BOOL LOC13;
NIM_BOOL LOC18;
Result_104179 = 0;
if (!((*A_104008).Kind == ((NU8) 35))) goto LA2;
if (!((*B_104009).Kind == ((NU8) 35))) goto LA5;
LOC8 = Levalue_55865((*A_104008).KindU.S6.Sons->data[0], (*B_104009).KindU.S6.Sons->data[1]);
if (!(LOC8)) goto LA9;
LOC8 = Levalue_55865((*B_104009).KindU.S6.Sons->data[1], (*A_104008).KindU.S6.Sons->data[1]);
LA9: ;
LOC7 = LOC8;
if (LOC7) goto LA10;
LOC11 = Levalue_55865((*A_104008).KindU.S6.Sons->data[0], (*B_104009).KindU.S6.Sons->data[0]);
if (!(LOC11)) goto LA12;
LOC11 = Levalue_55865((*B_104009).KindU.S6.Sons->data[0], (*A_104008).KindU.S6.Sons->data[1]);
LA12: ;
LOC7 = LOC11;
LA10: ;
Result_104179 = LOC7;
goto LA4;
LA5: ;
LOC13 = Levalue_55865((*A_104008).KindU.S6.Sons->data[0], B_104009);
if (!(LOC13)) goto LA14;
LOC13 = Levalue_55865(B_104009, (*A_104008).KindU.S6.Sons->data[1]);
LA14: ;
Result_104179 = LOC13;
LA4: ;
goto LA1;
LA2: ;
if (!((*B_104009).Kind == ((NU8) 35))) goto LA16;
LOC18 = Levalue_55865((*B_104009).KindU.S6.Sons->data[0], A_104008);
if (!(LOC18)) goto LA19;
LOC18 = Levalue_55865(A_104008, (*B_104009).KindU.S6.Sons->data[1]);
LA19: ;
Result_104179 = LOC18;
goto LA15;
LA16: ;
Result_104179 = Samevalue_55861(A_104008, B_104009);
LA15: ;
LA1: ;
return Result_104179;
}
N_NIMCALL(NIM_BOOL, Emptyrange_104019)(TY55526* A_104021, TY55526* B_104022) {
NIM_BOOL Result_104896;
NIM_BOOL LOC1;
Result_104896 = 0;
LOC1 = Levalue_55865(A_104021, B_104022);
Result_104896 = !(LOC1);
return Result_104896;
}
N_NOINLINE(void, nimsetsInit)(void) {
}

