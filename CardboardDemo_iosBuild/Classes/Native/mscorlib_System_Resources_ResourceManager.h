﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t797;
// System.Type
struct Type_t;

#include "mscorlib_System_Object.h"

// System.Resources.ResourceManager
struct  ResourceManager_t1355  : public Object_t
{
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;
};
struct ResourceManager_t1355_StaticFields{
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t797 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t797 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;
};
