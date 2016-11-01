#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityPort.XmlHelper
struct XmlHelper_t5224;
// System.IO.Stream
struct Stream_t1038;
// System.Object
struct Object_t;
// System.Text.Encoding
struct Encoding_t1037;
// System.String
struct String_t;

// System.Void UnityPort.XmlHelper::XmlSerializeInternal(System.IO.Stream,System.Object,System.Text.Encoding)
 void XmlHelper_XmlSerializeInternal_m37199 (Object_t * __this/* static, unused */, Stream_t1038 * ___stream, Object_t * ___o, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityPort.XmlHelper::XmlSerialize(System.Object,System.Text.Encoding)
 String_t* XmlHelper_XmlSerialize_m37200 (Object_t * __this/* static, unused */, Object_t * ___o, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPort.XmlHelper::XmlSerializeToFile(System.Object,System.String,System.Text.Encoding)
 void XmlHelper_XmlSerializeToFile_m37201 (Object_t * __this/* static, unused */, Object_t * ___o, String_t* ___path, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
