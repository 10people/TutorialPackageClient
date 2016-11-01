#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDContentModel
struct DTDContentModel_t6956;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t6955;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t6951;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// Mono.Xml.DTDOccurence
#include "System_Xml_Mono_Xml_DTDOccurence.h"
// Mono.Xml.DTDContentOrderType
#include "System_Xml_Mono_Xml_DTDContentOrderType.h"

// System.Void Mono.Xml.DTDContentModel::.ctor(Mono.Xml.DTDObjectModel,System.String)
 void DTDContentModel__ctor_m47751 (DTDContentModel_t6956 * __this, DTDObjectModel_t6924 * ___root, String_t* ___ownerElementName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::get_ChildModels()
 DTDContentModelCollection_t6955 * DTDContentModel_get_ChildModels_m47752 (DTDContentModel_t6956 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDContentModel::get_ElementDecl()
 DTDElementDeclaration_t6951 * DTDContentModel_get_ElementDecl_m47753 (DTDContentModel_t6956 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDContentModel::get_ElementName()
 String_t* DTDContentModel_get_ElementName_m47754 (DTDContentModel_t6956 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_ElementName(System.String)
 void DTDContentModel_set_ElementName_m47755 (DTDContentModel_t6956 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::get_Occurence()
 int32_t DTDContentModel_get_Occurence_m47756 (DTDContentModel_t6956 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_Occurence(Mono.Xml.DTDOccurence)
 void DTDContentModel_set_Occurence_m47757 (DTDContentModel_t6956 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::get_OrderType()
 int32_t DTDContentModel_get_OrderType_m47758 (DTDContentModel_t6956 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_OrderType(Mono.Xml.DTDContentOrderType)
 void DTDContentModel_set_OrderType_m47759 (DTDContentModel_t6956 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetAutomata()
 DTDAutomata_t6927 * DTDContentModel_GetAutomata_m47760 (DTDContentModel_t6956 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Compile()
 DTDAutomata_t6927 * DTDContentModel_Compile_m47761 (DTDContentModel_t6956 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::CompileInternal()
 DTDAutomata_t6927 * DTDContentModel_CompileInternal_m47762 (DTDContentModel_t6956 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetBasicContentAutomata()
 DTDAutomata_t6927 * DTDContentModel_GetBasicContentAutomata_m47763 (DTDContentModel_t6956 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
 DTDAutomata_t6927 * DTDContentModel_Sequence_m47764 (DTDContentModel_t6956 * __this, DTDAutomata_t6927 * ___l, DTDAutomata_t6927 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
 DTDAutomata_t6927 * DTDContentModel_Choice_m47765 (DTDContentModel_t6956 * __this, DTDAutomata_t6927 * ___l, DTDAutomata_t6927 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
