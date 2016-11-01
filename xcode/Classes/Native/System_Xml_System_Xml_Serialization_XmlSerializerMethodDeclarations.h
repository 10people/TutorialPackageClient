#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t5907;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t6840;
// System.Type[]
struct TypeU5BU5D_t1042;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t6839;
// System.String
struct String_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t6852;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t6863;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t6873;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t6844;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t6888;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t6899;
// System.Object
struct Object_t;
// System.IO.TextReader
struct TextReader_t1019;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Xml.XmlWriter
struct XmlWriter_t5910;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t5909;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t6867;

// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type)
 void XmlSerializer__ctor_m41895 (XmlSerializer_t5907 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Xml.Serialization.XmlAttributeOverrides,System.Type[],System.Xml.Serialization.XmlRootAttribute,System.String)
 void XmlSerializer__ctor_m47481 (XmlSerializer_t5907 * __this, Type_t * ___type, XmlAttributeOverrides_t6840 * ___overrides, TypeU5BU5D_t1042* ___extraTypes, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.cctor()
 void XmlSerializer__cctor_m47482 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownAttribute(System.Xml.Serialization.XmlAttributeEventArgs)
 void XmlSerializer_OnUnknownAttribute_m47483 (XmlSerializer_t5907 * __this, XmlAttributeEventArgs_t6852 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownElement(System.Xml.Serialization.XmlElementEventArgs)
 void XmlSerializer_OnUnknownElement_m47484 (XmlSerializer_t5907 * __this, XmlElementEventArgs_t6863 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownNode(System.Xml.Serialization.XmlNodeEventArgs)
 void XmlSerializer_OnUnknownNode_m47485 (XmlSerializer_t5907 * __this, XmlNodeEventArgs_t6873 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnreferencedObject(System.Xml.Serialization.UnreferencedObjectEventArgs)
 void XmlSerializer_OnUnreferencedObject_m47486 (XmlSerializer_t5907 * __this, UnreferencedObjectEventArgs_t6844 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader()
 XmlSerializationReader_t6888 * XmlSerializer_CreateReader_m47487 (XmlSerializer_t5907 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter()
 XmlSerializationWriter_t6899 * XmlSerializer_CreateWriter_m47488 (XmlSerializer_t5907 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.TextReader)
 Object_t * XmlSerializer_Deserialize_m47489 (XmlSerializer_t5907 * __this, TextReader_t1019 * ___textReader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
 Object_t * XmlSerializer_Deserialize_m47490 (XmlSerializer_t5907 * __this, XmlReader_t6677 * ___xmlReader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.Serialization.XmlSerializationReader)
 Object_t * XmlSerializer_Deserialize_m47491 (XmlSerializer_t5907 * __this, XmlSerializationReader_t6888 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Object,System.Xml.Serialization.XmlSerializationWriter)
 void XmlSerializer_Serialize_m47492 (XmlSerializer_t5907 * __this, Object_t * ___o, XmlSerializationWriter_t6899 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Xml.XmlWriter,System.Object,System.Xml.Serialization.XmlSerializerNamespaces)
 void XmlSerializer_Serialize_m41903 (XmlSerializer_t5907 * __this, XmlWriter_t5910 * ___writer, Object_t * ___o, XmlSerializerNamespaces_t5909 * ___namespaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter(System.Xml.Serialization.XmlMapping)
 XmlSerializationWriter_t6899 * XmlSerializer_CreateWriter_m47493 (XmlSerializer_t5907 * __this, XmlMapping_t6867 * ___typeMapping, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader(System.Xml.Serialization.XmlMapping)
 XmlSerializationReader_t6888 * XmlSerializer_CreateReader_m47494 (XmlSerializer_t5907 * __this, XmlMapping_t6867 * ___typeMapping, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::CheckGeneratedTypes(System.Xml.Serialization.XmlMapping)
 void XmlSerializer_CheckGeneratedTypes_m47495 (XmlSerializer_t5907 * __this, XmlMapping_t6867 * ___typeMapping, MethodInfo* method) IL2CPP_METHOD_ATTR;
