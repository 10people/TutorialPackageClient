#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Array
#include "mscorlib_System_Array.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollection.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t6490_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t6494_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t6529_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t6511_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t6508_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t5157_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t6513_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t6528_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t6556_il2cpp_TypeInfo;
extern TypeInfo Int64_t1035_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo TlsException_t6564_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t1033_il2cpp_TypeInfo;
extern TypeInfo Byte_t1026_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t6546_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t6498_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t116_il2cpp_TypeInfo;
extern TypeInfo Exception_t972_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t6514_il2cpp_TypeInfo;
extern TypeInfo Regex_t6628_il2cpp_TypeInfo;
extern TypeInfo MatchCollection_t6629_il2cpp_TypeInfo;
extern TypeInfo Match_t6630_il2cpp_TypeInfo;
extern TypeInfo GroupCollection_t6631_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t6595_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern Il2CppType Int32_t73_0_0_0;
extern MethodInfo HandshakeMessage__ctor_m45528_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m45533_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m45529_MethodInfo;
extern MethodInfo Context_get_ServerSettings_m45262_MethodInfo;
extern MethodInfo TlsServerSettings_set_Certificates_m45490_MethodInfo;
extern MethodInfo TlsServerSettings_UpdateCertificateRSA_m45499_MethodInfo;
extern MethodInfo TlsServerCertificate_ProcessAsTls1_m45566_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m45039_MethodInfo;
extern MethodInfo TlsStream_ReadInt24_m45512_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m45513_MethodInfo;
extern MethodInfo X509Certificate__ctor_m44999_MethodInfo;
extern MethodInfo X509CertificateCollection_Add_m45043_MethodInfo;
extern MethodInfo TlsServerCertificate_validateCertificates_m45568_MethodInfo;
extern MethodInfo X509Certificate_get_Version_m45021_MethodInfo;
extern MethodInfo Context_get_Negotiating_m45306_MethodInfo;
extern MethodInfo SecurityParameters_get_Cipher_m45372_MethodInfo;
extern MethodInfo CipherSuite_get_ExchangeAlgorithmType_m45170_MethodInfo;
extern MethodInfo X509Certificate_get_Extensions_m45005_MethodInfo;
extern MethodInfo X509ExtensionCollection_get_Item_m45093_MethodInfo;
extern MethodInfo KeyUsageExtension__ctor_m45127_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension__ctor_m45118_MethodInfo;
extern MethodInfo KeyUsageExtension_Support_m45130_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension_get_KeyPurpose_m45121_MethodInfo;
extern MethodInfo ArrayList_Contains_m45768_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension__ctor_m45132_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension_Support_m45134_MethodInfo;
extern MethodInfo ClientContext_get_SslStream_m45222_MethodInfo;
extern MethodInfo SslClientStream_get_HaveRemoteValidation2Callback_m45394_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation2_m45398_MethodInfo;
extern MethodInfo ValidationResult_get_Trusted_m45380_MethodInfo;
extern MethodInfo ValidationResult_get_ErrorCode_m45381_MethodInfo;
extern MethodInfo String_Format_m38768_MethodInfo;
extern MethodInfo String_Concat_m6509_MethodInfo;
extern MethodInfo TlsException__ctor_m45484_MethodInfo;
extern MethodInfo X509CertificateCollection_get_Item_m45042_MethodInfo;
extern MethodInfo X509Certificate_get_RawData_m45014_MethodInfo;
extern MethodInfo X509Certificate__ctor_m45836_MethodInfo;
extern MethodInfo ArrayList__ctor_m38823_MethodInfo;
extern MethodInfo TlsServerCertificate_checkCertificateUsage_m45567_MethodInfo;
extern MethodInfo ArrayList_Add_m45623_MethodInfo;
extern MethodInfo TlsServerCertificate_checkServerIdentity_m45569_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m45040_MethodInfo;
extern MethodInfo X509CertificateCollection_Remove_m45049_MethodInfo;
extern MethodInfo X509Chain__ctor_m45052_MethodInfo;
extern MethodInfo X509Chain_Build_m45055_MethodInfo;
extern MethodInfo X509Chain_get_Status_m45053_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo ArrayList_ToArray_m45747_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation_m45397_MethodInfo;
extern MethodInfo Context_get_ClientSettings_m45263_MethodInfo;
extern MethodInfo TlsClientSettings_get_TargetHost_m45472_MethodInfo;
extern MethodInfo SubjectAltNameExtension__ctor_m45136_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_DNSNames_m45138_MethodInfo;
extern MethodInfo TlsServerCertificate_Match_m45571_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_IPAddresses_m45139_MethodInfo;
extern MethodInfo String_op_Equality_m4496_MethodInfo;
extern MethodInfo X509Certificate_get_SubjectName_m45018_MethodInfo;
extern MethodInfo TlsServerCertificate_checkDomainName_m45570_MethodInfo;
extern MethodInfo Regex__ctor_m45847_MethodInfo;
extern MethodInfo Regex_Matches_m45848_MethodInfo;
extern MethodInfo MatchCollection_get_Count_m45849_MethodInfo;
extern MethodInfo MatchCollection_get_Item_m45850_MethodInfo;
extern MethodInfo Group_get_Success_m45851_MethodInfo;
extern MethodInfo Match_get_Groups_m45852_MethodInfo;
extern MethodInfo GroupCollection_get_Item_m45853_MethodInfo;
extern MethodInfo Capture_get_Value_m45854_MethodInfo;
extern MethodInfo String_ToString_m39320_MethodInfo;
extern MethodInfo String_IndexOf_m38885_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m45629_MethodInfo;
extern MethodInfo String_Compare_m45855_MethodInfo;
extern MethodInfo String_get_Length_m4766_MethodInfo;
extern MethodInfo String_get_Chars_m4775_MethodInfo;
extern MethodInfo String_IndexOf_m45856_MethodInfo;
extern MethodInfo String_Substring_m4762_MethodInfo;
extern MethodInfo String_Compare_m45857_MethodInfo;
extern MethodInfo String_Substring_m4765_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificate__ctor_m45563_MethodInfo;
 void TlsServerCertificate__ctor_m45563 (TlsServerCertificate_t6573 * __this, Context_t6522 * ___context, ByteU5BU5D_t1033* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m45528(__this, ___context, ((int32_t)11), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m45528_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern MethodInfo TlsServerCertificate_Update_m45564_MethodInfo;
 void TlsServerCertificate_Update_m45564 (TlsServerCertificate_t6573 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m45533(__this, /*hidden argument*/&HandshakeMessage_Update_m45533_MethodInfo);
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t6538 * L_1 = Context_get_ServerSettings_m45262(L_0, /*hidden argument*/&Context_get_ServerSettings_m45262_MethodInfo);
		X509CertificateCollection_t6490 * L_2 = (__this->___certificates);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m45490(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_Certificates_m45490_MethodInfo);
		Context_t6522 * L_3 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t6538 * L_4 = Context_get_ServerSettings_m45262(L_3, /*hidden argument*/&Context_get_ServerSettings_m45262_MethodInfo);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m45499(L_4, /*hidden argument*/&TlsServerSettings_UpdateCertificateRSA_m45499_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern MethodInfo TlsServerCertificate_ProcessAsSsl3_m45565_MethodInfo;
 void TlsServerCertificate_ProcessAsSsl3_m45565 (TlsServerCertificate_t6573 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificate_ProcessAsTls1_m45566_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern MethodInfo TlsServerCertificate_ProcessAsTls1_m45566_MethodInfo;
 void TlsServerCertificate_ProcessAsTls1_m45566 (TlsServerCertificate_t6573 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t1033* V_3 = {0};
	X509Certificate_t6494 * V_4 = {0};
	{
		X509CertificateCollection_t6490 * L_0 = (X509CertificateCollection_t6490 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t6490_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m45039(L_0, /*hidden argument*/&X509CertificateCollection__ctor_m45039_MethodInfo);
		__this->___certificates = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m45512(__this, /*hidden argument*/&TlsStream_ReadInt24_m45512_MethodInfo);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m45512(__this, /*hidden argument*/&TlsStream_ReadInt24_m45512_MethodInfo);
		V_2 = L_2;
		V_0 = ((int32_t)(V_0+3));
		if ((((int32_t)V_2) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_t1033* L_3 = TlsStream_ReadBytes_m45513(__this, V_2, /*hidden argument*/&TlsStream_ReadBytes_m45513_MethodInfo);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&X509Certificate_t6494_il2cpp_TypeInfo));
		X509Certificate_t6494 * L_4 = (X509Certificate_t6494 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t6494_il2cpp_TypeInfo));
		X509Certificate__ctor_m44999(L_4, V_3, /*hidden argument*/&X509Certificate__ctor_m44999_MethodInfo);
		V_4 = L_4;
		X509CertificateCollection_t6490 * L_5 = (__this->___certificates);
		NullCheck(L_5);
		X509CertificateCollection_Add_m45043(L_5, V_4, /*hidden argument*/&X509CertificateCollection_Add_m45043_MethodInfo);
		V_0 = ((int32_t)(V_0+V_2));
	}

IL_004d:
	{
		if ((((int32_t)V_0) < ((int32_t)V_1)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t6490 * L_6 = (__this->___certificates);
		TlsServerCertificate_validateCertificates_m45568(__this, L_6, /*hidden argument*/&TlsServerCertificate_validateCertificates_m45568_MethodInfo);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern MethodInfo TlsServerCertificate_checkCertificateUsage_m45567_MethodInfo;
 bool TlsServerCertificate_checkCertificateUsage_m45567 (TlsServerCertificate_t6573 * __this, X509Certificate_t6494 * ___cert, MethodInfo* method){
	ClientContext_t6529 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t6511 * V_2 = {0};
	ExtendedKeyUsageExtension_t6508 * V_3 = {0};
	X509Extension_t6502 * V_4 = {0};
	NetscapeCertTypeExtension_t6513 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		V_0 = ((ClientContext_t6529 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t6529_il2cpp_TypeInfo)));
		NullCheck(___cert);
		int32_t L_1 = X509Certificate_get_Version_m45021(___cert, /*hidden argument*/&X509Certificate_get_Version_m45021_MethodInfo);
		if ((((int32_t)L_1) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		NullCheck(V_0);
		SecurityParameters_t6540 * L_2 = Context_get_Negotiating_m45306(V_0, /*hidden argument*/&Context_get_Negotiating_m45306_MethodInfo);
		NullCheck(L_2);
		CipherSuite_t6523 * L_3 = SecurityParameters_get_Cipher_m45372(L_2, /*hidden argument*/&SecurityParameters_get_Cipher_m45372_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = CipherSuite_get_ExchangeAlgorithmType_m45170(L_3, /*hidden argument*/&CipherSuite_get_ExchangeAlgorithmType_m45170_MethodInfo);
		V_6 = L_4;
		if (V_6 == 0)
		{
			goto IL_0061;
		}
		if (V_6 == 1)
		{
			goto IL_0068;
		}
		if (V_6 == 2)
		{
			goto IL_006a;
		}
		if (V_6 == 3)
		{
			goto IL_0059;
		}
		if (V_6 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t6511 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t6508 *)NULL;
		NullCheck(___cert);
		X509ExtensionCollection_t6493 * L_5 = X509Certificate_get_Extensions_m45005(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m45005_MethodInfo);
		NullCheck(L_5);
		X509Extension_t6502 * L_6 = X509ExtensionCollection_get_Item_m45093(L_5, (String_t*) &_stringLiteral4335, /*hidden argument*/&X509ExtensionCollection_get_Item_m45093_MethodInfo);
		V_4 = L_6;
		if (!V_4)
		{
			goto IL_008f;
		}
	}
	{
		KeyUsageExtension_t6511 * L_7 = (KeyUsageExtension_t6511 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyUsageExtension_t6511_il2cpp_TypeInfo));
		KeyUsageExtension__ctor_m45127(L_7, V_4, /*hidden argument*/&KeyUsageExtension__ctor_m45127_MethodInfo);
		V_2 = L_7;
	}

IL_008f:
	{
		NullCheck(___cert);
		X509ExtensionCollection_t6493 * L_8 = X509Certificate_get_Extensions_m45005(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m45005_MethodInfo);
		NullCheck(L_8);
		X509Extension_t6502 * L_9 = X509ExtensionCollection_get_Item_m45093(L_8, (String_t*) &_stringLiteral4336, /*hidden argument*/&X509ExtensionCollection_get_Item_m45093_MethodInfo);
		V_4 = L_9;
		if (!V_4)
		{
			goto IL_00b0;
		}
	}
	{
		ExtendedKeyUsageExtension_t6508 * L_10 = (ExtendedKeyUsageExtension_t6508 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtendedKeyUsageExtension_t6508_il2cpp_TypeInfo));
		ExtendedKeyUsageExtension__ctor_m45118(L_10, V_4, /*hidden argument*/&ExtendedKeyUsageExtension__ctor_m45118_MethodInfo);
		V_3 = L_10;
	}

IL_00b0:
	{
		if (!V_2)
		{
			goto IL_00f3;
		}
	}
	{
		if (!V_3)
		{
			goto IL_00f3;
		}
	}
	{
		NullCheck(V_2);
		bool L_11 = KeyUsageExtension_Support_m45130(V_2, V_1, /*hidden argument*/&KeyUsageExtension_Support_m45130_MethodInfo);
		if (L_11)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		NullCheck(V_3);
		ArrayList_t5157 * L_12 = ExtendedKeyUsageExtension_get_KeyPurpose_m45121(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m45121_MethodInfo);
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m45768_MethodInfo, L_12, (String_t*) &_stringLiteral4213);
		if (L_13)
		{
			goto IL_00f1;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t5157 * L_14 = ExtendedKeyUsageExtension_get_KeyPurpose_m45121(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m45121_MethodInfo);
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m45768_MethodInfo, L_14, (String_t*) &_stringLiteral4337);
		G_B19_0 = ((int32_t)(L_15));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		if (!V_2)
		{
			goto IL_0101;
		}
	}
	{
		NullCheck(V_2);
		bool L_16 = KeyUsageExtension_Support_m45130(V_2, V_1, /*hidden argument*/&KeyUsageExtension_Support_m45130_MethodInfo);
		return L_16;
	}

IL_0101:
	{
		if (!V_3)
		{
			goto IL_0130;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t5157 * L_17 = ExtendedKeyUsageExtension_get_KeyPurpose_m45121(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m45121_MethodInfo);
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m45768_MethodInfo, L_17, (String_t*) &_stringLiteral4213);
		if (L_18)
		{
			goto IL_012e;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t5157 * L_19 = ExtendedKeyUsageExtension_get_KeyPurpose_m45121(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m45121_MethodInfo);
		NullCheck(L_19);
		bool L_20 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m45768_MethodInfo, L_19, (String_t*) &_stringLiteral4337);
		G_B26_0 = ((int32_t)(L_20));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		NullCheck(___cert);
		X509ExtensionCollection_t6493 * L_21 = X509Certificate_get_Extensions_m45005(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m45005_MethodInfo);
		NullCheck(L_21);
		X509Extension_t6502 * L_22 = X509ExtensionCollection_get_Item_m45093(L_21, (String_t*) &_stringLiteral4338, /*hidden argument*/&X509ExtensionCollection_get_Item_m45093_MethodInfo);
		V_4 = L_22;
		if (!V_4)
		{
			goto IL_015c;
		}
	}
	{
		NetscapeCertTypeExtension_t6513 * L_23 = (NetscapeCertTypeExtension_t6513 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetscapeCertTypeExtension_t6513_il2cpp_TypeInfo));
		NetscapeCertTypeExtension__ctor_m45132(L_23, V_4, /*hidden argument*/&NetscapeCertTypeExtension__ctor_m45132_MethodInfo);
		V_5 = L_23;
		NullCheck(V_5);
		bool L_24 = NetscapeCertTypeExtension_Support_m45134(V_5, ((int32_t)64), /*hidden argument*/&NetscapeCertTypeExtension_Support_m45134_MethodInfo);
		return L_24;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern MethodInfo TlsServerCertificate_validateCertificates_m45568_MethodInfo;
 void TlsServerCertificate_validateCertificates_m45568 (TlsServerCertificate_t6573 * __this, X509CertificateCollection_t6490 * ___certificates, MethodInfo* method){
	ClientContext_t6529 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t6556 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t6494 * V_5 = {0};
	X509Certificate_t6546 * V_6 = {0};
	ArrayList_t5157 * V_7 = {0};
	X509CertificateCollection_t6490 * V_8 = {0};
	X509Chain_t6498 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t116* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t972 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t972 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		V_0 = ((ClientContext_t6529 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t6529_il2cpp_TypeInfo)));
		V_1 = ((int32_t)42);
		NullCheck(V_0);
		SslClientStream_t6528 * L_1 = ClientContext_get_SslStream_m45222(V_0, /*hidden argument*/&ClientContext_get_SslStream_m45222_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&SslClientStream_get_HaveRemoteValidation2Callback_m45394_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_00b4;
		}
	}
	{
		NullCheck(V_0);
		SslClientStream_t6528 * L_3 = ClientContext_get_SslStream_m45222(V_0, /*hidden argument*/&ClientContext_get_SslStream_m45222_MethodInfo);
		NullCheck(L_3);
		ValidationResult_t6556 * L_4 = (ValidationResult_t6556 *)VirtFuncInvoker1< ValidationResult_t6556 *, X509CertificateCollection_t6490 * >::Invoke(&SslClientStream_RaiseServerCertificateValidation2_m45398_MethodInfo, L_3, ___certificates);
		V_2 = L_4;
		NullCheck(V_2);
		bool L_5 = ValidationResult_get_Trusted_m45380(V_2, /*hidden argument*/&ValidationResult_get_Trusted_m45380_MethodInfo);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		NullCheck(V_2);
		int32_t L_6 = ValidationResult_get_ErrorCode_m45381(V_2, /*hidden argument*/&ValidationResult_get_ErrorCode_m45381_MethodInfo);
		V_3 = (((int64_t)L_6));
		V_12 = V_3;
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762487))))))))
		{
			goto IL_007f;
		}
	}
	{
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762486))))))))
		{
			goto IL_0077;
		}
	}
	{
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762495))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_7 = V_3;
		Object_t * L_8 = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Format_m38768(NULL /*static, unused*/, (String_t*) &_stringLiteral4339, L_8, /*hidden argument*/&String_Format_m38768_MethodInfo);
		V_4 = L_9;
		String_t* L_10 = String_Concat_m6509(NULL /*static, unused*/, (String_t*) &_stringLiteral4340, V_4, /*hidden argument*/&String_Concat_m6509_MethodInfo);
		TlsException_t6564 * L_11 = (TlsException_t6564 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t6564_il2cpp_TypeInfo));
		TlsException__ctor_m45484(L_11, V_1, L_10, /*hidden argument*/&TlsException__ctor_m45484_MethodInfo);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_00b4:
	{
		NullCheck(___certificates);
		X509Certificate_t6494 * L_12 = X509CertificateCollection_get_Item_m45042(___certificates, 0, /*hidden argument*/&X509CertificateCollection_get_Item_m45042_MethodInfo);
		V_5 = L_12;
		NullCheck(V_5);
		ByteU5BU5D_t1033* L_13 = (ByteU5BU5D_t1033*)VirtFuncInvoker0< ByteU5BU5D_t1033* >::Invoke(&X509Certificate_get_RawData_m45014_MethodInfo, V_5);
		X509Certificate_t6546 * L_14 = (X509Certificate_t6546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t6546_il2cpp_TypeInfo));
		X509Certificate__ctor_m45836(L_14, L_13, /*hidden argument*/&X509Certificate__ctor_m45836_MethodInfo);
		V_6 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t5157_il2cpp_TypeInfo));
		ArrayList_t5157 * L_15 = (ArrayList_t5157 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t5157_il2cpp_TypeInfo));
		ArrayList__ctor_m38823(L_15, /*hidden argument*/&ArrayList__ctor_m38823_MethodInfo);
		V_7 = L_15;
		bool L_16 = TlsServerCertificate_checkCertificateUsage_m45567(__this, V_5, /*hidden argument*/&TlsServerCertificate_checkCertificateUsage_m45567_MethodInfo);
		if (L_16)
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_17 = ((int32_t)-2146762490);
		Object_t * L_18 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_17);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m45623_MethodInfo, V_7, L_18);
	}

IL_00f1:
	{
		bool L_19 = TlsServerCertificate_checkServerIdentity_m45569(__this, V_5, /*hidden argument*/&TlsServerCertificate_checkServerIdentity_m45569_MethodInfo);
		if (L_19)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_20 = ((int32_t)-2146762481);
		Object_t * L_21 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_20);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m45623_MethodInfo, V_7, L_21);
	}

IL_0110:
	{
		X509CertificateCollection_t6490 * L_22 = (X509CertificateCollection_t6490 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t6490_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m45040(L_22, ___certificates, /*hidden argument*/&X509CertificateCollection__ctor_m45040_MethodInfo);
		V_8 = L_22;
		NullCheck(V_8);
		X509CertificateCollection_Remove_m45049(V_8, V_5, /*hidden argument*/&X509CertificateCollection_Remove_m45049_MethodInfo);
		X509Chain_t6498 * L_23 = (X509Chain_t6498 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Chain_t6498_il2cpp_TypeInfo));
		X509Chain__ctor_m45052(L_23, V_8, /*hidden argument*/&X509Chain__ctor_m45052_MethodInfo);
		V_9 = L_23;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		NullCheck(V_9);
		bool L_24 = X509Chain_Build_m45055(V_9, V_5, /*hidden argument*/&X509Chain_Build_m45055_MethodInfo);
		V_10 = L_24;
		// IL_0138: leave IL_0146
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t972 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t972_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_013d;
		throw e;
	}

IL_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		// IL_0141: leave IL_0146
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		if (V_10)
		{
			goto IL_0243;
		}
	}
	{
		NullCheck(V_9);
		int32_t L_25 = X509Chain_get_Status_m45053(V_9, /*hidden argument*/&X509Chain_get_Status_m45053_MethodInfo);
		V_13 = L_25;
		if ((((int32_t)V_13) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		int32_t L_26 = ((int32_t)-2146869223);
		Object_t * L_27 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_26);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m45623_MethodInfo, V_7, L_27);
		goto IL_0243;
	}

IL_01ab:
	{
		int32_t L_28 = ((int32_t)-2146869232);
		Object_t * L_29 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_28);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m45623_MethodInfo, V_7, L_29);
		goto IL_0243;
	}

IL_01c2:
	{
		int32_t L_30 = ((int32_t)-2146762494);
		Object_t * L_31 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_30);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m45623_MethodInfo, V_7, L_31);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		int32_t L_32 = ((int32_t)-2146762495);
		Object_t * L_33 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_32);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m45623_MethodInfo, V_7, L_33);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		int32_t L_34 = ((int32_t)-2146762486);
		Object_t * L_35 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_34);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m45623_MethodInfo, V_7, L_35);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		int32_t L_36 = ((int32_t)-2146762487);
		Object_t * L_37 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_36);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m45623_MethodInfo, V_7, L_37);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		NullCheck(V_9);
		int32_t L_38 = X509Chain_get_Status_m45053(V_9, /*hidden argument*/&X509Chain_get_Status_m45053_MethodInfo);
		int32_t L_39 = L_38;
		Object_t * L_40 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_39);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m45623_MethodInfo, V_7, L_40);
		goto IL_0243;
	}

IL_0243:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_41 = Type_GetTypeFromHandle_m4772(NULL /*static, unused*/, LoadTypeToken(&Int32_t73_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m4772_MethodInfo);
		NullCheck(V_7);
		Array_t * L_42 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m45747_MethodInfo, V_7, L_41);
		V_11 = ((Int32U5BU5D_t116*)Castclass(L_42, InitializedTypeInfo(&Int32U5BU5D_t116_il2cpp_TypeInfo)));
		NullCheck(V_0);
		SslClientStream_t6528 * L_43 = ClientContext_get_SslStream_m45222(V_0, /*hidden argument*/&ClientContext_get_SslStream_m45222_MethodInfo);
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker2< bool, X509Certificate_t6546 *, Int32U5BU5D_t116* >::Invoke(&SslClientStream_RaiseServerCertificateValidation_m45397_MethodInfo, L_43, V_6, V_11);
		if (L_44)
		{
			goto IL_027b;
		}
	}
	{
		TlsException_t6564 * L_45 = (TlsException_t6564 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t6564_il2cpp_TypeInfo));
		TlsException__ctor_m45484(L_45, V_1, (String_t*) &_stringLiteral4341, /*hidden argument*/&TlsException__ctor_m45484_MethodInfo);
		il2cpp_codegen_raise_exception (L_45);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern MethodInfo TlsServerCertificate_checkServerIdentity_m45569_MethodInfo;
 bool TlsServerCertificate_checkServerIdentity_m45569 (TlsServerCertificate_t6573 * __this, X509Certificate_t6494 * ___cert, MethodInfo* method){
	ClientContext_t6529 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t6502 * V_2 = {0};
	SubjectAltNameExtension_t6514 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t333* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t333* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		V_0 = ((ClientContext_t6529 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t6529_il2cpp_TypeInfo)));
		NullCheck(V_0);
		TlsClientSettings_t6539 * L_1 = Context_get_ClientSettings_m45263(V_0, /*hidden argument*/&Context_get_ClientSettings_m45263_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = TlsClientSettings_get_TargetHost_m45472(L_1, /*hidden argument*/&TlsClientSettings_get_TargetHost_m45472_MethodInfo);
		V_1 = L_2;
		NullCheck(___cert);
		X509ExtensionCollection_t6493 * L_3 = X509Certificate_get_Extensions_m45005(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m45005_MethodInfo);
		NullCheck(L_3);
		X509Extension_t6502 * L_4 = X509ExtensionCollection_get_Item_m45093(L_3, (String_t*) &_stringLiteral4342, /*hidden argument*/&X509ExtensionCollection_get_Item_m45093_MethodInfo);
		V_2 = L_4;
		if (!V_2)
		{
			goto IL_00a4;
		}
	}
	{
		SubjectAltNameExtension_t6514 * L_5 = (SubjectAltNameExtension_t6514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SubjectAltNameExtension_t6514_il2cpp_TypeInfo));
		SubjectAltNameExtension__ctor_m45136(L_5, V_2, /*hidden argument*/&SubjectAltNameExtension__ctor_m45136_MethodInfo);
		V_3 = L_5;
		NullCheck(V_3);
		StringU5BU5D_t333* L_6 = SubjectAltNameExtension_get_DNSNames_m45138(V_3, /*hidden argument*/&SubjectAltNameExtension_get_DNSNames_m45138_MethodInfo);
		V_5 = L_6;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(V_5, V_6));
		bool L_7 = TlsServerCertificate_Match_m45571(NULL /*static, unused*/, V_1, V_4, /*hidden argument*/&TlsServerCertificate_Match_m45571_MethodInfo);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_0062:
	{
		NullCheck(V_5);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((Array_t *)V_5)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		NullCheck(V_3);
		StringU5BU5D_t333* L_8 = SubjectAltNameExtension_get_IPAddresses_m45139(V_3, /*hidden argument*/&SubjectAltNameExtension_get_IPAddresses_m45139_MethodInfo);
		V_8 = L_8;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		NullCheck(V_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_8, V_9);
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(V_8, V_9));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_9 = String_op_Equality_m4496(NULL /*static, unused*/, V_7, V_1, /*hidden argument*/&String_op_Equality_m4496_MethodInfo);
		if (!L_9)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		V_9 = ((int32_t)(V_9+1));
	}

