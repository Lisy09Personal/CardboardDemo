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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2252;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16992_gshared (Enumerator_t2259 * __this, Dictionary_2_t2252 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16992(__this, ___dictionary, method) (( void (*) (Enumerator_t2259 *, Dictionary_2_t2252 *, const MethodInfo*))Enumerator__ctor_m16992_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16993_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16993(__this, method) (( Object_t * (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16993_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m16994_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m16994(__this, method) (( void (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m16994_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1058  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16995_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16995(__this, method) (( DictionaryEntry_t1058  (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16995_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16996_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16996(__this, method) (( Object_t * (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16996_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16997_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16997(__this, method) (( Object_t * (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16997_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16998_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16998(__this, method) (( bool (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_MoveNext_m16998_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2254  Enumerator_get_Current_m16999_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16999(__this, method) (( KeyValuePair_2_t2254  (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_get_Current_m16999_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17000_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17000(__this, method) (( Object_t * (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_get_CurrentKey_m17000_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m17001_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17001(__this, method) (( int32_t (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_get_CurrentValue_m17001_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m17002_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_Reset_m17002(__this, method) (( void (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_Reset_m17002_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m17003_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17003(__this, method) (( void (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_VerifyState_m17003_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17004_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17004(__this, method) (( void (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_VerifyCurrent_m17004_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m17005_gshared (Enumerator_t2259 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17005(__this, method) (( void (*) (Enumerator_t2259 *, const MethodInfo*))Enumerator_Dispose_m17005_gshared)(__this, method)
