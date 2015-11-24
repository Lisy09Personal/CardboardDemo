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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1941;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12810_gshared (Enumerator_t1948 * __this, Dictionary_2_t1941 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12810(__this, ___dictionary, method) (( void (*) (Enumerator_t1948 *, Dictionary_2_t1941 *, const MethodInfo*))Enumerator__ctor_m12810_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12811_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12811(__this, method) (( Object_t * (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12811_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12812_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12812(__this, method) (( void (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12812_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1058  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12813_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12813(__this, method) (( DictionaryEntry_t1058  (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12814_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12814(__this, method) (( Object_t * (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12815_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12815(__this, method) (( Object_t * (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12816_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12816(__this, method) (( bool (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_MoveNext_m12816_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1944  Enumerator_get_Current_m12817_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12817(__this, method) (( KeyValuePair_2_t1944  (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_get_Current_m12817_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12818_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12818(__this, method) (( Object_t * (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_get_CurrentKey_m12818_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12819_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12819(__this, method) (( int32_t (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_get_CurrentValue_m12819_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m12820_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12820(__this, method) (( void (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_Reset_m12820_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12821_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12821(__this, method) (( void (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_VerifyState_m12821_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12822_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12822(__this, method) (( void (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_VerifyCurrent_m12822_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12823_gshared (Enumerator_t1948 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12823(__this, method) (( void (*) (Enumerator_t1948 *, const MethodInfo*))Enumerator_Dispose_m12823_gshared)(__this, method)
