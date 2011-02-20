/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY50548 TY50548;
typedef struct TY103012 TY103012;
typedef struct TY55084 TY55084;
typedef struct TY49011 TY49011;
typedef struct TY50530 TY50530;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY50528 TY50528;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY101002 TY101002;
typedef struct TNimObject TNimObject;
typedef struct TY103006 TY103006;
typedef struct TY50526 TY50526;
typedef struct TY55099 TY55099;
typedef struct TY55101 TY55101;
typedef struct TY50895 TY50895;
typedef struct TY50891 TY50891;
typedef struct TY50893 TY50893;
typedef struct TY38019 TY38019;
typedef struct TY38013 TY38013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY49005 TY49005;
typedef struct TY50552 TY50552;
typedef struct TY42538 TY42538;
typedef struct TY50540 TY50540;
typedef struct TY47008 TY47008;
typedef struct TY50544 TY50544;
typedef struct TY50520 TY50520;
typedef struct TY50550 TY50550;
struct TY55084 {
NI H;
TY49011* Name;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY50530 {
TNimType* m_type;
NI Counter;
TY50528* Data;
};
struct TNimObject {
TNimType* m_type;
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
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
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY42538 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY38013 {
  TNimObject Sup;
TY38013* Prev;
TY38013* Next;
};
struct TY47008 {
  TNimObject Sup;
TY47008* Left;
TY47008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY50544 {
  TY38013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY47008* Name;
TY50526* Path;
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
struct TY50520 {
  TGenericSeq Sup;
  TY50526* data[SEQ_DECL_SIZE];
};
struct TY50550 {
  TGenericSeq Sup;
  TY50552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY50548*, Initidentiter_55087)(TY55084* Ti_55090, TY50530* Tab_55091, TY49011* S_55092);
N_NIMCALL(NIM_BOOL, Equalgenericparams_117014)(TY50526* Proca_117016, TY50526* Procb_117017);
static N_INLINE(NI, Sonslen_50804)(TY50526* N_50806);
N_NIMCALL(void, Internalerror_43159)(TY42538 Info_43161, NimStringDesc* Errmsg_43162);
N_NIMCALL(NIM_BOOL, Sametypeornil_93052)(TY50552* A_93054, TY50552* B_93055);
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_92035)(TY50526* A_92037, TY50526* B_92038);
N_NIMCALL(NU8, Equalparams_93065)(TY50526* A_93067, TY50526* B_93068);
N_NIMCALL(void, Localerror_43144)(TY42538 Info_43146, NU8 Msg_43147, NimStringDesc* Arg_43148);
N_NIMCALL(TY50548*, Nextidentiter_55093)(TY55084* Ti_55096, TY50530* Tab_55097);
N_NIMCALL(NIM_BOOL, Paramsfitborrow_117248)(TY50526* A_117250, TY50526* B_117251);
N_NIMCALL(NIM_BOOL, Equalordistinctof_93056)(TY50552* X_93058, TY50552* Y_93059);
STRING_LITERAL(TMP192180, "equalGenericParams", 18);
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
N_NIMCALL(NIM_BOOL, Equalgenericparams_117014)(TY50526* Proca_117016, TY50526* Procb_117017) {
NIM_BOOL Result_117018;
TY50548* A_117019;
TY50548* B_117020;
NIM_BOOL LOC5;
NI LOC10;
NI LOC11;
NI I_117077;
NI HEX3Atmp_117192;
NI LOC14;
NI Res_117194;
NIM_BOOL LOC23;
NIM_BOOL LOC25;
NIM_BOOL LOC29;
NIM_BOOL LOC34;
Result_117018 = 0;
A_117019 = 0;
B_117020 = 0;
Result_117018 = (Proca_117016 == Procb_117017);
if (!Result_117018) goto LA2;
goto BeforeRet;
LA2: ;
LOC5 = (Proca_117016 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (Procb_117017 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
goto BeforeRet;
LA7: ;
LOC10 = Sonslen_50804(Proca_117016);
LOC11 = Sonslen_50804(Procb_117017);
if (!!((LOC10 == LOC11))) goto LA12;
goto BeforeRet;
LA12: ;
I_117077 = 0;
HEX3Atmp_117192 = 0;
LOC14 = Sonslen_50804(Proca_117016);
HEX3Atmp_117192 = (NI64)(LOC14 - 1);
Res_117194 = 0;
Res_117194 = 0;
while (1) {
if (!(Res_117194 <= HEX3Atmp_117192)) goto LA15;
I_117077 = Res_117194;
if (!!(((*(*Proca_117016).KindU.S6.Sons->data[I_117077]).Kind == ((NU8) 3)))) goto LA17;
Internalerror_43159((*Proca_117016).Info, ((NimStringDesc*) &TMP192180));
LA17: ;
if (!!(((*(*Procb_117017).KindU.S6.Sons->data[I_117077]).Kind == ((NU8) 3)))) goto LA20;
Internalerror_43159((*Procb_117017).Info, ((NimStringDesc*) &TMP192180));
LA20: ;
A_117019 = (*(*Proca_117016).KindU.S6.Sons->data[I_117077]).KindU.S4.Sym;
B_117020 = (*(*Procb_117017).KindU.S6.Sons->data[I_117077]).KindU.S4.Sym;
LOC23 = !(((*(*A_117019).Name).Sup.Id == (*(*B_117020).Name).Sup.Id));
if (LOC23) goto LA24;
LOC25 = Sametypeornil_93052((*A_117019).Typ, (*B_117020).Typ);
LOC23 = !(LOC25);
LA24: ;
if (!LOC23) goto LA26;
goto BeforeRet;
LA26: ;
LOC29 = !(((*A_117019).Ast == NIM_NIL));
if (!(LOC29)) goto LA30;
LOC29 = !(((*B_117020).Ast == NIM_NIL));
LA30: ;
if (!LOC29) goto LA31;
LOC34 = Exprstructuralequivalent_92035((*A_117019).Ast, (*B_117020).Ast);
if (!!(LOC34)) goto LA35;
goto BeforeRet;
LA35: ;
LA31: ;
Res_117194 += 1;
} LA15: ;
Result_117018 = NIM_TRUE;
BeforeRet: ;
return Result_117018;
}
N_NIMCALL(TY50548*, Searchforproc_117004)(TY103012* C_117006, TY50548* Fn_117007, NI Tos_117008) {
TY50548* Result_117200;
TY55084 It_117201;
NIM_BOOL LOC6;
NU8 LOC9;
Result_117200 = 0;
memset((void*)&It_117201, 0, sizeof(It_117201));
Result_117200 = Initidentiter_55087(&It_117201, &(*C_117006).Tab.Stack->data[Tos_117008], (*Fn_117007).Name);
while (1) {
if (!!((Result_117200 == NIM_NIL))) goto LA1;
if (!((*Result_117200).Kind == (*Fn_117007).Kind)) goto LA3;
LOC6 = Equalgenericparams_117014((*(*Result_117200).Ast).KindU.S6.Sons->data[1], (*(*Fn_117007).Ast).KindU.S6.Sons->data[1]);
if (!LOC6) goto LA7;
LOC9 = Equalparams_93065((*(*Result_117200).Typ).N, (*(*Fn_117007).Typ).N);
switch (LOC9) {
case ((NU8) 1):
goto BeforeRet;
break;
case ((NU8) 2):
Localerror_43144((*Fn_117007).Info, ((NU8) 63), (*(*Fn_117007).Name).S);
goto BeforeRet;
break;
case ((NU8) 0):
break;
}
LA7: ;
LA3: ;
Result_117200 = Nextidentiter_55093(&It_117201, &(*C_117006).Tab.Stack->data[Tos_117008]);
} LA1: ;
BeforeRet: ;
return Result_117200;
}
N_NIMCALL(NIM_BOOL, Paramsfitborrow_117248)(TY50526* A_117250, TY50526* B_117251) {
NIM_BOOL Result_117252;
NI Length_117253;
NI LOC2;
NI I_117264;
NI HEX3Atmp_117357;
NI Res_117359;
TY50548* M_117289;
TY50548* N_117314;
NIM_BOOL LOC7;
NIM_BOOL LOC11;
Result_117252 = 0;
Length_117253 = 0;
Length_117253 = Sonslen_50804(A_117250);
Result_117252 = NIM_FALSE;
LOC2 = Sonslen_50804(B_117251);
if (!(Length_117253 == LOC2)) goto LA3;
I_117264 = 0;
HEX3Atmp_117357 = 0;
HEX3Atmp_117357 = (NI64)(Length_117253 - 1);
Res_117359 = 0;
Res_117359 = 1;
while (1) {
if (!(Res_117359 <= HEX3Atmp_117357)) goto LA5;
I_117264 = Res_117359;
M_117289 = 0;
M_117289 = (*(*A_117250).KindU.S6.Sons->data[I_117264]).KindU.S4.Sym;
N_117314 = 0;
N_117314 = (*(*B_117251).KindU.S6.Sons->data[I_117264]).KindU.S4.Sym;
LOC7 = Equalordistinctof_93056((*M_117289).Typ, (*N_117314).Typ);
if (!!(LOC7)) goto LA8;
goto BeforeRet;
LA8: ;
Res_117359 += 1;
} LA5: ;
LOC11 = Equalordistinctof_93056((*(*A_117250).KindU.S6.Sons->data[0]).Typ, (*(*B_117251).KindU.S6.Sons->data[0]).Typ);
if (!!(LOC11)) goto LA12;
goto BeforeRet;
LA12: ;
Result_117252 = NIM_TRUE;
LA3: ;
BeforeRet: ;
return Result_117252;
}
N_NIMCALL(TY50548*, Searchforborrowproc_117009)(TY103012* C_117011, TY50548* Fn_117012, NI Tos_117013) {
TY50548* Result_117365;
TY55084 It_117366;
NI Scope_117389;
NI Res_117439;
NIM_BOOL LOC4;
NIM_BOOL LOC9;
NIM_BOOL LOC13;
Result_117365 = 0;
memset((void*)&It_117366, 0, sizeof(It_117366));
Scope_117389 = 0;
Res_117439 = 0;
Res_117439 = Tos_117013;
while (1) {
if (!(0 <= Res_117439)) goto LA1;
Scope_117389 = Res_117439;
Result_117365 = Initidentiter_55087(&It_117366, &(*C_117011).Tab.Stack->data[Scope_117389], (*Fn_117012).Name);
while (1) {
if (!!((Result_117365 == NIM_NIL))) goto LA2;
LOC4 = ((*Result_117365).Kind == (*Fn_117012).Kind);
if (!(LOC4)) goto LA5;
LOC4 = !(((*Result_117365).Sup.Id == (*Fn_117012).Sup.Id));
LA5: ;
if (!LOC4) goto LA6;
LOC9 = Equalgenericparams_117014((*(*Result_117365).Ast).KindU.S6.Sons->data[1], (*(*Fn_117012).Ast).KindU.S6.Sons->data[1]);
if (!LOC9) goto LA10;
LOC13 = Paramsfitborrow_117248((*(*Fn_117012).Typ).N, (*(*Result_117365).Typ).N);
if (!LOC13) goto LA14;
goto BeforeRet;
LA14: ;
LA10: ;
LA6: ;
Result_117365 = Nextidentiter_55093(&It_117366, &(*C_117011).Tab.Stack->data[Scope_117389]);
} LA2: ;
Res_117439 -= 1;
} LA1: ;
BeforeRet: ;
return Result_117365;
}
N_NOINLINE(void, procfindInit)(void) {
}

