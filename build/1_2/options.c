/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY38019 TY38019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY38013 TY38013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY40008 TY40008;
typedef struct TY34021 TY34021;
typedef struct TY33337 TY33337;
typedef struct TY38015 TY38015;
typedef struct TNimObject TNimObject;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct TY40006 TY40006;
typedef struct TY40004 TY40004;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY38019 {
TNimType* m_type;
TY38013* Head;
TY38013* Tail;
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
typedef NimStringDesc* TY41331[1];
struct TY33337 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TNimObject {
TNimType* m_type;
};
struct TY38013 {
  TNimObject Sup;
TY38013* Prev;
TY38013* Next;
};
struct TY38015 {
  TY38013 Sup;
NimStringDesc* Data;
};
typedef NimStringDesc* TY42966[4];
typedef NimStringDesc* TY69026[3];
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
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY40004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY40008 {
  TNimObject Sup;
NI Counter;
TY40006* Data;
NU8 Mode;
};
struct TY34021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY40006 {
  TGenericSeq Sup;
  TY40004 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
N_NIMCALL(TY40008*, Newstringtable_40019)(NimStringDesc** Keyvaluepairs_40022, NI Keyvaluepairs_40022Len0, NU8 Mode_40023);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_33336, TY33337* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(NimStringDesc*, Rawfindfile_41270)(NimStringDesc* F_41272);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_31803);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_33203, NimStringDesc* Tail_33204);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_23450);
N_NIMCALL(NimStringDesc*, Shortendir_41200)(NimStringDesc* Dir_41202);
N_NIMCALL(NimStringDesc*, Getprefixdir_41109)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_24848, NimStringDesc* Prefix_24849);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_33251, NI Parts_33251Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_33620, NimStringDesc* Ext_33621);
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_41211)(NimStringDesc* Path_41213);
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035);
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_35203);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015);
static N_INLINE(void, Incref_13002)(TY10602* C_13004);
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418);
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054);
N_NOINLINE(void, Incl_10880)(TY10614* S_10883, TY10602* Cell_10884);
static N_INLINE(void, Decref_12801)(TY10602* C_12803);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_18803, NI Elemsize_18804, NI Newlen_18805);
N_NIMCALL(NimStringDesc*, Get_40029)(TY40008* T_40031, NimStringDesc* Key_40032);
N_NIMCALL(void, Put_40024)(TY40008* T_40026, NimStringDesc* Key_40027, NimStringDesc* Val_40028);
N_NIMCALL(NIM_BOOL, Haskey_40033)(TY40008* T_40035, NimStringDesc* Key_40036);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_23587, NimStringDesc* B_23588);
static N_INLINE(void, Writeln_41265)(FILE* F_41268, NimStringDesc* X_41269);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
NIM_CONST NU32 Checksoptions_41074 = 1022;
STRING_LITERAL(TMP41089, "", 0);
STRING_LITERAL(TMP191651, "nimcache", 8);
STRING_LITERAL(TMP191663, "cannot create directory: ", 25);
STRING_LITERAL(TMP193510, "\015\012", 2);
NU32 Goptions_41077;
NU32 Gglobaloptions_41079;
NI8 Gexitcode_41080;
TY38019 Searchpaths_41081;
extern TNimType* NTI38019; /* TLinkedList */
NimStringDesc* Outfile_41082;
extern TY10996 Gch_11014;
NimStringDesc* Gindexfile_41083;
NU8 Gcmd_41084;
NI Gverbosity_41085;
NI Gnumberofprocessors_41086;
TY40008* Gconfigvars_41111;
NimStringDesc* Libpath_41112;
NimStringDesc* Projectpath_41113;
NIM_BOOL Gkeepcomments_41114;
TY34021* Gimplicitmods_41131;
extern TNimType* NTI34021; /* seq[string] */
extern TSafePoint* excHandler;
extern TNimType* NTI422; /* EOS */
extern E_Base* Currexception_5032;
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
N_NIMCALL(NimStringDesc*, Getprefixdir_41109)(void) {
NimStringDesc* Result_41199;
NimStringDesc* LOC1;
TY33337 LOC2;
Result_41199 = 0;
LOC1 = 0;
LOC1 = nosgetAppDir();
memset((void*)&LOC2, 0, sizeof(LOC2));
nosSplitPath(LOC1, &LOC2);
Result_41199 = copyString(LOC2.Head);
return Result_41199;
}
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_41211)(NimStringDesc* Path_41213) {
NimStringDesc* Result_41214;
NIM_BOOL LOC2;
Result_41214 = 0;
LOC2 = (0 < Path_41213->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Path_41213->data[(NI64)(Path_41213->Sup.len - 1)]) == (NU8)(92));
LA3: ;
if (!LOC2) goto LA4;
Result_41214 = copyStrLast(Path_41213, 0, (NI64)(Path_41213->Sup.len - 2));
goto LA1;
LA4: ;
Result_41214 = copyString(Path_41213);
LA1: ;
return Result_41214;
}
N_NIMCALL(NimStringDesc*, Rawfindfile_41270)(NimStringDesc* F_41272) {
NimStringDesc* Result_41273;
NIM_BOOL LOC2;
TY38015* It_41274;
NIM_BOOL LOC7;
Result_41273 = 0;
LOC2 = nosexistsFile(F_41272);
if (!LOC2) goto LA3;
Result_41273 = copyString(F_41272);
goto LA1;
LA3: ;
It_41274 = 0;
It_41274 = ((TY38015*) (Searchpaths_41081.Head));
while (1) {
if (!!((It_41274 == NIM_NIL))) goto LA5;
Result_41273 = nosJoinPath((*It_41274).Data, F_41272);
LOC7 = nosexistsFile(Result_41273);
if (!LOC7) goto LA8;
goto BeforeRet;
LA8: ;
It_41274 = ((TY38015*) ((*It_41274).Sup.Next));
} LA5: ;
Result_41273 = copyString(((NimStringDesc*) &TMP41089));
LA1: ;
BeforeRet: ;
return Result_41273;
}
N_NIMCALL(NimStringDesc*, Findfile_41090)(NimStringDesc* F_41092) {
NimStringDesc* Result_41289;
NimStringDesc* LOC4;
Result_41289 = 0;
Result_41289 = Rawfindfile_41270(F_41092);
if (!(Result_41289->Sup.len == 0)) goto LA2;
LOC4 = 0;
LOC4 = nsuToLowerStr(F_41092);
Result_41289 = Rawfindfile_41270(LOC4);
LA2: ;
return Result_41289;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI64)((NI64)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617) {
(*Dest_18616).data[((*Dest_18616).Sup.len)-0] = C_18617;
(*Dest_18616).data[((NI64)((*Dest_18616).Sup.len + 1))-0] = 0;
(*Dest_18616).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Shortendir_41200)(NimStringDesc* Dir_41202) {
NimStringDesc* Result_41203;
NimStringDesc* Prefix_41204;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NIM_BOOL LOC10;
NimStringDesc* LOC13;
NIM_BOOL LOC15;
Result_41203 = 0;
Prefix_41204 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getprefixdir_41109();
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 92);
Prefix_41204 = LOC1;
LOC4 = nsuStartsWith(Dir_41202, Prefix_41204);
if (!LOC4) goto LA5;
Result_41203 = copyStr(Dir_41202, Prefix_41204->Sup.len);
goto BeforeRet;
LA5: ;
LOC7 = 0;
LOC8 = 0;
LOC8 = nosgetCurrentDir();
LOC7 = rawNewString(LOC8->Sup.len + 1);
appendString(LOC7, LOC8);
appendChar(LOC7, 92);
Prefix_41204 = LOC7;
LOC10 = nsuStartsWith(Dir_41202, Prefix_41204);
if (!LOC10) goto LA11;
Result_41203 = copyStr(Dir_41202, Prefix_41204->Sup.len);
goto BeforeRet;
LA11: ;
LOC13 = 0;
LOC13 = rawNewString(Projectpath_41113->Sup.len + 1);
appendString(LOC13, Projectpath_41113);
appendChar(LOC13, 92);
Prefix_41204 = LOC13;
LOC15 = nsuStartsWith(Dir_41202, Prefix_41204);
if (!LOC15) goto LA16;
Result_41203 = copyStr(Dir_41202, Prefix_41204->Sup.len);
goto BeforeRet;
LA16: ;
Result_41203 = copyString(Dir_41202);
BeforeRet: ;
return Result_41203;
}
N_NIMCALL(NimStringDesc*, Togeneratedfile_41105)(NimStringDesc* Path_41107, NimStringDesc* Ext_41108) {
NimStringDesc* Result_41231;
TY33337 LOC1;
NimStringDesc* Head_41232;
NimStringDesc* Tail_41233;
NimStringDesc* LOC5;
TY42966 LOC6;
Result_41231 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(Path_41107, &LOC1);
Head_41232 = 0;
Head_41232 = copyString(LOC1.Head);
Tail_41233 = 0;
Tail_41233 = copyString(LOC1.Tail);
if (!(0 < Head_41232->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_41232->Sup.len + 1);
appendString(LOC5, Head_41232);
appendChar(LOC5, 92);
Head_41232 = Shortendir_41200(LOC5);
LA3: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(Projectpath_41113);
LOC6[1] = copyString(((NimStringDesc*) &TMP191651));
LOC6[2] = copyString(Head_41232);
LOC6[3] = nosChangeFileExt(Tail_41233, Ext_41108);
Result_41231 = nosJoinPathOpenArray(LOC6, 4);
return Result_41231;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035) {
(*S_5035).prev = excHandler;
excHandler = S_5035;
}
static N_INLINE(void, popSafePoint)(void) {
excHandler = (*excHandler).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
E_Base* Result_20204;
Result_20204 = 0;
Result_20204 = Currexception_5032;
return Result_20204;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418) {
NIM_BOOL Result_11419;
Result_11419 = 0;
Result_11419 = !((((*(*C_11418).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11419;
}
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054) {
Incl_10880(&Gch_11014.Cycleroots, C_12054);
}
static N_INLINE(void, Incref_13002)(TY10602* C_13004) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3221(&(*C_13004).Refcount, 8);
LOC3 = Canbecycleroot_11416(C_13004);
if (!LOC3) goto LA4;
Rtladdcycleroot_12052(C_13004);
LA4: ;
}
static N_INLINE(void, Decref_12801)(TY10602* C_12803) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_12803).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12401(C_12803);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11416(C_12803);
if (!LOC5) goto LA6;
Rtladdcycleroot_12052(C_12803);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015) {
TY10602* LOC4;
TY10602* LOC8;
if (!!((Src_13015 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11412(Src_13015);
Incref_13002(LOC4);
LA2: ;
if (!!(((*Dest_13014) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11412((*Dest_13014));
Decref_12801(LOC8);
LA6: ;
(*Dest_13014) = Src_13015;
}
static N_INLINE(void, popCurrentException)(void) {
asgnRef((void**) &Currexception_5032, (*Currexception_5032).parent);
}
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_41101)(NimStringDesc* F_41103, NIM_BOOL Createsubdir_41104) {
NimStringDesc* Result_41248;
TY33337 LOC1;
NimStringDesc* Head_41249;
NimStringDesc* Tail_41250;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* Subdir_41261;
TY69026 LOC7;
TSafePoint TMP191662;
NimStringDesc* LOC11;
Result_41248 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(F_41103, &LOC1);
Head_41249 = 0;
Head_41249 = copyString(LOC1.Head);
Tail_41250 = 0;
Tail_41250 = copyString(LOC1.Tail);
if (!(0 < Head_41249->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_41249->Sup.len + 1);
appendString(LOC5, Head_41249);
appendChar(LOC5, 92);
LOC6 = 0;
LOC6 = Shortendir_41200(LOC5);
Head_41249 = Removetrailingdirsep_41211(LOC6);
LA3: ;
Subdir_41261 = 0;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(Projectpath_41113);
LOC7[1] = copyString(((NimStringDesc*) &TMP191651));
LOC7[2] = copyString(Head_41249);
Subdir_41261 = nosJoinPathOpenArray(LOC7, 3);
if (!Createsubdir_41104) goto LA9;
pushSafePoint(&TMP191662);
TMP191662.status = setjmp(TMP191662.context);
if (TMP191662.status == 0) {
noscreateDir(Subdir_41261);
popSafePoint();
} else {
popSafePoint();
if (getCurrentException()->Sup.m_type == NTI422) {
LOC11 = 0;
LOC11 = rawNewString(Subdir_41261->Sup.len + 25);
appendString(LOC11, ((NimStringDesc*) &TMP191663));
appendString(LOC11, Subdir_41261);
Writeln_41265(stdout, LOC11);
exit(1);
TMP191662.status = 0;popCurrentException();}
}
if (TMP191662.status != 0) reraiseException();
LA9: ;
Result_41248 = nosJoinPath(Subdir_41261, Tail_41250);
return Result_41248;
}
N_NIMCALL(void, Addimplicitmod_41142)(NimStringDesc* Filename_41144) {
NI Length_41174;
Length_41174 = 0;
Length_41174 = Gimplicitmods_41131->Sup.len;
Gimplicitmods_41131 = (TY34021*) setLengthSeq(&(Gimplicitmods_41131)->Sup, sizeof(NimStringDesc*), (NI64)(Length_41174 + 1));
asgnRefNoCycle((void**) &Gimplicitmods_41131->data[Length_41174], copyString(Filename_41144));
}
N_NIMCALL(NimStringDesc*, Getconfigvar_41135)(NimStringDesc* Key_41137) {
NimStringDesc* Result_41161;
Result_41161 = 0;
Result_41161 = Get_40029(Gconfigvars_41111, Key_41137);
return Result_41161;
}
N_NIMCALL(void, Setconfigvar_41138)(NimStringDesc* Key_41140, NimStringDesc* Val_41141) {
Put_40024(Gconfigvars_41111, Key_41140, Val_41141);
}
N_NIMCALL(NIM_BOOL, Existsconfigvar_41132)(NimStringDesc* Key_41134) {
NIM_BOOL Result_41157;
Result_41157 = 0;
Result_41157 = Haskey_40033(Gconfigvars_41111, Key_41134);
return Result_41157;
}
N_NIMCALL(NimStringDesc*, Getoutfile_41145)(NimStringDesc* Filename_41147, NimStringDesc* Ext_41148) {
NimStringDesc* Result_41170;
Result_41170 = 0;
if (!!(((Outfile_41082) && (Outfile_41082)->Sup.len == 0))) goto LA2;
Result_41170 = copyString(Outfile_41082);
goto LA1;
LA2: ;
Result_41170 = nosChangeFileExt(Filename_41147, Ext_41148);
LA1: ;
return Result_41170;
}
N_NIMCALL(NI, Binarystrsearch_41149)(NimStringDesc** X_41152, NI X_41152Len0, NimStringDesc* Y_41153) {
NI Result_41299;
NI A_41300;
NI B_41311;
NI Mid_41314;
NI C_41315;
Result_41299 = 0;
A_41300 = 0;
A_41300 = 0;
B_41311 = 0;
B_41311 = (NI64)(X_41152Len0 - 1);
while (1) {
if (!(A_41300 <= B_41311)) goto LA1;
Mid_41314 = 0;
Mid_41314 = (NI64)((NI64)(A_41300 + B_41311) / 2);
C_41315 = 0;
C_41315 = nsuCmpIgnoreCase(X_41152[Mid_41314], Y_41153);
if (!(C_41315 < 0)) goto LA3;
A_41300 = (NI64)(Mid_41314 + 1);
goto LA2;
LA3: ;
if (!(0 < C_41315)) goto LA5;
B_41311 = (NI64)(Mid_41314 - 1);
goto LA2;
LA5: ;
Result_41299 = Mid_41314;
goto BeforeRet;
LA2: ;
} LA1: ;
Result_41299 = -1;
BeforeRet: ;
return Result_41299;
}
static N_INLINE(void, Writeln_41265)(FILE* F_41268, NimStringDesc* X_41269) {
Write_3866(F_41268, X_41269);
Write_3866(F_41268, ((NimStringDesc*) &TMP193510));
}
N_NOINLINE(void, optionsInit)(void) {
TY41331 LOC1;
Goptions_41077 = 105022;
Gglobaloptions_41079 = 8;
Searchpaths_41081.m_type = NTI38019;
asgnRefNoCycle((void**) &Outfile_41082, copyString(((NimStringDesc*) &TMP41089)));
asgnRefNoCycle((void**) &Gindexfile_41083, copyString(((NimStringDesc*) &TMP41089)));
Gcmd_41084 = ((NU8) 0);
asgnRefNoCycle((void**) &Libpath_41112, copyString(((NimStringDesc*) &TMP41089)));
asgnRefNoCycle((void**) &Projectpath_41113, copyString(((NimStringDesc*) &TMP41089)));
Gkeepcomments_41114 = NIM_TRUE;
asgnRefNoCycle((void**) &Gimplicitmods_41131, (TY34021*) newSeq(NTI34021, 0));
memset((void*)&LOC1, 0, sizeof(LOC1));
asgnRefNoCycle((void**) &Gconfigvars_41111, Newstringtable_40019(LOC1, 0, ((NU8) 2)));
}

