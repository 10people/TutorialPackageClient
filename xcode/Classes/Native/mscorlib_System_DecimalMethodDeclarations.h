#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Decimal
struct Decimal_t1099;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1076;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1095;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
 void Decimal__ctor_m49067 (Decimal_t1099 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
 void Decimal__ctor_m48963 (Decimal_t1099 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
 void Decimal__ctor_m53225 (Decimal_t1099 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
 void Decimal__ctor_m53226 (Decimal_t1099 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
 void Decimal__ctor_m53227 (Decimal_t1099 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
 void Decimal__ctor_m53228 (Decimal_t1099 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
 void Decimal__ctor_m53229 (Decimal_t1099 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
 void Decimal__cctor_m53230 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Decimal_System_IConvertible_ToType_m53231 (Decimal_t1099 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Decimal_System_IConvertible_ToBoolean_m53232 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Decimal_System_IConvertible_ToByte_m53233 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToChar_m53234 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t1171  Decimal_System_IConvertible_ToDateTime_m53235 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t1099  Decimal_System_IConvertible_ToDecimal_m53236 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
 double Decimal_System_IConvertible_ToDouble_m53237 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Decimal_System_IConvertible_ToInt16_m53238 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Decimal_System_IConvertible_ToInt32_m53239 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Decimal_System_IConvertible_ToInt64_m53240 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Decimal_System_IConvertible_ToSByte_m53241 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
 float Decimal_System_IConvertible_ToSingle_m53242 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToUInt16_m53243 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Decimal_System_IConvertible_ToUInt32_m53244 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Decimal_System_IConvertible_ToUInt64_m53245 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
 Int32U5BU5D_t116* Decimal_GetBits_m53246 (Object_t * __this/* static, unused */, Decimal_t1099  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
 Decimal_t1099  Decimal_Add_m53247 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
 Decimal_t1099  Decimal_Subtract_m53248 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
 int32_t Decimal_GetHashCode_m53249 (Decimal_t1099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
 uint64_t Decimal_u64_m53250 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
 int64_t Decimal_s64_m53251 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
 bool Decimal_Equals_m53252 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
 bool Decimal_Equals_m53253 (Decimal_t1099 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
 bool Decimal_IsZero_m53254 (Decimal_t1099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
 Decimal_t1099  Decimal_Floor_m49009 (Object_t * __this/* static, unused */, Decimal_t1099  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Truncate(System.Decimal)
 Decimal_t1099  Decimal_Truncate_m49065 (Object_t * __this/* static, unused */, Decimal_t1099  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
 Decimal_t1099  Decimal_Multiply_m53255 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
 Decimal_t1099  Decimal_Divide_m53256 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
 int32_t Decimal_Compare_m49008 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
 int32_t Decimal_CompareTo_m53257 (Decimal_t1099 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
 int32_t Decimal_CompareTo_m53258 (Decimal_t1099 * __this, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
 bool Decimal_Equals_m53259 (Decimal_t1099 * __this, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
 Decimal_t1099  Decimal_Parse_m49064 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
 void Decimal_ThrowAtPos_m53260 (Object_t * __this/* static, unused */, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
 void Decimal_ThrowInvalidExp_m53261 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
 String_t* Decimal_stripStyles_m53262 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t1095 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 Decimal_t1099  Decimal_Parse_m49072 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
 bool Decimal_PerformParse_m53263 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t1099 * ___res, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
 String_t* Decimal_ToString_m53264 (Decimal_t1099 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
 String_t* Decimal_ToString_m53265 (Decimal_t1099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
 String_t* Decimal_ToString_m49066 (Decimal_t1099 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
 int32_t Decimal_decimal2UInt64_m53266 (Object_t * __this/* static, unused */, Decimal_t1099 * ___val, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
 int32_t Decimal_decimal2Int64_m53267 (Object_t * __this/* static, unused */, Decimal_t1099 * ___val, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalIncr_m53268 (Object_t * __this/* static, unused */, Decimal_t1099 * ___d1, Decimal_t1099 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
 int32_t Decimal_string2decimal_m53269 (Object_t * __this/* static, unused */, Decimal_t1099 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
 int32_t Decimal_decimalSetExponent_m53270 (Object_t * __this/* static, unused */, Decimal_t1099 * ___val, int32_t ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
 double Decimal_decimal2double_m53271 (Object_t * __this/* static, unused */, Decimal_t1099 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
 void Decimal_decimalFloorAndTrunc_m53272 (Object_t * __this/* static, unused */, Decimal_t1099 * ___val, int32_t ___floorFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalMult_m53273 (Object_t * __this/* static, unused */, Decimal_t1099 * ___pd1, Decimal_t1099 * ___pd2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalDiv_m53274 (Object_t * __this/* static, unused */, Decimal_t1099 * ___pc, Decimal_t1099 * ___pa, Decimal_t1099 * ___pb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalCompare_m53275 (Object_t * __this/* static, unused */, Decimal_t1099 * ___d1, Decimal_t1099 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Addition(System.Decimal,System.Decimal)
 Decimal_t1099  Decimal_op_Addition_m49053 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
 Decimal_t1099  Decimal_op_Increment_m53276 (Object_t * __this/* static, unused */, Decimal_t1099  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
 Decimal_t1099  Decimal_op_Subtraction_m53277 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
 Decimal_t1099  Decimal_op_Multiply_m53278 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
 Decimal_t1099  Decimal_op_Division_m53279 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
 uint8_t Decimal_op_Explicit_m53280 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
 int8_t Decimal_op_Explicit_m53281 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
 int16_t Decimal_op_Explicit_m53282 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
 uint16_t Decimal_op_Explicit_m53283 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
 int32_t Decimal_op_Explicit_m53284 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
 uint32_t Decimal_op_Explicit_m53285 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
 int64_t Decimal_op_Explicit_m53286 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
 uint64_t Decimal_op_Explicit_m53287 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
 Decimal_t1099  Decimal_op_Implicit_m53288 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
 Decimal_t1099  Decimal_op_Implicit_m53289 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
 Decimal_t1099  Decimal_op_Implicit_m53290 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
 Decimal_t1099  Decimal_op_Implicit_m53291 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
 Decimal_t1099  Decimal_op_Implicit_m48959 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
 Decimal_t1099  Decimal_op_Implicit_m53292 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
 Decimal_t1099  Decimal_op_Implicit_m53293 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
 Decimal_t1099  Decimal_op_Implicit_m53294 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
 Decimal_t1099  Decimal_op_Explicit_m53295 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
 Decimal_t1099  Decimal_op_Explicit_m53296 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
 float Decimal_op_Explicit_m53297 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
 double Decimal_op_Explicit_m53298 (Object_t * __this/* static, unused */, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
 bool Decimal_op_Inequality_m49010 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
 bool Decimal_op_Equality_m44681 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
 bool Decimal_op_GreaterThan_m48960 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThanOrEqual(System.Decimal,System.Decimal)
 bool Decimal_op_GreaterThanOrEqual_m48962 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
 bool Decimal_op_LessThan_m48964 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThanOrEqual(System.Decimal,System.Decimal)
 bool Decimal_op_LessThanOrEqual_m48961 (Object_t * __this/* static, unused */, Decimal_t1099  ___d1, Decimal_t1099  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
