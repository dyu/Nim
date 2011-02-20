/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY43019 TY43019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY43013 TY43013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY45008 TY45008;
typedef struct TY39221 TY39221;
typedef struct TY38537 TY38537;
typedef struct TY43015 TY43015;
typedef struct TNimObject TNimObject;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct TY45006 TY45006;
typedef struct TY45004 TY45004;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY43019 {
TNimType* m_type;
TY43013* Head;
TY43013* Tail;
NI Counter;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NimStringDesc* TY46331[1];
struct TY38537 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TNimObject {
TNimType* m_type;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY43015 {
  TY43013 Sup;
NimStringDesc* Data;
};
typedef NimStringDesc* TY47966[4];
typedef NimStringDesc* TY73026[3];
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TSafePoint {
TSafePoint* prev;
NI status;
E_Base* exc;
jmp_buf context;
};
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY45004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY45008 {
  TNimObject Sup;
NI Counter;
TY45006* Data;
NU8 Mode;
};
struct TY39221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY45006 {
  TGenericSeq Sup;
  TY45004 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
N_NIMCALL(TY45008*, Newstringtable_45019)(NimStringDesc** Keyvaluepairs_45022, NI Keyvaluepairs_45022Len0, NU8 Mode_45023);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_38536, TY38537* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(NimStringDesc*, Rawfindfile_46270)(NimStringDesc* F_46272);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_37003);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_38403, NimStringDesc* Tail_38404);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_24450);
N_NIMCALL(NimStringDesc*, Shortendir_46200)(NimStringDesc* Dir_46202);
N_NIMCALL(NimStringDesc*, Getprefixdir_46109)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25848, NimStringDesc* Prefix_25849);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_38451, NI Parts_38451Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38820, NimStringDesc* Ext_38821);
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_46211)(NimStringDesc* Path_46213);
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035);
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_40403);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11080)(TY10814* S_11083, TY10802* Cell_11084);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19003, NI Elemsize_19004, NI Newlen_19005);
N_NIMCALL(NimStringDesc*, Get_45029)(TY45008* T_45031, NimStringDesc* Key_45032);
N_NIMCALL(void, Put_45024)(TY45008* T_45026, NimStringDesc* Key_45027, NimStringDesc* Val_45028);
N_NIMCALL(NIM_BOOL, Haskey_45033)(TY45008* T_45035, NimStringDesc* Key_45036);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24587, NimStringDesc* B_24588);
static N_INLINE(void, Writeln_46265)(FILE* F_46268, NimStringDesc* X_46269);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
NIM_CONST NU32 Checksoptions_46074 = 1022;
STRING_LITERAL(TMP46089, "", 0);
STRING_LITERAL(TMP195646, "nimcache", 8);
STRING_LITERAL(TMP195658, "cannot create directory: ", 25);
STRING_LITERAL(TMP197512, "\012", 1);
NU32 Goptions_46077;
NU32 Gglobaloptions_46079;
NI8 Gexitcode_46080;
TY43019 Searchpaths_46081;
extern TNimType* NTI43019; /* TLinkedList */
NimStringDesc* Outfile_46082;
extern TY11196 Gch_11214;
NimStringDesc* Gindexfile_46083;
NU8 Gcmd_46084;
NI Gverbosity_46085;
NI Gnumberofprocessors_46086;
TY45008* Gconfigvars_46111;
NimStringDesc* Libpath_46112;
NimStringDesc* Projectpath_46113;
NIM_BOOL Gkeepcomments_46114;
TY39221* Gimplicitmods_46131;
extern TNimType* NTI39221; /* seq[string] */
extern TSafePoint* excHandler;
extern TNimType* NTI422; /* EOS */
extern E_Base* Currexception_5032;
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
N_NIMCALL(NimStringDesc*, Getprefixdir_46109)(void) {
NimStringDesc* Result_46199;
NimStringDesc* LOC1;
TY38537 LOC2;
Result_46199 = 0;
LOC1 = 0;
LOC1 = nosgetAppDir();
memset((void*)&LOC2, 0, sizeof(LOC2));
nosSplitPath(LOC1, &LOC2);
Result_46199 = copyString(LOC2.Head);
return Result_46199;
}
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_46211)(NimStringDesc* Path_46213) {
NimStringDesc* Result_46214;
NIM_BOOL LOC2;
Result_46214 = 0;
LOC2 = (0 < Path_46213->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Path_46213->data[(NI32)(Path_46213->Sup.len - 1)]) == (NU8)(47));
LA3: ;
if (!LOC2) goto LA4;
Result_46214 = copyStrLast(Path_46213, 0, (NI32)(Path_46213->Sup.len - 2));
goto LA1;
LA4: ;
Result_46214 = copyString(Path_46213);
LA1: ;
return Result_46214;
}
N_NIMCALL(NimStringDesc*, Rawfindfile_46270)(NimStringDesc* F_46272) {
NimStringDesc* Result_46273;
NIM_BOOL LOC2;
TY43015* It_46274;
NIM_BOOL LOC7;
Result_46273 = 0;
LOC2 = nosexistsFile(F_46272);
if (!LOC2) goto LA3;
Result_46273 = copyString(F_46272);
goto LA1;
LA3: ;
It_46274 = 0;
It_46274 = ((TY43015*) (Searchpaths_46081.Head));
while (1) {
if (!!((It_46274 == NIM_NIL))) goto LA5;
Result_46273 = nosJoinPath((*It_46274).Data, F_46272);
LOC7 = nosexistsFile(Result_46273);
if (!LOC7) goto LA8;
goto BeforeRet;
LA8: ;
It_46274 = ((TY43015*) ((*It_46274).Sup.Next));
} LA5: ;
Result_46273 = copyString(((NimStringDesc*) &TMP46089));
LA1: ;
BeforeRet: ;
return Result_46273;
}
N_NIMCALL(NimStringDesc*, Findfile_46090)(NimStringDesc* F_46092) {
NimStringDesc* Result_46289;
NimStringDesc* LOC4;
Result_46289 = 0;
Result_46289 = Rawfindfile_46270(F_46092);
if (!(Result_46289->Sup.len == 0)) goto LA2;
LOC4 = 0;
LOC4 = nsuToLowerStr(F_46092);
Result_46289 = Rawfindfile_46270(LOC4);
LA2: ;
return Result_46289;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((int) ((NI32)((NI32)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817) {
(*Dest_18816).data[((*Dest_18816).Sup.len)-0] = C_18817;
(*Dest_18816).data[((NI32)((*Dest_18816).Sup.len + 1))-0] = 0;
(*Dest_18816).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Shortendir_46200)(NimStringDesc* Dir_46202) {
NimStringDesc* Result_46203;
NimStringDesc* Prefix_46204;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NIM_BOOL LOC10;
NimStringDesc* LOC13;
NIM_BOOL LOC15;
Result_46203 = 0;
Prefix_46204 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getprefixdir_46109();
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 47);
Prefix_46204 = LOC1;
LOC4 = nsuStartsWith(Dir_46202, Prefix_46204);
if (!LOC4) goto LA5;
Result_46203 = copyStr(Dir_46202, Prefix_46204->Sup.len);
goto BeforeRet;
LA5: ;
LOC7 = 0;
LOC8 = 0;
LOC8 = nosgetCurrentDir();
LOC7 = rawNewString(LOC8->Sup.len + 1);
appendString(LOC7, LOC8);
appendChar(LOC7, 47);
Prefix_46204 = LOC7;
LOC10 = nsuStartsWith(Dir_46202, Prefix_46204);
if (!LOC10) goto LA11;
Result_46203 = copyStr(Dir_46202, Prefix_46204->Sup.len);
goto BeforeRet;
LA11: ;
LOC13 = 0;
LOC13 = rawNewString(Projectpath_46113->Sup.len + 1);
appendString(LOC13, Projectpath_46113);
appendChar(LOC13, 47);
Prefix_46204 = LOC13;
LOC15 = nsuStartsWith(Dir_46202, Prefix_46204);
if (!LOC15) goto LA16;
Result_46203 = copyStr(Dir_46202, Prefix_46204->Sup.len);
goto BeforeRet;
LA16: ;
Result_46203 = copyString(Dir_46202);
BeforeRet: ;
return Result_46203;
}
N_NIMCALL(NimStringDesc*, Togeneratedfile_46105)(NimStringDesc* Path_46107, NimStringDesc* Ext_46108) {
NimStringDesc* Result_46231;
TY38537 LOC1;
NimStringDesc* Head_46232;
NimStringDesc* Tail_46233;
NimStringDesc* LOC5;
TY47966 LOC6;
Result_46231 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(Path_46107, &LOC1);
Head_46232 = 0;
Head_46232 = copyString(LOC1.Head);
Tail_46233 = 0;
Tail_46233 = copyString(LOC1.Tail);
if (!(0 < Head_46232->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_46232->Sup.len + 1);
appendString(LOC5, Head_46232);
appendChar(LOC5, 47);
Head_46232 = Shortendir_46200(LOC5);
LA3: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(Projectpath_46113);
LOC6[1] = copyString(((NimStringDesc*) &TMP195646));
LOC6[2] = copyString(Head_46232);
LOC6[3] = nosChangeFileExt(Tail_46233, Ext_46108);
Result_46231 = nosJoinPathOpenArray(LOC6, 4);
return Result_46231;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035) {
(*S_5035).prev = excHandler;
excHandler = S_5035;
}
static N_INLINE(void, popSafePoint)(void) {
excHandler = (*excHandler).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
E_Base* Result_20404;
Result_20404 = 0;
Result_20404 = Currexception_5032;
return Result_20404;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618) {
NIM_BOOL Result_11619;
Result_11619 = 0;
Result_11619 = !((((*(*C_11618).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11619;
}
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254) {
Incl_11080(&Gch_11214.Cycleroots, C_12254);
}
static N_INLINE(void, Incref_13202)(TY10802* C_13204) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3221(&(*C_13204).Refcount, 8);
LOC3 = Canbecycleroot_11616(C_13204);
if (!LOC3) goto LA4;
Rtladdcycleroot_12252(C_13204);
LA4: ;
}
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_13003).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
Rtladdzct_12601(C_13003);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11616(C_13003);
if (!LOC5) goto LA6;
Rtladdcycleroot_12252(C_13003);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215) {
TY10802* LOC4;
TY10802* LOC8;
if (!!((Src_13215 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11612(Src_13215);
Incref_13202(LOC4);
LA2: ;
if (!!(((*Dest_13214) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11612((*Dest_13214));
Decref_13001(LOC8);
LA6: ;
(*Dest_13214) = Src_13215;
}
static N_INLINE(void, popCurrentException)(void) {
asgnRef((void**) &Currexception_5032, (*Currexception_5032).parent);
}
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_46101)(NimStringDesc* F_46103, NIM_BOOL Createsubdir_46104) {
NimStringDesc* Result_46248;
TY38537 LOC1;
NimStringDesc* Head_46249;
NimStringDesc* Tail_46250;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* Subdir_46261;
TY73026 LOC7;
TSafePoint TMP195657;
NimStringDesc* LOC11;
Result_46248 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(F_46103, &LOC1);
Head_46249 = 0;
Head_46249 = copyString(LOC1.Head);
Tail_46250 = 0;
Tail_46250 = copyString(LOC1.Tail);
if (!(0 < Head_46249->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_46249->Sup.len + 1);
appendString(LOC5, Head_46249);
appendChar(LOC5, 47);
LOC6 = 0;
LOC6 = Shortendir_46200(LOC5);
Head_46249 = Removetrailingdirsep_46211(LOC6);
LA3: ;
Subdir_46261 = 0;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(Projectpath_46113);
LOC7[1] = copyString(((NimStringDesc*) &TMP195646));
LOC7[2] = copyString(Head_46249);
Subdir_46261 = nosJoinPathOpenArray(LOC7, 3);
if (!Createsubdir_46104) goto LA9;
pushSafePoint(&TMP195657);
TMP195657.status = setjmp(TMP195657.context);
if (TMP195657.status == 0) {
noscreateDir(Subdir_46261);
popSafePoint();
} else {
popSafePoint();
if (getCurrentException()->Sup.m_type == NTI422) {
LOC11 = 0;
LOC11 = rawNewString(Subdir_46261->Sup.len + 25);
appendString(LOC11, ((NimStringDesc*) &TMP195658));
appendString(LOC11, Subdir_46261);
Writeln_46265(stdout, LOC11);
exit(1);
TMP195657.status = 0;popCurrentException();}
}
if (TMP195657.status != 0) reraiseException();
LA9: ;
Result_46248 = nosJoinPath(Subdir_46261, Tail_46250);
return Result_46248;
}
N_NIMCALL(void, Addimplicitmod_46142)(NimStringDesc* Filename_46144) {
NI Length_46174;
Length_46174 = 0;
Length_46174 = Gimplicitmods_46131->Sup.len;
Gimplicitmods_46131 = (TY39221*) setLengthSeq(&(Gimplicitmods_46131)->Sup, sizeof(NimStringDesc*), (NI32)(Length_46174 + 1));
asgnRefNoCycle((void**) &Gimplicitmods_46131->data[Length_46174], copyString(Filename_46144));
}
N_NIMCALL(NimStringDesc*, Getconfigvar_46135)(NimStringDesc* Key_46137) {
NimStringDesc* Result_46161;
Result_46161 = 0;
Result_46161 = Get_45029(Gconfigvars_46111, Key_46137);
return Result_46161;
}
N_NIMCALL(void, Setconfigvar_46138)(NimStringDesc* Key_46140, NimStringDesc* Val_46141) {
Put_45024(Gconfigvars_46111, Key_46140, Val_46141);
}
N_NIMCALL(NIM_BOOL, Existsconfigvar_46132)(NimStringDesc* Key_46134) {
NIM_BOOL Result_46157;
Result_46157 = 0;
Result_46157 = Haskey_45033(Gconfigvars_46111, Key_46134);
return Result_46157;
}
N_NIMCALL(NimStringDesc*, Getoutfile_46145)(NimStringDesc* Filename_46147, NimStringDesc* Ext_46148) {
NimStringDesc* Result_46170;
Result_46170 = 0;
if (!!(((Outfile_46082) && (Outfile_46082)->Sup.len == 0))) goto LA2;
Result_46170 = copyString(Outfile_46082);
goto LA1;
LA2: ;
Result_46170 = nosChangeFileExt(Filename_46147, Ext_46148);
LA1: ;
return Result_46170;
}
N_NIMCALL(NI, Binarystrsearch_46149)(NimStringDesc** X_46152, NI X_46152Len0, NimStringDesc* Y_46153) {
NI Result_46299;
NI A_46300;
NI B_46311;
NI Mid_46314;
NI C_46315;
Result_46299 = 0;
A_46300 = 0;
A_46300 = 0;
B_46311 = 0;
B_46311 = (NI32)(X_46152Len0 - 1);
while (1) {
if (!(A_46300 <= B_46311)) goto LA1;
Mid_46314 = 0;
Mid_46314 = (NI32)((NI32)(A_46300 + B_46311) / 2);
C_46315 = 0;
C_46315 = nsuCmpIgnoreCase(X_46152[Mid_46314], Y_46153);
if (!(C_46315 < 0)) goto LA3;
A_46300 = (NI32)(Mid_46314 + 1);
goto LA2;
LA3: ;
if (!(0 < C_46315)) goto LA5;
B_46311 = (NI32)(Mid_46314 - 1);
goto LA2;
LA5: ;
Result_46299 = Mid_46314;
goto BeforeRet;
LA2: ;
} LA1: ;
Result_46299 = -1;
BeforeRet: ;
return Result_46299;
}
static N_INLINE(void, Writeln_46265)(FILE* F_46268, NimStringDesc* X_46269) {
Write_3866(F_46268, X_46269);
Write_3866(F_46268, ((NimStringDesc*) &TMP197512));
}
N_NOINLINE(void, optionsInit)(void) {
TY46331 LOC1;
Goptions_46077 = 105022;
Gglobaloptions_46079 = 8;
Searchpaths_46081.m_type = NTI43019;
asgnRefNoCycle((void**) &Outfile_46082, copyString(((NimStringDesc*) &TMP46089)));
asgnRefNoCycle((void**) &Gindexfile_46083, copyString(((NimStringDesc*) &TMP46089)));
Gcmd_46084 = ((NU8) 0);
asgnRefNoCycle((void**) &Libpath_46112, copyString(((NimStringDesc*) &TMP46089)));
asgnRefNoCycle((void**) &Projectpath_46113, copyString(((NimStringDesc*) &TMP46089)));
Gkeepcomments_46114 = NIM_TRUE;
asgnRefNoCycle((void**) &Gimplicitmods_46131, (TY39221*) newSeq(NTI39221, 0));
memset((void*)&LOC1, 0, sizeof(LOC1));
asgnRefNoCycle((void**) &Gconfigvars_46111, Newstringtable_45019(LOC1, 0, ((NU8) 2)));
}

