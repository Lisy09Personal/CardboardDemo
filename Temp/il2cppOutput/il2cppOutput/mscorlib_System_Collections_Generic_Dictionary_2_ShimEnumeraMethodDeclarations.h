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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1925;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1914;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12518_gshared (ShimEnumerator_t1925 * __this, Dictionary_2_t1914 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12518(__this, ___host, method) (( void (*) (ShimEnumerator_t1925 *, Dictionary_2_t1914 *, const MethodInfo*))ShimEnumerator__ctor_m12518_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12519_gshared (ShimEnumerator_t1925 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12519(__this, method) (( bool (*) (ShimEnumerator_t1925 *, const MethodInfo*))ShimEnumerator_MoveNext_m12519_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1058  ShimEnumerator_get_Entry_m12520_gshared (ShimEnumerator_t1925 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12520(__this, method) (( DictionaryEntry_t1058  (*) (ShimEnumerator_t1925 *, const MethodInfo*))ShimEnumerator_get_Entry_m12520_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12521_gshared (ShimEnumerator_t1925 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12521(__this, method) (( Object_t * (*) (ShimEnumerator_t1925 *, const MethodInfo*))ShimEnumerator_get_Key_m12521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12522_gshared (ShimEnumerator_t1925 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12522(__this, method) (( Object_t * (*) (ShimEnumerator_t1925 *, const MethodInfo*))ShimEnumerator_get_Value_m12522_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12523_gshared (ShimEnumerator_t1925 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12523(__this, method) (( Object_t * (*) (ShimEnumerator_t1925 *, const MethodInfo*))ShimEnumerator_get_Current_m12523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12524_gshared (ShimEnumerator_t1925 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12524(__this, method) (( void (*) (ShimEnumerator_t1925 *, const MethodInfo*))ShimEnumerator_Reset_m12524_gshared)(__this, method)
