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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t277;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m2419_gshared (UnityEvent_1_t277 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2419(__this, method) (( void (*) (UnityEvent_1_t277 *, const MethodInfo*))UnityEvent_1__ctor_m2419_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m14321_gshared (UnityEvent_1_t277 * __this, UnityAction_1_t2056 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m14321(__this, ___call, method) (( void (*) (UnityEvent_1_t277 *, UnityAction_1_t2056 *, const MethodInfo*))UnityEvent_1_AddListener_m14321_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m14322_gshared (UnityEvent_1_t277 * __this, UnityAction_1_t2056 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m14322(__this, ___call, method) (( void (*) (UnityEvent_1_t277 *, UnityAction_1_t2056 *, const MethodInfo*))UnityEvent_1_RemoveListener_m14322_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m14323_gshared (UnityEvent_1_t277 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m14323(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t277 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m14323_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t625 * UnityEvent_1_GetDelegate_m14324_gshared (UnityEvent_1_t277 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14324(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t625 * (*) (UnityEvent_1_t277 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m14324_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t625 * UnityEvent_1_GetDelegate_m14325_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2056 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14325(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t625 * (*) (Object_t * /* static, unused */, UnityAction_1_t2056 *, const MethodInfo*))UnityEvent_1_GetDelegate_m14325_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2425_gshared (UnityEvent_1_t277 * __this, Vector2_t16  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2425(__this, ___arg0, method) (( void (*) (UnityEvent_1_t277 *, Vector2_t16 , const MethodInfo*))UnityEvent_1_Invoke_m2425_gshared)(__this, ___arg0, method)
