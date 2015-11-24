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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t949;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t758;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t950;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t850;
// System.Security.Cryptography.Oid
struct Oid_t951;
// System.Byte[]
struct ByteU5BU5D_t81;
// System.Security.Cryptography.DSA
struct DSA_t759;
// System.Security.Cryptography.RSA
struct RSA_t752;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5115 (PublicKey_t949 * __this, X509Certificate_t758 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t950 * PublicKey_get_EncodedKeyValue_m5116 (PublicKey_t949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t950 * PublicKey_get_EncodedParameters_m5117 (PublicKey_t949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t850 * PublicKey_get_Key_m5118 (PublicKey_t949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t951 * PublicKey_get_Oid_m5119 (PublicKey_t949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t81* PublicKey_GetUnsignedBigInteger_m5120 (Object_t * __this /* static, unused */, ByteU5BU5D_t81* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t759 * PublicKey_DecodeDSA_m5121 (Object_t * __this /* static, unused */, ByteU5BU5D_t81* ___rawPublicKey, ByteU5BU5D_t81* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t752 * PublicKey_DecodeRSA_m5122 (Object_t * __this /* static, unused */, ByteU5BU5D_t81* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
