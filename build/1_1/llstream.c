/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY71204 TY71204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef NU8 TY21602[32];
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
struct TNimObject {
TNimType* m_type;
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
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
N_NIMCALL(void*, newObj)(TNimType* Typ_13710, NI Size_13711);
N_NIMCALL(NIM_BOOL, Open_3817)(FILE** F_3820, NimStringDesc* Filename_3821, NU8 Mode_3822, NI Bufsize_3823);
N_NIMCALL(NI, Readbuffer_3922)(FILE* F_3924, void* Buffer_3925, NI Len_3926);
N_NIMCALL(NI, Llreadfromstdin_71464)(TY71204* S_71466, void* Buf_71467, NI Buflen_71468);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(NimStringDesc*, Readlinefromstdin_71365)(NimStringDesc* Prompt_71367);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
N_NIMCALL(NimStringDesc*, Readline_3887)(FILE* F_3889);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18589, NI Addlen_18590);
N_NIMCALL(NIM_BOOL, Contains_25284)(NimStringDesc* S_25286, NimStringDesc* Sub_25287);
static N_INLINE(NIM_BOOL, Continueline_71447)(NimStringDesc* Line_71449, NIM_BOOL Intriplestring_71450);
N_NIMCALL(NIM_BOOL, Endswith_71401)(NimStringDesc* X_71403, TY21602 S_71405);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(NIM_BOOL, Endoffile_3838)(FILE* F_3840);
N_NIMCALL(NI, Writebuffer_3941)(FILE* F_3943, void* Buffer_3944, NI Len_3945);
N_NIMCALL(void, Llstreamwrite_71246)(TY71204* S_71248, NimStringDesc* Data_71249);
NIM_CONST TY21602 Linecontinuationoprs_71439 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY21602 Additionallinecontinuationoprs_71441 = {
0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP191701, "", 0);
STRING_LITERAL(TMP191702, ">>> ", 4);
STRING_LITERAL(TMP191703, "... ", 4);
STRING_LITERAL(TMP191704, "\015\012", 2);
STRING_LITERAL(TMP191705, "\"\"\"", 3);
static NIM_CONST TY21602 TMP191845 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;extern TNimType* NTI71206; /* PLLStream */
extern TNimType* NTI71204; /* TLLStream */
extern TY10996 Gch_11014;
N_NIMCALL(TY71204*, Llstreamopen_71224)(NimStringDesc* Filename_71226, NU8 Mode_71227) {
TY71204* Result_71309;
NIM_BOOL LOC2;
Result_71309 = 0;
Result_71309 = (TY71204*) newObj(NTI71206, sizeof(TY71204));
(*Result_71309).Sup.m_type = NTI71204;
(*Result_71309).Kind = ((NU8) 2);
LOC2 = Open_3817(&(*Result_71309).F, Filename_71226, Mode_71227, -1);
if (!!(LOC2)) goto LA3;
Result_71309 = NIM_NIL;
LA3: ;
return Result_71309;
}
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI32)((NU32)(((NI) (Usr_11414))) - (NU32)(((NI) (((NI)sizeof(TY10602))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
N_NIMCALL(NimStringDesc*, Readlinefromstdin_71365)(NimStringDesc* Prompt_71367) {
NimStringDesc* Result_71368;
Result_71368 = 0;
Write_3866(stdout, Prompt_71367);
Result_71368 = Readline_3887(stdin);
return Result_71368;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI32)((NI32)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
N_NIMCALL(NIM_BOOL, Endswith_71401)(NimStringDesc* X_71403, TY21602 S_71405) {
NIM_BOOL Result_71406;
NI I_71409;
NIM_BOOL LOC2;
NIM_BOOL LOC5;
Result_71406 = 0;
I_71409 = 0;
I_71409 = (NI32)(X_71403->Sup.len - 1);
while (1) {
LOC2 = (0 <= I_71409);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(X_71403->data[I_71409]) == (NU8)(32));
LA3: ;
if (!LOC2) goto LA1;
I_71409 -= 1;
} LA1: ;
LOC5 = (0 <= I_71409);
if (!(LOC5)) goto LA6;
LOC5 = ((S_71405[((NU8)(X_71403->data[I_71409]))/8] &(1<<(((NU8)(X_71403->data[I_71409]))%8)))!=0);
LA6: ;
if (!LOC5) goto LA7;
Result_71406 = NIM_TRUE;
LA7: ;
return Result_71406;
}
static N_INLINE(NIM_BOOL, Continueline_71447)(NimStringDesc* Line_71449, NIM_BOOL Intriplestring_71450) {
NIM_BOOL Result_71451;
NIM_BOOL LOC1;
NIM_BOOL LOC2;
TY21602 LOC5;
NI LOC6;
NI LOC7;
NI LOC8;
Result_71451 = 0;
LOC2 = Intriplestring_71450;
if (LOC2) goto LA3;
LOC2 = ((NU8)(Line_71449->data[0]) == (NU8)(32));
LA3: ;
LOC1 = LOC2;
if (LOC1) goto LA4;
memset(LOC5, 0, sizeof(LOC5));
LOC5[((NU8)(33))/8] |=(1<<(((NU8)(33))%8));
for (LOC6 = ((NU8)(35)); LOC6 <= ((NU8)(38)); LOC6++) 
LOC5[LOC6/8] |=(1<<(LOC6%8));
for (LOC7 = ((NU8)(42)); LOC7 <= ((NU8)(45)); LOC7++) 
LOC5[LOC7/8] |=(1<<(LOC7%8));
LOC5[((NU8)(47))/8] |=(1<<(((NU8)(47))%8));
LOC5[((NU8)(58))/8] |=(1<<(((NU8)(58))%8));
for (LOC8 = ((NU8)(60)); LOC8 <= ((NU8)(64)); LOC8++) 
LOC5[LOC8/8] |=(1<<(LOC8%8));
LOC5[((NU8)(92))/8] |=(1<<(((NU8)(92))%8));
LOC5[((NU8)(94))/8] |=(1<<(((NU8)(94))%8));
LOC5[((NU8)(124))/8] |=(1<<(((NU8)(124))%8));
LOC5[((NU8)(126))/8] |=(1<<(((NU8)(126))%8));
LOC1 = Endswith_71401(Line_71449, LOC5);
LA4: ;
Result_71451 = LOC1;
return Result_71451;
}
N_NIMCALL(NI, Llreadfromstdin_71464)(TY71204* S_71466, void* Buf_71467, NI Buflen_71468) {
NI Result_71469;
NimStringDesc* Line_71470;
NI L_71471;
NIM_BOOL Intriplestring_71472;
NimStringDesc* LOC2;
NIM_BOOL LOC6;
NIM_BOOL LOC10;
Result_71469 = 0;
Line_71470 = 0;
L_71471 = 0;
Intriplestring_71472 = 0;
Intriplestring_71472 = NIM_FALSE;
asgnRefNoCycle((void**) &(*S_71466).S, copyString(((NimStringDesc*) &TMP191701)));
(*S_71466).Rd = 0;
while (1) {
LOC2 = 0;
if (!((*S_71466).S->Sup.len == 0)) goto LA4;
LOC2 = copyString(((NimStringDesc*) &TMP191702));
goto LA3;
LA4: ;
LOC2 = copyString(((NimStringDesc*) &TMP191703));
LA3: ;
Line_71470 = Readlinefromstdin_71365(LOC2);
L_71471 = Line_71470->Sup.len;
(*S_71466).S = resizeString((*S_71466).S, Line_71470->Sup.len + 0);
appendString((*S_71466).S, Line_71470);
(*S_71466).S = resizeString((*S_71466).S, 2);
appendString((*S_71466).S, ((NimStringDesc*) &TMP191704));
LOC6 = Contains_25284(Line_71470, ((NimStringDesc*) &TMP191705));
if (!LOC6) goto LA7;
Intriplestring_71472 = !(Intriplestring_71472);
LA7: ;
LOC10 = Continueline_71447(Line_71470, Intriplestring_71472);
if (!!(LOC10)) goto LA11;
goto LA1;
LA11: ;
} LA1: ;
(*S_71466).Lineoffset += 1;
Result_71469 = ((Buflen_71468 <= (NI32)((*S_71466).S->Sup.len - (*S_71466).Rd)) ? Buflen_71468 : (NI32)((*S_71466).S->Sup.len - (*S_71466).Rd));
if (!(0 < Result_71469)) goto LA14;
memcpy(Buf_71467, ((void*) (&(*S_71466).S->data[(*S_71466).Rd])), Result_71469);
(*S_71466).Rd += Result_71469;
LA14: ;
return Result_71469;
}
N_NIMCALL(NI, Llstreamread_71235)(TY71204* S_71237, void* Buf_71238, NI Buflen_71239) {
NI Result_71519;
Result_71519 = 0;
switch ((*S_71237).Kind) {
case ((NU8) 0):
Result_71519 = 0;
break;
case ((NU8) 1):
Result_71519 = ((Buflen_71239 <= (NI32)((*S_71237).S->Sup.len - (*S_71237).Rd)) ? Buflen_71239 : (NI32)((*S_71237).S->Sup.len - (*S_71237).Rd));
if (!(0 < Result_71519)) goto LA2;
memcpy(Buf_71238, ((void*) (&(*S_71237).S->data[(NI32)(0 + (*S_71237).Rd)])), Result_71519);
(*S_71237).Rd += Result_71519;
LA2: ;
break;
case ((NU8) 2):
Result_71519 = Readbuffer_3922((*S_71237).F, Buf_71238, Buflen_71239);
break;
case ((NU8) 3):
Result_71519 = Llreadfromstdin_71464(S_71237, Buf_71238, Buflen_71239);
break;
}
return Result_71519;
}
N_NIMCALL(void, Llstreamclose_71232)(TY71204* S_71234) {
switch ((*S_71234).Kind) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 3):
break;
case ((NU8) 2):
fclose((*S_71234).F);
break;
}
}
N_NIMCALL(NimStringDesc*, Llstreamreadline_71240)(TY71204* S_71242) {
NimStringDesc* Result_71544;
Result_71544 = 0;
switch ((*S_71242).Kind) {
case ((NU8) 0):
Result_71544 = copyString(((NimStringDesc*) &TMP191701));
break;
case ((NU8) 1):
Result_71544 = copyString(((NimStringDesc*) &TMP191701));
while (1) {
if (!((*S_71242).Rd < (*S_71242).S->Sup.len)) goto LA1;
switch (((NU8)((*S_71242).S->data[(NI32)((*S_71242).Rd + 0)]))) {
case 13:
(*S_71242).Rd += 1;
if (!((NU8)((*S_71242).S->data[(NI32)((*S_71242).Rd + 0)]) == (NU8)(10))) goto LA3;
(*S_71242).Rd += 1;
LA3: ;
goto LA1;
break;
case 10:
(*S_71242).Rd += 1;
goto LA1;
break;
default:
Result_71544 = addChar(Result_71544, (*S_71242).S->data[(NI32)((*S_71242).Rd + 0)]);
(*S_71242).Rd += 1;
break;
}
} LA1: ;
break;
case ((NU8) 2):
Result_71544 = Readline_3887((*S_71242).F);
break;
case ((NU8) 3):
Result_71544 = Readline_3887(stdin);
break;
}
return Result_71544;
}
N_NIMCALL(TY71204*, Llstreamopen_71217)(NimStringDesc* Data_71219) {
TY71204* Result_71269;
Result_71269 = 0;
Result_71269 = (TY71204*) newObj(NTI71206, sizeof(TY71204));
(*Result_71269).Sup.m_type = NTI71204;
asgnRefNoCycle((void**) &(*Result_71269).S, copyString(Data_71219));
(*Result_71269).Kind = ((NU8) 1);
return Result_71269;
}
N_NIMCALL(NIM_BOOL, Llstreamatend_71263)(TY71204* S_71265) {
NIM_BOOL Result_71604;
Result_71604 = 0;
switch ((*S_71265).Kind) {
case ((NU8) 0):
Result_71604 = NIM_TRUE;
break;
case ((NU8) 1):
Result_71604 = ((*S_71265).S->Sup.len <= (*S_71265).Rd);
break;
case ((NU8) 2):
Result_71604 = Endoffile_3838((*S_71265).F);
break;
case ((NU8) 3):
Result_71604 = NIM_FALSE;
break;
}
return Result_71604;
}
N_NIMCALL(void, Llstreamwrite_71246)(TY71204* S_71248, NimStringDesc* Data_71249) {
switch ((*S_71248).Kind) {
case ((NU8) 0):
case ((NU8) 3):
break;
case ((NU8) 1):
(*S_71248).S = resizeString((*S_71248).S, Data_71249->Sup.len + 0);
appendString((*S_71248).S, Data_71249);
(*S_71248).Wr += Data_71249->Sup.len;
break;
case ((NU8) 2):
Write_3866((*S_71248).F, Data_71249);
break;
}
}
N_NIMCALL(NIM_BOOL, Endswithopr_71443)(NimStringDesc* X_71445) {
NIM_BOOL Result_71446;
Result_71446 = 0;
Result_71446 = Endswith_71401(X_71445, TMP191845);
return Result_71446;
}
N_NIMCALL(void, Llstreamwrite_71250)(TY71204* S_71252, NIM_CHAR Data_71253) {
NIM_CHAR C_71635;
NI LOC1;
C_71635 = 0;
switch ((*S_71252).Kind) {
case ((NU8) 0):
case ((NU8) 3):
break;
case ((NU8) 1):
(*S_71252).S = addChar((*S_71252).S, Data_71253);
(*S_71252).Wr += 1;
break;
case ((NU8) 2):
C_71635 = Data_71253;
LOC1 = Writebuffer_3941((*S_71252).F, ((void*) (&C_71635)), 1);
break;
}
}
N_NIMCALL(void, Llstreamwriteln_71259)(TY71204* S_71261, NimStringDesc* Data_71262) {
Llstreamwrite_71246(S_71261, Data_71262);
Llstreamwrite_71246(S_71261, ((NimStringDesc*) &TMP191704));
}
N_NIMCALL(TY71204*, Llstreamopen_71220)(FILE** F_71223) {
TY71204* Result_71289;
Result_71289 = 0;
Result_71289 = (TY71204*) newObj(NTI71206, sizeof(TY71204));
(*Result_71289).Sup.m_type = NTI71204;
(*Result_71289).F = (*F_71223);
(*Result_71289).Kind = ((NU8) 2);
return Result_71289;
}
N_NIMCALL(TY71204*, Llstreamopenstdin_71230)(void) {
TY71204* Result_71346;
Result_71346 = 0;
Result_71346 = (TY71204*) newObj(NTI71206, sizeof(TY71204));
(*Result_71346).Sup.m_type = NTI71204;
(*Result_71346).Kind = ((NU8) 3);
asgnRefNoCycle((void**) &(*Result_71346).S, copyString(((NimStringDesc*) &TMP191701)));
(*Result_71346).Lineoffset = -1;
return Result_71346;
}
N_NOINLINE(void, llstreamInit)(void) {
}

