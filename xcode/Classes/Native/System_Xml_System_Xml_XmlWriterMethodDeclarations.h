#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlWriter
struct XmlWriter_t5910;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t5908;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t1038;
// System.IO.TextWriter
struct TextWriter_t1098;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlWriter::.ctor()
 void XmlWriter__ctor_m48878 (XmlWriter_t5910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
 void XmlWriter_System_IDisposable_Dispose_m48879 (XmlWriter_t5910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings()
 XmlWriterSettings_t5908 * XmlWriter_get_Settings_m48880 (XmlWriter_t5910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WriteState System.Xml.XmlWriter::get_WriteState()
// System.String System.Xml.XmlWriter::get_XmlLang()
 String_t* XmlWriter_get_XmlLang_m48881 (XmlWriter_t5910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
 int32_t XmlWriter_get_XmlSpace_m48882 (XmlWriter_t5910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Close()
// System.Xml.XmlWriter System.Xml.XmlWriter::Create(System.IO.Stream,System.Xml.XmlWriterSettings)
 XmlWriter_t5910 * XmlWriter_Create_m41902 (Object_t * __this/* static, unused */, Stream_t1038 * ___stream, XmlWriterSettings_t5908 * ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriter System.Xml.XmlWriter::Create(System.IO.TextWriter,System.Xml.XmlWriterSettings)
 XmlWriter_t5910 * XmlWriter_Create_m48883 (Object_t * __this/* static, unused */, TextWriter_t1098 * ___writer, XmlWriterSettings_t5908 * ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriter System.Xml.XmlWriter::Create(System.Xml.XmlWriter,System.Xml.XmlWriterSettings)
 XmlWriter_t5910 * XmlWriter_Create_m48884 (Object_t * __this/* static, unused */, XmlWriter_t5910 * ___writer, XmlWriterSettings_t5908 * ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriter System.Xml.XmlWriter::CreateTextWriter(System.IO.TextWriter,System.Xml.XmlWriterSettings,System.Boolean)
 XmlWriter_t5910 * XmlWriter_CreateTextWriter_m48885 (Object_t * __this/* static, unused */, TextWriter_t1098 * ___writer, XmlWriterSettings_t5908 * ___settings, bool ___closeOutput, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
 void XmlWriter_Dispose_m48886 (XmlWriter_t5910 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Flush()
// System.String System.Xml.XmlWriter::LookupPrefix(System.String)
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
 void XmlWriter_WriteAttribute_m48887 (XmlWriter_t5910 * __this, XmlReader_t6677 * ___reader, bool ___defattr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
 void XmlWriter_WriteAttributeString_m48888 (XmlWriter_t5910 * __this, String_t* ___localName, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String)
 void XmlWriter_WriteAttributeString_m48889 (XmlWriter_t5910 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
 void XmlWriter_WriteAttributeString_m48890 (XmlWriter_t5910 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteCData(System.String)
// System.Void System.Xml.XmlWriter::WriteComment(System.String)
// System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String,System.String)
 void XmlWriter_WriteElementString_m48891 (XmlWriter_t5910 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteEndAttribute()
// System.Void System.Xml.XmlWriter::WriteEndElement()
// System.Void System.Xml.XmlWriter::WriteEntityRef(System.String)
// System.Void System.Xml.XmlWriter::WriteFullEndElement()
// System.Void System.Xml.XmlWriter::WriteName(System.String)
 void XmlWriter_WriteName_m48892 (XmlWriter_t5910 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteNameInternal(System.String)
 void XmlWriter_WriteNameInternal_m48893 (XmlWriter_t5910 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
 void XmlWriter_WriteNode_m48894 (XmlWriter_t5910 * __this, XmlReader_t6677 * ___reader, bool ___defattr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteRaw(System.String)
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteStartDocument()
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String)
 void XmlWriter_WriteStartElement_m48895 (XmlWriter_t5910 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteString(System.String)
// System.Void System.Xml.XmlWriter::WriteWhitespace(System.String)
