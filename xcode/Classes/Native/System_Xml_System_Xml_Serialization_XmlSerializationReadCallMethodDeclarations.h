#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t6881;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationReadCallback::.ctor(System.Object,System.IntPtr)
 void XmlSerializationReadCallback__ctor_m48936 (XmlSerializationReadCallback_t6881 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::Invoke()
 Object_t * XmlSerializationReadCallback_Invoke_m48937 (XmlSerializationReadCallback_t6881 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationReadCallback::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * XmlSerializationReadCallback_BeginInvoke_m48938 (XmlSerializationReadCallback_t6881 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::EndInvoke(System.IAsyncResult)
 Object_t * XmlSerializationReadCallback_EndInvoke_m48939 (XmlSerializationReadCallback_t6881 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
