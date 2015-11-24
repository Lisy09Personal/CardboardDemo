#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t1981;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t382;
// System.Object[]
struct ObjectU5BU5D_t127;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13267_gshared (InvokableCall_1_t1981 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13267(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1981 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13267_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13268_gshared (InvokableCall_1_t1981 * __this, UnityAction_1_t382 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13268(__this, ___action, method) (( void (*) (InvokableCall_1_t1981 *, UnityAction_1_t382 *, const MethodInfo*))InvokableCall_1__ctor_m13268_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13269_gshared (InvokableCall_1_t1981 * __this, ObjectU5BU5D_t127* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13269(__this, ___args, method) (( void (*) (InvokableCall_1_t1981 *, ObjectU5BU5D_t127*, const MethodInfo*))InvokableCall_1_Invoke_m13269_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13270_gshared (InvokableCall_1_t1981 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13270(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1981 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13270_gshared)(__this, ___targetObj, ___method, method)
