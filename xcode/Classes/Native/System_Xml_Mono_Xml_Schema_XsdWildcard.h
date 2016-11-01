#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t6692;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t6693  : public Object_t
{
	// System.Xml.Schema.XmlSchemaObject Mono.Xml.Schema.XsdWildcard::xsobj
	XmlSchemaObject_t6662 * ___xsobj;
	// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdWildcard::ResolvedProcessing
	int32_t ___ResolvedProcessing;
	// System.String Mono.Xml.Schema.XsdWildcard::TargetNamespace
	String_t* ___TargetNamespace;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::SkipCompile
	bool ___SkipCompile;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueAny
	bool ___HasValueAny;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueLocal
	bool ___HasValueLocal;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueOther
	bool ___HasValueOther;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueTargetNamespace
	bool ___HasValueTargetNamespace;
	// System.Collections.Specialized.StringCollection Mono.Xml.Schema.XsdWildcard::ResolvedNamespaces
	StringCollection_t6692 * ___ResolvedNamespaces;
};
struct XsdWildcard_t6693_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdWildcard::<>f__switch$map6
	Dictionary_2_t944 * ___U3CU3Ef__switch$map6;
};
