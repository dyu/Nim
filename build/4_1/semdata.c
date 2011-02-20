/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY55564 TY55564;
typedef struct TY55562 TY55562;
typedef struct TY55560 TY55560;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY55528 TY55528;
typedef struct TY55548 TY55548;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10802 TY10802;
typedef struct TY10814 TY10814;
typedef struct TY11196 TY11196;
typedef struct TY10818 TY10818;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY107012 TY107012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY105002 TY105002;
typedef struct TY107006 TY107006;
typedef struct TY55526 TY55526;
typedef struct TY60099 TY60099;
typedef struct TY60101 TY60101;
typedef struct TY55530 TY55530;
typedef struct TY55895 TY55895;
typedef struct TY55891 TY55891;
typedef struct TY55893 TY55893;
typedef struct TY43019 TY43019;
typedef struct TY43013 TY43013;
typedef struct TY107002 TY107002;
typedef struct TY55544 TY55544;
typedef struct TY55552 TY55552;
typedef struct TY47538 TY47538;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY52008 TY52008;
typedef struct TY55540 TY55540;
typedef struct TY55550 TY55550;
struct TY55560 {
TY54005* Key;
TNimObject* Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY55564 {
NI Counter;
TY55562* Data;
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY105002 {
  TNimObject Sup;
};
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TY60099 {
NI Tos;
TY60101* Stack;
};
struct TY55895 {
NI Counter;
NI Max;
TY55891* Head;
TY55893* Data;
};
struct TY43019 {
TNimType* m_type;
TY43013* Head;
TY43013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY55526*, TY107032) (TY107012* C_107033, TY55526* N_107034);
typedef N_NIMCALL_PTR(TY55526*, TY107037) (TY107012* C_107038, TY55526* N_107039);
struct TY107012 {
  TY105002 Sup;
TY55548* Module;
TY107006* P;
NI Instcounter;
TY55526* Generics;
NI Lastgenericidx;
TY60099 Tab;
TY55895 Ambiguoussymbols;
TY55528* Converters;
TY43019 Optionstack;
TY43019 Libs;
NIM_BOOL Fromcache;
TY107032 Semconstexpr;
TY107037 Semexpr;
TY55895 Includedfiles;
NimStringDesc* Filename;
TY55530 Userpragmas;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY107002 {
  TY43013 Sup;
NU32 Options;
NU8 Defaultcc;
TY55544* Dynlib;
NU32 Notes;
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
struct TY55544 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55526* Path;
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
struct TY107006 {
TY55548* Owner;
TY55548* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
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
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY55891 {
TY55891* Next;
NI Key;
TY8814 Bits;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY55562 {
  TGenericSeq Sup;
  TY55560 data[SEQ_DECL_SIZE];
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY60101 {
  TGenericSeq Sup;
  TY55530 data[SEQ_DECL_SIZE];
};
struct TY55893 {
  TGenericSeq Sup;
  TY55891* data[SEQ_DECL_SIZE];
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
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
N_NIMCALL(void, Initidtable_55755)(TY55564* X_55758);
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
N_NIMCALL(void, objectInit)(void* Dest_19676, TNimType* Typ_19677);
N_NIMCALL(void, Initsymtab_60103)(TY60099* Tab_60106);
N_NIMCALL(void, Intsetinit_55919)(TY55895* S_55922);
N_NIMCALL(void, Initlinkedlist_43031)(TY43019* List_43034);
N_NIMCALL(void, Append_43035)(TY43019* List_43038, TY43013* Entry_43039);
N_NIMCALL(TY107002*, Newoptionentry_107056)(void);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
N_NIMCALL(TY55526*, Newnode_55711)(NU8 Kind_55713);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void, Initstrtable_55747)(TY55530* X_55750);
N_NIMCALL(TY55552*, Newtype_55707)(NU8 Kind_55709, TY55548* Owner_55710);
N_NIMCALL(TY55548*, Getcurrowner_107092)(void);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(void, Illformedast_107403)(TY55526* N_107405);
N_NIMCALL(void, Globalerror_48139)(TY47538 Info_48141, NU8 Msg_48142, NimStringDesc* Arg_48143);
N_NIMCALL(NimStringDesc*, Rendertree_85042)(TY55526* N_85044, NU8 Renderflags_85047);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18842, NI Elemsize_18843);
N_NIMCALL(void, Localerror_48144)(TY47538 Info_48146, NU8 Msg_48147, NimStringDesc* Arg_48148);
N_NIMCALL(void, Internalerror_48163)(NimStringDesc* Errmsg_48165);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19003, NI Elemsize_19004, NI Newlen_19005);
N_NIMCALL(TY55526*, Newnodei_55738)(NU8 Kind_55740, TY47538 Info_55741);
N_NIMCALL(void, Addson_55824)(TY55526* Father_55826, TY55526* Son_55827);
N_NIMCALL(TY55526*, Newintnode_55714)(NU8 Kind_55716, NI64 Intval_55717);
N_NIMCALL(TY55552*, Newtypes_107077)(NU8 Kind_107079, TY107012* C_107080);
N_NIMCALL(void, Addson_55828)(TY55552* Father_55830, TY55552* Son_55831);
N_NIMCALL(TY55552*, Getsystype_102008)(NU8 Kind_102010);
STRING_LITERAL(TMP196108, "", 0);
STRING_LITERAL(TMP196126, "owner is nil", 12);
STRING_LITERAL(TMP196128, "popOwner", 8);
STRING_LITERAL(TMP196136, "makeVarType", 11);
STRING_LITERAL(TMP196212, "makePtrType", 11);
TY55564 Ginsttypes_107045;
TY55528* Gowners_107116;
extern TNimType* NTI55528; /* TSymSeq */
extern TY11196 Gch_11214;
extern TNimType* NTI107010; /* PContext */
extern TNimType* NTI107012; /* TContext */
extern TNimType* NTI107004; /* POptionEntry */
extern TNimType* NTI107002; /* TOptionEntry */
extern NU32 Goptions_46077;
extern NU32 Gnotes_47564;
extern TNimType* NTI55546; /* PLib */
extern TNimType* NTI55544; /* TLib */
extern TNimType* NTI107008; /* PProcCon */
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
Result_11615 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11614))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
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
N_NIMCALL(TY107002*, Newoptionentry_107056)(void) {
TY107002* Result_107204;
Result_107204 = 0;
Result_107204 = (TY107002*) newObj(NTI107004, sizeof(TY107002));
(*Result_107204).Sup.Sup.m_type = NTI107002;
(*Result_107204).Options = Goptions_46077;
(*Result_107204).Defaultcc = ((NU8) 0);
asgnRefNoCycle((void**) &(*Result_107204).Dynlib, NIM_NIL);
(*Result_107204).Notes = Gnotes_47564;
return Result_107204;
}
N_NIMCALL(TY107012*, Newcontext_107046)(TY55548* Module_107048, NimStringDesc* Nimfile_107049) {
TY107012* Result_107224;
TY107002* LOC1;
Result_107224 = 0;
Result_107224 = (TY107012*) newObj(NTI107010, sizeof(TY107012));
objectInit(Result_107224, NTI107012);
Initsymtab_60103(&(*Result_107224).Tab);
Intsetinit_55919(&(*Result_107224).Ambiguoussymbols);
Initlinkedlist_43031(&(*Result_107224).Optionstack);
Initlinkedlist_43031(&(*Result_107224).Libs);
LOC1 = 0;
LOC1 = Newoptionentry_107056();
Append_43035(&(*Result_107224).Optionstack, &LOC1->Sup);
asgnRef((void**) &(*Result_107224).Module, Module_107048);
asgnRefNoCycle((void**) &(*Result_107224).Generics, Newnode_55711(((NU8) 101)));
asgnRef((void**) &(*Result_107224).Converters, (TY55528*) newSeq(NTI55528, 0));
asgnRefNoCycle((void**) &(*Result_107224).Filename, copyString(Nimfile_107049));
Intsetinit_55919(&(*Result_107224).Includedfiles);
Initstrtable_55747(&(*Result_107224).Userpragmas);
return Result_107224;
}
N_NIMCALL(TY55548*, Getcurrowner_107092)(void) {
TY55548* Result_107119;
Result_107119 = 0;
Result_107119 = Gowners_107116->data[(Gowners_107116->Sup.len-1)];
return Result_107119;
}
N_NIMCALL(TY55552*, Newtypes_107077)(NU8 Kind_107079, TY107012* C_107080) {
TY55552* Result_107389;
TY55548* LOC1;
Result_107389 = 0;
LOC1 = 0;
LOC1 = Getcurrowner_107092();
Result_107389 = Newtype_55707(Kind_107079, LOC1);
return Result_107389;
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
N_NIMCALL(void, Illformedast_107403)(TY55526* N_107405) {
NimStringDesc* LOC1;
LOC1 = 0;
LOC1 = Rendertree_85042(N_107405, 4);
Globalerror_48139((*N_107405).Info, ((NU8) 1), LOC1);
}
N_NIMCALL(void, Checksonslen_107407)(TY55526* N_107409, NI Length_107410) {
NI LOC2;
LOC2 = Sonslen_55804(N_107409);
if (!!((LOC2 == Length_107410))) goto LA3;
Illformedast_107403(N_107409);
LA3: ;
}
N_NIMCALL(void, Checkminsonslen_107413)(TY55526* N_107415, NI Length_107416) {
NI LOC2;
LOC2 = Sonslen_55804(N_107415);
if (!(LOC2 < Length_107416)) goto LA3;
Illformedast_107403(N_107415);
LA3: ;
}
N_NIMCALL(void, Pushowner_107094)(TY55548* Owner_107096) {
Gowners_107116 = (TY55528*) incrSeq(&(Gowners_107116)->Sup, sizeof(TY55548*));
asgnRef((void**) &Gowners_107116->data[Gowners_107116->Sup.len-1], Owner_107096);
}
N_NIMCALL(TY107002*, Lastoptionentry_107053)(TY107012* C_107055) {
TY107002* Result_107171;
Result_107171 = 0;
Result_107171 = ((TY107002*) ((*C_107055).Optionstack.Tail));
return Result_107171;
}
N_NIMCALL(TY55544*, Newlib_107062)(NU8 Kind_107064) {
TY55544* Result_107322;
Result_107322 = 0;
Result_107322 = (TY55544*) newObj(NTI55546, sizeof(TY55544));
(*Result_107322).Sup.Sup.m_type = NTI55544;
(*Result_107322).Kind = Kind_107064;
return Result_107322;
}
N_NIMCALL(void, Addtolib_107065)(TY55544* Lib_107067, TY55548* Sym_107068) {
if (!!(((*Sym_107068).Annex == NIM_NIL))) goto LA2;
Localerror_48144((*Sym_107068).Info, ((NU8) 26), ((NimStringDesc*) &TMP196108));
LA2: ;
asgnRefNoCycle((void**) &(*Sym_107068).Annex, Lib_107067);
}
N_NIMCALL(TY107006*, Newproccon_107050)(TY55548* Owner_107052) {
TY107006* Result_107175;
Result_107175 = 0;
if (!(Owner_107052 == NIM_NIL)) goto LA2;
Internalerror_48163(((NimStringDesc*) &TMP196126));
LA2: ;
Result_107175 = (TY107006*) newObj(NTI107008, sizeof(TY107006));
asgnRef((void**) &(*Result_107175).Owner, Owner_107052);
return Result_107175;
}
N_NIMCALL(void, Popowner_107097)(void) {
NI Length_107153;
Length_107153 = 0;
Length_107153 = Gowners_107116->Sup.len;
if (!(Length_107153 <= 0)) goto LA2;
Internalerror_48163(((NimStringDesc*) &TMP196128));
LA2: ;
Gowners_107116 = (TY55528*) setLengthSeq(&(Gowners_107116)->Sup, sizeof(TY55548*), (NI32)(Length_107153 - 1));
}
N_NIMCALL(TY55552*, Makerangetype_107086)(TY107012* C_107088, NI64 First_107089, NI64 Last_107090, TY47538 Info_107091) {
TY55552* Result_107401;
TY55526* N_107402;
TY55526* LOC1;
TY55526* LOC2;
TY55552* LOC3;
Result_107401 = 0;
N_107402 = 0;
N_107402 = Newnodei_55738(((NU8) 35), Info_107091);
LOC1 = 0;
LOC1 = Newintnode_55714(((NU8) 6), First_107089);
Addson_55824(N_107402, LOC1);
LOC2 = 0;
LOC2 = Newintnode_55714(((NU8) 6), Last_107090);
Addson_55824(N_107402, LOC2);
Result_107401 = Newtypes_107077(((NU8) 20), C_107088);
asgnRefNoCycle((void**) &(*Result_107401).N, N_107402);
LOC3 = 0;
LOC3 = Getsystype_102008(((NU8) 31));
Addson_55828(Result_107401, LOC3);
return Result_107401;
}
N_NIMCALL(TY55552*, Makevartype_107073)(TY107012* C_107075, TY55552* Basetype_107076) {
TY55552* Result_107373;
Result_107373 = 0;
if (!(Basetype_107076 == NIM_NIL)) goto LA2;
Internalerror_48163(((NimStringDesc*) &TMP196136));
LA2: ;
Result_107373 = Newtypes_107077(((NU8) 23), C_107075);
Addson_55828(Result_107373, Basetype_107076);
return Result_107373;
}
N_NIMCALL(void, Addconverter_107058)(TY107012* C_107060, TY55548* Conv_107061) {
NI L_107277;
NI I_107301;
NI HEX3Atmp_107316;
NI Res_107318;
L_107277 = 0;
L_107277 = (*C_107060).Converters->Sup.len;
I_107301 = 0;
HEX3Atmp_107316 = 0;
HEX3Atmp_107316 = (NI32)(L_107277 - 1);
Res_107318 = 0;
Res_107318 = 0;
while (1) {
if (!(Res_107318 <= HEX3Atmp_107316)) goto LA1;
I_107301 = Res_107318;
if (!((*(*C_107060).Converters->data[I_107301]).Sup.Id == (*Conv_107061).Sup.Id)) goto LA3;
goto BeforeRet;
LA3: ;
Res_107318 += 1;
} LA1: ;
(*C_107060).Converters = (TY55528*) setLengthSeq(&((*C_107060).Converters)->Sup, sizeof(TY55548*), (NI32)(L_107277 + 1));
asgnRef((void**) &(*C_107060).Converters->data[L_107277], Conv_107061);
BeforeRet: ;
}
N_NIMCALL(TY55552*, Makeptrtype_107069)(TY107012* C_107071, TY55552* Basetype_107072) {
TY55552* Result_107357;
Result_107357 = 0;
if (!(Basetype_107072 == NIM_NIL)) goto LA2;
Internalerror_48163(((NimStringDesc*) &TMP196212));
LA2: ;
Result_107357 = Newtypes_107077(((NU8) 21), C_107071);
Addson_55828(Result_107357, Basetype_107072);
return Result_107357;
}
N_NOINLINE(void, semdataInit)(void) {
asgnRef((void**) &Gowners_107116, (TY55528*) newSeq(NTI55528, 0));
Initidtable_55755(&Ginsttypes_107045);
}

