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

// BaseCardboardDevice/VREventCallback
struct VREventCallback_t65;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void BaseCardboardDevice/VREventCallback::.ctor(System.Object,System.IntPtr)
extern "C" void VREventCallback__ctor_m254 (VREventCallback_t65 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice/VREventCallback::Invoke(System.Int32)
extern "C" void VREventCallback_Invoke_m255 (VREventCallback_t65 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VREventCallback_t65(Il2CppObject* delegate, int32_t ___eventID);
// System.IAsyncResult BaseCardboardDevice/VREventCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * VREventCallback_BeginInvoke_m256 (VREventCallback_t65 * __this, int32_t ___eventID, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice/VREventCallback::EndInvoke(System.IAsyncResult)
extern "C" void VREventCallback_EndInvoke_m257 (VREventCallback_t65 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
