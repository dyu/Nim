/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY72015 TY72015;
typedef struct TY71204 TY71204;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY21602[32];
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
struct TY72015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY71204* Stream;
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
struct TY71204 {
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
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13026, void* Src_13027);
N_NIMCALL(void, Fillbuffer_72056)(TY72015* L_72059);
N_NIMCALL(NI, Llstreamread_71235)(TY71204* S_71237, void* Buf_71238, NI Buflen_71239);
N_NOCONV(void*, Realloc_2356)(void* P_2358, NI Newsize_2359);
N_NIMCALL(void, Skiputf8bom_72184)(TY72015* L_72187);
N_NIMCALL(NI, Fillbaselexer_72130)(TY72015* L_72133, NI Pos_72134);
N_NOCONV(void, Dealloc_2360)(void* P_2362);
N_NIMCALL(void, Llstreamclose_71232)(TY71204* S_71234);
NIM_CONST TY21602 Newlines_72012 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
N_NIMCALL(void, Fillbuffer_72056)(TY72015* L_72059) {
NI Charsread_72060;
NI Tocopy_72061;
NI S_72062;
NI Oldbuflen_72063;
NI LOC4;
NIM_BOOL LOC10;
void* LOC15;
NI LOC16;
Charsread_72060 = 0;
Tocopy_72061 = 0;
S_72062 = 0;
Oldbuflen_72063 = 0;
Tocopy_72061 = (NI32)((NI32)((*L_72059).Buflen - (*L_72059).Sentinel) - 1);
if (!(0 < Tocopy_72061)) goto LA2;
memmove(((void*) ((*L_72059).Buf)), ((void*) (&(*L_72059).Buf[(NI32)((*L_72059).Sentinel + 1)])), (NI32)(Tocopy_72061 * 1));
LA2: ;
LOC4 = Llstreamread_71235((*L_72059).Stream, ((void*) (&(*L_72059).Buf[Tocopy_72061])), (NI32)((NI32)((*L_72059).Sentinel + 1) * 1));
Charsread_72060 = (NI32)(LOC4 / 1);
S_72062 = (NI32)(Tocopy_72061 + Charsread_72060);
if (!(Charsread_72060 < (NI32)((*L_72059).Sentinel + 1))) goto LA6;
(*L_72059).Buf[S_72062] = 0;
(*L_72059).Sentinel = S_72062;
goto LA5;
LA6: ;
S_72062 -= 1;
while (1) {
while (1) {
LOC10 = (0 <= S_72062);
if (!(LOC10)) goto LA11;
LOC10 = !((((NU8)((*L_72059).Buf[S_72062])) == ((NU8)(13)) || ((NU8)((*L_72059).Buf[S_72062])) == ((NU8)(10))));
LA11: ;
if (!LOC10) goto LA9;
S_72062 -= 1;
} LA9: ;
if (!(0 <= S_72062)) goto LA13;
(*L_72059).Sentinel = S_72062;
goto LA8;
goto LA12;
LA13: ;
Oldbuflen_72063 = (*L_72059).Buflen;
(*L_72059).Buflen = (NI32)((*L_72059).Buflen * 2);
LOC15 = Realloc_2356(((void*) ((*L_72059).Buf)), (NI32)((*L_72059).Buflen * 1));
(*L_72059).Buf = ((NCSTRING) (LOC15));
LOC16 = Llstreamread_71235((*L_72059).Stream, ((void*) (&(*L_72059).Buf[Oldbuflen_72063])), (NI32)(Oldbuflen_72063 * 1));
Charsread_72060 = (NI32)(LOC16 / 1);
if (!(Charsread_72060 < Oldbuflen_72063)) goto LA18;
(*L_72059).Buf[(NI32)(Oldbuflen_72063 + Charsread_72060)] = 0;
(*L_72059).Sentinel = (NI32)(Oldbuflen_72063 + Charsread_72060);
goto LA8;
LA18: ;
S_72062 = (NI32)((*L_72059).Buflen - 1);
LA12: ;
} LA8: ;
LA5: ;
}
N_NIMCALL(void, Skiputf8bom_72184)(TY72015* L_72187) {
NIM_BOOL LOC2;
NIM_BOOL LOC3;
LOC3 = ((NU8)((*L_72187).Buf[0]) == (NU8)(239));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)((*L_72187).Buf[1]) == (NU8)(187));
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA5;
LOC2 = ((NU8)((*L_72187).Buf[2]) == (NU8)(191));
LA5: ;
if (!LOC2) goto LA6;
(*L_72187).Bufpos += 3;
(*L_72187).Linestart += 3;
LA6: ;
}
N_NIMCALL(void, Openbaselexer_72023)(TY72015* L_72026, TY71204* Inputstream_72027, NI Buflen_72028) {
void* LOC1;
(*L_72026).Bufpos = 0;
(*L_72026).Buflen = Buflen_72028;
LOC1 = Alloc_2350((NI32)(Buflen_72028 * 1));
(*L_72026).Buf = ((NCSTRING) (LOC1));
(*L_72026).Sentinel = (NI32)(Buflen_72028 - 1);
(*L_72026).Linestart = 0;
(*L_72026).Linenumber = 1;
unsureAsgnRef((void**) &(*L_72026).Stream, Inputstream_72027);
Fillbuffer_72056(L_72026);
Skiputf8bom_72184(L_72026);
}
N_NIMCALL(NI, Getcolnumber_72037)(TY72015* L_72039, NI Pos_72040) {
NI Result_72232;
Result_72232 = 0;
Result_72232 = (NI32)abs((NI32)(Pos_72040 - (*L_72039).Linestart));
return Result_72232;
}
N_NIMCALL(NI, Fillbaselexer_72130)(TY72015* L_72133, NI Pos_72134) {
NI Result_72135;
Result_72135 = 0;
if (!(Pos_72134 < (*L_72133).Sentinel)) goto LA2;
Result_72135 = (NI32)(Pos_72134 + 1);
goto LA1;
LA2: ;
Fillbuffer_72056(L_72133);
(*L_72133).Bufpos = 0;
Result_72135 = 0;
LA1: ;
(*L_72133).Linestart = Result_72135;
return Result_72135;
}
N_NIMCALL(NI, Handlecr_72041)(TY72015* L_72044, NI Pos_72045) {
NI Result_72147;
Result_72147 = 0;
(*L_72044).Linenumber += 1;
Result_72147 = Fillbaselexer_72130(L_72044, Pos_72045);
if (!((NU8)((*L_72044).Buf[Result_72147]) == (NU8)(10))) goto LA2;
Result_72147 = Fillbaselexer_72130(L_72044, Result_72147);
LA2: ;
return Result_72147;
}
N_NIMCALL(NI, Handlelf_72046)(TY72015* L_72049, NI Pos_72050) {
NI Result_72169;
Result_72169 = 0;
(*L_72049).Linenumber += 1;
Result_72169 = Fillbaselexer_72130(L_72049, Pos_72050);
return Result_72169;
}
N_NIMCALL(void, Closebaselexer_72029)(TY72015* L_72032) {
Dealloc_2360(((void*) ((*L_72032).Buf)));
Llstreamclose_71232((*L_72032).Stream);
}
N_NOINLINE(void, lexbaseInit)(void) {
}

