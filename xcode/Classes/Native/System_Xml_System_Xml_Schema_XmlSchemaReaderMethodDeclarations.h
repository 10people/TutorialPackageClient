#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Object
struct Object_t;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.Schema.XmlSchemaReader::.ctor(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaReader__ctor_m46848 (XmlSchemaReader_t6758 * __this, XmlReader_t6677 * ___reader, ValidationEventHandler_t6682 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_FullName()
 String_t* XmlSchemaReader_get_FullName_m46849 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::get_Reader()
 XmlReader_t6677 * XmlSchemaReader_get_Reader_m46850 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::RaiseInvalidElementError()
 void XmlSchemaReader_RaiseInvalidElementError_m46851 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadNextElement()
 bool XmlSchemaReader_ReadNextElement_m46852 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::SkipToEnd()
 void XmlSchemaReader_SkipToEnd_m46853 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::HasLineInfo()
 bool XmlSchemaReader_HasLineInfo_m46854 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LineNumber()
 int32_t XmlSchemaReader_get_LineNumber_m46855 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LinePosition()
 int32_t XmlSchemaReader_get_LinePosition_m46856 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_AttributeCount()
 int32_t XmlSchemaReader_get_AttributeCount_m46857 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_BaseURI()
 String_t* XmlSchemaReader_get_BaseURI_m46858 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_CanResolveEntity()
 bool XmlSchemaReader_get_CanResolveEntity_m46859 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_Depth()
 int32_t XmlSchemaReader_get_Depth_m46860 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_EOF()
 bool XmlSchemaReader_get_EOF_m46861 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasAttributes()
 bool XmlSchemaReader_get_HasAttributes_m46862 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsDefault()
 bool XmlSchemaReader_get_IsDefault_m46863 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsEmptyElement()
 bool XmlSchemaReader_get_IsEmptyElement_m46864 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String)
 String_t* XmlSchemaReader_get_Item_m46865 (XmlSchemaReader_t6758 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String,System.String)
 String_t* XmlSchemaReader_get_Item_m46866 (XmlSchemaReader_t6758 * __this, String_t* ___name, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_LocalName()
 String_t* XmlSchemaReader_get_LocalName_m46867 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Name()
 String_t* XmlSchemaReader_get_Name_m46868 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_NamespaceURI()
 String_t* XmlSchemaReader_get_NamespaceURI_m46869 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaReader::get_NameTable()
 XmlNameTable_t6650 * XmlSchemaReader_get_NameTable_m46870 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::get_NodeType()
 int32_t XmlSchemaReader_get_NodeType_m46871 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Prefix()
 String_t* XmlSchemaReader_get_Prefix_m46872 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.Schema.XmlSchemaReader::get_ReadState()
 int32_t XmlSchemaReader_get_ReadState_m46873 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Value()
 String_t* XmlSchemaReader_get_Value_m46874 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.Schema.XmlSchemaReader::get_XmlSpace()
 int32_t XmlSchemaReader_get_XmlSpace_m46875 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Close()
 void XmlSchemaReader_Close_m46876 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Equals(System.Object)
 bool XmlSchemaReader_Equals_m46877 (XmlSchemaReader_t6758 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String)
 String_t* XmlSchemaReader_GetAttribute_m46878 (XmlSchemaReader_t6758 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String,System.String)
 String_t* XmlSchemaReader_GetAttribute_m46879 (XmlSchemaReader_t6758 * __this, String_t* ___name, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::GetHashCode()
 int32_t XmlSchemaReader_GetHashCode_m46880 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::IsStartElement()
 bool XmlSchemaReader_IsStartElement_m46881 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::IsStartElement(System.String,System.String)
 bool XmlSchemaReader_IsStartElement_m46882 (XmlSchemaReader_t6758 * __this, String_t* ___localname, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::LookupNamespace(System.String)
 String_t* XmlSchemaReader_LookupNamespace_m46883 (XmlSchemaReader_t6758 * __this, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.Int32)
 void XmlSchemaReader_MoveToAttribute_m46884 (XmlSchemaReader_t6758 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String)
 bool XmlSchemaReader_MoveToAttribute_m46885 (XmlSchemaReader_t6758 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String,System.String)
 bool XmlSchemaReader_MoveToAttribute_m46886 (XmlSchemaReader_t6758 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::MoveToContent()
 int32_t XmlSchemaReader_MoveToContent_m46887 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToElement()
 bool XmlSchemaReader_MoveToElement_m46888 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToFirstAttribute()
 bool XmlSchemaReader_MoveToFirstAttribute_m46889 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToNextAttribute()
 bool XmlSchemaReader_MoveToNextAttribute_m46890 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Read()
 bool XmlSchemaReader_Read_m46891 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadAttributeValue()
 bool XmlSchemaReader_ReadAttributeValue_m46892 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadElementString()
 String_t* XmlSchemaReader_ReadElementString_m46893 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadEndElement()
 void XmlSchemaReader_ReadEndElement_m46894 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadOuterXml()
 String_t* XmlSchemaReader_ReadOuterXml_m46895 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadStartElement()
 void XmlSchemaReader_ReadStartElement_m46896 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadString()
 String_t* XmlSchemaReader_ReadString_m46897 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ResolveEntity()
 void XmlSchemaReader_ResolveEntity_m46898 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Skip()
 void XmlSchemaReader_Skip_m46899 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ToString()
 String_t* XmlSchemaReader_ToString_m46900 (XmlSchemaReader_t6758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
