/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY193404 TY193404;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef NU8 TY22602[32];
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(NI, Paramcount_41430)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_26268)(NimStringDesc* S_26270);
N_NIMCALL(NimStringDesc*, Paramstr_41403)(NI I_41405);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18832, NI Newlen_18833);
N_NIMCALL(void, Handleshortoption_193688)(TY193404* P_193691);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(NI, Parseword_193604)(NimStringDesc* S_193606, NI I_193607, NimStringDesc** W_193609, TY22602 Delim_193611);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_24976, NIM_BOOL Leading_24977, NIM_BOOL Trailing_24978);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
STRING_LITERAL(TMP195630, "", 0);
static NIM_CONST TY22602 TMP195633 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;static NIM_CONST TY22602 TMP195634 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;extern TNimType* NTI193404; /* TOptParser */
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((int) ((NI32)((NI32)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817) {
(*Dest_18816).data[((*Dest_18816).Sup.len)-0] = C_18817;
(*Dest_18816).data[((NI32)((*Dest_18816).Sup.len + 1))-0] = 0;
(*Dest_18816).Sup.len += 1;
}
N_NIMCALL(void, Initoptparser_193415)(NimStringDesc* Cmdline_193417, TY193404* Result) {
NI I_193442;
NI HEX3Atmp_193601;
NI Res_193603;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
memset((void*)Result, 0, sizeof((*Result)));
(*Result).Sup.m_type = NTI193404;
(*Result).Pos = 0;
(*Result).Inshortstate = NIM_FALSE;
if (!!(((Cmdline_193417) && (Cmdline_193417)->Sup.len == 0))) goto LA2;
unsureAsgnRef((void**) &(*Result).Cmd, copyString(Cmdline_193417));
goto LA1;
LA2: ;
unsureAsgnRef((void**) &(*Result).Cmd, copyString(((NimStringDesc*) &TMP195630)));
I_193442 = 0;
HEX3Atmp_193601 = 0;
HEX3Atmp_193601 = Paramcount_41430();
Res_193603 = 0;
Res_193603 = 1;
while (1) {
if (!(Res_193603 <= HEX3Atmp_193601)) goto LA4;
I_193442 = Res_193603;
LOC5 = 0;
LOC6 = 0;
LOC6 = Paramstr_41403(I_193442);
LOC7 = 0;
LOC7 = Quoteifcontainswhite_26268(LOC6);
LOC5 = rawNewString((*Result).Cmd->Sup.len + LOC7->Sup.len + 1);
appendString(LOC5, (*Result).Cmd);
appendString(LOC5, LOC7);
appendChar(LOC5, 32);
unsureAsgnRef((void**) &(*Result).Cmd, LOC5);
Res_193603 += 1;
} LA4: ;
LA1: ;
(*Result).Kind = ((NU8) 0);
unsureAsgnRef((void**) &(*Result).Key, copyString(((NimStringDesc*) &TMP195630)));
unsureAsgnRef((void**) &(*Result).Val, copyString(((NimStringDesc*) &TMP195630)));
}
N_NIMCALL(NI, Parseword_193604)(NimStringDesc* S_193606, NI I_193607, NimStringDesc** W_193609, TY22602 Delim_193611) {
NI Result_193612;
Result_193612 = 0;
Result_193612 = I_193607;
if (!((NU8)(S_193606->data[Result_193612]) == (NU8)(34))) goto LA2;
Result_193612 += 1;
while (1) {
if (!!((((NU8)(S_193606->data[Result_193612])) == ((NU8)(0)) || ((NU8)(S_193606->data[Result_193612])) == ((NU8)(34))))) goto LA4;
(*W_193609) = addChar((*W_193609), S_193606->data[Result_193612]);
Result_193612 += 1;
} LA4: ;
if (!((NU8)(S_193606->data[Result_193612]) == (NU8)(34))) goto LA6;
Result_193612 += 1;
LA6: ;
goto LA1;
LA2: ;
while (1) {
if (!!(((Delim_193611[((NU8)(S_193606->data[Result_193612]))/8] &(1<<(((NU8)(S_193606->data[Result_193612]))%8)))!=0))) goto LA8;
(*W_193609) = addChar((*W_193609), S_193606->data[Result_193612]);
Result_193612 += 1;
} LA8: ;
LA1: ;
return Result_193612;
}
N_NIMCALL(void, Handleshortoption_193688)(TY193404* P_193691) {
NI I_193692;
I_193692 = 0;
I_193692 = (*P_193691).Pos;
(*P_193691).Kind = ((NU8) 3);
(*P_193691).Key = addChar((*P_193691).Key, (*P_193691).Cmd->data[I_193692]);
I_193692 += 1;
(*P_193691).Inshortstate = NIM_TRUE;
while (1) {
if (!(((NU8)((*P_193691).Cmd->data[I_193692])) == ((NU8)(9)) || ((NU8)((*P_193691).Cmd->data[I_193692])) == ((NU8)(32)))) goto LA1;
I_193692 += 1;
(*P_193691).Inshortstate = NIM_FALSE;
} LA1: ;
if (!(((NU8)((*P_193691).Cmd->data[I_193692])) == ((NU8)(58)) || ((NU8)((*P_193691).Cmd->data[I_193692])) == ((NU8)(61)))) goto LA3;
I_193692 += 1;
(*P_193691).Inshortstate = NIM_FALSE;
while (1) {
if (!(((NU8)((*P_193691).Cmd->data[I_193692])) == ((NU8)(9)) || ((NU8)((*P_193691).Cmd->data[I_193692])) == ((NU8)(32)))) goto LA5;
I_193692 += 1;
} LA5: ;
I_193692 = Parseword_193604((*P_193691).Cmd, I_193692, &(*P_193691).Val, TMP195633);
LA3: ;
if (!((NU8)((*P_193691).Cmd->data[I_193692]) == (NU8)(0))) goto LA7;
(*P_193691).Inshortstate = NIM_FALSE;
LA7: ;
(*P_193691).Pos = I_193692;
}
N_NIMCALL(void, nponext)(TY193404* P_193783) {
NI I_193784;
I_193784 = 0;
I_193784 = (*P_193783).Pos;
while (1) {
if (!(((NU8)((*P_193783).Cmd->data[I_193784])) == ((NU8)(9)) || ((NU8)((*P_193783).Cmd->data[I_193784])) == ((NU8)(32)))) goto LA1;
I_193784 += 1;
} LA1: ;
(*P_193783).Pos = I_193784;
(*P_193783).Key = setLengthStr((*P_193783).Key, 0);
(*P_193783).Val = setLengthStr((*P_193783).Val, 0);
if (!(*P_193783).Inshortstate) goto LA3;
Handleshortoption_193688(P_193783);
goto BeforeRet;
LA3: ;
switch (((NU8)((*P_193783).Cmd->data[I_193784]))) {
case 0:
(*P_193783).Kind = ((NU8) 0);
break;
case 45:
I_193784 += 1;
if (!((NU8)((*P_193783).Cmd->data[I_193784]) == (NU8)(45))) goto LA6;
(*P_193783).Kind = ((NU8) 2);
I_193784 += 1;
I_193784 = Parseword_193604((*P_193783).Cmd, I_193784, &(*P_193783).Key, TMP195634);
while (1) {
if (!(((NU8)((*P_193783).Cmd->data[I_193784])) == ((NU8)(9)) || ((NU8)((*P_193783).Cmd->data[I_193784])) == ((NU8)(32)))) goto LA8;
I_193784 += 1;
} LA8: ;
if (!(((NU8)((*P_193783).Cmd->data[I_193784])) == ((NU8)(58)) || ((NU8)((*P_193783).Cmd->data[I_193784])) == ((NU8)(61)))) goto LA10;
I_193784 += 1;
while (1) {
if (!(((NU8)((*P_193783).Cmd->data[I_193784])) == ((NU8)(9)) || ((NU8)((*P_193783).Cmd->data[I_193784])) == ((NU8)(32)))) goto LA12;
I_193784 += 1;
} LA12: ;
(*P_193783).Pos = Parseword_193604((*P_193783).Cmd, I_193784, &(*P_193783).Val, TMP195633);
goto LA9;
LA10: ;
(*P_193783).Pos = I_193784;
LA9: ;
goto LA5;
LA6: ;
(*P_193783).Pos = I_193784;
Handleshortoption_193688(P_193783);
LA5: ;
break;
default:
(*P_193783).Kind = ((NU8) 1);
(*P_193783).Pos = Parseword_193604((*P_193783).Cmd, I_193784, &(*P_193783).Key, TMP195633);
break;
}
BeforeRet: ;
}
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY193404* P_193913) {
NimStringDesc* Result_193914;
NimStringDesc* LOC1;
Result_193914 = 0;
LOC1 = 0;
LOC1 = copyStrLast((*P_193913).Cmd, (*P_193913).Pos, (NI32)((*P_193913).Cmd->Sup.len - 1));
Result_193914 = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
return Result_193914;
}
N_NOINLINE(void, parseoptInit)(void) {
}

