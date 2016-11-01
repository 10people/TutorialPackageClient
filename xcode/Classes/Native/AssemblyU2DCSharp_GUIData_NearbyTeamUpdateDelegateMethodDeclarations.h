#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/NearbyTeamUpdateDelegate
struct NearbyTeamUpdateDelegate_t4876;
// System.Object
struct Object_t;
// GC_NEAR_TEAMLIST
struct GC_NEAR_TEAMLIST_t2041;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/NearbyTeamUpdateDelegate::.ctor(System.Object,System.IntPtr)
 void NearbyTeamUpdateDelegate__ctor_m34627 (NearbyTeamUpdateDelegate_t4876 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/NearbyTeamUpdateDelegate::Invoke(GC_NEAR_TEAMLIST)
 void NearbyTeamUpdateDelegate_Invoke_m34628 (NearbyTeamUpdateDelegate_t4876 * __this, GC_NEAR_TEAMLIST_t2041 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/NearbyTeamUpdateDelegate::BeginInvoke(GC_NEAR_TEAMLIST,System.AsyncCallback,System.Object)
 Object_t * NearbyTeamUpdateDelegate_BeginInvoke_m34629 (NearbyTeamUpdateDelegate_t4876 * __this, GC_NEAR_TEAMLIST_t2041 * ___packet, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/NearbyTeamUpdateDelegate::EndInvoke(System.IAsyncResult)
 void NearbyTeamUpdateDelegate_EndInvoke_m34630 (NearbyTeamUpdateDelegate_t4876 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
