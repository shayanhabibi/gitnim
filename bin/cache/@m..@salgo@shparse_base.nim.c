/* Generated by Nim Compiler v1.4.8 */
/*   (c) 2021 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN -pg -O3 -fno-strict-aliasing -fno-ident   -IC:\Users\PC\.choosenim\toolchains\nim-1.4.8\lib -IC:\Users\PC\AppData\Local\Temp\nimble_23592\githubcom_haxscramperhmisc_0.12.0\src\hmisc\scripts -o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\@m..@salgo@shparse_base.nim.c.o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\@m..@salgo@shparse_base.nim.c */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
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
typedef struct tySequence__hVt9cMdNeI853GPtkEoXHMQ tySequence__hVt9cMdNeI853GPtkEoXHMQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg;
typedef struct tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A;
typedef struct tyObject_PosStr__StbvKGxPg9bKvCvUKe9bHR0g tyObject_PosStr__StbvKGxPg9bKvCvUKe9bHR0g;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct tySequence__E8pi9b5QNahsURYzXMjh3qw tySequence__E8pi9b5QNahsURYzXMjh3qw;
typedef struct tySequence__CDAVeSdtgeWcSw57mG9aBSw tySequence__CDAVeSdtgeWcSw57mG9aBSw;
typedef struct tySequence__WBWk79aXt9bo1UN16tQ9bdbwg tySequence__WBWk79aXt9bo1UN16tQ9bdbwg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ;
typedef struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
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
typedef struct tyObject_GetterError__VgYDIf39bWD2m9c47M57Po9aw tyObject_GetterError__VgYDIf39bWD2m9c47M57Po9aw;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
typedef struct tyObject_PosStrSlice__GxA7P9aMdXov3EhKcAOuqyA tyObject_PosStrSlice__GxA7P9aMdXov3EhKcAOuqyA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_CliOptKind__kIBT9augQMakND2eiI1Cimw;
typedef NU8 tyEnum_CliAddKind__NVYsQ5nfq2Z6XzXnNhiEtA;
typedef NU8 tyEnum_CliSpecialKind__BzkHiq3XUZc6C45UlqHr4A;
struct tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ {
NI globalPos;
NimStringDesc* rawStr;
tyEnum_CliOptKind__kIBT9augQMakND2eiI1Cimw kind;
NIM_BOOL shortDash;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* keyPath;
NimStringDesc* keySelect;
NimStringDesc* valStr;
tyEnum_CliAddKind__NVYsQ5nfq2Z6XzXnNhiEtA addKind;
tyEnum_CliOptKind__kIBT9augQMakND2eiI1Cimw optKind;
tyEnum_CliSpecialKind__BzkHiq3XUZc6C45UlqHr4A specialKind;
};
struct tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A {
tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ val;
NIM_BOOL has;
};
typedef struct {
N_NIMCALL_PTR(tySequence__hVt9cMdNeI853GPtkEoXHMQ*, ClP_0) (tyObject_PosStr__StbvKGxPg9bKvCvUKe9bHR0g* str, void* ClE_0);
void* ClE_0;
} tyProc__Xe50lZGjrrbCXoQUrQsMtA;
struct tyObject_PosStr__StbvKGxPg9bKvCvUKe9bHR0g {
NimStringDesc** baseStr;
NIM_BOOL isSlice;
union{
struct {tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* stream;
tySequence__E8pi9b5QNahsURYzXMjh3qw* ranges;
} _isSlice_1;
struct {NI sliceIdx;
tySequence__CDAVeSdtgeWcSw57mG9aBSw* slices;
tySequence__WBWk79aXt9bo1UN16tQ9bdbwg* fragmentedRanges;
} _isSlice_2;
};
NI pos;
NI line;
NI column;
NIM_BOOL bufferActive;
tySequence__WBWk79aXt9bo1UN16tQ9bdbwg* sliceBuffer;
};
struct tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg {
tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A explicitEof;
tySequence__hVt9cMdNeI853GPtkEoXHMQ* tokens;
tyProc__Xe50lZGjrrbCXoQUrQsMtA cb;
NI pos;
tyObject_PosStr__StbvKGxPg9bKvCvUKe9bHR0g str;
};
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA {
  Exception Sup;
};
struct tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ {
  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;
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
typedef N_CLOSURE_PTR(tySequence__hVt9cMdNeI853GPtkEoXHMQ*, TM__grLFGPEgfd0oHIJohpkf0g_7) (tyObject_PosStr__StbvKGxPg9bKvCvUKe9bHR0g* str);
typedef NimStringDesc* tyArray__17w6ns39bmjfAZ429aQpCFUA[9];
typedef N_CLOSURE_PTR(tySequence__hVt9cMdNeI853GPtkEoXHMQ*, TM__grLFGPEgfd0oHIJohpkf0g_19) (tyObject_PosStr__StbvKGxPg9bKvCvUKe9bHR0g* str);
typedef NU16 tySet_tyEnum_CliOptKind__kIBT9augQMakND2eiI1Cimw;
struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
struct tyObject_PosStrSlice__GxA7P9aMdXov3EhKcAOuqyA {
NI line;
NI column;
NI start;
NI finish;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__hVt9cMdNeI853GPtkEoXHMQ {
  TGenericSeq Sup;
  tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ data[SEQ_DECL_SIZE];
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__E8pi9b5QNahsURYzXMjh3qw {
  TGenericSeq Sup;
  tyTuple__47w2DboNEPf69aPgubZdd7Q data[SEQ_DECL_SIZE];
};
struct tySequence__CDAVeSdtgeWcSw57mG9aBSw {
  TGenericSeq Sup;
  tyObject_PosStrSlice__GxA7P9aMdXov3EhKcAOuqyA data[SEQ_DECL_SIZE];
};
struct tySequence__WBWk79aXt9bo1UN16tQ9bdbwg {
  TGenericSeq Sup;
  tySequence__CDAVeSdtgeWcSw57mG9aBSw* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNxt__Hz3N3ex1ulDNC3cvlBx3tw)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, NI offset);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, onEof__x59cnhTV9cZx9bcL83XSRl0Jw)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex);
