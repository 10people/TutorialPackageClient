#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.TypeTranslator
struct TypeTranslator_t6843;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Xml.Serialization.TypeTranslator::.cctor()
 void TypeTranslator__cctor_m47143 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type)
 TypeData_t6841 * TypeTranslator_GetTypeData_m47144 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type,System.String)
 TypeData_t6841 * TypeTranslator_GetTypeData_m47145 (Object_t * __this/* static, unused */, Type_t * ___runtimeType, String_t* ___xmlDataType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String)
 TypeData_t6841 * TypeTranslator_GetPrimitiveTypeData_m47146 (Object_t * __this/* static, unused */, String_t* ___typeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String,System.Boolean)
 TypeData_t6841 * TypeTranslator_GetPrimitiveTypeData_m47147 (Object_t * __this/* static, unused */, String_t* ___typeName, bool ___nullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::FindPrimitiveTypeData(System.String)
 TypeData_t6841 * TypeTranslator_FindPrimitiveTypeData_m47148 (Object_t * __this/* static, unused */, String_t* ___typeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeTranslator::GetArrayName(System.String)
 String_t* TypeTranslator_GetArrayName_m47149 (Object_t * __this/* static, unused */, String_t* ___elemName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeTranslator::ParseArrayType(System.String,System.String&,System.String&,System.String&)
 void TypeTranslator_ParseArrayType_m47150 (Object_t * __this/* static, unused */, String_t* ___arrayType, String_t** ___type, String_t** ___ns, String_t** ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
