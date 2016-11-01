#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t6966;
// System.Xml.XmlParserContext
struct XmlParserContext_t6684;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"

// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader)
 void EntityResolvingXmlReader__ctor_m47960 (EntityResolvingXmlReader_t6966 * __this, XmlReader_t6677 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader,System.Boolean)
 void EntityResolvingXmlReader__ctor_m47961 (EntityResolvingXmlReader_t6966 * __this, XmlReader_t6677 * ___entityContainer, bool ___inside_attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
 XmlParserContext_t6684 * EntityResolvingXmlReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m47962 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::get_Current()
 XmlReader_t6677 * EntityResolvingXmlReader_get_Current_m47963 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_AttributeCount()
 int32_t EntityResolvingXmlReader_get_AttributeCount_m47964 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_BaseURI()
 String_t* EntityResolvingXmlReader_get_BaseURI_m47965 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_CanResolveEntity()
 bool EntityResolvingXmlReader_get_CanResolveEntity_m47966 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_Depth()
 int32_t EntityResolvingXmlReader_get_Depth_m47967 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_EOF()
 bool EntityResolvingXmlReader_get_EOF_m47968 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsDefault()
 bool EntityResolvingXmlReader_get_IsDefault_m47969 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsEmptyElement()
 bool EntityResolvingXmlReader_get_IsEmptyElement_m47970 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_LocalName()
 String_t* EntityResolvingXmlReader_get_LocalName_m47971 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Name()
 String_t* EntityResolvingXmlReader_get_Name_m47972 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_NamespaceURI()
 String_t* EntityResolvingXmlReader_get_NamespaceURI_m47973 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.EntityResolvingXmlReader::get_NameTable()
 XmlNameTable_t6650 * EntityResolvingXmlReader_get_NameTable_m47974 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.EntityResolvingXmlReader::get_NodeType()
 int32_t EntityResolvingXmlReader_get_NodeType_m47975 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::get_ParserContext()
 XmlParserContext_t6684 * EntityResolvingXmlReader_get_ParserContext_m47976 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Prefix()
 String_t* EntityResolvingXmlReader_get_Prefix_m47977 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.EntityResolvingXmlReader::get_ReadState()
 int32_t EntityResolvingXmlReader_get_ReadState_m47978 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Value()
 String_t* EntityResolvingXmlReader_get_Value_m47979 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.EntityResolvingXmlReader::get_XmlSpace()
 int32_t EntityResolvingXmlReader_get_XmlSpace_m47980 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::CopyProperties(Mono.Xml.EntityResolvingXmlReader)
 void EntityResolvingXmlReader_CopyProperties_m47981 (EntityResolvingXmlReader_t6966 * __this, EntityResolvingXmlReader_t6966 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::get_EntityHandling()
 int32_t EntityResolvingXmlReader_get_EntityHandling_m47982 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::set_EntityHandling(System.Xml.EntityHandling)
 void EntityResolvingXmlReader_set_EntityHandling_m47983 (EntityResolvingXmlReader_t6966 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LineNumber()
 int32_t EntityResolvingXmlReader_get_LineNumber_m47984 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LinePosition()
 int32_t EntityResolvingXmlReader_get_LinePosition_m47985 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Close()
 void EntityResolvingXmlReader_Close_m47986 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String)
 String_t* EntityResolvingXmlReader_GetAttribute_m47987 (EntityResolvingXmlReader_t6966 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String,System.String)
 String_t* EntityResolvingXmlReader_GetAttribute_m47988 (EntityResolvingXmlReader_t6966 * __this, String_t* ___localName, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::LookupNamespace(System.String)
 String_t* EntityResolvingXmlReader_LookupNamespace_m47989 (EntityResolvingXmlReader_t6966 * __this, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.Int32)
 void EntityResolvingXmlReader_MoveToAttribute_m47990 (EntityResolvingXmlReader_t6966 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String)
 bool EntityResolvingXmlReader_MoveToAttribute_m47991 (EntityResolvingXmlReader_t6966 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String,System.String)
 bool EntityResolvingXmlReader_MoveToAttribute_m47992 (EntityResolvingXmlReader_t6966 * __this, String_t* ___localName, String_t* ___namespaceName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToElement()
 bool EntityResolvingXmlReader_MoveToElement_m47993 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToFirstAttribute()
 bool EntityResolvingXmlReader_MoveToFirstAttribute_m47994 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToNextAttribute()
 bool EntityResolvingXmlReader_MoveToNextAttribute_m47995 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::Read()
 bool EntityResolvingXmlReader_Read_m47996 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::ReadAttributeValue()
 bool EntityResolvingXmlReader_ReadAttributeValue_m47997 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::ReadString()
 String_t* EntityResolvingXmlReader_ReadString_m47998 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::ResolveEntity()
 void EntityResolvingXmlReader_ResolveEntity_m47999 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::DoResolveEntity()
 void EntityResolvingXmlReader_DoResolveEntity_m48000 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Skip()
 void EntityResolvingXmlReader_Skip_m48001 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::HasLineInfo()
 bool EntityResolvingXmlReader_HasLineInfo_m48002 (EntityResolvingXmlReader_t6966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
