#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t7944;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t7743;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t5487;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t7061;
// System.Globalization.CultureInfo
struct CultureInfo_t6595;
// System.Exception
struct Exception_t972;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
 int32_t PropertyBuilder_get_Attributes_m54948 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
 bool PropertyBuilder_get_CanRead_m54949 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
 bool PropertyBuilder_get_CanWrite_m54950 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
 Type_t * PropertyBuilder_get_DeclaringType_m54951 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
 String_t* PropertyBuilder_get_Name_m54952 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
 Type_t * PropertyBuilder_get_PropertyType_m54953 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
 Type_t * PropertyBuilder_get_ReflectedType_m54954 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t142* PropertyBuilder_GetCustomAttributes_m54955 (PropertyBuilder_t7944 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t142* PropertyBuilder_GetCustomAttributes_m54956 (PropertyBuilder_t7944 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
 MethodInfo_t1087 * PropertyBuilder_GetGetMethod_m54957 (PropertyBuilder_t7944 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
 ParameterInfoU5BU5D_t5487* PropertyBuilder_GetIndexParameters_m54958 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
 MethodInfo_t1087 * PropertyBuilder_GetSetMethod_m54959 (PropertyBuilder_t7944 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
 Object_t * PropertyBuilder_GetValue_m54960 (PropertyBuilder_t7944 * __this, Object_t * ___obj, ObjectU5BU5D_t142* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * PropertyBuilder_GetValue_m54961 (PropertyBuilder_t7944 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t7061 * ___binder, ObjectU5BU5D_t142* ___index, CultureInfo_t6595 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
 bool PropertyBuilder_IsDefined_m54962 (PropertyBuilder_t7944 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
 void PropertyBuilder_SetValue_m54963 (PropertyBuilder_t7944 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t142* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 void PropertyBuilder_SetValue_m54964 (PropertyBuilder_t7944 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t7061 * ___binder, ObjectU5BU5D_t142* ___index, CultureInfo_t6595 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
 Module_t7743 * PropertyBuilder_get_Module_m54965 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
 Exception_t972 * PropertyBuilder_not_supported_m54966 (PropertyBuilder_t7944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
