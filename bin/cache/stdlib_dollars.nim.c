/* Generated by Nim Compiler v1.4.8 */
/*   (c) 2021 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN -pg -O3 -fno-strict-aliasing -fno-ident   -IC:\Users\PC\.choosenim\toolchains\nim-1.4.8\lib -IC:\Users\PC\AppData\Local\Temp\nimble_23592\githubcom_haxscramperhmisc_0.12.0\src\hmisc\scripts -o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\stdlib_dollars.nim.c.o C:\Users\PC\.choosenim\toolchains\nim-1.4.8\bin\cache\stdlib_dollars.nim.c */
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_HSlice__5OK2JdUj68bzJbr4JvmXzw tyObject_HSlice__5OK2JdUj68bzJbr4JvmXzw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
typedef struct tySequence__jvOI7rvu8dg9aFcRuTjuOSA tySequence__jvOI7rvu8dg9aFcRuTjuOSA;
typedef struct tyObject_GitGlob__9at64F9cVbepRTfuBpyMkR7Q tyObject_GitGlob__9at64F9cVbepRTfuBpyMkR7Q;
typedef struct tySequence__qwqHTkRvwhrRyENtudHQ7g tySequence__qwqHTkRvwhrRyENtudHQ7g;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;

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
struct tyObject_HSlice__5OK2JdUj68bzJbr4JvmXzw {
tyEnum_CliOptKind__kIBT9augQMakND2eiI1Cimw a;
tyEnum_CliOptKind__kIBT9augQMakND2eiI1Cimw b;
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
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringDesc* Field0;
NI Field1;
NI Field2;
};
struct tyObject_GitGlob__9at64F9cVbepRTfuBpyMkR7Q {
NimStringDesc* patt;
NIM_BOOL ign;
};
typedef NU16 tySet_tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA;
typedef NU8 tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA;
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
typedef NU16 tySet_tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q;
typedef NU8 tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q;
typedef NU8 tySet_tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg;
typedef NU8 tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg;
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__jvOI7rvu8dg9aFcRuTjuOSA {
  TGenericSeq Sup;
  tyObject_GitGlob__9at64F9cVbepRTfuBpyMkR7Q data[SEQ_DECL_SIZE];
};
struct tySequence__qwqHTkRvwhrRyENtudHQ7g {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__dJtt8Xj30kt9bCQK1n8AO9cw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__45fPtFhY4FavRaYwDhRfuA)(NimStringDesc** s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__HldWGCo3PyfFOJnCfzAu9aQ)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__K2bIdmRnxf0AxTabSu9bmzg)(NimStringDesc** s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__Eys2fLM61EBlquSM8n9cIsw)(NimStringDesc** s, NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__B339cpUeNZWwTNivePErwDw)(tySequence__jvOI7rvu8dg9aFcRuTjuOSA* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__ysDS3XqQR8PvSrQM4h9aIxw)(NimStringDesc** s, tyObject_GitGlob__9at64F9cVbepRTfuBpyMkR7Q x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__vWDSaIvz4FjL7G89aYTOusA)(tySequence__qwqHTkRvwhrRyENtudHQ7g* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__doMKFdUqCnGTD5AcDAmwhg)(tySet_tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__a1NjIrFmhV6Q9aR4YbBJQ5g)(NimStringDesc** s, tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__g9bqd15mFNvvy8GuedwxCag)(tySet_tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__KU9bybXa2EEyZ2D2jXGIJSg)(NimStringDesc** s, tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__DFf6nOWXAh5nREr62zwRkQ)(tySet_tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__y9bRVmoI1P0Ss4Vh9bH5clCw)(NimStringDesc** s, tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg x);

/* section: NIM_merge_DATA */
extern TNimType NTI__kIBT9augQMakND2eiI1Cimw_;
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_2, " .. ", 4);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_3, "iterators.nim(204, 11) `len(a) == L` the length of the seq chan"
"ged while iterating over it", 90);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_4, "@[", 2);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_5, ", ", 2);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_6, "]", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_7, "(", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_8, "filename", 8);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_9, ": ", 2);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_10, "line", 4);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_11, "column", 6);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_12, ")", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_13, "{", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_14, "}", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_15, ",", 1);

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == ((NimStringDesc*) NIM_NIL)))) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___lN9b3mikyvziYa1mGSX9bzUA)(tyObject_HSlice__5OK2JdUj68bzJbr4JvmXzw x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = reprEnum((NI)x.a, (&NTI__kIBT9augQMakND2eiI1Cimw_));
	result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_2));
	result = resizeString(result, (reprEnum((NI)x.b, (&NTI__kIBT9augQMakND2eiI1Cimw_)) ? reprEnum((NI)x.b, (&NTI__kIBT9augQMakND2eiI1Cimw_))->Sup.len : 0) + 0);
