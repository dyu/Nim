/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY160157 TY160157;
typedef struct TY55528 TY55528;
typedef struct TY55548 TY55548;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY55552 TY55552;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TY54011 TY54011;
typedef struct TY47538 TY47538;
typedef struct TY55530 TY55530;
typedef struct TY55526 TY55526;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY55550 TY55550;
typedef struct TY55520 TY55520;
typedef struct TY55895 TY55895;
typedef struct TY55891 TY55891;
typedef struct TY55893 TY55893;
typedef struct TY43013 TY43013;
struct TGenericSeq {
NI len;
NI space;
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
struct TNimObject {
TNimType* m_type;
};
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY47538 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TY55540 {
NU8 K;
NU8 S;
NU8 Flags;
TY55552* T;
TY52008* R;
NI A;
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
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
typedef TY55548* TY160282[1];
struct TY55895 {
NI Counter;
NI Max;
TY55891* Head;
TY55893* Data;
};
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
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
struct TY55891 {
TY55891* Next;
NI Key;
TY8814 Bits;
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY160157 {
  TGenericSeq Sup;
  TY55528* data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY55893 {
  TGenericSeq Sup;
  TY55891* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NIM_BOOL, Samemethodbucket_160159)(TY55548* A_160161, TY55548* B_160162);
static N_INLINE(NI, Sonslen_55807)(TY55552* N_55809);
N_NIMCALL(NIM_BOOL, Sametypeornil_97052)(TY55552* A_97054, TY55552* B_97055);
N_NIMCALL(TY55552*, Skiptypes_97087)(TY55552* T_97089, NU64 Kinds_97090);
N_NIMCALL(NIM_BOOL, Sametype_97048)(TY55552* X_97050, TY55552* Y_97051);
N_NIMCALL(NI, Inheritancediff_97121)(TY55552* A_97123, TY55552* B_97124);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18842, NI Elemsize_18843);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11080)(TY10814* S_11083, TY10802* Cell_11084);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
N_NIMCALL(void, Addson_55824)(TY55526* Father_55826, TY55526* Son_55827);
static N_INLINE(TY55526*, Lastson_55810)(TY55526* N_55812);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(void, genericSeqAssign)(void* Dest_19652, void* Src_19653, TNimType* Mt_19654);
N_NIMCALL(TY55548*, Copysym_55776)(TY55548* S_55778, NIM_BOOL Keepid_55779);
N_NIMCALL(TY55552*, Copytype_55771)(TY55552* T_55773, TY55548* Owner_55774, NIM_BOOL Keepid_55775);
N_NIMCALL(TY55526*, Copytree_55852)(TY55526* Src_55854);
N_NIMCALL(TY55526*, Newsymnode_55735)(TY55548* Sym_55737);
N_NIMCALL(TY55526*, Genconv_160004)(TY55526* N_160006, TY55552* D_160007, NIM_BOOL Downcast_160008);
N_NIMCALL(void, Internalerror_48159)(TY47538 Info_48161, NimStringDesc* Errmsg_48162);
N_NIMCALL(TY55526*, Newnodeit_55742)(NU8 Kind_55744, TY47538 Info_55745, TY55552* Typ_55746);
N_NIMCALL(TY55526*, Newnode_55711)(NU8 Kind_55713);
N_NIMCALL(void, Intsetinit_55919)(TY55895* S_55922);
N_NIMCALL(NIM_BOOL, Relevantcol_160385)(TY55528* Methods_160387, NI Col_160388);
N_NIMCALL(void, Intsetincl_55909)(TY55895* S_55912, NI Key_55913);
N_NIMCALL(void, Sortbucket_160435)(TY55528** A_160438, TY55895 Relevantcols_160439);
N_NIMCALL(NI, Cmpsignatures_160412)(TY55548* A_160414, TY55548* B_160415, TY55895 Relevantcols_160416);
N_NIMCALL(NIM_BOOL, Intsetcontains_55905)(TY55895 S_55907, NI Key_55908);
N_NIMCALL(TY55548*, Gendispatcher_160478)(TY55528* Methods_160480, TY55895 Relevantcols_160481);
N_NIMCALL(TY55526*, Newnodei_55738)(NU8 Kind_55740, TY47538 Info_55741);
N_NIMCALL(TY55548*, Getsyssym_102024)(NimStringDesc* Name_102026);
N_NIMCALL(TY55552*, Getsystype_102008)(NU8 Kind_102010);
STRING_LITERAL(TMP196227, "cgmeth.genConv", 14);
STRING_LITERAL(TMP196228, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP196229, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP196764, "and", 3);
STRING_LITERAL(TMP196765, "is", 2);
TY160157* Gmethods_160158;
extern TNimType* NTI160157; /* seq[TSymSeq] */
extern TY11196 Gch_11214;
extern TNimType* NTI55528; /* TSymSeq */
extern TY55526* Emptynode_55858;
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
static N_INLINE(NI, Sonslen_55807)(TY55552* N_55809) {
NI Result_56744;
Result_56744 = 0;
if (!(*N_55809).Sons == 0) goto LA2;
Result_56744 = 0;
goto LA1;
LA2: ;
Result_56744 = (*N_55809).Sons->Sup.len;
LA1: ;
return Result_56744;
}
N_NIMCALL(NIM_BOOL, Samemethodbucket_160159)(TY55548* A_160161, TY55548* B_160162) {
NIM_BOOL Result_160163;
TY55552* Aa_160164;
TY55552* Bb_160165;
NI LOC5;
NI LOC6;
NIM_BOOL LOC10;
NI I_160178;
NI HEX3Atmp_160224;
NI LOC13;
NI Res_160226;
NIM_BOOL LOC17;
NIM_BOOL LOC22;
NIM_BOOL LOC24;
NIM_BOOL LOC25;
NI LOC28;
Result_160163 = 0;
Aa_160164 = 0;
Bb_160165 = 0;
Result_160163 = NIM_FALSE;
if (!!(((*(*A_160161).Name).Sup.Id == (*(*B_160162).Name).Sup.Id))) goto LA2;
goto BeforeRet;
LA2: ;
LOC5 = Sonslen_55807((*A_160161).Typ);
LOC6 = Sonslen_55807((*B_160162).Typ);
if (!!((LOC5 == LOC6))) goto LA7;
goto BeforeRet;
LA7: ;
LOC10 = Sametypeornil_97052((*(*A_160161).Typ).Sons->data[0], (*(*B_160162).Typ).Sons->data[0]);
if (!!(LOC10)) goto LA11;
goto BeforeRet;
LA11: ;
I_160178 = 0;
HEX3Atmp_160224 = 0;
LOC13 = Sonslen_55807((*A_160161).Typ);
HEX3Atmp_160224 = (NI32)(LOC13 - 1);
Res_160226 = 0;
Res_160226 = 1;
while (1) {
if (!(Res_160226 <= HEX3Atmp_160224)) goto LA14;
I_160178 = Res_160226;
Aa_160164 = (*(*A_160161).Typ).Sons->data[I_160178];
Bb_160165 = (*(*B_160162).Typ).Sons->data[I_160178];
while (1) {
Aa_160164 = Skiptypes_97087(Aa_160164, 2048);
Bb_160165 = Skiptypes_97087(Bb_160165, 2048);
LOC17 = ((*Aa_160164).Kind == (*Bb_160165).Kind);
if (!(LOC17)) goto LA18;
LOC17 = ((*Aa_160164).Kind == ((NU8) 23) || (*Aa_160164).Kind == ((NU8) 21) || (*Aa_160164).Kind == ((NU8) 22));
LA18: ;
if (!LOC17) goto LA19;
Aa_160164 = (*Aa_160164).Sons->data[0];
Bb_160165 = (*Bb_160165).Sons->data[0];
goto LA16;
LA19: ;
goto LA15;
LA16: ;
} LA15: ;
LOC22 = Sametype_97048(Aa_160164, Bb_160165);
if (LOC22) goto LA23;
LOC25 = ((*Aa_160164).Kind == ((NU8) 17));
if (!(LOC25)) goto LA26;
LOC25 = ((*Bb_160165).Kind == ((NU8) 17));
LA26: ;
LOC24 = LOC25;
if (!(LOC24)) goto LA27;
LOC28 = Inheritancediff_97121(Bb_160165, Aa_160164);
LOC24 = (LOC28 < 0);
LA27: ;
LOC22 = LOC24;
LA23: ;
if (!LOC22) goto LA29;
goto LA21;
LA29: ;
goto BeforeRet;
LA21: ;
Res_160226 += 1;
} LA14: ;
Result_160163 = NIM_TRUE;
BeforeRet: ;
return Result_160163;
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
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_13003).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
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
static N_INLINE(TY55526*, Lastson_55810)(TY55526* N_55812) {
TY55526* Result_57841;
NI LOC1;
Result_57841 = 0;
LOC1 = Sonslen_55804(N_55812);
Result_57841 = (*N_55812).KindU.S6.Sons->data[(NI32)(LOC1 - 1)];
return Result_57841;
}
N_NIMCALL(void, Methoddef_160227)(TY55548* S_160229) {
NI L_160230;
NI Q_160231;
TY55548* Disp_160232;
NI I_160251;
NI HEX3Atmp_160382;
NI Res_160384;
NIM_BOOL LOC3;
TY55526* LOC6;
TY55528* LOC7;
TY160282 LOC8;
TY55526* LOC15;
L_160230 = 0;
Q_160231 = 0;
Disp_160232 = 0;
L_160230 = Gmethods_160158->Sup.len;
I_160251 = 0;
HEX3Atmp_160382 = 0;
HEX3Atmp_160382 = (NI32)(L_160230 - 1);
Res_160384 = 0;
Res_160384 = 0;
while (1) {
if (!(Res_160384 <= HEX3Atmp_160382)) goto LA1;
I_160251 = Res_160384;
LOC3 = Samemethodbucket_160159(Gmethods_160158->data[I_160251]->data[0], S_160229);
if (!LOC3) goto LA4;
Gmethods_160158->data[I_160251] = (TY55528*) incrSeq(&(Gmethods_160158->data[I_160251])->Sup, sizeof(TY55548*));
asgnRef((void**) &Gmethods_160158->data[I_160251]->data[Gmethods_160158->data[I_160251]->Sup.len-1], S_160229);
LOC6 = 0;
LOC6 = Lastson_55810((*Gmethods_160158->data[I_160251]->data[0]).Ast);
Addson_55824((*S_160229).Ast, LOC6);
goto BeforeRet;
LA4: ;
Res_160384 += 1;
} LA1: ;
LOC7 = 0;
LOC7 = (TY55528*) newSeq(NTI55528, 1);
memset((void*)&LOC8, 0, sizeof(LOC8));
LOC8[0] = S_160229;
asgnRef((void**) &LOC7->data[0], LOC8[0]);
Gmethods_160158 = (TY160157*) incrSeq(&(Gmethods_160158)->Sup, sizeof(TY55528*));
genericSeqAssign(&Gmethods_160158->data[Gmethods_160158->Sup.len-1], LOC7, NTI55528);
Disp_160232 = Copysym_55776(S_160229, NIM_FALSE);
asgnRef((void**) &(*Disp_160232).Typ, Copytype_55771((*Disp_160232).Typ, (*(*Disp_160232).Typ).Owner, NIM_FALSE));
if (!((*(*Disp_160232).Typ).Callconv == ((NU8) 5))) goto LA10;
(*(*Disp_160232).Typ).Callconv = ((NU8) 0);
LA10: ;
asgnRefNoCycle((void**) &(*Disp_160232).Ast, Copytree_55852((*S_160229).Ast));
asgnRefNoCycle((void**) &(*(*Disp_160232).Ast).KindU.S6.Sons->data[4], Emptynode_55858);
if (!!(((*(*S_160229).Typ).Sons->data[0] == NIM_NIL))) goto LA13;
asgnRef((void**) &(*(*(*Disp_160232).Ast).KindU.S6.Sons->data[5]).KindU.S4.Sym, Copysym_55776((*(*(*S_160229).Ast).KindU.S6.Sons->data[5]).KindU.S4.Sym, NIM_FALSE));
LA13: ;
LOC15 = 0;
LOC15 = Newsymnode_55735(Disp_160232);
Addson_55824((*S_160229).Ast, LOC15);
BeforeRet: ;
}
N_NIMCALL(TY55526*, Genconv_160004)(TY55526* N_160006, TY55552* D_160007, NIM_BOOL Downcast_160008) {
TY55526* Result_160009;
TY55552* Dest_160010;
TY55552* Source_160011;
NI Diff_160012;
NIM_BOOL LOC2;
Result_160009 = 0;
Dest_160010 = 0;
Source_160011 = 0;
Diff_160012 = 0;
Dest_160010 = Skiptypes_97087(D_160007, 14723072);
Source_160011 = Skiptypes_97087((*N_160006).Typ, 14723072);
LOC2 = ((*Source_160011).Kind == ((NU8) 17));
if (!(LOC2)) goto LA3;
LOC2 = ((*Dest_160010).Kind == ((NU8) 17));
LA3: ;
if (!LOC2) goto LA4;
Diff_160012 = Inheritancediff_97121(Dest_160010, Source_160011);
if (!(Diff_160012 == 2147483647)) goto LA7;
Internalerror_48159((*N_160006).Info, ((NimStringDesc*) &TMP196227));
LA7: ;
if (!(Diff_160012 < 0)) goto LA10;
Result_160009 = Newnodeit_55742(((NU8) 56), (*N_160006).Info, D_160007);
Addson_55824(Result_160009, N_160006);
if (!Downcast_160008) goto LA13;
Internalerror_48159((*N_160006).Info, ((NimStringDesc*) &TMP196228));
LA13: ;
goto LA9;
LA10: ;
if (!(0 < Diff_160012)) goto LA15;
Result_160009 = Newnodeit_55742(((NU8) 55), (*N_160006).Info, D_160007);
Addson_55824(Result_160009, N_160006);
if (!!(Downcast_160008)) goto LA18;
Internalerror_48159((*N_160006).Info, ((NimStringDesc*) &TMP196229));
LA18: ;
goto LA9;
LA15: ;
Result_160009 = N_160006;
LA9: ;
goto LA1;
LA4: ;
Result_160009 = N_160006;
LA1: ;
return Result_160009;
}
N_NIMCALL(TY55526*, Methodcall_160041)(TY55526* N_160043) {
TY55526* Result_160044;
TY55548* Disp_160045;
TY55526* LOC1;
NI I_160129;
NI HEX3Atmp_160154;
NI LOC2;
NI Res_160156;
Result_160044 = 0;
Disp_160045 = 0;
Result_160044 = N_160043;
LOC1 = 0;
LOC1 = Lastson_55810((*(*(*Result_160044).KindU.S6.Sons->data[0]).KindU.S4.Sym).Ast);
Disp_160045 = (*LOC1).KindU.S4.Sym;
asgnRef((void**) &(*(*Result_160044).KindU.S6.Sons->data[0]).KindU.S4.Sym, Disp_160045);
I_160129 = 0;
HEX3Atmp_160154 = 0;
LOC2 = Sonslen_55804(Result_160044);
HEX3Atmp_160154 = (NI32)(LOC2 - 1);
Res_160156 = 0;
Res_160156 = 1;
while (1) {
if (!(Res_160156 <= HEX3Atmp_160154)) goto LA3;
I_160129 = Res_160156;
asgnRefNoCycle((void**) &(*Result_160044).KindU.S6.Sons->data[I_160129], Genconv_160004((*Result_160044).KindU.S6.Sons->data[I_160129], (*(*Disp_160045).Typ).Sons->data[I_160129], NIM_TRUE));
Res_160156 += 1;
} LA3: ;
return Result_160044;
}
N_NIMCALL(NIM_BOOL, Relevantcol_160385)(TY55528* Methods_160387, NI Col_160388) {
NIM_BOOL Result_160389;
TY55552* T_160390;
TY55552* LOC2;
NI I_160408;
NI HEX3Atmp_160409;
NI Res_160411;
NIM_BOOL LOC7;
Result_160389 = 0;
T_160390 = 0;
T_160390 = (*(*Methods_160387->data[0]).Typ).Sons->data[Col_160388];
Result_160389 = NIM_FALSE;
LOC2 = 0;
LOC2 = Skiptypes_97087(T_160390, 14682112);
if (!((*LOC2).Kind == ((NU8) 17))) goto LA3;
I_160408 = 0;
HEX3Atmp_160409 = 0;
HEX3Atmp_160409 = (Methods_160387->Sup.len-1);
Res_160411 = 0;
Res_160411 = 1;
while (1) {
if (!(Res_160411 <= HEX3Atmp_160409)) goto LA5;
I_160408 = Res_160411;
LOC7 = Sametype_97048((*(*Methods_160387->data[I_160408]).Typ).Sons->data[Col_160388], T_160390);
if (!!(LOC7)) goto LA8;
Result_160389 = NIM_TRUE;
goto BeforeRet;
LA8: ;
Res_160411 += 1;
} LA5: ;
LA3: ;
BeforeRet: ;
return Result_160389;
}
N_NIMCALL(NI, Cmpsignatures_160412)(TY55548* A_160414, TY55548* B_160415, TY55895 Relevantcols_160416) {
NI Result_160417;
NI D_160418;
TY55552* Aa_160419;
TY55552* Bb_160420;
NI Col_160429;
NI HEX3Atmp_160432;
NI LOC1;
NI Res_160434;
NIM_BOOL LOC4;
Result_160417 = 0;
D_160418 = 0;
Aa_160419 = 0;
Bb_160420 = 0;
Result_160417 = 0;
Col_160429 = 0;
HEX3Atmp_160432 = 0;
LOC1 = Sonslen_55807((*A_160414).Typ);
HEX3Atmp_160432 = (NI32)(LOC1 - 1);
Res_160434 = 0;
Res_160434 = 1;
while (1) {
if (!(Res_160434 <= HEX3Atmp_160432)) goto LA2;
Col_160429 = Res_160434;
LOC4 = Intsetcontains_55905(Relevantcols_160416, Col_160429);
if (!LOC4) goto LA5;
Aa_160419 = Skiptypes_97087((*(*A_160414).Typ).Sons->data[Col_160429], 14682112);
Bb_160420 = Skiptypes_97087((*(*B_160415).Typ).Sons->data[Col_160429], 14682112);
D_160418 = Inheritancediff_97121(Aa_160419, Bb_160420);
if (!!((D_160418 == 2147483647))) goto LA8;
Result_160417 = D_160418;
goto BeforeRet;
LA8: ;
LA5: ;
Res_160434 += 1;
} LA2: ;
BeforeRet: ;
return Result_160417;
}
N_NIMCALL(void, Sortbucket_160435)(TY55528** A_160438, TY55895 Relevantcols_160439) {
NI N_160440;
NI J_160441;
NI H_160442;
TY55548* V_160443;
NI I_160466;
NI HEX3Atmp_160475;
NI Res_160477;
NI LOC8;
N_160440 = 0;
J_160441 = 0;
H_160442 = 0;
V_160443 = 0;
N_160440 = (*A_160438)->Sup.len;
H_160442 = 1;
while (1) {
H_160442 = (NI32)((NI32)(3 * H_160442) + 1);
if (!(N_160440 < H_160442)) goto LA3;
goto LA1;
LA3: ;
} LA1: ;
while (1) {
H_160442 = (NI32)(H_160442 / 3);
I_160466 = 0;
HEX3Atmp_160475 = 0;
HEX3Atmp_160475 = (NI32)(N_160440 - 1);
Res_160477 = 0;
Res_160477 = H_160442;
while (1) {
if (!(Res_160477 <= HEX3Atmp_160475)) goto LA6;
I_160466 = Res_160477;
V_160443 = (*A_160438)->data[I_160466];
J_160441 = I_160466;
while (1) {
LOC8 = Cmpsignatures_160412((*A_160438)->data[(NI32)(J_160441 - H_160442)], V_160443, Relevantcols_160439);
if (!(0 <= LOC8)) goto LA7;
asgnRef((void**) &(*A_160438)->data[J_160441], (*A_160438)->data[(NI32)(J_160441 - H_160442)]);
J_160441 = (NI32)(J_160441 - H_160442);
if (!(J_160441 < H_160442)) goto LA10;
goto LA7;
LA10: ;
} LA7: ;
asgnRef((void**) &(*A_160438)->data[J_160441], V_160443);
Res_160477 += 1;
} LA6: ;
if (!(H_160442 == 1)) goto LA13;
goto LA5;
LA13: ;
} LA5: ;
}
N_NIMCALL(TY55548*, Gendispatcher_160478)(TY55528* Methods_160480, TY55895 Relevantcols_160481) {
TY55548* Result_160482;
TY55526* Disp_160483;
TY55526* Cond_160484;
TY55526* Call_160485;
TY55526* Ret_160486;
TY55526* A_160487;
TY55526* Isn_160488;
TY55548* Base_160489;
TY55548* Curr_160490;
TY55548* Ands_160491;
TY55548* Iss_160492;
NI Paramlen_160493;
TY55526* LOC1;
NI Meth_160514;
NI HEX3Atmp_160645;
NI Res_160647;
NI Col_160523;
NI HEX3Atmp_160639;
NI Res_160641;
NIM_BOOL LOC5;
TY55552* LOC8;
TY55526* LOC9;
TY55526* LOC10;
TY55526* LOC11;
TY55552* LOC15;
TY55526* LOC16;
TY55526* LOC17;
NI Col_160567;
NI HEX3Atmp_160642;
NI Res_160644;
TY55526* LOC19;
TY55526* LOC20;
TY55526* LOC24;
Result_160482 = 0;
Disp_160483 = 0;
Cond_160484 = 0;
Call_160485 = 0;
Ret_160486 = 0;
A_160487 = 0;
Isn_160488 = 0;
Base_160489 = 0;
Curr_160490 = 0;
Ands_160491 = 0;
Iss_160492 = 0;
Paramlen_160493 = 0;
LOC1 = 0;
LOC1 = Lastson_55810((*Methods_160480->data[0]).Ast);
Base_160489 = (*LOC1).KindU.S4.Sym;
Result_160482 = Base_160489;
Paramlen_160493 = Sonslen_55807((*Base_160489).Typ);
Disp_160483 = Newnodei_55738(((NU8) 82), (*Base_160489).Info);
Ands_160491 = Getsyssym_102024(((NimStringDesc*) &TMP196764));
Iss_160492 = Getsyssym_102024(((NimStringDesc*) &TMP196765));
Meth_160514 = 0;
HEX3Atmp_160645 = 0;
HEX3Atmp_160645 = (Methods_160480->Sup.len-1);
Res_160647 = 0;
Res_160647 = 0;
while (1) {
if (!(Res_160647 <= HEX3Atmp_160645)) goto LA2;
Meth_160514 = Res_160647;
Curr_160490 = Methods_160480->data[Meth_160514];
Cond_160484 = NIM_NIL;
Col_160523 = 0;
HEX3Atmp_160639 = 0;
HEX3Atmp_160639 = (NI32)(Paramlen_160493 - 1);
Res_160641 = 0;
Res_160641 = 1;
while (1) {
if (!(Res_160641 <= HEX3Atmp_160639)) goto LA3;
Col_160523 = Res_160641;
LOC5 = Intsetcontains_55905(Relevantcols_160481, Col_160523);
if (!LOC5) goto LA6;
LOC8 = 0;
LOC8 = Getsystype_102008(((NU8) 1));
Isn_160488 = Newnodeit_55742(((NU8) 21), (*Base_160489).Info, LOC8);
LOC9 = 0;
LOC9 = Newsymnode_55735(Iss_160492);
Addson_55824(Isn_160488, LOC9);
LOC10 = 0;
LOC10 = Newsymnode_55735((*(*(*(*Base_160489).Typ).N).KindU.S6.Sons->data[Col_160523]).KindU.S4.Sym);
Addson_55824(Isn_160488, LOC10);
LOC11 = 0;
LOC11 = Newnodeit_55742(((NU8) 4), (*Base_160489).Info, (*(*Curr_160490).Typ).Sons->data[Col_160523]);
Addson_55824(Isn_160488, LOC11);
if (!!((Cond_160484 == NIM_NIL))) goto LA13;
LOC15 = 0;
LOC15 = Getsystype_102008(((NU8) 1));
A_160487 = Newnodeit_55742(((NU8) 21), (*Base_160489).Info, LOC15);
LOC16 = 0;
LOC16 = Newsymnode_55735(Ands_160491);
Addson_55824(A_160487, LOC16);
Addson_55824(A_160487, Cond_160484);
Addson_55824(A_160487, Isn_160488);
Cond_160484 = A_160487;
goto LA12;
LA13: ;
Cond_160484 = Isn_160488;
LA12: ;
LA6: ;
Res_160641 += 1;
} LA3: ;
Call_160485 = Newnodei_55738(((NU8) 21), (*Base_160489).Info);
LOC17 = 0;
LOC17 = Newsymnode_55735(Curr_160490);
Addson_55824(Call_160485, LOC17);
Col_160567 = 0;
HEX3Atmp_160642 = 0;
HEX3Atmp_160642 = (NI32)(Paramlen_160493 - 1);
Res_160644 = 0;
Res_160644 = 1;
while (1) {
if (!(Res_160644 <= HEX3Atmp_160642)) goto LA18;
Col_160567 = Res_160644;
LOC19 = 0;
LOC19 = Newsymnode_55735((*(*(*(*Base_160489).Typ).N).KindU.S6.Sons->data[Col_160567]).KindU.S4.Sym);
LOC20 = 0;
LOC20 = Genconv_160004(LOC19, (*(*Curr_160490).Typ).Sons->data[Col_160567], NIM_FALSE);
Addson_55824(Call_160485, LOC20);
Res_160644 += 1;
} LA18: ;
if (!!(((*(*Base_160489).Typ).Sons->data[0] == NIM_NIL))) goto LA22;
A_160487 = Newnodei_55738(((NU8) 63), (*Base_160489).Info);
LOC24 = 0;
LOC24 = Newsymnode_55735((*(*(*Base_160489).Ast).KindU.S6.Sons->data[5]).KindU.S4.Sym);
Addson_55824(A_160487, LOC24);
Addson_55824(A_160487, Call_160485);
Ret_160486 = Newnodei_55738(((NU8) 96), (*Base_160489).Info);
Addson_55824(Ret_160486, A_160487);
goto LA21;
LA22: ;
Ret_160486 = Call_160485;
LA21: ;
A_160487 = Newnodei_55738(((NU8) 76), (*Base_160489).Info);
Addson_55824(A_160487, Cond_160484);
Addson_55824(A_160487, Ret_160486);
Addson_55824(Disp_160483, A_160487);
Res_160647 += 1;
} LA2: ;
asgnRefNoCycle((void**) &(*(*Result_160482).Ast).KindU.S6.Sons->data[4], Disp_160483);
return Result_160482;
}
N_NIMCALL(TY55526*, Generatemethoddispatchers_160648)(void) {
TY55526* Result_160650;
TY55895 Relevantcols_160651;
NI Bucket_160670;
NI HEX3Atmp_160686;
NI Res_160688;
NI Col_160680;
NI HEX3Atmp_160683;
NI LOC2;
NI Res_160685;
NIM_BOOL LOC5;
TY55548* LOC8;
TY55526* LOC9;
Result_160650 = 0;
memset((void*)&Relevantcols_160651, 0, sizeof(Relevantcols_160651));
Result_160650 = Newnode_55711(((NU8) 101));
Bucket_160670 = 0;
HEX3Atmp_160686 = 0;
HEX3Atmp_160686 = (NI32)(Gmethods_160158->Sup.len - 1);
Res_160688 = 0;
Res_160688 = 0;
while (1) {
if (!(Res_160688 <= HEX3Atmp_160686)) goto LA1;
Bucket_160670 = Res_160688;
Intsetinit_55919(&Relevantcols_160651);
Col_160680 = 0;
HEX3Atmp_160683 = 0;
LOC2 = Sonslen_55807((*Gmethods_160158->data[Bucket_160670]->data[0]).Typ);
HEX3Atmp_160683 = (NI32)(LOC2 - 1);
Res_160685 = 0;
Res_160685 = 1;
while (1) {
if (!(Res_160685 <= HEX3Atmp_160683)) goto LA3;
Col_160680 = Res_160685;
LOC5 = Relevantcol_160385(Gmethods_160158->data[Bucket_160670], Col_160680);
if (!LOC5) goto LA6;
Intsetincl_55909(&Relevantcols_160651, Col_160680);
LA6: ;
Res_160685 += 1;
} LA3: ;
Sortbucket_160435(&Gmethods_160158->data[Bucket_160670], Relevantcols_160651);
LOC8 = 0;
LOC8 = Gendispatcher_160478(Gmethods_160158->data[Bucket_160670], Relevantcols_160651);
LOC9 = 0;
LOC9 = Newsymnode_55735(LOC8);
Addson_55824(Result_160650, LOC9);
Res_160688 += 1;
} LA1: ;
return Result_160650;
}
N_NOINLINE(void, cgmethInit)(void) {
asgnRefNoCycle((void**) &Gmethods_160158, (TY160157*) newSeq(NTI160157, 0));
}

