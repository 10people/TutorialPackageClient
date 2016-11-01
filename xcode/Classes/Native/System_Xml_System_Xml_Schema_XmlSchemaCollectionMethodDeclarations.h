#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t6769;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t6680;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t6770;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t6752;

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
 void XmlSchemaCollection__ctor_m46493 (XmlSchemaCollection_t6769 * __this, XmlNameTable_t6650 * ___nameTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
 void XmlSchemaCollection__ctor_m46494 (XmlSchemaCollection_t6769 * __this, XmlSchemaSet_t6680 * ___schemaSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
 int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m46495 (XmlSchemaCollection_t6769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m46496 (XmlSchemaCollection_t6769 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_IsSynchronized()
 bool XmlSchemaCollection_System_Collections_ICollection_get_IsSynchronized_m46497 (XmlSchemaCollection_t6769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m46498 (XmlSchemaCollection_t6769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
 Object_t * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m46499 (XmlSchemaCollection_t6769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
 XmlSchemaSet_t6680 * XmlSchemaCollection_get_SchemaSet_m46500 (XmlSchemaCollection_t6769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
 int32_t XmlSchemaCollection_get_Count_m46501 (XmlSchemaCollection_t6769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
 XmlSchemaCollectionEnumerator_t6770 * XmlSchemaCollection_GetEnumerator_m46502 (XmlSchemaCollection_t6769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
 void XmlSchemaCollection_OnValidationError_m46503 (XmlSchemaCollection_t6769 * __this, Object_t * ___o, ValidationEventArgs_t6752 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
