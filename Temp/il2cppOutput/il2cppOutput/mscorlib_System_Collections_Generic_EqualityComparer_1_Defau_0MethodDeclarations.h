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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1840;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m11469_gshared (DefaultComparer_t1840 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11469(__this, method) (( void (*) (DefaultComparer_t1840 *, const MethodInfo*))DefaultComparer__ctor_m11469_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11470_gshared (DefaultComparer_t1840 * __this, RaycastResult_t101  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11470(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1840 *, RaycastResult_t101 , const MethodInfo*))DefaultComparer_GetHashCode_m11470_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11471_gshared (DefaultComparer_t1840 * __this, RaycastResult_t101  ___x, RaycastResult_t101  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11471(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1840 *, RaycastResult_t101 , RaycastResult_t101 , const MethodInfo*))DefaultComparer_Equals_m11471_gshared)(__this, ___x, ___y, method)
