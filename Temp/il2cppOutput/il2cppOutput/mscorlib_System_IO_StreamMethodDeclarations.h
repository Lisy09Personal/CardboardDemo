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

// System.IO.Stream
struct Stream_t812;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.Byte[]
struct ByteU5BU5D_t81;
// System.AsyncCallback
struct AsyncCallback_t10;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.Stream::.ctor()
extern "C" void Stream__ctor_m4890 (Stream_t812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.cctor()
extern "C" void Stream__cctor_m7966 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose()
extern "C" void Stream_Dispose_m7967 (Stream_t812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" void Stream_Dispose_m4893 (Stream_t812 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Close()
extern "C" void Stream_Close_m4892 (Stream_t812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::ReadByte()
extern "C" int32_t Stream_ReadByte_m7968 (Stream_t812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern "C" void Stream_WriteByte_m7969 (Stream_t812 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginRead_m7970 (Stream_t812 * __this, ByteU5BU5D_t81* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t10 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginWrite_m7971 (Stream_t812 * __this, ByteU5BU5D_t81* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t10 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern "C" int32_t Stream_EndRead_m7972 (Stream_t812 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern "C" void Stream_EndWrite_m7973 (Stream_t812 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
