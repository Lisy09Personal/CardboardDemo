#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.SecurityElement
struct SecurityElement_t1176;
// System.Collections.Stack
struct Stack_t639;

#include "mscorlib_Mono_Xml_SmallXmlParser.h"

// Mono.Xml.SecurityParser
struct  SecurityParser_t1174  : public SmallXmlParser_t1175
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1176 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1176 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t639 * ___stack_15;
};
