#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/PlayerFindResultDelegate
struct PlayerFindResultDelegate_t4875;
// System.Object
struct Object_t;
// GC_FINDPLAYER
struct GC_FINDPLAYER_t2029;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/PlayerFindResultDelegate::.ctor(System.Object,System.IntPtr)
 void PlayerFindResultDelegate__ctor_m34623 (PlayerFindResultDelegate_t4875 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/PlayerFindResultDelegate::Invoke(GC_FINDPLAYER)
 void PlayerFindResultDelegate_Invoke_m34624 (PlayerFindResultDelegate_t4875 * __this, GC_FINDPLAYER_t2029 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/PlayerFindResultDelegate::BeginInvoke(GC_FINDPLAYER,System.AsyncCallback,System.Object)
 Object_t * PlayerFindResultDelegate_BeginInvoke_m34625 (PlayerFindResultDelegate_t4875 * __this, GC_FINDPLAYER_t2029 * ___packet, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/PlayerFindResultDelegate::EndInvoke(System.IAsyncResult)
 void PlayerFindResultDelegate_EndInvoke_m34626 (PlayerFindResultDelegate_t4875 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
