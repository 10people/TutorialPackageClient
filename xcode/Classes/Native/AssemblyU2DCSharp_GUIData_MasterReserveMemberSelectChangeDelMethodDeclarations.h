#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/MasterReserveMemberSelectChangeDelegate
struct MasterReserveMemberSelectChangeDelegate_t4884;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/MasterReserveMemberSelectChangeDelegate::.ctor(System.Object,System.IntPtr)
 void MasterReserveMemberSelectChangeDelegate__ctor_m34659 (MasterReserveMemberSelectChangeDelegate_t4884 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/MasterReserveMemberSelectChangeDelegate::Invoke(System.UInt64,System.String)
 void MasterReserveMemberSelectChangeDelegate_Invoke_m34660 (MasterReserveMemberSelectChangeDelegate_t4884 * __this, uint64_t ___selectGuid, String_t* ___selectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/MasterReserveMemberSelectChangeDelegate::BeginInvoke(System.UInt64,System.String,System.AsyncCallback,System.Object)
 Object_t * MasterReserveMemberSelectChangeDelegate_BeginInvoke_m34661 (MasterReserveMemberSelectChangeDelegate_t4884 * __this, uint64_t ___selectGuid, String_t* ___selectName, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/MasterReserveMemberSelectChangeDelegate::EndInvoke(System.IAsyncResult)
 void MasterReserveMemberSelectChangeDelegate_EndInvoke_m34662 (MasterReserveMemberSelectChangeDelegate_t4884 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
