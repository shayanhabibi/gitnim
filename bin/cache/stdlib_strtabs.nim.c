/* Generated by Nim Compiler v1.4.8 */
/*   (c) 2021 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN -pg -O3 -fno-strict-aliasing -fno-ident   -IC:\Users\PC\.choosenim\toolchains\nim-1.4.8\lib -IC:\Users\PC\AppData\Local\Temp\nimble_23592\githubcom_haxscramperhmisc_0.12.0\src\hmisc\scripts -o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\stdlib_strtabs.nim.c.o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\stdlib_strtabs.nim.c */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__xv3aaFd3JCw8NbmALHiezQ tySequence__xv3aaFd3JCw8NbmALHiezQ;
typedef struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA tyTuple__sPaDkVPSC0MkcoXCxPH9ccA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;

/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ;
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg {
  RootObj Sup;
NI counter;
tySequence__xv3aaFd3JCw8NbmALHiezQ* data;
tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA {
NimStringDesc* Field0;
NimStringDesc* Field1;
NIM_BOOL Field2;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__xv3aaFd3JCw8NbmALHiezQ {
  TGenericSeq Sup;
  tyTuple__sPaDkVPSC0MkcoXCxPH9ccA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*, nstnewStringTable)(tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__xv3aaFd3JCw8NbmALHiezQ)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__n9cmoMXcDs47wYDFGEXuCfw)(void* p, NI op);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefRC1)(void* p);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y);
static N_INLINE(NIM_BOOL, ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, nstPut)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key, NimStringDesc* val);
N_LIB_PRIVATE N_NIMCALL(NI, rawGet__X5BdUJaOXir9aSEySVC9auGg)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NI, myhash__X5BdUJaOXir9aSEySVC9auGg_2)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NI, hash__6PCYkKlCNhq9cnRLnqWKkwQ)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase__6PCYkKlCNhq9cnRLnqWKkwQ_2)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle__6PCYkKlCNhq9cnRLnqWKkwQ_3)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, myCmp__eVng2zDJS9b9clmhuRshG5qw)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NI, cmp__NAicU5bAGXmkx2NJujGi7g)(NimStringDesc* x, NimStringDesc* y);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nextTry__utGEK6yQ09bIOKHFXfDbVlAstrtabs)(NI h, NI maxHash);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash__gluTWOK1wKKJeMdWZL2rtA)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(void, enlarge__cvA7ksxbnJWGPZwLRu9c1YQ)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert__9cW39b7ovVEYQC3Im9cP8NBfA)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySequence__xv3aaFd3JCw8NbmALHiezQ** data, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y);

/* section: NIM_merge_DATA */
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTI__V5PVrt9bIxZEeV7lfvqqtNg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE TNimType NTI__sPaDkVPSC0MkcoXCxPH9ccA_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI__VaVACK0bpYmqIQ0mKcHfQQ_;
N_LIB_PRIVATE TNimType NTI__xv3aaFd3JCw8NbmALHiezQ_;
N_LIB_PRIVATE TNimType NTI__G9c4wVDFIzf0xHmQvxso9a9cQ_;
N_LIB_PRIVATE TNimType NTI__n9cmoMXcDs47wYDFGEXuCfw_;
STRING_LITERAL(TM__ZT9crccxweoChVXn9cHcxIXQ_8, "strtabs.nim(126, 9) `length > counter` ", 39);

