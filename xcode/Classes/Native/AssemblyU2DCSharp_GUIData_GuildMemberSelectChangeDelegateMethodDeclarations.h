#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/GuildMemberSelectChangeDelegate
struct GuildMemberSelectChangeDelegate_t4881;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/GuildMemberSelectChangeDelegate::.ctor(System.Object,System.IntPtr)
 void GuildMemberSelectChangeDelegate__ctor_m34647 (GuildMemberSelectChangeDelegate_t4881 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/GuildMemberSelectChangeDelegate::Invoke(System.UInt64)
 void GuildMemberSelectChangeDelegate_Invoke_m34648 (GuildMemberSelectChangeDelegate_t4881 * __this, uint64_t ___selectGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/GuildMemberSelectChangeDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
 Object_t * GuildMemberSelectChangeDelegate_BeginInvoke_m34649 (GuildMemberSelectChangeDelegate_t4881 * __this, uint64_t ___selectGuid, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/GuildMemberSelectChangeDelegate::EndInvoke(System.IAsyncResult)
 void GuildMemberSelectChangeDelegate_EndInvoke_m34650 (GuildMemberSelectChangeDelegate_t4881 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
