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
typedef struct TY38015 TY38015;
typedef struct TNimObject TNimObject;
typedef struct TY10602 TY10602;
typedef struct TY10614 TY10614;
typedef struct TY10996 TY10996;
typedef struct TY10618 TY10618;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
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
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18449, NimStringDesc* B_18450);
N_NIMCALL(void, Prepend_38040)(TY38019* List_38043, TY38013* Entry_38044);
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015);
static N_INLINE(void, Incref_13002)(TY10602* C_13004);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418);
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054);
N_NOINLINE(void, Incl_10880)(TY10614* S_10883, TY10602* Cell_10884);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(void, Decref_12801)(TY10602* C_12803);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13026, void* Src_13027);
N_NIMCALL(TY38015*, Newstrentry_38130)(NimStringDesc* Data_38132);
N_NIMCALL(void*, newObj)(TNimType* Typ_13710, NI Size_13711);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(void, Append_38035)(TY38019* List_38038, TY38013* Entry_38039);
N_NIMCALL(NIM_BOOL, Contains_38159)(TY38019* List_38161, NimStringDesc* Data_38162);
N_NIMCALL(void, Appendstr_38061)(TY38019* List_38064, NimStringDesc* Data_38065);
extern TY10996 Gch_11014;
extern TNimType* NTI38017; /* PStrEntry */
extern TNimType* NTI38015; /* TStrEntry */
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
N_NIMCALL(NIM_BOOL, Contains_38159)(TY38019* List_38161, NimStringDesc* Data_38162) {
NIM_BOOL Result_38163;
TY38013* It_38164;
Result_38163 = 0;
It_38164 = 0;
It_38164 = (*List_38161).Head;
while (1) {
if (!!((It_38164 == NIM_NIL))) goto LA1;
if (!eqStrings((*((TY38015*) (It_38164))).Data, Data_38162)) goto LA3;
Result_38163 = NIM_TRUE;
goto BeforeRet;
LA3: ;
It_38164 = (*It_38164).Next;
} LA1: ;
BeforeRet: ;
return Result_38163;
}
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
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
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11414))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
return Result_11415;
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
N_NIMCALL(void, Prepend_38040)(TY38019* List_38043, TY38013* Entry_38044) {
(*List_38043).Counter += 1;
asgnRef((void**) &(*Entry_38044).Prev, NIM_NIL);
asgnRef((void**) &(*Entry_38044).Next, (*List_38043).Head);
if (!!(((*List_38043).Head == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_38043).Head).Prev, Entry_38044);
LA2: ;
unsureAsgnRef((void**) &(*List_38043).Head, Entry_38044);
if (!((*List_38043).Tail == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_38043).Tail, Entry_38044);
LA5: ;
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
N_NIMCALL(TY38015*, Newstrentry_38130)(NimStringDesc* Data_38132) {
TY38015* Result_38133;
Result_38133 = 0;
Result_38133 = (TY38015*) newObj(NTI38017, sizeof(TY38015));
(*Result_38133).Sup.Sup.m_type = NTI38015;
asgnRefNoCycle((void**) &(*Result_38133).Data, copyString(Data_38132));
return Result_38133;
}
N_NIMCALL(void, Prependstr_38071)(TY38019* List_38074, NimStringDesc* Data_38075) {
TY38015* LOC1;
LOC1 = 0;
LOC1 = Newstrentry_38130(Data_38075);
Prepend_38040(List_38074, &LOC1->Sup);
}
N_NIMCALL(void, Append_38035)(TY38019* List_38038, TY38013* Entry_38039) {
(*List_38038).Counter += 1;
asgnRef((void**) &(*Entry_38039).Next, NIM_NIL);
asgnRef((void**) &(*Entry_38039).Prev, (*List_38038).Tail);
if (!!(((*List_38038).Tail == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_38038).Tail).Next, Entry_38039);
LA2: ;
unsureAsgnRef((void**) &(*List_38038).Tail, Entry_38039);
if (!((*List_38038).Head == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_38038).Head, Entry_38039);
LA5: ;
}
N_NIMCALL(void, Appendstr_38061)(TY38019* List_38064, NimStringDesc* Data_38065) {
TY38015* LOC1;
LOC1 = 0;
LOC1 = Newstrentry_38130(Data_38065);
Append_38035(List_38064, &LOC1->Sup);
}
N_NIMCALL(void, Initlinkedlist_38031)(TY38019* List_38034) {
(*List_38034).Counter = 0;
unsureAsgnRef((void**) &(*List_38034).Head, NIM_NIL);
unsureAsgnRef((void**) &(*List_38034).Tail, NIM_NIL);
}
N_NIMCALL(void, Remove_38045)(TY38019* List_38048, TY38013* Entry_38049) {
(*List_38048).Counter -= 1;
if (!(Entry_38049 == (*List_38048).Tail)) goto LA2;
unsureAsgnRef((void**) &(*List_38048).Tail, (*Entry_38049).Prev);
LA2: ;
if (!(Entry_38049 == (*List_38048).Head)) goto LA5;
unsureAsgnRef((void**) &(*List_38048).Head, (*Entry_38049).Next);
LA5: ;
if (!!(((*Entry_38049).Next == NIM_NIL))) goto LA8;
asgnRef((void**) &(*(*Entry_38049).Next).Prev, (*Entry_38049).Prev);
LA8: ;
if (!!(((*Entry_38049).Prev == NIM_NIL))) goto LA11;
asgnRef((void**) &(*(*Entry_38049).Prev).Next, (*Entry_38049).Next);
LA11: ;
}
N_NIMCALL(NIM_BOOL, Includestr_38066)(TY38019* List_38069, NimStringDesc* Data_38070) {
NIM_BOOL Result_38181;
NIM_BOOL LOC2;
Result_38181 = 0;
LOC2 = Contains_38159(&(*List_38069), Data_38070);
if (!LOC2) goto LA3;
Result_38181 = NIM_TRUE;
goto BeforeRet;
LA3: ;
Appendstr_38061(List_38069, Data_38070);
BeforeRet: ;
return Result_38181;
}
N_NOINLINE(void, listsInit)(void) {
}

