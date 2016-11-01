#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1037;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t4357;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;
// System.Object
struct Object_t;

// System.Void Google.ProtocolBuffers.ByteString::.ctor(System.Byte[])
 void ByteString__ctor_m30816 (ByteString_t3022 * __this, ByteU5BU5D_t1033* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.ByteString::.cctor()
 void ByteString__cctor_m30817 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Google.ProtocolBuffers.ByteString::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ByteString_System_Collections_IEnumerable_GetEnumerator_m30818 (ByteString_t3022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::get_Empty()
 ByteString_t3022 * ByteString_get_Empty_m30819 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.ByteString::get_Length()
 int32_t ByteString_get_Length_m30820 (ByteString_t3022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ByteString::get_IsEmpty()
 bool ByteString_get_IsEmpty_m30821 (ByteString_t3022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Google.ProtocolBuffers.ByteString::ToByteArray()
 ByteU5BU5D_t1033* ByteString_ToByteArray_m30822 (ByteString_t3022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::FromBase64(System.String)
 ByteString_t3022 * ByteString_FromBase64_m30823 (Object_t * __this/* static, unused */, String_t* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::CopyFrom(System.Byte[])
 ByteString_t3022 * ByteString_CopyFrom_m30824 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::CopyFrom(System.Byte[],System.Int32,System.Int32)
 ByteString_t3022 * ByteString_CopyFrom_m30825 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___bytes, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::CopyFrom(System.String,System.Text.Encoding)
 ByteString_t3022 * ByteString_CopyFrom_m30826 (Object_t * __this/* static, unused */, String_t* ___text, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::CopyFromUtf8(System.String)
 ByteString_t3022 * ByteString_CopyFromUtf8_m30827 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Google.ProtocolBuffers.ByteString::get_Item(System.Int32)
 uint8_t ByteString_get_Item_m30828 (ByteString_t3022 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.ProtocolBuffers.ByteString::ToString(System.Text.Encoding)
 String_t* ByteString_ToString_m30829 (ByteString_t3022 * __this, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.ProtocolBuffers.ByteString::ToStringUtf8()
 String_t* ByteString_ToStringUtf8_m30830 (ByteString_t3022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> Google.ProtocolBuffers.ByteString::GetEnumerator()
 Object_t* ByteString_GetEnumerator_m30831 (ByteString_t3022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.ByteString::CreateCodedInput()
 CodedInputStream_t2919 * ByteString_CreateCodedInput_m30832 (ByteString_t3022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(System.Object)
 bool ByteString_Equals_m30833 (ByteString_t3022 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.ByteString::GetHashCode()
 int32_t ByteString_GetHashCode_m30834 (ByteString_t3022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(Google.ProtocolBuffers.ByteString)
 bool ByteString_Equals_m30835 (ByteString_t3022 * __this, ByteString_t3022 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
