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

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t348;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2267_gshared (UnityAction_1_t348 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m2267(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t348 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m2267_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12685_gshared (UnityAction_1_t348 * __this, Color_t12  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m12685(__this, ___arg0, method) (( void (*) (UnityAction_1_t348 *, Color_t12 , const MethodInfo*))UnityAction_1_Invoke_m12685_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m12686_gshared (UnityAction_1_t348 * __this, Color_t12  ___arg0, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m12686(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t348 *, Color_t12 , AsyncCallback_t10 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12686_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12687_gshared (UnityAction_1_t348 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m12687(__this, ___result, method) (( void (*) (UnityAction_1_t348 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12687_gshared)(__this, ___result, method)
