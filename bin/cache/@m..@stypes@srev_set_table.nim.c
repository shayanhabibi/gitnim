/* Generated by Nim Compiler v1.4.8 */
/*   (c) 2021 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN -pg -O3 -fno-strict-aliasing -fno-ident   -IC:\Users\PC\.choosenim\toolchains\nim-1.4.8\lib -IC:\Users\PC\AppData\Local\Temp\nimble_23592\githubcom_haxscramperhmisc_0.12.0\src\hmisc\scripts -o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\@m..@stypes@srev_set_table.nim.c.o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\@m..@stypes@srev_set_table.nim.c */
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
typedef struct tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg;
typedef struct tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w;
typedef struct tySequence__E8pi9b5QNahsURYzXMjh3qw tySequence__E8pi9b5QNahsURYzXMjh3qw;
typedef struct tyObject_Table__XODIALMnlA32xCMdLWSUwA tyObject_Table__XODIALMnlA32xCMdLWSUwA;
typedef struct tySequence__QqvaCqCpEE1QmQZbcZLi5A tySequence__QqvaCqCpEE1QmQZbcZLi5A;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
typedef struct tyTuple__EbsafWGli8bW2GRJQ9apsjA tyTuple__EbsafWGli8bW2GRJQ9apsjA;
typedef struct tySequence__qwqHTkRvwhrRyENtudHQ7g tySequence__qwqHTkRvwhrRyENtudHQ7g;

/* section: NIM_merge_TYPES */
struct tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w {
tySequence__E8pi9b5QNahsURYzXMjh3qw* data;
NI counter;
};
struct tyObject_Table__XODIALMnlA32xCMdLWSUwA {
tySequence__QqvaCqCpEE1QmQZbcZLi5A* data;
NI counter;
};
struct tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg {
NI maxId;
tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w keySets;
tyObject_Table__XODIALMnlA32xCMdLWSUwA revKeys;
tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w valueTable;
tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w revValue;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
struct tyTuple__EbsafWGli8bW2GRJQ9apsjA {
NI Field0;
NI Field1;
tySequence__qwqHTkRvwhrRyENtudHQ7g* Field2;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__E8pi9b5QNahsURYzXMjh3qw {
  TGenericSeq Sup;
  tyTuple__47w2DboNEPf69aPgubZdd7Q data[SEQ_DECL_SIZE];
};
struct tySequence__qwqHTkRvwhrRyENtudHQ7g {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct tySequence__QqvaCqCpEE1QmQZbcZLi5A {
  TGenericSeq Sup;
  tyTuple__EbsafWGli8bW2GRJQ9apsjA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__Mui01np9cMwKoj9aZBtgnNKg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI__Ea0e9azliYta9cYyn0d49ah0w_;
extern TNimType NTI__XODIALMnlA32xCMdLWSUwA_;
N_LIB_PRIVATE N_NIMCALL(void, hmisc_rev_set_tableDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__zr19aJJpj9bwKQdPnTGCYfLw_2_5[5];
static TNimNode TM__zr19aJJpj9bwKQdPnTGCYfLw_0[6];

/* section: NIM_merge_TYPE_INIT3 */
NTI__Mui01np9cMwKoj9aZBtgnNKg_.size = sizeof(tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg);
NTI__Mui01np9cMwKoj9aZBtgnNKg_.align = NIM_ALIGNOF(tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg);
NTI__Mui01np9cMwKoj9aZBtgnNKg_.kind = 18;
NTI__Mui01np9cMwKoj9aZBtgnNKg_.base = 0;
TM__zr19aJJpj9bwKQdPnTGCYfLw_2_5[0] = &TM__zr19aJJpj9bwKQdPnTGCYfLw_0[1];
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[1].kind = 1;
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[1].offset = offsetof(tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg, maxId);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[1].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[1].name = "maxId";
TM__zr19aJJpj9bwKQdPnTGCYfLw_2_5[1] = &TM__zr19aJJpj9bwKQdPnTGCYfLw_0[2];
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[2].kind = 1;
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[2].offset = offsetof(tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg, keySets);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[2].typ = (&NTI__Ea0e9azliYta9cYyn0d49ah0w_);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[2].name = "keySets";
TM__zr19aJJpj9bwKQdPnTGCYfLw_2_5[2] = &TM__zr19aJJpj9bwKQdPnTGCYfLw_0[3];
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[3].kind = 1;
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[3].offset = offsetof(tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg, revKeys);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[3].typ = (&NTI__XODIALMnlA32xCMdLWSUwA_);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[3].name = "revKeys";
TM__zr19aJJpj9bwKQdPnTGCYfLw_2_5[3] = &TM__zr19aJJpj9bwKQdPnTGCYfLw_0[4];
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[4].kind = 1;
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[4].offset = offsetof(tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg, valueTable);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[4].typ = (&NTI__Ea0e9azliYta9cYyn0d49ah0w_);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[4].name = "valueTable";
TM__zr19aJJpj9bwKQdPnTGCYfLw_2_5[4] = &TM__zr19aJJpj9bwKQdPnTGCYfLw_0[5];
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[5].kind = 1;
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[5].offset = offsetof(tyObject_RevSetTable__Mui01np9cMwKoj9aZBtgnNKg, revValue);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[5].typ = (&NTI__Ea0e9azliYta9cYyn0d49ah0w_);
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[5].name = "revValue";
TM__zr19aJJpj9bwKQdPnTGCYfLw_0[0].len = 5; TM__zr19aJJpj9bwKQdPnTGCYfLw_0[0].kind = 2; TM__zr19aJJpj9bwKQdPnTGCYfLw_0[0].sons = &TM__zr19aJJpj9bwKQdPnTGCYfLw_2_5[0];
NTI__Mui01np9cMwKoj9aZBtgnNKg_.node = &TM__zr19aJJpj9bwKQdPnTGCYfLw_0[0];
}

