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

// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t1177;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t95;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::.ctor()
extern "C" void AttrListImpl__ctor_m7222 (AttrListImpl_t1177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser/AttrListImpl::get_Length()
extern "C" int32_t AttrListImpl_get_Length_m7223 (AttrListImpl_t1177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetName(System.Int32)
extern "C" String_t* AttrListImpl_GetName_m7224 (AttrListImpl_t1177 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetValue(System.Int32)
extern "C" String_t* AttrListImpl_GetValue_m7225 (AttrListImpl_t1177 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetValue(System.String)
extern "C" String_t* AttrListImpl_GetValue_m7226 (AttrListImpl_t1177 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.SmallXmlParser/AttrListImpl::get_Names()
extern "C" StringU5BU5D_t95* AttrListImpl_get_Names_m7227 (AttrListImpl_t1177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.SmallXmlParser/AttrListImpl::get_Values()
extern "C" StringU5BU5D_t95* AttrListImpl_get_Values_m7228 (AttrListImpl_t1177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::Clear()
extern "C" void AttrListImpl_Clear_m7229 (AttrListImpl_t1177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::Add(System.String,System.String)
extern "C" void AttrListImpl_Add_m7230 (AttrListImpl_t1177 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
