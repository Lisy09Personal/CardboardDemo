﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Application/LogCallback
struct LogCallback_t486;

#include "mscorlib_System_Object.h"

// UnityEngine.Application
struct  Application_t487  : public Object_t
{
};
struct Application_t487_StaticFields{
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t486 * ___s_LogCallbackHandler_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t486 * ___s_LogCallbackHandlerThreaded_1;
};
