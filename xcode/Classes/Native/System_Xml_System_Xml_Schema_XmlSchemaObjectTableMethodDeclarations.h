#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t6754;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;

// System.Void System.Xml.Schema.XmlSchemaObjectTable::.ctor()
 void XmlSchemaObjectTable__ctor_m46804 (XmlSchemaObjectTable_t6754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectTable::get_Item(System.Xml.XmlQualifiedName)
 XmlSchemaObject_t6662 * XmlSchemaObjectTable_get_Item_m46805 (XmlSchemaObjectTable_t6754 * __this, XmlQualifiedName_t6656 * ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Names()
 Object_t * XmlSchemaObjectTable_get_Names_m46806 (XmlSchemaObjectTable_t6754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Values()
 Object_t * XmlSchemaObjectTable_get_Values_m46807 (XmlSchemaObjectTable_t6754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectTable::Contains(System.Xml.XmlQualifiedName)
 bool XmlSchemaObjectTable_Contains_m46808 (XmlSchemaObjectTable_t6754 * __this, XmlQualifiedName_t6656 * ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Xml.Schema.XmlSchemaObjectTable::GetEnumerator()
 Object_t * XmlSchemaObjectTable_GetEnumerator_m46809 (XmlSchemaObjectTable_t6754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Add(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaObjectTable_Add_m46810 (XmlSchemaObjectTable_t6754 * __this, XmlQualifiedName_t6656 * ___name, XmlSchemaObject_t6662 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Clear()
 void XmlSchemaObjectTable_Clear_m46811 (XmlSchemaObjectTable_t6754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Set(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaObjectTable_Set_m46812 (XmlSchemaObjectTable_t6754 * __this, XmlQualifiedName_t6656 * ___name, XmlSchemaObject_t6662 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
