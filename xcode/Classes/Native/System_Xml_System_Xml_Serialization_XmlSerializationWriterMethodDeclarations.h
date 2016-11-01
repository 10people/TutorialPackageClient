#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t6899;
// System.Xml.XmlWriter
struct XmlWriter_t5910;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t5909;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t6895;
// System.Exception
struct Exception_t972;
// System.Object
struct Object_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t6889;
// System.Collections.ICollection
struct ICollection_t1058;

// System.Void System.Xml.Serialization.XmlSerializationWriter::.ctor()
 void XmlSerializationWriter__ctor_m47402 (XmlSerializationWriter_t6899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::Initialize(System.Xml.XmlWriter,System.Xml.Serialization.XmlSerializerNamespaces)
 void XmlSerializationWriter_Initialize_m47403 (XmlSerializationWriter_t6899 * __this, XmlWriter_t5910 * ___writer, XmlSerializerNamespaces_t5909 * ___nss, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriter System.Xml.Serialization.XmlSerializationWriter::get_Writer()
 XmlWriter_t5910 * XmlSerializationWriter_get_Writer_m47404 (XmlSerializationWriter_t6899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::AddWriteCallback(System.Type,System.String,System.String,System.Xml.Serialization.XmlSerializationWriteCallback)
 void XmlSerializationWriter_AddWriteCallback_m47405 (XmlSerializationWriter_t6899 * __this, Type_t * ___type, String_t* ___typeName, String_t* ___typeNs, XmlSerializationWriteCallback_t6895 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownAnyElementException(System.String,System.String)
 Exception_t972 * XmlSerializationWriter_CreateUnknownAnyElementException_m47406 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownTypeException(System.Object)
 Exception_t972 * XmlSerializationWriter_CreateUnknownTypeException_m47407 (XmlSerializationWriter_t6899 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownTypeException(System.Type)
 Exception_t972 * XmlSerializationWriter_CreateUnknownTypeException_m47408 (XmlSerializationWriter_t6899 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::FromXmlQualifiedName(System.Xml.XmlQualifiedName)
 String_t* XmlSerializationWriter_FromXmlQualifiedName_m47409 (XmlSerializationWriter_t6899 * __this, XmlQualifiedName_t6656 * ___xmlQualifiedName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetId(System.Object,System.Boolean)
 String_t* XmlSerializationWriter_GetId_m47410 (XmlSerializationWriter_t6899 * __this, Object_t * ___o, bool ___addToReferencesList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriter::AlreadyQueued(System.Object)
 bool XmlSerializationWriter_AlreadyQueued_m47411 (XmlSerializationWriter_t6899 * __this, Object_t * ___ob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetNamespacePrefix(System.String)
 String_t* XmlSerializationWriter_GetNamespacePrefix_m47412 (XmlSerializationWriter_t6899 * __this, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetQualifiedName(System.String,System.String)
 String_t* XmlSerializationWriter_GetQualifiedName_m47413 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::InitCallbacks()
// System.Void System.Xml.Serialization.XmlSerializationWriter::TopLevelElement()
 void XmlSerializationWriter_TopLevelElement_m47414 (XmlSerializationWriter_t6899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteAttribute(System.String,System.String,System.String)
 void XmlSerializationWriter_WriteAttribute_m47415 (XmlSerializationWriter_t6899 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteAttribute(System.String,System.String,System.String,System.String)
 void XmlSerializationWriter_WriteAttribute_m47416 (XmlSerializationWriter_t6899 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXmlNode(System.Xml.XmlNode)
 void XmlSerializationWriter_WriteXmlNode_m47417 (XmlSerializationWriter_t6899 * __this, XmlNode_t5526 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementEncoded(System.Xml.XmlNode,System.String,System.String,System.Boolean,System.Boolean)
 void XmlSerializationWriter_WriteElementEncoded_m47418 (XmlSerializationWriter_t6899 * __this, XmlNode_t5526 * ___node, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___any, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementLiteral(System.Xml.XmlNode,System.String,System.String,System.Boolean,System.Boolean)
 void XmlSerializationWriter_WriteElementLiteral_m47419 (XmlSerializationWriter_t6899 * __this, XmlNode_t5526 * ___node, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___any, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementQualifiedName(System.String,System.String,System.Xml.XmlQualifiedName)
 void XmlSerializationWriter_WriteElementQualifiedName_m47420 (XmlSerializationWriter_t6899 * __this, String_t* ___localName, String_t* ___ns, XmlQualifiedName_t6656 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementQualifiedName(System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
 void XmlSerializationWriter_WriteElementQualifiedName_m47421 (XmlSerializationWriter_t6899 * __this, String_t* ___localName, String_t* ___ns, XmlQualifiedName_t6656 * ___value, XmlQualifiedName_t6656 * ___xsiType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementString(System.String,System.String,System.String)
 void XmlSerializationWriter_WriteElementString_m47422 (XmlSerializationWriter_t6899 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementString(System.String,System.String,System.String,System.Xml.XmlQualifiedName)
 void XmlSerializationWriter_WriteElementString_m47423 (XmlSerializationWriter_t6899 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, XmlQualifiedName_t6656 * ___xsiType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteEndElement()
 void XmlSerializationWriter_WriteEndElement_m47424 (XmlSerializationWriter_t6899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteEndElement(System.Object)
 void XmlSerializationWriter_WriteEndElement_m47425 (XmlSerializationWriter_t6899 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNamespaceDeclarations(System.Xml.Serialization.XmlSerializerNamespaces)
 void XmlSerializationWriter_WriteNamespaceDeclarations_m47426 (XmlSerializationWriter_t6899 * __this, XmlSerializerNamespaces_t5909 * ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableQualifiedNameEncoded(System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
 void XmlSerializationWriter_WriteNullableQualifiedNameEncoded_m47427 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, XmlQualifiedName_t6656 * ___value, XmlQualifiedName_t6656 * ___xsiType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableQualifiedNameLiteral(System.String,System.String,System.Xml.XmlQualifiedName)
 void XmlSerializationWriter_WriteNullableQualifiedNameLiteral_m47428 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, XmlQualifiedName_t6656 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableStringEncoded(System.String,System.String,System.String,System.Xml.XmlQualifiedName)
 void XmlSerializationWriter_WriteNullableStringEncoded_m47429 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, String_t* ___value, XmlQualifiedName_t6656 * ___xsiType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableStringLiteral(System.String,System.String,System.String)
 void XmlSerializationWriter_WriteNullableStringLiteral_m47430 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullTagEncoded(System.String,System.String)
 void XmlSerializationWriter_WriteNullTagEncoded_m47431 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullTagLiteral(System.String,System.String)
 void XmlSerializationWriter_WriteNullTagLiteral_m47432 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WritePotentiallyReferencingElement(System.String,System.String,System.Object,System.Type,System.Boolean,System.Boolean)
 void XmlSerializationWriter_WritePotentiallyReferencingElement_m47433 (XmlSerializationWriter_t6899 * __this, String_t* ___n, String_t* ___ns, Object_t * ___o, Type_t * ___ambientType, bool ___suppressReference, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteReferencedElements()
 void XmlSerializationWriter_WriteReferencedElements_m47434 (XmlSerializationWriter_t6899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriter::IsPrimitiveArray(System.Xml.Serialization.TypeData)
 bool XmlSerializationWriter_IsPrimitiveArray_m47435 (XmlSerializationWriter_t6899 * __this, TypeData_t6841 * ___td, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteArray(System.Object,System.Xml.Serialization.TypeData)
 void XmlSerializationWriter_WriteArray_m47436 (XmlSerializationWriter_t6899 * __this, Object_t * ___o, TypeData_t6841 * ___td, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteReferencingElement(System.String,System.String,System.Object,System.Boolean)
 void XmlSerializationWriter_WriteReferencingElement_m47437 (XmlSerializationWriter_t6899 * __this, String_t* ___n, String_t* ___ns, Object_t * ___o, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::CheckReferenceQueue()
 void XmlSerializationWriter_CheckReferenceQueue_m47438 (XmlSerializationWriter_t6899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteSerializable(System.Xml.Serialization.IXmlSerializable,System.String,System.String,System.Boolean)
 void XmlSerializationWriter_WriteSerializable_m47439 (XmlSerializationWriter_t6899 * __this, Object_t * ___serializable, String_t* ___name, String_t* ___ns, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteSerializable(System.Xml.Serialization.IXmlSerializable,System.String,System.String,System.Boolean,System.Boolean)
 void XmlSerializationWriter_WriteSerializable_m47440 (XmlSerializationWriter_t6899 * __this, Object_t * ___serializable, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___wrapped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartDocument()
 void XmlSerializationWriter_WriteStartDocument_m47441 (XmlSerializationWriter_t6899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String)
 void XmlSerializationWriter_WriteStartElement_m47442 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Boolean)
 void XmlSerializationWriter_WriteStartElement_m47443 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, bool ___writePrefixed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object)
 void XmlSerializationWriter_WriteStartElement_m47444 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object,System.Boolean)
 void XmlSerializationWriter_WriteStartElement_m47445 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, bool ___writePrefixed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object,System.Boolean,System.Collections.ICollection)
 void XmlSerializationWriter_WriteStartElement_m47446 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, bool ___writePrefixed, Object_t * ___namespaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteTypedPrimitive(System.String,System.String,System.Object,System.Boolean)
 void XmlSerializationWriter_WriteTypedPrimitive_m47447 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, Object_t * ___o, bool ___xsiType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteValue(System.String)
 void XmlSerializationWriter_WriteValue_m47448 (XmlSerializationWriter_t6899 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXmlAttribute(System.Xml.XmlNode,System.Object)
 void XmlSerializationWriter_WriteXmlAttribute_m47449 (XmlSerializationWriter_t6899 * __this, XmlNode_t5526 * ___node, Object_t * ___container, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXsiType(System.String,System.String)
 void XmlSerializationWriter_WriteXsiType_m47450 (XmlSerializationWriter_t6899 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
