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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2300;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1943;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t655;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2493;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2494;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t871;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2305;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m17358_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17358(__this, method) (( void (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2__ctor_m17358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17359_gshared (Dictionary_2_t2300 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17359(__this, ___comparer, method) (( void (*) (Dictionary_2_t2300 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17359_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17361_gshared (Dictionary_2_t2300 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17361(__this, ___capacity, method) (( void (*) (Dictionary_2_t2300 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17361_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17363_gshared (Dictionary_2_t2300 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17363(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2300 *, SerializationInfo_t655 *, StreamingContext_t656 , const MethodInfo*))Dictionary_2__ctor_m17363_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17365_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17365(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2300 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17365_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17367_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17367(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2300 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17367_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17369_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17369(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2300 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17369_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17371_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17371(__this, ___key, method) (( bool (*) (Dictionary_2_t2300 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17371_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17373_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17373(__this, ___key, method) (( void (*) (Dictionary_2_t2300 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17373_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17375_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17375(__this, method) (( bool (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17375_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17377_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17377(__this, method) (( Object_t * (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17377_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17379_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17379(__this, method) (( bool (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17379_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17381_gshared (Dictionary_2_t2300 * __this, KeyValuePair_2_t2302  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17381(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2300 *, KeyValuePair_2_t2302 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17381_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17383_gshared (Dictionary_2_t2300 * __this, KeyValuePair_2_t2302  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17383(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2300 *, KeyValuePair_2_t2302 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17383_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17385_gshared (Dictionary_2_t2300 * __this, KeyValuePair_2U5BU5D_t2493* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17385(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2300 *, KeyValuePair_2U5BU5D_t2493*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17385_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17387_gshared (Dictionary_2_t2300 * __this, KeyValuePair_2_t2302  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17387(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2300 *, KeyValuePair_2_t2302 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17387_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17389_gshared (Dictionary_2_t2300 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17389(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2300 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17389_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17391_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17391(__this, method) (( Object_t * (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17391_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17393_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17393(__this, method) (( Object_t* (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17393_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17395_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17395(__this, method) (( Object_t * (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17395_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17397_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17397(__this, method) (( int32_t (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_get_Count_m17397_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m17399_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17399(__this, ___key, method) (( bool (*) (Dictionary_2_t2300 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17399_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17401_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17401(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2300 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m17401_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17403_gshared (Dictionary_2_t2300 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17403(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2300 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17403_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17405_gshared (Dictionary_2_t2300 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17405(__this, ___size, method) (( void (*) (Dictionary_2_t2300 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17405_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17407_gshared (Dictionary_2_t2300 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17407(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2300 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17407_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2302  Dictionary_2_make_pair_m17409_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17409(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2302  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m17409_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m17411_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17411(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m17411_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17413_gshared (Dictionary_2_t2300 * __this, KeyValuePair_2U5BU5D_t2493* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17413(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2300 *, KeyValuePair_2U5BU5D_t2493*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17413_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m17415_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17415(__this, method) (( void (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_Resize_m17415_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17417_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17417(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2300 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m17417_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m17419_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17419(__this, method) (( void (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_Clear_m17419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17421_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17421(__this, ___key, method) (( bool (*) (Dictionary_2_t2300 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17421_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17423_gshared (Dictionary_2_t2300 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17423(__this, ___value, method) (( bool (*) (Dictionary_2_t2300 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m17423_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17425_gshared (Dictionary_2_t2300 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17425(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2300 *, SerializationInfo_t655 *, StreamingContext_t656 , const MethodInfo*))Dictionary_2_GetObjectData_m17425_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17427_gshared (Dictionary_2_t2300 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17427(__this, ___sender, method) (( void (*) (Dictionary_2_t2300 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17427_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17429_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17429(__this, ___key, method) (( bool (*) (Dictionary_2_t2300 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17429_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17431_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17431(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2300 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m17431_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2305 * Dictionary_2_get_Values_m17433_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17433(__this, method) (( ValueCollection_t2305 * (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_get_Values_m17433_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17435_gshared (Dictionary_2_t2300 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17435(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2300 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17435_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m17437_gshared (Dictionary_2_t2300 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17437(__this, ___value, method) (( bool (*) (Dictionary_2_t2300 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17437_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17439_gshared (Dictionary_2_t2300 * __this, KeyValuePair_2_t2302  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17439(__this, ___pair, method) (( bool (*) (Dictionary_2_t2300 *, KeyValuePair_2_t2302 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17439_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2307  Dictionary_2_GetEnumerator_m17441_gshared (Dictionary_2_t2300 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17441(__this, method) (( Enumerator_t2307  (*) (Dictionary_2_t2300 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17441_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1058  Dictionary_2_U3CCopyToU3Em__0_m17443_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17443(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1058  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17443_gshared)(__this /* static, unused */, ___key, ___value, method)
