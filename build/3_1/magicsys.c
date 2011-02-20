/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY55548 TY55548;
typedef struct TY55552 TY55552;
typedef struct TY55530 TY55530;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55528 TY55528;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY54011 TY54011;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TY47538 TY47538;
typedef struct TY55526 TY55526;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
typedef struct TY55550 TY55550;
typedef struct TY10802 TY10802;
typedef struct TY10814 TY10814;
typedef struct TY11196 TY11196;
typedef struct TY10818 TY10818;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY60099 TY60099;
typedef struct TY55520 TY55520;
typedef struct TY43013 TY43013;
typedef struct TY60101 TY60101;
typedef TY55552* TY102027[40];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY60099 {
NI Tos;
TY60101* Stack;
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY60101 {
  TGenericSeq Sup;
  TY55530 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initstrtable_55747)(TY55530* X_55750);
N_NIMCALL(TY55552*, Systypefromname_102073)(NimStringDesc* Name_102075);
N_NIMCALL(TY55548*, Getsyssym_102024)(NimStringDesc* Name_102026);
N_NIMCALL(TY55548*, Strtableget_60066)(TY55530* T_60068, TY54011* Name_60069);
N_NIMCALL(TY54011*, Getident_54016)(NimStringDesc* Identifier_54018);
N_NIMCALL(void, Rawmessage_48045)(NU8 Msg_48047, NimStringDesc* Arg_48048);
N_NIMCALL(void, Loadstub_93070)(TY55548* S_93072);
N_NIMCALL(TY55552*, Newsystype_102044)(NU8 Kind_102046, NI Size_102047);
N_NIMCALL(TY55552*, Newtype_55707)(NU8 Kind_55709, TY55548* Owner_55710);
N_NIMCALL(void, Internalerror_48163)(NimStringDesc* Errmsg_48165);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_19771, TNimType* Typ_19772);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11080)(TY10814* S_11083, TY10802* Cell_11084);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(void, Strtableadd_60061)(TY55530* T_60064, TY55548* N_60065);
N_NIMCALL(TY54011*, Getident_54019)(NimStringDesc* Identifier_54021, NI H_54022);
N_NIMCALL(NI, Getnormalizedhash_44037)(NimStringDesc* S_44039);
STRING_LITERAL(TMP196039, "int", 3);
STRING_LITERAL(TMP196040, "int8", 4);
STRING_LITERAL(TMP196041, "int16", 5);
STRING_LITERAL(TMP196042, "int32", 5);
STRING_LITERAL(TMP196043, "int64", 5);
STRING_LITERAL(TMP196044, "float", 5);
STRING_LITERAL(TMP196045, "float32", 7);
STRING_LITERAL(TMP196046, "float64", 7);
STRING_LITERAL(TMP196047, "bool", 4);
STRING_LITERAL(TMP196048, "char", 4);
STRING_LITERAL(TMP196049, "string", 6);
STRING_LITERAL(TMP196050, "cstring", 7);
STRING_LITERAL(TMP196051, "pointer", 7);
STRING_LITERAL(TMP196052, "request for typekind: ", 22);
STRING_LITERAL(TMP196053, "wanted: ", 8);
STRING_LITERAL(TMP196054, " got: ", 6);
STRING_LITERAL(TMP196055, "type not found: ", 16);
TY55548* Systemmodule_102004;
TY102027 Gsystypes_102028;
TY55530 Compilerprocs_102029;
extern TNimType* NTI55530; /* TStrTable */
extern NI Ptrsize_51580;
extern TNimType* NTI55162; /* TTypeKind */
extern TY11196 Gch_11214;
extern TY55530 Rodcompilerprocs_93059;
N_NIMCALL(TY55548*, Getsyssym_102024)(NimStringDesc* Name_102026) {
TY55548* Result_102052;
TY54011* LOC1;
Result_102052 = 0;
LOC1 = 0;
LOC1 = Getident_54016(Name_102026);
Result_102052 = Strtableget_60066(&(*Systemmodule_102004).Tab, LOC1);
if (!(Result_102052 == NIM_NIL)) goto LA3;
Rawmessage_48045(((NU8) 61), Name_102026);
LA3: ;
if (!((*Result_102052).Kind == ((NU8) 20))) goto LA6;
Loadstub_93070(Result_102052);
LA6: ;
return Result_102052;
}
N_NIMCALL(TY55552*, Systypefromname_102073)(NimStringDesc* Name_102075) {
TY55552* Result_102076;
TY55548* LOC1;
Result_102076 = 0;
LOC1 = 0;
LOC1 = Getsyssym_102024(Name_102075);
Result_102076 = (*LOC1).Typ;
return Result_102076;
}
N_NIMCALL(TY55552*, Newsystype_102044)(NU8 Kind_102046, NI Size_102047) {
TY55552* Result_102048;
Result_102048 = 0;
Result_102048 = Newtype_55707(Kind_102046, Systemmodule_102004);
(*Result_102048).Size = ((NI64) (Size_102047));
(*Result_102048).Align = Size_102047;
return Result_102048;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((int) ((NI32)((NI32)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
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
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11614))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
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
N_NIMCALL(TY55552*, Getsystype_102008)(NU8 Kind_102010) {
TY55552* Result_102080;
NimStringDesc* LOC4;
NimStringDesc* LOC8;
NimStringDesc* LOC12;
Result_102080 = 0;
Result_102080 = Gsystypes_102028[(Kind_102010)-0];
if (!(Result_102080 == NIM_NIL)) goto LA2;
switch (Kind_102010) {
case ((NU8) 31):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196039));
break;
case ((NU8) 32):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196040));
break;
case ((NU8) 33):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196041));
break;
case ((NU8) 34):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196042));
break;
case ((NU8) 35):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196043));
break;
case ((NU8) 36):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196044));
break;
case ((NU8) 37):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196045));
break;
case ((NU8) 38):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196046));
break;
case ((NU8) 1):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196047));
break;
case ((NU8) 2):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196048));
break;
case ((NU8) 28):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196049));
break;
case ((NU8) 29):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196050));
break;
case ((NU8) 26):
Result_102080 = Systypefromname_102073(((NimStringDesc*) &TMP196051));
break;
case ((NU8) 5):
Result_102080 = Newsystype_102044(((NU8) 5), Ptrsize_51580);
break;
default:
LOC4 = 0;
LOC4 = rawNewString(reprEnum(Kind_102010, NTI55162)->Sup.len + 22);
appendString(LOC4, ((NimStringDesc*) &TMP196052));
appendString(LOC4, reprEnum(Kind_102010, NTI55162));
Internalerror_48163(LOC4);
break;
}
asgnRef((void**) &Gsystypes_102028[(Kind_102010)-0], Result_102080);
LA2: ;
if (!!(((*Result_102080).Kind == Kind_102010))) goto LA6;
LOC8 = 0;
LOC8 = rawNewString(reprEnum(Kind_102010, NTI55162)->Sup.len + reprEnum((*Result_102080).Kind, NTI55162)->Sup.len + 14);
appendString(LOC8, ((NimStringDesc*) &TMP196053));
appendString(LOC8, reprEnum(Kind_102010, NTI55162));
appendString(LOC8, ((NimStringDesc*) &TMP196054));
appendString(LOC8, reprEnum((*Result_102080).Kind, NTI55162));
Internalerror_48163(LOC8);
LA6: ;
if (!(Result_102080 == NIM_NIL)) goto LA10;
LOC12 = 0;
LOC12 = rawNewString(reprEnum(Kind_102010, NTI55162)->Sup.len + 16);
appendString(LOC12, ((NimStringDesc*) &TMP196055));
appendString(LOC12, reprEnum(Kind_102010, NTI55162));
Internalerror_48163(LOC12);
LA10: ;
return Result_102080;
}
N_NIMCALL(void, Registercompilerproc_102014)(TY55548* S_102016) {
Strtableadd_60061(&Compilerprocs_102029, S_102016);
}
N_NIMCALL(void, Initsystem_102017)(TY60099* Tab_102020) {
}
N_NIMCALL(TY55548*, Getcompilerproc_102011)(NimStringDesc* Name_102013) {
TY55548* Result_102147;
TY54011* Ident_102148;
NI LOC1;
Result_102147 = 0;
Ident_102148 = 0;
LOC1 = Getnormalizedhash_44037(Name_102013);
Ident_102148 = Getident_54019(Name_102013, LOC1);
Result_102147 = Strtableget_60066(&Compilerprocs_102029, Ident_102148);
if (!(Result_102147 == NIM_NIL)) goto LA3;
Result_102147 = Strtableget_60066(&Rodcompilerprocs_93059, Ident_102148);
if (!!((Result_102147 == NIM_NIL))) goto LA6;
Strtableadd_60061(&Compilerprocs_102029, Result_102147);
if (!((*Result_102147).Kind == ((NU8) 20))) goto LA9;
Loadstub_93070(Result_102147);
LA9: ;
LA6: ;
LA3: ;
return Result_102147;
}
N_NOINLINE(void, magicsysInit)(void) {
Compilerprocs_102029.m_type = NTI55530;
Initstrtable_55747(&Compilerprocs_102029);
}

