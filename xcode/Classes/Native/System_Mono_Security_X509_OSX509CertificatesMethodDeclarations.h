#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.OSX509Certificates
struct OSX509Certificates_t7224;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IntPtr[]
struct IntPtrU5BU5D_t7225;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t6490;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Security.X509.OSX509Certificates/SecTrustResult
#include "System_Mono_Security_X509_OSX509Certificates_SecTrustResult.h"

// System.Void Mono.Security.X509.OSX509Certificates::.cctor()
 void OSX509Certificates__cctor_m50391 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
 IntPtr_t24 OSX509Certificates_SecCertificateCreateWithData_m50392 (Object_t * __this/* static, unused */, IntPtr_t24 ___allocator, IntPtr_t24 ___nsdataRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustCreateWithCertificates(System.IntPtr,System.IntPtr,System.IntPtr&)
 int32_t OSX509Certificates_SecTrustCreateWithCertificates_m50393 (Object_t * __this/* static, unused */, IntPtr_t24 ___certOrCertArray, IntPtr_t24 ___policies, IntPtr_t24* ___sectrustref, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecPolicyCreateSSL(System.Int32,System.IntPtr)
 IntPtr_t24 OSX509Certificates_SecPolicyCreateSSL_m50394 (Object_t * __this/* static, unused */, int32_t ___server, IntPtr_t24 ___cfStringHostname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustEvaluate(System.IntPtr,Mono.Security.X509.OSX509Certificates/SecTrustResult&)
 int32_t OSX509Certificates_SecTrustEvaluate_m50395 (Object_t * __this/* static, unused */, IntPtr_t24 ___secTrustRef, int32_t* ___secTrustResultTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFDataCreate(System.IntPtr,System.Byte*,System.IntPtr)
 IntPtr_t24 OSX509Certificates_CFDataCreate_m50396 (Object_t * __this/* static, unused */, IntPtr_t24 ___allocator, uint8_t* ___bytes, IntPtr_t24 ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.OSX509Certificates::CFRelease(System.IntPtr)
 void OSX509Certificates_CFRelease_m50397 (Object_t * __this/* static, unused */, IntPtr_t24 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFArrayCreate(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
 IntPtr_t24 OSX509Certificates_CFArrayCreate_m50398 (Object_t * __this/* static, unused */, IntPtr_t24 ___allocator, IntPtr_t24 ___values, IntPtr_t24 ___numValues, IntPtr_t24 ___callbacks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::MakeCFData(System.Byte[])
 IntPtr_t24 OSX509Certificates_MakeCFData_m50399 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::FromIntPtrs(System.IntPtr[])
 IntPtr_t24 OSX509Certificates_FromIntPtrs_m50400 (Object_t * __this/* static, unused */, IntPtrU5BU5D_t7225* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
 int32_t OSX509Certificates_TrustEvaluateSsl_m50401 (Object_t * __this/* static, unused */, X509CertificateCollection_t6490 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::_TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
 int32_t OSX509Certificates__TrustEvaluateSsl_m50402 (Object_t * __this/* static, unused */, X509CertificateCollection_t6490 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
