/* Generated by Nim Compiler v1.4.8 */
/*   (c) 2021 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN -pg -O3 -fno-strict-aliasing -fno-ident   -IC:\Users\PC\.choosenim\toolchains\nim-1.4.8\lib -IC:\Users\PC\AppData\Local\Temp\nimble_23592\githubcom_haxscramperhmisc_0.12.0\src\hmisc\scripts -o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\stdlib_options.nim.c.o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\stdlib_options.nim.c */
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
typedef struct tyObject_Option__nLNl7jzoNoscskPWNH3qSg tyObject_Option__nLNl7jzoNoscskPWNH3qSg;
typedef struct tyObject_CliDefaultcolonObjectType___vNfB3VkbZI1sx7UIi66WKw tyObject_CliDefaultcolonObjectType___vNfB3VkbZI1sx7UIi66WKw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Option__R9aedZJmfar32ID8l5LTDvA tyObject_Option__R9aedZJmfar32ID8l5LTDvA;
typedef struct tyObject_CliValuecolonObjectType___XcTNNZQabg5ioyWMvtWrNQ tyObject_CliValuecolonObjectType___XcTNNZQabg5ioyWMvtWrNQ;
typedef struct tyObject_Option__RRqRrbn3HreIAqmkuwlL6Q tyObject_Option__RRqRrbn3HreIAqmkuwlL6Q;
typedef struct tyObject_FileInfo__i26mN9byzlhWT5HGlFoyCYQ tyObject_FileInfo__i26mN9byzlhWT5HGlFoyCYQ;
typedef struct tyTuple__7YXeFjI1wf4Qj7OuTKzrkQ tyTuple__7YXeFjI1wf4Qj7OuTKzrkQ;
typedef struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q;
typedef struct tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A;
typedef struct tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ tyObject_CliOpt__F0palnmXh3y4EXUc1OKXFQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_Option__AsG2n59c9chd9b5ILczdr5Nlg tyObject_Option__AsG2n59c9chd9b5ILczdr5Nlg;
typedef struct tyObject_CliCheckcolonObjectType___Sr8279cB9aEG5Ebskb9aTwHqg tyObject_CliCheckcolonObjectType___Sr8279cB9aEG5Ebskb9aTwHqg;
typedef struct tyObject_Option__vK1KzfYf1DGLiUIpLm9cS0A tyObject_Option__vK1KzfYf1DGLiUIpLm9cS0A;
typedef struct tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ;
typedef struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Option__Ygkgfd9bIhXevHX9cMK2qUEg tyObject_Option__Ygkgfd9bIhXevHX9cMK2qUEg;
typedef struct tyObject_LytSolutioncolonObjectType___wr2KZsZKIyEyTtn9ae6seNA tyObject_LytSolutioncolonObjectType___wr2KZsZKIyEyTtn9ae6seNA;
typedef struct tyObject_Option__XidiD9a0LLwqmCRYLAO11Mw tyObject_Option__XidiD9a0LLwqmCRYLAO11Mw;
typedef struct tyObject_HLoggercolonObjectType___MHlSKJi2uNRS6kVql9bOnUg tyObject_HLoggercolonObjectType___MHlSKJi2uNRS6kVql9bOnUg;
typedef struct tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct tyObject_Option__nLNl7jzoNoscskPWNH3qSg {
tyObject_CliDefaultcolonObjectType___vNfB3VkbZI1sx7UIi66WKw* val;
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
struct tyObject_Option__R9aedZJmfar32ID8l5LTDvA {
tyObject_CliValuecolonObjectType___XcTNNZQabg5ioyWMvtWrNQ* val;
NIM_BOOL has;
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
struct tyTuple__7YXeFjI1wf4Qj7OuTKzrkQ {
NI32 Field0;
NI64 Field1;
};
typedef NU8 tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg;
typedef NU16 tySet_tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA;
struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q {
NI64 seconds;
NI nanosecond;
};
struct tyObject_FileInfo__i26mN9byzlhWT5HGlFoyCYQ {
tyTuple__7YXeFjI1wf4Qj7OuTKzrkQ id;
tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg kind;
NI64 size;
tySet_tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA permissions;
NI64 linkCount;
tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q lastAccessTime;
tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q lastWriteTime;
tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q creationTime;
};
struct tyObject_Option__RRqRrbn3HreIAqmkuwlL6Q {
tyObject_FileInfo__i26mN9byzlhWT5HGlFoyCYQ val;
NIM_BOOL has;
};
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
struct tyObject_Option__AsG2n59c9chd9b5ILczdr5Nlg {
tyObject_CliCheckcolonObjectType___Sr8279cB9aEG5Ebskb9aTwHqg* val;
};
struct tyObject_Option__vK1KzfYf1DGLiUIpLm9cS0A {
NimStringDesc* val;
NIM_BOOL has;
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
struct tyObject_Option__Ygkgfd9bIhXevHX9cMK2qUEg {
tyObject_LytSolutioncolonObjectType___wr2KZsZKIyEyTtn9ae6seNA* val;
};
struct tyObject_Option__XidiD9a0LLwqmCRYLAO11Mw {
tyObject_HLoggercolonObjectType___MHlSKJi2uNRS6kVql9bOnUg* val;
};
struct tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A {
NIM_BOOL val;
NIM_BOOL has;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__Wh5ttbeloG9bmWh5PzCK0Mw)(void* p, NI op);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__nLNl7jzoNoscskPWNH3qSg_;
N_LIB_PRIVATE TNimType NTI__R9aedZJmfar32ID8l5LTDvA_;
extern TNimType NTI__clbD4b0cvZ8PxFvHwPkHCg_;
extern TNimType NTI__VaVACK0bpYmqIQ0mKcHfQQ_;
N_LIB_PRIVATE TNimType NTI__RRqRrbn3HreIAqmkuwlL6Q_;
extern TNimType NTI__i26mN9byzlhWT5HGlFoyCYQ_;
extern TNimType NTI__GXYdn47v5HsF2bPmRDetKQ_;
N_LIB_PRIVATE TNimType NTI__9bukDbsLXDbXFIz3rMqBz7A_;
extern TNimType NTI__F0palnmXh3y4EXUc1OKXFQ_;
N_LIB_PRIVATE TNimType NTI__AsG2n59c9chd9b5ILczdr5Nlg_;
extern TNimType NTI__9aydXrbzkthQuBL0g9aTnSxw_;
N_LIB_PRIVATE TNimType NTI__vK1KzfYf1DGLiUIpLm9cS0A_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI__LbeSGvgPzGzXnW9caIkJqMA_;
N_LIB_PRIVATE TNimType NTI__bq5YFIFutDsA2ou9cpZuWAQ_;
N_LIB_PRIVATE TNimType NTI__Wh5ttbeloG9bmWh5PzCK0Mw_;
N_LIB_PRIVATE TNimType NTI__Ygkgfd9bIhXevHX9cMK2qUEg_;
extern TNimType NTI__Pp9bccfw9cFBDfaBE9cn7k0wA_;
N_LIB_PRIVATE TNimType NTI__XidiD9a0LLwqmCRYLAO11Mw_;
extern TNimType NTI__1YroH7xWT9bi2MAfYpKEp5w_;
N_LIB_PRIVATE TNimType NTI__mNQrG9by9bIvS2rBRypY8a8A_;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tyRef__Wh5ttbeloG9bmWh5PzCK0Mw)(void* p, NI op) {
	tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* a;
	a = (tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*)p;
	nimGCvisit((void*)(*a).Sup.Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.Sup.message, op);
	nimGCvisit((void*)(*a).Sup.Sup.trace, op);
	nimGCvisit((void*)(*a).Sup.Sup.up, op);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_optionsDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__4DNs4bMUkswhWc4o4dM9bbg_2_2[2];
static TNimNode* TM__4DNs4bMUkswhWc4o4dM9bbg_3_2[2];
static TNimNode* TM__4DNs4bMUkswhWc4o4dM9bbg_4_2[2];
static TNimNode* TM__4DNs4bMUkswhWc4o4dM9bbg_5_2[2];
static TNimNode* TM__4DNs4bMUkswhWc4o4dM9bbg_6_2[2];
static TNimNode TM__4DNs4bMUkswhWc4o4dM9bbg_0[20];

/* section: NIM_merge_TYPE_INIT3 */
NTI__nLNl7jzoNoscskPWNH3qSg_.size = sizeof(tyObject_Option__nLNl7jzoNoscskPWNH3qSg);
NTI__nLNl7jzoNoscskPWNH3qSg_.align = NIM_ALIGNOF(tyObject_Option__nLNl7jzoNoscskPWNH3qSg);
NTI__nLNl7jzoNoscskPWNH3qSg_.kind = 18;
NTI__nLNl7jzoNoscskPWNH3qSg_.base = 0;
NTI__R9aedZJmfar32ID8l5LTDvA_.size = sizeof(tyObject_Option__R9aedZJmfar32ID8l5LTDvA);
NTI__R9aedZJmfar32ID8l5LTDvA_.align = NIM_ALIGNOF(tyObject_Option__R9aedZJmfar32ID8l5LTDvA);
NTI__R9aedZJmfar32ID8l5LTDvA_.kind = 18;
NTI__R9aedZJmfar32ID8l5LTDvA_.base = 0;
TM__4DNs4bMUkswhWc4o4dM9bbg_2_2[0] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[2];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[2].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[2].offset = offsetof(tyObject_Option__R9aedZJmfar32ID8l5LTDvA, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[2].typ = (&NTI__clbD4b0cvZ8PxFvHwPkHCg_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[2].name = "val";
TM__4DNs4bMUkswhWc4o4dM9bbg_2_2[1] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[3];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[3].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[3].offset = offsetof(tyObject_Option__R9aedZJmfar32ID8l5LTDvA, has);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[3].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[3].name = "has";
TM__4DNs4bMUkswhWc4o4dM9bbg_0[1].len = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[1].kind = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[1].sons = &TM__4DNs4bMUkswhWc4o4dM9bbg_2_2[0];
NTI__R9aedZJmfar32ID8l5LTDvA_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[1];
NTI__RRqRrbn3HreIAqmkuwlL6Q_.size = sizeof(tyObject_Option__RRqRrbn3HreIAqmkuwlL6Q);
NTI__RRqRrbn3HreIAqmkuwlL6Q_.align = NIM_ALIGNOF(tyObject_Option__RRqRrbn3HreIAqmkuwlL6Q);
NTI__RRqRrbn3HreIAqmkuwlL6Q_.kind = 18;
NTI__RRqRrbn3HreIAqmkuwlL6Q_.base = 0;
NTI__RRqRrbn3HreIAqmkuwlL6Q_.flags = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_3_2[0] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[5];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[5].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[5].offset = offsetof(tyObject_Option__RRqRrbn3HreIAqmkuwlL6Q, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[5].typ = (&NTI__i26mN9byzlhWT5HGlFoyCYQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[5].name = "val";
TM__4DNs4bMUkswhWc4o4dM9bbg_3_2[1] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[6];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[6].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[6].offset = offsetof(tyObject_Option__RRqRrbn3HreIAqmkuwlL6Q, has);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[6].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[6].name = "has";
TM__4DNs4bMUkswhWc4o4dM9bbg_0[4].len = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[4].kind = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[4].sons = &TM__4DNs4bMUkswhWc4o4dM9bbg_3_2[0];
NTI__RRqRrbn3HreIAqmkuwlL6Q_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[4];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[0].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[0].offset = offsetof(tyObject_Option__nLNl7jzoNoscskPWNH3qSg, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[0].typ = (&NTI__GXYdn47v5HsF2bPmRDetKQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[0].name = "val";
NTI__nLNl7jzoNoscskPWNH3qSg_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[0];
NTI__9bukDbsLXDbXFIz3rMqBz7A_.size = sizeof(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A);
NTI__9bukDbsLXDbXFIz3rMqBz7A_.align = NIM_ALIGNOF(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A);
NTI__9bukDbsLXDbXFIz3rMqBz7A_.kind = 18;
NTI__9bukDbsLXDbXFIz3rMqBz7A_.base = 0;
TM__4DNs4bMUkswhWc4o4dM9bbg_4_2[0] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[8];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[8].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[8].offset = offsetof(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[8].typ = (&NTI__F0palnmXh3y4EXUc1OKXFQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[8].name = "val";
TM__4DNs4bMUkswhWc4o4dM9bbg_4_2[1] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[9];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[9].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[9].offset = offsetof(tyObject_Option__9bukDbsLXDbXFIz3rMqBz7A, has);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[9].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[9].name = "has";
TM__4DNs4bMUkswhWc4o4dM9bbg_0[7].len = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[7].kind = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[7].sons = &TM__4DNs4bMUkswhWc4o4dM9bbg_4_2[0];
NTI__9bukDbsLXDbXFIz3rMqBz7A_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[7];
NTI__AsG2n59c9chd9b5ILczdr5Nlg_.size = sizeof(tyObject_Option__AsG2n59c9chd9b5ILczdr5Nlg);
NTI__AsG2n59c9chd9b5ILczdr5Nlg_.align = NIM_ALIGNOF(tyObject_Option__AsG2n59c9chd9b5ILczdr5Nlg);
NTI__AsG2n59c9chd9b5ILczdr5Nlg_.kind = 18;
NTI__AsG2n59c9chd9b5ILczdr5Nlg_.base = 0;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[10].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[10].offset = offsetof(tyObject_Option__AsG2n59c9chd9b5ILczdr5Nlg, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[10].typ = (&NTI__9aydXrbzkthQuBL0g9aTnSxw_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[10].name = "val";
NTI__AsG2n59c9chd9b5ILczdr5Nlg_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[10];
NTI__vK1KzfYf1DGLiUIpLm9cS0A_.size = sizeof(tyObject_Option__vK1KzfYf1DGLiUIpLm9cS0A);
NTI__vK1KzfYf1DGLiUIpLm9cS0A_.align = NIM_ALIGNOF(tyObject_Option__vK1KzfYf1DGLiUIpLm9cS0A);
NTI__vK1KzfYf1DGLiUIpLm9cS0A_.kind = 18;
NTI__vK1KzfYf1DGLiUIpLm9cS0A_.base = 0;
TM__4DNs4bMUkswhWc4o4dM9bbg_5_2[0] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[12];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[12].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[12].offset = offsetof(tyObject_Option__vK1KzfYf1DGLiUIpLm9cS0A, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[12].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[12].name = "val";
TM__4DNs4bMUkswhWc4o4dM9bbg_5_2[1] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[13];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[13].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[13].offset = offsetof(tyObject_Option__vK1KzfYf1DGLiUIpLm9cS0A, has);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[13].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[13].name = "has";
TM__4DNs4bMUkswhWc4o4dM9bbg_0[11].len = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[11].kind = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[11].sons = &TM__4DNs4bMUkswhWc4o4dM9bbg_5_2[0];
NTI__vK1KzfYf1DGLiUIpLm9cS0A_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[11];
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.size = sizeof(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ);
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.align = NIM_ALIGNOF(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ);
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.kind = 17;
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.base = (&NTI__LbeSGvgPzGzXnW9caIkJqMA_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[14].len = 0; TM__4DNs4bMUkswhWc4o4dM9bbg_0[14].kind = 2;
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[14];
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.size = sizeof(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*);
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.align = NIM_ALIGNOF(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*);
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.kind = 22;
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.base = (&NTI__bq5YFIFutDsA2ou9cpZuWAQ_);
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.marker = Marker_tyRef__Wh5ttbeloG9bmWh5PzCK0Mw;
NTI__Ygkgfd9bIhXevHX9cMK2qUEg_.size = sizeof(tyObject_Option__Ygkgfd9bIhXevHX9cMK2qUEg);
NTI__Ygkgfd9bIhXevHX9cMK2qUEg_.align = NIM_ALIGNOF(tyObject_Option__Ygkgfd9bIhXevHX9cMK2qUEg);
NTI__Ygkgfd9bIhXevHX9cMK2qUEg_.kind = 18;
NTI__Ygkgfd9bIhXevHX9cMK2qUEg_.base = 0;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[15].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[15].offset = offsetof(tyObject_Option__Ygkgfd9bIhXevHX9cMK2qUEg, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[15].typ = (&NTI__Pp9bccfw9cFBDfaBE9cn7k0wA_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[15].name = "val";
NTI__Ygkgfd9bIhXevHX9cMK2qUEg_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[15];
NTI__XidiD9a0LLwqmCRYLAO11Mw_.size = sizeof(tyObject_Option__XidiD9a0LLwqmCRYLAO11Mw);
NTI__XidiD9a0LLwqmCRYLAO11Mw_.align = NIM_ALIGNOF(tyObject_Option__XidiD9a0LLwqmCRYLAO11Mw);
NTI__XidiD9a0LLwqmCRYLAO11Mw_.kind = 18;
NTI__XidiD9a0LLwqmCRYLAO11Mw_.base = 0;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[16].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[16].offset = offsetof(tyObject_Option__XidiD9a0LLwqmCRYLAO11Mw, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[16].typ = (&NTI__1YroH7xWT9bi2MAfYpKEp5w_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[16].name = "val";
NTI__XidiD9a0LLwqmCRYLAO11Mw_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[16];
NTI__mNQrG9by9bIvS2rBRypY8a8A_.size = sizeof(tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A);
NTI__mNQrG9by9bIvS2rBRypY8a8A_.align = NIM_ALIGNOF(tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A);
NTI__mNQrG9by9bIvS2rBRypY8a8A_.kind = 18;
NTI__mNQrG9by9bIvS2rBRypY8a8A_.base = 0;
NTI__mNQrG9by9bIvS2rBRypY8a8A_.flags = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_6_2[0] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[18];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[18].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[18].offset = offsetof(tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[18].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[18].name = "val";
TM__4DNs4bMUkswhWc4o4dM9bbg_6_2[1] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[19];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[19].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[19].offset = offsetof(tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A, has);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[19].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[19].name = "has";
TM__4DNs4bMUkswhWc4o4dM9bbg_0[17].len = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[17].kind = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[17].sons = &TM__4DNs4bMUkswhWc4o4dM9bbg_6_2[0];
NTI__mNQrG9by9bIvS2rBRypY8a8A_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[17];
}

