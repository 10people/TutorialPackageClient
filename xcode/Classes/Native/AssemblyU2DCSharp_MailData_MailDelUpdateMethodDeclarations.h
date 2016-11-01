#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MailData/MailDelUpdate
struct MailDelUpdate_t4922;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// MailData/MailUpdateType
#include "AssemblyU2DCSharp_MailData_MailUpdateType.h"

// System.Void MailData/MailDelUpdate::.ctor(System.Object,System.IntPtr)
 void MailDelUpdate__ctor_m34837 (MailDelUpdate_t4922 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailData/MailDelUpdate::Invoke(MailData/MailUpdateType,System.UInt64)
 void MailDelUpdate_Invoke_m34838 (MailDelUpdate_t4922 * __this, int32_t ___updateType, uint64_t ___curMailID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult MailData/MailDelUpdate::BeginInvoke(MailData/MailUpdateType,System.UInt64,System.AsyncCallback,System.Object)
 Object_t * MailDelUpdate_BeginInvoke_m34839 (MailDelUpdate_t4922 * __this, int32_t ___updateType, uint64_t ___curMailID, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailData/MailDelUpdate::EndInvoke(System.IAsyncResult)
 void MailDelUpdate_EndInvoke_m34840 (MailDelUpdate_t4922 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
