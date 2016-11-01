#pragma once
#include <stdint.h>
// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_t7008;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t7009;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685  : public Object_t
{
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_t7008* ___decls;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t7009* ___scopes;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t6650 * ___nameTable;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames;
};
struct XmlNamespaceManager_t6685_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map28
	Dictionary_2_t944 * ___U3CU3Ef__switch$map28;
};
