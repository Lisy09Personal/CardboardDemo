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

// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct Predicate_1_t2385;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18218_gshared (Predicate_1_t2385 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m18218(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2385 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m18218_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18219_gshared (Predicate_1_t2385 * __this, CustomAttributeNamedArgument_t1326  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18219(__this, ___obj, method) (( bool (*) (Predicate_1_t2385 *, CustomAttributeNamedArgument_t1326 , const MethodInfo*))Predicate_1_Invoke_m18219_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18220_gshared (Predicate_1_t2385 * __this, CustomAttributeNamedArgument_t1326  ___obj, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18220(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2385 *, CustomAttributeNamedArgument_t1326 , AsyncCallback_t10 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18220_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18221_gshared (Predicate_1_t2385 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18221(__this, ___result, method) (( bool (*) (Predicate_1_t2385 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18221_gshared)(__this, ___result, method)