/* section: NIM_merge_VARS */
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tySequence__xv3aaFd3JCw8NbmALHiezQ)(void* p, NI op) {
	tySequence__xv3aaFd3JCw8NbmALHiezQ* a;
	NI T1_;
	a = (tySequence__xv3aaFd3JCw8NbmALHiezQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].Field0, op);
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}
static N_NIMCALL(void, Marker_tyRef__n9cmoMXcDs47wYDFGEXuCfw)(void* p, NI op) {
	tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* a;
	a = (tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*)p;
	nimGCvisit((void*)(*a).data, op);
}
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU64)(((NU) (x))) < (NU64)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT__Y66tOYFjgwJ0k4aLz4bc0Q((&gch__IcYaEuuWivYAS86vFMTS3Q.zct), c);
}
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA4_: ;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(void, nimGCunrefRC1)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*, nstnewStringTable)(tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode) {
	tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* result;
	result = (tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*)0;
	result = (tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*) newObj((&NTI__n9cmoMXcDs47wYDFGEXuCfw_), sizeof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg));
	(*result).Sup.m_type = (&NTI__V5PVrt9bIxZEeV7lfvqqtNg_);
	(*result).mode = mode;
	(*result).counter = ((NI) 0);
	if ((*result).data) { nimGCunrefRC1((*result).data); (*result).data = NIM_NIL; }
	(*result).data = (tySequence__xv3aaFd3JCw8NbmALHiezQ*) newSeqRC1((&NTI__xv3aaFd3JCw8NbmALHiezQ_), ((NI) 64));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, myhash__X5BdUJaOXir9aSEySVC9auGg_2)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NI result;
	result = (NI)0;
	switch ((*t).mode) {
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 0):
	{
		result = hash__6PCYkKlCNhq9cnRLnqWKkwQ(key);
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 1):
	{
		result = hashIgnoreCase__6PCYkKlCNhq9cnRLnqWKkwQ_2(key);
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 2):
	{
		result = hashIgnoreStyle__6PCYkKlCNhq9cnRLnqWKkwQ_3(key);
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, myCmp__eVng2zDJS9b9clmhuRshG5qw)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	switch ((*t).mode) {
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 0):
	{
		NI T2_;
		T2_ = (NI)0;
		T2_ = cmp__NAicU5bAGXmkx2NJujGi7g(a, b);
		result = (T2_ == ((NI) 0));
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 1):
	{
		NI T4_;
		T4_ = (NI)0;
		T4_ = nsuCmpIgnoreCase(a, b);
		result = (T4_ == ((NI) 0));
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 2):
	{
		NI T6_;
		T6_ = (NI)0;
		T6_ = nsuCmpIgnoreStyle(a, b);
		result = (T6_ == ((NI) 0));
	}
	break;
	}
	return result;
}
static N_INLINE(NI, nextTry__utGEK6yQ09bIOKHFXfDbVlAstrtabs)(NI h, NI maxHash) {
	NI result;
	NI TM__ZT9crccxweoChVXn9cHcxIXQ_7;
	result = (NI)0;
	if (nimAddInt(h, ((NI) 1), &TM__ZT9crccxweoChVXn9cHcxIXQ_7)) { raiseOverflow(); };
	result = (NI)((NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_7) & maxHash);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rawGet__X5BdUJaOXir9aSEySVC9auGg)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI T1_;
	NI T2_;
{	result = (NI)0;
	T1_ = (NI)0;
	T1_ = myhash__X5BdUJaOXir9aSEySVC9auGg_2(t, key);
	T2_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
	h = (NI)(T1_ & T2_);
	{
		while (1) {
			NI T10_;
			if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)){ raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1); }
			if (!(*t).data->data[h].Field2) goto LA4;
			{
				NIM_BOOL T7_;
				if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)){ raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1); }
				T7_ = (NIM_BOOL)0;
				T7_ = myCmp__eVng2zDJS9b9clmhuRshG5qw(t, (*t).data->data[h].Field0, key);
				if (!T7_) goto LA8_;
				result = h;
				goto BeforeRet_;
			}
			LA8_: ;
			T10_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
			h = nextTry__utGEK6yQ09bIOKHFXfDbVlAstrtabs(h, T10_);
		} LA4: ;
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash__gluTWOK1wKKJeMdWZL2rtA)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T5_;
	NI TM__ZT9crccxweoChVXn9cHcxIXQ_9;
	NI TM__ZT9crccxweoChVXn9cHcxIXQ_10;
	NI TM__ZT9crccxweoChVXn9cHcxIXQ_11;
	result = (NIM_BOOL)0;
	{
		if (!!((counter < length))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__ZT9crccxweoChVXn9cHcxIXQ_8));
	}
	LA3_: ;
	T5_ = (NIM_BOOL)0;
	if (nimMulInt(length, ((NI) 2), &TM__ZT9crccxweoChVXn9cHcxIXQ_9)) { raiseOverflow(); };
	if (nimMulInt(counter, ((NI) 3), &TM__ZT9crccxweoChVXn9cHcxIXQ_10)) { raiseOverflow(); };
	T5_ = ((NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_9) < (NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_10));
	if (T5_) goto LA6_;
	if (nimSubInt(length, counter, &TM__ZT9crccxweoChVXn9cHcxIXQ_11)) { raiseOverflow(); };
	T5_ = ((NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_11) < ((NI) 4));
	LA6_: ;
	result = T5_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, rawInsert__9cW39b7ovVEYQC3Im9cP8NBfA)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySequence__xv3aaFd3JCw8NbmALHiezQ** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI T1_;
	NI T2_;
	NimStringDesc* T6_;
	NimStringDesc* T7_;
	T1_ = (NI)0;
	T1_ = myhash__X5BdUJaOXir9aSEySVC9auGg_2(t, key);
	T2_ = (((*data) ? (*data)->Sup.len : 0)-1);
	h = (NI)(T1_ & T2_);
	{
		while (1) {
			NI T5_;
			if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)){ raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1); }
			if (!(*data)->data[h].Field2) goto LA4;
			T5_ = (((*data) ? (*data)->Sup.len : 0)-1);
			h = nextTry__utGEK6yQ09bIOKHFXfDbVlAstrtabs(h, T5_);
		} LA4: ;
	}
	if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)){ raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1); }
	T6_ = (NimStringDesc*)0;
	T6_ = (*data)->data[h].Field0; (*data)->data[h].Field0 = copyStringRC1(key);
	if (T6_) nimGCunrefNoCycle(T6_);
	if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)){ raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1); }
	T7_ = (NimStringDesc*)0;
	T7_ = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(val);
	if (T7_) nimGCunrefNoCycle(T7_);
	if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)){ raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1); }
	(*data)->data[h].Field2 = NIM_TRUE;
}
static N_INLINE(NI, pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem((*c).refcount, ((NI) 8));
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef__AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(void, enlarge__cvA7ksxbnJWGPZwLRu9c1YQ)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t) {
	tySequence__xv3aaFd3JCw8NbmALHiezQ* n;
	NI T1_;
	NI TM__ZT9crccxweoChVXn9cHcxIXQ_12;
	tySequence__xv3aaFd3JCw8NbmALHiezQ* T12_;
	n = (tySequence__xv3aaFd3JCw8NbmALHiezQ*)0;
	T1_ = ((*t).data ? (*t).data->Sup.len : 0);
	if (nimMulInt(T1_, ((NI) 2), &TM__ZT9crccxweoChVXn9cHcxIXQ_12)) { raiseOverflow(); };
	if (((NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_12)) < ((NI) 0) || ((NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_12)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_12), ((NI) 0), ((NI) IL64(9223372036854775807))); }
	n = (tySequence__xv3aaFd3JCw8NbmALHiezQ*) newSeq((&NTI__xv3aaFd3JCw8NbmALHiezQ_), ((NI) ((NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_12))));
	{
		NI i;
		NI colontmp_;
		NI T3_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T3_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
		colontmp_ = T3_;
		res = ((NI) 0);
		{
			while (1) {
				NI TM__ZT9crccxweoChVXn9cHcxIXQ_13;
				if (!(res <= colontmp_)) goto LA5;
				i = res;
				{
					NimStringDesc* T10_;
					NimStringDesc* T11_;
					if ((NU)(i) >= (NU)((*t).data ? (*t).data->Sup.len : 0)){ raiseIndexError2(i,((*t).data ? (*t).data->Sup.len : 0)-1); }
					if (!(*t).data->data[i].Field2) goto LA8_;
					if ((NU)(i) >= (NU)((*t).data ? (*t).data->Sup.len : 0)){ raiseIndexError2(i,((*t).data ? (*t).data->Sup.len : 0)-1); }
					T10_ = (NimStringDesc*)0;
					T10_ = (*t).data->data[i].Field0;
					asgnRef((void**) (&(*t).data->data[i].Field0), NIM_NIL);
					if ((NU)(i) >= (NU)((*t).data ? (*t).data->Sup.len : 0)){ raiseIndexError2(i,((*t).data ? (*t).data->Sup.len : 0)-1); }
					T11_ = (NimStringDesc*)0;
					T11_ = (*t).data->data[i].Field1;
					asgnRef((void**) (&(*t).data->data[i].Field1), NIM_NIL);
					rawInsert__9cW39b7ovVEYQC3Im9cP8NBfA(t, (&n), T10_, T11_);
				}
				LA8_: ;
				if (nimAddInt(res, ((NI) 1), &TM__ZT9crccxweoChVXn9cHcxIXQ_13)) { raiseOverflow(); };
				res = (NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_13);
			} LA5: ;
		}
	}
	T12_ = (tySequence__xv3aaFd3JCw8NbmALHiezQ*)0;
	T12_ = (*t).data;
	asgnRef((void**) (&(*t).data), n);
	n = T12_;
}
N_LIB_PRIVATE N_NIMCALL(void, nstPut)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawGet__X5BdUJaOXir9aSEySVC9auGg(t, key);
	{
		NimStringDesc* T5_;
		if (!(((NI) 0) <= index)) goto LA3_;
		if ((NU)(index) >= (NU)((*t).data ? (*t).data->Sup.len : 0)){ raiseIndexError2(index,((*t).data ? (*t).data->Sup.len : 0)-1); }
		T5_ = (NimStringDesc*)0;
		T5_ = (*t).data->data[index].Field1; (*t).data->data[index].Field1 = copyStringRC1(val);
		if (T5_) nimGCunrefNoCycle(T5_);
	}
	goto LA1_;
	LA3_: ;
	{
		NI TM__ZT9crccxweoChVXn9cHcxIXQ_14;
		{
			NI T9_;
			NIM_BOOL T10_;
			T9_ = ((*t).data ? (*t).data->Sup.len : 0);
			T10_ = (NIM_BOOL)0;
			T10_ = mustRehash__gluTWOK1wKKJeMdWZL2rtA(T9_, (*t).counter);
			if (!T10_) goto LA11_;
			enlarge__cvA7ksxbnJWGPZwLRu9c1YQ(t);
		}
		LA11_: ;
		rawInsert__9cW39b7ovVEYQC3Im9cP8NBfA(t, (&(*t).data), key, val);
		if (nimAddInt((*t).counter, ((NI) 1), &TM__ZT9crccxweoChVXn9cHcxIXQ_14)) { raiseOverflow(); };
		(*t).counter = (NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_14);
	}
	LA1_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*, nstnewStringTableWithTableConstr)(tyTuple__UV3llMMYFckfui8YMBuUZA* keyValuePairs, NI keyValuePairsLen_0, tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode) {
	tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* result;
	result = (tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*)0;
	result = nstnewStringTable(mode);
	{
		NimStringDesc** key;
		NimStringDesc** val;
		NI i;
		key = (NimStringDesc**)0;
		val = (NimStringDesc**)0;
		i = ((NI) 0);
		{
			while (1) {
				NI TM__ZT9crccxweoChVXn9cHcxIXQ_15;
				if (!(i < keyValuePairsLen_0)) goto LA3;
				if ((NU)(i) >= (NU)(keyValuePairsLen_0)){ raiseIndexError2(i,keyValuePairsLen_0-1); }
				key = (&keyValuePairs[i].Field0);
				if ((NU)(i) >= (NU)(keyValuePairsLen_0)){ raiseIndexError2(i,keyValuePairsLen_0-1); }
				val = (&keyValuePairs[i].Field1);
				nstPut(result, (*key), (*val));
				if (nimAddInt(i, ((NI) 1), &TM__ZT9crccxweoChVXn9cHcxIXQ_15)) { raiseOverflow(); };
				i = (NI)(TM__ZT9crccxweoChVXn9cHcxIXQ_15);
			} LA3: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_strtabsDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[3];
static TNimNode* TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[3];
static TNimNode* TM__ZT9crccxweoChVXn9cHcxIXQ_4_3[3];
NI TM__ZT9crccxweoChVXn9cHcxIXQ_6;
static char* NIM_CONST TM__ZT9crccxweoChVXn9cHcxIXQ_5[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TM__ZT9crccxweoChVXn9cHcxIXQ_0[12];

/* section: NIM_merge_TYPE_INIT3 */
NTI__V5PVrt9bIxZEeV7lfvqqtNg_.size = sizeof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg);
NTI__V5PVrt9bIxZEeV7lfvqqtNg_.align = NIM_ALIGNOF(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg);
NTI__V5PVrt9bIxZEeV7lfvqqtNg_.kind = 17;
NTI__V5PVrt9bIxZEeV7lfvqqtNg_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[0] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[1];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[1].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[1].offset = offsetof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg, counter);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[1].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[1].name = "counter";
TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[1] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[2];
NTI__sPaDkVPSC0MkcoXCxPH9ccA_.size = sizeof(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA);
NTI__sPaDkVPSC0MkcoXCxPH9ccA_.align = NIM_ALIGNOF(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA);
NTI__sPaDkVPSC0MkcoXCxPH9ccA_.kind = 18;
NTI__sPaDkVPSC0MkcoXCxPH9ccA_.base = 0;
TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[0] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[4];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[4].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[4].offset = offsetof(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA, Field0);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[4].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[4].name = "Field0";
TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[1] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[5];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[5].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[5].offset = offsetof(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA, Field1);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[5].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[5].name = "Field1";
TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[2] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[6];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[6].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[6].offset = offsetof(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA, Field2);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[6].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[6].name = "Field2";
TM__ZT9crccxweoChVXn9cHcxIXQ_0[3].len = 3; TM__ZT9crccxweoChVXn9cHcxIXQ_0[3].kind = 2; TM__ZT9crccxweoChVXn9cHcxIXQ_0[3].sons = &TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[0];
NTI__sPaDkVPSC0MkcoXCxPH9ccA_.node = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[3];
NTI__xv3aaFd3JCw8NbmALHiezQ_.size = sizeof(tySequence__xv3aaFd3JCw8NbmALHiezQ*);
NTI__xv3aaFd3JCw8NbmALHiezQ_.align = NIM_ALIGNOF(tySequence__xv3aaFd3JCw8NbmALHiezQ*);
NTI__xv3aaFd3JCw8NbmALHiezQ_.kind = 24;
NTI__xv3aaFd3JCw8NbmALHiezQ_.base = (&NTI__sPaDkVPSC0MkcoXCxPH9ccA_);
NTI__xv3aaFd3JCw8NbmALHiezQ_.marker = Marker_tySequence__xv3aaFd3JCw8NbmALHiezQ;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[2].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[2].offset = offsetof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg, data);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[2].typ = (&NTI__xv3aaFd3JCw8NbmALHiezQ_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[2].name = "data";
TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[2] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[7];
NTI__G9c4wVDFIzf0xHmQvxso9a9cQ_.size = sizeof(tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ);
NTI__G9c4wVDFIzf0xHmQvxso9a9cQ_.align = NIM_ALIGNOF(tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ);
NTI__G9c4wVDFIzf0xHmQvxso9a9cQ_.kind = 14;
NTI__G9c4wVDFIzf0xHmQvxso9a9cQ_.base = 0;
NTI__G9c4wVDFIzf0xHmQvxso9a9cQ_.flags = 3;
for (TM__ZT9crccxweoChVXn9cHcxIXQ_6 = 0; TM__ZT9crccxweoChVXn9cHcxIXQ_6 < 3; TM__ZT9crccxweoChVXn9cHcxIXQ_6++) {
TM__ZT9crccxweoChVXn9cHcxIXQ_0[TM__ZT9crccxweoChVXn9cHcxIXQ_6+8].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[TM__ZT9crccxweoChVXn9cHcxIXQ_6+8].offset = TM__ZT9crccxweoChVXn9cHcxIXQ_6;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[TM__ZT9crccxweoChVXn9cHcxIXQ_6+8].name = TM__ZT9crccxweoChVXn9cHcxIXQ_5[TM__ZT9crccxweoChVXn9cHcxIXQ_6];
TM__ZT9crccxweoChVXn9cHcxIXQ_4_3[TM__ZT9crccxweoChVXn9cHcxIXQ_6] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[TM__ZT9crccxweoChVXn9cHcxIXQ_6+8];
}
TM__ZT9crccxweoChVXn9cHcxIXQ_0[11].len = 3; TM__ZT9crccxweoChVXn9cHcxIXQ_0[11].kind = 2; TM__ZT9crccxweoChVXn9cHcxIXQ_0[11].sons = &TM__ZT9crccxweoChVXn9cHcxIXQ_4_3[0];
NTI__G9c4wVDFIzf0xHmQvxso9a9cQ_.node = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[11];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[7].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[7].offset = offsetof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg, mode);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[7].typ = (&NTI__G9c4wVDFIzf0xHmQvxso9a9cQ_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[7].name = "mode";
TM__ZT9crccxweoChVXn9cHcxIXQ_0[0].len = 3; TM__ZT9crccxweoChVXn9cHcxIXQ_0[0].kind = 2; TM__ZT9crccxweoChVXn9cHcxIXQ_0[0].sons = &TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[0];
NTI__V5PVrt9bIxZEeV7lfvqqtNg_.node = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[0];
NTI__n9cmoMXcDs47wYDFGEXuCfw_.size = sizeof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*);
NTI__n9cmoMXcDs47wYDFGEXuCfw_.align = NIM_ALIGNOF(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*);
NTI__n9cmoMXcDs47wYDFGEXuCfw_.kind = 22;
NTI__n9cmoMXcDs47wYDFGEXuCfw_.base = (&NTI__V5PVrt9bIxZEeV7lfvqqtNg_);
NTI__n9cmoMXcDs47wYDFGEXuCfw_.marker = Marker_tyRef__n9cmoMXcDs47wYDFGEXuCfw;
}

