#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t6840;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.Serialization.ReflectionHelper
struct ReflectionHelper_t6834;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlReflectionImporter
struct XmlReflectionImporter_t6874  : public Object_t
{
	// System.String System.Xml.Serialization.XmlReflectionImporter::initialDefaultNamespace
	String_t* ___initialDefaultNamespace;
	// System.Xml.Serialization.XmlAttributeOverrides System.Xml.Serialization.XmlReflectionImporter::attributeOverrides
	XmlAttributeOverrides_t6840 * ___attributeOverrides;
	// System.Collections.ArrayList System.Xml.Serialization.XmlReflectionImporter::includedTypes
	ArrayList_t5157 * ___includedTypes;
	// System.Xml.Serialization.ReflectionHelper System.Xml.Serialization.XmlReflectionImporter::helper
	ReflectionHelper_t6834 * ___helper;
	// System.Int32 System.Xml.Serialization.XmlReflectionImporter::arrayChoiceCount
	int32_t ___arrayChoiceCount;
	// System.Collections.ArrayList System.Xml.Serialization.XmlReflectionImporter::relatedMaps
	ArrayList_t5157 * ___relatedMaps;
	// System.Boolean System.Xml.Serialization.XmlReflectionImporter::allowPrivateTypes
	bool ___allowPrivateTypes;
};
struct XmlReflectionImporter_t6874_StaticFields{
	// System.String System.Xml.Serialization.XmlReflectionImporter::errSimple
	String_t* ___errSimple;
	// System.String System.Xml.Serialization.XmlReflectionImporter::errSimple2
	String_t* ___errSimple2;
};
