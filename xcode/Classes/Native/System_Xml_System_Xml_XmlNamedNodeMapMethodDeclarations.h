#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t6985;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.String
struct String_t;

// System.Void System.Xml.XmlNamedNodeMap::.ctor(System.Xml.XmlNode)
 void XmlNamedNodeMap__ctor_m48358 (XmlNamedNodeMap_t6985 * __this, XmlNode_t5526 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamedNodeMap::.cctor()
 void XmlNamedNodeMap__cctor_m48359 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_NodeList()
 ArrayList_t5157 * XmlNamedNodeMap_get_NodeList_m48360 (XmlNamedNodeMap_t6985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNamedNodeMap::get_Count()
 int32_t XmlNamedNodeMap_get_Count_m48361 (XmlNamedNodeMap_t6985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator()
 Object_t * XmlNamedNodeMap_GetEnumerator_m48362 (XmlNamedNodeMap_t6985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String)
 XmlNode_t5526 * XmlNamedNodeMap_GetNamedItem_m48363 (XmlNamedNodeMap_t6985 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String,System.String)
 XmlNode_t5526 * XmlNamedNodeMap_RemoveNamedItem_m48364 (XmlNamedNodeMap_t6985 * __this, String_t* ___localName, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode)
 XmlNode_t5526 * XmlNamedNodeMap_SetNamedItem_m48365 (XmlNamedNodeMap_t6985 * __this, XmlNode_t5526 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode,System.Int32,System.Boolean)
 XmlNode_t5526 * XmlNamedNodeMap_SetNamedItem_m48366 (XmlNamedNodeMap_t6985 * __this, XmlNode_t5526 * ___node, int32_t ___pos, bool ___raiseEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_Nodes()
 ArrayList_t5157 * XmlNamedNodeMap_get_Nodes_m48367 (XmlNamedNodeMap_t6985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
