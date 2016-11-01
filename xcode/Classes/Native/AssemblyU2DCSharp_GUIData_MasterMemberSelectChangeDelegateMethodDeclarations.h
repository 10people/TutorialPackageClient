#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/MasterMemberSelectChangeDelegate
struct MasterMemberSelectChangeDelegate_t4883;
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

// System.Void GUIData/MasterMemberSelectChangeDelegate::.ctor(System.Object,System.IntPtr)
 void MasterMemberSelectChangeDelegate__ctor_m34655 (MasterMemberSelectChangeDelegate_t4883 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/MasterMemberSelectChangeDelegate::Invoke(System.UInt64,System.String)
 void MasterMemberSelectChangeDelegate_Invoke_m34656 (MasterMemberSelectChangeDelegate_t4883 * __this, uint64_t ___selectGuid, String_t* ___selectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/MasterMemberSelectChangeDelegate::BeginInvoke(System.UInt64,System.String,System.AsyncCallback,System.Object)
 Object_t * MasterMemberSelectChangeDelegate_BeginInvoke_m34657 (MasterMemberSelectChangeDelegate_t4883 * __this, uint64_t ___selectGuid, String_t* ___selectName, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/MasterMemberSelectChangeDelegate::EndInvoke(System.IAsyncResult)
 void MasterMemberSelectChangeDelegate_EndInvoke_m34658 (MasterMemberSelectChangeDelegate_t4883 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
