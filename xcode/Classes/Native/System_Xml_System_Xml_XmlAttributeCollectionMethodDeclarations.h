#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t6984;
// System.Object
struct Object_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t6763;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Array
struct Array_t;

// System.Void System.Xml.XmlAttributeCollection::.ctor(System.Xml.XmlNode)
 void XmlAttributeCollection__ctor_m48037 (XmlAttributeCollection_t6984 * __this, XmlNode_t5526 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_IsSynchronized()
 bool XmlAttributeCollection_System_Collections_ICollection_get_IsSynchronized_m48038 (XmlAttributeCollection_t6984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_SyncRoot()
 Object_t * XmlAttributeCollection_System_Collections_ICollection_get_SyncRoot_m48039 (XmlAttributeCollection_t6984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void XmlAttributeCollection_System_Collections_ICollection_CopyTo_m48040 (XmlAttributeCollection_t6984 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::get_IsReadOnly()
 bool XmlAttributeCollection_get_IsReadOnly_m48041 (XmlAttributeCollection_t6984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
 XmlAttribute_t6763 * XmlAttributeCollection_get_ItemOf_m48042 (XmlAttributeCollection_t6984 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.Int32)
 XmlAttribute_t6763 * XmlAttributeCollection_get_ItemOf_m48043 (XmlAttributeCollection_t6984 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Remove(System.Xml.XmlAttribute)
 XmlAttribute_t6763 * XmlAttributeCollection_Remove_m48044 (XmlAttributeCollection_t6984 * __this, XmlAttribute_t6763 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::RemoveAll()
 void XmlAttributeCollection_RemoveAll_m48045 (XmlAttributeCollection_t6984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::SetNamedItem(System.Xml.XmlNode)
 XmlNode_t5526 * XmlAttributeCollection_SetNamedItem_m48046 (XmlAttributeCollection_t6984 * __this, XmlNode_t5526 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::AdjustIdenticalAttributes(System.Xml.XmlAttribute,System.Xml.XmlNode)
 void XmlAttributeCollection_AdjustIdenticalAttributes_m48047 (XmlAttributeCollection_t6984 * __this, XmlAttribute_t6763 * ___node, XmlNode_t5526 * ___existing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::RemoveIdenticalAttribute(System.Xml.XmlNode)
 XmlNode_t5526 * XmlAttributeCollection_RemoveIdenticalAttribute_m48048 (XmlAttributeCollection_t6984 * __this, XmlNode_t5526 * ___existing, MethodInfo* method) IL2CPP_METHOD_ATTR;
