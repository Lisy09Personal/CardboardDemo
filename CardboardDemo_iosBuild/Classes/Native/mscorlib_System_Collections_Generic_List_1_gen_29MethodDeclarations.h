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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t537;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2479;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2480;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2481;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2204;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t651;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2208;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2211;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m16166_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1__ctor_m16166(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1__ctor_m16166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16167_gshared (List_1_t537 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16167(__this, ___collection, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1__ctor_m16167_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3754_gshared (List_1_t537 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3754(__this, ___capacity, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1__ctor_m3754_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m16168_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16168(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16168_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16169_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16169(__this, method) (( Object_t* (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16170_gshared (List_1_t537 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16170(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t537 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16170_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16171_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16171(__this, method) (( Object_t * (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16171_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16172_gshared (List_1_t537 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16172(__this, ___item, method) (( int32_t (*) (List_1_t537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16172_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16173_gshared (List_1_t537 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16173(__this, ___item, method) (( bool (*) (List_1_t537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16173_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16174_gshared (List_1_t537 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16174(__this, ___item, method) (( int32_t (*) (List_1_t537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16174_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16175_gshared (List_1_t537 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16175(__this, ___index, ___item, method) (( void (*) (List_1_t537 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16175_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16176_gshared (List_1_t537 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16176(__this, ___item, method) (( void (*) (List_1_t537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16176_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16177_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16177(__this, method) (( bool (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16177_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16178_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16178(__this, method) (( bool (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16178_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16179_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16179(__this, method) (( Object_t * (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16179_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16180_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16180(__this, method) (( bool (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16180_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16181_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16181(__this, method) (( bool (*) (List_1_t537 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16181_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16182_gshared (List_1_t537 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16182(__this, ___index, method) (( Object_t * (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16182_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16183_gshared (List_1_t537 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16183(__this, ___index, ___value, method) (( void (*) (List_1_t537 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16183_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m16184_gshared (List_1_t537 * __this, UICharInfo_t401  ___item, const MethodInfo* method);
#define List_1_Add_m16184(__this, ___item, method) (( void (*) (List_1_t537 *, UICharInfo_t401 , const MethodInfo*))List_1_Add_m16184_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16185_gshared (List_1_t537 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16185(__this, ___newCount, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16185_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16186_gshared (List_1_t537 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16186(__this, ___collection, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16186_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16187_gshared (List_1_t537 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16187(__this, ___enumerable, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16187_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16188_gshared (List_1_t537 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16188(__this, ___collection, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1_AddRange_m16188_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2204 * List_1_AsReadOnly_m16189_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16189(__this, method) (( ReadOnlyCollection_1_t2204 * (*) (List_1_t537 *, const MethodInfo*))List_1_AsReadOnly_m16189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m16190_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_Clear_m16190(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1_Clear_m16190_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m16191_gshared (List_1_t537 * __this, UICharInfo_t401  ___item, const MethodInfo* method);
#define List_1_Contains_m16191(__this, ___item, method) (( bool (*) (List_1_t537 *, UICharInfo_t401 , const MethodInfo*))List_1_Contains_m16191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16192_gshared (List_1_t537 * __this, UICharInfoU5BU5D_t651* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16192(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t537 *, UICharInfoU5BU5D_t651*, int32_t, const MethodInfo*))List_1_CopyTo_m16192_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t401  List_1_Find_m16193_gshared (List_1_t537 * __this, Predicate_1_t2208 * ___match, const MethodInfo* method);
#define List_1_Find_m16193(__this, ___match, method) (( UICharInfo_t401  (*) (List_1_t537 *, Predicate_1_t2208 *, const MethodInfo*))List_1_Find_m16193_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16194_gshared (Object_t * __this /* static, unused */, Predicate_1_t2208 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16194(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2208 *, const MethodInfo*))List_1_CheckMatch_m16194_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16195_gshared (List_1_t537 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2208 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16195(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t537 *, int32_t, int32_t, Predicate_1_t2208 *, const MethodInfo*))List_1_GetIndex_m16195_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2203  List_1_GetEnumerator_m16196_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16196(__this, method) (( Enumerator_t2203  (*) (List_1_t537 *, const MethodInfo*))List_1_GetEnumerator_m16196_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16197_gshared (List_1_t537 * __this, UICharInfo_t401  ___item, const MethodInfo* method);
#define List_1_IndexOf_m16197(__this, ___item, method) (( int32_t (*) (List_1_t537 *, UICharInfo_t401 , const MethodInfo*))List_1_IndexOf_m16197_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16198_gshared (List_1_t537 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16198(__this, ___start, ___delta, method) (( void (*) (List_1_t537 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16198_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16199_gshared (List_1_t537 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16199(__this, ___index, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16199_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16200_gshared (List_1_t537 * __this, int32_t ___index, UICharInfo_t401  ___item, const MethodInfo* method);
#define List_1_Insert_m16200(__this, ___index, ___item, method) (( void (*) (List_1_t537 *, int32_t, UICharInfo_t401 , const MethodInfo*))List_1_Insert_m16200_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16201_gshared (List_1_t537 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16201(__this, ___collection, method) (( void (*) (List_1_t537 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16201_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m16202_gshared (List_1_t537 * __this, UICharInfo_t401  ___item, const MethodInfo* method);
#define List_1_Remove_m16202(__this, ___item, method) (( bool (*) (List_1_t537 *, UICharInfo_t401 , const MethodInfo*))List_1_Remove_m16202_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16203_gshared (List_1_t537 * __this, Predicate_1_t2208 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16203(__this, ___match, method) (( int32_t (*) (List_1_t537 *, Predicate_1_t2208 *, const MethodInfo*))List_1_RemoveAll_m16203_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16204_gshared (List_1_t537 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16204(__this, ___index, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16204_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m16205_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_Reverse_m16205(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1_Reverse_m16205_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m16206_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_Sort_m16206(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1_Sort_m16206_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16207_gshared (List_1_t537 * __this, Comparison_1_t2211 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16207(__this, ___comparison, method) (( void (*) (List_1_t537 *, Comparison_1_t2211 *, const MethodInfo*))List_1_Sort_m16207_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t651* List_1_ToArray_m16208_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_ToArray_m16208(__this, method) (( UICharInfoU5BU5D_t651* (*) (List_1_t537 *, const MethodInfo*))List_1_ToArray_m16208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m16209_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16209(__this, method) (( void (*) (List_1_t537 *, const MethodInfo*))List_1_TrimExcess_m16209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16210_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16210(__this, method) (( int32_t (*) (List_1_t537 *, const MethodInfo*))List_1_get_Capacity_m16210_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16211_gshared (List_1_t537 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16211(__this, ___value, method) (( void (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16211_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m16212_gshared (List_1_t537 * __this, const MethodInfo* method);
#define List_1_get_Count_m16212(__this, method) (( int32_t (*) (List_1_t537 *, const MethodInfo*))List_1_get_Count_m16212_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t401  List_1_get_Item_m16213_gshared (List_1_t537 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16213(__this, ___index, method) (( UICharInfo_t401  (*) (List_1_t537 *, int32_t, const MethodInfo*))List_1_get_Item_m16213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16214_gshared (List_1_t537 * __this, int32_t ___index, UICharInfo_t401  ___value, const MethodInfo* method);
#define List_1_set_Item_m16214(__this, ___index, ___value, method) (( void (*) (List_1_t537 *, int32_t, UICharInfo_t401 , const MethodInfo*))List_1_set_Item_m16214_gshared)(__this, ___index, ___value, method)
