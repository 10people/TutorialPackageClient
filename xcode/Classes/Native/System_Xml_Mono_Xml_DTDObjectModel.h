#pragma once
#include <stdint.h>
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t6925;
// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t6929;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t6931;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t6932;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t6933;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t6934;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t6935;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t6936;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t6937;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t6938;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924  : public Object_t
{
	// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::factory
	DTDAutomataFactory_t6925 * ___factory;
	// Mono.Xml.DTDElementAutomata Mono.Xml.DTDObjectModel::rootAutomata
	DTDElementAutomata_t6929 * ___rootAutomata;
	// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::emptyAutomata
	DTDEmptyAutomata_t6931 * ___emptyAutomata;
	// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::anyAutomata
	DTDAnyAutomata_t6932 * ___anyAutomata;
	// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::invalidAutomata
	DTDInvalidAutomata_t6933 * ___invalidAutomata;
	// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::elementDecls
	DTDElementDeclarationCollection_t6934 * ___elementDecls;
	// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::attListDecls
	DTDAttListDeclarationCollection_t6935 * ___attListDecls;
	// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::peDecls
	DTDParameterEntityDeclarationCollection_t6936 * ___peDecls;
	// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::entityDecls
	DTDEntityDeclarationCollection_t6937 * ___entityDecls;
	// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::notationDecls
	DTDNotationDeclarationCollection_t6938 * ___notationDecls;
	// System.Collections.ArrayList Mono.Xml.DTDObjectModel::validationErrors
	ArrayList_t5157 * ___validationErrors;
	// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::resolver
	XmlResolver_t6678 * ___resolver;
	// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::nameTable
	XmlNameTable_t6650 * ___nameTable;
	// System.Collections.Hashtable Mono.Xml.DTDObjectModel::externalResources
	Hashtable_t4372 * ___externalResources;
	// System.String Mono.Xml.DTDObjectModel::baseURI
	String_t* ___baseURI;
	// System.String Mono.Xml.DTDObjectModel::name
	String_t* ___name;
	// System.String Mono.Xml.DTDObjectModel::publicId
	String_t* ___publicId;
	// System.String Mono.Xml.DTDObjectModel::systemId
	String_t* ___systemId;
	// System.String Mono.Xml.DTDObjectModel::intSubset
	String_t* ___intSubset;
	// System.Boolean Mono.Xml.DTDObjectModel::intSubsetHasPERef
	bool ___intSubsetHasPERef;
	// System.Boolean Mono.Xml.DTDObjectModel::isStandalone
	bool ___isStandalone;
	// System.Int32 Mono.Xml.DTDObjectModel::lineNumber
	int32_t ___lineNumber;
	// System.Int32 Mono.Xml.DTDObjectModel::linePosition
	int32_t ___linePosition;
};
