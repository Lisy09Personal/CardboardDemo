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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2252;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1943;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t655;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2488;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2489;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t871;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2257;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m16867_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16867(__this, method) (( void (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2__ctor_m16867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16869_gshared (Dictionary_2_t2252 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16869(__this, ___comparer, method) (( void (*) (Dictionary_2_t2252 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16869_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16871_gshared (Dictionary_2_t2252 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16871(__this, ___capacity, method) (( void (*) (Dictionary_2_t2252 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16871_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16873_gshared (Dictionary_2_t2252 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16873(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2252 *, SerializationInfo_t655 *, StreamingContext_t656 , const MethodInfo*))Dictionary_2__ctor_m16873_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16875_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16875(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2252 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16875_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16877_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16877(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2252 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16877_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16879_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16879(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2252 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16879_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16881_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16881(__this, ___key, method) (( bool (*) (Dictionary_2_t2252 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16881_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16883_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16883(__this, ___key, method) (( void (*) (Dictionary_2_t2252 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16883_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16885_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16885(__this, method) (( bool (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16885_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16887_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16887(__this, method) (( Object_t * (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16887_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16889_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16889(__this, method) (( bool (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16889_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16891_gshared (Dictionary_2_t2252 * __this, KeyValuePair_2_t2254  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16891(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2252 *, KeyValuePair_2_t2254 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16891_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16893_gshared (Dictionary_2_t2252 * __this, KeyValuePair_2_t2254  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16893(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2252 *, KeyValuePair_2_t2254 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16893_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16895_gshared (Dictionary_2_t2252 * __this, KeyValuePair_2U5BU5D_t2488* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16895(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2252 *, KeyValuePair_2U5BU5D_t2488*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16895_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16897_gshared (Dictionary_2_t2252 * __this, KeyValuePair_2_t2254  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16897(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2252 *, KeyValuePair_2_t2254 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16897_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16899_gshared (Dictionary_2_t2252 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16899(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2252 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16899_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16901_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16901(__this, method) (( Object_t * (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16901_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16903_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16903(__this, method) (( Object_t* (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16903_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16905_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16905(__this, method) (( Object_t * (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16905_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16907_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16907(__this, method) (( int32_t (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_get_Count_m16907_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m16909_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16909(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2252 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16909_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16911_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16911(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2252 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m16911_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16913_gshared (Dictionary_2_t2252 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16913(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2252 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16913_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16915_gshared (Dictionary_2_t2252 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16915(__this, ___size, method) (( void (*) (Dictionary_2_t2252 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16915_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16917_gshared (Dictionary_2_t2252 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16917(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2252 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16917_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2254  Dictionary_2_make_pair_m16919_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16919(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2254  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m16919_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m16921_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16921(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m16921_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16923_gshared (Dictionary_2_t2252 * __this, KeyValuePair_2U5BU5D_t2488* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16923(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2252 *, KeyValuePair_2U5BU5D_t2488*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16923_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m16925_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16925(__this, method) (( void (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_Resize_m16925_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16927_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16927(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2252 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m16927_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m16929_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16929(__this, method) (( void (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_Clear_m16929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16931_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16931(__this, ___key, method) (( bool (*) (Dictionary_2_t2252 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16931_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16933_gshared (Dictionary_2_t2252 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16933(__this, ___value, method) (( bool (*) (Dictionary_2_t2252 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m16933_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16935_gshared (Dictionary_2_t2252 * __this, SerializationInfo_t655 * ___info, StreamingContext_t656  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16935(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2252 *, SerializationInfo_t655 *, StreamingContext_t656 , const MethodInfo*))Dictionary_2_GetObjectData_m16935_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16937_gshared (Dictionary_2_t2252 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16937(__this, ___sender, method) (( void (*) (Dictionary_2_t2252 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16937_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16939_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16939(__this, ___key, method) (( bool (*) (Dictionary_2_t2252 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16939_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16941_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16941(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2252 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16941_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2257 * Dictionary_2_get_Values_m16943_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16943(__this, method) (( ValueCollection_t2257 * (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_get_Values_m16943_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16945_gshared (Dictionary_2_t2252 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16945(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2252 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16945_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m16947_gshared (Dictionary_2_t2252 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16947(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2252 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16947_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16949_gshared (Dictionary_2_t2252 * __this, KeyValuePair_2_t2254  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16949(__this, ___pair, method) (( bool (*) (Dictionary_2_t2252 *, KeyValuePair_2_t2254 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16949_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2259  Dictionary_2_GetEnumerator_m16951_gshared (Dictionary_2_t2252 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16951(__this, method) (( Enumerator_t2259  (*) (Dictionary_2_t2252 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16951_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1058  Dictionary_2_U3CCopyToU3Em__0_m16953_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16953(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1058  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16953_gshared)(__this /* static, unused */, ___key, ___value, method)
