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

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t1198;
// System.Collections.Hashtable
struct Hashtable_t797;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t655;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1059;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
extern "C" void SyncHashtable__ctor_m7459 (SyncHashtable_t1198 * __this, Hashtable_t797 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SyncHashtable__ctor_m7460 (SyncHashtable_t1198 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/SyncHashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SyncHashtable_System_Collections_IEnumerable_GetEnumerator_m7461 (SyncHashtable_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SyncHashtable_GetObjectData_m7462 (SyncHashtable_t1198 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/SyncHashtable::get_Count()
extern "C" int32_t SyncHashtable_get_Count_m7463 (SyncHashtable_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsSynchronized()
extern "C" bool SyncHashtable_get_IsSynchronized_m7464 (SyncHashtable_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_SyncRoot()
extern "C" Object_t * SyncHashtable_get_SyncRoot_m7465 (SyncHashtable_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Keys()
extern "C" Object_t * SyncHashtable_get_Keys_m7466 (SyncHashtable_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Values()
extern "C" Object_t * SyncHashtable_get_Values_m7467 (SyncHashtable_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_Item(System.Object)
extern "C" Object_t * SyncHashtable_get_Item_m7468 (SyncHashtable_t1198 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::set_Item(System.Object,System.Object)
extern "C" void SyncHashtable_set_Item_m7469 (SyncHashtable_t1198 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::CopyTo(System.Array,System.Int32)
extern "C" void SyncHashtable_CopyTo_m7470 (SyncHashtable_t1198 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Add(System.Object,System.Object)
extern "C" void SyncHashtable_Add_m7471 (SyncHashtable_t1198 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Clear()
extern "C" void SyncHashtable_Clear_m7472 (SyncHashtable_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::Contains(System.Object)
extern "C" bool SyncHashtable_Contains_m7473 (SyncHashtable_t1198 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable/SyncHashtable::GetEnumerator()
extern "C" Object_t * SyncHashtable_GetEnumerator_m7474 (SyncHashtable_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Remove(System.Object)
extern "C" void SyncHashtable_Remove_m7475 (SyncHashtable_t1198 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::ContainsKey(System.Object)
extern "C" bool SyncHashtable_ContainsKey_m7476 (SyncHashtable_t1198 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::Clone()
extern "C" Object_t * SyncHashtable_Clone_m7477 (SyncHashtable_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
