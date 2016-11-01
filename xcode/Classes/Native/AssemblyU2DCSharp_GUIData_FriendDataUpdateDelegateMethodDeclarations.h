#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/FriendDataUpdateDelegate
struct FriendDataUpdateDelegate_t4874;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/FriendDataUpdateDelegate::.ctor(System.Object,System.IntPtr)
 void FriendDataUpdateDelegate__ctor_m34619 (FriendDataUpdateDelegate_t4874 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/FriendDataUpdateDelegate::Invoke()
 void FriendDataUpdateDelegate_Invoke_m34620 (FriendDataUpdateDelegate_t4874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/FriendDataUpdateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * FriendDataUpdateDelegate_BeginInvoke_m34621 (FriendDataUpdateDelegate_t4874 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/FriendDataUpdateDelegate::EndInvoke(System.IAsyncResult)
 void FriendDataUpdateDelegate_EndInvoke_m34622 (FriendDataUpdateDelegate_t4874 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
