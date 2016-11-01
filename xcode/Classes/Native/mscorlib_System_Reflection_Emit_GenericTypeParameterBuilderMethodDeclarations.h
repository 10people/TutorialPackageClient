#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t7942;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t7067;
// System.String
struct String_t;
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
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t6389;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t5486;
// System.Reflection.PropertyInfo
struct PropertyInfo_t5355;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t142;
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

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
 bool GenericTypeParameterBuilder_IsSubclassOf_m54870 (GenericTypeParameterBuilder_t7942 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
 int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m54871 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t7060 * GenericTypeParameterBuilder_GetConstructorImpl_m54872 (GenericTypeParameterBuilder_t7942 * __this, int32_t ___bindingAttr, Binder_t7061 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t7746* GenericTypeParameterBuilder_GetConstructors_m54873 (GenericTypeParameterBuilder_t7942 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t7744 * GenericTypeParameterBuilder_GetEvent_m54874 (GenericTypeParameterBuilder_t7942 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetEvents(System.Reflection.BindingFlags)
 EventInfoU5BU5D_t7745* GenericTypeParameterBuilder_GetEvents_m54875 (GenericTypeParameterBuilder_t7942 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t5491 * GenericTypeParameterBuilder_GetField_m54876 (GenericTypeParameterBuilder_t7942 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t5490* GenericTypeParameterBuilder_GetFields_m54877 (GenericTypeParameterBuilder_t7942 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetInterface(System.String,System.Boolean)
 Type_t * GenericTypeParameterBuilder_GetInterface_m54878 (GenericTypeParameterBuilder_t7942 * __this, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
 TypeU5BU5D_t1042* GenericTypeParameterBuilder_GetInterfaces_m54879 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags)
 MemberInfoU5BU5D_t7066* GenericTypeParameterBuilder_GetMember_m54880 (GenericTypeParameterBuilder_t7942 * __this, String_t* ___name, int32_t ___type, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t6389* GenericTypeParameterBuilder_GetMethods_m54881 (GenericTypeParameterBuilder_t7942 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1087 * GenericTypeParameterBuilder_GetMethodImpl_m54882 (GenericTypeParameterBuilder_t7942 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t7061 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetNestedTypes(System.Reflection.BindingFlags)
 TypeU5BU5D_t1042* GenericTypeParameterBuilder_GetNestedTypes_m54883 (GenericTypeParameterBuilder_t7942 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t5486* GenericTypeParameterBuilder_GetProperties_m54884 (GenericTypeParameterBuilder_t7942 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t5355 * GenericTypeParameterBuilder_GetPropertyImpl_m54885 (GenericTypeParameterBuilder_t7942 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t7061 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
 bool GenericTypeParameterBuilder_HasElementTypeImpl_m54886 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
 bool GenericTypeParameterBuilder_IsAssignableFrom_m54887 (GenericTypeParameterBuilder_t7942 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
 bool GenericTypeParameterBuilder_IsInstanceOfType_m54888 (GenericTypeParameterBuilder_t7942 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
 bool GenericTypeParameterBuilder_IsArrayImpl_m54889 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
 bool GenericTypeParameterBuilder_IsByRefImpl_m54890 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
 bool GenericTypeParameterBuilder_IsPointerImpl_m54891 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
 bool GenericTypeParameterBuilder_IsPrimitiveImpl_m54892 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
 bool GenericTypeParameterBuilder_IsValueTypeImpl_m54893 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * GenericTypeParameterBuilder_InvokeMember_m54894 (GenericTypeParameterBuilder_t7942 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t7061 * ___binder, Object_t * ___target, ObjectU5BU5D_t142* ___args, ParameterModifierU5BU5D_t6832* ___modifiers, CultureInfo_t6595 * ___culture, StringU5BU5D_t333* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
 Type_t * GenericTypeParameterBuilder_GetElementType_m54895 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
 Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m54896 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
 Assembly_t7067 * GenericTypeParameterBuilder_get_Assembly_m54897 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
 String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m54898 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
 Type_t * GenericTypeParameterBuilder_get_BaseType_m54899 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
 String_t* GenericTypeParameterBuilder_get_FullName_m54900 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
 bool GenericTypeParameterBuilder_IsDefined_m54901 (GenericTypeParameterBuilder_t7942 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t142* GenericTypeParameterBuilder_GetCustomAttributes_m54902 (GenericTypeParameterBuilder_t7942 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t142* GenericTypeParameterBuilder_GetCustomAttributes_m54903 (GenericTypeParameterBuilder_t7942 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
 String_t* GenericTypeParameterBuilder_get_Name_m54904 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
 String_t* GenericTypeParameterBuilder_get_Namespace_m54905 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
 Module_t7743 * GenericTypeParameterBuilder_get_Module_m54906 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
 Type_t * GenericTypeParameterBuilder_get_DeclaringType_m54907 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
 Type_t * GenericTypeParameterBuilder_get_ReflectedType_m54908 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
 RuntimeTypeHandle_t7742  GenericTypeParameterBuilder_get_TypeHandle_m54909 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
 TypeU5BU5D_t1042* GenericTypeParameterBuilder_GetGenericArguments_m54910 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
 Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m54911 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
 bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m54912 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
 bool GenericTypeParameterBuilder_get_IsGenericParameter_m54913 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
 bool GenericTypeParameterBuilder_get_IsGenericType_m54914 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
 bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m54915 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
 Exception_t972 * GenericTypeParameterBuilder_not_supported_m54916 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
 String_t* GenericTypeParameterBuilder_ToString_m54917 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
 bool GenericTypeParameterBuilder_Equals_m54918 (GenericTypeParameterBuilder_t7942 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
 int32_t GenericTypeParameterBuilder_GetHashCode_m54919 (GenericTypeParameterBuilder_t7942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
 Type_t * GenericTypeParameterBuilder_MakeGenericType_m54920 (GenericTypeParameterBuilder_t7942 * __this, TypeU5BU5D_t1042* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
