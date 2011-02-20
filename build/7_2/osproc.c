/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/wait.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY68699 TY68699;
typedef struct TY68202 TY68202;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY39221 TY39221;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY66408 TY66408;
typedef struct TNimObject TNimObject;
typedef struct TY45006 TY45006;
typedef struct TY45004 TY45004;
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
typedef int TY69331[2];
struct TNimObject {
TNimType* m_type;
};
struct TY68202 {
  TNimObject Sup;
int Inputhandle;
int Outputhandle;
int Errorhandle;
int Id;
int Exitcode;
};
typedef NimStringDesc* TY47805[1];
struct TY45004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY66408 {
  TNimObject Sup;
NI Counter;
TY45006* Data;
NU8 Mode;
};
typedef NimStringDesc* TY115159[2];
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY68699 {
  TGenericSeq Sup;
  TY68202* data[SEQ_DECL_SIZE];
};
struct TY39221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY45006 {
  TGenericSeq Sup;
  TY45004 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
N_NIMCALL(TY68202*, Startprocessaux_68603)(NimStringDesc* Cmd_68605, NU8 Options_68607);
N_NIMCALL(TY39221*, nosparseCmdLine)(NimStringDesc* C_40432);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18842, NI Elemsize_18843);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(TY68202*, nospstartProcess)(NimStringDesc* Command_68238, NimStringDesc* Workingdir_68239, NimStringDesc** Args_68244, NI Args_68244Len0, TY66408* Env_68245, NU8 Options_68248);
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_36604);
static N_INLINE(void, Setcurrentdir_38201)(NimStringDesc* Newdir_38203);
N_NIMCALL(NCSTRING*, Tocstringarray_69218)(NimStringDesc** B_69221, NI B_69221Len0, NimStringDesc** A_69222, NI A_69222Len0);
N_NOCONV(void*, Alloc0_2353)(NI Size_2355);
N_NOCONV(void*, Alloc_2350)(NI Size_2352);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_38730);
N_NIMCALL(NCSTRING*, Tocstringarray_69290)(TY66408* T_69292);
N_NIMCALL(NI, nstlen)(TY66408* T_66421);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NimStringDesc*, Addcmdargs_69203)(NimStringDesc* Command_69205, NimStringDesc** Args_69207, NI Args_69207Len0);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_26268)(NimStringDesc* S_26270);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18789, NI Addlen_18790);
N_NIMCALL(void, Quit_21140)(NimStringDesc* Errormsg_21142);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18708);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** A_26004, NI A_26004Len0, NimStringDesc* Sep_26005);
static N_INLINE(void, rawEcho)(NimStringDesc* X_4502);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
static N_INLINE(void, rawEchoNL)(void);
N_NIMCALL(void, nossleep)(NI Milsecs_42212);
N_NIMCALL(NIM_BOOL, nosprunning)(TY68202* P_68260);
N_NIMCALL(NI, nospwaitForExit)(TY68202* P_68267);
STRING_LITERAL(TMP196863, "failed to create a pipe", 23);
STRING_LITERAL(TMP196864, "failed to fork process", 22);
STRING_LITERAL(TMP196865, "", 0);
STRING_LITERAL(TMP196866, "=", 1);
STRING_LITERAL(TMP196867, " ", 1);
STRING_LITERAL(TMP196869, "sh", 2);
STRING_LITERAL(TMP196870, "-c", 2);
NIM_CONST TY115159 TMP196868 = {((NimStringDesc*) &TMP196869),
((NimStringDesc*) &TMP196870)}
;
STRING_LITERAL(TMP196871, "execve call failed: ", 20);
STRING_LITERAL(TMP196872, "\012", 1);
extern TNimType* NTI68699; /* seq[PProcess] */
extern TNimType* NTI39221; /* seq[string] */
extern TY11196 Gch_11214;
extern TNimType* NTI68204; /* PProcess */
extern TNimType* NTI68202; /* TProcess */
N_NIMCALL(NI, nospcountProcessors)(void) {
NI Result_68403;
Result_68403 = 0;
Result_68403 = sysconf(_SC_NPROCESSORS_ONLN);
if (!(Result_68403 <= 0)) goto LA2;
Result_68403 = 1;
LA2: ;
return Result_68403;
}
N_NIMCALL(NI, nospexecCmd)(NimStringDesc* Command_68231) {
NI Result_69519;
int LOC1;
Result_69519 = 0;
LOC1 = system(Command_68231->data);
Result_69519 = ((NI) (LOC1));
return Result_69519;
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
static N_INLINE(void, Setcurrentdir_38201)(NimStringDesc* Newdir_38203) {
int LOC2;
LOC2 = chdir(Newdir_38203->data);
if (!!((LOC2 == ((NI32) 0)))) goto LA3;
nosOSError(((NimStringDesc*) &TMP196865));
LA3: ;
}
N_NIMCALL(NCSTRING*, Tocstringarray_69218)(NimStringDesc** B_69221, NI B_69221Len0, NimStringDesc** A_69222, NI A_69222Len0) {
NCSTRING* Result_69223;
void* LOC1;
NI I_69252;
NI HEX3Atmp_69604;
NI Res_69606;
void* LOC3;
NI I_69265;
NI HEX3Atmp_69607;
NI Res_69609;
void* LOC5;
Result_69223 = 0;
LOC1 = Alloc0_2353((NI64)((NI64)((NI64)(A_69222Len0 + B_69221Len0) + 1) * 8));
Result_69223 = ((NCSTRING*) (LOC1));
I_69252 = 0;
HEX3Atmp_69604 = 0;
HEX3Atmp_69604 = (B_69221Len0-1);
Res_69606 = 0;
Res_69606 = 0;
while (1) {
if (!(Res_69606 <= HEX3Atmp_69604)) goto LA2;
I_69252 = Res_69606;
LOC3 = Alloc_2350((NI64)(B_69221[I_69252]->Sup.len + 1));
Result_69223[(I_69252)-0] = ((NCSTRING) (LOC3));
memcpy(((void*) (Result_69223[(I_69252)-0])), ((void*) (B_69221[I_69252]->data)), (NI64)(B_69221[I_69252]->Sup.len + 1));
Res_69606 += 1;
} LA2: ;
I_69265 = 0;
HEX3Atmp_69607 = 0;
HEX3Atmp_69607 = (A_69222Len0-1);
Res_69609 = 0;
Res_69609 = 0;
while (1) {
if (!(Res_69609 <= HEX3Atmp_69607)) goto LA4;
I_69265 = Res_69609;
LOC5 = Alloc_2350((NI64)(A_69222[I_69265]->Sup.len + 1));
Result_69223[((NI64)(I_69265 + B_69221Len0))-0] = ((NCSTRING) (LOC5));
memcpy(((void*) (Result_69223[((NI64)(I_69265 + B_69221Len0))-0])), ((void*) (A_69222[I_69265]->data)), (NI64)(A_69222[I_69265]->Sup.len + 1));
Res_69609 += 1;
} LA4: ;
return Result_69223;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((int) ((NI64)((NI64)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
N_NIMCALL(NCSTRING*, Tocstringarray_69290)(TY66408* T_69292) {
NCSTRING* Result_69293;
NI LOC1;
void* LOC2;
NI I_69296;
NimStringDesc* Key_69297;
NimStringDesc* Val_69298;
NI H_69611;
NI HEX3Atmp_69613;
NI Res_69615;
NimStringDesc* X_69299;
NimStringDesc* LOC7;
void* LOC8;
Result_69293 = 0;
LOC1 = nstlen(T_69292);
LOC2 = Alloc0_2353((NI64)((NI64)(LOC1 + 1) * 8));
Result_69293 = ((NCSTRING*) (LOC2));
I_69296 = 0;
I_69296 = 0;
Key_69297 = 0;
Val_69298 = 0;
H_69611 = 0;
HEX3Atmp_69613 = 0;
HEX3Atmp_69613 = ((*T_69292).Data->Sup.len-1);
Res_69615 = 0;
Res_69615 = 0;
while (1) {
if (!(Res_69615 <= HEX3Atmp_69613)) goto LA3;
H_69611 = Res_69615;
if (!!((*T_69292).Data->data[H_69611].Key == 0)) goto LA5;
Key_69297 = (*T_69292).Data->data[H_69611].Key;
Val_69298 = (*T_69292).Data->data[H_69611].Val;
X_69299 = 0;
LOC7 = 0;
LOC7 = rawNewString(Key_69297->Sup.len + Val_69298->Sup.len + 1);
appendString(LOC7, Key_69297);
appendString(LOC7, ((NimStringDesc*) &TMP196866));
appendString(LOC7, Val_69298);
X_69299 = LOC7;
LOC8 = Alloc_2350((NI64)(X_69299->Sup.len + 1));
Result_69293[(I_69296)-0] = ((NCSTRING) (LOC8));
memcpy(((void*) (Result_69293[(I_69296)-0])), ((void*) (&X_69299->data[0])), (NI64)(X_69299->Sup.len + 1));
I_69296 += 1;
LA5: ;
Res_69615 += 1;
} LA3: ;
return Result_69293;
}
N_NIMCALL(NimStringDesc*, Addcmdargs_69203)(NimStringDesc* Command_69205, NimStringDesc** Args_69207, NI Args_69207Len0) {
NimStringDesc* Result_69208;
NI I_69217;
NI HEX3Atmp_69601;
NI Res_69603;
NimStringDesc* LOC2;
Result_69208 = 0;
Result_69208 = Quoteifcontainswhite_26268(Command_69205);
I_69217 = 0;
HEX3Atmp_69601 = 0;
HEX3Atmp_69601 = (Args_69207Len0-1);
Res_69603 = 0;
Res_69603 = 0;
while (1) {
if (!(Res_69603 <= HEX3Atmp_69601)) goto LA1;
I_69217 = Res_69603;
Result_69208 = resizeString(Result_69208, 1);
appendString(Result_69208, ((NimStringDesc*) &TMP196867));
LOC2 = 0;
LOC2 = Quoteifcontainswhite_26268(Args_69207[I_69217]);
Result_69208 = resizeString(Result_69208, LOC2->Sup.len + 0);
appendString(Result_69208, LOC2);
Res_69603 += 1;
} LA1: ;
return Result_69208;
}
static N_INLINE(void, rawEcho)(NimStringDesc* X_4502) {
Write_3866(stdout, X_4502);
}
static N_INLINE(void, rawEchoNL)(void) {
Write_3866(stdout, ((NimStringDesc*) &TMP196872));
}
N_NIMCALL(TY68202*, nospstartProcess)(NimStringDesc* Command_68238, NimStringDesc* Workingdir_68239, NimStringDesc** Args_68244, NI Args_68244Len0, TY66408* Env_68245, NU8 Options_68248) {
TY68202* Result_69330;
TY69331 Pstdin_69333;
TY69331 Pstdout_69334;
TY69331 Pstderr_69335;
NIM_BOOL LOC2;
int LOC3;
int LOC5;
NI Pid_69355;
int LOC14;
int LOC16;
int LOC19;
int LOC21;
int LOC28;
int LOC32;
int LOC35;
int LOC37;
NCSTRING* A_69412;
TY47805 LOC46;
int LOC50;
NCSTRING* LOC51;
int LOC52;
NimStringDesc* X_69424;
NCSTRING* A_69433;
TY47805 LOC53;
int LOC57;
NCSTRING* LOC58;
int LOC59;
NimStringDesc* LOC60;
NCSTRING LOC61;
NimStringDesc* LOC62;
NimStringDesc* LOC66;
NimStringDesc* LOC67;
int LOC71;
int LOC72;
int LOC73;
Result_69330 = 0;
memset((void*)&Pstdin_69333, 0, sizeof(Pstdin_69333));
memset((void*)&Pstdout_69334, 0, sizeof(Pstdout_69334));
memset((void*)&Pstderr_69335, 0, sizeof(Pstderr_69335));
Result_69330 = (TY68202*) newObj(NTI68204, sizeof(TY68202));
(*Result_69330).Sup.m_type = NTI68202;
(*Result_69330).Exitcode = ((NI32) 3);
LOC3 = pipe(Pstdin_69333);
LOC2 = !((LOC3 == ((NI32) 0)));
if (LOC2) goto LA4;
LOC5 = pipe(Pstdout_69334);
LOC2 = !((LOC5 == ((NI32) 0)));
LA4: ;
if (!LOC2) goto LA6;
nosOSError(((NimStringDesc*) &TMP196863));
LA6: ;
Pid_69355 = 0;
Pid_69355 = fork();
if (!(Pid_69355 < 0)) goto LA9;
nosOSError(((NimStringDesc*) &TMP196864));
LA9: ;
if (!(Pid_69355 == 0)) goto LA12;
LOC14 = close(Pstdin_69333[(1)-0]);
LOC16 = dup2(Pstdin_69333[(0)-0], ((NI32) 0));
if (!(((NI) (LOC16)) < 0)) goto LA17;
nosOSError(((NimStringDesc*) &TMP196865));
LA17: ;
LOC19 = close(Pstdout_69334[(0)-0]);
LOC21 = dup2(Pstdout_69334[(1)-0], ((NI32) 1));
if (!(((NI) (LOC21)) < 0)) goto LA22;
nosOSError(((NimStringDesc*) &TMP196865));
LA22: ;
if (!((Options_68248 &(1<<((((NU8) 2))&7)))!=0)) goto LA25;
LOC28 = dup2(Pstdout_69334[(1)-0], ((NI32) 2));
if (!(((NI) (LOC28)) < 0)) goto LA29;
nosOSError(((NimStringDesc*) &TMP196865));
LA29: ;
goto LA24;
LA25: ;
LOC32 = pipe(Pstderr_69335);
if (!!((LOC32 == ((NI32) 0)))) goto LA33;
nosOSError(((NimStringDesc*) &TMP196863));
LA33: ;
LOC35 = close(Pstderr_69335[(0)-0]);
LOC37 = dup2(Pstderr_69335[(1)-0], ((NI32) 2));
if (!(((NI) (LOC37)) < 0)) goto LA38;
nosOSError(((NimStringDesc*) &TMP196865));
LA38: ;
LA24: ;
if (!(0 < Workingdir_68239->Sup.len)) goto LA41;
Setcurrentdir_38201(Workingdir_68239);
LA41: ;
if (!!(((Options_68248 &(1<<((((NU8) 1))&7)))!=0))) goto LA44;
A_69412 = 0;
memset((void*)&LOC46, 0, sizeof(LOC46));
LOC46[0] = nosextractFilename(Command_68238);
A_69412 = Tocstringarray_69218(LOC46, 1, Args_68244, Args_68244Len0);
if (!(Env_68245 == NIM_NIL)) goto LA48;
LOC50 = execv(Command_68238->data, A_69412);
goto LA47;
LA48: ;
LOC51 = Tocstringarray_69290(Env_68245);
LOC52 = execve(Command_68238->data, A_69412, LOC51);
LA47: ;
goto LA43;
LA44: ;
X_69424 = 0;
X_69424 = Addcmdargs_69203(Command_68238, Args_68244, Args_68244Len0);
A_69433 = 0;
memset((void*)&LOC53, 0, sizeof(LOC53));
LOC53[0] = copyString(X_69424);
A_69433 = Tocstringarray_69218(TMP196868, 2, LOC53, 1);
if (!(Env_68245 == NIM_NIL)) goto LA55;
LOC57 = execv("/bin/sh", A_69433);
goto LA54;
LA55: ;
LOC58 = Tocstringarray_69290(Env_68245);
LOC59 = execve("/bin/sh", A_69433, LOC58);
LA54: ;
LA43: ;
LOC60 = 0;
LOC61 = strerror(errno);
LOC62 = 0;
LOC62 = cstrToNimstr(LOC61);
LOC60 = rawNewString(LOC62->Sup.len + 20);
appendString(LOC60, ((NimStringDesc*) &TMP196871));
appendString(LOC60, LOC62);
Quit_21140(LOC60);
LA12: ;
if (!((Options_68248 &(1<<((((NU8) 0))&7)))!=0)) goto LA64;
LOC66 = 0;
LOC67 = 0;
LOC67 = nsuJoinSep(Args_68244, Args_68244Len0, ((NimStringDesc*) &TMP196867));
LOC66 = rawNewString(Command_68238->Sup.len + LOC67->Sup.len + 1);
appendString(LOC66, Command_68238);
appendString(LOC66, ((NimStringDesc*) &TMP196867));
appendString(LOC66, LOC67);
rawEcho(LOC66);
rawEchoNL();
LA64: ;
(*Result_69330).Id = ((int) (Pid_69355));
(*Result_69330).Inputhandle = Pstdin_69333[(1)-0];
(*Result_69330).Outputhandle = Pstdout_69334[(0)-0];
if (!((Options_68248 &(1<<((((NU8) 2))&7)))!=0)) goto LA69;
(*Result_69330).Errorhandle = (*Result_69330).Outputhandle;
goto LA68;
LA69: ;
(*Result_69330).Errorhandle = Pstderr_69335[(0)-0];
LOC71 = close(Pstderr_69335[(1)-0]);
LA68: ;
LOC72 = close(Pstdin_69333[(0)-0]);
LOC73 = close(Pstdout_69334[(1)-0]);
return Result_69330;
}
N_NIMCALL(TY68202*, Startprocessaux_68603)(NimStringDesc* Cmd_68605, NU8 Options_68607) {
TY68202* Result_68608;
TY39221* C_68609;
TY39221* A_68627;
NI I_68661;
NI HEX3Atmp_68680;
NI Res_68682;
Result_68608 = 0;
C_68609 = 0;
C_68609 = nosparseCmdLine(Cmd_68605);
A_68627 = 0;
A_68627 = (TY39221*) newSeq(NTI39221, 0);
I_68661 = 0;
HEX3Atmp_68680 = 0;
HEX3Atmp_68680 = (NI64)(C_68609->Sup.len - 1);
Res_68682 = 0;
Res_68682 = 1;
while (1) {
if (!(Res_68682 <= HEX3Atmp_68680)) goto LA1;
I_68661 = Res_68682;
A_68627 = (TY39221*) incrSeq(&(A_68627)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &A_68627->data[A_68627->Sup.len-1], copyString(C_68609->data[I_68661]));
Res_68682 += 1;
} LA1: ;
Result_68608 = nospstartProcess(C_68609->data[0], ((NimStringDesc*) &TMP196865), A_68627->data, A_68627->Sup.len, NIM_NIL, Options_68607);
return Result_68608;
}
N_NIMCALL(NIM_BOOL, nosprunning)(TY68202* P_68260) {
NIM_BOOL Result_69476;
NI LOC1;
Result_69476 = 0;
LOC1 = waitpid(((NI) ((*P_68260).Id)), &(*P_68260).Exitcode, WNOHANG);
Result_69476 = (LOC1 == ((NI) ((*P_68260).Id)));
return Result_69476;
}
N_NIMCALL(NI, nospwaitForExit)(TY68202* P_68267) {
NI Result_69488;
int Oldexitcode_69489;
NI LOC2;
Result_69488 = 0;
Oldexitcode_69489 = 0;
Oldexitcode_69489 = (*P_68267).Exitcode;
LOC2 = waitpid(((NI) ((*P_68267).Id)), &(*P_68267).Exitcode, ((NI32) 0));
if (!(LOC2 < 0)) goto LA3;
(*P_68267).Exitcode = Oldexitcode_69489;
LA3: ;
Result_69488 = ((NI) ((*P_68267).Exitcode));
return Result_69488;
}
N_NIMCALL(NI, nospexecProcesses)(NimStringDesc** Cmds_68686, NI Cmds_68686Len0, NU8 Options_68688, NI N_68689) {
NI Result_68690;
TY68699* Q_68700;
NI M_68725;
NI I_68734;
NI HEX3Atmp_68824;
NI Res_68826;
NI I_68735;
NI R_68746;
NI HEX3Atmp_68827;
NI Res_68829;
NIM_BOOL LOC8;
NI LOC11;
NI I_68809;
NI HEX3Atmp_68830;
NI Res_68832;
NI LOC16;
NI I_68820;
NI HEX3Atmp_68833;
NI Res_68835;
TY68202* P_68821;
NI LOC18;
Result_68690 = 0;
if (!(1 < N_68689)) goto LA2;
Q_68700 = 0;
Q_68700 = (TY68699*) newSeq(NTI68699, N_68689);
M_68725 = 0;
M_68725 = ((N_68689 <= Cmds_68686Len0) ? N_68689 : Cmds_68686Len0);
I_68734 = 0;
HEX3Atmp_68824 = 0;
HEX3Atmp_68824 = (NI64)(M_68725 - 1);
Res_68826 = 0;
Res_68826 = 0;
while (1) {
if (!(Res_68826 <= HEX3Atmp_68824)) goto LA4;
I_68734 = Res_68826;
asgnRefNoCycle((void**) &Q_68700->data[I_68734], Startprocessaux_68603(Cmds_68686[I_68734], Options_68688));
Res_68826 += 1;
} LA4: ;
I_68735 = 0;
I_68735 = M_68725;
while (1) {
if (!(I_68735 <= (Cmds_68686Len0-1))) goto LA5;
nossleep(50);
R_68746 = 0;
HEX3Atmp_68827 = 0;
HEX3Atmp_68827 = (NI64)(N_68689 - 1);
Res_68829 = 0;
Res_68829 = 0;
while (1) {
if (!(Res_68829 <= HEX3Atmp_68827)) goto LA6;
R_68746 = Res_68829;
LOC8 = nosprunning(Q_68700->data[R_68746]);
if (!!(LOC8)) goto LA9;
LOC11 = nospwaitForExit(Q_68700->data[R_68746]);
Result_68690 = ((LOC11 >= Result_68690) ? LOC11 : Result_68690);
asgnRefNoCycle((void**) &Q_68700->data[R_68746], Startprocessaux_68603(Cmds_68686[I_68735], Options_68688));
I_68735 += 1;
if (!((Cmds_68686Len0-1) < I_68735)) goto LA13;
goto LA6;
LA13: ;
LA9: ;
Res_68829 += 1;
} LA6: ;
} LA5: ;
I_68809 = 0;
HEX3Atmp_68830 = 0;
HEX3Atmp_68830 = (NI64)(M_68725 - 1);
Res_68832 = 0;
Res_68832 = 0;
while (1) {
if (!(Res_68832 <= HEX3Atmp_68830)) goto LA15;
I_68809 = Res_68832;
LOC16 = nospwaitForExit(Q_68700->data[I_68809]);
Result_68690 = ((LOC16 >= Result_68690) ? LOC16 : Result_68690);
Res_68832 += 1;
} LA15: ;
goto LA1;
LA2: ;
I_68820 = 0;
HEX3Atmp_68833 = 0;
HEX3Atmp_68833 = (Cmds_68686Len0-1);
Res_68835 = 0;
Res_68835 = 0;
while (1) {
if (!(Res_68835 <= HEX3Atmp_68833)) goto LA17;
I_68820 = Res_68835;
P_68821 = 0;
P_68821 = Startprocessaux_68603(Cmds_68686[I_68820], Options_68688);
LOC18 = nospwaitForExit(P_68821);
Result_68690 = ((LOC18 >= Result_68690) ? LOC18 : Result_68690);
Res_68835 += 1;
} LA17: ;
LA1: ;
return Result_68690;
}
N_NOINLINE(void, osprocInit)(void) {
}