appendString(result, reprEnum((NI)x.b, (&NTI__kIBT9augQMakND2eiI1Cimw_)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__dJtt8Xj30kt9bCQK1n8AO9cw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		NimStringDesc** value;
		NI i;
		NI L;
		NI T2_;
		value = (NimStringDesc**)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				value = (&x->data[i]);
				{
					if (!firstElement) goto LA7_;
					firstElement = NIM_FALSE;
				}
				goto LA5_;
				LA7_: ;
				{
					result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
				}
				LA5_: ;
				addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*value));
				i += ((NI) 1);
				{
					NI T12_;
					T12_ = (x ? x->Sup.len : 0);
					if (!!((T12_ == L))) goto LA13_;
					failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
				}
				LA13_: ;
			} LA4: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___xqL1qTIQGkhdyM4F59c1P9aw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__dJtt8Xj30kt9bCQK1n8AO9cw(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_4), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_6));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___r38WafKlW80RkvoZTcia4Q)(tyTuple__kN8up2W6YKc5YA9avn5mV5w x) {
	NimStringDesc* result;
	NI count;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_7));
	count = ((NI) 0);
	{
		if (!(((NI) 0) < count)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5));
	}
	LA3_: ;
	result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_8));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_9));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), x.Field0);
	{
		if (!(((NI) 0) < count)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5));
	}
	LA7_: ;
	result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_10));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_9));
	count += ((NI) 1);
	addQuoted__Eys2fLM61EBlquSM8n9cIsw((&result), x.Field1);
	{
		if (!(((NI) 0) < count)) goto LA11_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5));
	}
	LA11_: ;
	result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_9));
	count += ((NI) 1);
	addQuoted__Eys2fLM61EBlquSM8n9cIsw((&result), x.Field2);
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_12));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__HldWGCo3PyfFOJnCfzAu9aQ)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		NimStringDesc** value;
		NI i;
		NI L;
		NI T2_;
		value = (NimStringDesc**)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				value = (&x->data[i]);
				{
					if (!firstElement) goto LA7_;
					firstElement = NIM_FALSE;
				}
				goto LA5_;
				LA7_: ;
				{
					result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
				}
				LA5_: ;
				addQuoted__K2bIdmRnxf0AxTabSu9bmzg((&result), (*value));
				i += ((NI) 1);
				{
					NI T12_;
					T12_ = (x ? x->Sup.len : 0);
					if (!!((T12_ == L))) goto LA13_;
					failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
				}
				LA13_: ;
			} LA4: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___7HX8iMxPi74mFpm2BylVoQ)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__HldWGCo3PyfFOJnCfzAu9aQ(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_4), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_6));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__B339cpUeNZWwTNivePErwDw)(tySequence__jvOI7rvu8dg9aFcRuTjuOSA* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		tyObject_GitGlob__9at64F9cVbepRTfuBpyMkR7Q* value;
		NI i;
		NI L;
		NI T2_;
		value = (tyObject_GitGlob__9at64F9cVbepRTfuBpyMkR7Q*)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				value = (&x->data[i]);
				{
					if (!firstElement) goto LA7_;
					firstElement = NIM_FALSE;
				}
				goto LA5_;
				LA7_: ;
				{
					result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
				}
				LA5_: ;
				addQuoted__ysDS3XqQR8PvSrQM4h9aIxw((&result), (*value));
				i += ((NI) 1);
				{
					NI T12_;
					T12_ = (x ? x->Sup.len : 0);
					if (!!((T12_ == L))) goto LA13_;
					failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
				}
				LA13_: ;
			} LA4: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___6S9ahLsWf4rjJzQWsfg5DkA)(tySequence__jvOI7rvu8dg9aFcRuTjuOSA* x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__B339cpUeNZWwTNivePErwDw(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_4), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_6));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__vWDSaIvz4FjL7G89aYTOusA)(tySequence__qwqHTkRvwhrRyENtudHQ7g* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		NI* value;
		NI i;
		NI L;
		NI T2_;
		value = (NI*)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				value = (&x->data[i]);
				{
					if (!firstElement) goto LA7_;
					firstElement = NIM_FALSE;
				}
				goto LA5_;
				LA7_: ;
				{
					result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
				}
				LA5_: ;
				addQuoted__Eys2fLM61EBlquSM8n9cIsw((&result), (*value));
				i += ((NI) 1);
				{
					NI T12_;
					T12_ = (x ? x->Sup.len : 0);
					if (!!((T12_ == L))) goto LA13_;
					failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
				}
				LA13_: ;
			} LA4: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___Gsa4WPnABj84BVdJHxUK1w)(tySequence__qwqHTkRvwhrRyENtudHQ7g* x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__vWDSaIvz4FjL7G89aYTOusA(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_4), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_6));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__doMKFdUqCnGTD5AcDAmwhg)(tySet_tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA value;
		NI i;
		value = (tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i <= ((NI) 8))) goto LA3;
				{
					if (!((x &((NU16)1<<((NU)(((tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA) (i)))&15U)))!=0)) goto LA6_;
					value = ((tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA) (i));
					{
						if (!firstElement) goto LA10_;
						firstElement = NIM_FALSE;
					}
					goto LA8_;
					LA10_: ;
					{
						result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
					}
					LA8_: ;
					addQuoted__a1NjIrFmhV6Q9aR4YbBJQ5g((&result), value);
				}
				LA6_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___rwI9b63GTi28OPn2o8TnuVg)(tySet_tyEnum_FilePermission__uTVeDpjCH6aWw9c74YkAskA x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__doMKFdUqCnGTD5AcDAmwhg(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_13), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_14));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___UxQZbo2VUYBxPs2yfDm9bjg)(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NimStringDesc* result;
	NimStringDesc* T1_;
	result = (NimStringDesc*)0;
	result = nimIntToStr(x.a);
	result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_2));
	T1_ = (NimStringDesc*)0;
	T1_ = nimIntToStr(x.b);
	result = resizeString(result, (T1_ ? T1_->Sup.len : 0) + 0);
