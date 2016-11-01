#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
struct XmlSerializationCollectionFixupCallback_t6883;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::.ctor(System.Object,System.IntPtr)
 void XmlSerializationCollectionFixupCallback__ctor_m48928 (XmlSerializationCollectionFixupCallback_t6883 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::Invoke(System.Object,System.Object)
 void XmlSerializationCollectionFixupCallback_Invoke_m48929 (XmlSerializationCollectionFixupCallback_t6883 * __this, Object_t * ___collection, Object_t * ___collectionItems, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationCollectionFixupCallback::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
 Object_t * XmlSerializationCollectionFixupCallback_BeginInvoke_m48930 (XmlSerializationCollectionFixupCallback_t6883 * __this, Object_t * ___collection, Object_t * ___collectionItems, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::EndInvoke(System.IAsyncResult)
 void XmlSerializationCollectionFixupCallback_EndInvoke_m48931 (XmlSerializationCollectionFixupCallback_t6883 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
