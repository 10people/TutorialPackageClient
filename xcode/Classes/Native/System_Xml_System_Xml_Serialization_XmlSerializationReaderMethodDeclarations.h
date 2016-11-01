#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t6888;
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t5907;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct CollectionFixup_t6884;
// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_t6886;
// System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
struct CollectionItemFixup_t6887;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t6881;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t972;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Array
struct Array_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t6763;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct WriteCallbackInfo_t6882;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t6889;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.XmlElement
struct XmlElement_t5531;

// System.Void System.Xml.Serialization.XmlSerializationReader::.ctor()
 void XmlSerializationReader__ctor_m47309 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::Initialize(System.Xml.XmlReader,System.Xml.Serialization.XmlSerializer)
 void XmlSerializationReader_Initialize_m47310 (XmlSerializationReader_t6888 * __this, XmlReader_t6677 * ___reader, XmlSerializer_t5907 * ___eventSource, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::EnsureArrayList(System.Collections.ArrayList)
 ArrayList_t5157 * XmlSerializationReader_EnsureArrayList_m47311 (XmlSerializationReader_t6888 * __this, ArrayList_t5157 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::EnsureHashtable(System.Collections.Hashtable)
 Hashtable_t4372 * XmlSerializationReader_EnsureHashtable_m47312 (XmlSerializationReader_t6888 * __this, Hashtable_t4372 * ___hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::get_Document()
 XmlDocument_t5524 * XmlSerializationReader_get_Document_m47313 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::get_Reader()
 XmlReader_t6677 * XmlSerializationReader_get_Reader_m47314 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionFixup)
 void XmlSerializationReader_AddFixup_m47315 (XmlSerializationReader_t6888 * __this, CollectionFixup_t6884 * ___fixup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/Fixup)
 void XmlSerializationReader_AddFixup_m47316 (XmlSerializationReader_t6888 * __this, Fixup_t6886 * ___fixup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup)
 void XmlSerializationReader_AddFixup_m47317 (XmlSerializationReader_t6888 * __this, CollectionItemFixup_t6887 * ___fixup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddReadCallback(System.String,System.String,System.Type,System.Xml.Serialization.XmlSerializationReadCallback)
 void XmlSerializationReader_AddReadCallback_m47318 (XmlSerializationReader_t6888 * __this, String_t* ___name, String_t* ___ns, Type_t * ___type, XmlSerializationReadCallback_t6881 * ___read, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddTarget(System.String,System.Object)
 void XmlSerializationReader_AddTarget_m47319 (XmlSerializationReader_t6888 * __this, String_t* ___id, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::CurrentTag()
 String_t* XmlSerializationReader_CurrentTag_m47320 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateReadOnlyCollectionException(System.String)
 Exception_t972 * XmlSerializationReader_CreateReadOnlyCollectionException_m47321 (XmlSerializationReader_t6888 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownConstantException(System.String,System.Type)
 Exception_t972 * XmlSerializationReader_CreateUnknownConstantException_m47322 (XmlSerializationReader_t6888 * __this, String_t* ___value, Type_t * ___enumType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownNodeException()
 Exception_t972 * XmlSerializationReader_CreateUnknownNodeException_m47323 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownTypeException(System.Xml.XmlQualifiedName)
 Exception_t972 * XmlSerializationReader_CreateUnknownTypeException_m47324 (XmlSerializationReader_t6888 * __this, XmlQualifiedName_t6656 * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::EnsureArrayIndex(System.Array,System.Int32,System.Type)
 Array_t * XmlSerializationReader_EnsureArrayIndex_m47325 (XmlSerializationReader_t6888 * __this, Array_t * ___a, int32_t ___index, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::GetNullAttr()
 bool XmlSerializationReader_GetNullAttr_m47326 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::GetTarget(System.String)
 Object_t * XmlSerializationReader_GetTarget_m47327 (XmlSerializationReader_t6888 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::TargetReady(System.String)
 bool XmlSerializationReader_TargetReady_m47328 (XmlSerializationReader_t6888 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::GetXsiType()
 XmlQualifiedName_t6656 * XmlSerializationReader_GetXsiType_m47329 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::InitCallbacks()
// System.Void System.Xml.Serialization.XmlSerializationReader::InitIDs()
// System.Boolean System.Xml.Serialization.XmlSerializationReader::IsXmlnsAttribute(System.String)
 bool XmlSerializationReader_IsXmlnsAttribute_m47330 (XmlSerializationReader_t6888 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ParseWsdlArrayType(System.Xml.XmlAttribute)
 void XmlSerializationReader_ParseWsdlArrayType_m47331 (XmlSerializationReader_t6888 * __this, XmlAttribute_t6763 * ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadElementQualifiedName()
 XmlQualifiedName_t6656 * XmlSerializationReader_ReadElementQualifiedName_m47332 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadEndElement()
 void XmlSerializationReader_ReadEndElement_m47333 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadNull()
 bool XmlSerializationReader_ReadNull_m47334 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadNullableQualifiedName()
 XmlQualifiedName_t6656 * XmlSerializationReader_ReadNullableQualifiedName_m47335 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadNullableString()
 String_t* XmlSerializationReader_ReadNullableString_m47336 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement()
 Object_t * XmlSerializationReader_ReadReferencedElement_m47337 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo System.Xml.Serialization.XmlSerializationReader::GetCallbackInfo(System.Xml.XmlQualifiedName)
 WriteCallbackInfo_t6882 * XmlSerializationReader_GetCallbackInfo_m47338 (XmlSerializationReader_t6888 * __this, XmlQualifiedName_t6656 * ___qname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement(System.String,System.String)
 Object_t * XmlSerializationReader_ReadReferencedElement_m47339 (XmlSerializationReader_t6888 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadList(System.Object&)
 bool XmlSerializationReader_ReadList_m47340 (XmlSerializationReader_t6888 * __this, Object_t ** ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadReferencedElements()
 void XmlSerializationReader_ReadReferencedElements_m47341 (XmlSerializationReader_t6888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String&)
 Object_t * XmlSerializationReader_ReadReferencingElement_m47342 (XmlSerializationReader_t6888 * __this, String_t** ___fixupReference, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.String&)
 Object_t * XmlSerializationReader_ReadReferencingElement_m47343 (XmlSerializationReader_t6888 * __this, String_t* ___name, String_t* ___ns, String_t** ___fixupReference, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.Boolean,System.String&)
 Object_t * XmlSerializationReader_ReadReferencingElement_m47344 (XmlSerializationReader_t6888 * __this, String_t* ___name, String_t* ___ns, bool ___elementCanBeType, String_t** ___fixupReference, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.IXmlSerializable System.Xml.Serialization.XmlSerializationReader::ReadSerializable(System.Xml.Serialization.IXmlSerializable)
 Object_t * XmlSerializationReader_ReadSerializable_m47345 (XmlSerializationReader_t6888 * __this, Object_t * ___serializable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadString(System.String)
 String_t* XmlSerializationReader_ReadString_m47346 (XmlSerializationReader_t6888 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName)
 Object_t * XmlSerializationReader_ReadTypedPrimitive_m47347 (XmlSerializationReader_t6888 * __this, XmlQualifiedName_t6656 * ___qname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName,System.Boolean)
 Object_t * XmlSerializationReader_ReadTypedPrimitive_m47348 (XmlSerializationReader_t6888 * __this, XmlQualifiedName_t6656 * ___qname, bool ___reportUnknown, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.Serialization.XmlSerializationReader::ReadXmlNode(System.Boolean)
 XmlNode_t5526 * XmlSerializationReader_ReadXmlNode_m47349 (XmlSerializationReader_t6888 * __this, bool ___wrapped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::ReadXmlDocument(System.Boolean)
 XmlDocument_t5524 * XmlSerializationReader_ReadXmlDocument_m47350 (XmlSerializationReader_t6888 * __this, bool ___wrapped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::ShrinkArray(System.Array,System.Int32,System.Type,System.Boolean)
 Array_t * XmlSerializationReader_ShrinkArray_m47351 (XmlSerializationReader_t6888 * __this, Array_t * ___a, int32_t ___length, Type_t * ___elementType, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ToXmlQualifiedName(System.String)
 XmlQualifiedName_t6656 * XmlSerializationReader_ToXmlQualifiedName_m47352 (XmlSerializationReader_t6888 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownAttribute(System.Object,System.Xml.XmlAttribute,System.String)
 void XmlSerializationReader_UnknownAttribute_m47353 (XmlSerializationReader_t6888 * __this, Object_t * ___o, XmlAttribute_t6763 * ___attr, String_t* ___qnames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownElement(System.Object,System.Xml.XmlElement,System.String)
 void XmlSerializationReader_UnknownElement_m47354 (XmlSerializationReader_t6888 * __this, Object_t * ___o, XmlElement_t5531 * ___elem, String_t* ___qnames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object)
 void XmlSerializationReader_UnknownNode_m47355 (XmlSerializationReader_t6888 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object,System.String)
 void XmlSerializationReader_UnknownNode_m47356 (XmlSerializationReader_t6888 * __this, Object_t * ___o, String_t* ___qnames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::OnUnknownNode(System.Xml.XmlNode,System.Object,System.String)
 void XmlSerializationReader_OnUnknownNode_m47357 (XmlSerializationReader_t6888 * __this, XmlNode_t5526 * ___node, Object_t * ___o, String_t* ___qnames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnreferencedObject(System.String,System.Object)
 void XmlSerializationReader_UnreferencedObject_m47358 (XmlSerializationReader_t6888 * __this, String_t* ___id, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
