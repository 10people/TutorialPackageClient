#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t6906;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t6852;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlAttributeEventHandler::.ctor(System.Object,System.IntPtr)
 void XmlAttributeEventHandler__ctor_m48916 (XmlAttributeEventHandler_t6906 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs)
 void XmlAttributeEventHandler_Invoke_m48917 (XmlAttributeEventHandler_t6906 * __this, Object_t * ___sender, XmlAttributeEventArgs_t6852 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlAttributeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs,System.AsyncCallback,System.Object)
 Object_t * XmlAttributeEventHandler_BeginInvoke_m48918 (XmlAttributeEventHandler_t6906 * __this, Object_t * ___sender, XmlAttributeEventArgs_t6852 * ___e, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::EndInvoke(System.IAsyncResult)
 void XmlAttributeEventHandler_EndInvoke_m48919 (XmlAttributeEventHandler_t6906 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
