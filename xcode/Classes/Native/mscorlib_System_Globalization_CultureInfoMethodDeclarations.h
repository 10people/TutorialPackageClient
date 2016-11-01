#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CultureInfo
struct CultureInfo_t6595;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t7786;
// System.Globalization.CompareInfo
struct CompareInfo_t6617;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1095;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t5483;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
 void CultureInfo__ctor_m54384 (CultureInfo_t6595 * __this, int32_t ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
 void CultureInfo__ctor_m54385 (CultureInfo_t6595 * __this, int32_t ___culture, bool ___useUserOverride, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m54386 (CultureInfo_t6595 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m54387 (CultureInfo_t6595 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
 void CultureInfo__ctor_m54388 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
 void CultureInfo__cctor_m54389 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
 CultureInfo_t6595 * CultureInfo_get_InvariantCulture_m45629 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
 CultureInfo_t6595 * CultureInfo_get_CurrentCulture_m45771 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
 CultureInfo_t6595 * CultureInfo_get_CurrentUICulture_m45775 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
 CultureInfo_t6595 * CultureInfo_ConstructCurrentCulture_m54390 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
 CultureInfo_t6595 * CultureInfo_ConstructCurrentUICulture_m54391 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
 int32_t CultureInfo_get_LCID_m54392 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
 String_t* CultureInfo_get_Name_m54393 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
 CultureInfo_t6595 * CultureInfo_get_Parent_m54394 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
 TextInfo_t7786 * CultureInfo_get_TextInfo_m54395 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
 String_t* CultureInfo_get_IcuName_m54396 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
 bool CultureInfo_Equals_m54397 (CultureInfo_t6595 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
 int32_t CultureInfo_GetHashCode_m54398 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
 String_t* CultureInfo_ToString_m54399 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
 CompareInfo_t6617 * CultureInfo_get_CompareInfo_m45772 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
 bool CultureInfo_get_IsNeutralCulture_m54400 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
 void CultureInfo_CheckNeutral_m54401 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
 NumberFormatInfo_t1095 * CultureInfo_get_NumberFormat_m54402 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
 DateTimeFormatInfo_t5483 * CultureInfo_get_DateTimeFormat_m54403 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
 bool CultureInfo_get_IsReadOnly_m54404 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
 Object_t * CultureInfo_GetFormat_m54405 (CultureInfo_t6595 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
 void CultureInfo_Construct_m54406 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
 bool CultureInfo_ConstructInternalLocaleFromName_m54407 (CultureInfo_t6595 * __this, String_t* ___locale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
 bool CultureInfo_ConstructInternalLocaleFromLcid_m54408 (CultureInfo_t6595 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
 bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m54409 (Object_t * __this/* static, unused */, CultureInfo_t6595 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
 bool CultureInfo_construct_internal_locale_from_lcid_m54410 (CultureInfo_t6595 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
 bool CultureInfo_construct_internal_locale_from_name_m54411 (CultureInfo_t6595 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
 bool CultureInfo_construct_internal_locale_from_current_locale_m54412 (Object_t * __this/* static, unused */, CultureInfo_t6595 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
 void CultureInfo_construct_datetime_format_m54413 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
 void CultureInfo_construct_number_format_m54414 (CultureInfo_t6595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
 void CultureInfo_ConstructInvariant_m54415 (CultureInfo_t6595 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
 TextInfo_t7786 * CultureInfo_CreateTextInfo_m54416 (CultureInfo_t6595 * __this, bool ___readOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
 CultureInfo_t6595 * CultureInfo_CreateCulture_m54417 (Object_t * __this/* static, unused */, String_t* ___name, bool ___reference, MethodInfo* method) IL2CPP_METHOD_ATTR;
