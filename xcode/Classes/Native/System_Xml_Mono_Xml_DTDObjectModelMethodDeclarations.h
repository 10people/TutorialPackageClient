#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Collections.Hashtable
struct Hashtable_t4372;
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t6925;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t6934;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t6935;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t6937;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t6936;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t6938;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t6931;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t6932;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t6933;
// System.Xml.XmlException[]
struct XmlExceptionU5BU5D_t6939;
// System.Xml.XmlException
struct XmlException_t6940;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t6941;
// System.Xml.XmlParserContext
struct XmlParserContext_t6684;

// System.Void Mono.Xml.DTDObjectModel::.ctor(System.Xml.XmlNameTable)
 void DTDObjectModel__ctor_m47685 (DTDObjectModel_t6924 * __this, XmlNameTable_t6650 * ___nameTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_BaseURI()
 String_t* DTDObjectModel_get_BaseURI_m47686 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_BaseURI(System.String)
 void DTDObjectModel_set_BaseURI_m47687 (DTDObjectModel_t6924 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_IsStandalone()
 bool DTDObjectModel_get_IsStandalone_m47688 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_IsStandalone(System.Boolean)
 void DTDObjectModel_set_IsStandalone_m47689 (DTDObjectModel_t6924 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
 String_t* DTDObjectModel_get_Name_m47690 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_Name(System.String)
 void DTDObjectModel_set_Name_m47691 (DTDObjectModel_t6924 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::get_NameTable()
 XmlNameTable_t6650 * DTDObjectModel_get_NameTable_m47692 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
 String_t* DTDObjectModel_get_PublicId_m47693 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_PublicId(System.String)
 void DTDObjectModel_set_PublicId_m47694 (DTDObjectModel_t6924 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
 String_t* DTDObjectModel_get_SystemId_m47695 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_SystemId(System.String)
 void DTDObjectModel_set_SystemId_m47696 (DTDObjectModel_t6924 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
 String_t* DTDObjectModel_get_InternalSubset_m47697 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubset(System.String)
 void DTDObjectModel_set_InternalSubset_m47698 (DTDObjectModel_t6924 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_InternalSubsetHasPEReference()
 bool DTDObjectModel_get_InternalSubsetHasPEReference_m47699 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubsetHasPEReference(System.Boolean)
 void DTDObjectModel_set_InternalSubsetHasPEReference_m47700 (DTDObjectModel_t6924 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LineNumber()
 int32_t DTDObjectModel_get_LineNumber_m47701 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LineNumber(System.Int32)
 void DTDObjectModel_set_LineNumber_m47702 (DTDObjectModel_t6924 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LinePosition()
 int32_t DTDObjectModel_get_LinePosition_m47703 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LinePosition(System.Int32)
 void DTDObjectModel_set_LinePosition_m47704 (DTDObjectModel_t6924 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::ResolveEntity(System.String)
 String_t* DTDObjectModel_ResolveEntity_m47705 (DTDObjectModel_t6924 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::get_Resolver()
 XmlResolver_t6678 * DTDObjectModel_get_Resolver_m47706 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_XmlResolver(System.Xml.XmlResolver)
 void DTDObjectModel_set_XmlResolver_m47707 (DTDObjectModel_t6924 * __this, XmlResolver_t6678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable Mono.Xml.DTDObjectModel::get_ExternalResources()
 Hashtable_t4372 * DTDObjectModel_get_ExternalResources_m47708 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::get_Factory()
 DTDAutomataFactory_t6925 * DTDObjectModel_get_Factory_m47709 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::get_ElementDecls()
 DTDElementDeclarationCollection_t6934 * DTDObjectModel_get_ElementDecls_m47710 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::get_AttListDecls()
 DTDAttListDeclarationCollection_t6935 * DTDObjectModel_get_AttListDecls_m47711 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_EntityDecls()
 DTDEntityDeclarationCollection_t6937 * DTDObjectModel_get_EntityDecls_m47712 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_PEDecls()
 DTDParameterEntityDeclarationCollection_t6936 * DTDObjectModel_get_PEDecls_m47713 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::get_NotationDecls()
 DTDNotationDeclarationCollection_t6938 * DTDObjectModel_get_NotationDecls_m47714 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDObjectModel::get_RootAutomata()
 DTDAutomata_t6927 * DTDObjectModel_get_RootAutomata_m47715 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::get_Empty()
 DTDEmptyAutomata_t6931 * DTDObjectModel_get_Empty_m47716 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::get_Any()
 DTDAnyAutomata_t6932 * DTDObjectModel_get_Any_m47717 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::get_Invalid()
 DTDInvalidAutomata_t6933 * DTDObjectModel_get_Invalid_m47718 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException[] Mono.Xml.DTDObjectModel::get_Errors()
 XmlExceptionU5BU5D_t6939* DTDObjectModel_get_Errors_m47719 (DTDObjectModel_t6924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::AddError(System.Xml.XmlException)
 void DTDObjectModel_AddError_m47720 (DTDObjectModel_t6924 * __this, XmlException_t6940 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::GenerateEntityAttributeText(System.String)
 String_t* DTDObjectModel_GenerateEntityAttributeText_m47721 (DTDObjectModel_t6924 * __this, String_t* ___entityName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
 XmlTextReader_t6941 * DTDObjectModel_GenerateEntityContentReader_m47722 (DTDObjectModel_t6924 * __this, String_t* ___entityName, XmlParserContext_t6684 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
