#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t6909;
// System.Object
struct Object_t;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t6844;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::.ctor(System.Object,System.IntPtr)
 void UnreferencedObjectEventHandler__ctor_m48912 (UnreferencedObjectEventHandler_t6909 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::Invoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs)
 void UnreferencedObjectEventHandler_Invoke_m48913 (UnreferencedObjectEventHandler_t6909 * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t6844 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.UnreferencedObjectEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs,System.AsyncCallback,System.Object)
 Object_t * UnreferencedObjectEventHandler_BeginInvoke_m48914 (UnreferencedObjectEventHandler_t6909 * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t6844 * ___e, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::EndInvoke(System.IAsyncResult)
 void UnreferencedObjectEventHandler_EndInvoke_m48915 (UnreferencedObjectEventHandler_t6909 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
