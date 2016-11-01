#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t6539;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t6530;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6546;

// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
 void TlsClientSettings__ctor_m45471 (TlsClientSettings_t6539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
 String_t* TlsClientSettings_get_TargetHost_m45472 (TlsClientSettings_t6539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
 void TlsClientSettings_set_TargetHost_m45473 (TlsClientSettings_t6539 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
 X509CertificateCollection_t6530 * TlsClientSettings_get_Certificates_m45474 (TlsClientSettings_t6539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void TlsClientSettings_set_Certificates_m45475 (TlsClientSettings_t6539 * __this, X509CertificateCollection_t6530 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
 X509Certificate_t6546 * TlsClientSettings_get_ClientCertificate_m45476 (TlsClientSettings_t6539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
 void TlsClientSettings_set_ClientCertificate_m45477 (TlsClientSettings_t6539 * __this, X509Certificate_t6546 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
 void TlsClientSettings_UpdateCertificateRSA_m45478 (TlsClientSettings_t6539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
