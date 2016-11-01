#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Cookie
struct Cookie_t7159;
// System.String
struct String_t;
// System.Uri
struct Uri_t6735;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.Cookie::.ctor()
 void Cookie__ctor_m49744 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.ctor(System.String,System.String)
 void Cookie__ctor_m49745 (Cookie_t7159 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.cctor()
 void Cookie__cctor_m49746 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Comment()
 String_t* Cookie_get_Comment_m49747 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Comment(System.String)
 void Cookie_set_Comment_m49748 (Cookie_t7159 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.Cookie::get_CommentUri()
 Uri_t6735 * Cookie_get_CommentUri_m49749 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_CommentUri(System.Uri)
 void Cookie_set_CommentUri_m49750 (Cookie_t7159 * __this, Uri_t6735 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Discard()
 bool Cookie_get_Discard_m49751 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Discard(System.Boolean)
 void Cookie_set_Discard_m49752 (Cookie_t7159 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Domain()
 String_t* Cookie_get_Domain_m49753 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Domain(System.String)
 void Cookie_set_Domain_m49754 (Cookie_t7159 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_ExactDomain()
 bool Cookie_get_ExactDomain_m49755 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_ExactDomain(System.Boolean)
 void Cookie_set_ExactDomain_m49756 (Cookie_t7159 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Expired()
 bool Cookie_get_Expired_m49757 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_Expires()
 DateTime_t1171  Cookie_get_Expires_m49758 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Expires(System.DateTime)
 void Cookie_set_Expires_m49759 (Cookie_t7159 * __this, DateTime_t1171  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_HttpOnly()
 bool Cookie_get_HttpOnly_m49760 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_HttpOnly(System.Boolean)
 void Cookie_set_HttpOnly_m49761 (Cookie_t7159 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Name()
 String_t* Cookie_get_Name_m49762 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Name(System.String)
 void Cookie_set_Name_m49763 (Cookie_t7159 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Path()
 String_t* Cookie_get_Path_m49764 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Path(System.String)
 void Cookie_set_Path_m49765 (Cookie_t7159 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Port()
 String_t* Cookie_get_Port_m49766 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Port(System.String)
 void Cookie_set_Port_m49767 (Cookie_t7159 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Net.Cookie::get_Ports()
 Int32U5BU5D_t116* Cookie_get_Ports_m49768 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Secure()
 bool Cookie_get_Secure_m49769 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Secure(System.Boolean)
 void Cookie_set_Secure_m49770 (Cookie_t7159 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_TimeStamp()
 DateTime_t1171  Cookie_get_TimeStamp_m49771 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Value()
 String_t* Cookie_get_Value_m49772 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Value(System.String)
 void Cookie_set_Value_m49773 (Cookie_t7159 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::get_Version()
 int32_t Cookie_get_Version_m49774 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Version(System.Int32)
 void Cookie_set_Version_m49775 (Cookie_t7159 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::Equals(System.Object)
 bool Cookie_Equals_m49776 (Cookie_t7159 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::GetHashCode()
 int32_t Cookie_GetHashCode_m49777 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::hash(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 int32_t Cookie_hash_m49778 (Object_t * __this/* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, int32_t ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString()
 String_t* Cookie_ToString_m49779 (Cookie_t7159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString(System.Uri)
 String_t* Cookie_ToString_m49780 (Cookie_t7159 * __this, Uri_t6735 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::IsNullOrEmpty(System.String)
 bool Cookie_IsNullOrEmpty_m49781 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
