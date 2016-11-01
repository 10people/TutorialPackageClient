#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/NearbyPlayerUpdateDelegate
struct NearbyPlayerUpdateDelegate_t4877;
// System.Object
struct Object_t;
// GC_NEAR_PLAYERLIST
struct GC_NEAR_PLAYERLIST_t2042;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/NearbyPlayerUpdateDelegate::.ctor(System.Object,System.IntPtr)
 void NearbyPlayerUpdateDelegate__ctor_m34631 (NearbyPlayerUpdateDelegate_t4877 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/NearbyPlayerUpdateDelegate::Invoke(GC_NEAR_PLAYERLIST)
 void NearbyPlayerUpdateDelegate_Invoke_m34632 (NearbyPlayerUpdateDelegate_t4877 * __this, GC_NEAR_PLAYERLIST_t2042 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/NearbyPlayerUpdateDelegate::BeginInvoke(GC_NEAR_PLAYERLIST,System.AsyncCallback,System.Object)
 Object_t * NearbyPlayerUpdateDelegate_BeginInvoke_m34633 (NearbyPlayerUpdateDelegate_t4877 * __this, GC_NEAR_PLAYERLIST_t2042 * ___packet, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/NearbyPlayerUpdateDelegate::EndInvoke(System.IAsyncResult)
 void NearbyPlayerUpdateDelegate_EndInvoke_m34634 (NearbyPlayerUpdateDelegate_t4877 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
