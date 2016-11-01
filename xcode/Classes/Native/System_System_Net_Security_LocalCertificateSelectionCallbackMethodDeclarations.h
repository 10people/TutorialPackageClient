#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t7130;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6546;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t6530;
// System.String[]
struct StringU5BU5D_t333;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
 void LocalCertificateSelectionCallback__ctor_m51008 (LocalCertificateSelectionCallback_t7130 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
 X509Certificate_t6546 * LocalCertificateSelectionCallback_Invoke_m51009 (LocalCertificateSelectionCallback_t7130 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t6530 * ___localCertificates, X509Certificate_t6546 * ___remoteCertificate, StringU5BU5D_t333* ___acceptableIssuers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
 Object_t * LocalCertificateSelectionCallback_BeginInvoke_m51010 (LocalCertificateSelectionCallback_t7130 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t6530 * ___localCertificates, X509Certificate_t6546 * ___remoteCertificate, StringU5BU5D_t333* ___acceptableIssuers, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
 X509Certificate_t6546 * LocalCertificateSelectionCallback_EndInvoke_m51011 (LocalCertificateSelectionCallback_t7130 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
