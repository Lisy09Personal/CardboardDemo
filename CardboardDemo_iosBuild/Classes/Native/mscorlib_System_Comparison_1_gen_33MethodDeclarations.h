﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2211;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16306_gshared (Comparison_1_t2211 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16306(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2211 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16306_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16307_gshared (Comparison_1_t2211 * __this, UICharInfo_t401  ___x, UICharInfo_t401  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16307(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2211 *, UICharInfo_t401 , UICharInfo_t401 , const MethodInfo*))Comparison_1_Invoke_m16307_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16308_gshared (Comparison_1_t2211 * __this, UICharInfo_t401  ___x, UICharInfo_t401  ___y, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16308(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2211 *, UICharInfo_t401 , UICharInfo_t401 , AsyncCallback_t10 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16308_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16309_gshared (Comparison_1_t2211 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16309(__this, ___result, method) (( int32_t (*) (Comparison_1_t2211 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16309_gshared)(__this, ___result, method)
