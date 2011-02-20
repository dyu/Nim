/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY46036 TY46036;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY46449 TY46449;
typedef struct TY10602 TY10602;
typedef struct TNimType TNimType;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
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
struct TY46036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY46036 TY46054[21];
typedef NimStringDesc* TY46458[2];
struct TY46449 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY46449 TY46462[13];
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
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NU8, Nametocpu_46575)(NimStringDesc* Name_46577);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_23633, NimStringDesc* B_23634);
N_NIMCALL(NU8, Nametoos_46572)(NimStringDesc* Name_46574);
N_NIMCALL(void, Settarget_46582)(NU8 O_46584, NU8 C_46585);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
STRING_LITERAL(TMP46384, "DOS", 3);
STRING_LITERAL(TMP46385, "..", 2);
STRING_LITERAL(TMP46386, "$1.dll", 6);
STRING_LITERAL(TMP46387, "/", 1);
STRING_LITERAL(TMP46388, ".obj", 4);
STRING_LITERAL(TMP46389, "\015\012", 2);
STRING_LITERAL(TMP46390, ";", 1);
STRING_LITERAL(TMP46391, "\\", 1);
STRING_LITERAL(TMP46392, ".bat", 4);
STRING_LITERAL(TMP46393, ".", 1);
STRING_LITERAL(TMP46394, ".exe", 4);
STRING_LITERAL(TMP46395, "Windows", 7);
STRING_LITERAL(TMP46396, "OS2", 3);
STRING_LITERAL(TMP46397, "Linux", 5);
STRING_LITERAL(TMP46398, "lib$1.so", 8);
STRING_LITERAL(TMP46399, ".o", 2);
STRING_LITERAL(TMP46400, "\012", 1);
STRING_LITERAL(TMP46401, ":", 1);
STRING_LITERAL(TMP46402, ".sh", 3);
STRING_LITERAL(TMP46403, "", 0);
STRING_LITERAL(TMP46404, "MorphOS", 7);
STRING_LITERAL(TMP46405, "SkyOS", 5);
STRING_LITERAL(TMP46406, "Solaris", 7);
STRING_LITERAL(TMP46407, "Irix", 4);
STRING_LITERAL(TMP46408, "NetBSD", 6);
STRING_LITERAL(TMP46409, "FreeBSD", 7);
STRING_LITERAL(TMP46410, "OpenBSD", 7);
STRING_LITERAL(TMP46411, "AIX", 3);
STRING_LITERAL(TMP46412, "PalmOS", 6);
STRING_LITERAL(TMP46413, "QNX", 3);
STRING_LITERAL(TMP46414, "Amiga", 5);
STRING_LITERAL(TMP46415, "$1.library", 10);
STRING_LITERAL(TMP46416, "Atari", 5);
STRING_LITERAL(TMP46417, ".tpp", 4);
STRING_LITERAL(TMP46418, "Netware", 7);
STRING_LITERAL(TMP46419, "$1.nlm", 6);
STRING_LITERAL(TMP46420, ".nlm", 4);
STRING_LITERAL(TMP46421, "MacOS", 5);
STRING_LITERAL(TMP46422, "::", 2);
STRING_LITERAL(TMP46423, "$1Lib", 5);
STRING_LITERAL(TMP46424, "\015", 1);
STRING_LITERAL(TMP46425, ",", 1);
STRING_LITERAL(TMP46426, "MacOSX", 6);
STRING_LITERAL(TMP46427, "lib$1.dylib", 11);
STRING_LITERAL(TMP46428, "EcmaScript", 10);
STRING_LITERAL(TMP46429, "NimrodVM", 8);
NIM_CONST TY46054 Os_46053 = {{((NimStringDesc*) &TMP46384),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46386),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46388),
((NimStringDesc*) &TMP46389),
((NimStringDesc*) &TMP46390),
((NimStringDesc*) &TMP46391),
((NimStringDesc*) &TMP46392),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46394),
((NimStringDesc*) &TMP46393),
2}
,
{((NimStringDesc*) &TMP46395),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46386),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46388),
((NimStringDesc*) &TMP46389),
((NimStringDesc*) &TMP46390),
((NimStringDesc*) &TMP46391),
((NimStringDesc*) &TMP46392),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46394),
((NimStringDesc*) &TMP46393),
2}
,
{((NimStringDesc*) &TMP46396),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46386),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46388),
((NimStringDesc*) &TMP46389),
((NimStringDesc*) &TMP46390),
((NimStringDesc*) &TMP46391),
((NimStringDesc*) &TMP46392),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46394),
((NimStringDesc*) &TMP46393),
2}
,
{((NimStringDesc*) &TMP46397),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46404),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46405),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46406),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46407),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46408),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46409),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46410),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46411),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46412),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
1}
,
{((NimStringDesc*) &TMP46413),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46414),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46415),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
1}
,
{((NimStringDesc*) &TMP46416),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46386),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46417),
((NimStringDesc*) &TMP46393),
1}
,
{((NimStringDesc*) &TMP46418),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46419),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46389),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46420),
((NimStringDesc*) &TMP46393),
2}
,
{((NimStringDesc*) &TMP46421),
((NimStringDesc*) &TMP46422),
((NimStringDesc*) &TMP46423),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46424),
((NimStringDesc*) &TMP46425),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
2}
,
{((NimStringDesc*) &TMP46426),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46427),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
5}
,
{((NimStringDesc*) &TMP46428),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
0}
,
{((NimStringDesc*) &TMP46429),
((NimStringDesc*) &TMP46385),
((NimStringDesc*) &TMP46398),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46399),
((NimStringDesc*) &TMP46400),
((NimStringDesc*) &TMP46401),
((NimStringDesc*) &TMP46387),
((NimStringDesc*) &TMP46402),
((NimStringDesc*) &TMP46393),
((NimStringDesc*) &TMP46403),
((NimStringDesc*) &TMP46393),
0}
}
;
STRING_LITERAL(TMP46553, "littleEndian", 12);
STRING_LITERAL(TMP46554, "bigEndian", 9);
NIM_CONST TY46458 Endiantostr_46457 = {((NimStringDesc*) &TMP46553),
((NimStringDesc*) &TMP46554)}
;
STRING_LITERAL(TMP46555, "i386", 4);
STRING_LITERAL(TMP46556, "m68k", 4);
STRING_LITERAL(TMP46557, "alpha", 5);
STRING_LITERAL(TMP46558, "powerpc", 7);
STRING_LITERAL(TMP46559, "powerpc64", 9);
STRING_LITERAL(TMP46560, "sparc", 5);
STRING_LITERAL(TMP46561, "vm", 2);
STRING_LITERAL(TMP46562, "ia64", 4);
STRING_LITERAL(TMP46563, "amd64", 5);
STRING_LITERAL(TMP46564, "mips", 4);
STRING_LITERAL(TMP46565, "arm", 3);
STRING_LITERAL(TMP46566, "ecmascript", 10);
STRING_LITERAL(TMP46567, "nimrodvm", 8);
NIM_CONST TY46462 Cpu_46461 = {{((NimStringDesc*) &TMP46555),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP46556),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP46557),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP46558),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP46559),
64,
((NU8) 1),
64,
64}
,
{((NimStringDesc*) &TMP46560),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP46561),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP46562),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP46563),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP46564),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP46565),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP46566),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP46567),
32,
((NU8) 1),
64,
32}
}
;
STRING_LITERAL(TMP46700, "windows", 7);
NU8 Targetcpu_46568;
NU8 Hostcpu_46569;
NU8 Targetos_46570;
NU8 Hostos_46571;
NI Intsize_46578;
NI Floatsize_46579;
NI Ptrsize_46580;
NimStringDesc* Tnl_46581;
extern TY10996 Gch_11014;
N_NIMCALL(NU8, Nametocpu_46575)(NimStringDesc* Name_46577) {
NU8 Result_46655;
NU8 I_46695;
NU8 Res_46699;
NI LOC3;
Result_46655 = 0;
I_46695 = 0;
Res_46699 = 0;
Res_46699 = ((NU8) 1);
while (1) {
if (!(Res_46699 <= ((NU8) 13))) goto LA1;
I_46695 = Res_46699;
LOC3 = nsuCmpIgnoreStyle(Name_46577, Cpu_46461[(I_46695)-1].Name);
if (!(LOC3 == 0)) goto LA4;
Result_46655 = I_46695;
goto BeforeRet;
LA4: ;
Res_46699 += 1;
} LA1: ;
Result_46655 = ((NU8) 0);
BeforeRet: ;
return Result_46655;
}
N_NIMCALL(NU8, Nametoos_46572)(NimStringDesc* Name_46574) {
NU8 Result_46607;
NU8 I_46647;
NU8 Res_46651;
NI LOC3;
Result_46607 = 0;
I_46647 = 0;
Res_46651 = 0;
Res_46651 = ((NU8) 1);
while (1) {
if (!(Res_46651 <= ((NU8) 21))) goto LA1;
I_46647 = Res_46651;
LOC3 = nsuCmpIgnoreStyle(Name_46574, Os_46053[(I_46647)-1].Name);
if (!(LOC3 == 0)) goto LA4;
Result_46607 = I_46647;
goto BeforeRet;
LA4: ;
Res_46651 += 1;
} LA1: ;
Result_46607 = ((NU8) 0);
BeforeRet: ;
return Result_46607;
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
N_NIMCALL(void, Settarget_46582)(NU8 O_46584, NU8 C_46585) {
Targetcpu_46568 = C_46585;
Targetos_46570 = O_46584;
Intsize_46578 = (NI32)(Cpu_46461[(C_46585)-1].Intsize / 8);
Floatsize_46579 = (NI32)(Cpu_46461[(C_46585)-1].Floatsize / 8);
Ptrsize_46580 = (NI32)(Cpu_46461[(C_46585)-1].Bit / 8);
asgnRefNoCycle((void**) &Tnl_46581, copyString(Os_46053[(O_46584)-1].Newline));
}
N_NOINLINE(void, platformInit)(void) {
Hostcpu_46569 = Nametocpu_46575(((NimStringDesc*) &TMP46555));
Hostos_46571 = Nametoos_46572(((NimStringDesc*) &TMP46700));
Settarget_46582(Hostos_46571, Hostcpu_46569);
}

