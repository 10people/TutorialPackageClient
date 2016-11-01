#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t6907;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t6863;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlElementEventHandler::.ctor(System.Object,System.IntPtr)
 void XmlElementEventHandler__ctor_m48920 (XmlElementEventHandler_t6907 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlElementEventArgs)
 void XmlElementEventHandler_Invoke_m48921 (XmlElementEventHandler_t6907 * __this, Object_t * ___sender, XmlElementEventArgs_t6863 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlElementEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlElementEventArgs,System.AsyncCallback,System.Object)
 Object_t * XmlElementEventHandler_BeginInvoke_m48922 (XmlElementEventHandler_t6907 * __this, Object_t * ___sender, XmlElementEventArgs_t6863 * ___e, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementEventHandler::EndInvoke(System.IAsyncResult)
 void XmlElementEventHandler_EndInvoke_m48923 (XmlElementEventHandler_t6907 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
