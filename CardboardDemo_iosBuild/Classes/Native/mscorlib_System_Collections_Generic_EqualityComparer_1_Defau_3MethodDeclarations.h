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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t2104;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m15114_gshared (DefaultComparer_t2104 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15114(__this, method) (( void (*) (DefaultComparer_t2104 *, const MethodInfo*))DefaultComparer__ctor_m15114_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15115_gshared (DefaultComparer_t2104 * __this, Vector3_t5  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15115(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2104 *, Vector3_t5 , const MethodInfo*))DefaultComparer_GetHashCode_m15115_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15116_gshared (DefaultComparer_t2104 * __this, Vector3_t5  ___x, Vector3_t5  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15116(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2104 *, Vector3_t5 , Vector3_t5 , const MethodInfo*))DefaultComparer_Equals_m15116_gshared)(__this, ___x, ___y, method)
