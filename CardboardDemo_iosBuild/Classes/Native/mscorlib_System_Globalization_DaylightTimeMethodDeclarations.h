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

// System.Globalization.DaylightTime
struct DaylightTime_t1223;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C" void DaylightTime__ctor_m7725 (DaylightTime_t1223 * __this, DateTime_t548  ___start, DateTime_t548  ___end, TimeSpan_t969  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C" DateTime_t548  DaylightTime_get_Start_m7726 (DaylightTime_t1223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C" DateTime_t548  DaylightTime_get_End_m7727 (DaylightTime_t1223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C" TimeSpan_t969  DaylightTime_get_Delta_m7728 (DaylightTime_t1223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
