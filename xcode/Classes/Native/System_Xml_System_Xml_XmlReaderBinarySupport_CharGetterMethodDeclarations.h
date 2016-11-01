#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t7024;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t1016;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.XmlReaderBinarySupport/CharGetter::.ctor(System.Object,System.IntPtr)
 void CharGetter__ctor_m48539 (CharGetter_t7024 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
 int32_t CharGetter_Invoke_m48540 (CharGetter_t7024 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.XmlReaderBinarySupport/CharGetter::BeginInvoke(System.Char[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * CharGetter_BeginInvoke_m48541 (CharGetter_t7024 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___offset, int32_t ___length, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::EndInvoke(System.IAsyncResult)
 int32_t CharGetter_EndInvoke_m48542 (CharGetter_t7024 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