appendString(result, T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__g9bqd15mFNvvy8GuedwxCag)(tySet_tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q value;
		NI i;
		value = (tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i <= ((NI) 10))) goto LA3;
				{
					if (!((x &((NU16)1<<((NU)(((tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q) (i)))&15U)))!=0)) goto LA6_;
					value = ((tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q) (i));
					{
						if (!firstElement) goto LA10_;
						firstElement = NIM_FALSE;
					}
					goto LA8_;
					LA10_: ;
					{
						result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
					}
					LA8_: ;
					addQuoted__KU9bybXa2EEyZ2D2jXGIJSg((&result), value);
				}
				LA6_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___TH9cFZlENJf9bMd1Lxy5wTXw)(tySet_tyEnum_CliValueKind__5c6MFtEbbjLqTAf36PJK1Q x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__g9bqd15mFNvvy8GuedwxCag(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_13), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_14));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__DFf6nOWXAh5nREr62zwRkQ)(tySet_tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg value;
		NI i;
		value = (tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i <= ((NI) 3))) goto LA3;
				{
					if (!((x &((NU8)1<<((NU)(((tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg) (i)))&7U)))!=0)) goto LA6_;
					value = ((tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg) (i));
					{
						if (!firstElement) goto LA10_;
						firstElement = NIM_FALSE;
					}
					goto LA8_;
					LA10_: ;
					{
						result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
					}
					LA8_: ;
					addQuoted__y9bRVmoI1P0Ss4Vh9bH5clCw((&result), value);
				}
				LA6_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___jgNrE0FifJhsi0RYJOCahg)(tySet_tyEnum_PathComponent__9c1SIU9cO1wHcl09b703A9cDrg x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__DFf6nOWXAh5nREr62zwRkQ(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_13), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_14));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___QX30i9a0JRHUXu5QkLQcZiA)(tyTuple__UV3llMMYFckfui8YMBuUZA x) {
	NimStringDesc* result;
	NI count;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_7));
	count = ((NI) 0);
	{
		if (!(((NI) 0) < count)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5));
	}
	LA3_: ;
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), x.Field0);
	{
		if (!(((NI) 0) < count)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5));
	}
	LA7_: ;
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), x.Field1);
	{
		if (!(count == ((NI) 1))) goto LA11_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_15));
	}
	LA11_: ;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_12));
	return result;
}
