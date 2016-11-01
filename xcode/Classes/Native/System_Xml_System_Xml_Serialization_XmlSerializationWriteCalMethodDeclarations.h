#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t6895;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::.ctor(System.Object,System.IntPtr)
 void XmlSerializationWriteCallback__ctor_m48940 (XmlSerializationWriteCallback_t6895 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::Invoke(System.Object)
 void XmlSerializationWriteCallback_Invoke_m48941 (XmlSerializationWriteCallback_t6895 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationWriteCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * XmlSerializationWriteCallback_BeginInvoke_m48942 (XmlSerializationWriteCallback_t6895 * __this, Object_t * ___o, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::EndInvoke(System.IAsyncResult)
 void XmlSerializationWriteCallback_EndInvoke_m48943 (XmlSerializationWriteCallback_t6895 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
