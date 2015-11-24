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

// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t2149;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15709_gshared (Comparison_1_t2149 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15709(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2149 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15709_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15710_gshared (Comparison_1_t2149 * __this, Vector4_t38  ___x, Vector4_t38  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15710(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2149 *, Vector4_t38 , Vector4_t38 , const MethodInfo*))Comparison_1_Invoke_m15710_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15711_gshared (Comparison_1_t2149 * __this, Vector4_t38  ___x, Vector4_t38  ___y, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15711(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2149 *, Vector4_t38 , Vector4_t38 , AsyncCallback_t10 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15711_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15712_gshared (Comparison_1_t2149 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15712(__this, ___result, method) (( int32_t (*) (Comparison_1_t2149 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15712_gshared)(__this, ___result, method)
