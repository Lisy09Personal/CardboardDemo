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

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1854;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m11610_gshared (UnityAction_1_t1854 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m11610(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1854 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m11610_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m11611_gshared (UnityAction_1_t1854 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m11611(__this, ___arg0, method) (( void (*) (UnityAction_1_t1854 *, Object_t *, const MethodInfo*))UnityAction_1_Invoke_m11611_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m11612_gshared (UnityAction_1_t1854 * __this, Object_t * ___arg0, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m11612(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1854 *, Object_t *, AsyncCallback_t10 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m11612_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m11613_gshared (UnityAction_1_t1854 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m11613(__this, ___result, method) (( void (*) (UnityAction_1_t1854 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m11613_gshared)(__this, ___result, method)
