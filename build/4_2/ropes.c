/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY52008 TY52008;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY52406 TY52406;
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
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
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
typedef TY52008* TY52407[1];
typedef NI TY50040[256];
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY52406 {
  TGenericSeq Sup;
  TY52008* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1355);
N_NIMCALL(void, Newrecropetostr_52388)(NimStringDesc** Result_52391, NI* Resultlen_52393, TY52008* R_52394);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18842, NI Elemsize_18843);
N_NIMCALL(TY52008*, Insertincache_52201)(NimStringDesc* S_52203, TY52008* Tree_52204);
N_NIMCALL(TY52008*, Newrope_52102)(NimStringDesc* Data_52104);
N_NIMCALL(TY52008*, Splay_52136)(NimStringDesc* S_52138, TY52008* Tree_52139, NI* Cmpres_52141);
N_NIMCALL(NI, Cmp_1327)(NimStringDesc* X_1329, NimStringDesc* Y_1330);
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_18613, NimStringDesc* B_18614);
N_NIMCALL(void, App_52036)(TY52008** A_52039, NimStringDesc* B_52040);
N_NIMCALL(TY52008*, Con_52019)(TY52008* A_52021, NimStringDesc* B_52022);
N_NIMCALL(TY52008*, Con_52015)(TY52008* A_52017, TY52008* B_52018);
N_NIMCALL(TY52008*, Torope_52046)(NimStringDesc* S_52048);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(void, App_52031)(TY52008** A_52034, TY52008* B_52035);
N_NIMCALL(void, Internalerror_48163)(NimStringDesc* Errmsg_48165);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19403);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_19470);
N_NIMCALL(TY52008*, Ropef_52066)(NimStringDesc* Frmt_52068, TY52008** Args_52070, NI Args_52070Len0);
N_NIMCALL(int, Crcfromfile_50029)(NimStringDesc* Filename_50031);
N_NIMCALL(int, Crcfromrope_52997)(TY52008* R_52999);
N_NIMCALL(int, Newcrcfromropeaux_52912)(TY52008* R_52914, int Startval_52915);
static N_INLINE(int, Updatecrc32_50018)(NIM_CHAR Val_50020, int Crc_50021);
static N_INLINE(int, Updatecrc32_50014)(NI8 Val_50016, int Crc_50017);
N_NIMCALL(void, Writerope_52055)(TY52008* Head_52057, NimStringDesc* Filename_52058);
N_NIMCALL(NIM_BOOL, Open_3817)(FILE** F_3820, NimStringDesc* Filename_3821, NU8 Mode_3822, NI Bufsize_3823);
N_NIMCALL(void, Newwriteroperec_52621)(FILE** F_52624, TY52008* C_52625);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
N_NIMCALL(void, Rawmessage_48045)(NU8 Msg_48047, NimStringDesc* Arg_48048);
static N_INLINE(TY52008*, Pop_52429)(TY52406** S_52434);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19003, NI Elemsize_19004, NI Newlen_19005);
STRING_LITERAL(TMP195897, "", 0);
STRING_LITERAL(TMP196233, "$", 1);
STRING_LITERAL(TMP196234, "ropes: invalid format string $", 30);
extern NIM_CONST TY50040 Crc32table_50039;
TY52008* Cache_52123;
NI Misses_52124;
NI Hits_52125;
TY52008* N_52126;
extern TNimType* NTI52006; /* PRope */
extern TY11196 Gch_11214;
extern TNimType* NTI52008; /* TRope */
extern TNimType* NTI52406; /* seq[PRope] */
extern NimStringDesc* Tnl_51581;
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
N_NIMCALL(void, Newrecropetostr_52388)(NimStringDesc** Result_52391, NI* Resultlen_52393, TY52008* R_52394) {
TY52406* Stack_52409;
TY52407 LOC1;
TY52008* It_52460;
Stack_52409 = 0;
Stack_52409 = (TY52406*) newSeq(NTI52406, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = R_52394;
asgnRefNoCycle((void**) &Stack_52409->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_52409->Sup.len)) goto LA2;
It_52460 = 0;
It_52460 = Pop_52429(&Stack_52409);
while (1) {
if (!((*It_52460).Data == NIM_NIL)) goto LA3;
Stack_52409 = (TY52406*) incrSeq(&(Stack_52409)->Sup, sizeof(TY52008*));
asgnRefNoCycle((void**) &Stack_52409->data[Stack_52409->Sup.len-1], (*It_52460).Right);
It_52460 = (*It_52460).Left;
} LA3: ;
memcpy(((void*) (&(*Result_52391)->data[(*Resultlen_52393)])), ((void*) (&(*It_52460).Data->data[0])), (*It_52460).Length);
(*Resultlen_52393) += (*It_52460).Length;
} LA2: ;
}
N_NIMCALL(NimStringDesc*, Ropetostr_52063)(TY52008* P_52065) {
NimStringDesc* Result_52500;
NI Resultlen_52512;
Result_52500 = 0;
if (!(P_52065 == NIM_NIL)) goto LA2;
Result_52500 = copyString(((NimStringDesc*) &TMP195897));
goto LA1;
LA2: ;
Result_52500 = mnewString((*P_52065).Length);
Resultlen_52512 = 0;
Resultlen_52512 = 0;
Newrecropetostr_52388(&Result_52500, &Resultlen_52512, P_52065);
LA1: ;
return Result_52500;
}
N_NIMCALL(TY52008*, Newrope_52102)(NimStringDesc* Data_52104) {
TY52008* Result_52105;
Result_52105 = 0;
Result_52105 = (TY52008*) newObj(NTI52006, sizeof(TY52008));
(*Result_52105).Sup.m_type = NTI52008;
if (!!((Data_52104 == NIM_NIL))) goto LA2;
(*Result_52105).Length = Data_52104->Sup.len;
asgnRefNoCycle((void**) &(*Result_52105).Data, copyString(Data_52104));
LA2: ;
return Result_52105;
}
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_18613, NimStringDesc* B_18614) {
NI Result_18615;
int LOC10;
Result_18615 = 0;
if (!(A_18613 == B_18614)) goto LA2;
Result_18615 = 0;
goto BeforeRet;
LA2: ;
if (!(A_18613 == NIM_NIL)) goto LA5;
Result_18615 = -1;
goto BeforeRet;
LA5: ;
if (!(B_18614 == NIM_NIL)) goto LA8;
Result_18615 = 1;
goto BeforeRet;
LA8: ;
LOC10 = strcmp(((NCSTRING) ((*A_18613).data)), ((NCSTRING) ((*B_18614).data)));
Result_18615 = ((NI) (LOC10));
goto BeforeRet;
BeforeRet: ;
return Result_18615;
}
N_NIMCALL(TY52008*, Splay_52136)(NimStringDesc* S_52138, TY52008* Tree_52139, NI* Cmpres_52141) {
TY52008* Result_52142;
NI C_52143;
TY52008* T_52144;
TY52008* Le_52145;
TY52008* R_52146;
NIM_BOOL LOC6;
TY52008* Y_52162;
NIM_BOOL LOC16;
TY52008* Y_52189;
Result_52142 = 0;
C_52143 = 0;
T_52144 = 0;
T_52144 = Tree_52139;
asgnRefNoCycle((void**) &(*N_52126).Left, NIM_NIL);
asgnRefNoCycle((void**) &(*N_52126).Right, NIM_NIL);
Le_52145 = 0;
Le_52145 = N_52126;
R_52146 = 0;
R_52146 = N_52126;
while (1) {
C_52143 = Cmp_1327(S_52138, (*T_52144).Data);
if (!(C_52143 < 0)) goto LA3;
LOC6 = !(((*T_52144).Left == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = (cmpStrings(S_52138, (*(*T_52144).Left).Data) < 0);
LA7: ;
if (!LOC6) goto LA8;
Y_52162 = 0;
Y_52162 = (*T_52144).Left;
asgnRefNoCycle((void**) &(*T_52144).Left, (*Y_52162).Right);
asgnRefNoCycle((void**) &(*Y_52162).Right, T_52144);
T_52144 = Y_52162;
LA8: ;
if (!((*T_52144).Left == NIM_NIL)) goto LA11;
goto LA1;
LA11: ;
asgnRefNoCycle((void**) &(*R_52146).Left, T_52144);
R_52146 = T_52144;
T_52144 = (*T_52144).Left;
goto LA2;
LA3: ;
if (!(0 < C_52143)) goto LA13;
LOC16 = !(((*T_52144).Right == NIM_NIL));
if (!(LOC16)) goto LA17;
LOC16 = (cmpStrings((*(*T_52144).Right).Data, S_52138) < 0);
LA17: ;
if (!LOC16) goto LA18;
Y_52189 = 0;
Y_52189 = (*T_52144).Right;
asgnRefNoCycle((void**) &(*T_52144).Right, (*Y_52189).Left);
asgnRefNoCycle((void**) &(*Y_52189).Left, T_52144);
T_52144 = Y_52189;
LA18: ;
if (!((*T_52144).Right == NIM_NIL)) goto LA21;
goto LA1;
LA21: ;
asgnRefNoCycle((void**) &(*Le_52145).Right, T_52144);
Le_52145 = T_52144;
T_52144 = (*T_52144).Right;
goto LA2;
LA13: ;
goto LA1;
LA2: ;
} LA1: ;
(*Cmpres_52141) = C_52143;
asgnRefNoCycle((void**) &(*Le_52145).Right, (*T_52144).Left);
asgnRefNoCycle((void**) &(*R_52146).Left, (*T_52144).Right);
asgnRefNoCycle((void**) &(*T_52144).Left, (*N_52126).Right);
asgnRefNoCycle((void**) &(*T_52144).Right, (*N_52126).Left);
Result_52142 = T_52144;
return Result_52142;
}
N_NIMCALL(TY52008*, Insertincache_52201)(NimStringDesc* S_52203, TY52008* Tree_52204) {
TY52008* Result_52205;
TY52008* T_52206;
NI Cmp_52230;
Result_52205 = 0;
T_52206 = 0;
T_52206 = Tree_52204;
if (!(T_52206 == NIM_NIL)) goto LA2;
Result_52205 = Newrope_52102(S_52203);
if (!NIM_FALSE) goto LA5;
Misses_52124 += 1;
LA5: ;
goto BeforeRet;
LA2: ;
Cmp_52230 = 0;
T_52206 = Splay_52136(S_52203, T_52206, &Cmp_52230);
if (!(Cmp_52230 == 0)) goto LA8;
Result_52205 = T_52206;
if (!NIM_FALSE) goto LA11;
Hits_52125 += 1;
LA11: ;
goto LA7;
LA8: ;
if (!NIM_FALSE) goto LA14;
Misses_52124 += 1;
LA14: ;
Result_52205 = Newrope_52102(S_52203);
if (!(Cmp_52230 < 0)) goto LA17;
asgnRefNoCycle((void**) &(*Result_52205).Left, (*T_52206).Left);
asgnRefNoCycle((void**) &(*Result_52205).Right, T_52206);
asgnRefNoCycle((void**) &(*T_52206).Left, NIM_NIL);
goto LA16;
LA17: ;
asgnRefNoCycle((void**) &(*Result_52205).Right, (*T_52206).Right);
asgnRefNoCycle((void**) &(*Result_52205).Left, T_52206);
asgnRefNoCycle((void**) &(*T_52206).Right, NIM_NIL);
LA16: ;
LA7: ;
BeforeRet: ;
return Result_52205;
}
N_NIMCALL(TY52008*, Torope_52046)(NimStringDesc* S_52048) {
TY52008* Result_52280;
Result_52280 = 0;
if (!((S_52048) && (S_52048)->Sup.len == 0)) goto LA2;
Result_52280 = NIM_NIL;
goto LA1;
LA2: ;
if (!NIM_TRUE) goto LA4;
Result_52280 = Insertincache_52201(S_52048, Cache_52123);
asgnRefNoCycle((void**) &Cache_52123, Result_52280);
goto LA1;
LA4: ;
Result_52280 = Newrope_52102(S_52048);
LA1: ;
return Result_52280;
}
N_NIMCALL(TY52008*, Con_52015)(TY52008* A_52017, TY52008* B_52018) {
TY52008* Result_52519;
Result_52519 = 0;
if (!(A_52017 == NIM_NIL)) goto LA2;
Result_52519 = B_52018;
goto LA1;
LA2: ;
if (!(B_52018 == NIM_NIL)) goto LA4;
Result_52519 = A_52017;
goto LA1;
LA4: ;
Result_52519 = Newrope_52102(NIM_NIL);
(*Result_52519).Length = (NI64)((*A_52017).Length + (*B_52018).Length);
asgnRefNoCycle((void**) &(*Result_52519).Left, A_52017);
asgnRefNoCycle((void**) &(*Result_52519).Right, B_52018);
LA1: ;
return Result_52519;
}
N_NIMCALL(TY52008*, Con_52019)(TY52008* A_52021, NimStringDesc* B_52022) {
TY52008* Result_52546;
TY52008* LOC1;
Result_52546 = 0;
LOC1 = 0;
LOC1 = Torope_52046(B_52022);
Result_52546 = Con_52015(A_52021, LOC1);
return Result_52546;
}
N_NIMCALL(void, App_52036)(TY52008** A_52039, NimStringDesc* B_52040) {
unsureAsgnRef((void**) &(*A_52039), Con_52019((*A_52039), B_52040));
}
N_NIMCALL(void, App_52031)(TY52008** A_52034, TY52008* B_52035) {
unsureAsgnRef((void**) &(*A_52034), Con_52015((*A_52034), B_52035));
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
N_NIMCALL(TY52008*, Ropef_52066)(NimStringDesc* Frmt_52068, TY52008** Args_52070, NI Args_52070Len0) {
TY52008* Result_52720;
NI I_52721;
NI Length_52724;
NI Num_52725;
NI J_52780;
NIM_BOOL LOC7;
NimStringDesc* LOC14;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
NI Start_52839;
NimStringDesc* LOC24;
Result_52720 = 0;
I_52721 = 0;
I_52721 = 0;
Length_52724 = 0;
Length_52724 = Frmt_52068->Sup.len;
Result_52720 = NIM_NIL;
Num_52725 = 0;
Num_52725 = 0;
while (1) {
if (!(I_52721 <= (NI64)(Length_52724 - 1))) goto LA1;
if (!((NU8)(Frmt_52068->data[I_52721]) == (NU8)(36))) goto LA3;
I_52721 += 1;
switch (((NU8)(Frmt_52068->data[I_52721]))) {
case 36:
App_52036(&Result_52720, ((NimStringDesc*) &TMP196233));
I_52721 += 1;
break;
case 35:
I_52721 += 1;
App_52031(&Result_52720, Args_52070[Num_52725]);
Num_52725 += 1;
break;
case 48 ... 57:
J_52780 = 0;
J_52780 = 0;
while (1) {
J_52780 = (NI64)((NI64)((NI64)(J_52780 * 10) + ((NU8)(Frmt_52068->data[I_52721]))) - 48);
I_52721 += 1;
LOC7 = ((NI64)((NI64)(Length_52724 + 0) - 1) < I_52721);
if (LOC7) goto LA8;
LOC7 = !((((NU8)(Frmt_52068->data[I_52721])) >= ((NU8)(48)) && ((NU8)(Frmt_52068->data[I_52721])) <= ((NU8)(57))));
LA8: ;
if (!LOC7) goto LA9;
goto LA5;
LA9: ;
} LA5: ;
Num_52725 = J_52780;
if (!((NI64)((Args_52070Len0-1) + 1) < J_52780)) goto LA12;
LOC14 = 0;
LOC15 = 0;
LOC15 = nimIntToStr(J_52780);
LOC14 = rawNewString(LOC15->Sup.len + 30);
appendString(LOC14, ((NimStringDesc*) &TMP196234));
appendString(LOC14, LOC15);
Internalerror_48163(LOC14);
LA12: ;
App_52031(&Result_52720, Args_52070[(NI64)(J_52780 - 1)]);
break;
case 78:
case 110:
App_52036(&Result_52720, Tnl_51581);
I_52721 += 1;
break;
default:
LOC16 = 0;
LOC16 = rawNewString(31);
appendString(LOC16, ((NimStringDesc*) &TMP196234));
appendChar(LOC16, Frmt_52068->data[I_52721]);
Internalerror_48163(LOC16);
break;
}
LA3: ;
Start_52839 = 0;
Start_52839 = I_52721;
while (1) {
if (!(I_52721 <= (NI64)(Length_52724 - 1))) goto LA17;
if (!!(((NU8)(Frmt_52068->data[I_52721]) == (NU8)(36)))) goto LA19;
I_52721 += 1;
goto LA18;
LA19: ;
goto LA17;
LA18: ;
} LA17: ;
if (!(Start_52839 <= (NI64)(I_52721 - 1))) goto LA22;
LOC24 = 0;
LOC24 = copyStrLast(Frmt_52068, Start_52839, (NI64)(I_52721 - 1));
App_52036(&Result_52720, LOC24);
LA22: ;
} LA1: ;
return Result_52720;
}
N_NIMCALL(TY52008*, Torope_52049)(NI64 I_52051) {
TY52008* Result_52587;
NimStringDesc* LOC1;
Result_52587 = 0;
LOC1 = 0;
LOC1 = nimInt64ToStr(I_52051);
Result_52587 = Torope_52046(LOC1);
return Result_52587;
}
N_NIMCALL(void, Appf_52071)(TY52008** C_52074, NimStringDesc* Frmt_52075, TY52008** Args_52077, NI Args_52077Len0) {
TY52008* LOC1;
LOC1 = 0;
LOC1 = Ropef_52066(Frmt_52075, Args_52077, Args_52077Len0);
App_52031(C_52074, LOC1);
}
N_NIMCALL(TY52008*, Con_52023)(NimStringDesc* A_52025, TY52008* B_52026) {
TY52008* Result_52551;
TY52008* LOC1;
Result_52551 = 0;
LOC1 = 0;
LOC1 = Torope_52046(A_52025);
Result_52551 = Con_52015(LOC1, B_52026);
return Result_52551;
}
N_NIMCALL(void, Prepend_52041)(TY52008** A_52044, TY52008* B_52045) {
unsureAsgnRef((void**) &(*A_52044), Con_52015(B_52045, (*A_52044)));
}
static N_INLINE(int, Updatecrc32_50014)(NI8 Val_50016, int Crc_50017) {
int Result_50048;
Result_50048 = 0;
Result_50048 = (NI32)(((int) (Crc32table_50039[((NI64)((NI64)(((NI) (Crc_50017)) ^ (NI64)(((NI) (Val_50016)) & 255)) & 255))-0])) ^ (NI32)((NU32)(Crc_50017) >> (NU32)(((NI32) 8))));
return Result_50048;
}
static N_INLINE(int, Updatecrc32_50018)(NIM_CHAR Val_50020, int Crc_50021) {
int Result_50053;
Result_50053 = 0;
Result_50053 = Updatecrc32_50014(((NI8) (((NU8)(Val_50020)))), Crc_50021);
return Result_50053;
}
N_NIMCALL(int, Newcrcfromropeaux_52912)(TY52008* R_52914, int Startval_52915) {
int Result_52916;
TY52406* Stack_52931;
TY52407 LOC1;
TY52008* It_52958;
NI I_52977;
NI L_52980;
Result_52916 = 0;
Stack_52931 = 0;
Stack_52931 = (TY52406*) newSeq(NTI52406, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = R_52914;
asgnRefNoCycle((void**) &Stack_52931->data[0], LOC1[0]);
Result_52916 = Startval_52915;
while (1) {
if (!(0 < Stack_52931->Sup.len)) goto LA2;
It_52958 = 0;
It_52958 = Pop_52429(&Stack_52931);
while (1) {
if (!((*It_52958).Data == NIM_NIL)) goto LA3;
Stack_52931 = (TY52406*) incrSeq(&(Stack_52931)->Sup, sizeof(TY52008*));
asgnRefNoCycle((void**) &Stack_52931->data[Stack_52931->Sup.len-1], (*It_52958).Right);
It_52958 = (*It_52958).Left;
} LA3: ;
I_52977 = 0;
I_52977 = 0;
L_52980 = 0;
L_52980 = (*It_52958).Data->Sup.len;
while (1) {
if (!(I_52977 < L_52980)) goto LA4;
Result_52916 = Updatecrc32_50018((*It_52958).Data->data[I_52977], Result_52916);
I_52977 += 1;
} LA4: ;
} LA2: ;
return Result_52916;
}
N_NIMCALL(int, Crcfromrope_52997)(TY52008* R_52999) {
int Result_53000;
Result_53000 = 0;
Result_53000 = Newcrcfromropeaux_52912(R_52999, ((NI32) -1));
return Result_53000;
}
N_NIMCALL(void, Newwriteroperec_52621)(FILE** F_52624, TY52008* C_52625) {
TY52406* Stack_52640;
TY52407 LOC1;
TY52008* It_52667;
Stack_52640 = 0;
Stack_52640 = (TY52406*) newSeq(NTI52406, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = C_52625;
asgnRefNoCycle((void**) &Stack_52640->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_52640->Sup.len)) goto LA2;
It_52667 = 0;
It_52667 = Pop_52429(&Stack_52640);
while (1) {
if (!((*It_52667).Data == NIM_NIL)) goto LA3;
Stack_52640 = (TY52406*) incrSeq(&(Stack_52640)->Sup, sizeof(TY52008*));
asgnRefNoCycle((void**) &Stack_52640->data[Stack_52640->Sup.len-1], (*It_52667).Right);
It_52667 = (*It_52667).Left;
} LA3: ;
Write_3866((*F_52624), (*It_52667).Data);
} LA2: ;
}
N_NIMCALL(void, Writerope_52055)(TY52008* Head_52057, NimStringDesc* Filename_52058) {
FILE* F_52701;
NIM_BOOL LOC2;
F_52701 = 0;
LOC2 = Open_3817(&F_52701, Filename_52058, ((NU8) 1), -1);
if (!LOC2) goto LA3;
if (!!((Head_52057 == NIM_NIL))) goto LA6;
Newwriteroperec_52621(&F_52701, Head_52057);
LA6: ;
fclose(F_52701);
goto LA1;
LA3: ;
Rawmessage_48045(((NU8) 2), Filename_52058);
LA1: ;
}
N_NIMCALL(NIM_BOOL, Writeropeifnotequal_52059)(TY52008* R_52061, NimStringDesc* Filename_52062) {
NIM_BOOL Result_53005;
int C_53006;
int LOC2;
Result_53005 = 0;
C_53006 = 0;
C_53006 = Crcfromfile_50029(Filename_52062);
LOC2 = Crcfromrope_52997(R_52061);
if (!!((C_53006 == LOC2))) goto LA3;
Writerope_52055(R_52061, Filename_52062);
Result_53005 = NIM_TRUE;
goto LA1;
LA3: ;
Result_53005 = NIM_FALSE;
LA1: ;
return Result_53005;
}
N_NIMCALL(NI, Ropelen_52052)(TY52008* A_52054) {
NI Result_52090;
Result_52090 = 0;
if (!(A_52054 == NIM_NIL)) goto LA2;
Result_52090 = 0;
goto LA1;
LA2: ;
Result_52090 = (*A_52054).Length;
LA1: ;
return Result_52090;
}
static N_INLINE(TY52008*, Pop_52429)(TY52406** S_52434) {
TY52008* Result_52435;
NI L_52446;
Result_52435 = 0;
L_52446 = 0;
L_52446 = (NI64)((*S_52434)->Sup.len - 1);
Result_52435 = (*S_52434)->data[L_52446];
(*S_52434) = (TY52406*) setLengthSeq(&((*S_52434))->Sup, sizeof(TY52008*), L_52446);
return Result_52435;
}
N_NOINLINE(void, ropesInit)(void) {
asgnRefNoCycle((void**) &N_52126, (TY52008*) newObj(NTI52006, sizeof(TY52008)));
(*N_52126).Sup.m_type = NTI52008;
}

