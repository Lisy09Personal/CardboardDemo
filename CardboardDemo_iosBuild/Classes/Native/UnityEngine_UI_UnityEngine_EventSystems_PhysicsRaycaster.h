﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t31;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t176;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
#include "UnityEngine_UnityEngine_LayerMask.h"

// UnityEngine.EventSystems.PhysicsRaycaster
struct  PhysicsRaycaster_t175  : public BaseRaycaster_t160
{
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_t31 * ___m_EventCamera_3;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t35  ___m_EventMask_4;
};
struct PhysicsRaycaster_t175_StaticFields{
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.PhysicsRaycaster::<>f__am$cache2
	Comparison_1_t176 * ___U3CU3Ef__amU24cache2_5;
};
