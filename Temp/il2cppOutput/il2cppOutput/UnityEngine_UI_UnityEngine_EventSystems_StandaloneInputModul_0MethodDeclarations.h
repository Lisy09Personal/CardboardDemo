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

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t172;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t166;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
extern "C" void StandaloneInputModule__ctor_m841 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
extern "C" int32_t StandaloneInputModule_get_inputMode_m842 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
extern "C" bool StandaloneInputModule_get_allowActivationOnMobileDevice_m843 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
extern "C" void StandaloneInputModule_set_allowActivationOnMobileDevice_m844 (StandaloneInputModule_t172 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_forceModuleActive()
extern "C" bool StandaloneInputModule_get_forceModuleActive_m845 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_forceModuleActive(System.Boolean)
extern "C" void StandaloneInputModule_set_forceModuleActive_m846 (StandaloneInputModule_t172 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
extern "C" float StandaloneInputModule_get_inputActionsPerSecond_m847 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
extern "C" void StandaloneInputModule_set_inputActionsPerSecond_m848 (StandaloneInputModule_t172 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_repeatDelay()
extern "C" float StandaloneInputModule_get_repeatDelay_m849 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_repeatDelay(System.Single)
extern "C" void StandaloneInputModule_set_repeatDelay_m850 (StandaloneInputModule_t172 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
extern "C" String_t* StandaloneInputModule_get_horizontalAxis_m851 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
extern "C" void StandaloneInputModule_set_horizontalAxis_m852 (StandaloneInputModule_t172 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
extern "C" String_t* StandaloneInputModule_get_verticalAxis_m853 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
extern "C" void StandaloneInputModule_set_verticalAxis_m854 (StandaloneInputModule_t172 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
extern "C" String_t* StandaloneInputModule_get_submitButton_m855 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
extern "C" void StandaloneInputModule_set_submitButton_m856 (StandaloneInputModule_t172 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
extern "C" String_t* StandaloneInputModule_get_cancelButton_m857 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
extern "C" void StandaloneInputModule_set_cancelButton_m858 (StandaloneInputModule_t172 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
extern "C" void StandaloneInputModule_UpdateModule_m859 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
extern "C" bool StandaloneInputModule_IsModuleSupported_m860 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
extern "C" bool StandaloneInputModule_ShouldActivateModule_m861 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
extern "C" void StandaloneInputModule_ActivateModule_m862 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
extern "C" void StandaloneInputModule_DeactivateModule_m863 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
extern "C" void StandaloneInputModule_Process_m864 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendSubmitEventToSelectedObject_m865 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
extern "C" Vector2_t16  StandaloneInputModule_GetRawMoveVector_m866 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendMoveEventToSelectedObject_m867 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
extern "C" void StandaloneInputModule_ProcessMouseEvent_m868 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent(System.Int32)
extern "C" void StandaloneInputModule_ProcessMouseEvent_m869 (StandaloneInputModule_t172 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendUpdateEventToSelectedObject_m870 (StandaloneInputModule_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C" void StandaloneInputModule_ProcessMousePress_m871 (StandaloneInputModule_t172 * __this, MouseButtonEventData_t166 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
