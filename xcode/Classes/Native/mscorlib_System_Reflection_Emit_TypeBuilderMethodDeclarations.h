#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t7933;
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
// System.Object[]
struct ObjectU5BU5D_t142;
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

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
 int32_t TypeBuilder_GetAttributeFlagsImpl_m54967 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
 Assembly_t7067 * TypeBuilder_get_Assembly_m54968 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
 String_t* TypeBuilder_get_AssemblyQualifiedName_m54969 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
 Type_t * TypeBuilder_get_BaseType_m54970 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
 Type_t * TypeBuilder_get_DeclaringType_m54971 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
 Type_t * TypeBuilder_get_UnderlyingSystemType_m54972 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
 String_t* TypeBuilder_get_FullName_m54973 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
 Module_t7743 * TypeBuilder_get_Module_m54974 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
 String_t* TypeBuilder_get_Name_m54975 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
 String_t* TypeBuilder_get_Namespace_m54976 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
 Type_t * TypeBuilder_get_ReflectedType_m54977 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t7060 * TypeBuilder_GetConstructorImpl_m54978 (TypeBuilder_t7933 * __this, int32_t ___bindingAttr, Binder_t7061 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
 bool TypeBuilder_IsDefined_m54979 (TypeBuilder_t7933 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t142* TypeBuilder_GetCustomAttributes_m54980 (TypeBuilder_t7933 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t142* TypeBuilder_GetCustomAttributes_m54981 (TypeBuilder_t7933 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t7746* TypeBuilder_GetConstructors_m54982 (TypeBuilder_t7933 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t7746* TypeBuilder_GetConstructorsInternal_m54983 (TypeBuilder_t7933 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
 Type_t * TypeBuilder_GetElementType_m54984 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t7744 * TypeBuilder_GetEvent_m54985 (TypeBuilder_t7933 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.TypeBuilder::GetEvents(System.Reflection.BindingFlags)
 EventInfoU5BU5D_t7745* TypeBuilder_GetEvents_m54986 (TypeBuilder_t7933 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t5491 * TypeBuilder_GetField_m54987 (TypeBuilder_t7933 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t5490* TypeBuilder_GetFields_m54988 (TypeBuilder_t7933 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetInterface(System.String,System.Boolean)
 Type_t * TypeBuilder_GetInterface_m54989 (TypeBuilder_t7933 * __this, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
 TypeU5BU5D_t1042* TypeBuilder_GetInterfaces_m54990 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Reflection.Emit.TypeBuilder::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags)
 MemberInfoU5BU5D_t7066* TypeBuilder_GetMember_m54991 (TypeBuilder_t7933 * __this, String_t* ___name, int32_t ___type, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t6389* TypeBuilder_GetMethodsByName_m54992 (TypeBuilder_t7933 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t6389* TypeBuilder_GetMethods_m54993 (TypeBuilder_t7933 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1087 * TypeBuilder_GetMethodImpl_m54994 (TypeBuilder_t7933 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t7061 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetNestedTypes(System.Reflection.BindingFlags)
 TypeU5BU5D_t1042* TypeBuilder_GetNestedTypes_m54995 (TypeBuilder_t7933 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
 PropertyInfoU5BU5D_t5486* TypeBuilder_GetProperties_m54996 (TypeBuilder_t7933 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t5355 * TypeBuilder_GetPropertyImpl_m54997 (TypeBuilder_t7933 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t7061 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1042* ___types, ParameterModifierU5BU5D_t6832* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
 bool TypeBuilder_HasElementTypeImpl_m54998 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * TypeBuilder_InvokeMember_m54999 (TypeBuilder_t7933 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t7061 * ___binder, Object_t * ___target, ObjectU5BU5D_t142* ___args, ParameterModifierU5BU5D_t6832* ___modifiers, CultureInfo_t6595 * ___culture, StringU5BU5D_t333* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
 bool TypeBuilder_IsArrayImpl_m55000 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
 bool TypeBuilder_IsByRefImpl_m55001 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
 bool TypeBuilder_IsPointerImpl_m55002 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
 bool TypeBuilder_IsPrimitiveImpl_m55003 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
 bool TypeBuilder_IsValueTypeImpl_m55004 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
 Type_t * TypeBuilder_MakeGenericType_m55005 (TypeBuilder_t7933 * __this, TypeU5BU5D_t1042* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
 RuntimeTypeHandle_t7742  TypeBuilder_get_TypeHandle_m55006 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
 bool TypeBuilder_get_IsCompilerContext_m55007 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
 bool TypeBuilder_get_is_created_m55008 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
 Exception_t972 * TypeBuilder_not_supported_m55009 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
 void TypeBuilder_check_created_m55010 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
 String_t* TypeBuilder_ToString_m55011 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
 bool TypeBuilder_IsAssignableFrom_m55012 (TypeBuilder_t7933 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
 bool TypeBuilder_IsSubclassOf_m55013 (TypeBuilder_t7933 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
 bool TypeBuilder_IsAssignableTo_m55014 (TypeBuilder_t7933 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
 TypeU5BU5D_t1042* TypeBuilder_GetGenericArguments_m55015 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
 Type_t * TypeBuilder_GetGenericTypeDefinition_m55016 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
 bool TypeBuilder_get_ContainsGenericParameters_m55017 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
 bool TypeBuilder_get_IsGenericParameter_m55018 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
 bool TypeBuilder_get_IsGenericTypeDefinition_m55019 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
 bool TypeBuilder_get_IsGenericType_m55020 (TypeBuilder_t7933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
