#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDraggablePanel/PanelDragDelegate
struct PanelDragDelegate_t5305;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDraggablePanel/PanelDragDelegate::.ctor(System.Object,System.IntPtr)
 void PanelDragDelegate__ctor_m37545 (PanelDragDelegate_t5305 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel/PanelDragDelegate::Invoke(UnityEngine.Vector2)
 void PanelDragDelegate_Invoke_m37546 (PanelDragDelegate_t5305 * __this, Vector2_t12  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIDraggablePanel/PanelDragDelegate::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
 Object_t * PanelDragDelegate_BeginInvoke_m37547 (PanelDragDelegate_t5305 * __this, Vector2_t12  ___offset, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel/PanelDragDelegate::EndInvoke(System.IAsyncResult)
 void PanelDragDelegate_EndInvoke_m37548 (PanelDragDelegate_t5305 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
