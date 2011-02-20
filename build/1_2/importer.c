/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY50526 TY50526;
typedef struct TY103012 TY103012;
typedef struct TY50552 TY50552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY42538 TY42538;
typedef struct TY50548 TY50548;
typedef struct TY49011 TY49011;
typedef struct TY50520 TY50520;
typedef struct TY49005 TY49005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY50530 TY50530;
typedef struct TY50528 TY50528;
typedef struct TY50540 TY50540;
typedef struct TY47008 TY47008;
typedef struct TY50544 TY50544;
typedef struct TY55071 TY55071;
typedef struct TY101002 TY101002;
typedef struct TY103006 TY103006;
typedef struct TY55099 TY55099;
typedef struct TY55101 TY55101;
typedef struct TY50895 TY50895;
typedef struct TY50891 TY50891;
typedef struct TY50893 TY50893;
typedef struct TY38019 TY38019;
typedef struct TY38013 TY38013;
typedef struct TY50550 TY50550;
typedef struct TY55084 TY55084;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY42538 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY50526 {
TY50552* Typ;
NimStringDesc* Comment;
TY42538 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY50548* Sym;
} S4;
struct {TY49011* Ident;
} S5;
struct {TY50520* Sons;
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
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
};
struct TY50530 {
TNimType* m_type;
NI Counter;
TY50528* Data;
};
struct TY50540 {
NU8 K;
NU8 S;
NU8 Flags;
TY50552* T;
TY47008* R;
NI A;
};
struct TY50548 {
  TY49005 Sup;
NU8 Kind;
NU8 Magic;
TY50552* Typ;
TY49011* Name;
TY42538 Info;
TY50548* Owner;
NU32 Flags;
TY50530 Tab;
TY50526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY50540 Loc;
TY50544* Annex;
};
typedef N_NIMCALL_PTR(TY50548*, TY101041) (NimStringDesc* Filename_101042);
struct TY55071 {
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
struct TY101002 {
  TNimObject Sup;
};
struct TY55099 {
NI Tos;
TY55101* Stack;
};
struct TY50895 {
NI Counter;
NI Max;
TY50891* Head;
TY50893* Data;
};
struct TY38019 {
TNimType* m_type;
TY38013* Head;
TY38013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY50526*, TY103032) (TY103012* C_103033, TY50526* N_103034);
typedef N_NIMCALL_PTR(TY50526*, TY103037) (TY103012* C_103038, TY50526* N_103039);
struct TY103012 {
  TY101002 Sup;
TY50548* Module;
TY103006* P;
NI Instcounter;
TY50526* Generics;
NI Lastgenericidx;
TY55099 Tab;
TY50895 Ambiguoussymbols;
TY50528* Converters;
TY38019 Optionstack;
TY38019 Libs;
NIM_BOOL Fromcache;
TY103032 Semconstexpr;
TY103037 Semexpr;
TY50895 Includedfiles;
NimStringDesc* Filename;
TY50530 Userpragmas;
};
struct TY50552 {
  TY49005 Sup;
NU8 Kind;
TY50550* Sons;
TY50526* N;
NU8 Flags;
NU8 Callconv;
TY50548* Owner;
TY50548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY50540 Loc;
};
struct TY55084 {
NI H;
TY49011* Name;
};
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY10994 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10996 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
TY10994 Stat;
};
struct TY47008 {
  TNimObject Sup;
TY47008* Left;
TY47008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY38013 {
  TNimObject Sup;
TY38013* Prev;
TY38013* Next;
};
struct TY50544 {
  TY38013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY47008* Name;
TY50526* Path;
};
struct TY103006 {
TY50548* Owner;
TY50548* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8614[8];
struct TY50891 {
TY50891* Next;
NI Key;
TY8614 Bits;
};
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY50520 {
  TGenericSeq Sup;
  TY50526* data[SEQ_DECL_SIZE];
};
struct TY50528 {
  TGenericSeq Sup;
  TY50548* data[SEQ_DECL_SIZE];
};
struct TY55101 {
  TGenericSeq Sup;
  TY50530 data[SEQ_DECL_SIZE];
};
struct TY50893 {
  TGenericSeq Sup;
  TY50891* data[SEQ_DECL_SIZE];
};
struct TY50550 {
  TGenericSeq Sup;
  TY50552* data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, Sonslen_50804)(TY50526* N_50806);
N_NIMCALL(NimStringDesc*, Getmodulefile_106013)(TY50526* N_106015);
N_NIMCALL(NimStringDesc*, Findmodule_106016)(TY42538 Info_106018, NimStringDesc* Modulename_106019);
N_NIMCALL(NimStringDesc*, Findfile_41090)(NimStringDesc* F_41092);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_33630, NimStringDesc* Ext_33631);
N_NIMCALL(void, Fatal_43134)(TY42538 Info_43136, NU8 Msg_43137, NimStringDesc* Arg_43138);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_31256);
N_NIMCALL(void, Internalerror_43159)(TY42538 Info_43161, NimStringDesc* Errmsg_43162);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(void, Message_43149)(TY42538 Info_43151, NU8 Msg_43152, NimStringDesc* Arg_43153);
N_NIMCALL(void, Adddecl_104114)(TY103012* C_104116, TY50548* Sym_104117);
N_NIMCALL(void, Importallsymbols_106009)(TY103012* C_106011, TY50548* Frommod_106012);
N_NIMCALL(TY50548*, Inittabiter_55073)(TY55071* Ti_55076, TY50530* Tab_55077);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_19571, TNimType* Typ_19572);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
N_NIMCALL(void, Rawimportsymbol_106061)(TY103012* C_106063, TY50548* S_106064);
N_NIMCALL(TY50548*, Strtableget_55066)(TY50530* T_55068, TY49011* Name_55069);
N_NIMCALL(void, Intsetincl_50909)(TY50895* S_50912, NI Key_50913);
N_NIMCALL(void, Strtableadd_55061)(TY50530* T_55064, TY50548* N_55065);
N_NIMCALL(TY50548*, Initidentiter_55087)(TY55084* Ti_55090, TY50530* Tab_55091, TY49011* S_55092);
N_NIMCALL(TY50548*, Nextidentiter_55093)(TY55084* Ti_55096, TY50530* Tab_55097);
N_NIMCALL(void, Addconverter_103058)(TY103012* C_103060, TY50548* Conv_103061);
N_NIMCALL(TY50548*, Nextiter_55078)(TY55071* Ti_55081, TY50530* Tab_55082);
N_NIMCALL(void, Checkminsonslen_103413)(TY50526* N_103415, NI Length_103416);
N_NIMCALL(TY50526*, Newsymnode_50735)(TY50548* Sym_50737);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(void, Importsymbol_106213)(TY103012* C_106215, TY50526* Ident_106216, TY50548* Frommod_106217);
N_NIMCALL(void, Globalerror_43139)(TY42538 Info_43141, NU8 Msg_43142, NimStringDesc* Arg_43143);
N_NIMCALL(void, Loadstub_89070)(TY50548* S_89072);
STRING_LITERAL(TMP192193, "nim", 3);
STRING_LITERAL(TMP192194, "getModuleFile()", 15);
STRING_LITERAL(TMP192195, "", 0);
STRING_LITERAL(TMP192196, "importAllSymbols: ", 18);
STRING_LITERAL(TMP192197, "rawImportSymbol", 15);
STRING_LITERAL(TMP192199, "importSymbol", 12);
STRING_LITERAL(TMP192200, "importSymbol: 2", 15);
STRING_LITERAL(TMP192201, "importSymbol: 3", 15);
extern TY101041 Gimportmodule_101044;
extern TNimType* NTI50174; /* TSymKind */
extern TY10996 Gch_11014;
static N_INLINE(NI, Sonslen_50804)(TY50526* N_50806) {
NI Result_51880;
Result_51880 = 0;
if (!(*N_50806).KindU.S6.Sons == 0) goto LA2;
Result_51880 = 0;
goto LA1;
LA2: ;
Result_51880 = (*N_50806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_51880;
}
N_NIMCALL(NimStringDesc*, Findmodule_106016)(TY42538 Info_106018, NimStringDesc* Modulename_106019) {
NimStringDesc* Result_106020;
NimStringDesc* LOC1;
Result_106020 = 0;
LOC1 = 0;
LOC1 = nosaddFileExt(Modulename_106019, ((NimStringDesc*) &TMP192193));
Result_106020 = Findfile_41090(LOC1);
if (!((Result_106020) && (Result_106020)->Sup.len == 0)) goto LA3;
Fatal_43134(Info_106018, ((NU8) 2), Modulename_106019);
LA3: ;
return Result_106020;
}
N_NIMCALL(NimStringDesc*, Getmodulefile_106013)(TY50526* N_106015) {
NimStringDesc* Result_106024;
NimStringDesc* LOC1;
Result_106024 = 0;
switch ((*N_106015).Kind) {
case ((NU8) 14):
case ((NU8) 15):
case ((NU8) 16):
LOC1 = 0;
LOC1 = nosUnixToNativePath((*N_106015).KindU.S3.Strval);
Result_106024 = Findmodule_106016((*N_106015).Info, LOC1);
break;
case ((NU8) 2):
Result_106024 = Findmodule_106016((*N_106015).Info, (*(*N_106015).KindU.S5.Ident).S);
break;
case ((NU8) 3):
Result_106024 = Findmodule_106016((*N_106015).Info, (*(*(*N_106015).KindU.S4.Sym).Name).S);
break;
default:
Internalerror_43159((*N_106015).Info, ((NimStringDesc*) &TMP192194));
Result_106024 = copyString(((NimStringDesc*) &TMP192195));
break;
}
return Result_106024;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI64)((NI64)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
N_NIMCALL(void, Rawimportsymbol_106061)(TY103012* C_106063, TY50548* S_106064) {
TY50548* Copy_106065;
TY50548* Check_106066;
NIM_BOOL LOC2;
TY50552* Etyp_106103;
NI J_106139;
NI HEX3Atmp_106210;
NI LOC15;
NI Res_106212;
TY50548* E_106164;
TY55084 It_106174;
Copy_106065 = 0;
Copy_106065 = S_106064;
Check_106066 = 0;
Check_106066 = Strtableget_55066(&(*C_106063).Tab.Stack->data[0], (*S_106064).Name);
LOC2 = !((Check_106066 == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = !(((*Check_106066).Sup.Id == (*Copy_106065).Sup.Id));
LA3: ;
if (!LOC2) goto LA4;
if (!!(((15424 &(1<<(((*S_106064).Kind)&31)))!=0))) goto LA7;
Intsetincl_50909(&(*C_106063).Ambiguoussymbols, (*Copy_106065).Sup.Id);
Intsetincl_50909(&(*C_106063).Ambiguoussymbols, (*Check_106066).Sup.Id);
LA7: ;
LA4: ;
Strtableadd_55061(&(*C_106063).Tab.Stack->data[0], Copy_106065);
if (!((*S_106064).Kind == ((NU8) 7))) goto LA10;
Etyp_106103 = 0;
Etyp_106103 = (*S_106064).Typ;
if (!((16386 &(IL64(1)<<(((*Etyp_106103).Kind)&IL64(63))))!=0)) goto LA13;
J_106139 = 0;
HEX3Atmp_106210 = 0;
LOC15 = Sonslen_50804((*Etyp_106103).N);
HEX3Atmp_106210 = (NI64)(LOC15 - 1);
Res_106212 = 0;
Res_106212 = 0;
while (1) {
if (!(Res_106212 <= HEX3Atmp_106210)) goto LA16;
J_106139 = Res_106212;
E_106164 = 0;
E_106164 = (*(*(*Etyp_106103).N).KindU.S6.Sons->data[J_106139]).KindU.S4.Sym;
if (!!(((*E_106164).Kind == ((NU8) 17)))) goto LA18;
Internalerror_43159((*S_106064).Info, ((NimStringDesc*) &TMP192197));
LA18: ;
memset((void*)&It_106174, 0, sizeof(It_106174));
Check_106066 = Initidentiter_55087(&It_106174, &(*C_106063).Tab.Stack->data[0], (*E_106164).Name);
while (1) {
if (!!((Check_106066 == NIM_NIL))) goto LA20;
if (!((*Check_106066).Sup.Id == (*E_106164).Sup.Id)) goto LA22;
E_106164 = NIM_NIL;
goto LA20;
LA22: ;
Check_106066 = Nextidentiter_55093(&It_106174, &(*C_106063).Tab.Stack->data[0]);
} LA20: ;
if (!!((E_106164 == NIM_NIL))) goto LA25;
Rawimportsymbol_106061(C_106063, E_106164);
LA25: ;
Res_106212 += 1;
} LA16: ;
LA13: ;
goto LA9;
LA10: ;
if (!((*S_106064).Kind == ((NU8) 13))) goto LA27;
Addconverter_103058(C_106063, S_106064);
goto LA9;
LA27: ;
LA9: ;
}
N_NIMCALL(void, Importallsymbols_106009)(TY103012* C_106011, TY50548* Frommod_106012) {
TY55071 I_106304;
TY50548* S_106306;
NimStringDesc* LOC11;
memset((void*)&I_106304, 0, sizeof(I_106304));
S_106306 = 0;
S_106306 = Inittabiter_55073(&I_106304, &(*Frommod_106012).Tab);
while (1) {
if (!!((S_106306 == NIM_NIL))) goto LA1;
if (!!(((*S_106306).Kind == ((NU8) 6)))) goto LA3;
if (!!(((*S_106306).Kind == ((NU8) 17)))) goto LA6;
if (!!(((1113984 &(1<<(((*S_106306).Kind)&31)))!=0))) goto LA9;
LOC11 = 0;
LOC11 = rawNewString(reprEnum((*S_106306).Kind, NTI50174)->Sup.len + 18);
appendString(LOC11, ((NimStringDesc*) &TMP192196));
appendString(LOC11, reprEnum((*S_106306).Kind, NTI50174));
Internalerror_43159((*S_106306).Info, LOC11);
LA9: ;
Rawimportsymbol_106061(C_106011, S_106306);
LA6: ;
LA3: ;
S_106306 = Nextiter_55078(&I_106304, &(*Frommod_106012).Tab);
} LA1: ;
}
N_NIMCALL(TY50526*, Evalimport_106001)(TY103012* C_106003, TY50526* N_106004) {
TY50526* Result_106360;
NI I_106369;
NI HEX3Atmp_106407;
NI LOC1;
NI Res_106409;
NimStringDesc* F_106382;
TY50548* M_106383;
Result_106360 = 0;
Result_106360 = N_106004;
I_106369 = 0;
HEX3Atmp_106407 = 0;
LOC1 = Sonslen_50804(N_106004);
HEX3Atmp_106407 = (NI64)(LOC1 - 1);
Res_106409 = 0;
Res_106409 = 0;
while (1) {
if (!(Res_106409 <= HEX3Atmp_106407)) goto LA2;
I_106369 = Res_106409;
F_106382 = 0;
F_106382 = Getmodulefile_106013((*N_106004).KindU.S6.Sons->data[I_106369]);
M_106383 = 0;
M_106383 = Gimportmodule_101044(F_106382);
if (!(((*M_106383).Flags &(1<<((((NU8) 22))&31)))!=0)) goto LA4;
Message_43149((*(*N_106004).KindU.S6.Sons->data[I_106369]).Info, ((NU8) 214), (*(*M_106383).Name).S);
LA4: ;
Adddecl_104114(C_106003, M_106383);
Importallsymbols_106009(C_106003, M_106383);
Res_106409 += 1;
} LA2: ;
return Result_106360;
}
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11414))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
return Result_11415;
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
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403) {
Addzct_11401(&Gch_11014.Zct, C_12403);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019) {
TY10602* C_13020;
NI LOC4;
TY10602* C_13022;
NI LOC9;
if (!!((Src_13019 == NIM_NIL))) goto LA2;
C_13020 = 0;
C_13020 = Usrtocell_11412(Src_13019);
LOC4 = Atomicinc_3221(&(*C_13020).Refcount, 8);
LA2: ;
if (!!(((*Dest_13018) == NIM_NIL))) goto LA6;
C_13022 = 0;
C_13022 = Usrtocell_11412((*Dest_13018));
LOC9 = Atomicdec_3226(&(*C_13022).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
N_NIMCALL(void, Importsymbol_106213)(TY103012* C_106215, TY50526* Ident_106216, TY50548* Frommod_106217) {
TY50548* S_106239;
TY55084 It_106283;
TY50548* E_106285;
if (!!(((*Ident_106216).Kind == ((NU8) 2)))) goto LA2;
Internalerror_43159((*Ident_106216).Info, ((NimStringDesc*) &TMP192199));
LA2: ;
S_106239 = 0;
S_106239 = Strtableget_55066(&(*Frommod_106217).Tab, (*Ident_106216).KindU.S5.Ident);
if (!(S_106239 == NIM_NIL)) goto LA5;
Globalerror_43139((*Ident_106216).Info, ((NU8) 58), (*(*Ident_106216).KindU.S5.Ident).S);
LA5: ;
if (!((*S_106239).Kind == ((NU8) 20))) goto LA8;
Loadstub_89070(S_106239);
LA8: ;
if (!!(((1113984 &(1<<(((*S_106239).Kind)&31)))!=0))) goto LA11;
Internalerror_43159((*Ident_106216).Info, ((NimStringDesc*) &TMP192200));
LA11: ;
switch ((*S_106239).Kind) {
case ((NU8) 10):
case ((NU8) 11):
case ((NU8) 12):
case ((NU8) 14):
case ((NU8) 15):
case ((NU8) 13):
memset((void*)&It_106283, 0, sizeof(It_106283));
E_106285 = 0;
E_106285 = Initidentiter_55087(&It_106283, &(*Frommod_106217).Tab, (*S_106239).Name);
while (1) {
if (!!((E_106285 == NIM_NIL))) goto LA13;
if (!!(((*(*E_106285).Name).Sup.Id == (*(*S_106239).Name).Sup.Id))) goto LA15;
Internalerror_43159((*Ident_106216).Info, ((NimStringDesc*) &TMP192201));
LA15: ;
Rawimportsymbol_106061(C_106215, E_106285);
E_106285 = Nextidentiter_55093(&It_106283, &(*Frommod_106217).Tab);
} LA13: ;
break;
default:
Rawimportsymbol_106061(C_106215, S_106239);
break;
}
}
N_NIMCALL(TY50526*, Evalfrom_106005)(TY103012* C_106007, TY50526* N_106008) {
TY50526* Result_106414;
NimStringDesc* F_106427;
TY50548* M_106428;
NI I_106449;
NI HEX3Atmp_106462;
NI LOC1;
NI Res_106464;
Result_106414 = 0;
Result_106414 = N_106008;
Checkminsonslen_103413(N_106008, 2);
F_106427 = 0;
F_106427 = Getmodulefile_106013((*N_106008).KindU.S6.Sons->data[0]);
M_106428 = 0;
M_106428 = Gimportmodule_101044(F_106427);
asgnRefNoCycle((void**) &(*N_106008).KindU.S6.Sons->data[0], Newsymnode_50735(M_106428));
Adddecl_104114(C_106007, M_106428);
I_106449 = 0;
HEX3Atmp_106462 = 0;
LOC1 = Sonslen_50804(N_106008);
HEX3Atmp_106462 = (NI64)(LOC1 - 1);
Res_106464 = 0;
Res_106464 = 1;
while (1) {
if (!(Res_106464 <= HEX3Atmp_106462)) goto LA2;
I_106449 = Res_106464;
Importsymbol_106213(C_106007, (*N_106008).KindU.S6.Sons->data[I_106449], M_106428);
Res_106464 += 1;
} LA2: ;
return Result_106414;
}
N_NOINLINE(void, importerInit)(void) {
}

