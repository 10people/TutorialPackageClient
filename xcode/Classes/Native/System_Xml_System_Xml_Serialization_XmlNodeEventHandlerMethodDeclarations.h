#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t6908;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t6873;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlNodeEventHandler::.ctor(System.Object,System.IntPtr)
 void XmlNodeEventHandler__ctor_m48924 (XmlNodeEventHandler_t6908 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlNodeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs)
 void XmlNodeEventHandler_Invoke_m48925 (XmlNodeEventHandler_t6908 * __this, Object_t * ___sender, XmlNodeEventArgs_t6873 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlNodeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs,System.AsyncCallback,System.Object)
 Object_t * XmlNodeEventHandler_BeginInvoke_m48926 (XmlNodeEventHandler_t6908 * __this, Object_t * ___sender, XmlNodeEventArgs_t6873 * ___e, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlNodeEventHandler::EndInvoke(System.IAsyncResult)
 void XmlNodeEventHandler_EndInvoke_m48927 (XmlNodeEventHandler_t6908 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
