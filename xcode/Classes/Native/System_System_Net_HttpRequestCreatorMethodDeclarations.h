#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t7192;
// System.Net.WebRequest
struct WebRequest_t6621;
// System.Uri
struct Uri_t6735;

// System.Void System.Net.HttpRequestCreator::.ctor()
 void HttpRequestCreator__ctor_m50012 (HttpRequestCreator_t7192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
 WebRequest_t6621 * HttpRequestCreator_Create_m50013 (HttpRequestCreator_t7192 * __this, Uri_t6735 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
