#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t7938;
// System.Reflection.Assembly
struct Assembly_t7067;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t7743;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t7060;
// System.Reflection.Binder
struct Binder_t7061;
// System.Type[]
struct TypeU5BU5D_t1042;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t6832;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t7746;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Reflection.EventInfo
struct EventInfo_t7744;
// System.Reflection.EventInfo[]
struct EventInfoU5BU5D_t7745;
// System.Reflection.FieldInfo
struct FieldInfo_t5491;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t5490;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t7066;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t6389;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t5486;
// System.Reflection.PropertyInfo
struct PropertyInfo_t5355;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t6595;
// System.String[]
struct StringU5BU5D_t333;
// System.Exception
struct Exception_t972;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
 Assembly_t7067 * EnumBuilder_get_Assembly_m54817 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
 String_t* EnumBuilder_get_AssemblyQualifiedName_m54818 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
 Type_t * EnumBuilder_get_BaseType_m54819 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
 Type_t * EnumBuilder_get_DeclaringType_m54820 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
 String_t* EnumBuilder_get_FullName_m54821 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
 Module_t7743 * EnumBuilder_get_Module_m54822 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
 String_t* EnumBuilder_get_Name_m54823 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
 String_t* EnumBuilder_get_Namespace_m54824 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
 Type_t * EnumBuilder_get_ReflectedType_m54825 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
 RuntimeTypeHandle_t7742  EnumBuilder_get_TypeHandle_m54826 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
 Type_t * EnumBuilder_get_UnderlyingSystemType_m54827 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
 int32_t EnumBuilder_GetAttributeFlagsImpl_m54828 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t7060 * EnumBuilder_GetConstructorImpl_m54829 (EnumBuilder_t7938 * __this, int32_t ___bindingAttr, Binder_t7061 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t7746* EnumBuilder_GetConstructors_m54830 (EnumBuilder_t7938 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t142* EnumBuilder_GetCustomAttributes_m54831 (EnumBuilder_t7938 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t142* EnumBuilder_GetCustomAttributes_m54832 (EnumBuilder_t7938 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
 Type_t * EnumBuilder_GetElementType_m54833 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t7744 * EnumBuilder_GetEvent_m54834 (EnumBuilder_t7938 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.EnumBuilder::GetEvents(System.Reflection.BindingFlags)
 EventInfoU5BU5D_t7745* EnumBuilder_GetEvents_m54835 (EnumBuilder_t7938 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t5491 * EnumBuilder_GetField_m54836 (EnumBuilder_t7938 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t5490* EnumBuilder_GetFields_m54837 (EnumBuilder_t7938 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetInterface(System.String,System.Boolean)
 Type_t * EnumBuilder_GetInterface_m54838 (EnumBuilder_t7938 * __this, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
 TypeU5BU5D_t1042* EnumBuilder_GetInterfaces_m54839 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Reflection.Emit.EnumBuilder::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags)
 MemberInfoU5BU5D_t7066* EnumBuilder_GetMember_m54840 (EnumBuilder_t7938 * __this, String_t* ___name, int32_t ___type, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1087 * EnumBuilder_GetMethodImpl_m54841 (EnumBuilder_t7938 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t7061 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t6389* EnumBuilder_GetMethods_m54842 (EnumBuilder_t7938 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetNestedTypes(System.Reflection.BindingFlags)
 TypeU5BU5D_t1042* EnumBuilder_GetNestedTypes_m54843 (EnumBuilder_t7938 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.EnumBuilder::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t5486* EnumBuilder_GetProperties_m54844 (EnumBuilder_t7938 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t5355 * EnumBuilder_GetPropertyImpl_m54845 (EnumBuilder_t7938 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t7061 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
 bool EnumBuilder_HasElementTypeImpl_m54846 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * EnumBuilder_InvokeMember_m54847 (EnumBuilder_t7938 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t7061 * ___binder, Object_t * ___target, ObjectU5BU5D_t142* ___args, ParameterModifierU5BU5D_t6832* ___modifiers, CultureInfo_t6595 * ___culture, StringU5BU5D_t333* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
 bool EnumBuilder_IsArrayImpl_m54848 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
 bool EnumBuilder_IsByRefImpl_m54849 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
 bool EnumBuilder_IsPointerImpl_m54850 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
 bool EnumBuilder_IsPrimitiveImpl_m54851 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
 bool EnumBuilder_IsValueTypeImpl_m54852 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
 bool EnumBuilder_IsDefined_m54853 (EnumBuilder_t7938 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
 Exception_t972 * EnumBuilder_CreateNotSupportedException_m54854 (EnumBuilder_t7938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
