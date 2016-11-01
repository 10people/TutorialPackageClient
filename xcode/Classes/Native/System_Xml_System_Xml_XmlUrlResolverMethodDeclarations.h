#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t7042;
// System.Object
struct Object_t;
// System.Uri
struct Uri_t6735;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.XmlUrlResolver::.ctor()
 void XmlUrlResolver__ctor_m48820 (XmlUrlResolver_t7042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
 Object_t * XmlUrlResolver_GetEntity_m48821 (XmlUrlResolver_t7042 * __this, Uri_t6735 * ___absoluteUri, String_t* ___role, Type_t * ___ofObjectToReturn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
 Uri_t6735 * XmlUrlResolver_ResolveUri_m48822 (XmlUrlResolver_t7042 * __this, Uri_t6735 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
 String_t* XmlUrlResolver_UnescapeRelativeUriBody_m48823 (XmlUrlResolver_t7042 * __this, String_t* ___src, MethodInfo* method) IL2CPP_METHOD_ATTR;
