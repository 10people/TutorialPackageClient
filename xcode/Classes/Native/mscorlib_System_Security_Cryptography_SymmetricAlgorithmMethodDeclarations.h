#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t6484;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t6482;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t6469;
// System.String
struct String_t;
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
 void SymmetricAlgorithm__ctor_m45672 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
 void SymmetricAlgorithm_System_IDisposable_Dispose_m45638 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
 void SymmetricAlgorithm_Finalize_m45634 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
 void SymmetricAlgorithm_Clear_m45692 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
 void SymmetricAlgorithm_Dispose_m45674 (SymmetricAlgorithm_t6484 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
 int32_t SymmetricAlgorithm_get_BlockSize_m45639 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
 void SymmetricAlgorithm_set_BlockSize_m45640 (SymmetricAlgorithm_t6484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
 int32_t SymmetricAlgorithm_get_FeedbackSize_m45641 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
 ByteU5BU5D_t1033* SymmetricAlgorithm_get_IV_m56025 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
 void SymmetricAlgorithm_set_IV_m45690 (SymmetricAlgorithm_t6484 * __this, ByteU5BU5D_t1033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
 ByteU5BU5D_t1033* SymmetricAlgorithm_get_Key_m45675 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
 void SymmetricAlgorithm_set_Key_m45676 (SymmetricAlgorithm_t6484 * __this, ByteU5BU5D_t1033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
 int32_t SymmetricAlgorithm_get_KeySize_m45642 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
 void SymmetricAlgorithm_set_KeySize_m45643 (SymmetricAlgorithm_t6484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
 KeySizesU5BU5D_t6482* SymmetricAlgorithm_get_LegalKeySizes_m45644 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
 int32_t SymmetricAlgorithm_get_Mode_m45645 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
 void SymmetricAlgorithm_set_Mode_m45646 (SymmetricAlgorithm_t6484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
 int32_t SymmetricAlgorithm_get_Padding_m45647 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
 void SymmetricAlgorithm_set_Padding_m45648 (SymmetricAlgorithm_t6484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
 Object_t * SymmetricAlgorithm_CreateDecryptor_m45649 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[])
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
 Object_t * SymmetricAlgorithm_CreateEncryptor_m45636 (SymmetricAlgorithm_t6484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[])
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV()
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey()
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
 SymmetricAlgorithm_t6484 * SymmetricAlgorithm_Create_m45689 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
