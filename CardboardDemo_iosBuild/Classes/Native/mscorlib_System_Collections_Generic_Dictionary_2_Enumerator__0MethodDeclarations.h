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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1914;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12486_gshared (Enumerator_t1921 * __this, Dictionary_2_t1914 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12486(__this, ___dictionary, method) (( void (*) (Enumerator_t1921 *, Dictionary_2_t1914 *, const MethodInfo*))Enumerator__ctor_m12486_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12487_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12487(__this, method) (( Object_t * (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12487_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12488_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12488(__this, method) (( void (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12488_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1058  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12489_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12489(__this, method) (( DictionaryEntry_t1058  (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12489_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12490_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12490(__this, method) (( Object_t * (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12490_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12491_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12491(__this, method) (( Object_t * (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12491_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12492_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12492(__this, method) (( bool (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_MoveNext_m12492_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1916  Enumerator_get_Current_m12493_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12493(__this, method) (( KeyValuePair_2_t1916  (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_get_Current_m12493_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12494_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12494(__this, method) (( int32_t (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_get_CurrentKey_m12494_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12495_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12495(__this, method) (( Object_t * (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_get_CurrentValue_m12495_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m12496_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12496(__this, method) (( void (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_Reset_m12496_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12497_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12497(__this, method) (( void (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_VerifyState_m12497_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12498_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12498(__this, method) (( void (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_VerifyCurrent_m12498_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12499_gshared (Enumerator_t1921 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12499(__this, method) (( void (*) (Enumerator_t1921 *, const MethodInfo*))Enumerator_Dispose_m12499_gshared)(__this, method)
