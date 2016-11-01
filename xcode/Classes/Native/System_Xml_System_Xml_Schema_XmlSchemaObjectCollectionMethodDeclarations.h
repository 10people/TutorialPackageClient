#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Xml.Schema.XmlSchemaObjectEnumerator
struct XmlSchemaObjectEnumerator_t6804;
// System.Object
struct Object_t;

// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor()
 void XmlSchemaObjectCollection__ctor_m46778 (XmlSchemaObjectCollection_t6755 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaObjectCollection__ctor_m46779 (XmlSchemaObjectCollection_t6755 * __this, XmlSchemaObject_t6662 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectCollection::get_Item(System.Int32)
 XmlSchemaObject_t6662 * XmlSchemaObjectCollection_get_Item_m46780 (XmlSchemaObjectCollection_t6755 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObjectCollection::Add(System.Xml.Schema.XmlSchemaObject)
 int32_t XmlSchemaObjectCollection_Add_m46781 (XmlSchemaObjectCollection_t6755 * __this, XmlSchemaObject_t6662 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectCollection::Contains(System.Xml.Schema.XmlSchemaObject)
 bool XmlSchemaObjectCollection_Contains_m46782 (XmlSchemaObjectCollection_t6755 * __this, XmlSchemaObject_t6662 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectEnumerator System.Xml.Schema.XmlSchemaObjectCollection::GetEnumerator()
 XmlSchemaObjectEnumerator_t6804 * XmlSchemaObjectCollection_GetEnumerator_m46783 (XmlSchemaObjectCollection_t6755 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnClear()
 void XmlSchemaObjectCollection_OnClear_m46784 (XmlSchemaObjectCollection_t6755 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnInsert(System.Int32,System.Object)
 void XmlSchemaObjectCollection_OnInsert_m46785 (XmlSchemaObjectCollection_t6755 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnRemove(System.Int32,System.Object)
 void XmlSchemaObjectCollection_OnRemove_m46786 (XmlSchemaObjectCollection_t6755 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnSet(System.Int32,System.Object,System.Object)
 void XmlSchemaObjectCollection_OnSet_m46787 (XmlSchemaObjectCollection_t6755 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
