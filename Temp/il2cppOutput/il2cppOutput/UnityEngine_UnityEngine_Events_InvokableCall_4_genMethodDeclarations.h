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

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t2272;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t127;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_4__ctor_m17085_gshared (InvokableCall_4_t2272 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_4__ctor_m17085(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_4_t2272 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4__ctor_m17085_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_4_Invoke_m17086_gshared (InvokableCall_4_t2272 * __this, ObjectU5BU5D_t127* ___args, const MethodInfo* method);
#define InvokableCall_4_Invoke_m17086(__this, ___args, method) (( void (*) (InvokableCall_4_t2272 *, ObjectU5BU5D_t127*, const MethodInfo*))InvokableCall_4_Invoke_m17086_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m17087_gshared (InvokableCall_4_t2272 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_4_Find_m17087(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_4_t2272 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4_Find_m17087_gshared)(__this, ___targetObj, ___method, method)
