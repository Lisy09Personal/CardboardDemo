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

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t260;
// UnityEngine.Component
struct Component_t134;
// UnityEngine.Transform
struct Transform_t40;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t259;
// UnityEngine.UI.IClippable
struct IClippable_t355;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t267;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C" void MaskUtilities__ctor_m1407 (MaskUtilities_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m1408 (Object_t * __this /* static, unused */, Component_t134 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m1409 (Object_t * __this /* static, unused */, Component_t134 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t40 * MaskUtilities_FindRootSortOverrideCanvas_m1410 (Object_t * __this /* static, unused */, Transform_t40 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m1411 (Object_t * __this /* static, unused */, Transform_t40 * ___transform, Transform_t40 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t259 * MaskUtilities_GetRectMaskForClippable_m1412 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m1413 (Object_t * __this /* static, unused */, RectMask2D_t259 * ___clipper, List_1_t267 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