IL_0099:
	{
		NullCheck(V_8);
		if ((((int32_t)V_9) < ((int32_t)(((int32_t)(((Array_t *)V_8)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		NullCheck(___cert);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&X509Certificate_get_SubjectName_m45018_MethodInfo, ___cert);
		bool L_11 = TlsServerCertificate_checkDomainName_m45570(__this, L_10, /*hidden argument*/&TlsServerCertificate_checkDomainName_m45570_MethodInfo);
		return L_11;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern MethodInfo TlsServerCertificate_checkDomainName_m45570_MethodInfo;
 bool TlsServerCertificate_checkDomainName_m45570 (TlsServerCertificate_t6573 * __this, String_t* ___subjectName, MethodInfo* method){
	ClientContext_t6529 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t6628 * V_2 = {0};
	MatchCollection_t6629 * V_3 = {0};
	{
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		V_0 = ((ClientContext_t6529 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t6529_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_1 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t6628_il2cpp_TypeInfo));
		Regex_t6628 * L_1 = (Regex_t6628 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t6628_il2cpp_TypeInfo));
		Regex__ctor_m45847(L_1, (String_t*) &_stringLiteral4343, /*hidden argument*/&Regex__ctor_m45847_MethodInfo);
		V_2 = L_1;
		NullCheck(V_2);
		MatchCollection_t6629 * L_2 = Regex_Matches_m45848(V_2, ___subjectName, /*hidden argument*/&Regex_Matches_m45848_MethodInfo);
		V_3 = L_2;
		NullCheck(V_3);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MatchCollection_get_Count_m45849_MethodInfo, V_3);
		if ((((uint32_t)L_3) != ((uint32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(V_3);
		Match_t6630 * L_4 = (Match_t6630 *)VirtFuncInvoker1< Match_t6630 *, int32_t >::Invoke(&MatchCollection_get_Item_m45850_MethodInfo, V_3, 0);
		NullCheck(L_4);
		bool L_5 = Group_get_Success_m45851(L_4, /*hidden argument*/&Group_get_Success_m45851_MethodInfo);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(V_3);
		Match_t6630 * L_6 = (Match_t6630 *)VirtFuncInvoker1< Match_t6630 *, int32_t >::Invoke(&MatchCollection_get_Item_m45850_MethodInfo, V_3, 0);
		NullCheck(L_6);
		GroupCollection_t6631 * L_7 = (GroupCollection_t6631 *)VirtFuncInvoker0< GroupCollection_t6631 * >::Invoke(&Match_get_Groups_m45852_MethodInfo, L_6);
		NullCheck(L_7);
		Group_t6632 * L_8 = GroupCollection_get_Item_m45853(L_7, 1, /*hidden argument*/&GroupCollection_get_Item_m45853_MethodInfo);
		NullCheck(L_8);
		String_t* L_9 = Capture_get_Value_m45854(L_8, /*hidden argument*/&Capture_get_Value_m45854_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m39320_MethodInfo, L_9);
		V_1 = L_10;
	}

IL_005f:
	{
		NullCheck(V_0);
		TlsClientSettings_t6539 * L_11 = Context_get_ClientSettings_m45263(V_0, /*hidden argument*/&Context_get_ClientSettings_m45263_MethodInfo);
		NullCheck(L_11);
		String_t* L_12 = TlsClientSettings_get_TargetHost_m45472(L_11, /*hidden argument*/&TlsClientSettings_get_TargetHost_m45472_MethodInfo);
		bool L_13 = TlsServerCertificate_Match_m45571(NULL /*static, unused*/, L_12, V_1, /*hidden argument*/&TlsServerCertificate_Match_m45571_MethodInfo);
		return L_13;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern MethodInfo TlsServerCertificate_Match_m45571_MethodInfo;
 bool TlsServerCertificate_Match_m45571 (Object_t * __this/* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		NullCheck(___pattern);
		int32_t L_0 = String_IndexOf_m38885(___pattern, ((int32_t)42), /*hidden argument*/&String_IndexOf_m38885_MethodInfo);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t6595_il2cpp_TypeInfo));
		CultureInfo_t6595 * L_1 = CultureInfo_get_InvariantCulture_m45629(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m45629_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_2 = String_Compare_m45855(NULL /*static, unused*/, ___hostname, ___pattern, 1, L_1, /*hidden argument*/&String_Compare_m45855_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		NullCheck(___pattern);
		int32_t L_3 = String_get_Length_m4766(___pattern, /*hidden argument*/&String_get_Length_m4766_MethodInfo);
		if ((((int32_t)V_0) == ((int32_t)((int32_t)(L_3-1)))))
		{
			goto IL_0041;
		}
	}
	{
		NullCheck(___pattern);
		uint16_t L_4 = String_get_Chars_m4775(___pattern, ((int32_t)(V_0+1)), /*hidden argument*/&String_get_Chars_m4775_MethodInfo);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		NullCheck(___pattern);
		int32_t L_5 = String_IndexOf_m45856(___pattern, ((int32_t)42), ((int32_t)(V_0+1)), /*hidden argument*/&String_IndexOf_m45856_MethodInfo);
		V_1 = L_5;
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		NullCheck(___pattern);
		String_t* L_6 = String_Substring_m4762(___pattern, ((int32_t)(V_0+1)), /*hidden argument*/&String_Substring_m4762_MethodInfo);
		V_2 = L_6;
		NullCheck(___hostname);
		int32_t L_7 = String_get_Length_m4766(___hostname, /*hidden argument*/&String_get_Length_m4766_MethodInfo);
		NullCheck(V_2);
		int32_t L_8 = String_get_Length_m4766(V_2, /*hidden argument*/&String_get_Length_m4766_MethodInfo);
		V_3 = ((int32_t)(L_7-L_8));
		if ((((int32_t)V_3) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		NullCheck(V_2);
		int32_t L_9 = String_get_Length_m4766(V_2, /*hidden argument*/&String_get_Length_m4766_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t6595_il2cpp_TypeInfo));
		CultureInfo_t6595 * L_10 = CultureInfo_get_InvariantCulture_m45629(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m45629_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_11 = String_Compare_m45857(NULL /*static, unused*/, ___hostname, V_3, V_2, 0, L_9, 1, L_10, /*hidden argument*/&String_Compare_m45857_MethodInfo);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		if (V_0)
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck(___hostname);
		int32_t L_12 = String_IndexOf_m38885(___hostname, ((int32_t)46), /*hidden argument*/&String_IndexOf_m38885_MethodInfo);
		V_4 = L_12;
		if ((((int32_t)V_4) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		NullCheck(___hostname);
		int32_t L_13 = String_get_Length_m4766(___hostname, /*hidden argument*/&String_get_Length_m4766_MethodInfo);
		NullCheck(V_2);
		int32_t L_14 = String_get_Length_m4766(V_2, /*hidden argument*/&String_get_Length_m4766_MethodInfo);
		G_B15_0 = ((((int32_t)((((int32_t)V_4) < ((int32_t)((int32_t)(L_13-L_14))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		NullCheck(___pattern);
		String_t* L_15 = String_Substring_m4765(___pattern, 0, V_0, /*hidden argument*/&String_Substring_m4765_MethodInfo);
		V_5 = L_15;
		NullCheck(V_5);
		int32_t L_16 = String_get_Length_m4766(V_5, /*hidden argument*/&String_get_Length_m4766_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t6595_il2cpp_TypeInfo));
		CultureInfo_t6595 * L_17 = CultureInfo_get_InvariantCulture_m45629(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m45629_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_18 = String_Compare_m45857(NULL /*static, unused*/, ___hostname, 0, V_5, 0, L_16, 1, L_17, /*hidden argument*/&String_Compare_m45857_MethodInfo);
		return ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
extern Il2CppType X509CertificateCollection_t6490_0_0_1;
FieldInfo TlsServerCertificate_t6573____certificates_FieldInfo = 
{
	"certificates"/* name */
	, &X509CertificateCollection_t6490_0_0_1/* type */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerCertificate_t6573, ___certificates)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerCertificate_t6573_FieldInfos[] =
{
	&TlsServerCertificate_t6573____certificates_FieldInfo,
	NULL
};
extern Il2CppType Context_t6522_0_0_0;
extern Il2CppType ByteU5BU5D_t1033_0_0_0;
static ParameterInfo TlsServerCertificate_t6573_TlsServerCertificate__ctor_m45563_ParameterInfos[] = 
{
	{"context", 0, 134218503, &EmptyCustomAttributesCache, &Context_t6522_0_0_0},
	{"buffer", 1, 134218504, &EmptyCustomAttributesCache, &ByteU5BU5D_t1033_0_0_0},
};
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerCertificate__ctor_m45563_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerCertificate__ctor_m45563/* method */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, TlsServerCertificate_t6573_TlsServerCertificate__ctor_m45563_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 802/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
MethodInfo TlsServerCertificate_Update_m45564_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerCertificate_Update_m45564/* method */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 803/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
MethodInfo TlsServerCertificate_ProcessAsSsl3_m45565_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerCertificate_ProcessAsSsl3_m45565/* method */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 804/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
MethodInfo TlsServerCertificate_ProcessAsTls1_m45566_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerCertificate_ProcessAsTls1_m45566/* method */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 805/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509Certificate_t6494_0_0_0;
static ParameterInfo TlsServerCertificate_t6573_TlsServerCertificate_checkCertificateUsage_m45567_ParameterInfos[] = 
{
	{"cert", 0, 134218505, &EmptyCustomAttributesCache, &X509Certificate_t6494_0_0_0},
};
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
MethodInfo TlsServerCertificate_checkCertificateUsage_m45567_MethodInfo = 
{
	"checkCertificateUsage"/* name */
	, (methodPointerType)&TlsServerCertificate_checkCertificateUsage_m45567/* method */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, TlsServerCertificate_t6573_TlsServerCertificate_checkCertificateUsage_m45567_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 806/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509CertificateCollection_t6490_0_0_0;
static ParameterInfo TlsServerCertificate_t6573_TlsServerCertificate_validateCertificates_m45568_ParameterInfos[] = 
{
	{"certificates", 0, 134218506, &EmptyCustomAttributesCache, &X509CertificateCollection_t6490_0_0_0},
};
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
MethodInfo TlsServerCertificate_validateCertificates_m45568_MethodInfo = 
{
	"validateCertificates"/* name */
	, (methodPointerType)&TlsServerCertificate_validateCertificates_m45568/* method */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, TlsServerCertificate_t6573_TlsServerCertificate_validateCertificates_m45568_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 807/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509Certificate_t6494_0_0_0;
static ParameterInfo TlsServerCertificate_t6573_TlsServerCertificate_checkServerIdentity_m45569_ParameterInfos[] = 
{
	{"cert", 0, 134218507, &EmptyCustomAttributesCache, &X509Certificate_t6494_0_0_0},
};
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
MethodInfo TlsServerCertificate_checkServerIdentity_m45569_MethodInfo = 
{
	"checkServerIdentity"/* name */
	, (methodPointerType)&TlsServerCertificate_checkServerIdentity_m45569/* method */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, TlsServerCertificate_t6573_TlsServerCertificate_checkServerIdentity_m45569_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 808/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo TlsServerCertificate_t6573_TlsServerCertificate_checkDomainName_m45570_ParameterInfos[] = 
{
	{"subjectName", 0, 134218508, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
MethodInfo TlsServerCertificate_checkDomainName_m45570_MethodInfo = 
{
	"checkDomainName"/* name */
	, (methodPointerType)&TlsServerCertificate_checkDomainName_m45570/* method */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, TlsServerCertificate_t6573_TlsServerCertificate_checkDomainName_m45570_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 809/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo TlsServerCertificate_t6573_TlsServerCertificate_Match_m45571_ParameterInfos[] = 
{
	{"hostname", 0, 134218509, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"pattern", 1, 134218510, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
MethodInfo TlsServerCertificate_Match_m45571_MethodInfo = 
{
	"Match"/* name */
	, (methodPointerType)&TlsServerCertificate_Match_m45571/* method */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, TlsServerCertificate_t6573_TlsServerCertificate_Match_m45571_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 810/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* TlsServerCertificate_t6573_MethodInfos[] =
{
	&TlsServerCertificate__ctor_m45563_MethodInfo,
	&TlsServerCertificate_Update_m45564_MethodInfo,
	&TlsServerCertificate_ProcessAsSsl3_m45565_MethodInfo,
	&TlsServerCertificate_ProcessAsTls1_m45566_MethodInfo,
	&TlsServerCertificate_checkCertificateUsage_m45567_MethodInfo,
	&TlsServerCertificate_validateCertificates_m45568_MethodInfo,
	&TlsServerCertificate_checkServerIdentity_m45569_MethodInfo,
	&TlsServerCertificate_checkDomainName_m45570_MethodInfo,
	&TlsServerCertificate_Match_m45571_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Stream_Dispose_m45789_MethodInfo;
extern MethodInfo TlsStream_get_CanRead_m45504_MethodInfo;
extern MethodInfo TlsStream_get_CanSeek_m45505_MethodInfo;
extern MethodInfo TlsStream_get_CanWrite_m45503_MethodInfo;
extern MethodInfo TlsStream_get_Length_m45508_MethodInfo;
extern MethodInfo TlsStream_get_Position_m45506_MethodInfo;
extern MethodInfo TlsStream_set_Position_m45507_MethodInfo;
extern MethodInfo Stream_Dispose_m45824_MethodInfo;
extern MethodInfo Stream_Close_m6534_MethodInfo;
extern MethodInfo Stream_get_ReadTimeout_m45790_MethodInfo;
extern MethodInfo Stream_get_WriteTimeout_m45791_MethodInfo;
extern MethodInfo TlsStream_Flush_m45521_MethodInfo;
extern MethodInfo TlsStream_Read_m45524_MethodInfo;
extern MethodInfo Stream_ReadByte_m40388_MethodInfo;
extern MethodInfo TlsStream_Seek_m45523_MethodInfo;
extern MethodInfo TlsStream_SetLength_m45522_MethodInfo;
extern MethodInfo TlsStream_Write_m45525_MethodInfo;
extern MethodInfo Stream_WriteByte_m45774_MethodInfo;
extern MethodInfo Stream_BeginRead_m45794_MethodInfo;
extern MethodInfo Stream_BeginWrite_m45800_MethodInfo;
extern MethodInfo Stream_EndRead_m45796_MethodInfo;
extern MethodInfo Stream_EndWrite_m45801_MethodInfo;
extern MethodInfo TlsServerCertificate_ProcessAsTls1_m45566_MethodInfo;
extern MethodInfo TlsServerCertificate_ProcessAsSsl3_m45565_MethodInfo;
extern MethodInfo TlsServerCertificate_Update_m45564_MethodInfo;
extern MethodInfo HandshakeMessage_EncodeMessage_m45534_MethodInfo;
static MethodInfo* TlsServerCertificate_t6573_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Stream_Dispose_m45789_MethodInfo,
	&TlsStream_get_CanRead_m45504_MethodInfo,
	&TlsStream_get_CanSeek_m45505_MethodInfo,
	&TlsStream_get_CanWrite_m45503_MethodInfo,
	&TlsStream_get_Length_m45508_MethodInfo,
	&TlsStream_get_Position_m45506_MethodInfo,
	&TlsStream_set_Position_m45507_MethodInfo,
	&Stream_Dispose_m45824_MethodInfo,
	&Stream_Close_m6534_MethodInfo,
	&Stream_get_ReadTimeout_m45790_MethodInfo,
	&Stream_get_WriteTimeout_m45791_MethodInfo,
	&TlsStream_Flush_m45521_MethodInfo,
	&TlsStream_Read_m45524_MethodInfo,
	&Stream_ReadByte_m40388_MethodInfo,
	&TlsStream_Seek_m45523_MethodInfo,
	&TlsStream_SetLength_m45522_MethodInfo,
	&TlsStream_Write_m45525_MethodInfo,
	&Stream_WriteByte_m45774_MethodInfo,
	&Stream_BeginRead_m45794_MethodInfo,
	&Stream_BeginWrite_m45800_MethodInfo,
	&Stream_EndRead_m45796_MethodInfo,
	&Stream_EndWrite_m45801_MethodInfo,
	&TlsServerCertificate_ProcessAsTls1_m45566_MethodInfo,
	&TlsServerCertificate_ProcessAsSsl3_m45565_MethodInfo,
	&TlsServerCertificate_Update_m45564_MethodInfo,
	&HandshakeMessage_EncodeMessage_m45534_MethodInfo,
};
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair TlsServerCertificate_t6573_InterfacesOffsets[] = 
{
	{ &IDisposable_t971_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerCertificate_t6573_0_0_0;
extern Il2CppType TlsServerCertificate_t6573_1_0_0;
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
struct TlsServerCertificate_t6573;
extern TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo;
TypeInfo TlsServerCertificate_t6573_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerCertificate"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerCertificate_t6573_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerCertificate_t6573_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t6533_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerCertificate_t6573_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerCertificate_t6573_il2cpp_TypeInfo/* cast_class */
	, &TlsServerCertificate_t6573_0_0_0/* byval_arg */
	, &TlsServerCertificate_t6573_1_0_0/* this_arg */
	, TlsServerCertificate_t6573_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerCertificate_t6573)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 9/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 30/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerCertificateRequest_t6574_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"

#include "Mono.Security_ArrayTypes.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificateRequest_t6574_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateTypeU5BU5D_t6565_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t6566_il2cpp_TypeInfo;
extern TypeInfo ASN1_t6461_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t333_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Encoding_t1037_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t1033_il2cpp_TypeInfo;
extern TypeInfo Byte_t1026_il2cpp_TypeInfo;
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern MethodInfo HandshakeMessage__ctor_m45528_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m45533_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m45529_MethodInfo;
extern MethodInfo Context_get_ServerSettings_m45262_MethodInfo;
extern MethodInfo TlsServerSettings_set_CertificateTypes_m45497_MethodInfo;
extern MethodInfo TlsServerSettings_set_DistinguisedNames_m45498_MethodInfo;
extern MethodInfo TlsServerSettings_set_CertificateRequest_m45496_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m45575_MethodInfo;
extern MethodInfo TlsStream_ReadByte_m45510_MethodInfo;
extern MethodInfo TlsStream_ReadInt16_m45511_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m45513_MethodInfo;
extern MethodInfo ASN1__ctor_m44856_MethodInfo;
extern MethodInfo ASN1_get_Count_m44857_MethodInfo;
extern MethodInfo ASN1_get_Item_m44868_MethodInfo;
extern MethodInfo ASN1_get_Value_m44860_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m6527_MethodInfo;
extern MethodInfo Encoding_GetString_m39007_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificateRequest__ctor_m45572_MethodInfo;
 void TlsServerCertificateRequest__ctor_m45572 (TlsServerCertificateRequest_t6574 * __this, Context_t6522 * ___context, ByteU5BU5D_t1033* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m45528(__this, ___context, ((int32_t)13), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m45528_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern MethodInfo TlsServerCertificateRequest_Update_m45573_MethodInfo;
 void TlsServerCertificateRequest_Update_m45573 (TlsServerCertificateRequest_t6574 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m45533(__this, /*hidden argument*/&HandshakeMessage_Update_m45533_MethodInfo);
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t6538 * L_1 = Context_get_ServerSettings_m45262(L_0, /*hidden argument*/&Context_get_ServerSettings_m45262_MethodInfo);
		ClientCertificateTypeU5BU5D_t6565* L_2 = (__this->___certificateTypes);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m45497(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_CertificateTypes_m45497_MethodInfo);
		Context_t6522 * L_3 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t6538 * L_4 = Context_get_ServerSettings_m45262(L_3, /*hidden argument*/&Context_get_ServerSettings_m45262_MethodInfo);
		StringU5BU5D_t333* L_5 = (__this->___distinguisedNames);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m45498(L_4, L_5, /*hidden argument*/&TlsServerSettings_set_DistinguisedNames_m45498_MethodInfo);
		Context_t6522 * L_6 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_6);
		TlsServerSettings_t6538 * L_7 = Context_get_ServerSettings_m45262(L_6, /*hidden argument*/&Context_get_ServerSettings_m45262_MethodInfo);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m45496(L_7, 1, /*hidden argument*/&TlsServerSettings_set_CertificateRequest_m45496_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m45574_MethodInfo;
 void TlsServerCertificateRequest_ProcessAsSsl3_m45574 (TlsServerCertificateRequest_t6574 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificateRequest_ProcessAsTls1_m45575_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m45575_MethodInfo;
 void TlsServerCertificateRequest_ProcessAsTls1_m45575 (TlsServerCertificateRequest_t6574 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t6461 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t6461 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m45510(__this, /*hidden argument*/&TlsStream_ReadByte_m45510_MethodInfo);
		V_0 = L_0;
		__this->___certificateTypes = ((ClientCertificateTypeU5BU5D_t6565*)SZArrayNew(InitializedTypeInfo(&ClientCertificateTypeU5BU5D_t6565_il2cpp_TypeInfo), V_0));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t6565* L_1 = (__this->___certificateTypes);
		uint8_t L_2 = TlsStream_ReadByte_m45510(__this, /*hidden argument*/&TlsStream_ReadByte_m45510_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1)) = (int32_t)L_2;
		V_1 = ((int32_t)(V_1+1));
	}

IL_002c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_3 = TlsStream_ReadInt16_m45511(__this, /*hidden argument*/&TlsStream_ReadInt16_m45511_MethodInfo);
		if (!L_3)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_4 = TlsStream_ReadInt16_m45511(__this, /*hidden argument*/&TlsStream_ReadInt16_m45511_MethodInfo);
		ByteU5BU5D_t1033* L_5 = TlsStream_ReadBytes_m45513(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m45513_MethodInfo);
		ASN1_t6461 * L_6 = (ASN1_t6461 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t6461_il2cpp_TypeInfo));
		ASN1__ctor_m44856(L_6, L_5, /*hidden argument*/&ASN1__ctor_m44856_MethodInfo);
		V_2 = L_6;
		NullCheck(V_2);
		int32_t L_7 = ASN1_get_Count_m44857(V_2, /*hidden argument*/&ASN1_get_Count_m44857_MethodInfo);
		__this->___distinguisedNames = ((StringU5BU5D_t333*)SZArrayNew(InitializedTypeInfo(&StringU5BU5D_t333_il2cpp_TypeInfo), L_7));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		NullCheck(V_2);
		ASN1_t6461 * L_8 = ASN1_get_Item_m44868(V_2, V_3, /*hidden argument*/&ASN1_get_Item_m44868_MethodInfo);
		NullCheck(L_8);
		ByteU5BU5D_t1033* L_9 = ASN1_get_Value_m44860(L_8, /*hidden argument*/&ASN1_get_Value_m44860_MethodInfo);
		ASN1_t6461 * L_10 = (ASN1_t6461 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t6461_il2cpp_TypeInfo));
		ASN1__ctor_m44856(L_10, L_9, /*hidden argument*/&ASN1__ctor_m44856_MethodInfo);
		V_4 = L_10;
		StringU5BU5D_t333* L_11 = (__this->___distinguisedNames);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1037_il2cpp_TypeInfo));
		Encoding_t1037 * L_12 = Encoding_get_UTF8_m6527(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m6527_MethodInfo);
		NullCheck(V_4);
		ASN1_t6461 * L_13 = ASN1_get_Item_m44868(V_4, 1, /*hidden argument*/&ASN1_get_Item_m44868_MethodInfo);
		NullCheck(L_13);
		ByteU5BU5D_t1033* L_14 = ASN1_get_Value_m44860(L_13, /*hidden argument*/&ASN1_get_Value_m44860_MethodInfo);
		NullCheck(L_12);
		String_t* L_15 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t1033* >::Invoke(&Encoding_GetString_m39007_MethodInfo, L_12, L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_3);
		ArrayElementTypeCheck (L_11, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, V_3)) = (String_t*)L_15;
		V_3 = ((int32_t)(V_3+1));
	}

IL_009e:
	{
		NullCheck(V_2);
		int32_t L_16 = ASN1_get_Count_m44857(V_2, /*hidden argument*/&ASN1_get_Count_m44857_MethodInfo);
		if ((((int32_t)V_3) < ((int32_t)L_16)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
extern Il2CppType ClientCertificateTypeU5BU5D_t6565_0_0_1;
FieldInfo TlsServerCertificateRequest_t6574____certificateTypes_FieldInfo = 
{
	"certificateTypes"/* name */
	, &ClientCertificateTypeU5BU5D_t6565_0_0_1/* type */
	, &TlsServerCertificateRequest_t6574_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerCertificateRequest_t6574, ___certificateTypes)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType StringU5BU5D_t333_0_0_1;
FieldInfo TlsServerCertificateRequest_t6574____distinguisedNames_FieldInfo = 
{
	"distinguisedNames"/* name */
	, &StringU5BU5D_t333_0_0_1/* type */
	, &TlsServerCertificateRequest_t6574_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerCertificateRequest_t6574, ___distinguisedNames)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerCertificateRequest_t6574_FieldInfos[] =
{
	&TlsServerCertificateRequest_t6574____certificateTypes_FieldInfo,
	&TlsServerCertificateRequest_t6574____distinguisedNames_FieldInfo,
	NULL
};
extern Il2CppType Context_t6522_0_0_0;
extern Il2CppType ByteU5BU5D_t1033_0_0_0;
static ParameterInfo TlsServerCertificateRequest_t6574_TlsServerCertificateRequest__ctor_m45572_ParameterInfos[] = 
{
	{"context", 0, 134218511, &EmptyCustomAttributesCache, &Context_t6522_0_0_0},
	{"buffer", 1, 134218512, &EmptyCustomAttributesCache, &ByteU5BU5D_t1033_0_0_0},
};
extern TypeInfo TlsServerCertificateRequest_t6574_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerCertificateRequest__ctor_m45572_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerCertificateRequest__ctor_m45572/* method */
	, &TlsServerCertificateRequest_t6574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, TlsServerCertificateRequest_t6574_TlsServerCertificateRequest__ctor_m45572_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 811/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerCertificateRequest_t6574_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
MethodInfo TlsServerCertificateRequest_Update_m45573_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerCertificateRequest_Update_m45573/* method */
	, &TlsServerCertificateRequest_t6574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 812/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerCertificateRequest_t6574_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m45574_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerCertificateRequest_ProcessAsSsl3_m45574/* method */
	, &TlsServerCertificateRequest_t6574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 813/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerCertificateRequest_t6574_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m45575_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerCertificateRequest_ProcessAsTls1_m45575/* method */
	, &TlsServerCertificateRequest_t6574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 814/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* TlsServerCertificateRequest_t6574_MethodInfos[] =
{
	&TlsServerCertificateRequest__ctor_m45572_MethodInfo,
	&TlsServerCertificateRequest_Update_m45573_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsSsl3_m45574_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsTls1_m45575_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Stream_Dispose_m45789_MethodInfo;
extern MethodInfo TlsStream_get_CanRead_m45504_MethodInfo;
extern MethodInfo TlsStream_get_CanSeek_m45505_MethodInfo;
extern MethodInfo TlsStream_get_CanWrite_m45503_MethodInfo;
extern MethodInfo TlsStream_get_Length_m45508_MethodInfo;
extern MethodInfo TlsStream_get_Position_m45506_MethodInfo;
extern MethodInfo TlsStream_set_Position_m45507_MethodInfo;
extern MethodInfo Stream_Dispose_m45824_MethodInfo;
extern MethodInfo Stream_Close_m6534_MethodInfo;
extern MethodInfo Stream_get_ReadTimeout_m45790_MethodInfo;
extern MethodInfo Stream_get_WriteTimeout_m45791_MethodInfo;
extern MethodInfo TlsStream_Flush_m45521_MethodInfo;
extern MethodInfo TlsStream_Read_m45524_MethodInfo;
extern MethodInfo Stream_ReadByte_m40388_MethodInfo;
extern MethodInfo TlsStream_Seek_m45523_MethodInfo;
extern MethodInfo TlsStream_SetLength_m45522_MethodInfo;
extern MethodInfo TlsStream_Write_m45525_MethodInfo;
extern MethodInfo Stream_WriteByte_m45774_MethodInfo;
extern MethodInfo Stream_BeginRead_m45794_MethodInfo;
extern MethodInfo Stream_BeginWrite_m45800_MethodInfo;
extern MethodInfo Stream_EndRead_m45796_MethodInfo;
extern MethodInfo Stream_EndWrite_m45801_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m45575_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m45574_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_Update_m45573_MethodInfo;
extern MethodInfo HandshakeMessage_EncodeMessage_m45534_MethodInfo;
static MethodInfo* TlsServerCertificateRequest_t6574_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Stream_Dispose_m45789_MethodInfo,
	&TlsStream_get_CanRead_m45504_MethodInfo,
	&TlsStream_get_CanSeek_m45505_MethodInfo,
	&TlsStream_get_CanWrite_m45503_MethodInfo,
	&TlsStream_get_Length_m45508_MethodInfo,
	&TlsStream_get_Position_m45506_MethodInfo,
	&TlsStream_set_Position_m45507_MethodInfo,
	&Stream_Dispose_m45824_MethodInfo,
	&Stream_Close_m6534_MethodInfo,
	&Stream_get_ReadTimeout_m45790_MethodInfo,
	&Stream_get_WriteTimeout_m45791_MethodInfo,
	&TlsStream_Flush_m45521_MethodInfo,
	&TlsStream_Read_m45524_MethodInfo,
	&Stream_ReadByte_m40388_MethodInfo,
	&TlsStream_Seek_m45523_MethodInfo,
	&TlsStream_SetLength_m45522_MethodInfo,
	&TlsStream_Write_m45525_MethodInfo,
	&Stream_WriteByte_m45774_MethodInfo,
	&Stream_BeginRead_m45794_MethodInfo,
	&Stream_BeginWrite_m45800_MethodInfo,
	&Stream_EndRead_m45796_MethodInfo,
	&Stream_EndWrite_m45801_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsTls1_m45575_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsSsl3_m45574_MethodInfo,
	&TlsServerCertificateRequest_Update_m45573_MethodInfo,
	&HandshakeMessage_EncodeMessage_m45534_MethodInfo,
};
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair TlsServerCertificateRequest_t6574_InterfacesOffsets[] = 
{
	{ &IDisposable_t971_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerCertificateRequest_t6574_0_0_0;
extern Il2CppType TlsServerCertificateRequest_t6574_1_0_0;
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
struct TlsServerCertificateRequest_t6574;
extern TypeInfo TlsServerCertificateRequest_t6574_il2cpp_TypeInfo;
TypeInfo TlsServerCertificateRequest_t6574_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerCertificateRequest"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerCertificateRequest_t6574_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerCertificateRequest_t6574_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t6533_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerCertificateRequest_t6574_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerCertificateRequest_t6574_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerCertificateRequest_t6574_il2cpp_TypeInfo/* cast_class */
	, &TlsServerCertificateRequest_t6574_0_0_0/* byval_arg */
	, &TlsServerCertificateRequest_t6574_1_0_0/* this_arg */
	, TlsServerCertificateRequest_t6574_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerCertificateRequest_t6574)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 30/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerFinished_t6575_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
extern TypeInfo ByteU5BU5D_t1033_il2cpp_TypeInfo;
extern TypeInfo Byte_t1026_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
extern TypeInfo TlsServerFinished_t6575_il2cpp_TypeInfo;
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t6562_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithm_t6473_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t6523_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t6534_il2cpp_TypeInfo;
extern TypeInfo Int64_t1035_il2cpp_TypeInfo;
extern TypeInfo TlsException_t6564_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t6517_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"
extern MethodInfo HandshakeMessage__ctor_m45528_MethodInfo;
extern MethodInfo RuntimeHelpers_InitializeArray_m38914_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m45533_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m45529_MethodInfo;
extern MethodInfo Context_set_HandshakeState_m45267_MethodInfo;
extern MethodInfo Context_get_MasterSecret_m45287_MethodInfo;
extern MethodInfo SslHandshakeHash__ctor_m45408_MethodInfo;
extern MethodInfo Context_get_HandshakeMessages_m45274_MethodInfo;
extern MethodInfo TlsStream_ToArray_m45520_MethodInfo;
extern MethodInfo HashAlgorithm_TransformBlock_m45655_MethodInfo;
extern MethodInfo HashAlgorithm_TransformFinalBlock_m45656_MethodInfo;
extern MethodInfo TlsStream_get_Length_m45508_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m45513_MethodInfo;
extern MethodInfo HashAlgorithm_get_Hash_m45657_MethodInfo;
extern MethodInfo HandshakeMessage_Compare_m45535_MethodInfo;
extern MethodInfo TlsException__ctor_m45484_MethodInfo;
extern MethodInfo MD5SHA1__ctor_m45148_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m45685_MethodInfo;
extern MethodInfo Context_get_Current_m45305_MethodInfo;
extern MethodInfo SecurityParameters_get_Cipher_m45372_MethodInfo;
extern MethodInfo CipherSuite_PRF_m45187_MethodInfo;
extern MethodInfo TlsException__ctor_m45479_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D22_FieldInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerFinished__ctor_m45576_MethodInfo;
 void TlsServerFinished__ctor_m45576 (TlsServerFinished_t6575 * __this, Context_t6522 * ___context, ByteU5BU5D_t1033* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m45528(__this, ___context, ((int32_t)20), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m45528_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern MethodInfo TlsServerFinished__cctor_m45577_MethodInfo;
 void TlsServerFinished__cctor_m45577 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		ByteU5BU5D_t1033* L_0 = ((ByteU5BU5D_t1033*)SZArrayNew(InitializedTypeInfo(&ByteU5BU5D_t1033_il2cpp_TypeInfo), 4));
		RuntimeHelpers_InitializeArray_m38914(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D22_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m38914_MethodInfo);
		((TlsServerFinished_t6575_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t6575_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern MethodInfo TlsServerFinished_Update_m45578_MethodInfo;
 void TlsServerFinished_Update_m45578 (TlsServerFinished_t6575 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m45533(__this, /*hidden argument*/&HandshakeMessage_Update_m45533_MethodInfo);
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_0);
		Context_set_HandshakeState_m45267(L_0, 2, /*hidden argument*/&Context_set_HandshakeState_m45267_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern MethodInfo TlsServerFinished_ProcessAsSsl3_m45579_MethodInfo;
 void TlsServerFinished_ProcessAsSsl3_m45579 (TlsServerFinished_t6575 * __this, MethodInfo* method){
	HashAlgorithm_t6473 * V_0 = {0};
	ByteU5BU5D_t1033* V_1 = {0};
	ByteU5BU5D_t1033* V_2 = {0};
	ByteU5BU5D_t1033* V_3 = {0};
	{
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_0);
		ByteU5BU5D_t1033* L_1 = Context_get_MasterSecret_m45287(L_0, /*hidden argument*/&Context_get_MasterSecret_m45287_MethodInfo);
		SslHandshakeHash_t6562 * L_2 = (SslHandshakeHash_t6562 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SslHandshakeHash_t6562_il2cpp_TypeInfo));
		SslHandshakeHash__ctor_m45408(L_2, L_1, /*hidden argument*/&SslHandshakeHash__ctor_m45408_MethodInfo);
		V_0 = L_2;
		Context_t6522 * L_3 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_3);
		TlsStream_t6534 * L_4 = Context_get_HandshakeMessages_m45274(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m45274_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t1033* L_5 = TlsStream_ToArray_m45520(L_4, /*hidden argument*/&TlsStream_ToArray_m45520_MethodInfo);
		V_1 = L_5;
		NullCheck(V_1);
		NullCheck(V_0);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1033*, int32_t, int32_t, ByteU5BU5D_t1033*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m45655_MethodInfo, V_0, V_1, 0, (((int32_t)(((Array_t *)V_1)->max_length))), V_1, 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TlsServerFinished_t6575_il2cpp_TypeInfo));
		NullCheck((((TlsServerFinished_t6575_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t6575_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker));
		NullCheck(V_0);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1033*, int32_t, int32_t, ByteU5BU5D_t1033*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m45655_MethodInfo, V_0, (((TlsServerFinished_t6575_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t6575_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker), 0, (((int32_t)(((Array_t *)(((TlsServerFinished_t6575_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t6575_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker))->max_length))), (((TlsServerFinished_t6575_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t6575_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker), 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CipherSuite_t6523_il2cpp_TypeInfo));
		NullCheck(V_0);
		VirtFuncInvoker3< ByteU5BU5D_t1033*, ByteU5BU5D_t1033*, int32_t, int32_t >::Invoke(&HashAlgorithm_TransformFinalBlock_m45656_MethodInfo, V_0, (((CipherSuite_t6523_StaticFields*)InitializedTypeInfo(&CipherSuite_t6523_il2cpp_TypeInfo)->static_fields)->___EmptyArray), 0, 0);
		int64_t L_6 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m45508_MethodInfo, __this);
		ByteU5BU5D_t1033* L_7 = TlsStream_ReadBytes_m45513(__this, (((int32_t)L_6)), /*hidden argument*/&TlsStream_ReadBytes_m45513_MethodInfo);
		V_2 = L_7;
		NullCheck(V_0);
		ByteU5BU5D_t1033* L_8 = (ByteU5BU5D_t1033*)VirtFuncInvoker0< ByteU5BU5D_t1033* >::Invoke(&HashAlgorithm_get_Hash_m45657_MethodInfo, V_0);
		V_3 = L_8;
		bool L_9 = HandshakeMessage_Compare_m45535(NULL /*static, unused*/, V_3, V_2, /*hidden argument*/&HandshakeMessage_Compare_m45535_MethodInfo);
		if (L_9)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t6564 * L_10 = (TlsException_t6564 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t6564_il2cpp_TypeInfo));
		TlsException__ctor_m45484(L_10, ((int32_t)71), (String_t*) &_stringLiteral4344, /*hidden argument*/&TlsException__ctor_m45484_MethodInfo);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern MethodInfo TlsServerFinished_ProcessAsTls1_m45580_MethodInfo;
 void TlsServerFinished_ProcessAsTls1_m45580 (TlsServerFinished_t6575 * __this, MethodInfo* method){
	ByteU5BU5D_t1033* V_0 = {0};
	HashAlgorithm_t6473 * V_1 = {0};
	ByteU5BU5D_t1033* V_2 = {0};
	ByteU5BU5D_t1033* V_3 = {0};
	ByteU5BU5D_t1033* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m45508_MethodInfo, __this);
		ByteU5BU5D_t1033* L_1 = TlsStream_ReadBytes_m45513(__this, (((int32_t)L_0)), /*hidden argument*/&TlsStream_ReadBytes_m45513_MethodInfo);
		V_0 = L_1;
		MD5SHA1_t6517 * L_2 = (MD5SHA1_t6517 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t6517_il2cpp_TypeInfo));
		MD5SHA1__ctor_m45148(L_2, /*hidden argument*/&MD5SHA1__ctor_m45148_MethodInfo);
		V_1 = L_2;
		Context_t6522 * L_3 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_3);
		TlsStream_t6534 * L_4 = Context_get_HandshakeMessages_m45274(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m45274_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t1033* L_5 = TlsStream_ToArray_m45520(L_4, /*hidden argument*/&TlsStream_ToArray_m45520_MethodInfo);
		V_2 = L_5;
		NullCheck(V_2);
		NullCheck(V_1);
		ByteU5BU5D_t1033* L_6 = HashAlgorithm_ComputeHash_m45685(V_1, V_2, 0, (((int32_t)(((Array_t *)V_2)->max_length))), /*hidden argument*/&HashAlgorithm_ComputeHash_m45685_MethodInfo);
		V_3 = L_6;
		Context_t6522 * L_7 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_7);
		SecurityParameters_t6540 * L_8 = Context_get_Current_m45305(L_7, /*hidden argument*/&Context_get_Current_m45305_MethodInfo);
		NullCheck(L_8);
		CipherSuite_t6523 * L_9 = SecurityParameters_get_Cipher_m45372(L_8, /*hidden argument*/&SecurityParameters_get_Cipher_m45372_MethodInfo);
		Context_t6522 * L_10 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t1033* L_11 = Context_get_MasterSecret_m45287(L_10, /*hidden argument*/&Context_get_MasterSecret_m45287_MethodInfo);
		NullCheck(L_9);
		ByteU5BU5D_t1033* L_12 = CipherSuite_PRF_m45187(L_9, L_11, (String_t*) &_stringLiteral4345, V_3, ((int32_t)12), /*hidden argument*/&CipherSuite_PRF_m45187_MethodInfo);
		V_4 = L_12;
		bool L_13 = HandshakeMessage_Compare_m45535(NULL /*static, unused*/, V_4, V_0, /*hidden argument*/&HandshakeMessage_Compare_m45535_MethodInfo);
		if (L_13)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t6564 * L_14 = (TlsException_t6564 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t6564_il2cpp_TypeInfo));
		TlsException__ctor_m45479(L_14, (String_t*) &_stringLiteral4344, /*hidden argument*/&TlsException__ctor_m45479_MethodInfo);
		il2cpp_codegen_raise_exception (L_14);
	}

IL_0073:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
extern Il2CppType ByteU5BU5D_t1033_0_0_17;
FieldInfo TlsServerFinished_t6575____Ssl3Marker_FieldInfo = 
{
	"Ssl3Marker"/* name */
	, &ByteU5BU5D_t1033_0_0_17/* type */
	, &TlsServerFinished_t6575_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerFinished_t6575_StaticFields, ___Ssl3Marker)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerFinished_t6575_FieldInfos[] =
{
	&TlsServerFinished_t6575____Ssl3Marker_FieldInfo,
	NULL
};
extern Il2CppType Context_t6522_0_0_0;
extern Il2CppType ByteU5BU5D_t1033_0_0_0;
static ParameterInfo TlsServerFinished_t6575_TlsServerFinished__ctor_m45576_ParameterInfos[] = 
{
	{"context", 0, 134218513, &EmptyCustomAttributesCache, &Context_t6522_0_0_0},
	{"buffer", 1, 134218514, &EmptyCustomAttributesCache, &ByteU5BU5D_t1033_0_0_0},
};
extern TypeInfo TlsServerFinished_t6575_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerFinished__ctor_m45576_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerFinished__ctor_m45576/* method */
	, &TlsServerFinished_t6575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, TlsServerFinished_t6575_TlsServerFinished__ctor_m45576_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 815/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerFinished_t6575_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
MethodInfo TlsServerFinished__cctor_m45577_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&TlsServerFinished__cctor_m45577/* method */
	, &TlsServerFinished_t6575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 816/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerFinished_t6575_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
MethodInfo TlsServerFinished_Update_m45578_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerFinished_Update_m45578/* method */
	, &TlsServerFinished_t6575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 817/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerFinished_t6575_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
MethodInfo TlsServerFinished_ProcessAsSsl3_m45579_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerFinished_ProcessAsSsl3_m45579/* method */
	, &TlsServerFinished_t6575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 818/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerFinished_t6575_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
MethodInfo TlsServerFinished_ProcessAsTls1_m45580_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerFinished_ProcessAsTls1_m45580/* method */
	, &TlsServerFinished_t6575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 819/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* TlsServerFinished_t6575_MethodInfos[] =
{
	&TlsServerFinished__ctor_m45576_MethodInfo,
	&TlsServerFinished__cctor_m45577_MethodInfo,
	&TlsServerFinished_Update_m45578_MethodInfo,
	&TlsServerFinished_ProcessAsSsl3_m45579_MethodInfo,
	&TlsServerFinished_ProcessAsTls1_m45580_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Stream_Dispose_m45789_MethodInfo;
extern MethodInfo TlsStream_get_CanRead_m45504_MethodInfo;
extern MethodInfo TlsStream_get_CanSeek_m45505_MethodInfo;
extern MethodInfo TlsStream_get_CanWrite_m45503_MethodInfo;
extern MethodInfo TlsStream_get_Length_m45508_MethodInfo;
extern MethodInfo TlsStream_get_Position_m45506_MethodInfo;
extern MethodInfo TlsStream_set_Position_m45507_MethodInfo;
extern MethodInfo Stream_Dispose_m45824_MethodInfo;
extern MethodInfo Stream_Close_m6534_MethodInfo;
extern MethodInfo Stream_get_ReadTimeout_m45790_MethodInfo;
extern MethodInfo Stream_get_WriteTimeout_m45791_MethodInfo;
extern MethodInfo TlsStream_Flush_m45521_MethodInfo;
extern MethodInfo TlsStream_Read_m45524_MethodInfo;
extern MethodInfo Stream_ReadByte_m40388_MethodInfo;
extern MethodInfo TlsStream_Seek_m45523_MethodInfo;
extern MethodInfo TlsStream_SetLength_m45522_MethodInfo;
extern MethodInfo TlsStream_Write_m45525_MethodInfo;
extern MethodInfo Stream_WriteByte_m45774_MethodInfo;
extern MethodInfo Stream_BeginRead_m45794_MethodInfo;
extern MethodInfo Stream_BeginWrite_m45800_MethodInfo;
extern MethodInfo Stream_EndRead_m45796_MethodInfo;
extern MethodInfo Stream_EndWrite_m45801_MethodInfo;
extern MethodInfo TlsServerFinished_ProcessAsTls1_m45580_MethodInfo;
extern MethodInfo TlsServerFinished_ProcessAsSsl3_m45579_MethodInfo;
extern MethodInfo TlsServerFinished_Update_m45578_MethodInfo;
extern MethodInfo HandshakeMessage_EncodeMessage_m45534_MethodInfo;
static MethodInfo* TlsServerFinished_t6575_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Stream_Dispose_m45789_MethodInfo,
	&TlsStream_get_CanRead_m45504_MethodInfo,
	&TlsStream_get_CanSeek_m45505_MethodInfo,
	&TlsStream_get_CanWrite_m45503_MethodInfo,
	&TlsStream_get_Length_m45508_MethodInfo,
	&TlsStream_get_Position_m45506_MethodInfo,
	&TlsStream_set_Position_m45507_MethodInfo,
	&Stream_Dispose_m45824_MethodInfo,
	&Stream_Close_m6534_MethodInfo,
	&Stream_get_ReadTimeout_m45790_MethodInfo,
	&Stream_get_WriteTimeout_m45791_MethodInfo,
	&TlsStream_Flush_m45521_MethodInfo,
	&TlsStream_Read_m45524_MethodInfo,
	&Stream_ReadByte_m40388_MethodInfo,
	&TlsStream_Seek_m45523_MethodInfo,
	&TlsStream_SetLength_m45522_MethodInfo,
	&TlsStream_Write_m45525_MethodInfo,
	&Stream_WriteByte_m45774_MethodInfo,
	&Stream_BeginRead_m45794_MethodInfo,
	&Stream_BeginWrite_m45800_MethodInfo,
	&Stream_EndRead_m45796_MethodInfo,
	&Stream_EndWrite_m45801_MethodInfo,
	&TlsServerFinished_ProcessAsTls1_m45580_MethodInfo,
	&TlsServerFinished_ProcessAsSsl3_m45579_MethodInfo,
	&TlsServerFinished_Update_m45578_MethodInfo,
	&HandshakeMessage_EncodeMessage_m45534_MethodInfo,
};
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair TlsServerFinished_t6575_InterfacesOffsets[] = 
{
	{ &IDisposable_t971_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerFinished_t6575_0_0_0;
extern Il2CppType TlsServerFinished_t6575_1_0_0;
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
struct TlsServerFinished_t6575;
extern TypeInfo TlsServerFinished_t6575_il2cpp_TypeInfo;
TypeInfo TlsServerFinished_t6575_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerFinished"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerFinished_t6575_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerFinished_t6575_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t6533_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerFinished_t6575_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerFinished_t6575_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerFinished_t6575_il2cpp_TypeInfo/* cast_class */
	, &TlsServerFinished_t6575_0_0_0/* byval_arg */
	, &TlsServerFinished_t6575_1_0_0/* this_arg */
	, TlsServerFinished_t6575_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerFinished_t6575)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(TlsServerFinished_t6575_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 30/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHello_t6576_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"

// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo TlsServerHello_t6576_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t1033_il2cpp_TypeInfo;
extern TypeInfo Byte_t1026_il2cpp_TypeInfo;
extern TypeInfo ClientSessionCache_t6536_il2cpp_TypeInfo;
extern TypeInfo TlsException_t6564_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t6524_il2cpp_TypeInfo;
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientSessionCache
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteFactory
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"
extern MethodInfo HandshakeMessage__ctor_m45528_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m45533_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m45529_MethodInfo;
extern MethodInfo Context_set_SessionId_m45259_MethodInfo;
extern MethodInfo Context_set_ServerRandom_m45282_MethodInfo;
extern MethodInfo Context_get_Negotiating_m45306_MethodInfo;
extern MethodInfo SecurityParameters_set_Cipher_m45373_MethodInfo;
extern MethodInfo Context_set_CompressionMethod_m45261_MethodInfo;
extern MethodInfo Context_set_ProtocolNegotiated_m45253_MethodInfo;
extern MethodInfo Context_get_ClientRandom_m45279_MethodInfo;
extern MethodInfo Context_get_ServerRandom_m45281_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m45619_MethodInfo;
extern MethodInfo Context_set_RandomCS_m45284_MethodInfo;
extern MethodInfo Context_set_RandomSC_m45286_MethodInfo;
extern MethodInfo TlsServerHello_ProcessAsTls1_m45584_MethodInfo;
extern MethodInfo TlsStream_ReadInt16_m45511_MethodInfo;
extern MethodInfo TlsServerHello_processProtocol_m45585_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m45513_MethodInfo;
extern MethodInfo TlsStream_ReadByte_m45510_MethodInfo;
extern MethodInfo Context_get_ClientSettings_m45263_MethodInfo;
extern MethodInfo TlsClientSettings_get_TargetHost_m45472_MethodInfo;
extern MethodInfo ClientSessionCache_Add_m45244_MethodInfo;
extern MethodInfo Context_get_SessionId_m45258_MethodInfo;
extern MethodInfo HandshakeMessage_Compare_m45535_MethodInfo;
extern MethodInfo Context_set_AbbreviatedHandshake_m45251_MethodInfo;
extern MethodInfo Context_get_SupportedCiphers_m45272_MethodInfo;
extern MethodInfo CipherSuiteCollection_IndexOf_m45213_MethodInfo;
extern MethodInfo TlsException__ctor_m45484_MethodInfo;
extern MethodInfo CipherSuiteCollection_get_Item_m45206_MethodInfo;
extern MethodInfo Context_DecodeProtocolCode_m45303_MethodInfo;
extern MethodInfo Context_get_SecurityProtocolFlags_m45256_MethodInfo;
extern MethodInfo Context_set_SecurityProtocol_m45255_MethodInfo;
extern MethodInfo CipherSuiteCollection_Clear_m45211_MethodInfo;
extern MethodInfo Context_set_SupportedCiphers_m45273_MethodInfo;
extern MethodInfo CipherSuiteFactory_GetSupportedCiphers_m45218_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHello__ctor_m45581_MethodInfo;
 void TlsServerHello__ctor_m45581 (TlsServerHello_t6576 * __this, Context_t6522 * ___context, ByteU5BU5D_t1033* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m45528(__this, ___context, 2, ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m45528_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern MethodInfo TlsServerHello_Update_m45582_MethodInfo;
 void TlsServerHello_Update_m45582 (TlsServerHello_t6576 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t1033* V_3 = {0};
	ByteU5BU5D_t1033* V_4 = {0};
	{
		HandshakeMessage_Update_m45533(__this, /*hidden argument*/&HandshakeMessage_Update_m45533_MethodInfo);
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		ByteU5BU5D_t1033* L_1 = (__this->___sessionId);
		NullCheck(L_0);
		Context_set_SessionId_m45259(L_0, L_1, /*hidden argument*/&Context_set_SessionId_m45259_MethodInfo);
		Context_t6522 * L_2 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		ByteU5BU5D_t1033* L_3 = (__this->___random);
		NullCheck(L_2);
		Context_set_ServerRandom_m45282(L_2, L_3, /*hidden argument*/&Context_set_ServerRandom_m45282_MethodInfo);
		Context_t6522 * L_4 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_4);
		SecurityParameters_t6540 * L_5 = Context_get_Negotiating_m45306(L_4, /*hidden argument*/&Context_get_Negotiating_m45306_MethodInfo);
		CipherSuite_t6523 * L_6 = (__this->___cipherSuite);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m45373(L_5, L_6, /*hidden argument*/&SecurityParameters_set_Cipher_m45373_MethodInfo);
		Context_t6522 * L_7 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		int32_t L_8 = (__this->___compressionMethod);
		NullCheck(L_7);
		Context_set_CompressionMethod_m45261(L_7, L_8, /*hidden argument*/&Context_set_CompressionMethod_m45261_MethodInfo);
		Context_t6522 * L_9 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m45253(L_9, 1, /*hidden argument*/&Context_set_ProtocolNegotiated_m45253_MethodInfo);
		Context_t6522 * L_10 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t1033* L_11 = Context_get_ClientRandom_m45279(L_10, /*hidden argument*/&Context_get_ClientRandom_m45279_MethodInfo);
		NullCheck(L_11);
		V_0 = (((int32_t)(((Array_t *)L_11)->max_length)));
		Context_t6522 * L_12 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t1033* L_13 = Context_get_ServerRandom_m45281(L_12, /*hidden argument*/&Context_get_ServerRandom_m45281_MethodInfo);
		NullCheck(L_13);
		V_1 = (((int32_t)(((Array_t *)L_13)->max_length)));
		V_2 = ((int32_t)(V_0+V_1));
		V_3 = ((ByteU5BU5D_t1033*)SZArrayNew(InitializedTypeInfo(&ByteU5BU5D_t1033_il2cpp_TypeInfo), V_2));
		Context_t6522 * L_14 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_14);
		ByteU5BU5D_t1033* L_15 = Context_get_ClientRandom_m45279(L_14, /*hidden argument*/&Context_get_ClientRandom_m45279_MethodInfo);
		Buffer_BlockCopy_m45619(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, 0, (Array_t *)(Array_t *)V_3, 0, V_0, /*hidden argument*/&Buffer_BlockCopy_m45619_MethodInfo);
		Context_t6522 * L_16 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_16);
		ByteU5BU5D_t1033* L_17 = Context_get_ServerRandom_m45281(L_16, /*hidden argument*/&Context_get_ServerRandom_m45281_MethodInfo);
		Buffer_BlockCopy_m45619(NULL /*static, unused*/, (Array_t *)(Array_t *)L_17, 0, (Array_t *)(Array_t *)V_3, V_0, V_1, /*hidden argument*/&Buffer_BlockCopy_m45619_MethodInfo);
		Context_t6522 * L_18 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_18);
		Context_set_RandomCS_m45284(L_18, V_3, /*hidden argument*/&Context_set_RandomCS_m45284_MethodInfo);
		V_4 = ((ByteU5BU5D_t1033*)SZArrayNew(InitializedTypeInfo(&ByteU5BU5D_t1033_il2cpp_TypeInfo), V_2));
		Context_t6522 * L_19 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_19);
		ByteU5BU5D_t1033* L_20 = Context_get_ServerRandom_m45281(L_19, /*hidden argument*/&Context_get_ServerRandom_m45281_MethodInfo);
		Buffer_BlockCopy_m45619(NULL /*static, unused*/, (Array_t *)(Array_t *)L_20, 0, (Array_t *)(Array_t *)V_4, 0, V_1, /*hidden argument*/&Buffer_BlockCopy_m45619_MethodInfo);
		Context_t6522 * L_21 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_21);
		ByteU5BU5D_t1033* L_22 = Context_get_ClientRandom_m45279(L_21, /*hidden argument*/&Context_get_ClientRandom_m45279_MethodInfo);
		Buffer_BlockCopy_m45619(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)V_4, V_1, V_0, /*hidden argument*/&Buffer_BlockCopy_m45619_MethodInfo);
		Context_t6522 * L_23 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_23);
		Context_set_RandomSC_m45286(L_23, V_4, /*hidden argument*/&Context_set_RandomSC_m45286_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern MethodInfo TlsServerHello_ProcessAsSsl3_m45583_MethodInfo;
 void TlsServerHello_ProcessAsSsl3_m45583 (TlsServerHello_t6576 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerHello_ProcessAsTls1_m45584_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern MethodInfo TlsServerHello_ProcessAsTls1_m45584_MethodInfo;
 void TlsServerHello_ProcessAsTls1_m45584 (TlsServerHello_t6576 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m45511(__this, /*hidden argument*/&TlsStream_ReadInt16_m45511_MethodInfo);
		TlsServerHello_processProtocol_m45585(__this, L_0, /*hidden argument*/&TlsServerHello_processProtocol_m45585_MethodInfo);
		ByteU5BU5D_t1033* L_1 = TlsStream_ReadBytes_m45513(__this, ((int32_t)32), /*hidden argument*/&TlsStream_ReadBytes_m45513_MethodInfo);
		__this->___random = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m45510(__this, /*hidden argument*/&TlsStream_ReadByte_m45510_MethodInfo);
		V_0 = L_2;
		if ((((int32_t)V_0) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_t1033* L_3 = TlsStream_ReadBytes_m45513(__this, V_0, /*hidden argument*/&TlsStream_ReadBytes_m45513_MethodInfo);
		__this->___sessionId = L_3;
		Context_t6522 * L_4 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_4);
		TlsClientSettings_t6539 * L_5 = Context_get_ClientSettings_m45263(L_4, /*hidden argument*/&Context_get_ClientSettings_m45263_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = TlsClientSettings_get_TargetHost_m45472(L_5, /*hidden argument*/&TlsClientSettings_get_TargetHost_m45472_MethodInfo);
		ByteU5BU5D_t1033* L_7 = (__this->___sessionId);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ClientSessionCache_t6536_il2cpp_TypeInfo));
		ClientSessionCache_Add_m45244(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&ClientSessionCache_Add_m45244_MethodInfo);
		Context_t6522 * L_8 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		ByteU5BU5D_t1033* L_9 = (__this->___sessionId);
		Context_t6522 * L_10 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t1033* L_11 = Context_get_SessionId_m45258(L_10, /*hidden argument*/&Context_get_SessionId_m45258_MethodInfo);
		bool L_12 = HandshakeMessage_Compare_m45535(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&HandshakeMessage_Compare_m45535_MethodInfo);
		NullCheck(L_8);
		Context_set_AbbreviatedHandshake_m45251(L_8, L_12, /*hidden argument*/&Context_set_AbbreviatedHandshake_m45251_MethodInfo);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t6522 * L_13 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_13);
		Context_set_AbbreviatedHandshake_m45251(L_13, 0, /*hidden argument*/&Context_set_AbbreviatedHandshake_m45251_MethodInfo);
	}

IL_0082:
	{
		int16_t L_14 = TlsStream_ReadInt16_m45511(__this, /*hidden argument*/&TlsStream_ReadInt16_m45511_MethodInfo);
		V_1 = L_14;
		Context_t6522 * L_15 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_15);
		CipherSuiteCollection_t6524 * L_16 = Context_get_SupportedCiphers_m45272(L_15, /*hidden argument*/&Context_get_SupportedCiphers_m45272_MethodInfo);
		NullCheck(L_16);
		int32_t L_17 = CipherSuiteCollection_IndexOf_m45213(L_16, V_1, /*hidden argument*/&CipherSuiteCollection_IndexOf_m45213_MethodInfo);
		if ((((uint32_t)L_17) != ((uint32_t)(-1))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t6564 * L_18 = (TlsException_t6564 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t6564_il2cpp_TypeInfo));
		TlsException__ctor_m45484(L_18, ((int32_t)71), (String_t*) &_stringLiteral4346, /*hidden argument*/&TlsException__ctor_m45484_MethodInfo);
		il2cpp_codegen_raise_exception (L_18);
	}

IL_00ad:
	{
		Context_t6522 * L_19 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_19);
		CipherSuiteCollection_t6524 * L_20 = Context_get_SupportedCiphers_m45272(L_19, /*hidden argument*/&Context_get_SupportedCiphers_m45272_MethodInfo);
		NullCheck(L_20);
		CipherSuite_t6523 * L_21 = CipherSuiteCollection_get_Item_m45206(L_20, V_1, /*hidden argument*/&CipherSuiteCollection_get_Item_m45206_MethodInfo);
		__this->___cipherSuite = L_21;
		uint8_t L_22 = TlsStream_ReadByte_m45510(__this, /*hidden argument*/&TlsStream_ReadByte_m45510_MethodInfo);
		__this->___compressionMethod = L_22;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern MethodInfo TlsServerHello_processProtocol_m45585_MethodInfo;
 void TlsServerHello_processProtocol_m45585 (TlsServerHello_t6576 * __this, int16_t ___protocol, MethodInfo* method){
	int32_t V_0 = {0};
	{
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = Context_DecodeProtocolCode_m45303(L_0, ___protocol, /*hidden argument*/&Context_DecodeProtocolCode_m45303_MethodInfo);
		V_0 = L_1;
		Context_t6522 * L_2 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Context_get_SecurityProtocolFlags_m45256(L_2, /*hidden argument*/&Context_get_SecurityProtocolFlags_m45256_MethodInfo);
		if ((((int32_t)((int32_t)(V_0&L_3))) == ((int32_t)V_0)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t6522 * L_4 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m45256(L_4, /*hidden argument*/&Context_get_SecurityProtocolFlags_m45256_MethodInfo);
		if ((((uint32_t)((int32_t)(L_5&((int32_t)-1073741824)))) != ((uint32_t)((int32_t)-1073741824))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t6522 * L_6 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_6);
		Context_set_SecurityProtocol_m45255(L_6, V_0, /*hidden argument*/&Context_set_SecurityProtocol_m45255_MethodInfo);
		Context_t6522 * L_7 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_7);
		CipherSuiteCollection_t6524 * L_8 = Context_get_SupportedCiphers_m45272(L_7, /*hidden argument*/&Context_get_SupportedCiphers_m45272_MethodInfo);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(&CipherSuiteCollection_Clear_m45211_MethodInfo, L_8);
		Context_t6522 * L_9 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_9);
		Context_set_SupportedCiphers_m45273(L_9, (CipherSuiteCollection_t6524 *)NULL, /*hidden argument*/&Context_set_SupportedCiphers_m45273_MethodInfo);
		Context_t6522 * L_10 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		CipherSuiteCollection_t6524 * L_11 = CipherSuiteFactory_GetSupportedCiphers_m45218(NULL /*static, unused*/, V_0, /*hidden argument*/&CipherSuiteFactory_GetSupportedCiphers_m45218_MethodInfo);
		NullCheck(L_10);
		Context_set_SupportedCiphers_m45273(L_10, L_11, /*hidden argument*/&Context_set_SupportedCiphers_m45273_MethodInfo);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t6564 * L_12 = (TlsException_t6564 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t6564_il2cpp_TypeInfo));
		TlsException__ctor_m45484(L_12, ((int32_t)70), (String_t*) &_stringLiteral4288, /*hidden argument*/&TlsException__ctor_m45484_MethodInfo);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_0086:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
extern Il2CppType SecurityCompressionType_t6553_0_0_1;
FieldInfo TlsServerHello_t6576____compressionMethod_FieldInfo = 
{
	"compressionMethod"/* name */
	, &SecurityCompressionType_t6553_0_0_1/* type */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t6576, ___compressionMethod)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t1033_0_0_1;
FieldInfo TlsServerHello_t6576____random_FieldInfo = 
{
	"random"/* name */
	, &ByteU5BU5D_t1033_0_0_1/* type */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t6576, ___random)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t1033_0_0_1;
FieldInfo TlsServerHello_t6576____sessionId_FieldInfo = 
{
	"sessionId"/* name */
	, &ByteU5BU5D_t1033_0_0_1/* type */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t6576, ___sessionId)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType CipherSuite_t6523_0_0_1;
FieldInfo TlsServerHello_t6576____cipherSuite_FieldInfo = 
{
	"cipherSuite"/* name */
	, &CipherSuite_t6523_0_0_1/* type */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t6576, ___cipherSuite)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerHello_t6576_FieldInfos[] =
{
	&TlsServerHello_t6576____compressionMethod_FieldInfo,
	&TlsServerHello_t6576____random_FieldInfo,
	&TlsServerHello_t6576____sessionId_FieldInfo,
	&TlsServerHello_t6576____cipherSuite_FieldInfo,
	NULL
};
extern Il2CppType Context_t6522_0_0_0;
extern Il2CppType ByteU5BU5D_t1033_0_0_0;
static ParameterInfo TlsServerHello_t6576_TlsServerHello__ctor_m45581_ParameterInfos[] = 
{
	{"context", 0, 134218515, &EmptyCustomAttributesCache, &Context_t6522_0_0_0},
	{"buffer", 1, 134218516, &EmptyCustomAttributesCache, &ByteU5BU5D_t1033_0_0_0},
};
extern TypeInfo TlsServerHello_t6576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerHello__ctor_m45581_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerHello__ctor_m45581/* method */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, TlsServerHello_t6576_TlsServerHello__ctor_m45581_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 820/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerHello_t6576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
MethodInfo TlsServerHello_Update_m45582_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerHello_Update_m45582/* method */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 821/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerHello_t6576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
MethodInfo TlsServerHello_ProcessAsSsl3_m45583_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerHello_ProcessAsSsl3_m45583/* method */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 822/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerHello_t6576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
MethodInfo TlsServerHello_ProcessAsTls1_m45584_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerHello_ProcessAsTls1_m45584/* method */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 823/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int16_t1027_0_0_0;
static ParameterInfo TlsServerHello_t6576_TlsServerHello_processProtocol_m45585_ParameterInfos[] = 
{
	{"protocol", 0, 134218517, &EmptyCustomAttributesCache, &Int16_t1027_0_0_0},
};
extern TypeInfo TlsServerHello_t6576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int16_t1027 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
MethodInfo TlsServerHello_processProtocol_m45585_MethodInfo = 
{
	"processProtocol"/* name */
	, (methodPointerType)&TlsServerHello_processProtocol_m45585/* method */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int16_t1027/* invoker_method */
	, TlsServerHello_t6576_TlsServerHello_processProtocol_m45585_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 824/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* TlsServerHello_t6576_MethodInfos[] =
{
	&TlsServerHello__ctor_m45581_MethodInfo,
	&TlsServerHello_Update_m45582_MethodInfo,
	&TlsServerHello_ProcessAsSsl3_m45583_MethodInfo,
	&TlsServerHello_ProcessAsTls1_m45584_MethodInfo,
	&TlsServerHello_processProtocol_m45585_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Stream_Dispose_m45789_MethodInfo;
extern MethodInfo TlsStream_get_CanRead_m45504_MethodInfo;
extern MethodInfo TlsStream_get_CanSeek_m45505_MethodInfo;
extern MethodInfo TlsStream_get_CanWrite_m45503_MethodInfo;
extern MethodInfo TlsStream_get_Length_m45508_MethodInfo;
extern MethodInfo TlsStream_get_Position_m45506_MethodInfo;
extern MethodInfo TlsStream_set_Position_m45507_MethodInfo;
extern MethodInfo Stream_Dispose_m45824_MethodInfo;
extern MethodInfo Stream_Close_m6534_MethodInfo;
extern MethodInfo Stream_get_ReadTimeout_m45790_MethodInfo;
extern MethodInfo Stream_get_WriteTimeout_m45791_MethodInfo;
extern MethodInfo TlsStream_Flush_m45521_MethodInfo;
extern MethodInfo TlsStream_Read_m45524_MethodInfo;
extern MethodInfo Stream_ReadByte_m40388_MethodInfo;
extern MethodInfo TlsStream_Seek_m45523_MethodInfo;
extern MethodInfo TlsStream_SetLength_m45522_MethodInfo;
extern MethodInfo TlsStream_Write_m45525_MethodInfo;
extern MethodInfo Stream_WriteByte_m45774_MethodInfo;
extern MethodInfo Stream_BeginRead_m45794_MethodInfo;
extern MethodInfo Stream_BeginWrite_m45800_MethodInfo;
extern MethodInfo Stream_EndRead_m45796_MethodInfo;
extern MethodInfo Stream_EndWrite_m45801_MethodInfo;
extern MethodInfo TlsServerHello_ProcessAsTls1_m45584_MethodInfo;
extern MethodInfo TlsServerHello_ProcessAsSsl3_m45583_MethodInfo;
extern MethodInfo TlsServerHello_Update_m45582_MethodInfo;
extern MethodInfo HandshakeMessage_EncodeMessage_m45534_MethodInfo;
static MethodInfo* TlsServerHello_t6576_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Stream_Dispose_m45789_MethodInfo,
	&TlsStream_get_CanRead_m45504_MethodInfo,
	&TlsStream_get_CanSeek_m45505_MethodInfo,
	&TlsStream_get_CanWrite_m45503_MethodInfo,
	&TlsStream_get_Length_m45508_MethodInfo,
	&TlsStream_get_Position_m45506_MethodInfo,
	&TlsStream_set_Position_m45507_MethodInfo,
	&Stream_Dispose_m45824_MethodInfo,
	&Stream_Close_m6534_MethodInfo,
	&Stream_get_ReadTimeout_m45790_MethodInfo,
	&Stream_get_WriteTimeout_m45791_MethodInfo,
	&TlsStream_Flush_m45521_MethodInfo,
	&TlsStream_Read_m45524_MethodInfo,
	&Stream_ReadByte_m40388_MethodInfo,
	&TlsStream_Seek_m45523_MethodInfo,
	&TlsStream_SetLength_m45522_MethodInfo,
	&TlsStream_Write_m45525_MethodInfo,
	&Stream_WriteByte_m45774_MethodInfo,
	&Stream_BeginRead_m45794_MethodInfo,
	&Stream_BeginWrite_m45800_MethodInfo,
	&Stream_EndRead_m45796_MethodInfo,
	&Stream_EndWrite_m45801_MethodInfo,
	&TlsServerHello_ProcessAsTls1_m45584_MethodInfo,
	&TlsServerHello_ProcessAsSsl3_m45583_MethodInfo,
	&TlsServerHello_Update_m45582_MethodInfo,
	&HandshakeMessage_EncodeMessage_m45534_MethodInfo,
};
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair TlsServerHello_t6576_InterfacesOffsets[] = 
{
	{ &IDisposable_t971_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerHello_t6576_0_0_0;
extern Il2CppType TlsServerHello_t6576_1_0_0;
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
struct TlsServerHello_t6576;
extern TypeInfo TlsServerHello_t6576_il2cpp_TypeInfo;
TypeInfo TlsServerHello_t6576_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerHello"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerHello_t6576_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerHello_t6576_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t6533_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerHello_t6576_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerHello_t6576_il2cpp_TypeInfo/* cast_class */
	, &TlsServerHello_t6576_0_0_0/* byval_arg */
	, &TlsServerHello_t6576_1_0_0/* this_arg */
	, TlsServerHello_t6576_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerHello_t6576)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 30/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHelloDone_t6577_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"

extern MethodInfo HandshakeMessage__ctor_m45528_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHelloDone__ctor_m45586_MethodInfo;
 void TlsServerHelloDone__ctor_m45586 (TlsServerHelloDone_t6577 * __this, Context_t6522 * ___context, ByteU5BU5D_t1033* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m45528(__this, ___context, ((int32_t)14), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m45528_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern MethodInfo TlsServerHelloDone_ProcessAsSsl3_m45587_MethodInfo;
 void TlsServerHelloDone_ProcessAsSsl3_m45587 (TlsServerHelloDone_t6577 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern MethodInfo TlsServerHelloDone_ProcessAsTls1_m45588_MethodInfo;
 void TlsServerHelloDone_ProcessAsTls1_m45588 (TlsServerHelloDone_t6577 * __this, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
extern Il2CppType Context_t6522_0_0_0;
extern Il2CppType ByteU5BU5D_t1033_0_0_0;
static ParameterInfo TlsServerHelloDone_t6577_TlsServerHelloDone__ctor_m45586_ParameterInfos[] = 
{
	{"context", 0, 134218518, &EmptyCustomAttributesCache, &Context_t6522_0_0_0},
	{"buffer", 1, 134218519, &EmptyCustomAttributesCache, &ByteU5BU5D_t1033_0_0_0},
};
extern TypeInfo TlsServerHelloDone_t6577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerHelloDone__ctor_m45586_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerHelloDone__ctor_m45586/* method */
	, &TlsServerHelloDone_t6577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, TlsServerHelloDone_t6577_TlsServerHelloDone__ctor_m45586_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 825/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerHelloDone_t6577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
MethodInfo TlsServerHelloDone_ProcessAsSsl3_m45587_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerHelloDone_ProcessAsSsl3_m45587/* method */
	, &TlsServerHelloDone_t6577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 826/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerHelloDone_t6577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
MethodInfo TlsServerHelloDone_ProcessAsTls1_m45588_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerHelloDone_ProcessAsTls1_m45588/* method */
	, &TlsServerHelloDone_t6577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 827/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* TlsServerHelloDone_t6577_MethodInfos[] =
{
	&TlsServerHelloDone__ctor_m45586_MethodInfo,
	&TlsServerHelloDone_ProcessAsSsl3_m45587_MethodInfo,
	&TlsServerHelloDone_ProcessAsTls1_m45588_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Stream_Dispose_m45789_MethodInfo;
extern MethodInfo TlsStream_get_CanRead_m45504_MethodInfo;
extern MethodInfo TlsStream_get_CanSeek_m45505_MethodInfo;
extern MethodInfo TlsStream_get_CanWrite_m45503_MethodInfo;
extern MethodInfo TlsStream_get_Length_m45508_MethodInfo;
extern MethodInfo TlsStream_get_Position_m45506_MethodInfo;
extern MethodInfo TlsStream_set_Position_m45507_MethodInfo;
extern MethodInfo Stream_Dispose_m45824_MethodInfo;
extern MethodInfo Stream_Close_m6534_MethodInfo;
extern MethodInfo Stream_get_ReadTimeout_m45790_MethodInfo;
extern MethodInfo Stream_get_WriteTimeout_m45791_MethodInfo;
extern MethodInfo TlsStream_Flush_m45521_MethodInfo;
extern MethodInfo TlsStream_Read_m45524_MethodInfo;
extern MethodInfo Stream_ReadByte_m40388_MethodInfo;
extern MethodInfo TlsStream_Seek_m45523_MethodInfo;
extern MethodInfo TlsStream_SetLength_m45522_MethodInfo;
extern MethodInfo TlsStream_Write_m45525_MethodInfo;
extern MethodInfo Stream_WriteByte_m45774_MethodInfo;
extern MethodInfo Stream_BeginRead_m45794_MethodInfo;
extern MethodInfo Stream_BeginWrite_m45800_MethodInfo;
extern MethodInfo Stream_EndRead_m45796_MethodInfo;
extern MethodInfo Stream_EndWrite_m45801_MethodInfo;
extern MethodInfo TlsServerHelloDone_ProcessAsTls1_m45588_MethodInfo;
extern MethodInfo TlsServerHelloDone_ProcessAsSsl3_m45587_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m45533_MethodInfo;
extern MethodInfo HandshakeMessage_EncodeMessage_m45534_MethodInfo;
static MethodInfo* TlsServerHelloDone_t6577_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Stream_Dispose_m45789_MethodInfo,
	&TlsStream_get_CanRead_m45504_MethodInfo,
	&TlsStream_get_CanSeek_m45505_MethodInfo,
	&TlsStream_get_CanWrite_m45503_MethodInfo,
	&TlsStream_get_Length_m45508_MethodInfo,
	&TlsStream_get_Position_m45506_MethodInfo,
	&TlsStream_set_Position_m45507_MethodInfo,
	&Stream_Dispose_m45824_MethodInfo,
	&Stream_Close_m6534_MethodInfo,
	&Stream_get_ReadTimeout_m45790_MethodInfo,
	&Stream_get_WriteTimeout_m45791_MethodInfo,
	&TlsStream_Flush_m45521_MethodInfo,
	&TlsStream_Read_m45524_MethodInfo,
	&Stream_ReadByte_m40388_MethodInfo,
	&TlsStream_Seek_m45523_MethodInfo,
	&TlsStream_SetLength_m45522_MethodInfo,
	&TlsStream_Write_m45525_MethodInfo,
	&Stream_WriteByte_m45774_MethodInfo,
	&Stream_BeginRead_m45794_MethodInfo,
	&Stream_BeginWrite_m45800_MethodInfo,
	&Stream_EndRead_m45796_MethodInfo,
	&Stream_EndWrite_m45801_MethodInfo,
	&TlsServerHelloDone_ProcessAsTls1_m45588_MethodInfo,
	&TlsServerHelloDone_ProcessAsSsl3_m45587_MethodInfo,
	&HandshakeMessage_Update_m45533_MethodInfo,
	&HandshakeMessage_EncodeMessage_m45534_MethodInfo,
};
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair TlsServerHelloDone_t6577_InterfacesOffsets[] = 
{
	{ &IDisposable_t971_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerHelloDone_t6577_0_0_0;
extern Il2CppType TlsServerHelloDone_t6577_1_0_0;
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
struct TlsServerHelloDone_t6577;
extern TypeInfo TlsServerHelloDone_t6577_il2cpp_TypeInfo;
TypeInfo TlsServerHelloDone_t6577_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerHelloDone"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerHelloDone_t6577_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &HandshakeMessage_t6533_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerHelloDone_t6577_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerHelloDone_t6577_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerHelloDone_t6577_il2cpp_TypeInfo/* cast_class */
	, &TlsServerHelloDone_t6577_0_0_0/* byval_arg */
	, &TlsServerHelloDone_t6577_1_0_0/* this_arg */
	, TlsServerHelloDone_t6577_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerHelloDone_t6577)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 30/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerKeyExchange_t6578_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"

// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo TlsServerKeyExchange_t6578_il2cpp_TypeInfo;
extern TypeInfo RSAParameters_t6487_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t6517_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t6534_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t1033_il2cpp_TypeInfo;
extern TypeInfo Byte_t1026_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo TlsException_t6564_il2cpp_TypeInfo;
extern MethodInfo HandshakeMessage__ctor_m45528_MethodInfo;
extern MethodInfo TlsServerKeyExchange_verifySignature_m45593_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m45533_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m45529_MethodInfo;
extern MethodInfo Context_get_ServerSettings_m45262_MethodInfo;
extern MethodInfo TlsServerSettings_set_ServerKeyExchange_m45488_MethodInfo;
extern MethodInfo TlsServerSettings_set_RsaParameters_m45493_MethodInfo;
extern MethodInfo TlsServerSettings_set_SignedParams_m45494_MethodInfo;
extern MethodInfo TlsServerKeyExchange_ProcessAsTls1_m45592_MethodInfo;
extern MethodInfo TlsStream_ReadInt16_m45511_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m45513_MethodInfo;
extern MethodInfo MD5SHA1__ctor_m45148_MethodInfo;
extern MethodInfo TlsStream__ctor_m45500_MethodInfo;
extern MethodInfo Context_get_RandomCS_m45283_MethodInfo;
extern MethodInfo TlsStream_Write_m45518_MethodInfo;
extern MethodInfo TlsStream_ToArray_m45520_MethodInfo;
extern MethodInfo TlsStream_Write_m45525_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m45740_MethodInfo;
extern MethodInfo TlsStream_Reset_m45519_MethodInfo;
extern MethodInfo TlsServerSettings_get_CertificateRSA_m45491_MethodInfo;
extern MethodInfo MD5SHA1_VerifySignature_m45153_MethodInfo;
extern MethodInfo TlsException__ctor_m45484_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerKeyExchange__ctor_m45589_MethodInfo;
 void TlsServerKeyExchange__ctor_m45589 (TlsServerKeyExchange_t6578 * __this, Context_t6522 * ___context, ByteU5BU5D_t1033* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m45528(__this, ___context, ((int32_t)12), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m45528_MethodInfo);
		TlsServerKeyExchange_verifySignature_m45593(__this, /*hidden argument*/&TlsServerKeyExchange_verifySignature_m45593_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern MethodInfo TlsServerKeyExchange_Update_m45590_MethodInfo;
 void TlsServerKeyExchange_Update_m45590 (TlsServerKeyExchange_t6578 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m45533(__this, /*hidden argument*/&HandshakeMessage_Update_m45533_MethodInfo);
		Context_t6522 * L_0 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t6538 * L_1 = Context_get_ServerSettings_m45262(L_0, /*hidden argument*/&Context_get_ServerSettings_m45262_MethodInfo);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m45488(L_1, 1, /*hidden argument*/&TlsServerSettings_set_ServerKeyExchange_m45488_MethodInfo);
		Context_t6522 * L_2 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_2);
		TlsServerSettings_t6538 * L_3 = Context_get_ServerSettings_m45262(L_2, /*hidden argument*/&Context_get_ServerSettings_m45262_MethodInfo);
		RSAParameters_t6487  L_4 = (__this->___rsaParams);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m45493(L_3, L_4, /*hidden argument*/&TlsServerSettings_set_RsaParameters_m45493_MethodInfo);
		Context_t6522 * L_5 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_5);
		TlsServerSettings_t6538 * L_6 = Context_get_ServerSettings_m45262(L_5, /*hidden argument*/&Context_get_ServerSettings_m45262_MethodInfo);
		ByteU5BU5D_t1033* L_7 = (__this->___signedParams);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m45494(L_6, L_7, /*hidden argument*/&TlsServerSettings_set_SignedParams_m45494_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m45591_MethodInfo;
 void TlsServerKeyExchange_ProcessAsSsl3_m45591 (TlsServerKeyExchange_t6578 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerKeyExchange_ProcessAsTls1_m45592_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
extern MethodInfo TlsServerKeyExchange_ProcessAsTls1_m45592_MethodInfo;
 void TlsServerKeyExchange_ProcessAsTls1_m45592 (TlsServerKeyExchange_t6578 * __this, MethodInfo* method){
	RSAParameters_t6487  V_0 = {0};
	{
		Initobj (&RSAParameters_t6487_il2cpp_TypeInfo, (&V_0));
		__this->___rsaParams = V_0;
		RSAParameters_t6487 * L_0 = &(__this->___rsaParams);
		int16_t L_1 = TlsStream_ReadInt16_m45511(__this, /*hidden argument*/&TlsStream_ReadInt16_m45511_MethodInfo);
		ByteU5BU5D_t1033* L_2 = TlsStream_ReadBytes_m45513(__this, L_1, /*hidden argument*/&TlsStream_ReadBytes_m45513_MethodInfo);
		NullCheck(L_0);
		L_0->___Modulus = L_2;
		RSAParameters_t6487 * L_3 = &(__this->___rsaParams);
		int16_t L_4 = TlsStream_ReadInt16_m45511(__this, /*hidden argument*/&TlsStream_ReadInt16_m45511_MethodInfo);
		ByteU5BU5D_t1033* L_5 = TlsStream_ReadBytes_m45513(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m45513_MethodInfo);
		NullCheck(L_3);
		L_3->___Exponent = L_5;
		int16_t L_6 = TlsStream_ReadInt16_m45511(__this, /*hidden argument*/&TlsStream_ReadInt16_m45511_MethodInfo);
		ByteU5BU5D_t1033* L_7 = TlsStream_ReadBytes_m45513(__this, L_6, /*hidden argument*/&TlsStream_ReadBytes_m45513_MethodInfo);
		__this->___signedParams = L_7;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
extern MethodInfo TlsServerKeyExchange_verifySignature_m45593_MethodInfo;
 void TlsServerKeyExchange_verifySignature_m45593 (TlsServerKeyExchange_t6578 * __this, MethodInfo* method){
	MD5SHA1_t6517 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t6534 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t6517 * L_0 = (MD5SHA1_t6517 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t6517_il2cpp_TypeInfo));
		MD5SHA1__ctor_m45148(L_0, /*hidden argument*/&MD5SHA1__ctor_m45148_MethodInfo);
		V_0 = L_0;
		RSAParameters_t6487 * L_1 = &(__this->___rsaParams);
		NullCheck(L_1);
		ByteU5BU5D_t1033* L_2 = (L_1->___Modulus);
		NullCheck(L_2);
		RSAParameters_t6487 * L_3 = &(__this->___rsaParams);
		NullCheck(L_3);
		ByteU5BU5D_t1033* L_4 = (L_3->___Exponent);
		NullCheck(L_4);
		V_1 = ((int32_t)(((int32_t)((((int32_t)(((Array_t *)L_2)->max_length)))+(((int32_t)(((Array_t *)L_4)->max_length)))))+4));
		TlsStream_t6534 * L_5 = (TlsStream_t6534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsStream_t6534_il2cpp_TypeInfo));
		TlsStream__ctor_m45500(L_5, /*hidden argument*/&TlsStream__ctor_m45500_MethodInfo);
		V_2 = L_5;
		Context_t6522 * L_6 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_6);
		ByteU5BU5D_t1033* L_7 = Context_get_RandomCS_m45283(L_6, /*hidden argument*/&Context_get_RandomCS_m45283_MethodInfo);
		NullCheck(V_2);
		TlsStream_Write_m45518(V_2, L_7, /*hidden argument*/&TlsStream_Write_m45518_MethodInfo);
		ByteU5BU5D_t1033* L_8 = TlsStream_ToArray_m45520(__this, /*hidden argument*/&TlsStream_ToArray_m45520_MethodInfo);
		NullCheck(V_2);
		VirtActionInvoker3< ByteU5BU5D_t1033*, int32_t, int32_t >::Invoke(&TlsStream_Write_m45525_MethodInfo, V_2, L_8, 0, V_1);
		NullCheck(V_2);
		ByteU5BU5D_t1033* L_9 = TlsStream_ToArray_m45520(V_2, /*hidden argument*/&TlsStream_ToArray_m45520_MethodInfo);
		NullCheck(V_0);
		HashAlgorithm_ComputeHash_m45740(V_0, L_9, /*hidden argument*/&HashAlgorithm_ComputeHash_m45740_MethodInfo);
		NullCheck(V_2);
		TlsStream_Reset_m45519(V_2, /*hidden argument*/&TlsStream_Reset_m45519_MethodInfo);
		Context_t6522 * L_10 = HandshakeMessage_get_Context_m45529(__this, /*hidden argument*/&HandshakeMessage_get_Context_m45529_MethodInfo);
		NullCheck(L_10);
		TlsServerSettings_t6538 * L_11 = Context_get_ServerSettings_m45262(L_10, /*hidden argument*/&Context_get_ServerSettings_m45262_MethodInfo);
		NullCheck(L_11);
		RSA_t6476 * L_12 = TlsServerSettings_get_CertificateRSA_m45491(L_11, /*hidden argument*/&TlsServerSettings_get_CertificateRSA_m45491_MethodInfo);
		ByteU5BU5D_t1033* L_13 = (__this->___signedParams);
		NullCheck(V_0);
		bool L_14 = MD5SHA1_VerifySignature_m45153(V_0, L_12, L_13, /*hidden argument*/&MD5SHA1_VerifySignature_m45153_MethodInfo);
		V_3 = L_14;
		if (V_3)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t6564 * L_15 = (TlsException_t6564 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t6564_il2cpp_TypeInfo));
		TlsException__ctor_m45484(L_15, ((int32_t)50), (String_t*) &_stringLiteral4347, /*hidden argument*/&TlsException__ctor_m45484_MethodInfo);
		il2cpp_codegen_raise_exception (L_15);
	}

IL_008c:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
extern Il2CppType RSAParameters_t6487_0_0_1;
FieldInfo TlsServerKeyExchange_t6578____rsaParams_FieldInfo = 
{
	"rsaParams"/* name */
	, &RSAParameters_t6487_0_0_1/* type */
	, &TlsServerKeyExchange_t6578_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerKeyExchange_t6578, ___rsaParams)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t1033_0_0_1;
FieldInfo TlsServerKeyExchange_t6578____signedParams_FieldInfo = 
{
	"signedParams"/* name */
	, &ByteU5BU5D_t1033_0_0_1/* type */
	, &TlsServerKeyExchange_t6578_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerKeyExchange_t6578, ___signedParams)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerKeyExchange_t6578_FieldInfos[] =
{
	&TlsServerKeyExchange_t6578____rsaParams_FieldInfo,
	&TlsServerKeyExchange_t6578____signedParams_FieldInfo,
	NULL
};
extern Il2CppType Context_t6522_0_0_0;
extern Il2CppType ByteU5BU5D_t1033_0_0_0;
static ParameterInfo TlsServerKeyExchange_t6578_TlsServerKeyExchange__ctor_m45589_ParameterInfos[] = 
{
	{"context", 0, 134218520, &EmptyCustomAttributesCache, &Context_t6522_0_0_0},
	{"buffer", 1, 134218521, &EmptyCustomAttributesCache, &ByteU5BU5D_t1033_0_0_0},
};
extern TypeInfo TlsServerKeyExchange_t6578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerKeyExchange__ctor_m45589_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerKeyExchange__ctor_m45589/* method */
	, &TlsServerKeyExchange_t6578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, TlsServerKeyExchange_t6578_TlsServerKeyExchange__ctor_m45589_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 828/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerKeyExchange_t6578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
MethodInfo TlsServerKeyExchange_Update_m45590_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerKeyExchange_Update_m45590/* method */
	, &TlsServerKeyExchange_t6578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 829/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerKeyExchange_t6578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m45591_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerKeyExchange_ProcessAsSsl3_m45591/* method */
	, &TlsServerKeyExchange_t6578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 830/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerKeyExchange_t6578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
MethodInfo TlsServerKeyExchange_ProcessAsTls1_m45592_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerKeyExchange_ProcessAsTls1_m45592/* method */
	, &TlsServerKeyExchange_t6578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 831/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo TlsServerKeyExchange_t6578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
MethodInfo TlsServerKeyExchange_verifySignature_m45593_MethodInfo = 
{
	"verifySignature"/* name */
	, (methodPointerType)&TlsServerKeyExchange_verifySignature_m45593/* method */
	, &TlsServerKeyExchange_t6578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 832/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* TlsServerKeyExchange_t6578_MethodInfos[] =
{
	&TlsServerKeyExchange__ctor_m45589_MethodInfo,
	&TlsServerKeyExchange_Update_m45590_MethodInfo,
	&TlsServerKeyExchange_ProcessAsSsl3_m45591_MethodInfo,
	&TlsServerKeyExchange_ProcessAsTls1_m45592_MethodInfo,
	&TlsServerKeyExchange_verifySignature_m45593_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Stream_Dispose_m45789_MethodInfo;
extern MethodInfo TlsStream_get_CanRead_m45504_MethodInfo;
extern MethodInfo TlsStream_get_CanSeek_m45505_MethodInfo;
extern MethodInfo TlsStream_get_CanWrite_m45503_MethodInfo;
extern MethodInfo TlsStream_get_Length_m45508_MethodInfo;
extern MethodInfo TlsStream_get_Position_m45506_MethodInfo;
extern MethodInfo TlsStream_set_Position_m45507_MethodInfo;
extern MethodInfo Stream_Dispose_m45824_MethodInfo;
extern MethodInfo Stream_Close_m6534_MethodInfo;
extern MethodInfo Stream_get_ReadTimeout_m45790_MethodInfo;
extern MethodInfo Stream_get_WriteTimeout_m45791_MethodInfo;
extern MethodInfo TlsStream_Flush_m45521_MethodInfo;
extern MethodInfo TlsStream_Read_m45524_MethodInfo;
extern MethodInfo Stream_ReadByte_m40388_MethodInfo;
extern MethodInfo TlsStream_Seek_m45523_MethodInfo;
extern MethodInfo TlsStream_SetLength_m45522_MethodInfo;
extern MethodInfo TlsStream_Write_m45525_MethodInfo;
extern MethodInfo Stream_WriteByte_m45774_MethodInfo;
extern MethodInfo Stream_BeginRead_m45794_MethodInfo;
extern MethodInfo Stream_BeginWrite_m45800_MethodInfo;
extern MethodInfo Stream_EndRead_m45796_MethodInfo;
extern MethodInfo Stream_EndWrite_m45801_MethodInfo;
extern MethodInfo TlsServerKeyExchange_ProcessAsTls1_m45592_MethodInfo;
extern MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m45591_MethodInfo;
extern MethodInfo TlsServerKeyExchange_Update_m45590_MethodInfo;
extern MethodInfo HandshakeMessage_EncodeMessage_m45534_MethodInfo;
static MethodInfo* TlsServerKeyExchange_t6578_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Stream_Dispose_m45789_MethodInfo,
	&TlsStream_get_CanRead_m45504_MethodInfo,
	&TlsStream_get_CanSeek_m45505_MethodInfo,
	&TlsStream_get_CanWrite_m45503_MethodInfo,
	&TlsStream_get_Length_m45508_MethodInfo,
	&TlsStream_get_Position_m45506_MethodInfo,
	&TlsStream_set_Position_m45507_MethodInfo,
	&Stream_Dispose_m45824_MethodInfo,
	&Stream_Close_m6534_MethodInfo,
	&Stream_get_ReadTimeout_m45790_MethodInfo,
	&Stream_get_WriteTimeout_m45791_MethodInfo,
	&TlsStream_Flush_m45521_MethodInfo,
	&TlsStream_Read_m45524_MethodInfo,
	&Stream_ReadByte_m40388_MethodInfo,
	&TlsStream_Seek_m45523_MethodInfo,
	&TlsStream_SetLength_m45522_MethodInfo,
	&TlsStream_Write_m45525_MethodInfo,
	&Stream_WriteByte_m45774_MethodInfo,
	&Stream_BeginRead_m45794_MethodInfo,
	&Stream_BeginWrite_m45800_MethodInfo,
	&Stream_EndRead_m45796_MethodInfo,
	&Stream_EndWrite_m45801_MethodInfo,
	&TlsServerKeyExchange_ProcessAsTls1_m45592_MethodInfo,
	&TlsServerKeyExchange_ProcessAsSsl3_m45591_MethodInfo,
	&TlsServerKeyExchange_Update_m45590_MethodInfo,
	&HandshakeMessage_EncodeMessage_m45534_MethodInfo,
};
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair TlsServerKeyExchange_t6578_InterfacesOffsets[] = 
{
	{ &IDisposable_t971_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerKeyExchange_t6578_0_0_0;
extern Il2CppType TlsServerKeyExchange_t6578_1_0_0;
extern TypeInfo HandshakeMessage_t6533_il2cpp_TypeInfo;
struct TlsServerKeyExchange_t6578;
extern TypeInfo TlsServerKeyExchange_t6578_il2cpp_TypeInfo;
TypeInfo TlsServerKeyExchange_t6578_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerKeyExchange"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerKeyExchange_t6578_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerKeyExchange_t6578_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t6533_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerKeyExchange_t6578_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerKeyExchange_t6578_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerKeyExchange_t6578_il2cpp_TypeInfo/* cast_class */
	, &TlsServerKeyExchange_t6578_0_0_0/* byval_arg */
	, &TlsServerKeyExchange_t6578_1_0_0/* this_arg */
	, TlsServerKeyExchange_t6578_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerKeyExchange_t6578)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 30/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrimalityTest_t6459_il2cpp_TypeInfo;
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrimalityTest__ctor_m45594_MethodInfo;
 void PrimalityTest__ctor_m45594 (PrimalityTest_t6459 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern MethodInfo PrimalityTest_Invoke_m45595_MethodInfo;
 bool PrimalityTest_Invoke_m45595 (PrimalityTest_t6459 * __this, BigInteger_t6451 * ___bi, int32_t ___confidence, MethodInfo* method){
	// runtime
	typedef  bool (*FunctionPointerType) (Object_t * __this, BigInteger_t6451 * ___bi, int32_t ___confidence, MethodInfo* method);
	if (__this->___prev)
		PrimalityTest_Invoke_m45595((PrimalityTest_t6459 *)__this->___prev,  ___bi, ___confidence, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___bi, ___confidence, (MethodInfo*)(__this->___method.___m_value));
}
bool pinvoke_delegate_wrapper_PrimalityTest_t6459(Il2CppObject* delegate, BigInteger_t6451 * ___bi, int32_t ___confidence)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(BigInteger_t6451 *, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t6451 * ____bi_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));

	// Marshaling of parameter '___confidence' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____bi_marshaled, ___confidence);

	// Marshaling cleanup of parameter '___bi' native representation

	// Marshaling cleanup of parameter '___confidence' native representation

	return _return_value;
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern MethodInfo PrimalityTest_BeginInvoke_m45596_MethodInfo;
 Object_t * PrimalityTest_BeginInvoke_m45596 (PrimalityTest_t6459 * __this, BigInteger_t6451 * ___bi, int32_t ___confidence, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(InitializedTypeInfo(&ConfidenceFactor_t6456_il2cpp_TypeInfo), &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern MethodInfo PrimalityTest_EndInvoke_m45597_MethodInfo;
 bool PrimalityTest_EndInvoke_m45597 (PrimalityTest_t6459 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition Mono.Math.Prime.PrimalityTest
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo PrimalityTest_t6459_PrimalityTest__ctor_m45594_ParameterInfos[] = 
{
	{"object", 0, 134218522, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218523, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo PrimalityTest_t6459_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
MethodInfo PrimalityTest__ctor_m45594_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PrimalityTest__ctor_m45594/* method */
	, &PrimalityTest_t6459_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, PrimalityTest_t6459_PrimalityTest__ctor_m45594_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 833/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType BigInteger_t6451_0_0_0;
extern Il2CppType ConfidenceFactor_t6456_0_0_0;
static ParameterInfo PrimalityTest_t6459_PrimalityTest_Invoke_m45595_ParameterInfos[] = 
{
	{"bi", 0, 134218524, &EmptyCustomAttributesCache, &BigInteger_t6451_0_0_0},
	{"confidence", 1, 134218525, &EmptyCustomAttributesCache, &ConfidenceFactor_t6456_0_0_0},
};
extern TypeInfo PrimalityTest_t6459_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
MethodInfo PrimalityTest_Invoke_m45595_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PrimalityTest_Invoke_m45595/* method */
	, &PrimalityTest_t6459_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Int32_t73/* invoker_method */
	, PrimalityTest_t6459_PrimalityTest_Invoke_m45595_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType BigInteger_t6451_0_0_0;
extern Il2CppType ConfidenceFactor_t6456_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PrimalityTest_t6459_PrimalityTest_BeginInvoke_m45596_ParameterInfos[] = 
{
	{"bi", 0, 134218526, &EmptyCustomAttributesCache, &BigInteger_t6451_0_0_0},
	{"confidence", 1, 134218527, &EmptyCustomAttributesCache, &ConfidenceFactor_t6456_0_0_0},
	{"callback", 2, 134218528, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 3, 134218529, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo PrimalityTest_t6459_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t73_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
MethodInfo PrimalityTest_BeginInvoke_m45596_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PrimalityTest_BeginInvoke_m45596/* method */
	, &PrimalityTest_t6459_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t73_Object_t_Object_t/* invoker_method */
	, PrimalityTest_t6459_PrimalityTest_BeginInvoke_m45596_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo PrimalityTest_t6459_PrimalityTest_EndInvoke_m45597_ParameterInfos[] = 
{
	{"result", 0, 134218530, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo PrimalityTest_t6459_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
MethodInfo PrimalityTest_EndInvoke_m45597_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PrimalityTest_EndInvoke_m45597/* method */
	, &PrimalityTest_t6459_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, PrimalityTest_t6459_PrimalityTest_EndInvoke_m45597_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* PrimalityTest_t6459_MethodInfos[] =
{
	&PrimalityTest__ctor_m45594_MethodInfo,
	&PrimalityTest_Invoke_m45595_MethodInfo,
	&PrimalityTest_BeginInvoke_m45596_MethodInfo,
	&PrimalityTest_EndInvoke_m45597_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo PrimalityTest_Invoke_m45595_MethodInfo;
extern MethodInfo PrimalityTest_BeginInvoke_m45596_MethodInfo;
extern MethodInfo PrimalityTest_EndInvoke_m45597_MethodInfo;
static MethodInfo* PrimalityTest_t6459_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&PrimalityTest_Invoke_m45595_MethodInfo,
	&PrimalityTest_BeginInvoke_m45596_MethodInfo,
	&PrimalityTest_EndInvoke_m45597_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair PrimalityTest_t6459_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType PrimalityTest_t6459_0_0_0;
extern Il2CppType PrimalityTest_t6459_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct PrimalityTest_t6459;
extern TypeInfo PrimalityTest_t6459_il2cpp_TypeInfo;
TypeInfo PrimalityTest_t6459_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "PrimalityTest"/* name */
	, "Mono.Math.Prime"/* namespaze */
	, PrimalityTest_t6459_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PrimalityTest_t6459_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PrimalityTest_t6459_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PrimalityTest_t6459_il2cpp_TypeInfo/* cast_class */
	, &PrimalityTest_t6459_0_0_0/* byval_arg */
	, &PrimalityTest_t6459_1_0_0/* this_arg */
	, PrimalityTest_t6459_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PrimalityTest_t6459/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PrimalityTest_t6459)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback_t6557_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback__ctor_m45598_MethodInfo;
 void CertificateValidationCallback__ctor_m45598 (CertificateValidationCallback_t6557 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern MethodInfo CertificateValidationCallback_Invoke_m45599_MethodInfo;
 bool CertificateValidationCallback_Invoke_m45599 (CertificateValidationCallback_t6557 * __this, X509Certificate_t6546 * ___certificate, Int32U5BU5D_t116* ___certificateErrors, MethodInfo* method){
	// runtime
	typedef  bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t6546 * ___certificate, Int32U5BU5D_t116* ___certificateErrors, MethodInfo* method);
	if (__this->___prev)
		CertificateValidationCallback_Invoke_m45599((CertificateValidationCallback_t6557 *)__this->___prev,  ___certificate, ___certificateErrors, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___certificate, ___certificateErrors, (MethodInfo*)(__this->___method.___m_value));
}
bool pinvoke_delegate_wrapper_CertificateValidationCallback_t6557(Il2CppObject* delegate, X509Certificate_t6546 * ___certificate, Int32U5BU5D_t116* ___certificateErrors)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(X509Certificate_t6546 *, int32_t*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t6546 * ____certificate_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter '___certificateErrors' to native representation
	int32_t* ____certificateErrors_marshaled;
	____certificateErrors_marshaled = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)___certificateErrors);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____certificate_marshaled, ____certificateErrors_marshaled);

	// Marshaling cleanup of parameter '___certificate' native representation

	// Marshaling cleanup of parameter '___certificateErrors' native representation

	return _return_value;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback_BeginInvoke_m45600_MethodInfo;
 Object_t * CertificateValidationCallback_BeginInvoke_m45600 (CertificateValidationCallback_t6557 * __this, X509Certificate_t6546 * ___certificate, Int32U5BU5D_t116* ___certificateErrors, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback_EndInvoke_m45601_MethodInfo;
 bool CertificateValidationCallback_EndInvoke_m45601 (CertificateValidationCallback_t6557 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition Mono.Security.Protocol.Tls.CertificateValidationCallback
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo CertificateValidationCallback_t6557_CertificateValidationCallback__ctor_m45598_ParameterInfos[] = 
{
	{"object", 0, 134218531, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218532, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo CertificateValidationCallback_t6557_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
MethodInfo CertificateValidationCallback__ctor_m45598_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CertificateValidationCallback__ctor_m45598/* method */
	, &CertificateValidationCallback_t6557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, CertificateValidationCallback_t6557_CertificateValidationCallback__ctor_m45598_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509Certificate_t6546_0_0_0;
extern Il2CppType Int32U5BU5D_t116_0_0_0;
static ParameterInfo CertificateValidationCallback_t6557_CertificateValidationCallback_Invoke_m45599_ParameterInfos[] = 
{
	{"certificate", 0, 134218533, &EmptyCustomAttributesCache, &X509Certificate_t6546_0_0_0},
	{"certificateErrors", 1, 134218534, &EmptyCustomAttributesCache, &Int32U5BU5D_t116_0_0_0},
};
extern TypeInfo CertificateValidationCallback_t6557_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
MethodInfo CertificateValidationCallback_Invoke_m45599_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CertificateValidationCallback_Invoke_m45599/* method */
	, &CertificateValidationCallback_t6557_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback_t6557_CertificateValidationCallback_Invoke_m45599_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509Certificate_t6546_0_0_0;
extern Il2CppType Int32U5BU5D_t116_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CertificateValidationCallback_t6557_CertificateValidationCallback_BeginInvoke_m45600_ParameterInfos[] = 
{
	{"certificate", 0, 134218535, &EmptyCustomAttributesCache, &X509Certificate_t6546_0_0_0},
	{"certificateErrors", 1, 134218536, &EmptyCustomAttributesCache, &Int32U5BU5D_t116_0_0_0},
	{"callback", 2, 134218537, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 3, 134218538, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo CertificateValidationCallback_t6557_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
MethodInfo CertificateValidationCallback_BeginInvoke_m45600_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback_BeginInvoke_m45600/* method */
	, &CertificateValidationCallback_t6557_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback_t6557_CertificateValidationCallback_BeginInvoke_m45600_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo CertificateValidationCallback_t6557_CertificateValidationCallback_EndInvoke_m45601_ParameterInfos[] = 
{
	{"result", 0, 134218539, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo CertificateValidationCallback_t6557_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
MethodInfo CertificateValidationCallback_EndInvoke_m45601_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback_EndInvoke_m45601/* method */
	, &CertificateValidationCallback_t6557_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, CertificateValidationCallback_t6557_CertificateValidationCallback_EndInvoke_m45601_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CertificateValidationCallback_t6557_MethodInfos[] =
{
	&CertificateValidationCallback__ctor_m45598_MethodInfo,
	&CertificateValidationCallback_Invoke_m45599_MethodInfo,
	&CertificateValidationCallback_BeginInvoke_m45600_MethodInfo,
	&CertificateValidationCallback_EndInvoke_m45601_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo CertificateValidationCallback_Invoke_m45599_MethodInfo;
extern MethodInfo CertificateValidationCallback_BeginInvoke_m45600_MethodInfo;
extern MethodInfo CertificateValidationCallback_EndInvoke_m45601_MethodInfo;
static MethodInfo* CertificateValidationCallback_t6557_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&CertificateValidationCallback_Invoke_m45599_MethodInfo,
	&CertificateValidationCallback_BeginInvoke_m45600_MethodInfo,
	&CertificateValidationCallback_EndInvoke_m45601_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CertificateValidationCallback_t6557_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType CertificateValidationCallback_t6557_0_0_0;
extern Il2CppType CertificateValidationCallback_t6557_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct CertificateValidationCallback_t6557;
extern TypeInfo CertificateValidationCallback_t6557_il2cpp_TypeInfo;
TypeInfo CertificateValidationCallback_t6557_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "CertificateValidationCallback"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, CertificateValidationCallback_t6557_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CertificateValidationCallback_t6557_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CertificateValidationCallback_t6557_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CertificateValidationCallback_t6557_il2cpp_TypeInfo/* cast_class */
	, &CertificateValidationCallback_t6557_0_0_0/* byval_arg */
	, &CertificateValidationCallback_t6557_1_0_0/* this_arg */
	, CertificateValidationCallback_t6557_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CertificateValidationCallback_t6557/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CertificateValidationCallback_t6557)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback2_t6560_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback2__ctor_m45602_MethodInfo;
 void CertificateValidationCallback2__ctor_m45602 (CertificateValidationCallback2_t6560 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern MethodInfo CertificateValidationCallback2_Invoke_m45603_MethodInfo;
 ValidationResult_t6556 * CertificateValidationCallback2_Invoke_m45603 (CertificateValidationCallback2_t6560 * __this, X509CertificateCollection_t6490 * ___collection, MethodInfo* method){
	// runtime
	typedef  ValidationResult_t6556 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t6490 * ___collection, MethodInfo* method);
	if (__this->___prev)
		CertificateValidationCallback2_Invoke_m45603((CertificateValidationCallback2_t6560 *)__this->___prev,  ___collection, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___collection, (MethodInfo*)(__this->___method.___m_value));
}
ValidationResult_t6556 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t6560(Il2CppObject* delegate, X509CertificateCollection_t6490 * ___collection)
{
	typedef ValidationResult_t6556 * (STDCALL *native_function_ptr_type)(X509CertificateCollection_t6490 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t6490 * ____collection_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));

	// Native function invocation and marshaling of return value back from native representation
	ValidationResult_t6556 * _return_value = _il2cpp_pinvoke_func(____collection_marshaled);
	ValidationResult_t6556 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.Protocol.Tls.ValidationResult'."));

	// Marshaling cleanup of parameter '___collection' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback2_BeginInvoke_m45604_MethodInfo;
 Object_t * CertificateValidationCallback2_BeginInvoke_m45604 (CertificateValidationCallback2_t6560 * __this, X509CertificateCollection_t6490 * ___collection, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback2_EndInvoke_m45605_MethodInfo;
 ValidationResult_t6556 * CertificateValidationCallback2_EndInvoke_m45605 (CertificateValidationCallback2_t6560 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t6556 *)__result;
}
// Metadata Definition Mono.Security.Protocol.Tls.CertificateValidationCallback2
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo CertificateValidationCallback2_t6560_CertificateValidationCallback2__ctor_m45602_ParameterInfos[] = 
{
	{"object", 0, 134218540, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218541, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo CertificateValidationCallback2_t6560_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
MethodInfo CertificateValidationCallback2__ctor_m45602_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CertificateValidationCallback2__ctor_m45602/* method */
	, &CertificateValidationCallback2_t6560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, CertificateValidationCallback2_t6560_CertificateValidationCallback2__ctor_m45602_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509CertificateCollection_t6490_0_0_0;
static ParameterInfo CertificateValidationCallback2_t6560_CertificateValidationCallback2_Invoke_m45603_ParameterInfos[] = 
{
	{"collection", 0, 134218542, &EmptyCustomAttributesCache, &X509CertificateCollection_t6490_0_0_0},
};
extern TypeInfo CertificateValidationCallback2_t6560_il2cpp_TypeInfo;
extern Il2CppType ValidationResult_t6556_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
MethodInfo CertificateValidationCallback2_Invoke_m45603_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CertificateValidationCallback2_Invoke_m45603/* method */
	, &CertificateValidationCallback2_t6560_il2cpp_TypeInfo/* declaring_type */
	, &ValidationResult_t6556_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback2_t6560_CertificateValidationCallback2_Invoke_m45603_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509CertificateCollection_t6490_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CertificateValidationCallback2_t6560_CertificateValidationCallback2_BeginInvoke_m45604_ParameterInfos[] = 
{
	{"collection", 0, 134218543, &EmptyCustomAttributesCache, &X509CertificateCollection_t6490_0_0_0},
	{"callback", 1, 134218544, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134218545, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo CertificateValidationCallback2_t6560_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
MethodInfo CertificateValidationCallback2_BeginInvoke_m45604_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback2_BeginInvoke_m45604/* method */
	, &CertificateValidationCallback2_t6560_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback2_t6560_CertificateValidationCallback2_BeginInvoke_m45604_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo CertificateValidationCallback2_t6560_CertificateValidationCallback2_EndInvoke_m45605_ParameterInfos[] = 
{
	{"result", 0, 134218546, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo CertificateValidationCallback2_t6560_il2cpp_TypeInfo;
extern Il2CppType ValidationResult_t6556_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
MethodInfo CertificateValidationCallback2_EndInvoke_m45605_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback2_EndInvoke_m45605/* method */
	, &CertificateValidationCallback2_t6560_il2cpp_TypeInfo/* declaring_type */
	, &ValidationResult_t6556_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback2_t6560_CertificateValidationCallback2_EndInvoke_m45605_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CertificateValidationCallback2_t6560_MethodInfos[] =
{
	&CertificateValidationCallback2__ctor_m45602_MethodInfo,
	&CertificateValidationCallback2_Invoke_m45603_MethodInfo,
	&CertificateValidationCallback2_BeginInvoke_m45604_MethodInfo,
	&CertificateValidationCallback2_EndInvoke_m45605_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo CertificateValidationCallback2_Invoke_m45603_MethodInfo;
extern MethodInfo CertificateValidationCallback2_BeginInvoke_m45604_MethodInfo;
extern MethodInfo CertificateValidationCallback2_EndInvoke_m45605_MethodInfo;
static MethodInfo* CertificateValidationCallback2_t6560_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&CertificateValidationCallback2_Invoke_m45603_MethodInfo,
	&CertificateValidationCallback2_BeginInvoke_m45604_MethodInfo,
	&CertificateValidationCallback2_EndInvoke_m45605_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CertificateValidationCallback2_t6560_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType CertificateValidationCallback2_t6560_0_0_0;
extern Il2CppType CertificateValidationCallback2_t6560_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct CertificateValidationCallback2_t6560;
extern TypeInfo CertificateValidationCallback2_t6560_il2cpp_TypeInfo;
TypeInfo CertificateValidationCallback2_t6560_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "CertificateValidationCallback2"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, CertificateValidationCallback2_t6560_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CertificateValidationCallback2_t6560_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CertificateValidationCallback2_t6560_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CertificateValidationCallback2_t6560_il2cpp_TypeInfo/* cast_class */
	, &CertificateValidationCallback2_t6560_0_0_0/* byval_arg */
	, &CertificateValidationCallback2_t6560_1_0_0/* this_arg */
	, CertificateValidationCallback2_t6560_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CertificateValidationCallback2_t6560/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CertificateValidationCallback2_t6560)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateSelectionCallback_t6558_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer.h"


// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateSelectionCallback__ctor_m45606_MethodInfo;
 void CertificateSelectionCallback__ctor_m45606 (CertificateSelectionCallback_t6558 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern MethodInfo CertificateSelectionCallback_Invoke_m45607_MethodInfo;
 X509Certificate_t6546 * CertificateSelectionCallback_Invoke_m45607 (CertificateSelectionCallback_t6558 * __this, X509CertificateCollection_t6530 * ___clientCertificates, X509Certificate_t6546 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t6530 * ___serverRequestedCertificates, MethodInfo* method){
	// runtime
	typedef  X509Certificate_t6546 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t6530 * ___clientCertificates, X509Certificate_t6546 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t6530 * ___serverRequestedCertificates, MethodInfo* method);
	if (__this->___prev)
		CertificateSelectionCallback_Invoke_m45607((CertificateSelectionCallback_t6558 *)__this->___prev,  ___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, (MethodInfo*)(__this->___method.___m_value));
}
X509Certificate_t6546 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t6558(Il2CppObject* delegate, X509CertificateCollection_t6530 * ___clientCertificates, X509Certificate_t6546 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t6530 * ___serverRequestedCertificates)
{
	typedef X509Certificate_t6546 * (STDCALL *native_function_ptr_type)(X509CertificateCollection_t6530 *, X509Certificate_t6546 *, char*, X509CertificateCollection_t6530 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t6530 * ____clientCertificates_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));

	// Marshaling of parameter '___serverCertificate' to native representation
	X509Certificate_t6546 * ____serverCertificate_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter '___targetHost' to native representation
	char* ____targetHost_marshaled;
	____targetHost_marshaled = il2cpp_codegen_marshal_string(___targetHost);

	// Marshaling of parameter '___serverRequestedCertificates' to native representation
	X509CertificateCollection_t6530 * ____serverRequestedCertificates_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));

	// Native function invocation and marshaling of return value back from native representation
	X509Certificate_t6546 * _return_value = _il2cpp_pinvoke_func(____clientCertificates_marshaled, ____serverCertificate_marshaled, ____targetHost_marshaled, ____serverRequestedCertificates_marshaled);
	X509Certificate_t6546 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling cleanup of parameter '___clientCertificates' native representation

	// Marshaling cleanup of parameter '___serverCertificate' native representation

	// Marshaling cleanup of parameter '___targetHost' native representation
	il2cpp_codegen_marshal_free(____targetHost_marshaled);
	____targetHost_marshaled = NULL;

	// Marshaling cleanup of parameter '___serverRequestedCertificates' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateSelectionCallback_BeginInvoke_m45608_MethodInfo;
 Object_t * CertificateSelectionCallback_BeginInvoke_m45608 (CertificateSelectionCallback_t6558 * __this, X509CertificateCollection_t6530 * ___clientCertificates, X509Certificate_t6546 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t6530 * ___serverRequestedCertificates, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateSelectionCallback_EndInvoke_m45609_MethodInfo;
 X509Certificate_t6546 * CertificateSelectionCallback_EndInvoke_m45609 (CertificateSelectionCallback_t6558 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t6546 *)__result;
}
// Metadata Definition Mono.Security.Protocol.Tls.CertificateSelectionCallback
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo CertificateSelectionCallback_t6558_CertificateSelectionCallback__ctor_m45606_ParameterInfos[] = 
{
	{"object", 0, 134218547, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218548, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo CertificateSelectionCallback_t6558_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
MethodInfo CertificateSelectionCallback__ctor_m45606_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CertificateSelectionCallback__ctor_m45606/* method */
	, &CertificateSelectionCallback_t6558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, CertificateSelectionCallback_t6558_CertificateSelectionCallback__ctor_m45606_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509CertificateCollection_t6530_0_0_0;
extern Il2CppType X509Certificate_t6546_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType X509CertificateCollection_t6530_0_0_0;
static ParameterInfo CertificateSelectionCallback_t6558_CertificateSelectionCallback_Invoke_m45607_ParameterInfos[] = 
{
	{"clientCertificates", 0, 134218549, &EmptyCustomAttributesCache, &X509CertificateCollection_t6530_0_0_0},
	{"serverCertificate", 1, 134218550, &EmptyCustomAttributesCache, &X509Certificate_t6546_0_0_0},
	{"targetHost", 2, 134218551, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"serverRequestedCertificates", 3, 134218552, &EmptyCustomAttributesCache, &X509CertificateCollection_t6530_0_0_0},
};
extern TypeInfo CertificateSelectionCallback_t6558_il2cpp_TypeInfo;
extern Il2CppType X509Certificate_t6546_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
MethodInfo CertificateSelectionCallback_Invoke_m45607_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CertificateSelectionCallback_Invoke_m45607/* method */
	, &CertificateSelectionCallback_t6558_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t6546_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateSelectionCallback_t6558_CertificateSelectionCallback_Invoke_m45607_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509CertificateCollection_t6530_0_0_0;
extern Il2CppType X509Certificate_t6546_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType X509CertificateCollection_t6530_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CertificateSelectionCallback_t6558_CertificateSelectionCallback_BeginInvoke_m45608_ParameterInfos[] = 
{
	{"clientCertificates", 0, 134218553, &EmptyCustomAttributesCache, &X509CertificateCollection_t6530_0_0_0},
	{"serverCertificate", 1, 134218554, &EmptyCustomAttributesCache, &X509Certificate_t6546_0_0_0},
	{"targetHost", 2, 134218555, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"serverRequestedCertificates", 3, 134218556, &EmptyCustomAttributesCache, &X509CertificateCollection_t6530_0_0_0},
	{"callback", 4, 134218557, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 5, 134218558, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo CertificateSelectionCallback_t6558_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
MethodInfo CertificateSelectionCallback_BeginInvoke_m45608_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CertificateSelectionCallback_BeginInvoke_m45608/* method */
	, &CertificateSelectionCallback_t6558_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateSelectionCallback_t6558_CertificateSelectionCallback_BeginInvoke_m45608_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo CertificateSelectionCallback_t6558_CertificateSelectionCallback_EndInvoke_m45609_ParameterInfos[] = 
{
	{"result", 0, 134218559, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo CertificateSelectionCallback_t6558_il2cpp_TypeInfo;
extern Il2CppType X509Certificate_t6546_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
MethodInfo CertificateSelectionCallback_EndInvoke_m45609_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CertificateSelectionCallback_EndInvoke_m45609/* method */
	, &CertificateSelectionCallback_t6558_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t6546_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CertificateSelectionCallback_t6558_CertificateSelectionCallback_EndInvoke_m45609_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CertificateSelectionCallback_t6558_MethodInfos[] =
{
	&CertificateSelectionCallback__ctor_m45606_MethodInfo,
	&CertificateSelectionCallback_Invoke_m45607_MethodInfo,
	&CertificateSelectionCallback_BeginInvoke_m45608_MethodInfo,
	&CertificateSelectionCallback_EndInvoke_m45609_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo CertificateSelectionCallback_Invoke_m45607_MethodInfo;
extern MethodInfo CertificateSelectionCallback_BeginInvoke_m45608_MethodInfo;
extern MethodInfo CertificateSelectionCallback_EndInvoke_m45609_MethodInfo;
static MethodInfo* CertificateSelectionCallback_t6558_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&CertificateSelectionCallback_Invoke_m45607_MethodInfo,
	&CertificateSelectionCallback_BeginInvoke_m45608_MethodInfo,
	&CertificateSelectionCallback_EndInvoke_m45609_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CertificateSelectionCallback_t6558_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType CertificateSelectionCallback_t6558_0_0_0;
extern Il2CppType CertificateSelectionCallback_t6558_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct CertificateSelectionCallback_t6558;
extern TypeInfo CertificateSelectionCallback_t6558_il2cpp_TypeInfo;
TypeInfo CertificateSelectionCallback_t6558_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "CertificateSelectionCallback"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, CertificateSelectionCallback_t6558_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CertificateSelectionCallback_t6558_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CertificateSelectionCallback_t6558_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CertificateSelectionCallback_t6558_il2cpp_TypeInfo/* cast_class */
	, &CertificateSelectionCallback_t6558_0_0_0/* byval_arg */
	, &CertificateSelectionCallback_t6558_1_0_0/* this_arg */
	, CertificateSelectionCallback_t6558_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CertificateSelectionCallback_t6558/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CertificateSelectionCallback_t6558)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"

// System.Security.Cryptography.AsymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"


// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrivateKeySelectionCallback__ctor_m45610_MethodInfo;
 void PrivateKeySelectionCallback__ctor_m45610 (PrivateKeySelectionCallback_t6559 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern MethodInfo PrivateKeySelectionCallback_Invoke_m45611_MethodInfo;
 AsymmetricAlgorithm_t6495 * PrivateKeySelectionCallback_Invoke_m45611 (PrivateKeySelectionCallback_t6559 * __this, X509Certificate_t6546 * ___certificate, String_t* ___targetHost, MethodInfo* method){
	// runtime
	typedef  AsymmetricAlgorithm_t6495 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t6546 * ___certificate, String_t* ___targetHost, MethodInfo* method);
	if (__this->___prev)
		PrivateKeySelectionCallback_Invoke_m45611((PrivateKeySelectionCallback_t6559 *)__this->___prev,  ___certificate, ___targetHost, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___certificate, ___targetHost, (MethodInfo*)(__this->___method.___m_value));
}
AsymmetricAlgorithm_t6495 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t6559(Il2CppObject* delegate, X509Certificate_t6546 * ___certificate, String_t* ___targetHost)
{
	typedef AsymmetricAlgorithm_t6495 * (STDCALL *native_function_ptr_type)(X509Certificate_t6546 *, char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t6546 * ____certificate_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter '___targetHost' to native representation
	char* ____targetHost_marshaled;
	____targetHost_marshaled = il2cpp_codegen_marshal_string(___targetHost);

	// Native function invocation and marshaling of return value back from native representation
	AsymmetricAlgorithm_t6495 * _return_value = _il2cpp_pinvoke_func(____certificate_marshaled, ____targetHost_marshaled);
	AsymmetricAlgorithm_t6495 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.AsymmetricAlgorithm'."));

	// Marshaling cleanup of parameter '___certificate' native representation

	// Marshaling cleanup of parameter '___targetHost' native representation
	il2cpp_codegen_marshal_free(____targetHost_marshaled);
	____targetHost_marshaled = NULL;

	return __return_value_unmarshaled;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern MethodInfo PrivateKeySelectionCallback_BeginInvoke_m45612_MethodInfo;
 Object_t * PrivateKeySelectionCallback_BeginInvoke_m45612 (PrivateKeySelectionCallback_t6559 * __this, X509Certificate_t6546 * ___certificate, String_t* ___targetHost, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PrivateKeySelectionCallback_EndInvoke_m45613_MethodInfo;
 AsymmetricAlgorithm_t6495 * PrivateKeySelectionCallback_EndInvoke_m45613 (PrivateKeySelectionCallback_t6559 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t6495 *)__result;
}
// Metadata Definition Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t6559_PrivateKeySelectionCallback__ctor_m45610_ParameterInfos[] = 
{
	{"object", 0, 134218560, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218561, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
MethodInfo PrivateKeySelectionCallback__ctor_m45610_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback__ctor_m45610/* method */
	, &PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, PrivateKeySelectionCallback_t6559_PrivateKeySelectionCallback__ctor_m45610_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509Certificate_t6546_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t6559_PrivateKeySelectionCallback_Invoke_m45611_ParameterInfos[] = 
{
	{"certificate", 0, 134218562, &EmptyCustomAttributesCache, &X509Certificate_t6546_0_0_0},
	{"targetHost", 1, 134218563, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo;
extern Il2CppType AsymmetricAlgorithm_t6495_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
MethodInfo PrivateKeySelectionCallback_Invoke_m45611_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback_Invoke_m45611/* method */
	, &PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo/* declaring_type */
	, &AsymmetricAlgorithm_t6495_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, PrivateKeySelectionCallback_t6559_PrivateKeySelectionCallback_Invoke_m45611_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType X509Certificate_t6546_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t6559_PrivateKeySelectionCallback_BeginInvoke_m45612_ParameterInfos[] = 
{
	{"certificate", 0, 134218564, &EmptyCustomAttributesCache, &X509Certificate_t6546_0_0_0},
	{"targetHost", 1, 134218565, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"callback", 2, 134218566, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 3, 134218567, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
MethodInfo PrivateKeySelectionCallback_BeginInvoke_m45612_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback_BeginInvoke_m45612/* method */
	, &PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, PrivateKeySelectionCallback_t6559_PrivateKeySelectionCallback_BeginInvoke_m45612_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t6559_PrivateKeySelectionCallback_EndInvoke_m45613_ParameterInfos[] = 
{
	{"result", 0, 134218568, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo;
extern Il2CppType AsymmetricAlgorithm_t6495_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
MethodInfo PrivateKeySelectionCallback_EndInvoke_m45613_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback_EndInvoke_m45613/* method */
	, &PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo/* declaring_type */
	, &AsymmetricAlgorithm_t6495_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PrivateKeySelectionCallback_t6559_PrivateKeySelectionCallback_EndInvoke_m45613_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* PrivateKeySelectionCallback_t6559_MethodInfos[] =
{
	&PrivateKeySelectionCallback__ctor_m45610_MethodInfo,
	&PrivateKeySelectionCallback_Invoke_m45611_MethodInfo,
	&PrivateKeySelectionCallback_BeginInvoke_m45612_MethodInfo,
	&PrivateKeySelectionCallback_EndInvoke_m45613_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo PrivateKeySelectionCallback_Invoke_m45611_MethodInfo;
extern MethodInfo PrivateKeySelectionCallback_BeginInvoke_m45612_MethodInfo;
extern MethodInfo PrivateKeySelectionCallback_EndInvoke_m45613_MethodInfo;
static MethodInfo* PrivateKeySelectionCallback_t6559_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&PrivateKeySelectionCallback_Invoke_m45611_MethodInfo,
	&PrivateKeySelectionCallback_BeginInvoke_m45612_MethodInfo,
	&PrivateKeySelectionCallback_EndInvoke_m45613_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair PrivateKeySelectionCallback_t6559_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType PrivateKeySelectionCallback_t6559_0_0_0;
extern Il2CppType PrivateKeySelectionCallback_t6559_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct PrivateKeySelectionCallback_t6559;
extern TypeInfo PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo;
TypeInfo PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "PrivateKeySelectionCallback"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, PrivateKeySelectionCallback_t6559_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PrivateKeySelectionCallback_t6559_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PrivateKeySelectionCallback_t6559_il2cpp_TypeInfo/* cast_class */
	, &PrivateKeySelectionCallback_t6559_0_0_0/* byval_arg */
	, &PrivateKeySelectionCallback_t6559_1_0_0/* this_arg */
	, PrivateKeySelectionCallback_t6559_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t6559/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PrivateKeySelectionCallback_t6559)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$3132_t6579_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$MethodDeclarations.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$3132
static MethodInfo* $ArrayType$3132_t6579_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
static MethodInfo* $ArrayType$3132_t6579_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$3132_t6579_0_0_0;
extern Il2CppType $ArrayType$3132_t6579_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$3132_t6579_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
TypeInfo $ArrayType$3132_t6579_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$3132"/* name */
	, ""/* namespaze */
	, $ArrayType$3132_t6579_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$3132_t6579_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$3132_t6579_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$3132_t6579_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$3132_t6579_0_0_0/* byval_arg */
	, &$ArrayType$3132_t6579_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof ($ArrayType$3132_t6579)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$256_t6580_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0MethodDeclarations.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$256
static MethodInfo* $ArrayType$256_t6580_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
static MethodInfo* $ArrayType$256_t6580_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$256_t6580_0_0_0;
extern Il2CppType $ArrayType$256_t6580_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$256_t6580_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
TypeInfo $ArrayType$256_t6580_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$256"/* name */
	, ""/* namespaze */
	, $ArrayType$256_t6580_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$256_t6580_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$256_t6580_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$256_t6580_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$256_t6580_0_0_0/* byval_arg */
	, &$ArrayType$256_t6580_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof ($ArrayType$256_t6580)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t6581_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1MethodDeclarations.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$20
static MethodInfo* $ArrayType$20_t6581_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
static MethodInfo* $ArrayType$20_t6581_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$20_t6581_0_0_0;
extern Il2CppType $ArrayType$20_t6581_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$20_t6581_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
TypeInfo $ArrayType$20_t6581_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$20"/* name */
	, ""/* namespaze */
	, $ArrayType$20_t6581_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$20_t6581_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$20_t6581_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$20_t6581_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$20_t6581_0_0_0/* byval_arg */
	, &$ArrayType$20_t6581_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof ($ArrayType$20_t6581)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$32_t6582_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2MethodDeclarations.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$32
static MethodInfo* $ArrayType$32_t6582_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
static MethodInfo* $ArrayType$32_t6582_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$32_t6582_0_0_0;
extern Il2CppType $ArrayType$32_t6582_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$32_t6582_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
TypeInfo $ArrayType$32_t6582_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$32"/* name */
	, ""/* namespaze */
	, $ArrayType$32_t6582_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$32_t6582_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$32_t6582_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$32_t6582_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$32_t6582_0_0_0/* byval_arg */
	, &$ArrayType$32_t6582_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof ($ArrayType$32_t6582)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$48_t6583_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3MethodDeclarations.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$48
static MethodInfo* $ArrayType$48_t6583_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
static MethodInfo* $ArrayType$48_t6583_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$48_t6583_0_0_0;
extern Il2CppType $ArrayType$48_t6583_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$48_t6583_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
TypeInfo $ArrayType$48_t6583_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$48"/* name */
	, ""/* namespaze */
	, $ArrayType$48_t6583_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$48_t6583_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$48_t6583_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$48_t6583_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$48_t6583_0_0_0/* byval_arg */
	, &$ArrayType$48_t6583_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof ($ArrayType$48_t6583)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$64_t6584_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4MethodDeclarations.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$64
static MethodInfo* $ArrayType$64_t6584_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
static MethodInfo* $ArrayType$64_t6584_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$64_t6584_0_0_0;
extern Il2CppType $ArrayType$64_t6584_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$64_t6584_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
TypeInfo $ArrayType$64_t6584_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$64"/* name */
	, ""/* namespaze */
	, $ArrayType$64_t6584_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$64_t6584_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$64_t6584_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$64_t6584_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$64_t6584_0_0_0/* byval_arg */
	, &$ArrayType$64_t6584_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof ($ArrayType$64_t6584)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$12_t6585_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5MethodDeclarations.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
static MethodInfo* $ArrayType$12_t6585_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
static MethodInfo* $ArrayType$12_t6585_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$12_t6585_0_0_0;
extern Il2CppType $ArrayType$12_t6585_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$12_t6585_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
TypeInfo $ArrayType$12_t6585_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, $ArrayType$12_t6585_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$12_t6585_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$12_t6585_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$12_t6585_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$12_t6585_0_0_0/* byval_arg */
	, &$ArrayType$12_t6585_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof ($ArrayType$12_t6585)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$16_t6586_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6MethodDeclarations.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$16
static MethodInfo* $ArrayType$16_t6586_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
static MethodInfo* $ArrayType$16_t6586_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$16_t6586_0_0_0;
extern Il2CppType $ArrayType$16_t6586_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$16_t6586_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
TypeInfo $ArrayType$16_t6586_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$16"/* name */
	, ""/* namespaze */
	, $ArrayType$16_t6586_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$16_t6586_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$16_t6586_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$16_t6586_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$16_t6586_0_0_0/* byval_arg */
	, &$ArrayType$16_t6586_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof ($ArrayType$16_t6586)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$4_t6587_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7MethodDeclarations.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$4
static MethodInfo* $ArrayType$4_t6587_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
static MethodInfo* $ArrayType$4_t6587_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$4_t6587_0_0_0;
extern Il2CppType $ArrayType$4_t6587_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$4_t6587_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
TypeInfo $ArrayType$4_t6587_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$4"/* name */
	, ""/* namespaze */
	, $ArrayType$4_t6587_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$4_t6587_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$4_t6587_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$4_t6587_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$4_t6587_0_0_0/* byval_arg */
	, &$ArrayType$4_t6587_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof ($ArrayType$4_t6587)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;



// Metadata Definition <PrivateImplementationDetails>
extern Il2CppType $ArrayType$3132_t6579_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D0_FieldInfo = 
{
	"$$field-0"/* name */
	, &$ArrayType$3132_t6579_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$256_t6580_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D5_FieldInfo = 
{
	"$$field-5"/* name */
	, &$ArrayType$256_t6580_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$20_t6581_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D6_FieldInfo = 
{
	"$$field-6"/* name */
	, &$ArrayType$20_t6581_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$32_t6582_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D7_FieldInfo = 
{
	"$$field-7"/* name */
	, &$ArrayType$32_t6582_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$48_t6583_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D8_FieldInfo = 
{
	"$$field-8"/* name */
	, &$ArrayType$48_t6583_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t6584_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D9_FieldInfo = 
{
	"$$field-9"/* name */
	, &$ArrayType$64_t6584_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t6584_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D11_FieldInfo = 
{
	"$$field-11"/* name */
	, &$ArrayType$64_t6584_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t6584_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D12_FieldInfo = 
{
	"$$field-12"/* name */
	, &$ArrayType$64_t6584_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t6584_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D13_FieldInfo = 
{
	"$$field-13"/* name */
	, &$ArrayType$64_t6584_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t6585_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D14_FieldInfo = 
{
	"$$field-14"/* name */
	, &$ArrayType$12_t6585_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D14)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t6585_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D15_FieldInfo = 
{
	"$$field-15"/* name */
	, &$ArrayType$12_t6585_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D15)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t6585_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D16_FieldInfo = 
{
	"$$field-16"/* name */
	, &$ArrayType$12_t6585_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D16)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$16_t6586_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D17_FieldInfo = 
{
	"$$field-17"/* name */
	, &$ArrayType$16_t6586_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D17)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$4_t6587_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D21_FieldInfo = 
{
	"$$field-21"/* name */
	, &$ArrayType$4_t6587_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D21)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$4_t6587_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D22_FieldInfo = 
{
	"$$field-22"/* name */
	, &$ArrayType$4_t6587_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields, ___$$fieldU2D22)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CPrivateImplementationDetailsU3E_t6588_FieldInfos[] =
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D0_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D5_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D6_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D7_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D8_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D9_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D11_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D12_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D13_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D14_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D15_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D16_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D17_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D21_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D22_FieldInfo,
	NULL
};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D0_DefaultValueData[] = { 0x2, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x7, 0x0, 0x0, 0x0, 0xB, 0x0, 0x0, 0x0, 0xD, 0x0, 0x0, 0x0, 0x11, 0x0, 0x0, 0x0, 0x13, 0x0, 0x0, 0x0, 0x17, 0x0, 0x0, 0x0, 0x1D, 0x0, 0x0, 0x0, 0x1F, 0x0, 0x0, 0x0, 0x25, 0x0, 0x0, 0x0, 0x29, 0x0, 0x0, 0x0, 0x2B, 0x0, 0x0, 0x0, 0x2F, 0x0, 0x0, 0x0, 0x35, 0x0, 0x0, 0x0, 0x3B, 0x0, 0x0, 0x0, 0x3D, 0x0, 0x0, 0x0, 0x43, 0x0, 0x0, 0x0, 0x47, 0x0, 0x0, 0x0, 0x49, 0x0, 0x0, 0x0, 0x4F, 0x0, 0x0, 0x0, 0x53, 0x0, 0x0, 0x0, 0x59, 0x0, 0x0, 0x0, 0x61, 0x0, 0x0, 0x0, 0x65, 0x0, 0x0, 0x0, 0x67, 0x0, 0x0, 0x0, 0x6B, 0x0, 0x0, 0x0, 0x6D, 0x0, 0x0, 0x0, 0x71, 0x0, 0x0, 0x0, 0x7F, 0x0, 0x0, 0x0, 0x83, 0x0, 0x0, 0x0, 0x89, 0x0, 0x0, 0x0, 0x8B, 0x0, 0x0, 0x0, 0x95, 0x0, 0x0, 0x0, 0x97, 0x0, 0x0, 0x0, 0x9D, 0x0, 0x0, 0x0, 0xA3, 0x0, 0x0, 0x0, 0xA7, 0x0, 0x0, 0x0, 0xAD, 0x0, 0x0, 0x0, 0xB3, 0x0, 0x0, 0x0, 0xB5, 0x0, 0x0, 0x0, 0xBF, 0x0, 0x0, 0x0, 0xC1, 0x0, 0x0, 0x0, 0xC5, 0x0, 0x0, 0x0, 0xC7, 0x0, 0x0, 0x0, 0xD3, 0x0, 0x0, 0x0, 0xDF, 0x0, 0x0, 0x0, 0xE3, 0x0, 0x0, 0x0, 0xE5, 0x0, 0x0, 0x0, 0xE9, 0x0, 0x0, 0x0, 0xEF, 0x0, 0x0, 0x0, 0xF1, 0x0, 0x0, 0x0, 0xFB, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x0, 0x7, 0x1, 0x0, 0x0, 0xD, 0x1, 0x0, 0x0, 0xF, 0x1, 0x0, 0x0, 0x15, 0x1, 0x0, 0x0, 0x19, 0x1, 0x0, 0x0, 0x1B, 0x1, 0x0, 0x0, 0x25, 0x1, 0x0, 0x0, 0x33, 0x1, 0x0, 0x0, 0x37, 0x1, 0x0, 0x0, 0x39, 0x1, 0x0, 0x0, 0x3D, 0x1, 0x0, 0x0, 0x4B, 0x1, 0x0, 0x0, 0x51, 0x1, 0x0, 0x0, 0x5B, 0x1, 0x0, 0x0, 0x5D, 0x1, 0x0, 0x0, 0x61, 0x1, 0x0, 0x0, 0x67, 0x1, 0x0, 0x0, 0x6F, 0x1, 0x0, 0x0, 0x75, 0x1, 0x0, 0x0, 0x7B, 0x1, 0x0, 0x0, 0x7F, 0x1, 0x0, 0x0, 0x85, 0x1, 0x0, 0x0, 0x8D, 0x1, 0x0, 0x0, 0x91, 0x1, 0x0, 0x0, 0x99, 0x1, 0x0, 0x0, 0xA3, 0x1, 0x0, 0x0, 0xA5, 0x1, 0x0, 0x0, 0xAF, 0x1, 0x0, 0x0, 0xB1, 0x1, 0x0, 0x0, 0xB7, 0x1, 0x0, 0x0, 0xBB, 0x1, 0x0, 0x0, 0xC1, 0x1, 0x0, 0x0, 0xC9, 0x1, 0x0, 0x0, 0xCD, 0x1, 0x0, 0x0, 0xCF, 0x1, 0x0, 0x0, 0xD3, 0x1, 0x0, 0x0, 0xDF, 0x1, 0x0, 0x0, 0xE7, 0x1, 0x0, 0x0, 0xEB, 0x1, 0x0, 0x0, 0xF3, 0x1, 0x0, 0x0, 0xF7, 0x1, 0x0, 0x0, 0xFD, 0x1, 0x0, 0x0, 0x9, 0x2, 0x0, 0x0, 0xB, 0x2, 0x0, 0x0, 0x1D, 0x2, 0x0, 0x0, 0x23, 0x2, 0x0, 0x0, 0x2D, 0x2, 0x0, 0x0, 0x33, 0x2, 0x0, 0x0, 0x39, 0x2, 0x0, 0x0, 0x3B, 0x2, 0x0, 0x0, 0x41, 0x2, 0x0, 0x0, 0x4B, 0x2, 0x0, 0x0, 0x51, 0x2, 0x0, 0x0, 0x57, 0x2, 0x0, 0x0, 0x59, 0x2, 0x0, 0x0, 0x5F, 0x2, 0x0, 0x0, 0x65, 0x2, 0x0, 0x0, 0x69, 0x2, 0x0, 0x0, 0x6B, 0x2, 0x0, 0x0, 0x77, 0x2, 0x0, 0x0, 0x81, 0x2, 0x0, 0x0, 0x83, 0x2, 0x0, 0x0, 0x87, 0x2, 0x0, 0x0, 0x8D, 0x2, 0x0, 0x0, 0x93, 0x2, 0x0, 0x0, 0x95, 0x2, 0x0, 0x0, 0xA1, 0x2, 0x0, 0x0, 0xA5, 0x2, 0x0, 0x0, 0xAB, 0x2, 0x0, 0x0, 0xB3, 0x2, 0x0, 0x0, 0xBD, 0x2, 0x0, 0x0, 0xC5, 0x2, 0x0, 0x0, 0xCF, 0x2, 0x0, 0x0, 0xD7, 0x2, 0x0, 0x0, 0xDD, 0x2, 0x0, 0x0, 0xE3, 0x2, 0x0, 0x0, 0xE7, 0x2, 0x0, 0x0, 0xEF, 0x2, 0x0, 0x0, 0xF5, 0x2, 0x0, 0x0, 0xF9, 0x2, 0x0, 0x0, 0x1, 0x3, 0x0, 0x0, 0x5, 0x3, 0x0, 0x0, 0x13, 0x3, 0x0, 0x0, 0x1D, 0x3, 0x0, 0x0, 0x29, 0x3, 0x0, 0x0, 0x2B, 0x3, 0x0, 0x0, 0x35, 0x3, 0x0, 0x0, 0x37, 0x3, 0x0, 0x0, 0x3B, 0x3, 0x0, 0x0, 0x3D, 0x3, 0x0, 0x0, 0x47, 0x3, 0x0, 0x0, 0x55, 0x3, 0x0, 0x0, 0x59, 0x3, 0x0, 0x0, 0x5B, 0x3, 0x0, 0x0, 0x5F, 0x3, 0x0, 0x0, 0x6D, 0x3, 0x0, 0x0, 0x71, 0x3, 0x0, 0x0, 0x73, 0x3, 0x0, 0x0, 0x77, 0x3, 0x0, 0x0, 0x8B, 0x3, 0x0, 0x0, 0x8F, 0x3, 0x0, 0x0, 0x97, 0x3, 0x0, 0x0, 0xA1, 0x3, 0x0, 0x0, 0xA9, 0x3, 0x0, 0x0, 0xAD, 0x3, 0x0, 0x0, 0xB3, 0x3, 0x0, 0x0, 0xB9, 0x3, 0x0, 0x0, 0xC7, 0x3, 0x0, 0x0, 0xCB, 0x3, 0x0, 0x0, 0xD1, 0x3, 0x0, 0x0, 0xD7, 0x3, 0x0, 0x0, 0xDF, 0x3, 0x0, 0x0, 0xE5, 0x3, 0x0, 0x0, 0xF1, 0x3, 0x0, 0x0, 0xF5, 0x3, 0x0, 0x0, 0xFB, 0x3, 0x0, 0x0, 0xFD, 0x3, 0x0, 0x0, 0x7, 0x4, 0x0, 0x0, 0x9, 0x4, 0x0, 0x0, 0xF, 0x4, 0x0, 0x0, 0x19, 0x4, 0x0, 0x0, 0x1B, 0x4, 0x0, 0x0, 0x25, 0x4, 0x0, 0x0, 0x27, 0x4, 0x0, 0x0, 0x2D, 0x4, 0x0, 0x0, 0x3F, 0x4, 0x0, 0x0, 0x43, 0x4, 0x0, 0x0, 0x45, 0x4, 0x0, 0x0, 0x49, 0x4, 0x0, 0x0, 0x4F, 0x4, 0x0, 0x0, 0x55, 0x4, 0x0, 0x0, 0x5D, 0x4, 0x0, 0x0, 0x63, 0x4, 0x0, 0x0, 0x69, 0x4, 0x0, 0x0, 0x7F, 0x4, 0x0, 0x0, 0x81, 0x4, 0x0, 0x0, 0x8B, 0x4, 0x0, 0x0, 0x93, 0x4, 0x0, 0x0, 0x9D, 0x4, 0x0, 0x0, 0xA3, 0x4, 0x0, 0x0, 0xA9, 0x4, 0x0, 0x0, 0xB1, 0x4, 0x0, 0x0, 0xBD, 0x4, 0x0, 0x0, 0xC1, 0x4, 0x0, 0x0, 0xC7, 0x4, 0x0, 0x0, 0xCD, 0x4, 0x0, 0x0, 0xCF, 0x4, 0x0, 0x0, 0xD5, 0x4, 0x0, 0x0, 0xE1, 0x4, 0x0, 0x0, 0xEB, 0x4, 0x0, 0x0, 0xFD, 0x4, 0x0, 0x0, 0xFF, 0x4, 0x0, 0x0, 0x3, 0x5, 0x0, 0x0, 0x9, 0x5, 0x0, 0x0, 0xB, 0x5, 0x0, 0x0, 0x11, 0x5, 0x0, 0x0, 0x15, 0x5, 0x0, 0x0, 0x17, 0x5, 0x0, 0x0, 0x1B, 0x5, 0x0, 0x0, 0x27, 0x5, 0x0, 0x0, 0x29, 0x5, 0x0, 0x0, 0x2F, 0x5, 0x0, 0x0, 0x51, 0x5, 0x0, 0x0, 0x57, 0x5, 0x0, 0x0, 0x5D, 0x5, 0x0, 0x0, 0x65, 0x5, 0x0, 0x0, 0x77, 0x5, 0x0, 0x0, 0x81, 0x5, 0x0, 0x0, 0x8F, 0x5, 0x0, 0x0, 0x93, 0x5, 0x0, 0x0, 0x95, 0x5, 0x0, 0x0, 0x99, 0x5, 0x0, 0x0, 0x9F, 0x5, 0x0, 0x0, 0xA7, 0x5, 0x0, 0x0, 0xAB, 0x5, 0x0, 0x0, 0xAD, 0x5, 0x0, 0x0, 0xB3, 0x5, 0x0, 0x0, 0xBF, 0x5, 0x0, 0x0, 0xC9, 0x5, 0x0, 0x0, 0xCB, 0x5, 0x0, 0x0, 0xCF, 0x5, 0x0, 0x0, 0xD1, 0x5, 0x0, 0x0, 0xD5, 0x5, 0x0, 0x0, 0xDB, 0x5, 0x0, 0x0, 0xE7, 0x5, 0x0, 0x0, 0xF3, 0x5, 0x0, 0x0, 0xFB, 0x5, 0x0, 0x0, 0x7, 0x6, 0x0, 0x0, 0xD, 0x6, 0x0, 0x0, 0x11, 0x6, 0x0, 0x0, 0x17, 0x6, 0x0, 0x0, 0x1F, 0x6, 0x0, 0x0, 0x23, 0x6, 0x0, 0x0, 0x2B, 0x6, 0x0, 0x0, 0x2F, 0x6, 0x0, 0x0, 0x3D, 0x6, 0x0, 0x0, 0x41, 0x6, 0x0, 0x0, 0x47, 0x6, 0x0, 0x0, 0x49, 0x6, 0x0, 0x0, 0x4D, 0x6, 0x0, 0x0, 0x53, 0x6, 0x0, 0x0, 0x55, 0x6, 0x0, 0x0, 0x5B, 0x6, 0x0, 0x0, 0x65, 0x6, 0x0, 0x0, 0x79, 0x6, 0x0, 0x0, 0x7F, 0x6, 0x0, 0x0, 0x83, 0x6, 0x0, 0x0, 0x85, 0x6, 0x0, 0x0, 0x9D, 0x6, 0x0, 0x0, 0xA1, 0x6, 0x0, 0x0, 0xA3, 0x6, 0x0, 0x0, 0xAD, 0x6, 0x0, 0x0, 0xB9, 0x6, 0x0, 0x0, 0xBB, 0x6, 0x0, 0x0, 0xC5, 0x6, 0x0, 0x0, 0xCD, 0x6, 0x0, 0x0, 0xD3, 0x6, 0x0, 0x0, 0xD9, 0x6, 0x0, 0x0, 0xDF, 0x6, 0x0, 0x0, 0xF1, 0x6, 0x0, 0x0, 0xF7, 0x6, 0x0, 0x0, 0xFB, 0x6, 0x0, 0x0, 0xFD, 0x6, 0x0, 0x0, 0x9, 0x7, 0x0, 0x0, 0x13, 0x7, 0x0, 0x0, 0x1F, 0x7, 0x0, 0x0, 0x27, 0x7, 0x0, 0x0, 0x37, 0x7, 0x0, 0x0, 0x45, 0x7, 0x0, 0x0, 0x4B, 0x7, 0x0, 0x0, 0x4F, 0x7, 0x0, 0x0, 0x51, 0x7, 0x0, 0x0, 0x55, 0x7, 0x0, 0x0, 0x57, 0x7, 0x0, 0x0, 0x61, 0x7, 0x0, 0x0, 0x6D, 0x7, 0x0, 0x0, 0x73, 0x7, 0x0, 0x0, 0x79, 0x7, 0x0, 0x0, 0x8B, 0x7, 0x0, 0x0, 0x8D, 0x7, 0x0, 0x0, 0x9D, 0x7, 0x0, 0x0, 0x9F, 0x7, 0x0, 0x0, 0xB5, 0x7, 0x0, 0x0, 0xBB, 0x7, 0x0, 0x0, 0xC3, 0x7, 0x0, 0x0, 0xC9, 0x7, 0x0, 0x0, 0xCD, 0x7, 0x0, 0x0, 0xCF, 0x7, 0x0, 0x0, 0xD3, 0x7, 0x0, 0x0, 0xDB, 0x7, 0x0, 0x0, 0xE1, 0x7, 0x0, 0x0, 0xEB, 0x7, 0x0, 0x0, 0xED, 0x7, 0x0, 0x0, 0xF7, 0x7, 0x0, 0x0, 0x5, 0x8, 0x0, 0x0, 0xF, 0x8, 0x0, 0x0, 0x15, 0x8, 0x0, 0x0, 0x21, 0x8, 0x0, 0x0, 0x23, 0x8, 0x0, 0x0, 0x27, 0x8, 0x0, 0x0, 0x29, 0x8, 0x0, 0x0, 0x33, 0x8, 0x0, 0x0, 0x3F, 0x8, 0x0, 0x0, 0x41, 0x8, 0x0, 0x0, 0x51, 0x8, 0x0, 0x0, 0x53, 0x8, 0x0, 0x0, 0x59, 0x8, 0x0, 0x0, 0x5D, 0x8, 0x0, 0x0, 0x5F, 0x8, 0x0, 0x0, 0x69, 0x8, 0x0, 0x0, 0x71, 0x8, 0x0, 0x0, 0x83, 0x8, 0x0, 0x0, 0x9B, 0x8, 0x0, 0x0, 0x9F, 0x8, 0x0, 0x0, 0xA5, 0x8, 0x0, 0x0, 0xAD, 0x8, 0x0, 0x0, 0xBD, 0x8, 0x0, 0x0, 0xBF, 0x8, 0x0, 0x0, 0xC3, 0x8, 0x0, 0x0, 0xCB, 0x8, 0x0, 0x0, 0xDB, 0x8, 0x0, 0x0, 0xDD, 0x8, 0x0, 0x0, 0xE1, 0x8, 0x0, 0x0, 0xE9, 0x8, 0x0, 0x0, 0xEF, 0x8, 0x0, 0x0, 0xF5, 0x8, 0x0, 0x0, 0xF9, 0x8, 0x0, 0x0, 0x5, 0x9, 0x0, 0x0, 0x7, 0x9, 0x0, 0x0, 0x1D, 0x9, 0x0, 0x0, 0x23, 0x9, 0x0, 0x0, 0x25, 0x9, 0x0, 0x0, 0x2B, 0x9, 0x0, 0x0, 0x2F, 0x9, 0x0, 0x0, 0x35, 0x9, 0x0, 0x0, 0x43, 0x9, 0x0, 0x0, 0x49, 0x9, 0x0, 0x0, 0x4D, 0x9, 0x0, 0x0, 0x4F, 0x9, 0x0, 0x0, 0x55, 0x9, 0x0, 0x0, 0x59, 0x9, 0x0, 0x0, 0x5F, 0x9, 0x0, 0x0, 0x6B, 0x9, 0x0, 0x0, 0x71, 0x9, 0x0, 0x0, 0x77, 0x9, 0x0, 0x0, 0x85, 0x9, 0x0, 0x0, 0x89, 0x9, 0x0, 0x0, 0x8F, 0x9, 0x0, 0x0, 0x9B, 0x9, 0x0, 0x0, 0xA3, 0x9, 0x0, 0x0, 0xA9, 0x9, 0x0, 0x0, 0xAD, 0x9, 0x0, 0x0, 0xC7, 0x9, 0x0, 0x0, 0xD9, 0x9, 0x0, 0x0, 0xE3, 0x9, 0x0, 0x0, 0xEB, 0x9, 0x0, 0x0, 0xEF, 0x9, 0x0, 0x0, 0xF5, 0x9, 0x0, 0x0, 0xF7, 0x9, 0x0, 0x0, 0xFD, 0x9, 0x0, 0x0, 0x13, 0xA, 0x0, 0x0, 0x1F, 0xA, 0x0, 0x0, 0x21, 0xA, 0x0, 0x0, 0x31, 0xA, 0x0, 0x0, 0x39, 0xA, 0x0, 0x0, 0x3D, 0xA, 0x0, 0x0, 0x49, 0xA, 0x0, 0x0, 0x57, 0xA, 0x0, 0x0, 0x61, 0xA, 0x0, 0x0, 0x63, 0xA, 0x0, 0x0, 0x67, 0xA, 0x0, 0x0, 0x6F, 0xA, 0x0, 0x0, 0x75, 0xA, 0x0, 0x0, 0x7B, 0xA, 0x0, 0x0, 0x7F, 0xA, 0x0, 0x0, 0x81, 0xA, 0x0, 0x0, 0x85, 0xA, 0x0, 0x0, 0x8B, 0xA, 0x0, 0x0, 0x93, 0xA, 0x0, 0x0, 0x97, 0xA, 0x0, 0x0, 0x99, 0xA, 0x0, 0x0, 0x9F, 0xA, 0x0, 0x0, 0xA9, 0xA, 0x0, 0x0, 0xAB, 0xA, 0x0, 0x0, 0xB5, 0xA, 0x0, 0x0, 0xBD, 0xA, 0x0, 0x0, 0xC1, 0xA, 0x0, 0x0, 0xCF, 0xA, 0x0, 0x0, 0xD9, 0xA, 0x0, 0x0, 0xE5, 0xA, 0x0, 0x0, 0xE7, 0xA, 0x0, 0x0, 0xED, 0xA, 0x0, 0x0, 0xF1, 0xA, 0x0, 0x0, 0xF3, 0xA, 0x0, 0x0, 0x3, 0xB, 0x0, 0x0, 0x11, 0xB, 0x0, 0x0, 0x15, 0xB, 0x0, 0x0, 0x1B, 0xB, 0x0, 0x0, 0x23, 0xB, 0x0, 0x0, 0x29, 0xB, 0x0, 0x0, 0x2D, 0xB, 0x0, 0x0, 0x3F, 0xB, 0x0, 0x0, 0x47, 0xB, 0x0, 0x0, 0x51, 0xB, 0x0, 0x0, 0x57, 0xB, 0x0, 0x0, 0x5D, 0xB, 0x0, 0x0, 0x65, 0xB, 0x0, 0x0, 0x6F, 0xB, 0x0, 0x0, 0x7B, 0xB, 0x0, 0x0, 0x89, 0xB, 0x0, 0x0, 0x8D, 0xB, 0x0, 0x0, 0x93, 0xB, 0x0, 0x0, 0x99, 0xB, 0x0, 0x0, 0x9B, 0xB, 0x0, 0x0, 0xB7, 0xB, 0x0, 0x0, 0xB9, 0xB, 0x0, 0x0, 0xC3, 0xB, 0x0, 0x0, 0xCB, 0xB, 0x0, 0x0, 0xCF, 0xB, 0x0, 0x0, 0xDD, 0xB, 0x0, 0x0, 0xE1, 0xB, 0x0, 0x0, 0xE9, 0xB, 0x0, 0x0, 0xF5, 0xB, 0x0, 0x0, 0xFB, 0xB, 0x0, 0x0, 0x7, 0xC, 0x0, 0x0, 0xB, 0xC, 0x0, 0x0, 0x11, 0xC, 0x0, 0x0, 0x25, 0xC, 0x0, 0x0, 0x2F, 0xC, 0x0, 0x0, 0x31, 0xC, 0x0, 0x0, 0x41, 0xC, 0x0, 0x0, 0x5B, 0xC, 0x0, 0x0, 0x5F, 0xC, 0x0, 0x0, 0x61, 0xC, 0x0, 0x0, 0x6D, 0xC, 0x0, 0x0, 0x73, 0xC, 0x0, 0x0, 0x77, 0xC, 0x0, 0x0, 0x83, 0xC, 0x0, 0x0, 0x89, 0xC, 0x0, 0x0, 0x91, 0xC, 0x0, 0x0, 0x95, 0xC, 0x0, 0x0, 0x9D, 0xC, 0x0, 0x0, 0xB3, 0xC, 0x0, 0x0, 0xB5, 0xC, 0x0, 0x0, 0xB9, 0xC, 0x0, 0x0, 0xBB, 0xC, 0x0, 0x0, 0xC7, 0xC, 0x0, 0x0, 0xE3, 0xC, 0x0, 0x0, 0xE5, 0xC, 0x0, 0x0, 0xEB, 0xC, 0x0, 0x0, 0xF1, 0xC, 0x0, 0x0, 0xF7, 0xC, 0x0, 0x0, 0xFB, 0xC, 0x0, 0x0, 0x1, 0xD, 0x0, 0x0, 0x3, 0xD, 0x0, 0x0, 0xF, 0xD, 0x0, 0x0, 0x13, 0xD, 0x0, 0x0, 0x1F, 0xD, 0x0, 0x0, 0x21, 0xD, 0x0, 0x0, 0x2B, 0xD, 0x0, 0x0, 0x2D, 0xD, 0x0, 0x0, 0x3D, 0xD, 0x0, 0x0, 0x3F, 0xD, 0x0, 0x0, 0x4F, 0xD, 0x0, 0x0, 0x55, 0xD, 0x0, 0x0, 0x69, 0xD, 0x0, 0x0, 0x79, 0xD, 0x0, 0x0, 0x81, 0xD, 0x0, 0x0, 0x85, 0xD, 0x0, 0x0, 0x87, 0xD, 0x0, 0x0, 0x8B, 0xD, 0x0, 0x0, 0x8D, 0xD, 0x0, 0x0, 0xA3, 0xD, 0x0, 0x0, 0xAB, 0xD, 0x0, 0x0, 0xB7, 0xD, 0x0, 0x0, 0xBD, 0xD, 0x0, 0x0, 0xC7, 0xD, 0x0, 0x0, 0xC9, 0xD, 0x0, 0x0, 0xCD, 0xD, 0x0, 0x0, 0xD3, 0xD, 0x0, 0x0, 0xD5, 0xD, 0x0, 0x0, 0xDB, 0xD, 0x0, 0x0, 0xE5, 0xD, 0x0, 0x0, 0xE7, 0xD, 0x0, 0x0, 0xF3, 0xD, 0x0, 0x0, 0xFD, 0xD, 0x0, 0x0, 0xFF, 0xD, 0x0, 0x0, 0x9, 0xE, 0x0, 0x0, 0x17, 0xE, 0x0, 0x0, 0x1D, 0xE, 0x0, 0x0, 0x21, 0xE, 0x0, 0x0, 0x27, 0xE, 0x0, 0x0, 0x2F, 0xE, 0x0, 0x0, 0x35, 0xE, 0x0, 0x0, 0x3B, 0xE, 0x0, 0x0, 0x4B, 0xE, 0x0, 0x0, 0x57, 0xE, 0x0, 0x0, 0x59, 0xE, 0x0, 0x0, 0x5D, 0xE, 0x0, 0x0, 0x6B, 0xE, 0x0, 0x0, 0x71, 0xE, 0x0, 0x0, 0x75, 0xE, 0x0, 0x0, 0x7D, 0xE, 0x0, 0x0, 0x87, 0xE, 0x0, 0x0, 0x8F, 0xE, 0x0, 0x0, 0x95, 0xE, 0x0, 0x0, 0x9B, 0xE, 0x0, 0x0, 0xB1, 0xE, 0x0, 0x0, 0xB7, 0xE, 0x0, 0x0, 0xB9, 0xE, 0x0, 0x0, 0xC3, 0xE, 0x0, 0x0, 0xD1, 0xE, 0x0, 0x0, 0xD5, 0xE, 0x0, 0x0, 0xDB, 0xE, 0x0, 0x0, 0xED, 0xE, 0x0, 0x0, 0xEF, 0xE, 0x0, 0x0, 0xF9, 0xE, 0x0, 0x0, 0x7, 0xF, 0x0, 0x0, 0xB, 0xF, 0x0, 0x0, 0xD, 0xF, 0x0, 0x0, 0x17, 0xF, 0x0, 0x0, 0x25, 0xF, 0x0, 0x0, 0x29, 0xF, 0x0, 0x0, 0x31, 0xF, 0x0, 0x0, 0x43, 0xF, 0x0, 0x0, 0x47, 0xF, 0x0, 0x0, 0x4D, 0xF, 0x0, 0x0, 0x4F, 0xF, 0x0, 0x0, 0x53, 0xF, 0x0, 0x0, 0x59, 0xF, 0x0, 0x0, 0x5B, 0xF, 0x0, 0x0, 0x67, 0xF, 0x0, 0x0, 0x6B, 0xF, 0x0, 0x0, 0x7F, 0xF, 0x0, 0x0, 0x95, 0xF, 0x0, 0x0, 0xA1, 0xF, 0x0, 0x0, 0xA3, 0xF, 0x0, 0x0, 0xA7, 0xF, 0x0, 0x0, 0xAD, 0xF, 0x0, 0x0, 0xB3, 0xF, 0x0, 0x0, 0xB5, 0xF, 0x0, 0x0, 0xBB, 0xF, 0x0, 0x0, 0xD1, 0xF, 0x0, 0x0, 0xD3, 0xF, 0x0, 0x0, 0xD9, 0xF, 0x0, 0x0, 0xE9, 0xF, 0x0, 0x0, 0xEF, 0xF, 0x0, 0x0, 0xFB, 0xF, 0x0, 0x0, 0xFD, 0xF, 0x0, 0x0, 0x3, 0x10, 0x0, 0x0, 0xF, 0x10, 0x0, 0x0, 0x1F, 0x10, 0x0, 0x0, 0x21, 0x10, 0x0, 0x0, 0x25, 0x10, 0x0, 0x0, 0x2B, 0x10, 0x0, 0x0, 0x39, 0x10, 0x0, 0x0, 0x3D, 0x10, 0x0, 0x0, 0x3F, 0x10, 0x0, 0x0, 0x51, 0x10, 0x0, 0x0, 0x69, 0x10, 0x0, 0x0, 0x73, 0x10, 0x0, 0x0, 0x79, 0x10, 0x0, 0x0, 0x7B, 0x10, 0x0, 0x0, 0x85, 0x10, 0x0, 0x0, 0x87, 0x10, 0x0, 0x0, 0x91, 0x10, 0x0, 0x0, 0x93, 0x10, 0x0, 0x0, 0x9D, 0x10, 0x0, 0x0, 0xA3, 0x10, 0x0, 0x0, 0xA5, 0x10, 0x0, 0x0, 0xAF, 0x10, 0x0, 0x0, 0xB1, 0x10, 0x0, 0x0, 0xBB, 0x10, 0x0, 0x0, 0xC1, 0x10, 0x0, 0x0, 0xC9, 0x10, 0x0, 0x0, 0xE7, 0x10, 0x0, 0x0, 0xF1, 0x10, 0x0, 0x0, 0xF3, 0x10, 0x0, 0x0, 0xFD, 0x10, 0x0, 0x0, 0x5, 0x11, 0x0, 0x0, 0xB, 0x11, 0x0, 0x0, 0x15, 0x11, 0x0, 0x0, 0x27, 0x11, 0x0, 0x0, 0x2D, 0x11, 0x0, 0x0, 0x39, 0x11, 0x0, 0x0, 0x45, 0x11, 0x0, 0x0, 0x47, 0x11, 0x0, 0x0, 0x59, 0x11, 0x0, 0x0, 0x5F, 0x11, 0x0, 0x0, 0x63, 0x11, 0x0, 0x0, 0x69, 0x11, 0x0, 0x0, 0x6F, 0x11, 0x0, 0x0, 0x81, 0x11, 0x0, 0x0, 0x83, 0x11, 0x0, 0x0, 0x8D, 0x11, 0x0, 0x0, 0x9B, 0x11, 0x0, 0x0, 0xA1, 0x11, 0x0, 0x0, 0xA5, 0x11, 0x0, 0x0, 0xA7, 0x11, 0x0, 0x0, 0xAB, 0x11, 0x0, 0x0, 0xC3, 0x11, 0x0, 0x0, 0xC5, 0x11, 0x0, 0x0, 0xD1, 0x11, 0x0, 0x0, 0xD7, 0x11, 0x0, 0x0, 0xE7, 0x11, 0x0, 0x0, 0xEF, 0x11, 0x0, 0x0, 0xF5, 0x11, 0x0, 0x0, 0xFB, 0x11, 0x0, 0x0, 0xD, 0x12, 0x0, 0x0, 0x1D, 0x12, 0x0, 0x0, 0x1F, 0x12, 0x0, 0x0, 0x23, 0x12, 0x0, 0x0, 0x29, 0x12, 0x0, 0x0, 0x2B, 0x12, 0x0, 0x0, 0x31, 0x12, 0x0, 0x0, 0x37, 0x12, 0x0, 0x0, 0x41, 0x12, 0x0, 0x0, 0x47, 0x12, 0x0, 0x0, 0x53, 0x12, 0x0, 0x0, 0x5F, 0x12, 0x0, 0x0, 0x71, 0x12, 0x0, 0x0, 0x73, 0x12, 0x0, 0x0, 0x79, 0x12, 0x0, 0x0, 0x7D, 0x12, 0x0, 0x0, 0x8F, 0x12, 0x0, 0x0, 0x97, 0x12, 0x0, 0x0, 0xAF, 0x12, 0x0, 0x0, 0xB3, 0x12, 0x0, 0x0, 0xB5, 0x12, 0x0, 0x0, 0xB9, 0x12, 0x0, 0x0, 0xBF, 0x12, 0x0, 0x0, 0xC1, 0x12, 0x0, 0x0, 0xCD, 0x12, 0x0, 0x0, 0xD1, 0x12, 0x0, 0x0, 0xDF, 0x12, 0x0, 0x0, 0xFD, 0x12, 0x0, 0x0, 0x7, 0x13, 0x0, 0x0, 0xD, 0x13, 0x0, 0x0, 0x19, 0x13, 0x0, 0x0, 0x27, 0x13, 0x0, 0x0, 0x2D, 0x13, 0x0, 0x0, 0x37, 0x13, 0x0, 0x0, 0x43, 0x13, 0x0, 0x0, 0x45, 0x13, 0x0, 0x0, 0x49, 0x13, 0x0, 0x0, 0x4F, 0x13, 0x0, 0x0, 0x57, 0x13, 0x0, 0x0, 0x5D, 0x13, 0x0, 0x0, 0x67, 0x13, 0x0, 0x0, 0x69, 0x13, 0x0, 0x0, 0x6D, 0x13, 0x0, 0x0, 0x7B, 0x13, 0x0, 0x0, 0x81, 0x13, 0x0, 0x0, 0x87, 0x13, 0x0, 0x0, 0x8B, 0x13, 0x0, 0x0, 0x91, 0x13, 0x0, 0x0, 0x93, 0x13, 0x0, 0x0, 0x9D, 0x13, 0x0, 0x0, 0x9F, 0x13, 0x0, 0x0, 0xAF, 0x13, 0x0, 0x0, 0xBB, 0x13, 0x0, 0x0, 0xC3, 0x13, 0x0, 0x0, 0xD5, 0x13, 0x0, 0x0, 0xD9, 0x13, 0x0, 0x0, 0xDF, 0x13, 0x0, 0x0, 0xEB, 0x13, 0x0, 0x0, 0xED, 0x13, 0x0, 0x0, 0xF3, 0x13, 0x0, 0x0, 0xF9, 0x13, 0x0, 0x0, 0xFF, 0x13, 0x0, 0x0, 0x1B, 0x14, 0x0, 0x0, 0x21, 0x14, 0x0, 0x0, 0x2F, 0x14, 0x0, 0x0, 0x33, 0x14, 0x0, 0x0, 0x3B, 0x14, 0x0, 0x0, 0x45, 0x14, 0x0, 0x0, 0x4D, 0x14, 0x0, 0x0, 0x59, 0x14, 0x0, 0x0, 0x6B, 0x14, 0x0, 0x0, 0x6F, 0x14, 0x0, 0x0, 0x71, 0x14, 0x0, 0x0, 0x75, 0x14, 0x0, 0x0, 0x8D, 0x14, 0x0, 0x0, 0x99, 0x14, 0x0, 0x0, 0x9F, 0x14, 0x0, 0x0, 0xA1, 0x14, 0x0, 0x0, 0xB1, 0x14, 0x0, 0x0, 0xB7, 0x14, 0x0, 0x0, 0xBD, 0x14, 0x0, 0x0, 0xCB, 0x14, 0x0, 0x0, 0xD5, 0x14, 0x0, 0x0, 0xE3, 0x14, 0x0, 0x0, 0xE7, 0x14, 0x0, 0x0, 0x5, 0x15, 0x0, 0x0, 0xB, 0x15, 0x0, 0x0, 0x11, 0x15, 0x0, 0x0, 0x17, 0x15, 0x0, 0x0, 0x1F, 0x15, 0x0, 0x0, 0x25, 0x15, 0x0, 0x0, 0x29, 0x15, 0x0, 0x0, 0x2B, 0x15, 0x0, 0x0, 0x37, 0x15, 0x0, 0x0, 0x3D, 0x15, 0x0, 0x0, 0x41, 0x15, 0x0, 0x0, 0x43, 0x15, 0x0, 0x0, 0x49, 0x15, 0x0, 0x0, 0x5F, 0x15, 0x0, 0x0, 0x65, 0x15, 0x0, 0x0, 0x67, 0x15, 0x0, 0x0, 0x6B, 0x15, 0x0, 0x0, 0x7D, 0x15, 0x0, 0x0, 0x7F, 0x15, 0x0, 0x0, 0x83, 0x15, 0x0, 0x0, 0x8F, 0x15, 0x0, 0x0, 0x91, 0x15, 0x0, 0x0, 0x97, 0x15, 0x0, 0x0, 0x9B, 0x15, 0x0, 0x0, 0xB5, 0x15, 0x0, 0x0, 0xBB, 0x15, 0x0, 0x0, 0xC1, 0x15, 0x0, 0x0, 0xC5, 0x15, 0x0, 0x0, 0xCD, 0x15, 0x0, 0x0, 0xD7, 0x15, 0x0, 0x0, 0xF7, 0x15, 0x0, 0x0, 0x7, 0x16, 0x0, 0x0, 0x9, 0x16, 0x0, 0x0, 0xF, 0x16, 0x0, 0x0, 0x13, 0x16, 0x0, 0x0, 0x15, 0x16, 0x0, 0x0, 0x19, 0x16, 0x0, 0x0, 0x1B, 0x16, 0x0, 0x0, 0x25, 0x16, 0x0, 0x0, 0x33, 0x16, 0x0, 0x0, 0x39, 0x16, 0x0, 0x0, 0x3D, 0x16, 0x0, 0x0, 0x45, 0x16, 0x0, 0x0, 0x4F, 0x16, 0x0, 0x0, 0x55, 0x16, 0x0, 0x0, 0x69, 0x16, 0x0, 0x0, 0x6D, 0x16, 0x0, 0x0, 0x6F, 0x16, 0x0, 0x0, 0x75, 0x16, 0x0, 0x0, 0x93, 0x16, 0x0, 0x0, 0x97, 0x16, 0x0, 0x0, 0x9F, 0x16, 0x0, 0x0, 0xA9, 0x16, 0x0, 0x0, 0xAF, 0x16, 0x0, 0x0, 0xB5, 0x16, 0x0, 0x0, 0xBD, 0x16, 0x0, 0x0, 0xC3, 0x16, 0x0, 0x0, 0xCF, 0x16, 0x0, 0x0, 0xD3, 0x16, 0x0, 0x0, 0xD9, 0x16, 0x0, 0x0, 0xDB, 0x16, 0x0, 0x0, 0xE1, 0x16, 0x0, 0x0, 0xE5, 0x16, 0x0, 0x0, 0xEB, 0x16, 0x0, 0x0, 0xED, 0x16, 0x0, 0x0, 0xF7, 0x16, 0x0, 0x0, 0xF9, 0x16, 0x0, 0x0, 0x9, 0x17, 0x0, 0x0, 0xF, 0x17, 0x0, 0x0, 0x23, 0x17, 0x0, 0x0, 0x27, 0x17, 0x0, 0x0, 0x33, 0x17, 0x0, 0x0, 0x41, 0x17, 0x0, 0x0, 0x5D, 0x17, 0x0, 0x0, 0x63, 0x17, 0x0, 0x0 };
extern Il2CppType $ArrayType$3132_t6579_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D0_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D0_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D0_DefaultValueData, &$ArrayType$3132_t6579_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D5_DefaultValueData[] = { 0x29, 0x2E, 0x43, 0xC9, 0xA2, 0xD8, 0x7C, 0x1, 0x3D, 0x36, 0x54, 0xA1, 0xEC, 0xF0, 0x6, 0x13, 0x62, 0xA7, 0x5, 0xF3, 0xC0, 0xC7, 0x73, 0x8C, 0x98, 0x93, 0x2B, 0xD9, 0xBC, 0x4C, 0x82, 0xCA, 0x1E, 0x9B, 0x57, 0x3C, 0xFD, 0xD4, 0xE0, 0x16, 0x67, 0x42, 0x6F, 0x18, 0x8A, 0x17, 0xE5, 0x12, 0xBE, 0x4E, 0xC4, 0xD6, 0xDA, 0x9E, 0xDE, 0x49, 0xA0, 0xFB, 0xF5, 0x8E, 0xBB, 0x2F, 0xEE, 0x7A, 0xA9, 0x68, 0x79, 0x91, 0x15, 0xB2, 0x7, 0x3F, 0x94, 0xC2, 0x10, 0x89, 0xB, 0x22, 0x5F, 0x21, 0x80, 0x7F, 0x5D, 0x9A, 0x5A, 0x90, 0x32, 0x27, 0x35, 0x3E, 0xCC, 0xE7, 0xBF, 0xF7, 0x97, 0x3, 0xFF, 0x19, 0x30, 0xB3, 0x48, 0xA5, 0xB5, 0xD1, 0xD7, 0x5E, 0x92, 0x2A, 0xAC, 0x56, 0xAA, 0xC6, 0x4F, 0xB8, 0x38, 0xD2, 0x96, 0xA4, 0x7D, 0xB6, 0x76, 0xFC, 0x6B, 0xE2, 0x9C, 0x74, 0x4, 0xF1, 0x45, 0x9D, 0x70, 0x59, 0x64, 0x71, 0x87, 0x20, 0x86, 0x5B, 0xCF, 0x65, 0xE6, 0x2D, 0xA8, 0x2, 0x1B, 0x60, 0x25, 0xAD, 0xAE, 0xB0, 0xB9, 0xF6, 0x1C, 0x46, 0x61, 0x69, 0x34, 0x40, 0x7E, 0xF, 0x55, 0x47, 0xA3, 0x23, 0xDD, 0x51, 0xAF, 0x3A, 0xC3, 0x5C, 0xF9, 0xCE, 0xBA, 0xC5, 0xEA, 0x26, 0x2C, 0x53, 0xD, 0x6E, 0x85, 0x28, 0x84, 0x9, 0xD3, 0xDF, 0xCD, 0xF4, 0x41, 0x81, 0x4D, 0x52, 0x6A, 0xDC, 0x37, 0xC8, 0x6C, 0xC1, 0xAB, 0xFA, 0x24, 0xE1, 0x7B, 0x8, 0xC, 0xBD, 0xB1, 0x4A, 0x78, 0x88, 0x95, 0x8B, 0xE3, 0x63, 0xE8, 0x6D, 0xE9, 0xCB, 0xD5, 0xFE, 0x3B, 0x0, 0x1D, 0x39, 0xF2, 0xEF, 0xB7, 0xE, 0x66, 0x58, 0xD0, 0xE4, 0xA6, 0x77, 0x72, 0xF8, 0xEB, 0x75, 0x4B, 0xA, 0x31, 0x44, 0x50, 0xB4, 0x8F, 0xED, 0x1F, 0x1A, 0xDB, 0x99, 0x8D, 0x33, 0x9F, 0x11, 0x83, 0x14 };
extern Il2CppType $ArrayType$256_t6580_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D5_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D5_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D5_DefaultValueData, &$ArrayType$256_t6580_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D6_DefaultValueData[] = { 0xDA, 0x39, 0xA3, 0xEE, 0x5E, 0x6B, 0x4B, 0xD, 0x32, 0x55, 0xBF, 0xEF, 0x95, 0x60, 0x18, 0x90, 0xAF, 0xD8, 0x7, 0x9 };
extern Il2CppType $ArrayType$20_t6581_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D6_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D6_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D6_DefaultValueData, &$ArrayType$20_t6581_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D7_DefaultValueData[] = { 0xE3, 0xB0, 0xC4, 0x42, 0x98, 0xFC, 0x1C, 0x14, 0x9A, 0xFB, 0xF4, 0xC8, 0x99, 0x6F, 0xB9, 0x24, 0x27, 0xAE, 0x41, 0xE4, 0x64, 0x9B, 0x93, 0x4C, 0xA4, 0x95, 0x99, 0x1B, 0x78, 0x52, 0xB8, 0x55 };
extern Il2CppType $ArrayType$32_t6582_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D7_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D7_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D7_DefaultValueData, &$ArrayType$32_t6582_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D8_DefaultValueData[] = { 0x38, 0xB0, 0x60, 0xA7, 0x51, 0xAC, 0x96, 0x38, 0x4C, 0xD9, 0x32, 0x7E, 0xB1, 0xB1, 0xE3, 0x6A, 0x21, 0xFD, 0xB7, 0x11, 0x14, 0xBE, 0x7, 0x43, 0x4C, 0xC, 0xC7, 0xBF, 0x63, 0xF6, 0xE1, 0xDA, 0x27, 0x4E, 0xDE, 0xBF, 0xE7, 0x6F, 0x65, 0xFB, 0xD5, 0x1A, 0xD2, 0xF1, 0x48, 0x98, 0xB9, 0x5B };
extern Il2CppType $ArrayType$48_t6583_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D8_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D8_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D8_DefaultValueData, &$ArrayType$48_t6583_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D9_DefaultValueData[] = { 0xCF, 0x83, 0xE1, 0x35, 0x7E, 0xEF, 0xB8, 0xBD, 0xF1, 0x54, 0x28, 0x50, 0xD6, 0x6D, 0x80, 0x7, 0xD6, 0x20, 0xE4, 0x5, 0xB, 0x57, 0x15, 0xDC, 0x83, 0xF4, 0xA9, 0x21, 0xD3, 0x6C, 0xE9, 0xCE, 0x47, 0xD0, 0xD1, 0x3C, 0x5D, 0x85, 0xF2, 0xB0, 0xFF, 0x83, 0x18, 0xD2, 0x87, 0x7E, 0xEC, 0x2F, 0x63, 0xB9, 0x31, 0xBD, 0x47, 0x41, 0x7A, 0x81, 0xA5, 0x38, 0x32, 0x7A, 0xF9, 0x27, 0xDA, 0x3E };
extern Il2CppType $ArrayType$64_t6584_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D9_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D9_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D9_DefaultValueData, &$ArrayType$64_t6584_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D11_DefaultValueData[] = { 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1 };
extern Il2CppType $ArrayType$64_t6584_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D11_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D11_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D11_DefaultValueData, &$ArrayType$64_t6584_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D12_DefaultValueData[] = { 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2 };
extern Il2CppType $ArrayType$64_t6584_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D12_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D12_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D12_DefaultValueData, &$ArrayType$64_t6584_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D13_DefaultValueData[] = { 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3 };
extern Il2CppType $ArrayType$64_t6584_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D13_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D13_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D13_DefaultValueData, &$ArrayType$64_t6584_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D14_DefaultValueData[] = { 0x9, 0x92, 0x26, 0x89, 0x93, 0xF2, 0x2C, 0x64, 0x1, 0x19, 0x0, 0x0 };
extern Il2CppType $ArrayType$12_t6585_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D14_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D14_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D14_DefaultValueData, &$ArrayType$12_t6585_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D15_DefaultValueData[] = { 0x9, 0x92, 0x26, 0x89, 0x93, 0xF2, 0x2C, 0x64, 0x1, 0x1, 0x0, 0x0 };
extern Il2CppType $ArrayType$12_t6585_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D15_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D15_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D15_DefaultValueData, &$ArrayType$12_t6585_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D16_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x9, 0x1, 0x0, 0x0, 0x0 };
extern Il2CppType $ArrayType$12_t6585_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D16_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D16_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D16_DefaultValueData, &$ArrayType$12_t6585_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D17_DefaultValueData[] = { 0x2C, 0x0, 0x2B, 0x0, 0x22, 0x0, 0x5C, 0x0, 0x3C, 0x0, 0x3E, 0x0, 0x3B, 0x0, 0x0, 0x0 };
extern Il2CppType $ArrayType$16_t6586_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D17_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D17_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D17_DefaultValueData, &$ArrayType$16_t6586_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D21_DefaultValueData[] = { 0x43, 0x4C, 0x4E, 0x54 };
extern Il2CppType $ArrayType$4_t6587_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D21_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D21_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D21_DefaultValueData, &$ArrayType$4_t6587_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D22_DefaultValueData[] = { 0x53, 0x52, 0x56, 0x52 };
extern Il2CppType $ArrayType$4_t6587_0_0_0;
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D22_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D22_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D22_DefaultValueData, &$ArrayType$4_t6587_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* U3CPrivateImplementationDetailsU3E_t6588_FieldDefaultValues[] = 
{
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D0_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D5_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D6_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D7_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D8_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D9_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D11_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D12_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D13_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D14_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D15_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D16_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D17_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D21_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t6588____$$fieldU2D22_DefaultValue,
	NULL
};
static MethodInfo* U3CPrivateImplementationDetailsU3E_t6588_MethodInfos[] =
{
	NULL
};
extern TypeInfo $ArrayType$3132_t6579_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$256_t6580_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$20_t6581_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$32_t6582_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$48_t6583_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$64_t6584_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$12_t6585_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$16_t6586_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$4_t6587_il2cpp_TypeInfo;
static TypeInfo* U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo__nestedTypes[10] =
{
	&$ArrayType$3132_t6579_il2cpp_TypeInfo,
	&$ArrayType$256_t6580_il2cpp_TypeInfo,
	&$ArrayType$20_t6581_il2cpp_TypeInfo,
	&$ArrayType$32_t6582_il2cpp_TypeInfo,
	&$ArrayType$48_t6583_il2cpp_TypeInfo,
	&$ArrayType$64_t6584_il2cpp_TypeInfo,
	&$ArrayType$12_t6585_il2cpp_TypeInfo,
	&$ArrayType$16_t6586_il2cpp_TypeInfo,
	&$ArrayType$4_t6587_il2cpp_TypeInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* U3CPrivateImplementationDetailsU3E_t6588_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern TypeInfo CompilerGeneratedAttribute_t963_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern MethodInfo CompilerGeneratedAttribute__ctor_m4116_MethodInfo;
void U3CPrivateImplementationDetailsU3E_t6588_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t963 * tmp;
		tmp = (CompilerGeneratedAttribute_t963 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t963_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m4116(tmp, &CompilerGeneratedAttribute__ctor_m4116_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CPrivateImplementationDetailsU3E_t6588__CustomAttributeCache = {
1,
NULL,
&U3CPrivateImplementationDetailsU3E_t6588_CustomAttributesCacheGenerator
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t6588_0_0_0;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t6588_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct U3CPrivateImplementationDetailsU3E_t6588;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo;
extern CustomAttributesCache U3CPrivateImplementationDetailsU3E_t6588__CustomAttributeCache;
TypeInfo U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t6588_MethodInfos/* methods */
	, NULL/* properties */
	, U3CPrivateImplementationDetailsU3E_t6588_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, U3CPrivateImplementationDetailsU3E_t6588_VTable/* vtable */
	, &U3CPrivateImplementationDetailsU3E_t6588__CustomAttributeCache/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t6588_il2cpp_TypeInfo/* cast_class */
	, &U3CPrivateImplementationDetailsU3E_t6588_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t6588_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, U3CPrivateImplementationDetailsU3E_t6588_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t6588)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t6588_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 15/* field_count */
	, 0/* event_count */
	, 9/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
