#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.DTDReader
struct DTDReader_t6964;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Xml.XmlException
struct XmlException_t6940;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t6951;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t6956;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t6955;
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t6958;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t6959;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t6953;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t6952;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t6957;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t6954;

// System.Void System.Xml.DTDReader::.ctor(Mono.Xml.DTDObjectModel,System.Int32,System.Int32)
 void DTDReader__ctor_m47845 (DTDReader_t6964 * __this, DTDObjectModel_t6924 * ___dtd, int32_t ___startLineNumber, int32_t ___startLinePosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::get_BaseURI()
 String_t* DTDReader_get_BaseURI_m47846 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::get_Normalization()
 bool DTDReader_get_Normalization_m47847 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::set_Normalization(System.Boolean)
 void DTDReader_set_Normalization_m47848 (DTDReader_t6964 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LineNumber()
 int32_t DTDReader_get_LineNumber_m47849 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LinePosition()
 int32_t DTDReader_get_LinePosition_m47850 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::HasLineInfo()
 bool DTDReader_HasLineInfo_m47851 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.DTDReader::NotWFError(System.String)
 XmlException_t6940 * DTDReader_NotWFError_m47852 (DTDReader_t6964 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Init()
 void DTDReader_Init_m47853 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.DTDReader::GenerateDTDObjectModel()
 DTDObjectModel_t6924 * DTDReader_GenerateDTDObjectModel_m47854 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::ProcessDTDSubset()
 bool DTDReader_ProcessDTDSubset_m47855 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CompileDeclaration()
 void DTDReader_CompileDeclaration_m47856 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadIgnoreSect()
 void DTDReader_ReadIgnoreSect_m47857 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration System.Xml.DTDReader::ReadElementDecl()
 DTDElementDeclaration_t6951 * DTDReader_ReadElementDecl_m47858 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadContentSpec(Mono.Xml.DTDElementDeclaration)
 void DTDReader_ReadContentSpec_m47859 (DTDReader_t6964 * __this, DTDElementDeclaration_t6951 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel System.Xml.DTDReader::ReadCP(Mono.Xml.DTDElementDeclaration)
 DTDContentModel_t6956 * DTDReader_ReadCP_m47860 (DTDReader_t6964 * __this, DTDElementDeclaration_t6951 * ___elem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AddContentModel(Mono.Xml.DTDContentModelCollection,Mono.Xml.DTDContentModel)
 void DTDReader_AddContentModel_m47861 (DTDReader_t6964 * __this, DTDContentModelCollection_t6955 * ___cmc, DTDContentModel_t6956 * ___cm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadParameterEntityDecl()
 void DTDReader_ReadParameterEntityDecl_m47862 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveExternalEntityReplacementText(Mono.Xml.DTDEntityBase)
 void DTDReader_ResolveExternalEntityReplacementText_m47863 (DTDReader_t6964 * __this, DTDEntityBase_t6958 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveInternalEntityReplacementText(Mono.Xml.DTDEntityBase)
 void DTDReader_ResolveInternalEntityReplacementText_m47864 (DTDReader_t6964 * __this, DTDEntityBase_t6958 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::GetCharacterReference(Mono.Xml.DTDEntityBase,System.String,System.Int32&,System.Int32)
 int32_t DTDReader_GetCharacterReference_m47865 (DTDReader_t6964 * __this, DTDEntityBase_t6958 * ___li, String_t* ___value, int32_t* ___index, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::GetPEValue(System.String)
 String_t* DTDReader_GetPEValue_m47866 (DTDReader_t6964 * __this, String_t* ___peName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration System.Xml.DTDReader::GetPEDecl(System.String)
 DTDParameterEntityDeclaration_t6959 * DTDReader_GetPEDecl_m47867 (DTDReader_t6964 * __this, String_t* ___peName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERef()
 bool DTDReader_TryExpandPERef_m47868 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERefSpaceKeep()
 bool DTDReader_TryExpandPERefSpaceKeep_m47869 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpandPERef()
 void DTDReader_ExpandPERef_m47870 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration System.Xml.DTDReader::ReadEntityDecl()
 DTDEntityDeclaration_t6953 * DTDReader_ReadEntityDecl_m47871 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadEntityValueDecl(Mono.Xml.DTDEntityDeclaration)
 void DTDReader_ReadEntityValueDecl_m47872 (DTDReader_t6964 * __this, DTDEntityDeclaration_t6953 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration System.Xml.DTDReader::ReadAttListDecl()
 DTDAttListDeclaration_t6952 * DTDReader_ReadAttListDecl_m47873 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.DTDReader::ReadAttributeDefinition()
 DTDAttributeDefinition_t6957 * DTDReader_ReadAttributeDefinition_m47874 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration System.Xml.DTDReader::ReadNotationDecl()
 DTDNotationDeclaration_t6954 * DTDReader_ReadNotationDecl_m47875 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadExternalID()
 void DTDReader_ReadExternalID_m47876 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadSystemLiteral(System.Boolean)
 String_t* DTDReader_ReadSystemLiteral_m47877 (DTDReader_t6964 * __this, bool ___expectSYSTEM, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadPubidLiteral()
 String_t* DTDReader_ReadPubidLiteral_m47878 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadName()
 String_t* DTDReader_ReadName_m47879 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNameOrNmToken(System.Boolean)
 String_t* DTDReader_ReadNameOrNmToken_m47880 (DTDReader_t6964 * __this, bool ___isNameToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.Int32)
 void DTDReader_Expect_m47881 (DTDReader_t6964 * __this, int32_t ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.String)
 void DTDReader_Expect_m47882 (DTDReader_t6964 * __this, String_t* ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpectAfterWhitespace(System.Char)
 void DTDReader_ExpectAfterWhitespace_m47883 (DTDReader_t6964 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::SkipWhitespace()
 bool DTDReader_SkipWhitespace_m47884 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::PeekChar()
 int32_t DTDReader_PeekChar_m47885 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::ReadChar()
 int32_t DTDReader_ReadChar_m47886 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadComment()
 void DTDReader_ReadComment_m47887 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadProcessingInstruction()
 void DTDReader_ReadProcessingInstruction_m47888 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadTextDeclaration()
 void DTDReader_ReadTextDeclaration_m47889 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendNameChar(System.Int32)
 void DTDReader_AppendNameChar_m47890 (DTDReader_t6964 * __this, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CheckNameCapacity()
 void DTDReader_CheckNameCapacity_m47891 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateNameString()
 String_t* DTDReader_CreateNameString_m47892 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendValueChar(System.Int32)
 void DTDReader_AppendValueChar_m47893 (DTDReader_t6964 * __this, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateValueString()
 String_t* DTDReader_CreateValueString_m47894 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ClearValueBuffer()
 void DTDReader_ClearValueBuffer_m47895 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PushParserInput(System.String)
 void DTDReader_PushParserInput_m47896 (DTDReader_t6964 * __this, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PopParserInput()
 void DTDReader_PopParserInput_m47897 (DTDReader_t6964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::HandleError(System.Xml.XmlException)
 void DTDReader_HandleError_m47898 (DTDReader_t6964 * __this, XmlException_t6940 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
