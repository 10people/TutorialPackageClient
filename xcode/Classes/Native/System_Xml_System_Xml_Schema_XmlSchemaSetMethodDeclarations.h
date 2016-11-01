#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t6680;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t6754;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t6771;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchema[]
struct XmlSchemaU5BU5D_t6810;
// System.Array
struct Array_t;
// System.Collections.ICollection
struct ICollection_t1058;

// System.Void System.Xml.Schema.XmlSchemaSet::.ctor()
 void XmlSchemaSet__ctor_m46918 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::.ctor(System.Xml.XmlNameTable)
 void XmlSchemaSet__ctor_m46919 (XmlSchemaSet_t6680 * __this, XmlNameTable_t6650 * ___nameTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaSet_add_ValidationEventHandler_m46920 (XmlSchemaSet_t6680 * __this, ValidationEventHandler_t6682 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::remove_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaSet_remove_ValidationEventHandler_m46921 (XmlSchemaSet_t6680 * __this, ValidationEventHandler_t6682 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSet::get_Count()
 int32_t XmlSchemaSet_get_Count_m46922 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalAttributes()
 XmlSchemaObjectTable_t6754 * XmlSchemaSet_get_GlobalAttributes_m46923 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalElements()
 XmlSchemaObjectTable_t6754 * XmlSchemaSet_get_GlobalElements_m46924 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalTypes()
 XmlSchemaObjectTable_t6754 * XmlSchemaSet_get_GlobalTypes_m46925 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::get_IsCompiled()
 bool XmlSchemaSet_get_IsCompiled_m46926 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::get_CompilationSettings()
 XmlSchemaCompilationSettings_t6771 * XmlSchemaSet_get_CompilationSettings_m46927 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::get_IDCollection()
 Hashtable_t4372 * XmlSchemaSet_get_IDCollection_m46928 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_NamedIdentities()
 XmlSchemaObjectTable_t6754 * XmlSchemaSet_get_NamedIdentities_m46929 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaSet::Add(System.Xml.Schema.XmlSchema)
 XmlSchema_t6691 * XmlSchemaSet_Add_m46930 (XmlSchemaSet_t6680 * __this, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::Compile()
 void XmlSchemaSet_Compile_m46931 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ClearGlobalComponents()
 void XmlSchemaSet_ClearGlobalComponents_m46932 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::AddGlobalComponents(System.Xml.Schema.XmlSchema)
 void XmlSchemaSet_AddGlobalComponents_m46933 (XmlSchemaSet_t6680 * __this, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.String)
 bool XmlSchemaSet_Contains_m46934 (XmlSchemaSet_t6680 * __this, String_t* ___targetNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.Xml.Schema.XmlSchema)
 bool XmlSchemaSet_Contains_m46935 (XmlSchemaSet_t6680 * __this, XmlSchema_t6691 * ___targetNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::CopyTo(System.Xml.Schema.XmlSchema[],System.Int32)
 void XmlSchemaSet_CopyTo_m46936 (XmlSchemaSet_t6680 * __this, XmlSchemaU5BU5D_t6810* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::CopyTo(System.Array,System.Int32)
 void XmlSchemaSet_CopyTo_m46937 (XmlSchemaSet_t6680 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaSet::GetSafeNs(System.String)
 String_t* XmlSchemaSet_GetSafeNs_m46938 (XmlSchemaSet_t6680 * __this, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ResetCompile()
 void XmlSchemaSet_ResetCompile_m46939 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas()
 Object_t * XmlSchemaSet_Schemas_m46940 (XmlSchemaSet_t6680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas(System.String)
 Object_t * XmlSchemaSet_Schemas_m46941 (XmlSchemaSet_t6680 * __this, String_t* ___targetNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::MissedSubComponents(System.String)
 bool XmlSchemaSet_MissedSubComponents_m46942 (XmlSchemaSet_t6680 * __this, String_t* ___targetNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
