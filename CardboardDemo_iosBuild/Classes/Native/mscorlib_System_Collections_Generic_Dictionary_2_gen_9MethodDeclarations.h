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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1914;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1913;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t655;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2434;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2435;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t871;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1919;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12363_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12363(__this, method) (( void (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2__ctor_m12363_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12365_gshared (Dictionary_2_t1914 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12365(__this, ___comparer, method) (( void (*) (Dictionary_2_t1914 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12365_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12367_gshared (Dictionary_2_t1914 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12367(__this, ___capacity, method) (( void (*) (Dictionary_2_t1914 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12367_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12369_gshared (Dictionary_2_t1914 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12369(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1914 *, SerializationInfo_t655 *, StreamingContext_t656 , const MethodInfo*))Dictionary_2__ctor_m12369_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12371_gshared (Dictionary_2_t1914 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12371(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1914 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12371_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12373_gshared (Dictionary_2_t1914 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12373(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1914 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12373_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12375_gshared (Dictionary_2_t1914 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12375(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1914 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12375_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12377_gshared (Dictionary_2_t1914 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12377(__this, ___key, method) (( bool (*) (Dictionary_2_t1914 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12377_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12379_gshared (Dictionary_2_t1914 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12379(__this, ___key, method) (( void (*) (Dictionary_2_t1914 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12379_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12381_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12381(__this, method) (( bool (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12381_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12383_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12383(__this, method) (( Object_t * (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12383_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12385_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12385(__this, method) (( bool (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12387_gshared (Dictionary_2_t1914 * __this, KeyValuePair_2_t1916  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12387(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1914 *, KeyValuePair_2_t1916 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12387_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12389_gshared (Dictionary_2_t1914 * __this, KeyValuePair_2_t1916  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12389(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1914 *, KeyValuePair_2_t1916 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12389_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12391_gshared (Dictionary_2_t1914 * __this, KeyValuePair_2U5BU5D_t2434* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12391(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1914 *, KeyValuePair_2U5BU5D_t2434*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12391_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12393_gshared (Dictionary_2_t1914 * __this, KeyValuePair_2_t1916  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12393(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1914 *, KeyValuePair_2_t1916 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12393_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12395_gshared (Dictionary_2_t1914 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12395(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1914 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12395_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12397_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12397(__this, method) (( Object_t * (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12397_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12399_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12399(__this, method) (( Object_t* (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12399_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12401_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12401(__this, method) (( Object_t * (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12403_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12403(__this, method) (( int32_t (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_get_Count_m12403_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12405_gshared (Dictionary_2_t1914 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12405(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1914 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12405_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12407_gshared (Dictionary_2_t1914 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12407(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1914 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12407_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12409_gshared (Dictionary_2_t1914 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12409(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1914 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12409_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12411_gshared (Dictionary_2_t1914 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12411(__this, ___size, method) (( void (*) (Dictionary_2_t1914 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12411_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12413_gshared (Dictionary_2_t1914 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12413(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1914 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12413_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1916  Dictionary_2_make_pair_m12415_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12415(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1916  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12415_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12417_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12417(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12417_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12419_gshared (Dictionary_2_t1914 * __this, KeyValuePair_2U5BU5D_t2434* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12419(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1914 *, KeyValuePair_2U5BU5D_t2434*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12419_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12421_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12421(__this, method) (( void (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_Resize_m12421_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12423_gshared (Dictionary_2_t1914 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12423(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1914 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12423_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12425_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12425(__this, method) (( void (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_Clear_m12425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12427_gshared (Dictionary_2_t1914 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12427(__this, ___key, method) (( bool (*) (Dictionary_2_t1914 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12427_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12429_gshared (Dictionary_2_t1914 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12429(__this, ___value, method) (( bool (*) (Dictionary_2_t1914 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12429_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12431_gshared (Dictionary_2_t1914 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12431(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1914 *, SerializationInfo_t655 *, StreamingContext_t656 , const MethodInfo*))Dictionary_2_GetObjectData_m12431_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12433_gshared (Dictionary_2_t1914 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12433(__this, ___sender, method) (( void (*) (Dictionary_2_t1914 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12433_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12435_gshared (Dictionary_2_t1914 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12435(__this, ___key, method) (( bool (*) (Dictionary_2_t1914 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12435_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12437_gshared (Dictionary_2_t1914 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12437(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1914 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12437_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1919 * Dictionary_2_get_Values_m12438_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12438(__this, method) (( ValueCollection_t1919 * (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_get_Values_m12438_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12440_gshared (Dictionary_2_t1914 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12440(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1914 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12440_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12442_gshared (Dictionary_2_t1914 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12442(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1914 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12442_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12444_gshared (Dictionary_2_t1914 * __this, KeyValuePair_2_t1916  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12444(__this, ___pair, method) (( bool (*) (Dictionary_2_t1914 *, KeyValuePair_2_t1916 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12444_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1921  Dictionary_2_GetEnumerator_m12445_gshared (Dictionary_2_t1914 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12445(__this, method) (( Enumerator_t1921  (*) (Dictionary_2_t1914 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12445_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1058  Dictionary_2_U3CCopyToU3Em__0_m12447_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12447(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1058  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12447_gshared)(__this /* static, unused */, ___key, ___value, method)
