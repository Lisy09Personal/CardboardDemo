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

// UnityEngine.Shader
struct Shader_t92;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" Shader_t92 * Shader_Find_m404 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.String,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m2883 (Object_t * __this /* static, unused */, String_t* ___propertyName, Color_t12  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.Int32,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m2884 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t12  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalColor(System.Int32,UnityEngine.Color&)
extern "C" void Shader_INTERNAL_CALL_SetGlobalColor_m2885 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t12 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
extern "C" void Shader_SetGlobalVector_m480 (Object_t * __this /* static, unused */, String_t* ___propertyName, Vector4_t38  ___vec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.String,System.Single)
extern "C" void Shader_SetGlobalFloat_m481 (Object_t * __this /* static, unused */, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.Int32,System.Single)
extern "C" void Shader_SetGlobalFloat_m2886 (Object_t * __this /* static, unused */, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalMatrix(System.String,UnityEngine.Matrix4x4)
extern "C" void Shader_SetGlobalMatrix_m479 (Object_t * __this /* static, unused */, String_t* ___propertyName, Matrix4x4_t37  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C" void Shader_SetGlobalMatrix_m2887 (Object_t * __this /* static, unused */, int32_t ___nameID, Matrix4x4_t37  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalMatrix(System.Int32,UnityEngine.Matrix4x4&)
extern "C" void Shader_INTERNAL_CALL_SetGlobalMatrix_m2888 (Object_t * __this /* static, unused */, int32_t ___nameID, Matrix4x4_t37 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m2889 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
