/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY76015 TY76015;
typedef struct TY75204 TY75204;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY22602[32];
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
struct TY76015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY75204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY75204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NOCONV(void*, Alloc_2350)(NI Size_2352);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(void, Fillbuffer_76056)(TY76015* L_76059);
N_NIMCALL(NI, Llstreamread_75235)(TY75204* S_75237, void* Buf_75238, NI Buflen_75239);
N_NOCONV(void*, Realloc_2356)(void* P_2358, NI Newsize_2359);
N_NIMCALL(void, Skiputf8bom_76184)(TY76015* L_76187);
N_NIMCALL(NI, Fillbaselexer_76130)(TY76015* L_76133, NI Pos_76134);
N_NOCONV(void, Dealloc_2360)(void* P_2362);
N_NIMCALL(void, Llstreamclose_75232)(TY75204* S_75234);
NIM_CONST TY22602 Newlines_76012 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
N_NIMCALL(void, Fillbuffer_76056)(TY76015* L_76059) {
NI Charsread_76060;
NI Tocopy_76061;
NI S_76062;
NI Oldbuflen_76063;
NI LOC4;
NIM_BOOL LOC10;
void* LOC15;
NI LOC16;
Charsread_76060 = 0;
Tocopy_76061 = 0;
S_76062 = 0;
Oldbuflen_76063 = 0;
Tocopy_76061 = (NI64)((NI64)((*L_76059).Buflen - (*L_76059).Sentinel) - 1);
if (!(0 < Tocopy_76061)) goto LA2;
memmove(((void*) ((*L_76059).Buf)), ((void*) (&(*L_76059).Buf[(NI64)((*L_76059).Sentinel + 1)])), (NI64)(Tocopy_76061 * 1));
LA2: ;
LOC4 = Llstreamread_75235((*L_76059).Stream, ((void*) (&(*L_76059).Buf[Tocopy_76061])), (NI64)((NI64)((*L_76059).Sentinel + 1) * 1));
Charsread_76060 = (NI64)(LOC4 / 1);
S_76062 = (NI64)(Tocopy_76061 + Charsread_76060);
if (!(Charsread_76060 < (NI64)((*L_76059).Sentinel + 1))) goto LA6;
(*L_76059).Buf[S_76062] = 0;
(*L_76059).Sentinel = S_76062;
goto LA5;
LA6: ;
S_76062 -= 1;
while (1) {
while (1) {
LOC10 = (0 <= S_76062);
if (!(LOC10)) goto LA11;
LOC10 = !((((NU8)((*L_76059).Buf[S_76062])) == ((NU8)(13)) || ((NU8)((*L_76059).Buf[S_76062])) == ((NU8)(10))));
LA11: ;
if (!LOC10) goto LA9;
S_76062 -= 1;
} LA9: ;
if (!(0 <= S_76062)) goto LA13;
(*L_76059).Sentinel = S_76062;
goto LA8;
goto LA12;
LA13: ;
Oldbuflen_76063 = (*L_76059).Buflen;
(*L_76059).Buflen = (NI64)((*L_76059).Buflen * 2);
LOC15 = Realloc_2356(((void*) ((*L_76059).Buf)), (NI64)((*L_76059).Buflen * 1));
(*L_76059).Buf = ((NCSTRING) (LOC15));
LOC16 = Llstreamread_75235((*L_76059).Stream, ((void*) (&(*L_76059).Buf[Oldbuflen_76063])), (NI64)(Oldbuflen_76063 * 1));
Charsread_76060 = (NI64)(LOC16 / 1);
if (!(Charsread_76060 < Oldbuflen_76063)) goto LA18;
(*L_76059).Buf[(NI64)(Oldbuflen_76063 + Charsread_76060)] = 0;
(*L_76059).Sentinel = (NI64)(Oldbuflen_76063 + Charsread_76060);
goto LA8;
LA18: ;
S_76062 = (NI64)((*L_76059).Buflen - 1);
LA12: ;
} LA8: ;
LA5: ;
}
N_NIMCALL(void, Skiputf8bom_76184)(TY76015* L_76187) {
NIM_BOOL LOC2;
NIM_BOOL LOC3;
LOC3 = ((NU8)((*L_76187).Buf[0]) == (NU8)(239));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)((*L_76187).Buf[1]) == (NU8)(187));
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA5;
LOC2 = ((NU8)((*L_76187).Buf[2]) == (NU8)(191));
LA5: ;
if (!LOC2) goto LA6;
(*L_76187).Bufpos += 3;
(*L_76187).Linestart += 3;
LA6: ;
}
N_NIMCALL(void, Openbaselexer_76023)(TY76015* L_76026, TY75204* Inputstream_76027, NI Buflen_76028) {
void* LOC1;
(*L_76026).Bufpos = 0;
(*L_76026).Buflen = Buflen_76028;
LOC1 = Alloc_2350((NI64)(Buflen_76028 * 1));
(*L_76026).Buf = ((NCSTRING) (LOC1));
(*L_76026).Sentinel = (NI64)(Buflen_76028 - 1);
(*L_76026).Linestart = 0;
(*L_76026).Linenumber = 1;
unsureAsgnRef((void**) &(*L_76026).Stream, Inputstream_76027);
Fillbuffer_76056(L_76026);
Skiputf8bom_76184(L_76026);
}
N_NIMCALL(NI, Getcolnumber_76037)(TY76015* L_76039, NI Pos_76040) {
NI Result_76232;
Result_76232 = 0;
Result_76232 = (NI64)abs((NI64)(Pos_76040 - (*L_76039).Linestart));
return Result_76232;
}
N_NIMCALL(NI, Fillbaselexer_76130)(TY76015* L_76133, NI Pos_76134) {
NI Result_76135;
Result_76135 = 0;
if (!(Pos_76134 < (*L_76133).Sentinel)) goto LA2;
Result_76135 = (NI64)(Pos_76134 + 1);
goto LA1;
LA2: ;
Fillbuffer_76056(L_76133);
(*L_76133).Bufpos = 0;
Result_76135 = 0;
LA1: ;
(*L_76133).Linestart = Result_76135;
return Result_76135;
}
N_NIMCALL(NI, Handlecr_76041)(TY76015* L_76044, NI Pos_76045) {
NI Result_76147;
Result_76147 = 0;
(*L_76044).Linenumber += 1;
Result_76147 = Fillbaselexer_76130(L_76044, Pos_76045);
if (!((NU8)((*L_76044).Buf[Result_76147]) == (NU8)(10))) goto LA2;
Result_76147 = Fillbaselexer_76130(L_76044, Result_76147);
LA2: ;
return Result_76147;
}
N_NIMCALL(NI, Handlelf_76046)(TY76015* L_76049, NI Pos_76050) {
NI Result_76169;
Result_76169 = 0;
(*L_76049).Linenumber += 1;
Result_76169 = Fillbaselexer_76130(L_76049, Pos_76050);
return Result_76169;
}
N_NIMCALL(void, Closebaselexer_76029)(TY76015* L_76032) {
Dealloc_2360(((void*) ((*L_76032).Buf)));
Llstreamclose_75232((*L_76032).Stream);
}
N_NOINLINE(void, lexbaseInit)(void) {
}

