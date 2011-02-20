/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10802 TY10802;
typedef struct TNimType TNimType;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY47538 TY47538;
typedef struct TY193404 TY193404;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY38661 TY38661;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY47538 {
NI16 Line;
NI16 Col;
int Fileindex;
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
struct TY193404 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY46331[1];
struct TY38661 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef NimStringDesc* TY115159[2];
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(TY47538, Newlineinfo_47712)(NimStringDesc* Filename_47714, NI Line_47715, NI Col_47716);
N_NIMCALL(void, Initdefines_64049)(void);
N_NIMCALL(void, Handlecmdline_195245)(void);
N_NIMCALL(NI, Gettime_28616)(void);
N_NIMCALL(NI, Paramcount_41430)(void);
N_NIMCALL(void, Writecommandlineusage_73001)(void);
N_NIMCALL(void, Processcmdline_195204)(NU8 Pass_195206, NimStringDesc** Command_195208, NimStringDesc** Filename_195209);
N_NIMCALL(void, Initoptparser_193415)(NimStringDesc* Cmdline_193417, TY193404* Result);
N_NIMCALL(void, nponext)(TY193404* P_193783);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_26216, NIM_CHAR Sub_26217, NI Start_26218);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(void, Processswitch_73012)(NimStringDesc* Switch_73014, NimStringDesc* Arg_73015, NU8 Pass_73016, TY47538 Info_73017);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_36856);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY193404* P_193913);
N_NIMCALL(void, Rawmessage_47971)(NU8 Msg_47973, NimStringDesc** Args_47975, NI Args_47975Len0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_38660, TY38661* Result);
N_NIMCALL(void, Loadconfig_80004)(NimStringDesc* Project_80006);
N_NIMCALL(void, Initvars_70472)(void);
N_NIMCALL(void, Maincommand_191201)(NimStringDesc* Cmd_191203, NimStringDesc* Filename_191204);
N_NIMCALL(NimStringDesc*, Gcgetstatistics_3082)(void);
static N_INLINE(void, rawEcho)(NimStringDesc* X_4502);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
static N_INLINE(void, rawEchoNL)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19403);
N_NIMCALL(NI64, ntDiffTime)(NI A_28635, NI B_28636);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_19470);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_26268)(NimStringDesc* S_26270);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38820, NimStringDesc* Ext_38821);
N_NIMCALL(void, Execexternalprogram_70570)(NimStringDesc* Cmd_70572);
N_NOINLINE(void, nim__datInit)(void);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, parseutilsInit)(void);
N_NOINLINE(void, strutilsInit)(void);
N_NOINLINE(void, timesInit)(void);
N_NOINLINE(void, posixInit)(void);
N_NOINLINE(void, osInit)(void);
N_NOINLINE(void, listsInit)(void);
N_NOINLINE(void, nhashesInit)(void);
N_NOINLINE(void, nstrtabsInit)(void);
N_NOINLINE(void, optionsInit)(void);
N_NOINLINE(void, msgsInit)(void);
N_NOINLINE(void, nversionInit)(void);
N_NOINLINE(void, crcInit)(void);
N_NOINLINE(void, platformInit)(void);
N_NOINLINE(void, ropesInit)(void);
N_NOINLINE(void, identsInit)(void);
N_NOINLINE(void, astInit)(void);
N_NOINLINE(void, rodutilsInit)(void);
N_NOINLINE(void, astalgoInit)(void);
N_NOINLINE(void, condsymsInit)(void);
N_NOINLINE(void, hashesInit)(void);
N_NOINLINE(void, strtabsInit)(void);
N_NOINLINE(void, streamsInit)(void);
N_NOINLINE(void, osprocInit)(void);
N_NOINLINE(void, extccompInit)(void);
N_NOINLINE(void, wordrecgInit)(void);
N_NOINLINE(void, commandsInit)(void);
N_NOINLINE(void, llstreamInit)(void);
N_NOINLINE(void, lexbaseInit)(void);
N_NOINLINE(void, scannerInit)(void);
N_NOINLINE(void, nimconfInit)(void);
N_NOINLINE(void, pnimsynInit)(void);
N_NOINLINE(void, pbracesInit)(void);
N_NOINLINE(void, rnimsynInit)(void);
N_NOINLINE(void, filtersInit)(void);
N_NOINLINE(void, ptmplsynInit)(void);
N_NOINLINE(void, syntaxesInit)(void);
N_NOINLINE(void, rodreadInit)(void);
N_NOINLINE(void, treesInit)(void);
N_NOINLINE(void, typesInit)(void);
N_NOINLINE(void, mathInit)(void);
N_NOINLINE(void, magicsysInit)(void);
N_NOINLINE(void, bitsetsInit)(void);
N_NOINLINE(void, nimsetsInit)(void);
N_NOINLINE(void, passesInit)(void);
N_NOINLINE(void, treetabInit)(void);
N_NOINLINE(void, semdataInit)(void);
N_NOINLINE(void, lookupsInit)(void);
N_NOINLINE(void, importerInit)(void);
N_NOINLINE(void, rodwriteInit)(void);
N_NOINLINE(void, semfoldInit)(void);
N_NOINLINE(void, evalsInit)(void);
N_NOINLINE(void, procfindInit)(void);
N_NOINLINE(void, pragmasInit)(void);
N_NOINLINE(void, suggestInit)(void);
N_NOINLINE(void, semInit)(void);
N_NOINLINE(void, rstInit)(void);
N_NOINLINE(void, highliteInit)(void);
N_NOINLINE(void, docgenInit)(void);
N_NOINLINE(void, ccgutilsInit)(void);
N_NOINLINE(void, cgmethInit)(void);
N_NOINLINE(void, cgenInit)(void);
N_NOINLINE(void, ecmasgenInit)(void);
N_NOINLINE(void, interactInit)(void);
N_NOINLINE(void, passauxInit)(void);
N_NOINLINE(void, dependsInit)(void);
N_NOINLINE(void, transfInit)(void);
N_NOINLINE(void, mainInit)(void);
N_NOINLINE(void, parseoptInit)(void);
N_NOINLINE(void, nimrodInit)(void);
STRING_LITERAL(TMP195203, "", 0);
STRING_LITERAL(TMP195601, "command line", 12);
STRING_LITERAL(TMP197510, "\012", 1);
STRING_LITERAL(TMP197511, "./", 2);
NimStringDesc* Arguments_195201;
extern TY11196 Gch_11214;
TY47538 Cmdlineinfo_195202;
extern TNimType* NTI193404; /* TOptParser */
extern NU32 Gglobaloptions_46079;
extern NimStringDesc* Projectpath_46113;
extern NI Gverbosity_46085;
extern NI Gerrorcounter_47565;
extern NU8 Gcmd_46084;
extern NI Glinescompiled_77285;
extern NI8 Gexitcode_46080;
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
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((int) ((NI64)((NI64)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817) {
(*Dest_18816).data[((*Dest_18816).Sup.len)-0] = C_18817;
(*Dest_18816).data[((NI64)((*Dest_18816).Sup.len + 1))-0] = 0;
(*Dest_18816).Sup.len += 1;
}
N_NIMCALL(void, Processcmdline_195204)(NU8 Pass_195206, NimStringDesc** Command_195208, NimStringDesc** Filename_195209) {
TY193404 P_195210;
NI Bracketle_195212;
NimStringDesc* Key_195215;
NimStringDesc* Val_195216;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NIM_BOOL LOC16;
TY46331 LOC20;
memset((void*)&P_195210, 0, sizeof(P_195210));
Initoptparser_193415(((NimStringDesc*) &TMP195203), &P_195210);
P_195210.Sup.m_type = NTI193404;
while (1) {
nponext(&P_195210);
switch (P_195210.Kind) {
case ((NU8) 0):
goto LA1;
break;
case ((NU8) 2):
case ((NU8) 3):
Bracketle_195212 = 0;
Bracketle_195212 = nsuFindChar(P_195210.Key, 91, 0);
if (!(0 <= Bracketle_195212)) goto LA3;
Key_195215 = 0;
Key_195215 = copyStrLast(P_195210.Key, 0, (NI64)(Bracketle_195212 - 1));
Val_195216 = 0;
LOC5 = 0;
LOC6 = 0;
LOC6 = copyStr(P_195210.Key, (NI64)(Bracketle_195212 + 1));
LOC5 = rawNewString(LOC6->Sup.len + P_195210.Val->Sup.len + 1);
appendString(LOC5, LOC6);
appendChar(LOC5, 58);
appendString(LOC5, P_195210.Val);
Val_195216 = LOC5;
Processswitch_73012(Key_195215, Val_195216, Pass_195206, Cmdlineinfo_195202);
goto LA2;
LA3: ;
Processswitch_73012(P_195210.Key, P_195210.Val, Pass_195206, Cmdlineinfo_195202);
LA2: ;
break;
case ((NU8) 1):
if (!(((*Command_195208)) && ((*Command_195208))->Sup.len == 0)) goto LA8;
unsureAsgnRef((void**) &(*Command_195208), copyString(P_195210.Key));
goto LA7;
LA8: ;
if (!(((*Filename_195209)) && ((*Filename_195209))->Sup.len == 0)) goto LA10;
unsureAsgnRef((void**) &(*Filename_195209), nosUnixToNativePath(P_195210.Key));
goto LA1;
goto LA7;
LA10: ;
LA7: ;
break;
}
} LA1: ;
if (!(Pass_195206 == ((NU8) 1))) goto LA13;
asgnRefNoCycle((void**) &Arguments_195201, npocmdLineRest(&P_195210));
LOC16 = !(((Gglobaloptions_46079 &(1<<((((NU8) 14))&31)))!=0));
if (!(LOC16)) goto LA17;
LOC16 = !(((Arguments_195201) && (Arguments_195201)->Sup.len == 0));
LA17: ;
if (!LOC16) goto LA18;
memset((void*)&LOC20, 0, sizeof(LOC20));
Rawmessage_47971(((NU8) 54), LOC20, 0);
LA18: ;
LA13: ;
}
static N_INLINE(void, rawEcho)(NimStringDesc* X_4502) {
Write_3866(stdout, X_4502);
}
static N_INLINE(void, rawEchoNL)(void) {
Write_3866(stdout, ((NimStringDesc*) &TMP197510));
}
N_NIMCALL(void, Handlecmdline_195245)(void) {
NI Start_195247;
NI LOC2;
NimStringDesc* Command_195250;
NimStringDesc* Filename_195251;
TY38661 LOC8;
NimStringDesc* LOC12;
TY115159 LOC19;
NI LOC20;
NI64 LOC21;
NimStringDesc* Prog_195432;
NimStringDesc* LOC25;
NimStringDesc* LOC26;
NimStringDesc* LOC27;
NimStringDesc* LOC28;
Start_195247 = 0;
Start_195247 = Gettime_28616();
LOC2 = Paramcount_41430();
if (!(LOC2 == 0)) goto LA3;
Writecommandlineusage_73001();
goto LA1;
LA3: ;
Command_195250 = 0;
Command_195250 = copyString(((NimStringDesc*) &TMP195203));
Filename_195251 = 0;
Filename_195251 = copyString(((NimStringDesc*) &TMP195203));
Processcmdline_195204(((NU8) 0), &Command_195250, &Filename_195251);
if (!!(((Filename_195251) && (Filename_195251)->Sup.len == 0))) goto LA6;
memset((void*)&LOC8, 0, sizeof(LOC8));
nossplitFile(Filename_195251, &LOC8);
asgnRefNoCycle((void**) &Projectpath_46113, copyString(LOC8.Dir));
LA6: ;
Loadconfig_80004(Filename_195251);
Initvars_70472();
Command_195250 = copyString(((NimStringDesc*) &TMP195203));
Filename_195251 = copyString(((NimStringDesc*) &TMP195203));
Processcmdline_195204(((NU8) 1), &Command_195250, &Filename_195251);
Maincommand_191201(Command_195250, Filename_195251);
if (!(2 <= Gverbosity_46085)) goto LA10;
LOC12 = 0;
LOC12 = Gcgetstatistics_3082();
rawEcho(LOC12);
rawEchoNL();
LA10: ;
if (!(Gerrorcounter_47565 == 0)) goto LA14;
if (!!(((262208 &(1<<((Gcmd_46084)&31)))!=0))) goto LA17;
memset((void*)&LOC19, 0, sizeof(LOC19));
LOC19[0] = nimIntToStr(Glinescompiled_77285);
LOC20 = Gettime_28616();
LOC21 = ntDiffTime(LOC20, Start_195247);
LOC19[1] = nimInt64ToStr(LOC21);
Rawmessage_47971(((NU8) 224), LOC19, 2);
LA17: ;
if (!((Gglobaloptions_46079 &(1<<((((NU8) 14))&31)))!=0)) goto LA23;
Prog_195432 = 0;
LOC25 = 0;
LOC26 = 0;
LOC26 = nosChangeFileExt(Filename_195251, ((NimStringDesc*) &TMP195203));
LOC27 = 0;
LOC27 = Quoteifcontainswhite_26268(LOC26);
LOC25 = rawNewString(LOC27->Sup.len + 2);
appendString(LOC25, ((NimStringDesc*) &TMP197511));
appendString(LOC25, LOC27);
Prog_195432 = LOC25;
LOC28 = 0;
LOC28 = rawNewString(Prog_195432->Sup.len + Arguments_195201->Sup.len + 1);
appendString(LOC28, Prog_195432);
appendChar(LOC28, 32);
appendString(LOC28, Arguments_195201);
Execexternalprogram_70570(LOC28);
LA23: ;
LA14: ;
LA1: ;
}
int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMain)(void) {
  nim__datInit();
  systemInit();
parseutilsInit();
strutilsInit();
timesInit();
posixInit();
osInit();
listsInit();
nhashesInit();
nstrtabsInit();
optionsInit();
msgsInit();
nversionInit();
crcInit();
platformInit();
ropesInit();
identsInit();
astInit();
rodutilsInit();
astalgoInit();
condsymsInit();
hashesInit();
strtabsInit();
streamsInit();
osprocInit();
extccompInit();
wordrecgInit();
commandsInit();
llstreamInit();
lexbaseInit();
scannerInit();
nimconfInit();
pnimsynInit();
pbracesInit();
rnimsynInit();
filtersInit();
ptmplsynInit();
syntaxesInit();
rodreadInit();
treesInit();
typesInit();
mathInit();
magicsysInit();
bitsetsInit();
nimsetsInit();
passesInit();
treetabInit();
semdataInit();
lookupsInit();
importerInit();
rodwriteInit();
semfoldInit();
evalsInit();
procfindInit();
pragmasInit();
suggestInit();
semInit();
rstInit();
highliteInit();
docgenInit();
ccgutilsInit();
cgmethInit();
cgenInit();
ecmasgenInit();
interactInit();
passauxInit();
dependsInit();
transfInit();
mainInit();
parseoptInit();
nimrodInit();
}
int main(int argc, char** args, char** env) {
  cmdLine = args;
  cmdCount = argc;
  gEnv = env;
  NimMain();
  return 0;
}
N_NOINLINE(void, nimrodInit)(void) {
asgnRefNoCycle((void**) &Arguments_195201, copyString(((NimStringDesc*) &TMP195203)));
Cmdlineinfo_195202 = Newlineinfo_47712(((NimStringDesc*) &TMP195601), -1, -1);
Initdefines_64049();
Handlecmdline_195245();
exit(((NI) (Gexitcode_46080)));
}

