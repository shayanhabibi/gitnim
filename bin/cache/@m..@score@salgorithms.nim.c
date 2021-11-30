/* Generated by Nim Compiler v1.4.8 */
/*   (c) 2021 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN -pg -O3 -fno-strict-aliasing -fno-ident   -IC:\Users\PC\.choosenim\toolchains\nim-1.4.8\lib -IC:\Users\PC\AppData\Local\Temp\nimble_23592\githubcom_haxscramperhmisc_0.12.0\src\hmisc\scripts -o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\@m..@score@salgorithms.nim.c.o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\@m..@score@salgorithms.nim.c */
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
typedef struct tyTuple__0mEH3RoOxqk5OnGD32hX0w tyTuple__0mEH3RoOxqk5OnGD32hX0w;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple__8SbRsdOZXXTm2qqGTUEaFA tyTuple__8SbRsdOZXXTm2qqGTUEaFA;
typedef struct tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ;
typedef struct tyObject_ColoredText__xWfNNchsubPGLPnyl5pUyg tyObject_ColoredText__xWfNNchsubPGLPnyl5pUyg;
typedef struct tySequence__vJuUYyLOogiFcCL9azzPxug tySequence__vJuUYyLOogiFcCL9azzPxug;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple__41nT1fkMuIXaIIP6eUL4hQ tyTuple__41nT1fkMuIXaIIP6eUL4hQ;
typedef struct tyObject_ColoredRune__5AG7Hb7ceBt9bOrhn9cOhKtQ tyObject_ColoredRune__5AG7Hb7ceBt9bOrhn9cOhKtQ;
typedef struct tyObject_PrintStyling__IOExjsxEzZZP89aevX6K6VQ tyObject_PrintStyling__IOExjsxEzZZP89aevX6K6VQ;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray__gR9aWlJFPfLzatoVSLfijDA[6];
typedef NU8 tyEnum_CliHelpModes__rXNCM8ZIVn51G9aYQDY9c76A;
struct tyTuple__0mEH3RoOxqk5OnGD32hX0w {
tyEnum_CliHelpModes__rXNCM8ZIVn51G9aYQDY9c76A Field0;
NimStringDesc* Field1;
};
struct tyObject_ColoredText__xWfNNchsubPGLPnyl5pUyg {
tySequence__vJuUYyLOogiFcCL9azzPxug* runes;
};
struct tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ {
tyObject_ColoredText__xWfNNchsubPGLPnyl5pUyg str;
};
typedef tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ tyArray__h8XDic1lmg1i8HY8QPWNyA[9];
typedef NU8 tyEnum_HLogLevel__Z4dm7kczo05aLDfoy2WKZg;
struct tyTuple__8SbRsdOZXXTm2qqGTUEaFA {
tyEnum_HLogLevel__Z4dm7kczo05aLDfoy2WKZg Field0;
tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ Field1;
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
typedef tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ tyArray__DqanmQGRcPCQhuNhV28qQA[8];
typedef NU8 tyEnum_HLogEvent__J8PDnz9bZmvlsbdWTyl4ZoA;
struct tyTuple__41nT1fkMuIXaIIP6eUL4hQ {
tyEnum_HLogEvent__J8PDnz9bZmvlsbdWTyl4ZoA Field0;
tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ Field1;
};
typedef NU8 tyEnum_TermColor8Bit__g8dJXK1m1x4pl6wA6wRVyw;
typedef NU8 tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg;
typedef NU8 tyEnum_BackgroundColor__7jPyx0xRLWzxER9cSeCOA9bA;
typedef NU16 tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
struct tyObject_PrintStyling__IOExjsxEzZZP89aevX6K6VQ {
NIM_BOOL use8Bit;
union{
struct {tyEnum_TermColor8Bit__g8dJXK1m1x4pl6wA6wRVyw fg8;
tyEnum_TermColor8Bit__g8dJXK1m1x4pl6wA6wRVyw bg8;
} _use8Bit_1;
struct {tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg fg;
tyEnum_BackgroundColor__7jPyx0xRLWzxER9cSeCOA9bA bg;
} _use8Bit_2;
};
tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA style;
};
struct tyObject_ColoredRune__5AG7Hb7ceBt9bOrhn9cOhKtQ {
NI32 rune;
tyObject_PrintStyling__IOExjsxEzZZP89aevX6K6VQ styling;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__vJuUYyLOogiFcCL9azzPxug {
  TGenericSeq Sup;
  tyObject_ColoredRune__5AG7Hb7ceBt9bOrhn9cOhKtQ data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);

/* section: NIM_merge_DATA */
extern TNimType NTI__vJuUYyLOogiFcCL9azzPxug_;

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(void, toMapArray__K8nO9an9bMnh8z7Khq5qPDpg)(tyTuple__0mEH3RoOxqk5OnGD32hX0w* map, NI mapLen_0, tyArray__gR9aWlJFPfLzatoVSLfijDA Result) {
	nimZeroMem((void*)Result, sizeof(tyArray__gR9aWlJFPfLzatoVSLfijDA));
	{
		tyEnum_CliHelpModes__rXNCM8ZIVn51G9aYQDY9c76A* k;
		NimStringDesc** v;
		NI i;
		k = (tyEnum_CliHelpModes__rXNCM8ZIVn51G9aYQDY9c76A*)0;
		v = (NimStringDesc**)0;
		i = ((NI) 0);
		{
			while (1) {
				NI TM__C9aPJ6iyHwudQ51x8ZX7ZuA_2;
				if (!(i < mapLen_0)) goto LA3;
				if ((NU)(i) >= (NU)(mapLen_0)){ raiseIndexError2(i,mapLen_0-1); }
				k = (&map[i].Field0);
				if ((NU)(i) >= (NU)(mapLen_0)){ raiseIndexError2(i,mapLen_0-1); }
				v = (&map[i].Field1);
				unsureAsgnRef((void**) (&Result[((*k))- 0]), copyString((*v)));
				if (nimAddInt(i, ((NI) 1), &TM__C9aPJ6iyHwudQ51x8ZX7ZuA_2)) { raiseOverflow(); };
				i = (NI)(TM__C9aPJ6iyHwudQ51x8ZX7ZuA_2);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, toMapArray__yqgemrqjbisFoDICeS9aTVQ)(tyTuple__8SbRsdOZXXTm2qqGTUEaFA* map, NI mapLen_0, tyArray__h8XDic1lmg1i8HY8QPWNyA Result) {
	nimZeroMem((void*)Result, sizeof(tyArray__h8XDic1lmg1i8HY8QPWNyA));
	{
		tyEnum_HLogLevel__Z4dm7kczo05aLDfoy2WKZg* k;
		tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ* v;
		NI i;
		k = (tyEnum_HLogLevel__Z4dm7kczo05aLDfoy2WKZg*)0;
		v = (tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ*)0;
		i = ((NI) 0);
		{
			while (1) {
				NI TM__C9aPJ6iyHwudQ51x8ZX7ZuA_3;
				if (!(i < mapLen_0)) goto LA3;
				if ((NU)(i) >= (NU)(mapLen_0)){ raiseIndexError2(i,mapLen_0-1); }
				k = (&map[i].Field0);
				if ((NU)(i) >= (NU)(mapLen_0)){ raiseIndexError2(i,mapLen_0-1); }
				v = (&map[i].Field1);
				genericSeqAssign((&Result[((*k))- 0].str.runes), (*v).str.runes, (&NTI__vJuUYyLOogiFcCL9azzPxug_));
				if (nimAddInt(i, ((NI) 1), &TM__C9aPJ6iyHwudQ51x8ZX7ZuA_3)) { raiseOverflow(); };
				i = (NI)(TM__C9aPJ6iyHwudQ51x8ZX7ZuA_3);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, toMapArray__O9aCze1TNTeDunmOt9ai9cbrg)(tyTuple__41nT1fkMuIXaIIP6eUL4hQ* map, NI mapLen_0, tyArray__DqanmQGRcPCQhuNhV28qQA Result) {
	nimZeroMem((void*)Result, sizeof(tyArray__DqanmQGRcPCQhuNhV28qQA));
	{
		tyEnum_HLogEvent__J8PDnz9bZmvlsbdWTyl4ZoA* k;
		tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ* v;
		NI i;
		k = (tyEnum_HLogEvent__J8PDnz9bZmvlsbdWTyl4ZoA*)0;
		v = (tyObject_HLogFormat__wq9a7byGOWDeekSzW2uJFBQ*)0;
		i = ((NI) 0);
		{
			while (1) {
				NI TM__C9aPJ6iyHwudQ51x8ZX7ZuA_4;
				if (!(i < mapLen_0)) goto LA3;
				if ((NU)(i) >= (NU)(mapLen_0)){ raiseIndexError2(i,mapLen_0-1); }
				k = (&map[i].Field0);
				if ((NU)(i) >= (NU)(mapLen_0)){ raiseIndexError2(i,mapLen_0-1); }
				v = (&map[i].Field1);
				genericSeqAssign((&Result[((*k))- 0].str.runes), (*v).str.runes, (&NTI__vJuUYyLOogiFcCL9azzPxug_));
				if (nimAddInt(i, ((NI) 1), &TM__C9aPJ6iyHwudQ51x8ZX7ZuA_4)) { raiseOverflow(); };
				i = (NI)(TM__C9aPJ6iyHwudQ51x8ZX7ZuA_4);
			} LA3: ;
		}
	}
}