static N_INLINE(NIM_BOOL, isSome__f0HtlQhMwEODO9boQYMc0gAoptions)(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A* self);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ*, get__2TwaujMu05N1ghiVlQZnowoptions)(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A* self);
static N_INLINE(NIM_BOOL, isNone__f0HtlQhMwEODO9boQYMc0gA_2options)(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A* self);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y);
static N_INLINE(NIM_BOOL, ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, fillNext__jH9cQHCnJTrPJCHgZ4R7rjg)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, NI chars);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nextToken__HnTn0TwBrTwEMy9c5wCHMTg)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, qmark___vVS0RA3J1WTFMFgxQiGNUQ)(tyObject_PosStr__StbvKGxPg9bKvCvUKe9bHR0g* str);
N_LIB_PRIVATE N_NIMCALL(void, add__U09ahedotOeVZZ2fCqWRWMw)(tySequence__hVt9cMdNeI853GPtkEoXHMQ** x, tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ* y, NI yLen_0);
static N_INLINE(tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ*, get__9cDuGOt1nQU3VbCX9a7W5IKgoptions)(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A* self);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
N_LIB_PRIVATE N_NIMCALL(void, genericAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(tyObject_GetterError__VgYDIf39bWD2m9c47M57Po9aw*, newGetterError__A9b4tehL1H0I9aUDuH9cbCSOw)(NimStringDesc** msg, NI msgLen_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, finished__vVS0RA3J1WTFMFgxQiGNUQ_2)(tyObject_PosStr__StbvKGxPg9bKvCvUKe9bHR0g* str);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5D___xNt009cXL2cA6UD6qCAJ9bjA)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, NI offset, tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ* Result);
N_LIB_PRIVATE N_NIMCALL(void, next__ki2BpE76RETJxPXWC1vLFA)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, NI step);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, finished__x59cnhTV9cZx9bcL83XSRl0Jw_2)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex);

