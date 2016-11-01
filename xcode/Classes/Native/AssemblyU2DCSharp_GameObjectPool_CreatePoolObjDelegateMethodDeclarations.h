#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameObjectPool/CreatePoolObjDelegate
struct CreatePoolObjDelegate_t2183;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GameObjectPool/CreatePoolObjDelegate::.ctor(System.Object,System.IntPtr)
 void CreatePoolObjDelegate__ctor_m14642 (CreatePoolObjDelegate_t2183 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool/CreatePoolObjDelegate::Invoke(UnityEngine.GameObject,System.Object,System.Object)
 void CreatePoolObjDelegate_Invoke_m14643 (CreatePoolObjDelegate_t2183 * __this, GameObject_t9 * ___newObj, Object_t * ___param1, Object_t * ___param2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GameObjectPool/CreatePoolObjDelegate::BeginInvoke(UnityEngine.GameObject,System.Object,System.Object,System.AsyncCallback,System.Object)
 Object_t * CreatePoolObjDelegate_BeginInvoke_m14644 (CreatePoolObjDelegate_t2183 * __this, GameObject_t9 * ___newObj, Object_t * ___param1, Object_t * ___param2, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool/CreatePoolObjDelegate::EndInvoke(System.IAsyncResult)
 void CreatePoolObjDelegate_EndInvoke_m14645 (CreatePoolObjDelegate_t2183 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
