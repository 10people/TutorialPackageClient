#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t7067;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t7743;
// System.Reflection.MemberInfo
struct MemberInfo_t1069;
// System.Object
struct Object_t;
// System.Type[]
struct TypeU5BU5D_t1042;
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
// System.Reflection.Binder
struct Binder_t7061;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t6832;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t6389;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t5486;
// System.Reflection.PropertyInfo
struct PropertyInfo_t5355;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t7060;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t7746;
// System.Reflection.MemberFilter
struct MemberFilter_t7741;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Globalization.CultureInfo
struct CultureInfo_t6595;
// System.String[]
struct StringU5BU5D_t333;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Type::.ctor()
 void Type__ctor_m53485 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
 void Type__cctor_m53486 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
 bool Type_FilterName_impl_m53487 (Object_t * __this/* static, unused */, MemberInfo_t1069 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
 bool Type_FilterNameIgnoreCase_impl_m53488 (Object_t * __this/* static, unused */, MemberInfo_t1069 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
 bool Type_FilterAttribute_impl_m53489 (Object_t * __this/* static, unused */, MemberInfo_t1069 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Type::get_Assembly()
// System.String System.Type::get_AssemblyQualifiedName()
// System.Reflection.TypeAttributes System.Type::get_Attributes()
 int32_t Type_get_Attributes_m53490 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_BaseType()
// System.Type System.Type::get_DeclaringType()
 Type_t * Type_get_DeclaringType_m49092 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::get_FullName()
// System.Boolean System.Type::get_HasElementType()
 bool Type_get_HasElementType_m53491 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
 bool Type_get_IsAbstract_m49087 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
 bool Type_get_IsArray_m38783 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
 bool Type_get_IsByRef_m53492 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
 bool Type_get_IsClass_m38811 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
 bool Type_get_IsContextful_m53493 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
 bool Type_get_IsEnum_m38817 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
 bool Type_get_IsExplicitLayout_m53494 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
 bool Type_get_IsInterface_m49089 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
 bool Type_get_IsMarshalByRef_m53495 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNestedPublic()
 bool Type_get_IsNestedPublic_m49091 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
 bool Type_get_IsPointer_m53496 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
 bool Type_get_IsPrimitive_m52734 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPublic()
 bool Type_get_IsPublic_m49090 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
 bool Type_get_IsSealed_m53497 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
 bool Type_get_IsSerializable_m53498 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
 bool Type_get_IsValueType_m49088 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
 int32_t Type_get_MemberType_m53499 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Type::get_Module()
// System.String System.Type::get_Namespace()
// System.Type System.Type::get_ReflectedType()
 Type_t * Type_get_ReflectedType_m53500 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
 RuntimeTypeHandle_t7742  Type_get_TypeHandle_m53501 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_UnderlyingSystemType()
// System.Boolean System.Type::Equals(System.Object)
 bool Type_Equals_m53502 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
 bool Type_Equals_m49093 (Type_t * __this, Type_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
 bool Type_EqualsInternal_m53503 (Type_t * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
 Type_t * Type_internal_from_handle_m53504 (Object_t * __this/* static, unused */, IntPtr_t24 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
 Type_t * Type_internal_from_name_m53505 (Object_t * __this/* static, unused */, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
 Type_t * Type_GetType_m49128 (Object_t * __this/* static, unused */, String_t* ___typeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
 Type_t * Type_GetType_m52717 (Object_t * __this/* static, unused */, String_t* ___typeName, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
 int32_t Type_GetTypeCodeInternal_m53506 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
 int32_t Type_GetTypeCode_m44675 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
 Type_t * Type_GetTypeFromHandle_m4772 (Object_t * __this/* static, unused */, RuntimeTypeHandle_t7742  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
 RuntimeTypeHandle_t7742  Type_GetTypeHandle_m53507 (Object_t * __this/* static, unused */, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
 bool Type_type_is_subtype_of_m53508 (Object_t * __this/* static, unused */, Type_t * ___a, Type_t * ___b, bool ___check_interfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
 bool Type_type_is_assignable_from_m53509 (Object_t * __this/* static, unused */, Type_t * ___a, Type_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
 bool Type_IsSubclassOf_m49039 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetInterface(System.String)
 Type_t * Type_GetInterface_m38784 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetInterface(System.String,System.Boolean)
// System.Type[] System.Type::GetInterfaces()
// System.Boolean System.Type::IsAssignableFrom(System.Type)
 bool Type_IsAssignableFrom_m38812 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
 bool Type_IsInstanceOfType_m44674 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetElementType()
// System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags)
// System.Reflection.EventInfo[] System.Type::GetEvents(System.Reflection.BindingFlags)
// System.Reflection.FieldInfo System.Type::GetField(System.String)
 FieldInfo_t5491 * Type_GetField_m49115 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags)
// System.Reflection.FieldInfo[] System.Type::GetFields()
 FieldInfoU5BU5D_t5490* Type_GetFields_m38796 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags)
// System.Int32 System.Type::GetHashCode()
 int32_t Type_GetHashCode_m44668 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.BindingFlags)
 MemberInfoU5BU5D_t7066* Type_GetMember_m49119 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags)
 MemberInfoU5BU5D_t7066* Type_GetMember_m53510 (Type_t * __this, String_t* ___name, int32_t ___type, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
 MethodInfo_t1087 * Type_GetMethod_m44676 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
 MethodInfo_t1087 * Type_GetMethod_m49161 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
 MethodInfo_t1087 * Type_GetMethod_m38809 (Type_t * __this, String_t* ___name, TypeU5BU5D_t1042* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1087 * Type_GetMethod_m49096 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t7061 * ___binder, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1087 * Type_GetMethod_m53511 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t7061 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags)
// System.Type[] System.Type::GetNestedTypes(System.Reflection.BindingFlags)
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
 PropertyInfoU5BU5D_t5486* Type_GetProperties_m38785 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags)
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
 PropertyInfo_t5355 * Type_GetProperty_m49097 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
 PropertyInfo_t5355 * Type_GetProperty_m41587 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
 PropertyInfo_t5355 * Type_GetProperty_m53512 (Type_t * __this, String_t* ___name, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
 PropertyInfo_t5355 * Type_GetProperty_m53513 (Type_t * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t1042* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t5355 * Type_GetProperty_m53514 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t7061 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.ConstructorInfo System.Type::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.TypeAttributes System.Type::GetAttributeFlagsImpl()
// System.Boolean System.Type::HasElementTypeImpl()
// System.Boolean System.Type::IsArrayImpl()
// System.Boolean System.Type::IsByRefImpl()
// System.Boolean System.Type::IsPointerImpl()
// System.Boolean System.Type::IsPrimitiveImpl()
// System.Boolean System.Type::IsArrayImpl(System.Type)
 bool Type_IsArrayImpl_m53515 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
 bool Type_IsValueTypeImpl_m53516 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
 bool Type_IsContextfulImpl_m53517 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
 bool Type_IsMarshalByRefImpl_m53518 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
 ConstructorInfo_t7060 * Type_GetConstructor_m49099 (Type_t * __this, TypeU5BU5D_t1042* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t7060 * Type_GetConstructor_m49086 (Type_t * __this, int32_t ___bindingAttr, Binder_t7061 * ___binder, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t7060 * Type_GetConstructor_m53519 (Type_t * __this, int32_t ___bindingAttr, Binder_t7061 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags)
// System.Reflection.MemberInfo[] System.Type::FindMembers(System.Reflection.MemberTypes,System.Reflection.BindingFlags,System.Reflection.MemberFilter,System.Object)
 MemberInfoU5BU5D_t7066* Type_FindMembers_m53520 (Type_t * __this, int32_t ___memberType, int32_t ___bindingAttr, MemberFilter_t7741 * ___filter, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
// System.String System.Type::ToString()
 String_t* Type_ToString_m42077 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
 bool Type_get_IsSystemType_m53521 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
 TypeU5BU5D_t1042* Type_GetGenericArguments_m49101 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
 bool Type_get_ContainsGenericParameters_m53522 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
 bool Type_get_IsGenericTypeDefinition_m49098 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
 Type_t * Type_GetGenericTypeDefinition_impl_m53523 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
 Type_t * Type_GetGenericTypeDefinition_m49095 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
 bool Type_get_IsGenericType_m49094 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
 Type_t * Type_MakeGenericType_m53524 (Object_t * __this/* static, unused */, Type_t * ___gt, TypeU5BU5D_t1042* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
 Type_t * Type_MakeGenericType_m52718 (Type_t * __this, TypeU5BU5D_t1042* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
 bool Type_get_IsGenericParameter_m53525 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
 bool Type_get_IsNested_m53526 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
 ObjectU5BU5D_t142* Type_GetPseudoCustomAttributes_m53527 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
