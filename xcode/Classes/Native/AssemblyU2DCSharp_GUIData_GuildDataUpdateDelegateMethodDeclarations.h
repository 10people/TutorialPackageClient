#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/GuildDataUpdateDelegate
struct GuildDataUpdateDelegate_t4880;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/GuildDataUpdateDelegate::.ctor(System.Object,System.IntPtr)
 void GuildDataUpdateDelegate__ctor_m34643 (GuildDataUpdateDelegate_t4880 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/GuildDataUpdateDelegate::Invoke()
 void GuildDataUpdateDelegate_Invoke_m34644 (GuildDataUpdateDelegate_t4880 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/GuildDataUpdateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * GuildDataUpdateDelegate_BeginInvoke_m34645 (GuildDataUpdateDelegate_t4880 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/GuildDataUpdateDelegate::EndInvoke(System.IAsyncResult)
 void GuildDataUpdateDelegate_EndInvoke_m34646 (GuildDataUpdateDelegate_t4880 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
