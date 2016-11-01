#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlTextWriter
struct XmlTextWriter_t7039;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1037;
// System.IO.Stream
struct Stream_t1038;
// System.IO.TextWriter
struct TextWriter_t1098;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t5908;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Exception
struct Exception_t972;
// System.Xml.Formatting
#include "System_Xml_System_Xml_Formatting.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"

// System.Void System.Xml.XmlTextWriter::.ctor(System.String,System.Text.Encoding)
 void XmlTextWriter__ctor_m48771 (XmlTextWriter_t7039 * __this, String_t* ___filename, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void XmlTextWriter__ctor_m48772 (XmlTextWriter_t7039 * __this, Stream_t1038 * ___stream, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
 void XmlTextWriter__ctor_m48773 (XmlTextWriter_t7039 * __this, TextWriter_t1098 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter,System.Xml.XmlWriterSettings,System.Boolean)
 void XmlTextWriter__ctor_m48774 (XmlTextWriter_t7039 * __this, TextWriter_t1098 * ___writer, XmlWriterSettings_t5908 * ___settings, bool ___closeOutput, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.cctor()
 void XmlTextWriter__cctor_m48775 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
 void XmlTextWriter_Initialize_m48776 (XmlTextWriter_t7039 * __this, TextWriter_t1098 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
 void XmlTextWriter_set_Formatting_m48777 (XmlTextWriter_t7039 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::get_XmlLang()
 String_t* XmlTextWriter_get_XmlLang_m48778 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
 int32_t XmlTextWriter_get_XmlSpace_m48779 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WriteState System.Xml.XmlTextWriter::get_WriteState()
 int32_t XmlTextWriter_get_WriteState_m48780 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
 String_t* XmlTextWriter_LookupPrefix_m48781 (XmlTextWriter_t7039 * __this, String_t* ___namespaceUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Close()
 void XmlTextWriter_Close_m48782 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Flush()
 void XmlTextWriter_Flush_m48783 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocument()
 void XmlTextWriter_WriteStartDocument_m48784 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
 void XmlTextWriter_WriteStartDocumentCore_m48785 (XmlTextWriter_t7039 * __this, bool ___outputStd, bool ___standalone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
 void XmlTextWriter_WriteDocType_m48786 (XmlTextWriter_t7039 * __this, String_t* ___name, String_t* ___pubid, String_t* ___sysid, String_t* ___subset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
 void XmlTextWriter_WriteStartElement_m48787 (XmlTextWriter_t7039 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
 void XmlTextWriter_CloseStartElement_m48788 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
 void XmlTextWriter_CloseStartElementCore_m48789 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
 void XmlTextWriter_WriteEndElement_m48790 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
 void XmlTextWriter_WriteFullEndElement_m48791 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
 void XmlTextWriter_WriteEndElementCore_m48792 (XmlTextWriter_t7039 * __this, bool ___full, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
 void XmlTextWriter_WriteStartAttribute_m48793 (XmlTextWriter_t7039 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
 String_t* XmlTextWriter_DetermineAttributePrefix_m48794 (XmlTextWriter_t7039 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
 String_t* XmlTextWriter_MockupPrefix_m48795 (XmlTextWriter_t7039 * __this, String_t* ___ns, bool ___skipLookup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
 void XmlTextWriter_WriteEndAttribute_m48796 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
 void XmlTextWriter_WriteComment_m48797 (XmlTextWriter_t7039 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
 void XmlTextWriter_WriteProcessingInstruction_m48798 (XmlTextWriter_t7039 * __this, String_t* ___name, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
 void XmlTextWriter_WriteWhitespace_m48799 (XmlTextWriter_t7039 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
 void XmlTextWriter_WriteCData_m48800 (XmlTextWriter_t7039 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
 void XmlTextWriter_WriteString_m48801 (XmlTextWriter_t7039 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteRaw(System.String)
 void XmlTextWriter_WriteRaw_m48802 (XmlTextWriter_t7039 * __this, String_t* ___raw, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
 void XmlTextWriter_WriteEntityRef_m48803 (XmlTextWriter_t7039 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteName(System.String)
 void XmlTextWriter_WriteName_m48804 (XmlTextWriter_t7039 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndent()
 void XmlTextWriter_WriteIndent_m48805 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
 void XmlTextWriter_WriteIndentEndElement_m48806 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
 void XmlTextWriter_WriteIndentAttribute_m48807 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
 bool XmlTextWriter_WriteIndentCore_m48808 (XmlTextWriter_t7039 * __this, int32_t ___nestFix, bool ___attribute, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
 void XmlTextWriter_OutputAutoStartDocument_m48809 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
 void XmlTextWriter_ShiftStateTopLevel_m48810 (XmlTextWriter_t7039 * __this, String_t* ___occured, bool ___allowAttribute, bool ___dontCheckXmlDecl, bool ___isCharacter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
 void XmlTextWriter_CheckMixedContentState_m48811 (XmlTextWriter_t7039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
 void XmlTextWriter_ShiftStateContent_m48812 (XmlTextWriter_t7039 * __this, String_t* ___occured, bool ___allowAttribute, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
 void XmlTextWriter_WriteEscapedString_m48813 (XmlTextWriter_t7039 * __this, String_t* ___text, bool ___isAttribute, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
 void XmlTextWriter_WriteCheckedString_m48814 (XmlTextWriter_t7039 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
 void XmlTextWriter_WriteCheckedBuffer_m48815 (XmlTextWriter_t7039 * __this, CharU5BU5D_t1016* ___text, int32_t ___idx, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
 void XmlTextWriter_WriteEscapedBuffer_m48816 (XmlTextWriter_t7039 * __this, CharU5BU5D_t1016* ___text, int32_t ___index, int32_t ___length, bool ___isAttribute, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
 Exception_t972 * XmlTextWriter_ArgumentError_m48817 (XmlTextWriter_t7039 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
 Exception_t972 * XmlTextWriter_InvalidOperation_m48818 (XmlTextWriter_t7039 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
 Exception_t972 * XmlTextWriter_StateError_m48819 (XmlTextWriter_t7039 * __this, String_t* ___occured, MethodInfo* method) IL2CPP_METHOD_ATTR;
