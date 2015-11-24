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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t538;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2482;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2483;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t403;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2213;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t652;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2217;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2220;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m16310_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1__ctor_m16310(__this, method) (( void (*) (List_1_t538 *, const MethodInfo*))List_1__ctor_m16310_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16311_gshared (List_1_t538 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16311(__this, ___collection, method) (( void (*) (List_1_t538 *, Object_t*, const MethodInfo*))List_1__ctor_m16311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3755_gshared (List_1_t538 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3755(__this, ___capacity, method) (( void (*) (List_1_t538 *, int32_t, const MethodInfo*))List_1__ctor_m3755_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m16312_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16312(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16312_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16313_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16313(__this, method) (( Object_t* (*) (List_1_t538 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16314_gshared (List_1_t538 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16314(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t538 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16314_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16315_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16315(__this, method) (( Object_t * (*) (List_1_t538 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16315_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16316_gshared (List_1_t538 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16316(__this, ___item, method) (( int32_t (*) (List_1_t538 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16316_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16317_gshared (List_1_t538 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16317(__this, ___item, method) (( bool (*) (List_1_t538 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16317_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16318_gshared (List_1_t538 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16318(__this, ___item, method) (( int32_t (*) (List_1_t538 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16318_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16319_gshared (List_1_t538 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16319(__this, ___index, ___item, method) (( void (*) (List_1_t538 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16319_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16320_gshared (List_1_t538 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16320(__this, ___item, method) (( void (*) (List_1_t538 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16320_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16321_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16321(__this, method) (( bool (*) (List_1_t538 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16321_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16322_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16322(__this, method) (( bool (*) (List_1_t538 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16322_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16323_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16323(__this, method) (( Object_t * (*) (List_1_t538 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16323_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16324_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16324(__this, method) (( bool (*) (List_1_t538 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16324_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16325_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16325(__this, method) (( bool (*) (List_1_t538 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16325_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16326_gshared (List_1_t538 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16326(__this, ___index, method) (( Object_t * (*) (List_1_t538 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16326_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16327_gshared (List_1_t538 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16327(__this, ___index, ___value, method) (( void (*) (List_1_t538 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16327_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m16328_gshared (List_1_t538 * __this, UILineInfo_t399  ___item, const MethodInfo* method);
#define List_1_Add_m16328(__this, ___item, method) (( void (*) (List_1_t538 *, UILineInfo_t399 , const MethodInfo*))List_1_Add_m16328_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16329_gshared (List_1_t538 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16329(__this, ___newCount, method) (( void (*) (List_1_t538 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16329_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16330_gshared (List_1_t538 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16330(__this, ___collection, method) (( void (*) (List_1_t538 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16330_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16331_gshared (List_1_t538 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16331(__this, ___enumerable, method) (( void (*) (List_1_t538 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16331_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16332_gshared (List_1_t538 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16332(__this, ___collection, method) (( void (*) (List_1_t538 *, Object_t*, const MethodInfo*))List_1_AddRange_m16332_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2213 * List_1_AsReadOnly_m16333_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16333(__this, method) (( ReadOnlyCollection_1_t2213 * (*) (List_1_t538 *, const MethodInfo*))List_1_AsReadOnly_m16333_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m16334_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_Clear_m16334(__this, method) (( void (*) (List_1_t538 *, const MethodInfo*))List_1_Clear_m16334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m16335_gshared (List_1_t538 * __this, UILineInfo_t399  ___item, const MethodInfo* method);
#define List_1_Contains_m16335(__this, ___item, method) (( bool (*) (List_1_t538 *, UILineInfo_t399 , const MethodInfo*))List_1_Contains_m16335_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16336_gshared (List_1_t538 * __this, UILineInfoU5BU5D_t652* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16336(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t538 *, UILineInfoU5BU5D_t652*, int32_t, const MethodInfo*))List_1_CopyTo_m16336_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t399  List_1_Find_m16337_gshared (List_1_t538 * __this, Predicate_1_t2217 * ___match, const MethodInfo* method);
#define List_1_Find_m16337(__this, ___match, method) (( UILineInfo_t399  (*) (List_1_t538 *, Predicate_1_t2217 *, const MethodInfo*))List_1_Find_m16337_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16338_gshared (Object_t * __this /* static, unused */, Predicate_1_t2217 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16338(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2217 *, const MethodInfo*))List_1_CheckMatch_m16338_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16339_gshared (List_1_t538 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2217 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16339(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t538 *, int32_t, int32_t, Predicate_1_t2217 *, const MethodInfo*))List_1_GetIndex_m16339_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2212  List_1_GetEnumerator_m16340_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16340(__this, method) (( Enumerator_t2212  (*) (List_1_t538 *, const MethodInfo*))List_1_GetEnumerator_m16340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16341_gshared (List_1_t538 * __this, UILineInfo_t399  ___item, const MethodInfo* method);
#define List_1_IndexOf_m16341(__this, ___item, method) (( int32_t (*) (List_1_t538 *, UILineInfo_t399 , const MethodInfo*))List_1_IndexOf_m16341_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16342_gshared (List_1_t538 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16342(__this, ___start, ___delta, method) (( void (*) (List_1_t538 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16342_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16343_gshared (List_1_t538 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16343(__this, ___index, method) (( void (*) (List_1_t538 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16344_gshared (List_1_t538 * __this, int32_t ___index, UILineInfo_t399  ___item, const MethodInfo* method);
#define List_1_Insert_m16344(__this, ___index, ___item, method) (( void (*) (List_1_t538 *, int32_t, UILineInfo_t399 , const MethodInfo*))List_1_Insert_m16344_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16345_gshared (List_1_t538 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16345(__this, ___collection, method) (( void (*) (List_1_t538 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16345_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m16346_gshared (List_1_t538 * __this, UILineInfo_t399  ___item, const MethodInfo* method);
#define List_1_Remove_m16346(__this, ___item, method) (( bool (*) (List_1_t538 *, UILineInfo_t399 , const MethodInfo*))List_1_Remove_m16346_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16347_gshared (List_1_t538 * __this, Predicate_1_t2217 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16347(__this, ___match, method) (( int32_t (*) (List_1_t538 *, Predicate_1_t2217 *, const MethodInfo*))List_1_RemoveAll_m16347_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16348_gshared (List_1_t538 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16348(__this, ___index, method) (( void (*) (List_1_t538 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16348_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m16349_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_Reverse_m16349(__this, method) (( void (*) (List_1_t538 *, const MethodInfo*))List_1_Reverse_m16349_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m16350_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_Sort_m16350(__this, method) (( void (*) (List_1_t538 *, const MethodInfo*))List_1_Sort_m16350_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16351_gshared (List_1_t538 * __this, Comparison_1_t2220 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16351(__this, ___comparison, method) (( void (*) (List_1_t538 *, Comparison_1_t2220 *, const MethodInfo*))List_1_Sort_m16351_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t652* List_1_ToArray_m16352_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_ToArray_m16352(__this, method) (( UILineInfoU5BU5D_t652* (*) (List_1_t538 *, const MethodInfo*))List_1_ToArray_m16352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m16353_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16353(__this, method) (( void (*) (List_1_t538 *, const MethodInfo*))List_1_TrimExcess_m16353_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16354_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16354(__this, method) (( int32_t (*) (List_1_t538 *, const MethodInfo*))List_1_get_Capacity_m16354_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16355_gshared (List_1_t538 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16355(__this, ___value, method) (( void (*) (List_1_t538 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16355_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m16356_gshared (List_1_t538 * __this, const MethodInfo* method);
#define List_1_get_Count_m16356(__this, method) (( int32_t (*) (List_1_t538 *, const MethodInfo*))List_1_get_Count_m16356_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t399  List_1_get_Item_m16357_gshared (List_1_t538 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16357(__this, ___index, method) (( UILineInfo_t399  (*) (List_1_t538 *, int32_t, const MethodInfo*))List_1_get_Item_m16357_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16358_gshared (List_1_t538 * __this, int32_t ___index, UILineInfo_t399  ___value, const MethodInfo* method);
#define List_1_set_Item_m16358(__this, ___index, ___value, method) (( void (*) (List_1_t538 *, int32_t, UILineInfo_t399 , const MethodInfo*))List_1_set_Item_m16358_gshared)(__this, ___index, ___value, method)
