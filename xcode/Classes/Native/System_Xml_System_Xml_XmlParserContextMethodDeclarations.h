#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserContext
struct XmlParserContext_t6684;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Text.Encoding
struct Encoding_t1037;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
 void XmlParserContext__ctor_m48448 (XmlParserContext_t6684 * __this, XmlNameTable_t6650 * ___nt, XmlNamespaceManager_t6685 * ___nsMgr, String_t* ___xmlLang, int32_t ___xmlSpace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
 void XmlParserContext__ctor_m48449 (XmlParserContext_t6684 * __this, XmlNameTable_t6650 * ___nt, XmlNamespaceManager_t6685 * ___nsMgr, String_t* ___docTypeName, String_t* ___pubId, String_t* ___sysId, String_t* ___internalSubset, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t1037 * ___enc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
 void XmlParserContext__ctor_m48450 (XmlParserContext_t6684 * __this, XmlNameTable_t6650 * ___nt, XmlNamespaceManager_t6685 * ___nsMgr, DTDObjectModel_t6924 * ___dtd, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t1037 * ___enc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_BaseURI()
 String_t* XmlParserContext_get_BaseURI_m48451 (XmlParserContext_t6684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
 void XmlParserContext_set_BaseURI_m48452 (XmlParserContext_t6684 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
 void XmlParserContext_set_DocTypeName_m48453 (XmlParserContext_t6684 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
 DTDObjectModel_t6924 * XmlParserContext_get_Dtd_m48454 (XmlParserContext_t6684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
 void XmlParserContext_set_Dtd_m48455 (XmlParserContext_t6684 * __this, DTDObjectModel_t6924 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
 void XmlParserContext_set_Encoding_m48456 (XmlParserContext_t6684 * __this, Encoding_t1037 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_InternalSubset()
 String_t* XmlParserContext_get_InternalSubset_m48457 (XmlParserContext_t6684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
 void XmlParserContext_set_InternalSubset_m48458 (XmlParserContext_t6684 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
 XmlNamespaceManager_t6685 * XmlParserContext_get_NamespaceManager_m48459 (XmlParserContext_t6684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
 XmlNameTable_t6650 * XmlParserContext_get_NameTable_m48460 (XmlParserContext_t6684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
 void XmlParserContext_set_PublicId_m48461 (XmlParserContext_t6684 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
 void XmlParserContext_set_SystemId_m48462 (XmlParserContext_t6684 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_XmlLang()
 String_t* XmlParserContext_get_XmlLang_m48463 (XmlParserContext_t6684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
 void XmlParserContext_set_XmlLang_m48464 (XmlParserContext_t6684 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
 int32_t XmlParserContext_get_XmlSpace_m48465 (XmlParserContext_t6684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
 void XmlParserContext_set_XmlSpace_m48466 (XmlParserContext_t6684 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PushScope()
 void XmlParserContext_PushScope_m48467 (XmlParserContext_t6684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PopScope()
 void XmlParserContext_PopScope_m48468 (XmlParserContext_t6684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
