#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Object
struct Object_t;
// System.Uri
struct Uri_t6735;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.XmlResolver::.ctor()
 void XmlResolver__ctor_m48548 (XmlResolver_t6678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlResolver::GetEntity(System.Uri,System.String,System.Type)
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
 Uri_t6735 * XmlResolver_ResolveUri_m48549 (XmlResolver_t6678 * __this, Uri_t6735 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
 String_t* XmlResolver_EscapeRelativeUriBody_m48550 (XmlResolver_t6678 * __this, String_t* ___src, MethodInfo* method) IL2CPP_METHOD_ATTR;
