#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoCustomAttrs
struct MonoCustomAttrs_t8257;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t6859;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t6396;
// System.Reflection.PropertyInfo
struct PropertyInfo_t5355;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t6411;

// System.Void System.MonoCustomAttrs::.cctor()
 void MonoCustomAttrs__cctor_m56886 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
 bool MonoCustomAttrs_IsUserCattrProvider_m56887 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t142* MonoCustomAttrs_GetCustomAttributesInternal_m56888 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___pseudoAttrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t142* MonoCustomAttrs_GetPseudoCustomAttributes_m56889 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t142* MonoCustomAttrs_GetCustomAttributesBase_m56890 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 Attribute_t6396 * MonoCustomAttrs_GetCustomAttribute_m56891 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t142* MonoCustomAttrs_GetCustomAttributes_m56892 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
 ObjectU5BU5D_t142* MonoCustomAttrs_GetCustomAttributes_m56893 (Object_t * __this/* static, unused */, Object_t * ___obj, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 bool MonoCustomAttrs_IsDefined_m56894 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
 bool MonoCustomAttrs_IsDefinedInternal_m56895 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___AttributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
 PropertyInfo_t5355 * MonoCustomAttrs_GetBasePropertyDefinition_m56896 (Object_t * __this/* static, unused */, PropertyInfo_t5355 * ___property, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
 Object_t * MonoCustomAttrs_GetBase_m56897 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
 AttributeUsageAttribute_t6411 * MonoCustomAttrs_RetrieveAttributeUsage_m56898 (Object_t * __this/* static, unused */, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
