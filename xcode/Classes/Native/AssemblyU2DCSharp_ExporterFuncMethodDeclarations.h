#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExporterFunc
struct ExporterFunc_t1083;
// System.Object
struct Object_t;
// JsonWriter
struct JsonWriter_t1060;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExporterFunc::.ctor(System.Object,System.IntPtr)
 void ExporterFunc__ctor_m38607 (ExporterFunc_t1083 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExporterFunc::Invoke(System.Object,JsonWriter)
 void ExporterFunc_Invoke_m38608 (ExporterFunc_t1083 * __this, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExporterFunc::BeginInvoke(System.Object,JsonWriter,System.AsyncCallback,System.Object)
 Object_t * ExporterFunc_BeginInvoke_m38609 (ExporterFunc_t1083 * __this, Object_t * ___obj, JsonWriter_t1060 * ___writer, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExporterFunc::EndInvoke(System.IAsyncResult)
 void ExporterFunc_EndInvoke_m38610 (ExporterFunc_t1083 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
