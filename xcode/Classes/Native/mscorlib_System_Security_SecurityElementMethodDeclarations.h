#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityElement
struct SecurityElement_t7730;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t8167;

// System.Void System.Security.SecurityElement::.ctor(System.String)
 void SecurityElement__ctor_m56101 (SecurityElement_t7730 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
 void SecurityElement__ctor_m56102 (SecurityElement_t7730 * __this, String_t* ___tag, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
 void SecurityElement__cctor_m56103 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
 ArrayList_t5157 * SecurityElement_get_Children_m56104 (SecurityElement_t7730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
 String_t* SecurityElement_get_Tag_m56105 (SecurityElement_t7730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
 void SecurityElement_set_Text_m56106 (SecurityElement_t7730 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
 void SecurityElement_AddAttribute_m56107 (SecurityElement_t7730 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
 void SecurityElement_AddChild_m56108 (SecurityElement_t7730 * __this, SecurityElement_t7730 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
 String_t* SecurityElement_Escape_m56109 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
 String_t* SecurityElement_Unescape_m56110 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
 bool SecurityElement_IsValidAttributeName_m56111 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
 bool SecurityElement_IsValidAttributeValue_m56112 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
 bool SecurityElement_IsValidTag_m56113 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
 bool SecurityElement_IsValidText_m56114 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
 SecurityElement_t7730 * SecurityElement_SearchForChildByTag_m56115 (SecurityElement_t7730 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
 String_t* SecurityElement_ToString_m56116 (SecurityElement_t7730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
 void SecurityElement_ToXml_m56117 (SecurityElement_t7730 * __this, StringBuilder_t1097 ** ___s, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
 SecurityAttribute_t8167 * SecurityElement_GetAttribute_m56118 (SecurityElement_t7730 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
