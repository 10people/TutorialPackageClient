#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationFixupCallback
struct XmlSerializationFixupCallback_t6885;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::.ctor(System.Object,System.IntPtr)
 void XmlSerializationFixupCallback__ctor_m48932 (XmlSerializationFixupCallback_t6885 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::Invoke(System.Object)
 void XmlSerializationFixupCallback_Invoke_m48933 (XmlSerializationFixupCallback_t6885 * __this, Object_t * ___fixup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationFixupCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * XmlSerializationFixupCallback_BeginInvoke_m48934 (XmlSerializationFixupCallback_t6885 * __this, Object_t * ___fixup, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::EndInvoke(System.IAsyncResult)
 void XmlSerializationFixupCallback_EndInvoke_m48935 (XmlSerializationFixupCallback_t6885 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
