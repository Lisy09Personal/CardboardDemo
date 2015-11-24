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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t992;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1913;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t655;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2497;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2498;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t871;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2323;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m17582_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17582(__this, method) (( void (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2__ctor_m17582_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17583_gshared (Dictionary_2_t992 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17583(__this, ___comparer, method) (( void (*) (Dictionary_2_t992 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17583_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17584_gshared (Dictionary_2_t992 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17584(__this, ___capacity, method) (( void (*) (Dictionary_2_t992 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17584_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17585_gshared (Dictionary_2_t992 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17585(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t992 *, SerializationInfo_t655 *, StreamingContext_t656 , const MethodInfo*))Dictionary_2__ctor_m17585_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17586_gshared (Dictionary_2_t992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17586(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17586_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17587_gshared (Dictionary_2_t992 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17587(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t992 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17587_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17588_gshared (Dictionary_2_t992 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17588(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t992 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17588_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17589_gshared (Dictionary_2_t992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17589(__this, ___key, method) (( bool (*) (Dictionary_2_t992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17589_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17590_gshared (Dictionary_2_t992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17590(__this, ___key, method) (( void (*) (Dictionary_2_t992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17590_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17591_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17591(__this, method) (( bool (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17591_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17592_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17592(__this, method) (( Object_t * (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17593_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17593(__this, method) (( bool (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17594_gshared (Dictionary_2_t992 * __this, KeyValuePair_2_t2321  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17594(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t992 *, KeyValuePair_2_t2321 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17594_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17595_gshared (Dictionary_2_t992 * __this, KeyValuePair_2_t2321  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17595(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t992 *, KeyValuePair_2_t2321 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17595_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17596_gshared (Dictionary_2_t992 * __this, KeyValuePair_2U5BU5D_t2497* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17596(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t992 *, KeyValuePair_2U5BU5D_t2497*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17596_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17597_gshared (Dictionary_2_t992 * __this, KeyValuePair_2_t2321  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17597(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t992 *, KeyValuePair_2_t2321 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17597_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17598_gshared (Dictionary_2_t992 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17598(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t992 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17598_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17599_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17599(__this, method) (( Object_t * (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17599_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17600_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17600(__this, method) (( Object_t* (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17600_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17601_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17601(__this, method) (( Object_t * (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17601_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17602_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17602(__this, method) (( int32_t (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_get_Count_m17602_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m17603_gshared (Dictionary_2_t992 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17603(__this, ___key, method) (( int32_t (*) (Dictionary_2_t992 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17604_gshared (Dictionary_2_t992 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17604(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t992 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m17604_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17605_gshared (Dictionary_2_t992 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17605(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t992 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17605_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17606_gshared (Dictionary_2_t992 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17606(__this, ___size, method) (( void (*) (Dictionary_2_t992 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17606_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17607_gshared (Dictionary_2_t992 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17607(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t992 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17607_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2321  Dictionary_2_make_pair_m17608_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17608(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2321  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m17608_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m17609_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17609(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m17609_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17610_gshared (Dictionary_2_t992 * __this, KeyValuePair_2U5BU5D_t2497* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17610(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t992 *, KeyValuePair_2U5BU5D_t2497*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17610_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m17611_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17611(__this, method) (( void (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_Resize_m17611_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17612_gshared (Dictionary_2_t992 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17612(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t992 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m17612_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m17613_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17613(__this, method) (( void (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_Clear_m17613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17614_gshared (Dictionary_2_t992 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17614(__this, ___key, method) (( bool (*) (Dictionary_2_t992 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17614_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17615_gshared (Dictionary_2_t992 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17615(__this, ___value, method) (( bool (*) (Dictionary_2_t992 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m17615_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17616_gshared (Dictionary_2_t992 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17616(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t992 *, SerializationInfo_t655 *, StreamingContext_t656 , const MethodInfo*))Dictionary_2_GetObjectData_m17616_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17617_gshared (Dictionary_2_t992 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17617(__this, ___sender, method) (( void (*) (Dictionary_2_t992 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17617_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17618_gshared (Dictionary_2_t992 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17618(__this, ___key, method) (( bool (*) (Dictionary_2_t992 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17618_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17619_gshared (Dictionary_2_t992 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17619(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t992 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17619_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2323 * Dictionary_2_get_Values_m17620_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17620(__this, method) (( ValueCollection_t2323 * (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_get_Values_m17620_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17621_gshared (Dictionary_2_t992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17621(__this, ___key, method) (( int32_t (*) (Dictionary_2_t992 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17621_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m17622_gshared (Dictionary_2_t992 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17622(__this, ___value, method) (( int32_t (*) (Dictionary_2_t992 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17622_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17623_gshared (Dictionary_2_t992 * __this, KeyValuePair_2_t2321  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17623(__this, ___pair, method) (( bool (*) (Dictionary_2_t992 *, KeyValuePair_2_t2321 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17623_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2325  Dictionary_2_GetEnumerator_m17624_gshared (Dictionary_2_t992 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17624(__this, method) (( Enumerator_t2325  (*) (Dictionary_2_t992 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17624_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1058  Dictionary_2_U3CCopyToU3Em__0_m17625_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17625(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1058  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17625_gshared)(__this /* static, unused */, ___key, ___value, method)
