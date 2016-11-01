#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t1037;
// System.Char[]
struct CharU5BU5D_t1016;
// System.IO.Stream
struct Stream_t1038;
// System.IO.TextWriter
struct TextWriter_t1098;
// System.IO.StringWriter
struct StringWriter_t5471;
// System.String
struct String_t;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685;
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t7038;
// System.Collections.Stack
struct Stack_t6658;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriter.h"
// System.Xml.XmlTextWriter/XmlDeclState
#include "System_Xml_System_Xml_XmlTextWriter_XmlDeclState.h"
// System.Xml.NewLineHandling
#include "System_Xml_System_Xml_NewLineHandling.h"
// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.NamespaceHandling
#include "System_Xml_System_Xml_NamespaceHandling.h"
// System.Xml.XmlTextWriter
struct XmlTextWriter_t7039  : public XmlWriter_t5910
{
	// System.IO.Stream System.Xml.XmlTextWriter::base_stream
	Stream_t1038 * ___base_stream;
	// System.IO.TextWriter System.Xml.XmlTextWriter::source
	TextWriter_t1098 * ___source;
	// System.IO.TextWriter System.Xml.XmlTextWriter::writer
	TextWriter_t1098 * ___writer;
	// System.IO.StringWriter System.Xml.XmlTextWriter::preserver
	StringWriter_t5471 * ___preserver;
	// System.String System.Xml.XmlTextWriter::preserved_name
	String_t* ___preserved_name;
	// System.Boolean System.Xml.XmlTextWriter::is_preserved_xmlns
	bool ___is_preserved_xmlns;
	// System.Boolean System.Xml.XmlTextWriter::allow_doc_fragment
	bool ___allow_doc_fragment;
	// System.Boolean System.Xml.XmlTextWriter::close_output_stream
	bool ___close_output_stream;
	// System.Boolean System.Xml.XmlTextWriter::ignore_encoding
	bool ___ignore_encoding;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces;
	// System.Xml.XmlTextWriter/XmlDeclState System.Xml.XmlTextWriter::xmldecl_state
	int32_t ___xmldecl_state;
	// System.Boolean System.Xml.XmlTextWriter::check_character_validity
	bool ___check_character_validity;
	// System.Xml.NewLineHandling System.Xml.XmlTextWriter::newline_handling
	int32_t ___newline_handling;
	// System.Boolean System.Xml.XmlTextWriter::is_document_entity
	bool ___is_document_entity;
	// System.Xml.WriteState System.Xml.XmlTextWriter::state
	int32_t ___state;
	// System.Xml.XmlNodeType System.Xml.XmlTextWriter::node_state
	int32_t ___node_state;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextWriter::nsmanager
	XmlNamespaceManager_t6685 * ___nsmanager;
	// System.Int32 System.Xml.XmlTextWriter::open_count
	int32_t ___open_count;
	// System.Xml.XmlTextWriter/XmlNodeInfo[] System.Xml.XmlTextWriter::elements
	XmlNodeInfoU5BU5D_t7038* ___elements;
	// System.Collections.Stack System.Xml.XmlTextWriter::new_local_namespaces
	Stack_t6658 * ___new_local_namespaces;
	// System.Collections.ArrayList System.Xml.XmlTextWriter::explicit_nsdecls
	ArrayList_t5157 * ___explicit_nsdecls;
	// System.Xml.NamespaceHandling System.Xml.XmlTextWriter::namespace_handling
	int32_t ___namespace_handling;
	// System.Boolean System.Xml.XmlTextWriter::indent
	bool ___indent;
	// System.Int32 System.Xml.XmlTextWriter::indent_count
	int32_t ___indent_count;
	// System.Char System.Xml.XmlTextWriter::indent_char
	uint16_t ___indent_char;
	// System.String System.Xml.XmlTextWriter::indent_string
	String_t* ___indent_string;
	// System.String System.Xml.XmlTextWriter::newline
	String_t* ___newline;
	// System.Boolean System.Xml.XmlTextWriter::indent_attributes
	bool ___indent_attributes;
	// System.Char System.Xml.XmlTextWriter::quote_char
	uint16_t ___quote_char;
	// System.Boolean System.Xml.XmlTextWriter::v2
	bool ___v2;
};
struct XmlTextWriter_t7039_StaticFields{
	// System.Text.Encoding System.Xml.XmlTextWriter::unmarked_utf8encoding
	Encoding_t1037 * ___unmarked_utf8encoding;
	// System.Char[] System.Xml.XmlTextWriter::escaped_text_chars
	CharU5BU5D_t1016* ___escaped_text_chars;
	// System.Char[] System.Xml.XmlTextWriter::escaped_attr_chars
	CharU5BU5D_t1016* ___escaped_attr_chars;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map53
	Dictionary_2_t944 * ___U3CU3Ef__switch$map53;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map54
	Dictionary_2_t944 * ___U3CU3Ef__switch$map54;
};
