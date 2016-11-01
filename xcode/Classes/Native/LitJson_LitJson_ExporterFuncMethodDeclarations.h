#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.ExporterFunc
struct ExporterFunc_t6298;
// System.Object
struct Object_t;
// LitJson.JsonWriter
struct JsonWriter_t6286;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
 void ExporterFunc__ctor_m44299 (ExporterFunc_t6298 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
 void ExporterFunc_Invoke_m44300 (ExporterFunc_t6298 * __this, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
 Object_t * ExporterFunc_BeginInvoke_m44301 (ExporterFunc_t6298 * __this, Object_t * ___obj, JsonWriter_t6286 * ___writer, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
 void ExporterFunc_EndInvoke_m44302 (ExporterFunc_t6298 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