/* section: NIM_merge_DATA */
extern TNimType NTI__hVt9cMdNeI853GPtkEoXHMQ_;
extern TNimType NTI__Wh5ttbeloG9bmWh5PzCK0Mw_;
extern TNimType NTI__bq5YFIFutDsA2ou9cpZuWAQ_;
STRING_LITERAL(TM__grLFGPEgfd0oHIJohpkf0g_3, "Can\'t obtain a value from a `none`", 34);
extern TNimType NTI__F0palnmXh3y4EXUc1OKXFQ_;
STRING_LITERAL(TM__grLFGPEgfd0oHIJohpkf0g_12, "Cannot get required token. `nextToken()` returned \'false\', but ", 63);
STRING_LITERAL(TM__grLFGPEgfd0oHIJohpkf0g_13, " tokens have to be filled. Current token buffer contains ", 57);
STRING_LITERAL(TM__grLFGPEgfd0oHIJohpkf0g_14, " tokens, current position is ", 29);
STRING_LITERAL(TM__grLFGPEgfd0oHIJohpkf0g_15, ". Input string is finished - ", 29);
STRING_LITERAL(TM__grLFGPEgfd0oHIJohpkf0g_16, ".", 1);

/* section: NIM_merge_VARS */
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(void, initLexer__9c4ROn86W9ccjU9cXdQtufYrw)(tySequence__hVt9cMdNeI853GPtkEoXHMQ* tokens, tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* Result) {
	(*Result).explicitEof.val.globalPos = 0;
	unsureAsgnRef((void**)&(*Result).explicitEof.val.rawStr, NIM_NIL);
	(*Result).explicitEof.val.kind = 0;
	(*Result).explicitEof.val.shortDash = 0;
	unsureAsgnRef((void**)&(*Result).explicitEof.val.keyPath, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).explicitEof.val.keySelect, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).explicitEof.val.valStr, NIM_NIL);
	(*Result).explicitEof.val.addKind = 0;
	(*Result).explicitEof.val.optKind = 0;
	(*Result).explicitEof.val.specialKind = 0;
	(*Result).explicitEof.has = 0;
	unsureAsgnRef((void**)&(*Result).tokens, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).cb.ClE_0, NIM_NIL);
	(*Result).cb.ClP_0 = NIM_NIL;
	(*Result).pos = 0;
	unsureAsgnRef((void**)&(*Result).str.baseStr, NIM_NIL);
	switch ((*Result).str.isSlice) {
	case NIM_FALSE:
	unsureAsgnRef((void**)&(*Result).str._isSlice_1.stream, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).str._isSlice_1.ranges, NIM_NIL);
	break;
	case NIM_TRUE:
	(*Result).str._isSlice_2.sliceIdx = 0;
	unsureAsgnRef((void**)&(*Result).str._isSlice_2.slices, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).str._isSlice_2.fragmentedRanges, NIM_NIL);
	break;
	} 
	(*Result).str.isSlice = 0;
	(*Result).str.pos = 0;
	(*Result).str.line = 0;
	(*Result).str.column = 0;
	(*Result).str.bufferActive = 0;
	unsureAsgnRef((void**)&(*Result).str.sliceBuffer, NIM_NIL);
	genericSeqAssign((&(*Result).tokens), tokens, (&NTI__hVt9cMdNeI853GPtkEoXHMQ_));
}
static N_INLINE(NIM_BOOL, isSome__f0HtlQhMwEODO9boQYMc0gAoptions)(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A* self) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (*self).has;
	return result;
}
static N_INLINE(NIM_BOOL, isNone__f0HtlQhMwEODO9boQYMc0gA_2options)(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A* self) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = !((*self).has);
	return result;
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
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
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
static N_INLINE(tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ*, get__2TwaujMu05N1ghiVlQZnowoptions)(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A* self) {
	tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ* result;
	result = (tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ*)0;
	{
		NIM_BOOL T3_;
		tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* T6_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = isNone__f0HtlQhMwEODO9boQYMc0gA_2options(self);
		if (!T3_) goto LA4_;
		T6_ = (tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*)0;
		T6_ = (tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*) newObj((&NTI__Wh5ttbeloG9bmWh5PzCK0Mw_), sizeof(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ));
		(*T6_).Sup.Sup.Sup.m_type = (&NTI__bq5YFIFutDsA2ou9cpZuWAQ_);
		(*T6_).Sup.Sup.name = "UnpackDefect";
		T7_ = (NimStringDesc*)0;
		T7_ = (*T6_).Sup.Sup.message; (*T6_).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM__grLFGPEgfd0oHIJohpkf0g_3));
		if (T7_) nimGCunrefNoCycle(T7_);
		asgnRef((void**) (&(*T6_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T6_, "UnpackDefect", "get", "options.nim", 185);
	}
	LA4_: ;
	result = (&(*self).val);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, onEof__x59cnhTV9cZx9bcL83XSRl0Jw)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	NI T3_;
	tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ* T6_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T3_ = ((*lex).tokens ? (*lex).tokens->Sup.len : 0);
	T2_ = ((*lex).pos < T3_);
	if (!(T2_)) goto LA4_;
	T2_ = isSome__f0HtlQhMwEODO9boQYMc0gAoptions((&(*lex).explicitEof));
	LA4_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA5_;
	if ((NU)((*lex).pos) >= (NU)((*lex).tokens ? (*lex).tokens->Sup.len : 0)){ raiseIndexError2((*lex).pos,((*lex).tokens ? (*lex).tokens->Sup.len : 0)-1); }
	T6_ = (tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ*)0;
	T6_ = get__2TwaujMu05N1ghiVlQZnowoptions((&(*lex).explicitEof));
	T1_ = ((*lex).tokens->data[(*lex).pos].kind == (*T6_).kind);
	LA5_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNxt__Hz3N3ex1ulDNC3cvlBx3tw)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, NI offset) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NI TM__grLFGPEgfd0oHIJohpkf0g_2;
	NI T2_;
	NIM_BOOL T4_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	if (nimAddInt((*lex).pos, offset, &TM__grLFGPEgfd0oHIJohpkf0g_2)) { raiseOverflow(); };
	T2_ = ((*lex).tokens ? (*lex).tokens->Sup.len : 0);
	T1_ = ((NI)(TM__grLFGPEgfd0oHIJohpkf0g_2) < T2_);
	if (!(T1_)) goto LA3_;
	T4_ = (NIM_BOOL)0;
	T4_ = onEof__x59cnhTV9cZx9bcL83XSRl0Jw(lex);
	T1_ = !(T4_);
	LA3_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nextToken__HnTn0TwBrTwEMy9c5wCHMTg)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex) {
	NIM_BOOL result;
	tySequence__hVt9cMdNeI853GPtkEoXHMQ* tok;
	NI T7_;
{	result = (NIM_BOOL)0;
	tok = (tySequence__hVt9cMdNeI853GPtkEoXHMQ*)0;
	{
		while (1) {
			NIM_BOOL T3_;
			NI T5_;
			tySequence__hVt9cMdNeI853GPtkEoXHMQ* T6_;
			T3_ = (NIM_BOOL)0;
			T3_ = qmark___vVS0RA3J1WTFMFgxQiGNUQ((&(*lex).str));
			if (!(T3_)) goto LA4_;
			T5_ = (tok ? tok->Sup.len : 0);
			T3_ = (T5_ == ((NI) 0));
			LA4_: ;
			if (!T3_) goto LA2;
			T6_ = (tySequence__hVt9cMdNeI853GPtkEoXHMQ*)0;
			T6_ = (*lex).cb.ClE_0? (*lex).cb.ClP_0((&(*lex).str), (*lex).cb.ClE_0):((TM__grLFGPEgfd0oHIJohpkf0g_7)((*lex).cb.ClP_0))((&(*lex).str));
			add__U09ahedotOeVZZ2fCqWRWMw((&(*lex).tokens), T6_->data, (T6_ ? T6_->Sup.len : 0));
		} LA2: ;
	}
	T7_ = (tok ? tok->Sup.len : 0);
	result = !((T7_ == ((NI) 0)));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ*, get__9cDuGOt1nQU3VbCX9a7W5IKgoptions)(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A* self) {
	tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ* result;
{	result = (tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ*)0;
	{
		NIM_BOOL T3_;
		tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* T6_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = isNone__f0HtlQhMwEODO9boQYMc0gA_2options((&(*self)));
		if (!T3_) goto LA4_;
		T6_ = (tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*)0;
		T6_ = (tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*) newObj((&NTI__Wh5ttbeloG9bmWh5PzCK0Mw_), sizeof(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ));
		(*T6_).Sup.Sup.Sup.m_type = (&NTI__bq5YFIFutDsA2ou9cpZuWAQ_);
		(*T6_).Sup.Sup.name = "UnpackDefect";
		T7_ = (NimStringDesc*)0;
		T7_ = (*T6_).Sup.Sup.message; (*T6_).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM__grLFGPEgfd0oHIJohpkf0g_3));
		if (T7_) nimGCunrefNoCycle(T7_);
		asgnRef((void**) (&(*T6_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T6_, "UnpackDefect", "get", "options.nim", 215);
	}
	LA4_: ;
	result = (&(*self).val);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(void, fillNext__jH9cQHCnJTrPJCHgZ4R7rjg)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, NI chars) {
	{
		while (1) {
			NI T3_;
			NI TM__grLFGPEgfd0oHIJohpkf0g_4;
			NI TM__grLFGPEgfd0oHIJohpkf0g_5;
			NI TM__grLFGPEgfd0oHIJohpkf0g_6;
			T3_ = ((*lex).tokens ? (*lex).tokens->Sup.len : 0);
			if (nimSubInt(T3_, (*lex).pos, &TM__grLFGPEgfd0oHIJohpkf0g_4)) { raiseOverflow(); };
			if (nimSubInt((NI)(TM__grLFGPEgfd0oHIJohpkf0g_4), ((NI) 1), &TM__grLFGPEgfd0oHIJohpkf0g_5)) { raiseOverflow(); };
			if (nimSubInt(chars, (NI)(TM__grLFGPEgfd0oHIJohpkf0g_5), &TM__grLFGPEgfd0oHIJohpkf0g_6)) { raiseOverflow(); };
			if (!(((NI) 0) < (NI)(TM__grLFGPEgfd0oHIJohpkf0g_6))) goto LA2;
			{
				NIM_BOOL T6_;
				NI need;
				NI T9_;
				NI TM__grLFGPEgfd0oHIJohpkf0g_8;
				NI TM__grLFGPEgfd0oHIJohpkf0g_9;
				NI TM__grLFGPEgfd0oHIJohpkf0g_10;
				T6_ = (NIM_BOOL)0;
				T6_ = nextToken__HnTn0TwBrTwEMy9c5wCHMTg(lex);
				if (!!(T6_)) goto LA7_;
				T9_ = ((*lex).tokens ? (*lex).tokens->Sup.len : 0);
				if (nimSubInt(T9_, (*lex).pos, &TM__grLFGPEgfd0oHIJohpkf0g_8)) { raiseOverflow(); };
				if (nimSubInt((NI)(TM__grLFGPEgfd0oHIJohpkf0g_8), ((NI) 1), &TM__grLFGPEgfd0oHIJohpkf0g_9)) { raiseOverflow(); };
				if (nimSubInt(chars, (NI)(TM__grLFGPEgfd0oHIJohpkf0g_9), &TM__grLFGPEgfd0oHIJohpkf0g_10)) { raiseOverflow(); };
				need = (NI)(TM__grLFGPEgfd0oHIJohpkf0g_10);
				{
					if (!(((NI) 0) < need)) goto LA12_;
					{
						NIM_BOOL T16_;
						T16_ = (NIM_BOOL)0;
						T16_ = isSome__f0HtlQhMwEODO9boQYMc0gAoptions((&(*lex).explicitEof));
						if (!T16_) goto LA17_;
						{
							NI _;
							NI i;
							_ = (NI)0;
							i = ((NI) 0);
							{
								while (1) {
									tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ* T22_;
									NI T23_;
									NI TM__grLFGPEgfd0oHIJohpkf0g_11;
									if (!(i < need)) goto LA21;
									_ = i;
									T22_ = (tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ*)0;
									T22_ = get__9cDuGOt1nQU3VbCX9a7W5IKgoptions((&(*lex).explicitEof));
									unsureAsgnRef((void**) (&(*lex).tokens), (tySequence__hVt9cMdNeI853GPtkEoXHMQ*) incrSeqV3((TGenericSeq*)((*lex).tokens), (&NTI__hVt9cMdNeI853GPtkEoXHMQ_)));
									T23_ = (*lex).tokens->Sup.len++;
									genericAssign((void*)(&(*lex).tokens->data[T23_]), (void*)(&(*T22_)), (&NTI__F0palnmXh3y4EXUc1OKXFQ_));
									if (nimAddInt(i, ((NI) 1), &TM__grLFGPEgfd0oHIJohpkf0g_11)) { raiseOverflow(); };
									i = (NI)(TM__grLFGPEgfd0oHIJohpkf0g_11);
								} LA21: ;
							}
						}
					}
					goto LA14_;
					LA17_: ;
					{
						tyArray__17w6ns39bmjfAZ429aQpCFUA T25_;
						NI T26_;
						NIM_BOOL T27_;
						tyObject_GetterError__VgYDIf39bWD2m9c47M57Po9aw* T28_;
						nimZeroMem((void*)T25_, sizeof(tyArray__17w6ns39bmjfAZ429aQpCFUA));
						T25_[0] = copyString(((NimStringDesc*) &TM__grLFGPEgfd0oHIJohpkf0g_12));
						T25_[1] = nimIntToStr(need);
						T25_[2] = copyString(((NimStringDesc*) &TM__grLFGPEgfd0oHIJohpkf0g_13));
						T26_ = ((*lex).tokens ? (*lex).tokens->Sup.len : 0);
						T25_[3] = nimIntToStr(T26_);
						T25_[4] = copyString(((NimStringDesc*) &TM__grLFGPEgfd0oHIJohpkf0g_14));
						T25_[5] = nimIntToStr((*lex).pos);
						T25_[6] = copyString(((NimStringDesc*) &TM__grLFGPEgfd0oHIJohpkf0g_15));
						T27_ = (NIM_BOOL)0;
						T27_ = finished__vVS0RA3J1WTFMFgxQiGNUQ_2((&(*lex).str));
						T25_[7] = nimBoolToStr(T27_);
						T25_[8] = copyString(((NimStringDesc*) &TM__grLFGPEgfd0oHIJohpkf0g_16));
						T28_ = (tyObject_GetterError__VgYDIf39bWD2m9c47M57Po9aw*)0;
						T28_ = newGetterError__A9b4tehL1H0I9aUDuH9cbCSOw(T25_, 9);
						raiseExceptionEx((Exception*)T28_, "GetterError", "fillNext", "hparse_base.nim", 573);
					}
					LA14_: ;
				}
				LA12_: ;
			}
			LA7_: ;
		} LA2: ;
	}
}
N_LIB_PRIVATE N_NIMCALL(void, X5BX5D___xNt009cXL2cA6UD6qCAJ9bjA)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, NI offset, tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ* Result) {
	NI TM__grLFGPEgfd0oHIJohpkf0g_17;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = hasNxt__Hz3N3ex1ulDNC3cvlBx3tw((&(*lex)), offset);
		if (!!(T3_)) goto LA4_;
		fillNext__jH9cQHCnJTrPJCHgZ4R7rjg(lex, offset);
	}
	LA4_: ;
	if (nimAddInt((*lex).pos, offset, &TM__grLFGPEgfd0oHIJohpkf0g_17)) { raiseOverflow(); };
	if ((NU)((NI)(TM__grLFGPEgfd0oHIJohpkf0g_17)) >= (NU)((*lex).tokens ? (*lex).tokens->Sup.len : 0)){ raiseIndexError2((NI)(TM__grLFGPEgfd0oHIJohpkf0g_17),((*lex).tokens ? (*lex).tokens->Sup.len : 0)-1); }
	genericAssign((void*)Result, (void*)(&(*lex).tokens->data[(NI)(TM__grLFGPEgfd0oHIJohpkf0g_17)]), (&NTI__F0palnmXh3y4EXUc1OKXFQ_));
}
N_LIB_PRIVATE N_NIMCALL(void, next__ki2BpE76RETJxPXWC1vLFA)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, NI step) {
	NI TM__grLFGPEgfd0oHIJohpkf0g_18;
	if (nimAddInt((*lex).pos, step, &TM__grLFGPEgfd0oHIJohpkf0g_18)) { raiseOverflow(); };
	(*lex).pos = (NI)(TM__grLFGPEgfd0oHIJohpkf0g_18);
}
N_LIB_PRIVATE N_NIMCALL(void, pop__F712O0R9adZ2PQ0k3SJ9ad7w)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ* Result) {
	X5BX5D___xNt009cXL2cA6UD6qCAJ9bjA(lex, ((NI) 0), Result);
	next__ki2BpE76RETJxPXWC1vLFA(lex, ((NI) 1));
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, finished__x59cnhTV9cZx9bcL83XSRl0Jw_2)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = hasNxt__Hz3N3ex1ulDNC3cvlBx3tw(lex, ((NI) 0));
	T1_ = !(T2_);
	if (!(T1_)) goto LA3_;
	T1_ = finished__vVS0RA3J1WTFMFgxQiGNUQ_2((&(*lex).str));
	LA3_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, qmark___HnTn0TwBrTwEMy9c5wCHMTg_2)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = onEof__x59cnhTV9cZx9bcL83XSRl0Jw((&(*lex)));
		if (!T3_) goto LA4_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = finished__x59cnhTV9cZx9bcL83XSRl0Jw_2((&(*lex)));
		if (!!(T7_)) goto LA8_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	goto LA1_;
	LA8_: ;
	{
		NIM_BOOL T11_;
		tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ* T18_;
		T11_ = (NIM_BOOL)0;
		T11_ = isSome__f0HtlQhMwEODO9boQYMc0gAoptions((&(*lex).explicitEof));
		if (!T11_) goto LA12_;
		{
			while (1) {
				NI T16_;
				tySequence__hVt9cMdNeI853GPtkEoXHMQ* T17_;
				T16_ = ((*lex).tokens ? (*lex).tokens->Sup.len : 0);
				if (!!(((*lex).pos < T16_))) goto LA15;
				T17_ = (tySequence__hVt9cMdNeI853GPtkEoXHMQ*)0;
				T17_ = (*lex).cb.ClE_0? (*lex).cb.ClP_0((&(*lex).str), (*lex).cb.ClE_0):((TM__grLFGPEgfd0oHIJohpkf0g_19)((*lex).cb.ClP_0))((&(*lex).str));
				add__U09ahedotOeVZZ2fCqWRWMw((&(*lex).tokens), T17_->data, (T17_ ? T17_->Sup.len : 0));
			} LA15: ;
		}
		if ((NU)((*lex).pos) >= (NU)((*lex).tokens ? (*lex).tokens->Sup.len : 0)){ raiseIndexError2((*lex).pos,((*lex).tokens ? (*lex).tokens->Sup.len : 0)-1); }
		T18_ = (tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ*)0;
		T18_ = get__9cDuGOt1nQU3VbCX9a7W5IKgoptions((&(*lex).explicitEof));
		result = !(((*lex).tokens->data[(*lex).pos].kind == (*T18_).kind));
	}
	goto LA1_;
	LA12_: ;
	{
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, X5BX5D___qY7z9c5kaHfn9c2XRat4hLFQ)(tyObject_HsLexer__b6lriYkxF9cBj9aHshmw9cfAg* lex, tySet_tyEnum_CliOptKind__kIBT9augQMakND2eiI1Cimw kind) {
	NIM_BOOL result;
	tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ T1_;
{	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&T1_), sizeof(tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ));
	X5BX5D___xNt009cXL2cA6UD6qCAJ9bjA(lex, ((NI) 0), (&T1_));
	result = ((kind &((NU16)1<<((NU)(T1_.kind)&15U)))!=0);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
