#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t6540;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t6523;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
 void SecurityParameters__ctor_m45371 (SecurityParameters_t6540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
 CipherSuite_t6523 * SecurityParameters_get_Cipher_m45372 (SecurityParameters_t6540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
 void SecurityParameters_set_Cipher_m45373 (SecurityParameters_t6540 * __this, CipherSuite_t6523 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
 ByteU5BU5D_t1033* SecurityParameters_get_ClientWriteMAC_m45374 (SecurityParameters_t6540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
 void SecurityParameters_set_ClientWriteMAC_m45375 (SecurityParameters_t6540 * __this, ByteU5BU5D_t1033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
 ByteU5BU5D_t1033* SecurityParameters_get_ServerWriteMAC_m45376 (SecurityParameters_t6540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
 void SecurityParameters_set_ServerWriteMAC_m45377 (SecurityParameters_t6540 * __this, ByteU5BU5D_t1033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
 void SecurityParameters_Clear_m45378 (SecurityParameters_t6540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
