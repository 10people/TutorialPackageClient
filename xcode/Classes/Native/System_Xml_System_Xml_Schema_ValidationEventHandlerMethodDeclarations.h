#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t6752;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
 void ValidationEventHandler__ctor_m48908 (ValidationEventHandler_t6682 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
 void ValidationEventHandler_Invoke_m48909 (ValidationEventHandler_t6682 * __this, Object_t * ___sender, ValidationEventArgs_t6752 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Schema.ValidationEventHandler::BeginInvoke(System.Object,System.Xml.Schema.ValidationEventArgs,System.AsyncCallback,System.Object)
 Object_t * ValidationEventHandler_BeginInvoke_m48910 (ValidationEventHandler_t6682 * __this, Object_t * ___sender, ValidationEventArgs_t6752 * ___e, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::EndInvoke(System.IAsyncResult)
 void ValidationEventHandler_EndInvoke_m48911 (ValidationEventHandler_t6682 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
