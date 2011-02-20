/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <errno.h>
#include <string.h>
typedef struct TY34021 TY34021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY33337 TY33337;
typedef struct TY33461 TY33461;
typedef struct TY422 TY422;
typedef struct TY418 TY418;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY27595 TY27595;
typedef struct TY27593 TY27593;
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
typedef N_STDCALL_PTR(NCSTRING, TY27650) (void);
struct TY33337 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TY33461 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef N_STDCALL_PTR(NI32, TY27580) (NI Handle_27581, NCSTRING Buf_27582, NI32 Size_27583);
typedef N_STDCALL_PTR(NCSTRING, TY27645) (void);
typedef N_STDCALL_PTR(NI32, TY27647) (NCSTRING Para1_27648);
typedef N_STDCALL_PTR(NI32, TY27633) (NCSTRING Lpfilename_27634);
typedef N_STDCALL_PTR(NI32, TY27562) (NI32 Nbufferlength_27563, NCSTRING Lpbuffer_27564);
typedef N_STDCALL_PTR(NI32, TY27548) (void);
typedef N_STDCALL_PTR(NI32, TY27550) (NI32 Dwflags_27551, void* Lpsource_27552, NI32 Dwmessageid_27553, NI32 Dwlanguageid_27554, void* Lpbuffer_27555, NI32 Nsize_27556, void* Arguments_27557);
typedef N_STDCALL_PTR(void, TY27559) (void* P_27560);
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
struct TY418 {
  TY416 Sup;
};
struct TY422 {
  TY418 Sup;
};
typedef N_STDCALL_PTR(NI32, TY27569) (NCSTRING Pathname_27570, void* Security_27571);
typedef N_STDCALL_PTR(NI32, TY27576) (NCSTRING Lpname_27577, NCSTRING Lpvalue_27578);
struct TY27593 {
NI32 Dwlowdatetime;
NI32 Dwhighdatetime;
};
typedef NIM_CHAR TY27606[260];
typedef NIM_CHAR TY27609[14];
struct TY27595 {
NI32 Dwfileattributes;
TY27593 Ftcreationtime;
TY27593 Ftlastaccesstime;
TY27593 Ftlastwritetime;
NI32 Nfilesizehigh;
NI32 Nfilesizelow;
NI32 Dwreserved0;
NI32 Dwreserved1;
TY27606 Cfilename;
TY27609 Calternatefilename;
};
typedef N_STDCALL_PTR(NI, TY27613) (NCSTRING Lpfilename_27614, TY27595* Lpfindfiledata_27616);
typedef N_STDCALL_PTR(void, TY27623) (NI Hfindfile_27624);
typedef N_STDCALL_PTR(void, TY27664) (NI32 Dwmilliseconds_27665);
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY34021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(TY34021*, nosparseCmdLine)(NimStringDesc* C_35232);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18632, NI Newlen_18633);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18642, NI Elemsize_18643);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18508);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18589, NI Addlen_18590);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13026, void* Src_13027);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_33460, TY33461* Result);
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1355);
N_NIMCALL(NimStringDesc*, Getenv_34218)(NimStringDesc* Key_34220);
N_NIMCALL(NI, Findenvvar_34201)(NimStringDesc* Key_34203);
N_NIMCALL(void, Getenvvarsc_34044)(void);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_24848, NimStringDesc* Prefix_24849);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_25216, NIM_CHAR Sub_25217, NI Start_25218);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_33203, NimStringDesc* Tail_33204);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_33336, TY33337* Result);
N_NIMCALL(NI, Searchextpos_33427)(NimStringDesc* S_33429);
N_NIMCALL(NimStringDesc*, Normext_33421)(NimStringDesc* Ext_33423);
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_31004);
N_NIMCALL(void*, newObj)(TNimType* Typ_13710, NI Size_13711);
N_NIMCALL(void, raiseException)(E_Base* E_5604, NCSTRING Ename_5605);
N_NIMCALL(void, Rawcreatedir_35012)(NimStringDesc* Dir_35014);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18449, NimStringDesc* B_18450);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_33645, NimStringDesc* Pathb_33646);
N_NIMCALL(NI, Cmp_1327)(NimStringDesc* X_1329, NimStringDesc* Y_1330);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_23587, NimStringDesc* B_23588);
N_NIMCALL(NI64, ntDiffTime)(NI32 A_28435, NI32 B_28436);
N_NIMCALL(NI32, nosgetLastModificationTime)(NimStringDesc* File_32203);
N_NIMCALL(NI32, Wintimetounixtime_29261)(NI64 T_29263);
N_NIMCALL(NI64, Rdfiletime_27651)(TY27593 F_27653);
STRING_LITERAL(TMP191623, "", 0);
STRING_LITERAL(TMP191640, "C:\\", 3);
STRING_LITERAL(TMP191641, ".", 1);
STRING_LITERAL(TMP191642, "..\\", 3);
STRING_LITERAL(TMP191646, "USERPROFILE", 11);
STRING_LITERAL(TMP191647, "\\", 1);
STRING_LITERAL(TMP191650, "unknown OS error", 16);
STRING_LITERAL(TMP191726, "APPDATA", 7);
NIM_BOOL Envcomputed_34020;
TY34021* Environment_34038;
extern TNimType* NTI34021; /* seq[string] */
extern TY10996 Gch_11014;
TY34021* Ownargv_36202;
extern TY27650 Dl_27649;
extern TY27580 Dl_27579;
extern TY27645 Dl_27644;
extern TY27647 Dl_27646;
extern TY27633 Dl_27632;
extern TY27562 Dl_27561;
extern TY27548 Dl_27547;
extern TY27550 Dl_27549;
extern TY27559 Dl_27558;
extern TNimType* NTI31017; /* ref EOS */
extern TNimType* NTI422; /* EOS */
extern TY27569 Dl_27568;
extern TY27576 Dl_27575;
extern TY27613 Dl_27612;
extern TY27623 Dl_27622;
extern TY27664 Dl_27663;
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
N_NIMCALL(TY34021*, nosparseCmdLine)(NimStringDesc* C_35232) {
TY34021* Result_35234;
NI I_35251;
NimStringDesc* A_35252;
NIM_BOOL LOC3;
NIM_BOOL Inquote_35271;
NI J_35272;
NI K_35297;
NI HEX3Atmp_35419;
NI Res_35421;
Result_35234 = 0;
Result_35234 = (TY34021*) newSeq(NTI34021, 0);
I_35251 = 0;
I_35251 = 0;
A_35252 = 0;
A_35252 = copyString(((NimStringDesc*) &TMP191623));
while (1) {
A_35252 = setLengthStr(A_35252, 0);
while (1) {
LOC3 = ((NU8)(C_35232->data[I_35251]) == (NU8)(32));
if (LOC3) goto LA4;
LOC3 = ((NU8)(C_35232->data[I_35251]) == (NU8)(9));
LA4: ;
if (!LOC3) goto LA2;
I_35251 += 1;
} LA2: ;
if (!((NU8)(C_35232->data[I_35251]) == (NU8)(0))) goto LA6;
goto LA1;
LA6: ;
Inquote_35271 = 0;
Inquote_35271 = NIM_FALSE;
while (1) {
switch (((NU8)(C_35232->data[I_35251]))) {
case 0:
goto LA8;
break;
case 92:
J_35272 = 0;
J_35272 = I_35251;
while (1) {
if (!((NU8)(C_35232->data[J_35272]) == (NU8)(92))) goto LA9;
J_35272 += 1;
} LA9: ;
if (!((NU8)(C_35232->data[J_35272]) == (NU8)(34))) goto LA11;
K_35297 = 0;
HEX3Atmp_35419 = 0;
HEX3Atmp_35419 = (NI64)((NI64)(J_35272 - I_35251) / 2);
Res_35421 = 0;
Res_35421 = 1;
while (1) {
if (!(Res_35421 <= HEX3Atmp_35419)) goto LA13;
K_35297 = Res_35421;
A_35252 = addChar(A_35252, 92);
Res_35421 += 1;
} LA13: ;
if (!((NI64)((NI64)(J_35272 - I_35251) % 2) == 0)) goto LA15;
I_35251 = J_35272;
goto LA14;
LA15: ;
A_35252 = addChar(A_35252, 34);
I_35251 = (NI64)(J_35272 + 1);
LA14: ;
goto LA10;
LA11: ;
A_35252 = addChar(A_35252, C_35232->data[I_35251]);
I_35251 += 1;
LA10: ;
break;
case 34:
I_35251 += 1;
if (!!(Inquote_35271)) goto LA18;
Inquote_35271 = NIM_TRUE;
goto LA17;
LA18: ;
if (!((NU8)(C_35232->data[I_35251]) == (NU8)(34))) goto LA20;
A_35252 = addChar(A_35252, C_35232->data[I_35251]);
I_35251 += 1;
goto LA17;
LA20: ;
Inquote_35271 = NIM_FALSE;
goto LA8;
LA17: ;
break;
case 32:
case 9:
if (!!(Inquote_35271)) goto LA23;
goto LA8;
LA23: ;
A_35252 = addChar(A_35252, C_35232->data[I_35251]);
I_35251 += 1;
break;
default:
A_35252 = addChar(A_35252, C_35232->data[I_35251]);
I_35251 += 1;
break;
}
} LA8: ;
Result_35234 = (TY34021*) incrSeq(&(Result_35234)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Result_35234->data[Result_35234->Sup.len-1], copyString(A_35252));
} LA1: ;
return Result_35234;
}
N_NIMCALL(NI, nosparamCount)(void) {
NI Result_36205;
NCSTRING LOC4;
NimStringDesc* LOC5;
Result_36205 = 0;
if (!Ownargv_36202 == 0) goto LA2;
LOC4 = Dl_27649();
LOC5 = 0;
LOC5 = cstrToNimstr(LOC4);
asgnRefNoCycle((void**) &Ownargv_36202, nosparseCmdLine(LOC5));
LA2: ;
Result_36205 = (NI64)(Ownargv_36202->Sup.len - 1);
return Result_36205;
}
N_NIMCALL(NimStringDesc*, nosparamStr)(NI I_36226) {
NimStringDesc* Result_36227;
NCSTRING LOC4;
NimStringDesc* LOC5;
Result_36227 = 0;
if (!Ownargv_36202 == 0) goto LA2;
LOC4 = Dl_27649();
LOC5 = 0;
LOC5 = cstrToNimstr(LOC4);
asgnRefNoCycle((void**) &Ownargv_36202, nosparseCmdLine(LOC5));
LA2: ;
Result_36227 = copyString(Ownargv_36202->data[I_36226]);
goto BeforeRet;
BeforeRet: ;
return Result_36227;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI64)((NI64)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_31256) {
NimStringDesc* Result_31257;
NI Start_31258;
NIM_BOOL LOC4;
NI I_31407;
NIM_BOOL LOC10;
NIM_BOOL LOC11;
Result_31257 = 0;
Start_31258 = 0;
if (!((NU8)(Path_31256->data[0]) == (NU8)(47))) goto LA2;
Result_31257 = copyString(((NimStringDesc*) &TMP191640));
Start_31258 = 1;
goto LA1;
LA2: ;
LOC4 = ((NU8)(Path_31256->data[0]) == (NU8)(46));
if (!(LOC4)) goto LA5;
LOC4 = ((NU8)(Path_31256->data[1]) == (NU8)(47));
LA5: ;
if (!LOC4) goto LA6;
Result_31257 = copyString(((NimStringDesc*) &TMP191641));
Start_31258 = 2;
goto LA1;
LA6: ;
Result_31257 = copyString(((NimStringDesc*) &TMP191623));
Start_31258 = 0;
LA1: ;
I_31407 = 0;
I_31407 = Start_31258;
while (1) {
if (!(I_31407 < Path_31256->Sup.len)) goto LA8;
LOC11 = ((NU8)(Path_31256->data[I_31407]) == (NU8)(46));
if (!(LOC11)) goto LA12;
LOC11 = ((NU8)(Path_31256->data[(NI64)(I_31407 + 1)]) == (NU8)(46));
LA12: ;
LOC10 = LOC11;
if (!(LOC10)) goto LA13;
LOC10 = ((NU8)(Path_31256->data[(NI64)(I_31407 + 2)]) == (NU8)(47));
LA13: ;
if (!LOC10) goto LA14;
Result_31257 = resizeString(Result_31257, 3);
appendString(Result_31257, ((NimStringDesc*) &TMP191642));
I_31407 += 3;
goto LA9;
LA14: ;
if (!((NU8)(Path_31256->data[I_31407]) == (NU8)(47))) goto LA16;
Result_31257 = addChar(Result_31257, 92);
I_31407 += 1;
goto LA9;
LA16: ;
Result_31257 = addChar(Result_31257, Path_31256->data[I_31407]);
I_31407 += 1;
LA9: ;
} LA8: ;
return Result_31257;
}
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_33336, TY33337* Result) {
NI Seppos_33341;
NI I_33351;
NI HEX3Atmp_33366;
NI Res_33368;
memset((void*)Result, 0, sizeof((*Result)));
Seppos_33341 = 0;
Seppos_33341 = -1;
I_33351 = 0;
HEX3Atmp_33366 = 0;
HEX3Atmp_33366 = (NI64)(Path_33336->Sup.len - 1);
Res_33368 = 0;
Res_33368 = HEX3Atmp_33366;
while (1) {
if (!(0 <= Res_33368)) goto LA1;
I_33351 = Res_33368;
if (!(((NU8)(Path_33336->data[I_33351])) == ((NU8)(92)) || ((NU8)(Path_33336->data[I_33351])) == ((NU8)(47)))) goto LA3;
Seppos_33341 = I_33351;
goto LA1;
LA3: ;
Res_33368 -= 1;
} LA1: ;
if (!(0 <= Seppos_33341)) goto LA6;
unsureAsgnRef((void**) &(*Result).Head, copyStrLast(Path_33336, 0, (NI64)(Seppos_33341 - 1)));
unsureAsgnRef((void**) &(*Result).Tail, copyStr(Path_33336, (NI64)(Seppos_33341 + 1)));
goto LA5;
LA6: ;
unsureAsgnRef((void**) &(*Result).Head, copyString(((NimStringDesc*) &TMP191623)));
unsureAsgnRef((void**) &(*Result).Tail, copyString(Path_33336));
LA5: ;
}
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_33460, TY33461* Result) {
NIM_BOOL LOC2;
NI Seppos_33485;
NI Dotpos_33488;
NI I_33498;
NI HEX3Atmp_33521;
NI Res_33523;
NIM_BOOL LOC11;
memset((void*)Result, 0, sizeof((*Result)));
LOC2 = (Path_33460->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_33460->data[(NI64)(Path_33460->Sup.len - 1)])) == ((NU8)(92)) || ((NU8)(Path_33460->data[(NI64)(Path_33460->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
unsureAsgnRef((void**) &(*Result).Dir, copyString(Path_33460));
unsureAsgnRef((void**) &(*Result).Name, copyString(((NimStringDesc*) &TMP191623)));
unsureAsgnRef((void**) &(*Result).Ext, copyString(((NimStringDesc*) &TMP191623)));
goto LA1;
LA4: ;
Seppos_33485 = 0;
Seppos_33485 = -1;
Dotpos_33488 = 0;
Dotpos_33488 = Path_33460->Sup.len;
I_33498 = 0;
HEX3Atmp_33521 = 0;
HEX3Atmp_33521 = (NI64)(Path_33460->Sup.len - 1);
Res_33523 = 0;
Res_33523 = HEX3Atmp_33521;
while (1) {
if (!(0 <= Res_33523)) goto LA6;
I_33498 = Res_33523;
if (!((NU8)(Path_33460->data[I_33498]) == (NU8)(46))) goto LA8;
LOC11 = (Dotpos_33488 == Path_33460->Sup.len);
if (!(LOC11)) goto LA12;
LOC11 = (0 < I_33498);
LA12: ;
if (!LOC11) goto LA13;
Dotpos_33488 = I_33498;
LA13: ;
goto LA7;
LA8: ;
if (!(((NU8)(Path_33460->data[I_33498])) == ((NU8)(92)) || ((NU8)(Path_33460->data[I_33498])) == ((NU8)(47)))) goto LA15;
Seppos_33485 = I_33498;
goto LA6;
goto LA7;
LA15: ;
LA7: ;
Res_33523 -= 1;
} LA6: ;
unsureAsgnRef((void**) &(*Result).Dir, copyStrLast(Path_33460, 0, (NI64)(Seppos_33485 - 1)));
unsureAsgnRef((void**) &(*Result).Name, copyStrLast(Path_33460, (NI64)(Seppos_33485 + 1), (NI64)(Dotpos_33488 - 1)));
unsureAsgnRef((void**) &(*Result).Ext, copyStr(Path_33460, Dotpos_33488));
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
NimStringDesc* Result_36803;
NI32 Len_36804;
Result_36803 = 0;
Result_36803 = mnewString(256);
Len_36804 = 0;
Len_36804 = Dl_27579(0, Result_36803->data, ((NI32) 256));
Result_36803 = setLengthStr(Result_36803, ((NI) (Len_36804)));
return Result_36803;
}
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void) {
NimStringDesc* Result_37009;
NimStringDesc* LOC1;
TY33461 LOC2;
Result_37009 = 0;
LOC1 = 0;
LOC1 = nosgetAppFilename();
memset((void*)&LOC2, 0, sizeof(LOC2));
nossplitFile(LOC1, &LOC2);
Result_37009 = copyString(LOC2.Dir);
return Result_37009;
}
N_NIMCALL(void, Getenvvarsc_34044)(void) {
NCSTRING Env_34046;
NCSTRING E_34047;
NCSTRING Eend_34048;
NimStringDesc* LOC8;
NI32 LOC12;
if (!!(Envcomputed_34020)) goto LA2;
Env_34046 = 0;
Env_34046 = Dl_27644();
E_34047 = 0;
E_34047 = Env_34046;
if (!(E_34047 == NIM_NIL)) goto LA5;
goto BeforeRet;
LA5: ;
while (1) {
Eend_34048 = 0;
Eend_34048 = strchr(E_34047, ((NI32) 0));
LOC8 = 0;
LOC8 = cstrToNimstr(E_34047);
Environment_34038 = (TY34021*) incrSeq(&(Environment_34038)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_34038->data[Environment_34038->Sup.len-1], copyString(LOC8));
E_34047 = ((NCSTRING) ((NI64)(((NI) (Eend_34048)) + 1)));
if (!((NU8)(Eend_34048[1]) == (NU8)(0))) goto LA10;
goto LA7;
LA10: ;
} LA7: ;
Envcomputed_34020 = NIM_TRUE;
LOC12 = Dl_27646(Env_34046);
LA2: ;
BeforeRet: ;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617) {
(*Dest_18616).data[((*Dest_18616).Sup.len)-0] = C_18617;
(*Dest_18616).data[((NI64)((*Dest_18616).Sup.len + 1))-0] = 0;
(*Dest_18616).Sup.len += 1;
}
N_NIMCALL(NI, Findenvvar_34201)(NimStringDesc* Key_34203) {
NI Result_34204;
NimStringDesc* Temp_34205;
NimStringDesc* LOC1;
NI I_34214;
NI HEX3Atmp_34215;
NI Res_34217;
NIM_BOOL LOC4;
Result_34204 = 0;
Getenvvarsc_34044();
Temp_34205 = 0;
LOC1 = 0;
LOC1 = rawNewString(Key_34203->Sup.len + 1);
appendString(LOC1, Key_34203);
appendChar(LOC1, 61);
Temp_34205 = LOC1;
I_34214 = 0;
HEX3Atmp_34215 = 0;
HEX3Atmp_34215 = (Environment_34038->Sup.len-1);
Res_34217 = 0;
Res_34217 = 0;
while (1) {
if (!(Res_34217 <= HEX3Atmp_34215)) goto LA2;
I_34214 = Res_34217;
LOC4 = nsuStartsWith(Environment_34038->data[I_34214], Temp_34205);
if (!LOC4) goto LA5;
Result_34204 = I_34214;
goto BeforeRet;
LA5: ;
Res_34217 += 1;
} LA2: ;
Result_34204 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_34204;
}
N_NIMCALL(NimStringDesc*, Getenv_34218)(NimStringDesc* Key_34220) {
NimStringDesc* Result_34221;
NI I_34222;
NI LOC4;
NCSTRING Env_34225;
Result_34221 = 0;
I_34222 = 0;
I_34222 = Findenvvar_34201(Key_34220);
if (!(0 <= I_34222)) goto LA2;
LOC4 = nsuFindChar(Environment_34038->data[I_34222], 61, 0);
Result_34221 = copyStr(Environment_34038->data[I_34222], (NI64)(LOC4 + 1));
goto BeforeRet;
goto LA1;
LA2: ;
Env_34225 = 0;
Env_34225 = getenv(Key_34220->data);
if (!(Env_34225 == NIM_NIL)) goto LA6;
Result_34221 = copyString(((NimStringDesc*) &TMP191623));
goto BeforeRet;
LA6: ;
Result_34221 = cstrToNimstr(Env_34225);
LA1: ;
BeforeRet: ;
return Result_34221;
}
N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void) {
NimStringDesc* Result_35833;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
Result_35833 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getenv_34218(((NimStringDesc*) &TMP191646));
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP191647));
Result_35833 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_35833;
}
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_33203, NimStringDesc* Tail_33204) {
NimStringDesc* Result_33205;
NimStringDesc* LOC9;
NimStringDesc* LOC10;
NimStringDesc* LOC11;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
Result_33205 = 0;
if (!(Head_33203->Sup.len == 0)) goto LA2;
Result_33205 = copyString(Tail_33204);
goto LA1;
LA2: ;
if (!(((NU8)(Head_33203->data[(NI64)(Head_33203->Sup.len - 1)])) == ((NU8)(92)) || ((NU8)(Head_33203->data[(NI64)(Head_33203->Sup.len - 1)])) == ((NU8)(47)))) goto LA4;
if (!(((NU8)(Tail_33204->data[0])) == ((NU8)(92)) || ((NU8)(Tail_33204->data[0])) == ((NU8)(47)))) goto LA7;
LOC9 = 0;
LOC10 = 0;
LOC10 = copyStr(Tail_33204, 1);
LOC9 = rawNewString(Head_33203->Sup.len + LOC10->Sup.len + 0);
appendString(LOC9, Head_33203);
appendString(LOC9, LOC10);
Result_33205 = LOC9;
goto LA6;
LA7: ;
LOC11 = 0;
LOC11 = rawNewString(Head_33203->Sup.len + Tail_33204->Sup.len + 0);
appendString(LOC11, Head_33203);
appendString(LOC11, Tail_33204);
Result_33205 = LOC11;
LA6: ;
goto LA1;
LA4: ;
if (!(((NU8)(Tail_33204->data[0])) == ((NU8)(92)) || ((NU8)(Tail_33204->data[0])) == ((NU8)(47)))) goto LA13;
LOC15 = 0;
LOC15 = rawNewString(Head_33203->Sup.len + Tail_33204->Sup.len + 0);
appendString(LOC15, Head_33203);
appendString(LOC15, Tail_33204);
Result_33205 = LOC15;
goto LA12;
LA13: ;
LOC16 = 0;
LOC16 = rawNewString(Head_33203->Sup.len + Tail_33204->Sup.len + 1);
appendString(LOC16, Head_33203);
appendChar(LOC16, 92);
appendString(LOC16, Tail_33204);
Result_33205 = LOC16;
LA12: ;
LA1: ;
return Result_33205;
}
N_NIMCALL(NimStringDesc*, HEX2F_33280)(NimStringDesc* Head_33282, NimStringDesc* Tail_33283) {
NimStringDesc* Result_33284;
Result_33284 = 0;
Result_33284 = nosJoinPath(Head_33282, Tail_33283);
goto BeforeRet;
BeforeRet: ;
return Result_33284;
}
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_33530) {
NimStringDesc* Result_33531;
NIM_BOOL LOC2;
TY33337 LOC6;
Result_33531 = 0;
LOC2 = (Path_33530->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_33530->data[(NI64)(Path_33530->Sup.len - 1)])) == ((NU8)(92)) || ((NU8)(Path_33530->data[(NI64)(Path_33530->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
Result_33531 = copyString(((NimStringDesc*) &TMP191623));
goto LA1;
LA4: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
nosSplitPath(Path_33530, &LOC6);
Result_33531 = copyString(LOC6.Tail);
LA1: ;
return Result_33531;
}
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_31803) {
NIM_BOOL Result_31804;
NI32 A_31805;
Result_31804 = 0;
A_31805 = 0;
A_31805 = Dl_27632(Filename_31803->data);
if (!!((A_31805 == ((NI32) -1)))) goto LA2;
Result_31804 = ((NI32)(A_31805 & ((NI32) 16)) == ((NI32) 0));
LA2: ;
return Result_31804;
}
N_NIMCALL(NI, Searchextpos_33427)(NimStringDesc* S_33429) {
NI Result_33430;
NI I_33440;
NI HEX3Atmp_33455;
NI Res_33457;
Result_33430 = 0;
Result_33430 = -1;
I_33440 = 0;
HEX3Atmp_33455 = 0;
HEX3Atmp_33455 = (NI64)(S_33429->Sup.len - 1);
Res_33457 = 0;
Res_33457 = HEX3Atmp_33455;
while (1) {
if (!(1 <= Res_33457)) goto LA1;
I_33440 = Res_33457;
if (!((NU8)(S_33429->data[I_33440]) == (NU8)(46))) goto LA3;
Result_33430 = I_33440;
goto LA1;
goto LA2;
LA3: ;
if (!(((NU8)(S_33429->data[I_33440])) == ((NU8)(92)) || ((NU8)(S_33429->data[I_33440])) == ((NU8)(47)))) goto LA5;
goto LA1;
goto LA2;
LA5: ;
LA2: ;
Res_33457 -= 1;
} LA1: ;
return Result_33430;
}
N_NIMCALL(NimStringDesc*, Normext_33421)(NimStringDesc* Ext_33423) {
NimStringDesc* Result_33424;
NIM_BOOL LOC2;
NimStringDesc* LOC6;
Result_33424 = 0;
LOC2 = ((Ext_33423) && (Ext_33423)->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = ((NU8)(Ext_33423->data[0]) == (NU8)(46));
LA3: ;
if (!LOC2) goto LA4;
Result_33424 = copyString(Ext_33423);
goto LA1;
LA4: ;
LOC6 = 0;
LOC6 = rawNewString(Ext_33423->Sup.len + 1);
appendChar(LOC6, 46);
appendString(LOC6, Ext_33423);
Result_33424 = LOC6;
LA1: ;
return Result_33424;
}
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_33620, NimStringDesc* Ext_33621) {
NimStringDesc* Result_33622;
NI Extpos_33623;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
Result_33622 = 0;
Extpos_33623 = 0;
Extpos_33623 = Searchextpos_33427(Filename_33620);
if (!(Extpos_33623 < 0)) goto LA2;
LOC4 = 0;
LOC5 = 0;
LOC5 = Normext_33421(Ext_33621);
LOC4 = rawNewString(Filename_33620->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_33620);
appendString(LOC4, LOC5);
Result_33622 = LOC4;
goto LA1;
LA2: ;
LOC6 = 0;
LOC7 = 0;
LOC7 = copyStrLast(Filename_33620, 0, (NI64)(Extpos_33623 - 1));
LOC8 = 0;
LOC8 = Normext_33421(Ext_33621);
LOC6 = rawNewString(LOC7->Sup.len + LOC8->Sup.len + 0);
appendString(LOC6, LOC7);
appendString(LOC6, LOC8);
Result_33622 = LOC6;
LA1: ;
return Result_33622;
}
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_31004) {
NI32 Err_31009;
NCSTRING Msgbuf_31012;
NI32 LOC8;
NimStringDesc* M_31016;
TY422* E_31018;
TY422* E_31204;
NCSTRING LOC19;
TY422* E_31221;
TY422* E_31238;
if (!(Msg_31004->Sup.len == 0)) goto LA2;
Err_31009 = 0;
Err_31009 = Dl_27547();
if (!!((Err_31009 == ((NI32) 0)))) goto LA5;
Msgbuf_31012 = 0;
LOC8 = Dl_27549(((NI32) 4864), NIM_NIL, Err_31009, ((NI32) 0), ((void*) (&Msgbuf_31012)), ((NI32) 0), NIM_NIL);
if (!!((LOC8 == ((NI32) 0)))) goto LA9;
M_31016 = 0;
M_31016 = cstrToNimstr(Msgbuf_31012);
if (!!((Msgbuf_31012 == NIM_NIL))) goto LA12;
Dl_27558(((void*) (Msgbuf_31012)));
LA12: ;
E_31018 = 0;
E_31018 = (TY422*) newObj(NTI31017, sizeof(TY422));
(*E_31018).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_31018).Sup.Sup.Sup.message, copyString(M_31016));
raiseException((E_Base*)E_31018, "EOS");
LA9: ;
LA5: ;
if (!!((errno == ((NI32) 0)))) goto LA16;
E_31204 = 0;
E_31204 = (TY422*) newObj(NTI31017, sizeof(TY422));
(*E_31204).Sup.Sup.Sup.Sup.m_type = NTI422;
LOC19 = strerror(errno);
asgnRefNoCycle((void**) &(*E_31204).Sup.Sup.Sup.message, cstrToNimstr(LOC19));
raiseException((E_Base*)E_31204, "EOS");
goto LA15;
LA16: ;
E_31221 = 0;
E_31221 = (TY422*) newObj(NTI31017, sizeof(TY422));
(*E_31221).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_31221).Sup.Sup.Sup.message, copyString(((NimStringDesc*) &TMP191650)));
raiseException((E_Base*)E_31221, "EOS");
LA15: ;
goto LA1;
LA2: ;
E_31238 = 0;
E_31238 = (TY422*) newObj(NTI31017, sizeof(TY422));
(*E_31238).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_31238).Sup.Sup.Sup.message, copyString(Msg_31004));
raiseException((E_Base*)E_31238, "EOS");
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
NimStringDesc* Result_32812;
NI32 L_32814;
Result_32812 = 0;
Result_32812 = mnewString(512);
L_32814 = 0;
L_32814 = Dl_27561(((NI32) 512), Result_32812->data);
if (!(L_32814 == ((NI32) 0))) goto LA2;
nosOSError(((NimStringDesc*) &TMP191623));
LA2: ;
Result_32812 = setLengthStr(Result_32812, ((NI) (L_32814)));
return Result_32812;
}
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_33251, NI Parts_33251Len0) {
NimStringDesc* Result_33252;
NI I_33276;
NI HEX3Atmp_33277;
NI Res_33279;
Result_33252 = 0;
Result_33252 = copyString(Parts_33251[0]);
I_33276 = 0;
HEX3Atmp_33277 = 0;
HEX3Atmp_33277 = (Parts_33251Len0-1);
Res_33279 = 0;
Res_33279 = 1;
while (1) {
if (!(Res_33279 <= HEX3Atmp_33277)) goto LA1;
I_33276 = Res_33279;
Result_33252 = nosJoinPath(Result_33252, Parts_33251[I_33276]);
Res_33279 += 1;
} LA1: ;
return Result_33252;
}
N_NIMCALL(void, Rawcreatedir_35012)(NimStringDesc* Dir_35014) {
NIM_BOOL LOC2;
NI32 LOC3;
NI32 LOC5;
LOC3 = Dl_27568(Dir_35014->data, NIM_NIL);
LOC2 = (LOC3 == ((NI32) 0));
if (!(LOC2)) goto LA4;
LOC5 = Dl_27547();
LOC2 = !((LOC5 == ((NI32) 183)));
LA4: ;
if (!LOC2) goto LA6;
nosOSError(((NimStringDesc*) &TMP191623));
LA6: ;
}
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_35203) {
NI I_35214;
NI HEX3Atmp_35227;
NI Res_35229;
NimStringDesc* LOC5;
I_35214 = 0;
HEX3Atmp_35227 = 0;
HEX3Atmp_35227 = (NI64)(Dir_35203->Sup.len - 1);
Res_35229 = 0;
Res_35229 = 1;
while (1) {
if (!(Res_35229 <= HEX3Atmp_35227)) goto LA1;
I_35214 = Res_35229;
if (!(((NU8)(Dir_35203->data[I_35214])) == ((NU8)(92)) || ((NU8)(Dir_35203->data[I_35214])) == ((NU8)(47)))) goto LA3;
LOC5 = 0;
LOC5 = copyStrLast(Dir_35203, 0, (NI64)(I_35214 - 1));
Rawcreatedir_35012(LOC5);
LA3: ;
Res_35229 += 1;
} LA1: ;
Rawcreatedir_35012(Dir_35203);
}
N_NIMCALL(void, Putenv_34232)(NimStringDesc* Key_34234, NimStringDesc* Val_34235) {
NI Indx_34236;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
NI32 LOC7;
Indx_34236 = 0;
Indx_34236 = Findenvvar_34201(Key_34234);
if (!(0 <= Indx_34236)) goto LA2;
LOC4 = 0;
LOC4 = rawNewString(Key_34234->Sup.len + Val_34235->Sup.len + 1);
appendString(LOC4, Key_34234);
appendChar(LOC4, 61);
appendString(LOC4, Val_34235);
asgnRefNoCycle((void**) &Environment_34038->data[Indx_34236], LOC4);
goto LA1;
LA2: ;
LOC5 = 0;
LOC5 = rawNewString(Key_34234->Sup.len + Val_34235->Sup.len + 1);
appendString(LOC5, Key_34234);
appendChar(LOC5, 61);
appendString(LOC5, Val_34235);
Environment_34038 = (TY34021*) incrSeq(&(Environment_34038)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_34038->data[Environment_34038->Sup.len-1], copyString(LOC5));
Indx_34236 = (Environment_34038->Sup.len-1);
LA1: ;
LOC7 = Dl_27575(Key_34234->data, Val_34235->data);
if (!(LOC7 == ((NI32) 0))) goto LA8;
nosOSError(((NimStringDesc*) &TMP191623));
LA8: ;
}
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
NimStringDesc* Result_36003;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
Result_36003 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getenv_34218(((NimStringDesc*) &TMP191726));
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP191647));
Result_36003 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_36003;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18449, NimStringDesc* B_18450) {
NIM_BOOL Result_18451;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
NI32 LOC11;
Result_18451 = 0;
if (!(A_18449 == B_18450)) goto LA2;
Result_18451 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_18449 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_18450 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_18451 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_18449).Sup.len == (*B_18450).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_18449).data)), ((NCSTRING) ((*B_18450).data)), ((NI32) ((NI64)((*A_18449).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_18451 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_18451;
}
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_33645, NimStringDesc* Pathb_33646) {
NI Result_33647;
Result_33647 = 0;
if (!NIM_FALSE) goto LA2;
Result_33647 = Cmp_1327(Patha_33645, Pathb_33646);
goto LA1;
LA2: ;
Result_33647 = nsuCmpIgnoreCase(Patha_33645, Pathb_33646);
LA1: ;
return Result_33647;
}
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_33650, NimStringDesc* Path2_33651) {
NIM_BOOL Result_33652;
TY27595 A_33653;
TY27595 B_33654;
NI Resa_33656;
NI Resb_33658;
NIM_BOOL LOC2;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NI LOC8;
Result_33652 = 0;
memset((void*)&A_33653, 0, sizeof(A_33653));
memset((void*)&B_33654, 0, sizeof(B_33654));
Resa_33656 = 0;
Resa_33656 = Dl_27612(Path1_33650->data, &A_33653);
Resb_33658 = 0;
Resb_33658 = Dl_27612(Path2_33651->data, &B_33654);
LOC2 = !((Resa_33656 == -1));
if (!(LOC2)) goto LA3;
LOC2 = !((Resb_33658 == -1));
LA3: ;
if (!LOC2) goto LA4;
LOC6 = 0;
LOC6 = cstrToNimstr(((NCSTRING) (A_33653.Cfilename)));
LOC7 = 0;
LOC7 = cstrToNimstr(((NCSTRING) (B_33654.Cfilename)));
Result_33652 = eqStrings(LOC6, LOC7);
goto LA1;
LA4: ;
LOC8 = noscmpPaths(Path1_33650, Path2_33651);
Result_33652 = (LOC8 == 0);
LA1: ;
if (!!((Resa_33656 == -1))) goto LA10;
Dl_27622(Resa_33656);
LA10: ;
if (!!((Resb_33658 == -1))) goto LA13;
Dl_27622(Resb_33658);
LA13: ;
return Result_33652;
}
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_33630, NimStringDesc* Ext_33631) {
NimStringDesc* Result_33632;
NI Extpos_33633;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Result_33632 = 0;
Extpos_33633 = 0;
Extpos_33633 = Searchextpos_33427(Filename_33630);
if (!(Extpos_33633 < 0)) goto LA2;
LOC4 = 0;
LOC5 = 0;
LOC5 = Normext_33421(Ext_33631);
LOC4 = rawNewString(Filename_33630->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_33630);
appendString(LOC4, LOC5);
Result_33632 = LOC4;
goto LA1;
LA2: ;
Result_33632 = copyString(Filename_33630);
LA1: ;
return Result_33632;
}
N_NIMCALL(NI32, nosgetLastModificationTime)(NimStringDesc* File_32203) {
NI32 Result_32204;
TY27595 F_32205;
NI H_32207;
NI64 LOC4;
Result_32204 = 0;
memset((void*)&F_32205, 0, sizeof(F_32205));
H_32207 = 0;
H_32207 = Dl_27612(File_32203->data, &F_32205);
if (!(H_32207 == -1)) goto LA2;
nosOSError(((NimStringDesc*) &TMP191623));
LA2: ;
LOC4 = Rdfiletime_27651(F_32205.Ftlastwritetime);
Result_32204 = Wintimetounixtime_29261(LOC4);
Dl_27622(H_32207);
return Result_32204;
}
N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* A_32803, NimStringDesc* B_32804) {
NIM_BOOL Result_32805;
NI32 LOC1;
NI32 LOC2;
NI64 LOC3;
Result_32805 = 0;
LOC1 = nosgetLastModificationTime(A_32803);
LOC2 = nosgetLastModificationTime(B_32804);
LOC3 = ntDiffTime(LOC1, LOC2);
Result_32805 = (0 < LOC3);
return Result_32805;
}
N_NIMCALL(void, nossleep)(NI Milsecs_37012) {
Dl_27663(((NI32) (Milsecs_37012)));
}
N_NOINLINE(void, osInit)(void) {
Envcomputed_34020 = NIM_FALSE;
asgnRefNoCycle((void**) &Environment_34038, (TY34021*) newSeq(NTI34021, 0));
}

