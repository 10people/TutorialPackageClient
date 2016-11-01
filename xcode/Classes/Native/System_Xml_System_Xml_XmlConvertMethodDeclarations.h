#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlConvert
struct XmlConvert_t6989;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IO.TextWriter
struct TextWriter_t1098;
// System.String[]
struct StringU5BU5D_t333;
// System.Char[]
struct CharU5BU5D_t1016;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Xml.XmlDateTimeSerializationMode
#include "System_Xml_System_Xml_XmlDateTimeSerializationMode.h"
// System.Globalization.DateTimeStyles
#include "mscorlib_System_Globalization_DateTimeStyles.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Xml.XmlConvert::.cctor()
 void XmlConvert__cctor_m48087 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::TryDecoding(System.String)
 String_t* XmlConvert_TryDecoding_m48088 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::DecodeName(System.String)
 String_t* XmlConvert_DecodeName_m48089 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeLocalName(System.String)
 String_t* XmlConvert_EncodeLocalName_m48090 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::IsInvalid(System.Char,System.Boolean)
 bool XmlConvert_IsInvalid_m48091 (Object_t * __this/* static, unused */, uint16_t ___c, bool ___firstOnlyLetter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String,System.Boolean)
 String_t* XmlConvert_EncodeName_m48092 (Object_t * __this/* static, unused */, String_t* ___name, bool ___nmtoken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String)
 String_t* XmlConvert_EncodeName_m48093 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
 bool XmlConvert_ToBoolean_m48094 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToBinHexString(System.Byte[])
 String_t* XmlConvert_ToBinHexString_m48095 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlConvert::WriteBinHex(System.Byte[],System.Int32,System.Int32,System.IO.TextWriter)
 void XmlConvert_WriteBinHex_m48096 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___buffer, int32_t ___index, int32_t ___count, TextWriter_t1098 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Xml.XmlConvert::ToByte(System.String)
 uint8_t XmlConvert_ToByte_m48097 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String)
 DateTime_t1171  XmlConvert_ToDateTime_m48098 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.Xml.XmlDateTimeSerializationMode)
 DateTime_t1171  XmlConvert_ToDateTime_m48099 (Object_t * __this/* static, unused */, String_t* ___value, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[])
 DateTime_t1171  XmlConvert_ToDateTime_m48100 (Object_t * __this/* static, unused */, String_t* ___s, StringU5BU5D_t333* ___formats, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[],System.Globalization.DateTimeStyles)
 DateTime_t1171  XmlConvert_ToDateTime_m48101 (Object_t * __this/* static, unused */, String_t* ___s, StringU5BU5D_t333* ___formats, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.XmlConvert::ToDecimal(System.String)
 Decimal_t1099  XmlConvert_ToDecimal_m48102 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XmlConvert::ToDouble(System.String)
 double XmlConvert_ToDouble_m48103 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::TryParseStringFloatConstants(System.String)
 float XmlConvert_TryParseStringFloatConstants_m48104 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
 bool XmlConvert_TryParseStringConstant_m48105 (Object_t * __this/* static, unused */, String_t* ___format, String_t* ___s, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Xml.XmlConvert::ToGuid(System.String)
 Guid_t6777  XmlConvert_ToGuid_m48106 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Xml.XmlConvert::ToInt16(System.String)
 int16_t XmlConvert_ToInt16_m48107 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::ToInt32(System.String)
 int32_t XmlConvert_ToInt32_m48108 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlConvert::ToInt64(System.String)
 int64_t XmlConvert_ToInt64_m48109 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Xml.XmlConvert::ToSByte(System.String)
 int8_t XmlConvert_ToSByte_m48110 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::ToSingle(System.String)
 float XmlConvert_ToSingle_m48111 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Guid)
 String_t* XmlConvert_ToString_m48112 (Object_t * __this/* static, unused */, Guid_t6777  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int32)
 String_t* XmlConvert_ToString_m48113 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int16)
 String_t* XmlConvert_ToString_m48114 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Byte)
 String_t* XmlConvert_ToString_m48115 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int64)
 String_t* XmlConvert_ToString_m48116 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Boolean)
 String_t* XmlConvert_ToString_m48117 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.SByte)
 String_t* XmlConvert_ToString_m48118 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
 String_t* XmlConvert_ToString_m48119 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt64)
 String_t* XmlConvert_ToString_m48120 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Double)
 String_t* XmlConvert_ToString_m48121 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Single)
 String_t* XmlConvert_ToString_m48122 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt32)
 String_t* XmlConvert_ToString_m48123 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt16)
 String_t* XmlConvert_ToString_m48124 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
 String_t* XmlConvert_ToString_m48125 (Object_t * __this/* static, unused */, DateTime_t1171  ___value, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Xml.XmlConvert::ToTimeSpan(System.String)
 TimeSpan_t5565  XmlConvert_ToTimeSpan_m48126 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
 uint16_t XmlConvert_ToUInt16_m48127 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
 uint32_t XmlConvert_ToUInt32_m48128 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
 uint64_t XmlConvert_ToUInt64_m48129 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyName(System.String)
 String_t* XmlConvert_VerifyName_m48130 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
 String_t* XmlConvert_VerifyNCName_m48131 (Object_t * __this/* static, unused */, String_t* ___ncname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Xml.XmlConvert::FromBinHexString(System.String)
 ByteU5BU5D_t1033* XmlConvert_FromBinHexString_m48132 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::FromBinHexString(System.Char[],System.Int32,System.Int32,System.Byte[])
 int32_t XmlConvert_FromBinHexString_m48133 (Object_t * __this/* static, unused */, CharU5BU5D_t1016* ___chars, int32_t ___offset, int32_t ___charLength, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
