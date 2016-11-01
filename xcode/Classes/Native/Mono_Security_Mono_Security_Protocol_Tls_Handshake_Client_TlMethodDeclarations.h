#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t6568;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6546;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificate__ctor_m45536 (TlsClientCertificate_t6568 * __this, Context_t6522 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
 X509Certificate_t6546 * TlsClientCertificate_get_ClientCertificate_m45537 (TlsClientCertificate_t6568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
 void TlsClientCertificate_Update_m45538 (TlsClientCertificate_t6568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
 void TlsClientCertificate_GetClientCertificate_m45539 (TlsClientCertificate_t6568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
 void TlsClientCertificate_SendCertificates_m45540 (TlsClientCertificate_t6568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
 void TlsClientCertificate_ProcessAsSsl3_m45541 (TlsClientCertificate_t6568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
 void TlsClientCertificate_ProcessAsTls1_m45542 (TlsClientCertificate_t6568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
 X509Certificate_t6546 * TlsClientCertificate_FindParentCertificate_m45543 (TlsClientCertificate_t6568 * __this, X509Certificate_t6546 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
