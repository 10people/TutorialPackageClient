#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t6545;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6546;
// System.Int32[]
struct Int32U5BU5D_t116;

// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool HttpsClientStream_RaiseServerCertificateValidation_m45311 (HttpsClientStream_t6545 * __this, X509Certificate_t6546 * ___certificate, Int32U5BU5D_t116* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
