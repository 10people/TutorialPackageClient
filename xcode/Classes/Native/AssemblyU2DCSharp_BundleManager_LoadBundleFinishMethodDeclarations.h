#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BundleManager/LoadBundleFinish
struct LoadBundleFinish_t2146;
// System.Object
struct Object_t;
// UIPathData
struct UIPathData_t1177;
// UnityEngine.GameObject
struct GameObject_t9;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BundleManager/LoadBundleFinish::.ctor(System.Object,System.IntPtr)
 void LoadBundleFinish__ctor_m14469 (LoadBundleFinish_t2146 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadBundleFinish::Invoke(UIPathData,UnityEngine.GameObject,System.Object,System.Object)
 void LoadBundleFinish_Invoke_m14470 (LoadBundleFinish_t2146 * __this, UIPathData_t1177 * ___uiData, GameObject_t9 * ___retObj, Object_t * ___param1, Object_t * ___param2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BundleManager/LoadBundleFinish::BeginInvoke(UIPathData,UnityEngine.GameObject,System.Object,System.Object,System.AsyncCallback,System.Object)
 Object_t * LoadBundleFinish_BeginInvoke_m14471 (LoadBundleFinish_t2146 * __this, UIPathData_t1177 * ___uiData, GameObject_t9 * ___retObj, Object_t * ___param1, Object_t * ___param2, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadBundleFinish::EndInvoke(System.IAsyncResult)
 void LoadBundleFinish_EndInvoke_m14472 (LoadBundleFinish_t2146 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
