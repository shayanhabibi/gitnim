/* Generated by Nim Compiler v1.4.8 */
/*   (c) 2021 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN -pg -O3 -fno-strict-aliasing -fno-ident   -IC:\Users\PC\.choosenim\toolchains\nim-1.4.8\lib -IC:\Users\PC\AppData\Local\Temp\nimble_23592\githubcom_haxscramperhmisc_0.12.0\src\hmisc\scripts -o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\stdlib_exitprocs.nim.c.o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\stdlib_exitprocs.nim.c */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <windows.h>
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
typedef struct tySequence__jPly7LEWA9bR7s5RNk1UriQ tySequence__jPly7LEWA9bR7s5RNk1UriQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Fun__8SmujJ2dv64FQZRj9avIvVw tyObject_Fun__8SmujJ2dv64FQZRj9avIvVw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A tyTuple__JfHvHzMrhKkWAUvQKe0i1A;
typedef struct tyObject_Env_exitprocsdotnim_Fun___diB2NTuAIWY0FO9c5IUJRGg tyObject_Env_exitprocsdotnim_Fun___diB2NTuAIWY0FO9c5IUJRGg;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NU8 tyEnum_FunKind__ThaC3LIrCpK9cJoqLuqYlBA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
typedef N_NOCONV_PTR(void, tyProc__vhjNbzH0Mvv2fTvoe1717Q) (void);
struct tyObject_Fun__8SmujJ2dv64FQZRj9avIvVw {
tyEnum_FunKind__ThaC3LIrCpK9cJoqLuqYlBA kind;
union{
tyProc__HzVCwACFYM9cx9aV62PdjtuA fun1;
tyProc__vhjNbzH0Mvv2fTvoe1717Q fun2;
};
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
struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A {
void* Field0;
tyObject_Env_exitprocsdotnim_Fun___diB2NTuAIWY0FO9c5IUJRGg* Field1;
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
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__jPly7LEWA9bR7s5RNk1UriQ {
  TGenericSeq Sup;
  tyObject_Fun__8SmujJ2dv64FQZRj9avIvVw data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__jPly7LEWA9bR7s5RNk1UriQ)(void* p, NI op);
static N_NIMCALL(void, TM__JXL39bfraktrl3ZkJ5EQGjw_6)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_INLINE(void, initLock__fSZuw88O4GKTNx4Mza9bPbglocks)(CRITICAL_SECTION* lock);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__8SmujJ2dv64FQZRj9avIvVw_;
N_LIB_PRIVATE TNimType NTI__ThaC3LIrCpK9cJoqLuqYlBA_;
TNimNode* NimDT___8SmujJ2dv64FQZRj9avIvVw_kind[3];
N_LIB_PRIVATE TNimType NTI__HzVCwACFYM9cx9aV62PdjtuA_;
extern TNimType NTI__vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI__HsJiUUcO9cHBdUCi0HwkSTA_;
N_LIB_PRIVATE TNimType NTI__vhjNbzH0Mvv2fTvoe1717Q_;
N_LIB_PRIVATE TNimType NTI__jPly7LEWA9bR7s5RNk1UriQ_;

/* section: NIM_merge_VARS */
N_LIB_PRIVATE CRITICAL_SECTION gFunsLock__9c2MnmiDL9czrX3Mf2x9b3rXw;
N_LIB_PRIVATE tySequence__jPly7LEWA9bR7s5RNk1UriQ* gFuns__DSBVWYw8VQEi4KD9aF88r4w;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tySequence__jPly7LEWA9bR7s5RNk1UriQ)(void* p, NI op) {
	tySequence__jPly7LEWA9bR7s5RNk1UriQ* a;
	NI T1_;
	a = (tySequence__jPly7LEWA9bR7s5RNk1UriQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	switch (a->data[T1_].kind) {
	case ((tyEnum_FunKind__ThaC3LIrCpK9cJoqLuqYlBA) 0):
	nimGCvisit((void*)a->data[T1_].fun1.ClE_0, op);
	break;
	case ((tyEnum_FunKind__ThaC3LIrCpK9cJoqLuqYlBA) 1):
	break;
	} 
	}
}
static N_NIMCALL(void, TM__JXL39bfraktrl3ZkJ5EQGjw_6)(void) {
	nimGCvisit((void*)gFuns__DSBVWYw8VQEi4KD9aF88r4w, 0);
}
static N_INLINE(void, initLock__fSZuw88O4GKTNx4Mza9bPbglocks)(CRITICAL_SECTION* lock) {
	InitializeCriticalSection(lock);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_exitprocsInit000)(void) {
{
	TFrame FR_; FR_.len = 0;

	nimRegisterGlobalMarker(TM__JXL39bfraktrl3ZkJ5EQGjw_6);

}/* preInitProc end */
{
	initLock__fSZuw88O4GKTNx4Mza9bPbglocks((&gFunsLock__9c2MnmiDL9czrX3Mf2x9b3rXw));
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_exitprocsDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__JXL39bfraktrl3ZkJ5EQGjw_2_2[2];
NI TM__JXL39bfraktrl3ZkJ5EQGjw_4;
static char* NIM_CONST TM__JXL39bfraktrl3ZkJ5EQGjw_3[2] = {
"kClosure", 
"kNoconv"};
static TNimNode* TM__JXL39bfraktrl3ZkJ5EQGjw_5_2[2];
static TNimNode TM__JXL39bfraktrl3ZkJ5EQGjw_0[9];

/* section: NIM_merge_TYPE_INIT3 */
NTI__8SmujJ2dv64FQZRj9avIvVw_.size = sizeof(tyObject_Fun__8SmujJ2dv64FQZRj9avIvVw);
NTI__8SmujJ2dv64FQZRj9avIvVw_.align = NIM_ALIGNOF(tyObject_Fun__8SmujJ2dv64FQZRj9avIvVw);
NTI__8SmujJ2dv64FQZRj9avIvVw_.kind = 18;
NTI__8SmujJ2dv64FQZRj9avIvVw_.base = 0;
NTI__ThaC3LIrCpK9cJoqLuqYlBA_.size = sizeof(tyEnum_FunKind__ThaC3LIrCpK9cJoqLuqYlBA);
NTI__ThaC3LIrCpK9cJoqLuqYlBA_.align = NIM_ALIGNOF(tyEnum_FunKind__ThaC3LIrCpK9cJoqLuqYlBA);
NTI__ThaC3LIrCpK9cJoqLuqYlBA_.kind = 14;
NTI__ThaC3LIrCpK9cJoqLuqYlBA_.base = 0;
NTI__ThaC3LIrCpK9cJoqLuqYlBA_.flags = 3;
for (TM__JXL39bfraktrl3ZkJ5EQGjw_4 = 0; TM__JXL39bfraktrl3ZkJ5EQGjw_4 < 2; TM__JXL39bfraktrl3ZkJ5EQGjw_4++) {
TM__JXL39bfraktrl3ZkJ5EQGjw_0[TM__JXL39bfraktrl3ZkJ5EQGjw_4+1].kind = 1;
TM__JXL39bfraktrl3ZkJ5EQGjw_0[TM__JXL39bfraktrl3ZkJ5EQGjw_4+1].offset = TM__JXL39bfraktrl3ZkJ5EQGjw_4;
TM__JXL39bfraktrl3ZkJ5EQGjw_0[TM__JXL39bfraktrl3ZkJ5EQGjw_4+1].name = TM__JXL39bfraktrl3ZkJ5EQGjw_3[TM__JXL39bfraktrl3ZkJ5EQGjw_4];
TM__JXL39bfraktrl3ZkJ5EQGjw_2_2[TM__JXL39bfraktrl3ZkJ5EQGjw_4] = &TM__JXL39bfraktrl3ZkJ5EQGjw_0[TM__JXL39bfraktrl3ZkJ5EQGjw_4+1];
}
TM__JXL39bfraktrl3ZkJ5EQGjw_0[3].len = 2; TM__JXL39bfraktrl3ZkJ5EQGjw_0[3].kind = 2; TM__JXL39bfraktrl3ZkJ5EQGjw_0[3].sons = &TM__JXL39bfraktrl3ZkJ5EQGjw_2_2[0];
NTI__ThaC3LIrCpK9cJoqLuqYlBA_.node = &TM__JXL39bfraktrl3ZkJ5EQGjw_0[3];
TM__JXL39bfraktrl3ZkJ5EQGjw_0[0].kind = 3;
TM__JXL39bfraktrl3ZkJ5EQGjw_0[0].offset = offsetof(tyObject_Fun__8SmujJ2dv64FQZRj9avIvVw, kind);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[0].typ = (&NTI__ThaC3LIrCpK9cJoqLuqYlBA_);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[0].name = "kind";
TM__JXL39bfraktrl3ZkJ5EQGjw_0[0].sons = &NimDT___8SmujJ2dv64FQZRj9avIvVw_kind[0];
TM__JXL39bfraktrl3ZkJ5EQGjw_0[0].len = 2;
NTI__HzVCwACFYM9cx9aV62PdjtuA_.size = sizeof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__HzVCwACFYM9cx9aV62PdjtuA_.align = NIM_ALIGNOF(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__HzVCwACFYM9cx9aV62PdjtuA_.kind = 18;
NTI__HzVCwACFYM9cx9aV62PdjtuA_.base = 0;
TM__JXL39bfraktrl3ZkJ5EQGjw_5_2[0] = &TM__JXL39bfraktrl3ZkJ5EQGjw_0[6];
TM__JXL39bfraktrl3ZkJ5EQGjw_0[6].kind = 1;
TM__JXL39bfraktrl3ZkJ5EQGjw_0[6].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field0);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[6].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[6].name = "Field0";
TM__JXL39bfraktrl3ZkJ5EQGjw_5_2[1] = &TM__JXL39bfraktrl3ZkJ5EQGjw_0[7];
TM__JXL39bfraktrl3ZkJ5EQGjw_0[7].kind = 1;
TM__JXL39bfraktrl3ZkJ5EQGjw_0[7].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field1);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[7].typ = (&NTI__HsJiUUcO9cHBdUCi0HwkSTA_);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[7].name = "Field1";
TM__JXL39bfraktrl3ZkJ5EQGjw_0[5].len = 2; TM__JXL39bfraktrl3ZkJ5EQGjw_0[5].kind = 2; TM__JXL39bfraktrl3ZkJ5EQGjw_0[5].sons = &TM__JXL39bfraktrl3ZkJ5EQGjw_5_2[0];
NTI__HzVCwACFYM9cx9aV62PdjtuA_.node = &TM__JXL39bfraktrl3ZkJ5EQGjw_0[5];
TM__JXL39bfraktrl3ZkJ5EQGjw_0[4].kind = 1;
TM__JXL39bfraktrl3ZkJ5EQGjw_0[4].offset = offsetof(tyObject_Fun__8SmujJ2dv64FQZRj9avIvVw, fun1);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[4].typ = (&NTI__HzVCwACFYM9cx9aV62PdjtuA_);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[4].name = "fun1";
NimDT___8SmujJ2dv64FQZRj9avIvVw_kind[0] = &TM__JXL39bfraktrl3ZkJ5EQGjw_0[4];
NTI__vhjNbzH0Mvv2fTvoe1717Q_.size = sizeof(tyProc__vhjNbzH0Mvv2fTvoe1717Q);
NTI__vhjNbzH0Mvv2fTvoe1717Q_.align = NIM_ALIGNOF(tyProc__vhjNbzH0Mvv2fTvoe1717Q);
NTI__vhjNbzH0Mvv2fTvoe1717Q_.kind = 25;
NTI__vhjNbzH0Mvv2fTvoe1717Q_.base = 0;
NTI__vhjNbzH0Mvv2fTvoe1717Q_.flags = 3;
TM__JXL39bfraktrl3ZkJ5EQGjw_0[8].kind = 1;
TM__JXL39bfraktrl3ZkJ5EQGjw_0[8].offset = offsetof(tyObject_Fun__8SmujJ2dv64FQZRj9avIvVw, fun2);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[8].typ = (&NTI__vhjNbzH0Mvv2fTvoe1717Q_);
TM__JXL39bfraktrl3ZkJ5EQGjw_0[8].name = "fun2";
NimDT___8SmujJ2dv64FQZRj9avIvVw_kind[1] = &TM__JXL39bfraktrl3ZkJ5EQGjw_0[8];
NTI__8SmujJ2dv64FQZRj9avIvVw_.node = &TM__JXL39bfraktrl3ZkJ5EQGjw_0[0];
NTI__jPly7LEWA9bR7s5RNk1UriQ_.size = sizeof(tySequence__jPly7LEWA9bR7s5RNk1UriQ*);
NTI__jPly7LEWA9bR7s5RNk1UriQ_.align = NIM_ALIGNOF(tySequence__jPly7LEWA9bR7s5RNk1UriQ*);
NTI__jPly7LEWA9bR7s5RNk1UriQ_.kind = 24;
NTI__jPly7LEWA9bR7s5RNk1UriQ_.base = (&NTI__8SmujJ2dv64FQZRj9avIvVw_);
NTI__jPly7LEWA9bR7s5RNk1UriQ_.marker = Marker_tySequence__jPly7LEWA9bR7s5RNk1UriQ;
}

