#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1095;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1076;

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
 void NumberFormatInfo__ctor_m54471 (NumberFormatInfo_t1095 * __this, int32_t ___lcid, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
 void NumberFormatInfo__ctor_m54472 (NumberFormatInfo_t1095 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
 void NumberFormatInfo__ctor_m54473 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
 void NumberFormatInfo__cctor_m54474 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
 int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m54475 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
 String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m54476 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
 String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m54477 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
 Int32U5BU5D_t116* NumberFormatInfo_get_RawCurrencyGroupSizes_m54478 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
 int32_t NumberFormatInfo_get_CurrencyNegativePattern_m54479 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
 int32_t NumberFormatInfo_get_CurrencyPositivePattern_m54480 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
 String_t* NumberFormatInfo_get_CurrencySymbol_m54481 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
 NumberFormatInfo_t1095 * NumberFormatInfo_get_CurrentInfo_m54482 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
 NumberFormatInfo_t1095 * NumberFormatInfo_get_InvariantInfo_m38896 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
 String_t* NumberFormatInfo_get_NaNSymbol_m54483 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
 String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m54484 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
 String_t* NumberFormatInfo_get_NegativeSign_m54485 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
 int32_t NumberFormatInfo_get_NumberDecimalDigits_m54486 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
 String_t* NumberFormatInfo_get_NumberDecimalSeparator_m54487 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
 String_t* NumberFormatInfo_get_NumberGroupSeparator_m54488 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
 Int32U5BU5D_t116* NumberFormatInfo_get_RawNumberGroupSizes_m54489 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
 int32_t NumberFormatInfo_get_NumberNegativePattern_m54490 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
 void NumberFormatInfo_set_NumberNegativePattern_m54491 (NumberFormatInfo_t1095 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
 int32_t NumberFormatInfo_get_PercentDecimalDigits_m54492 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
 String_t* NumberFormatInfo_get_PercentDecimalSeparator_m54493 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
 String_t* NumberFormatInfo_get_PercentGroupSeparator_m54494 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
 Int32U5BU5D_t116* NumberFormatInfo_get_RawPercentGroupSizes_m54495 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
 int32_t NumberFormatInfo_get_PercentNegativePattern_m54496 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
 int32_t NumberFormatInfo_get_PercentPositivePattern_m54497 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
 String_t* NumberFormatInfo_get_PercentSymbol_m54498 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
 String_t* NumberFormatInfo_get_PerMilleSymbol_m54499 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
 String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m54500 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
 String_t* NumberFormatInfo_get_PositiveSign_m54501 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
 Object_t * NumberFormatInfo_GetFormat_m54502 (NumberFormatInfo_t1095 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
 Object_t * NumberFormatInfo_Clone_m54503 (NumberFormatInfo_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
 NumberFormatInfo_t1095 * NumberFormatInfo_GetInstance_m54504 (Object_t * __this/* static, unused */, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
