/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY55548 TY55548;
typedef struct TY107012 TY107012;
typedef struct TY55526 TY55526;
typedef struct TY55552 TY55552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY47538 TY47538;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY60099 TY60099;
typedef struct TY60101 TY60101;
typedef struct TY55530 TY55530;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55528 TY55528;
typedef struct TY105002 TY105002;
typedef struct TNimObject TNimObject;
typedef struct TY107006 TY107006;
typedef struct TY55895 TY55895;
typedef struct TY55891 TY55891;
typedef struct TY55893 TY55893;
typedef struct TY43019 TY43019;
typedef struct TY43013 TY43013;
typedef struct TY54005 TY54005;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
typedef struct TY108004 TY108004;
typedef struct TY60084 TY60084;
typedef struct TY60071 TY60071;
typedef struct TY55550 TY55550;
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
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TY60099 {
NI Tos;
TY60101* Stack;
};
struct TNimObject {
TNimType* m_type;
};
struct TY105002 {
  TNimObject Sup;
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
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
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
struct TY60084 {
NI H;
TY54011* Name;
};
struct TY108004 {
NI Stackptr;
TY60084 It;
TY55548* M;
NU8 Mode;
};
struct TY60071 {
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY107006 {
TY55548* Owner;
TY55548* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8814[16];
struct TY55891 {
TY55891* Next;
NI Key;
TY8814 Bits;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
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
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY55548*, Lookup_108245)(TY107012* C_108247, TY55526* N_108248);
N_NIMCALL(TY55548*, Symtabget_60111)(TY60099 Tab_60113, TY54011* S_60114);
N_NIMCALL(void, Globalerror_48139)(TY47538 Info_48141, NU8 Msg_48142, NimStringDesc* Arg_48143);
N_NIMCALL(void, Internalerror_48159)(TY47538 Info_48161, NimStringDesc* Errmsg_48162);
N_NIMCALL(NIM_BOOL, Intsetcontains_55905)(TY55895 S_55907, NI Key_55908);
N_NIMCALL(void, Localerror_48144)(TY47538 Info_48146, NU8 Msg_48147, NimStringDesc* Arg_48148);
N_NIMCALL(void, Loadstub_93070)(TY55548* S_93072);
N_NIMCALL(TY55548*, Initidentiter_60087)(TY60084* Ti_60090, TY55530* Tab_60091, TY54011* S_60092);
N_NIMCALL(TY55548*, Qualifiedlookup_108322)(TY107012* C_108324, TY55526* N_108325, NU8 Flags_108327);
N_NIMCALL(TY55548*, Strtableget_60066)(TY55530* T_60068, TY54011* Name_60069);
N_NIMCALL(NimStringDesc*, Rendertree_85042)(TY55526* N_85044, NU8 Renderflags_85047);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(TY55548*, Initoverloaditer_108745)(TY108004* O_108748, TY107012* C_108749, TY55526* N_108750);
N_NIMCALL(TY55548*, Nextoverloaditer_109074)(TY108004* O_109077, TY107012* C_109078, TY55526* N_109079);
N_NIMCALL(TY55548*, Nextidentiter_60093)(TY60084* Ti_60096, TY55530* Tab_60097);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(NU8, Symtabaddunique_60130)(TY60099* Tab_60133, TY55548* E_60134);
N_NIMCALL(NU8, Symtabadduniqueat_60135)(TY60099* Tab_60138, TY55548* E_60139, NI At_60140);
N_NIMCALL(void, Internalerror_48163)(NimStringDesc* Errmsg_48165);
N_NIMCALL(TY55548*, Inittabiter_60073)(TY60071* Ti_60076, TY55530* Tab_60077);
N_NIMCALL(NimStringDesc*, Getsymrepr_108014)(TY55548* S_108016);
N_NIMCALL(NimStringDesc*, Getprocheader_97018)(TY55548* Sym_97020);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void, Message_48149)(TY47538 Info_48151, NU8 Msg_48152, NimStringDesc* Arg_48153);
N_NIMCALL(TY55548*, Nextiter_60078)(TY60071* Ti_60081, TY55530* Tab_60082);
N_NIMCALL(void, Rawclosescope_60145)(TY60099* Tab_60148);
N_NIMCALL(void, Adddecl_108114)(TY107012* C_108116, TY55548* Sym_108117);
N_NIMCALL(void, Addinterfacedeclaux_108143)(TY107012* C_108145, TY55548* Sym_108146);
N_NIMCALL(void, Strtableadd_60061)(TY55530* T_60064, TY55548* N_60065);
N_NIMCALL(TY55548*, Getcurrowner_107092)(void);
N_NIMCALL(void, Addoverloadablesymat_108196)(TY107012* C_108198, TY55548* Fn_108199, NI At_108200);
N_NIMCALL(void, Symtabaddat_60124)(TY60099* Tab_60127, TY55548* E_60128, NI At_60129);
N_NIMCALL(void, Adddeclat_108128)(TY107012* C_108130, TY55548* Sym_108131, NI At_108132);
STRING_LITERAL(TMP195990, "lookUp", 6);
STRING_LITERAL(TMP196121, "CloseScope", 10);
STRING_LITERAL(TMP196150, "AddInterfaceDeclAux", 19);
STRING_LITERAL(TMP196177, "addOverloadableSymAt", 20);
N_NIMCALL(TY55548*, Lookup_108245)(TY107012* C_108247, TY55526* N_108248) {
TY55548* Result_108249;
NIM_BOOL LOC5;
Result_108249 = 0;
switch ((*N_108248).Kind) {
case ((NU8) 43):
Result_108249 = Lookup_108245(C_108247, (*N_108248).KindU.S6.Sons->data[0]);
break;
case ((NU8) 3):
Result_108249 = (*N_108248).KindU.S4.Sym;
break;
case ((NU8) 2):
Result_108249 = Symtabget_60111((*C_108247).Tab, (*N_108248).KindU.S5.Ident);
if (!(Result_108249 == NIM_NIL)) goto LA2;
Globalerror_48139((*N_108248).Info, ((NU8) 58), (*(*N_108248).KindU.S5.Ident).S);
LA2: ;
break;
default:
Internalerror_48159((*N_108248).Info, ((NimStringDesc*) &TMP195990));
break;
}
LOC5 = Intsetcontains_55905((*C_108247).Ambiguoussymbols, (*Result_108249).Sup.Id);
if (!LOC5) goto LA6;
Localerror_48144((*N_108248).Info, ((NU8) 59), (*(*Result_108249).Name).S);
LA6: ;
if (!((*Result_108249).Kind == ((NU8) 20))) goto LA9;
Loadstub_93070(Result_108249);
LA9: ;
return Result_108249;
}
N_NIMCALL(TY55548*, Qualifiedlookup_108322)(TY107012* C_108324, TY55526* N_108325, NU8 Flags_108327) {
TY55548* Result_108328;
NIM_BOOL LOC2;
NIM_BOOL LOC6;
NIM_BOOL LOC7;
NIM_BOOL LOC13;
TY55548* M_108467;
NIM_BOOL LOC18;
TY54011* Ident_108488;
NIM_BOOL LOC25;
NIM_BOOL LOC36;
NimStringDesc* LOC42;
NIM_BOOL LOC44;
Result_108328 = 0;
switch ((*N_108325).Kind) {
case ((NU8) 2):
Result_108328 = Symtabget_60111((*C_108324).Tab, (*N_108325).KindU.S5.Ident);
LOC2 = (Result_108328 == NIM_NIL);
if (!(LOC2)) goto LA3;
LOC2 = ((Flags_108327 &(1<<((((NU8) 1))&7)))!=0);
LA3: ;
if (!LOC2) goto LA4;
Globalerror_48139((*N_108325).Info, ((NU8) 58), (*(*N_108325).KindU.S5.Ident).S);
goto LA1;
LA4: ;
LOC7 = ((Flags_108327 &(1<<((((NU8) 0))&7)))!=0);
if (!(LOC7)) goto LA8;
LOC7 = !((Result_108328 == NIM_NIL));
LA8: ;
LOC6 = LOC7;
if (!(LOC6)) goto LA9;
LOC6 = Intsetcontains_55905((*C_108324).Ambiguoussymbols, (*Result_108328).Sup.Id);
LA9: ;
if (!LOC6) goto LA10;
Localerror_48144((*N_108325).Info, ((NU8) 59), (*(*N_108325).KindU.S5.Ident).S);
goto LA1;
LA10: ;
LA1: ;
break;
case ((NU8) 3):
Result_108328 = (*N_108325).KindU.S4.Sym;
LOC13 = ((Flags_108327 &(1<<((((NU8) 0))&7)))!=0);
if (!(LOC13)) goto LA14;
LOC13 = Intsetcontains_55905((*C_108324).Ambiguoussymbols, (*Result_108328).Sup.Id);
LA14: ;
if (!LOC13) goto LA15;
Localerror_48144((*N_108325).Info, ((NU8) 59), (*(*(*N_108325).KindU.S4.Sym).Name).S);
LA15: ;
break;
case ((NU8) 36):
Result_108328 = NIM_NIL;
M_108467 = 0;
M_108467 = Qualifiedlookup_108322(C_108324, (*N_108325).KindU.S6.Sons->data[0], (Flags_108327 & 2));
LOC18 = !((M_108467 == NIM_NIL));
if (!(LOC18)) goto LA19;
LOC18 = ((*M_108467).Kind == ((NU8) 6));
LA19: ;
if (!LOC18) goto LA20;
Ident_108488 = 0;
Ident_108488 = NIM_NIL;
if (!((*(*N_108325).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA23;
Ident_108488 = (*(*N_108325).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA22;
LA23: ;
LOC25 = ((*(*N_108325).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC25)) goto LA26;
LOC25 = ((*(*(*N_108325).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA26: ;
if (!LOC25) goto LA27;
Ident_108488 = (*(*(*N_108325).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA22;
LA27: ;
LA22: ;
if (!!((Ident_108488 == NIM_NIL))) goto LA30;
if (!(M_108467 == (*C_108324).Module)) goto LA33;
Result_108328 = Strtableget_60066(&(*C_108324).Tab.Stack->data[1], Ident_108488);
goto LA32;
LA33: ;
Result_108328 = Strtableget_60066(&(*M_108467).Tab, Ident_108488);
LA32: ;
LOC36 = (Result_108328 == NIM_NIL);
if (!(LOC36)) goto LA37;
LOC36 = ((Flags_108327 &(1<<((((NU8) 1))&7)))!=0);
LA37: ;
if (!LOC36) goto LA38;
Globalerror_48139((*(*N_108325).KindU.S6.Sons->data[1]).Info, ((NU8) 58), (*Ident_108488).S);
LA38: ;
goto LA29;
LA30: ;
if (!((Flags_108327 &(1<<((((NU8) 1))&7)))!=0)) goto LA40;
LOC42 = 0;
LOC42 = Rendertree_85042((*N_108325).KindU.S6.Sons->data[1], 0);
Globalerror_48139((*(*N_108325).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC42);
goto LA29;
LA40: ;
LA29: ;
LA20: ;
break;
case ((NU8) 43):
Result_108328 = Qualifiedlookup_108322(C_108324, (*N_108325).KindU.S6.Sons->data[0], Flags_108327);
break;
default:
Result_108328 = NIM_NIL;
break;
}
LOC44 = !((Result_108328 == NIM_NIL));
if (!(LOC44)) goto LA45;
LOC44 = ((*Result_108328).Kind == ((NU8) 20));
LA45: ;
if (!LOC44) goto LA46;
Loadstub_93070(Result_108328);
LA46: ;
return Result_108328;
}
N_NIMCALL(TY55548*, Initoverloaditer_108745)(TY108004* O_108748, TY107012* C_108749, TY55526* N_108750) {
TY55548* Result_108751;
NIM_BOOL LOC6;
TY54011* Ident_108836;
NIM_BOOL LOC13;
NimStringDesc* LOC23;
NIM_BOOL LOC25;
Result_108751 = 0;
Result_108751 = NIM_NIL;
switch ((*N_108750).Kind) {
case ((NU8) 2):
(*O_108748).Stackptr = ((NI) ((*C_108749).Tab.Tos));
(*O_108748).Mode = ((NU8) 1);
while (1) {
if (!(Result_108751 == NIM_NIL)) goto LA1;
(*O_108748).Stackptr -= 1;
if (!((*O_108748).Stackptr < 0)) goto LA3;
goto LA1;
LA3: ;
Result_108751 = Initidentiter_60087(&(*O_108748).It, &(*C_108749).Tab.Stack->data[(*O_108748).Stackptr], (*N_108750).KindU.S5.Ident);
} LA1: ;
break;
case ((NU8) 3):
Result_108751 = (*N_108750).KindU.S4.Sym;
(*O_108748).Mode = ((NU8) 0);
break;
case ((NU8) 36):
(*O_108748).Mode = ((NU8) 3);
unsureAsgnRef((void**) &(*O_108748).M, Qualifiedlookup_108322(C_108749, (*N_108750).KindU.S6.Sons->data[0], 2));
LOC6 = !(((*O_108748).M == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*O_108748).M).Kind == ((NU8) 6));
LA7: ;
if (!LOC6) goto LA8;
Ident_108836 = 0;
Ident_108836 = NIM_NIL;
if (!((*(*N_108750).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA11;
Ident_108836 = (*(*N_108750).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA10;
LA11: ;
LOC13 = ((*(*N_108750).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC13)) goto LA14;
LOC13 = ((*(*(*N_108750).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA14: ;
if (!LOC13) goto LA15;
Ident_108836 = (*(*(*N_108750).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA10;
LA15: ;
LA10: ;
if (!!((Ident_108836 == NIM_NIL))) goto LA18;
if (!((*O_108748).M == (*C_108749).Module)) goto LA21;
Result_108751 = Initidentiter_60087(&(*O_108748).It, &(*C_108749).Tab.Stack->data[1], Ident_108836);
(*O_108748).Mode = ((NU8) 2);
goto LA20;
LA21: ;
Result_108751 = Initidentiter_60087(&(*O_108748).It, &(*(*O_108748).M).Tab, Ident_108836);
LA20: ;
goto LA17;
LA18: ;
LOC23 = 0;
LOC23 = Rendertree_85042((*N_108750).KindU.S6.Sons->data[1], 0);
Globalerror_48139((*(*N_108750).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC23);
LA17: ;
LA8: ;
break;
case ((NU8) 43):
Result_108751 = Initoverloaditer_108745(O_108748, C_108749, (*N_108750).KindU.S6.Sons->data[0]);
break;
case ((NU8) 46):
(*O_108748).Mode = ((NU8) 4);
Result_108751 = (*(*N_108750).KindU.S6.Sons->data[0]).KindU.S4.Sym;
(*O_108748).Stackptr = 1;
break;
default:
break;
}
LOC25 = !((Result_108751 == NIM_NIL));
if (!(LOC25)) goto LA26;
LOC25 = ((*Result_108751).Kind == ((NU8) 20));
LA26: ;
if (!LOC25) goto LA27;
Loadstub_93070(Result_108751);
LA27: ;
return Result_108751;
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
N_NIMCALL(TY55548*, Nextoverloaditer_109074)(TY108004* O_109077, TY107012* C_109078, TY55526* N_109079) {
TY55548* Result_109080;
NI LOC11;
NIM_BOOL LOC15;
Result_109080 = 0;
switch ((*O_109077).Mode) {
case ((NU8) 0):
Result_109080 = NIM_NIL;
break;
case ((NU8) 1):
if (!((*N_109079).Kind == ((NU8) 43))) goto LA2;
Result_109080 = Nextoverloaditer_109074(O_109077, C_109078, (*N_109079).KindU.S6.Sons->data[0]);
goto LA1;
LA2: ;
if (!(0 <= (*O_109077).Stackptr)) goto LA4;
Result_109080 = Nextidentiter_60093(&(*O_109077).It, &(*C_109078).Tab.Stack->data[(*O_109077).Stackptr]);
while (1) {
if (!(Result_109080 == NIM_NIL)) goto LA6;
(*O_109077).Stackptr -= 1;
if (!((*O_109077).Stackptr < 0)) goto LA8;
goto LA6;
LA8: ;
Result_109080 = Initidentiter_60087(&(*O_109077).It, &(*C_109078).Tab.Stack->data[(*O_109077).Stackptr], (*O_109077).It.Name);
} LA6: ;
goto LA1;
LA4: ;
Result_109080 = NIM_NIL;
LA1: ;
break;
case ((NU8) 2):
Result_109080 = Nextidentiter_60093(&(*O_109077).It, &(*C_109078).Tab.Stack->data[1]);
break;
case ((NU8) 3):
Result_109080 = Nextidentiter_60093(&(*O_109077).It, &(*(*O_109077).M).Tab);
break;
case ((NU8) 4):
LOC11 = Sonslen_55804(N_109079);
if (!((*O_109077).Stackptr < LOC11)) goto LA12;
Result_109080 = (*(*N_109079).KindU.S6.Sons->data[(*O_109077).Stackptr]).KindU.S4.Sym;
(*O_109077).Stackptr += 1;
goto LA10;
LA12: ;
Result_109080 = NIM_NIL;
LA10: ;
break;
}
LOC15 = !((Result_109080 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = ((*Result_109080).Kind == ((NU8) 20));
LA16: ;
if (!LOC15) goto LA17;
Loadstub_93070(Result_109080);
LA17: ;
return Result_109080;
}
N_NIMCALL(void, Adddecl_108114)(TY107012* C_108116, TY55548* Sym_108117) {
NU8 LOC2;
LOC2 = Symtabaddunique_60130(&(*C_108116).Tab, Sym_108117);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Localerror_48144((*Sym_108117).Info, ((NU8) 37), (*(*Sym_108117).Name).S);
LA3: ;
}
N_NIMCALL(void, Adddeclat_108128)(TY107012* C_108130, TY55548* Sym_108131, NI At_108132) {
NU8 LOC2;
LOC2 = Symtabadduniqueat_60135(&(*C_108130).Tab, Sym_108131, At_108132);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Localerror_48144((*Sym_108131).Info, ((NU8) 37), (*(*Sym_108131).Name).S);
LA3: ;
}
N_NIMCALL(NimStringDesc*, Getsymrepr_108014)(TY55548* S_108016) {
NimStringDesc* Result_108017;
Result_108017 = 0;
switch ((*S_108016).Kind) {
case ((NU8) 10):
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 12):
Result_108017 = Getprocheader_97018(S_108016);
break;
default:
Result_108017 = copyString((*(*S_108016).Name).S);
break;
}
return Result_108017;
}
N_NIMCALL(void, Closescope_108018)(TY60099* Tab_108021) {
TY60071 It_108022;
TY55548* S_108023;
NimStringDesc* LOC8;
NIM_BOOL LOC9;
NimStringDesc* LOC16;
memset((void*)&It_108022, 0, sizeof(It_108022));
S_108023 = 0;
if (!((*Tab_108021).Stack->Sup.len < ((NI) ((*Tab_108021).Tos)))) goto LA2;
Internalerror_48163(((NimStringDesc*) &TMP196121));
LA2: ;
S_108023 = Inittabiter_60073(&It_108022, &(*Tab_108021).Stack->data[(NI32)(((NI) ((*Tab_108021).Tos)) - 1)]);
while (1) {
if (!!((S_108023 == NIM_NIL))) goto LA4;
if (!(((*S_108023).Flags &(1<<((((NU8) 6))&31)))!=0)) goto LA6;
LOC8 = 0;
LOC8 = Getsymrepr_108014(S_108023);
Localerror_48144((*S_108023).Info, ((NU8) 134), LOC8);
goto LA5;
LA6: ;
LOC9 = ((9 & (*S_108023).Flags) == 0);
if (!(LOC9)) goto LA10;
LOC9 = (((*S_108023).Options &(1<<((((NU8) 12))&31)))!=0);
LA10: ;
if (!LOC9) goto LA11;
if (!!(((264201 &(1<<(((*S_108023).Kind)&31)))!=0))) goto LA14;
LOC16 = 0;
LOC16 = Getsymrepr_108014(S_108023);
Message_48149((*S_108023).Info, ((NU8) 226), LOC16);
LA14: ;
goto LA5;
LA11: ;
LA5: ;
S_108023 = Nextiter_60078(&It_108022, &(*Tab_108021).Stack->data[(NI32)(((NI) ((*Tab_108021).Tos)) - 1)]);
} LA4: ;
Rawclosescope_60145(Tab_108021);
}
N_NIMCALL(void, Addinterfacedeclaux_108143)(TY107012* C_108145, TY55548* Sym_108146) {
TY55548* LOC8;
if (!(((*Sym_108146).Flags &(1<<((((NU8) 3))&31)))!=0)) goto LA2;
if (!((*C_108145).Module == NIM_NIL)) goto LA5;
Internalerror_48159((*Sym_108146).Info, ((NimStringDesc*) &TMP196150));
LA5: ;
Strtableadd_60061(&(*(*C_108145).Module).Tab, Sym_108146);
LA2: ;
LOC8 = 0;
LOC8 = Getcurrowner_107092();
if (!((*LOC8).Kind == ((NU8) 6))) goto LA9;
(*Sym_108146).Flags |=(1<<((NI32)(((NU8) 5))%(sizeof(NI32)*8)));
LA9: ;
}
N_NIMCALL(void, Addinterfacedecl_108236)(TY107012* C_108238, TY55548* Sym_108239) {
Adddecl_108114(C_108238, Sym_108239);
Addinterfacedeclaux_108143(C_108238, Sym_108239);
}
N_NIMCALL(void, Addoverloadablesymat_108196)(TY107012* C_108198, TY55548* Fn_108199, NI At_108200) {
TY55548* Check_108212;
NIM_BOOL LOC5;
if (!!(((15424 &(1<<(((*Fn_108199).Kind)&31)))!=0))) goto LA2;
Internalerror_48159((*Fn_108199).Info, ((NimStringDesc*) &TMP196177));
LA2: ;
Check_108212 = 0;
Check_108212 = Strtableget_60066(&(*C_108198).Tab.Stack->data[At_108200], (*Fn_108199).Name);
LOC5 = !((Check_108212 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !(((15424 &(1<<(((*Check_108212).Kind)&31)))!=0));
LA6: ;
if (!LOC5) goto LA7;
Localerror_48144((*Fn_108199).Info, ((NU8) 37), (*(*Fn_108199).Name).S);
goto LA4;
LA7: ;
Symtabaddat_60124(&(*C_108198).Tab, Fn_108199, At_108200);
LA4: ;
}
N_NIMCALL(void, Addinterfaceoverloadablesymat_108240)(TY107012* C_108242, TY55548* Sym_108243, NI At_108244) {
Addoverloadablesymat_108196(C_108242, Sym_108243, ((NI) (At_108244)));
Addinterfacedeclaux_108143(C_108242, Sym_108243);
}
N_NIMCALL(void, Addinterfacedeclat_108191)(TY107012* C_108193, TY55548* Sym_108194, NI At_108195) {
Adddeclat_108128(C_108193, Sym_108194, At_108195);
Addinterfacedeclaux_108143(C_108193, Sym_108194);
}
N_NOINLINE(void, lookupsInit)(void) {
}

