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

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct WellKnownClientTypeEntry_t1491;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.WellKnownClientTypeEntry::.ctor(System.String,System.String,System.String)
extern "C" void WellKnownClientTypeEntry__ctor_m9210 (WellKnownClientTypeEntry_t1491 * __this, String_t* ___typeName, String_t* ___assemblyName, String_t* ___objectUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* WellKnownClientTypeEntry_get_ApplicationUrl_m9211 (WellKnownClientTypeEntry_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::get_ObjectType()
extern "C" Type_t * WellKnownClientTypeEntry_get_ObjectType_m9212 (WellKnownClientTypeEntry_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::get_ObjectUrl()
extern "C" String_t* WellKnownClientTypeEntry_get_ObjectUrl_m9213 (WellKnownClientTypeEntry_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::ToString()
extern "C" String_t* WellKnownClientTypeEntry_ToString_m9214 (WellKnownClientTypeEntry_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
