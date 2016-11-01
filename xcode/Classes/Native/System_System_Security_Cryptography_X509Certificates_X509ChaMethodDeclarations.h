#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t6623;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t7240;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t7241;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t7244;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t7237;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t6622;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t7243;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t6495;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t6501;
// Mono.Security.X509.X509Extension
struct X509Extension_t6502;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t6500;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
 void X509Chain__ctor_m45786 (X509Chain_t6623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
 void X509Chain__ctor_m50464 (X509Chain_t6623 * __this, bool ___useMachineContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
 void X509Chain__cctor_m50465 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
 X509ChainPolicy_t7240 * X509Chain_get_ChainPolicy_m50466 (X509Chain_t6623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
 void X509Chain_set_ChainPolicy_m50467 (X509Chain_t6623 * __this, X509ChainPolicy_t7240 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::get_ChainStatus()
 X509ChainStatusU5BU5D_t7241* X509Chain_get_ChainStatus_m50468 (X509Chain_t6623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_Build_m45787 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
 void X509Chain_Reset_m50469 (X509Chain_t6623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
 X509Store_t7244 * X509Chain_get_Roots_m50470 (X509Chain_t6623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
 X509Store_t7244 * X509Chain_get_CertificateAuthorities_m50471 (X509Chain_t6623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
 X509Certificate2Collection_t7237 * X509Chain_get_CertificateCollection_m50472 (X509Chain_t6623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
 int32_t X509Chain_BuildChainFrom_m50473 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 X509Certificate2_t6622 * X509Chain_SelectBestFromCollection_m50474 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___child, X509Certificate2Collection_t7237 * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Certificate2_t6622 * X509Chain_FindParent_m50475 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsChainComplete_m50476 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsSelfIssued_m50477 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_ValidateChain_m50478 (X509Chain_t6623 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
 void X509Chain_Process_m50479 (X509Chain_t6623 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
 void X509Chain_PrepareForNextCertificate_m50480 (X509Chain_t6623 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
 void X509Chain_WrapUp_m50481 (X509Chain_t6623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
 void X509Chain_ProcessCertificateExtensions_m50482 (X509Chain_t6623 * __this, X509ChainElement_t7243 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Chain_IsSignedWith_m50483 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___signed, AsymmetricAlgorithm_t6495 * ___pubkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetSubjectKeyIdentifier_m50484 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m50485 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m50486 (X509Chain_t6623 * __this, X509Crl_t6501 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m50487 (X509Chain_t6623 * __this, X509Extension_t6502 * ___ext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_CheckRevocationOnChain_m50488 (X509Chain_t6623 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
 int32_t X509Chain_CheckRevocation_m50489 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___certificate, int32_t ___ca, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
 int32_t X509Chain_CheckRevocation_m50490 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___certificate, X509Certificate2_t6622 * ___ca_cert, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Crl_t6501 * X509Chain_FindCrl_m50491 (X509Chain_t6623 * __this, X509Certificate2_t6622 * ___caCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
 bool X509Chain_ProcessCrlExtensions_m50492 (X509Chain_t6623 * __this, X509Crl_t6501 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
 bool X509Chain_ProcessCrlEntryExtensions_m50493 (X509Chain_t6623 * __this, X509CrlEntry_t6500 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
