#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager/ChainValidationHelper
struct ChainValidationHelper_t7211;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t6556;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t6490;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t6623;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t6622;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t6494;
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.ServicePointManager/ChainValidationHelper::.ctor(System.Object)
 void ChainValidationHelper__ctor_m50176 (ChainValidationHelper_t7211 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::.cctor()
 void ChainValidationHelper__cctor_m50177 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePointManager/ChainValidationHelper::get_Host()
 String_t* ChainValidationHelper_get_Host_m50178 (ChainValidationHelper_t7211 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult System.Net.ServicePointManager/ChainValidationHelper::ValidateChain(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t6556 * ChainValidationHelper_ValidateChain_m50179 (ChainValidationHelper_t7211 * __this, X509CertificateCollection_t6490 * ___certs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/ChainValidationHelper::GetStatusFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
 int32_t ChainValidationHelper_GetStatusFromChain_m50180 (Object_t * __this/* static, unused */, X509Chain_t6623 * ___chain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors System.Net.ServicePointManager/ChainValidationHelper::GetErrorsFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
 int32_t ChainValidationHelper_GetErrorsFromChain_m50181 (Object_t * __this/* static, unused */, X509Chain_t6623 * ___chain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckCertificateUsage(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool ChainValidationHelper_CheckCertificateUsage_m50182 (Object_t * __this/* static, unused */, X509Certificate2_t6622 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckServerIdentity(Mono.Security.X509.X509Certificate,System.String)
 bool ChainValidationHelper_CheckServerIdentity_m50183 (Object_t * __this/* static, unused */, X509Certificate_t6494 * ___cert, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckDomainName(System.String,System.String)
 bool ChainValidationHelper_CheckDomainName_m50184 (Object_t * __this/* static, unused */, String_t* ___subjectName, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::Match(System.String,System.String)
 bool ChainValidationHelper_Match_m50185 (Object_t * __this/* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
