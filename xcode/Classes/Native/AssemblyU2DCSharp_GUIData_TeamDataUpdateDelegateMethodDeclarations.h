#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/TeamDataUpdateDelegate
struct TeamDataUpdateDelegate_t4878;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/TeamDataUpdateDelegate::.ctor(System.Object,System.IntPtr)
 void TeamDataUpdateDelegate__ctor_m34635 (TeamDataUpdateDelegate_t4878 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/TeamDataUpdateDelegate::Invoke()
 void TeamDataUpdateDelegate_Invoke_m34636 (TeamDataUpdateDelegate_t4878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/TeamDataUpdateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * TeamDataUpdateDelegate_BeginInvoke_m34637 (TeamDataUpdateDelegate_t4878 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/TeamDataUpdateDelegate::EndInvoke(System.IAsyncResult)
 void TeamDataUpdateDelegate_EndInvoke_m34638 (TeamDataUpdateDelegate_t4878 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
