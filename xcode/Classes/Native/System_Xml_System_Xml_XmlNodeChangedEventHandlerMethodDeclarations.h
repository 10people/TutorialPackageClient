#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t6994;
// System.Object
struct Object_t;
// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t7013;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.XmlNodeChangedEventHandler::.ctor(System.Object,System.IntPtr)
 void XmlNodeChangedEventHandler__ctor_m48944 (XmlNodeChangedEventHandler_t6994 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::Invoke(System.Object,System.Xml.XmlNodeChangedEventArgs)
 void XmlNodeChangedEventHandler_Invoke_m48945 (XmlNodeChangedEventHandler_t6994 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t7013 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.XmlNodeChangedEventHandler::BeginInvoke(System.Object,System.Xml.XmlNodeChangedEventArgs,System.AsyncCallback,System.Object)
 Object_t * XmlNodeChangedEventHandler_BeginInvoke_m48946 (XmlNodeChangedEventHandler_t6994 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t7013 * ___e, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::EndInvoke(System.IAsyncResult)
 void XmlNodeChangedEventHandler_EndInvoke_m48947 (XmlNodeChangedEventHandler_t6994 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
