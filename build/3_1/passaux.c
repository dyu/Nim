/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY105006 TY105006;
typedef struct TY105002 TY105002;
typedef struct TY55548 TY55548;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY93031 TY93031;
typedef struct TY55526 TY55526;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55552 TY55552;
typedef struct TY54011 TY54011;
typedef struct TY47538 TY47538;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
typedef struct TY55520 TY55520;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY39221 TY39221;
typedef struct TY93029 TY93029;
typedef struct TY60215 TY60215;
typedef struct TY60213 TY60213;
typedef struct TY60211 TY60211;
typedef struct TY55564 TY55564;
typedef struct TY55562 TY55562;
typedef struct TY55560 TY55560;
typedef struct TY55550 TY55550;
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
typedef N_NIMCALL_PTR(TY105002*, TY105007) (TY55548* Module_105008, NimStringDesc* Filename_105009);
typedef N_NIMCALL_PTR(TY105002*, TY105012) (TY55548* Module_105013, NimStringDesc* Filename_105014, TY93031* Rd_105015);
typedef N_NIMCALL_PTR(TY55526*, TY105018) (TY105002* P_105019, TY55526* N_105020);
typedef N_NIMCALL_PTR(TY55526*, TY105023) (TY105002* P_105024, TY55526* Toplevelstmt_105025);
struct TY105006 {
TY105007 Open;
TY105012 Opencached;
TY105018 Close;
TY105023 Process;
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
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
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
struct TY105002 {
  TNimObject Sup;
};
struct TY60211 {
NI Key;
NI Val;
};
struct TY60215 {
NI Counter;
TY60213* Data;
};
struct TY93029 {
NI Lastidxkey;
NI Lastidxval;
TY60215 Tab;
TY52008* R;
NI Offset;
};
struct TY55560 {
TY54005* Key;
TNimObject* Val;
};
struct TY55564 {
NI Counter;
TY55562* Data;
};
struct TY93031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY39221* Moddeps;
TY39221* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY93029 Index;
TY93029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY55564 Syms;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY39221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY60213 {
  TGenericSeq Sup;
  TY60211 data[SEQ_DECL_SIZE];
};
struct TY55562 {
  TGenericSeq Sup;
  TY55560 data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initpass_105031)(TY105006* P_105034);
N_NIMCALL(TY105002*, Verboseopen_186004)(TY55548* S_186006, NimStringDesc* Filename_186007);
N_NIMCALL(void, Rawmessage_48045)(NU8 Msg_48047, NimStringDesc* Arg_48048);
N_NIMCALL(TY55526*, Verboseprocess_186013)(TY105002* Context_186015, TY55526* N_186016);
N_NIMCALL(void, Internalerror_48163)(NimStringDesc* Errmsg_48165);
N_NIMCALL(void, Message_48149)(TY47538 Info_48151, NU8 Msg_48152, NimStringDesc* Arg_48153);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19403);
N_NIMCALL(TY55526*, Cleanup_186037)(TY105002* C_186039, TY55526* N_186040);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(TY55548*, Getmodule_60198)(TY55548* S_60200);
N_NIMCALL(NIM_BOOL, Astneeded_105057)(TY55548* S_105059);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
STRING_LITERAL(TMP195920, "logpass: context is not nil", 27);
extern NI Gverbosity_46085;
extern NI Gid_55693;
extern NU32 Gglobaloptions_46079;
extern TY55526* Emptynode_55858;
extern TY11196 Gch_11214;
N_NIMCALL(TY105002*, Verboseopen_186004)(TY55548* S_186006, NimStringDesc* Filename_186007) {
TY105002* Result_186008;
Result_186008 = 0;
Result_186008 = NIM_NIL;
if (!(0 < Gverbosity_46085)) goto LA2;
Rawmessage_48045(((NU8) 231), (*(*S_186006).Name).S);
LA2: ;
return Result_186008;
}
N_NIMCALL(TY55526*, Verboseprocess_186013)(TY105002* Context_186015, TY55526* N_186016) {
TY55526* Result_186017;
NimStringDesc* LOC7;
Result_186017 = 0;
Result_186017 = N_186016;
if (!!((Context_186015 == NIM_NIL))) goto LA2;
Internalerror_48163(((NimStringDesc*) &TMP195920));
LA2: ;
if (!(Gverbosity_46085 == 3)) goto LA5;
LOC7 = 0;
LOC7 = nimIntToStr(Gid_55693);
Message_48149((*N_186016).Info, ((NU8) 231), LOC7);
LA5: ;
return Result_186017;
}
N_NIMCALL(TY105006, Verbosepass_186033)(void) {
TY105006 Result_186035;
memset((void*)&Result_186035, 0, sizeof(Result_186035));
Initpass_105031(&Result_186035);
Result_186035.Open = Verboseopen_186004;
Result_186035.Process = Verboseprocess_186013;
return Result_186035;
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
N_NIMCALL(TY55526*, Cleanup_186037)(TY105002* C_186039, TY55526* N_186040) {
TY55526* Result_186041;
TY55548* S_186042;
NI I_186077;
NI HEX3Atmp_186158;
NI LOC4;
NI Res_186160;
TY55526* LOC6;
NIM_BOOL LOC11;
TY55548* LOC12;
NIM_BOOL LOC14;
Result_186041 = 0;
S_186042 = 0;
Result_186041 = N_186040;
if (!((Gglobaloptions_46079 &(1<<((((NU8) 4))&31)))!=0)) goto LA2;
goto BeforeRet;
LA2: ;
switch ((*N_186040).Kind) {
case ((NU8) 101):
I_186077 = 0;
HEX3Atmp_186158 = 0;
LOC4 = Sonslen_55804(N_186040);
HEX3Atmp_186158 = (NI32)(LOC4 - 1);
Res_186160 = 0;
Res_186160 = 0;
while (1) {
if (!(Res_186160 <= HEX3Atmp_186158)) goto LA5;
I_186077 = Res_186160;
LOC6 = 0;
LOC6 = Cleanup_186037(C_186039, (*N_186040).KindU.S6.Sons->data[I_186077]);
Res_186160 += 1;
} LA5: ;
break;
case ((NU8) 69):
case ((NU8) 70):
if (!((*(*N_186040).KindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA8;
S_186042 = (*(*N_186040).KindU.S6.Sons->data[0]).KindU.S4.Sym;
LOC12 = 0;
LOC12 = Getmodule_60198(S_186042);
LOC11 = !((((*LOC12).Flags &(1<<((((NU8) 28))&31)))!=0));
if (!(LOC11)) goto LA13;
LOC14 = Astneeded_105057(S_186042);
LOC11 = !(LOC14);
LA13: ;
if (!LOC11) goto LA15;
asgnRefNoCycle((void**) &(*(*S_186042).Ast).KindU.S6.Sons->data[4], Emptynode_55858);
LA15: ;
LA8: ;
break;
default:
break;
}
BeforeRet: ;
return Result_186041;
}
N_NIMCALL(TY105006, Cleanuppass_186161)(void) {
TY105006 Result_186163;
memset((void*)&Result_186163, 0, sizeof(Result_186163));
Initpass_105031(&Result_186163);
Result_186163.Process = Cleanup_186037;
Result_186163.Close = Cleanup_186037;
return Result_186163;
}
N_NOINLINE(void, passauxInit)(void) {
}

