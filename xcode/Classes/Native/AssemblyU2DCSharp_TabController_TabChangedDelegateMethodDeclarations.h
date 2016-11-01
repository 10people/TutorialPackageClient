#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TabController/TabChangedDelegate
struct TabChangedDelegate_t1847;
// System.Object
struct Object_t;
// TabButton
struct TabButton_t1210;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void TabController/TabChangedDelegate::.ctor(System.Object,System.IntPtr)
 void TabChangedDelegate__ctor_m12204 (TabChangedDelegate_t1847 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TabController/TabChangedDelegate::Invoke(TabButton)
 void TabChangedDelegate_Invoke_m12205 (TabChangedDelegate_t1847 * __this, TabButton_t1210 * ___curButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult TabController/TabChangedDelegate::BeginInvoke(TabButton,System.AsyncCallback,System.Object)
 Object_t * TabChangedDelegate_BeginInvoke_m12206 (TabChangedDelegate_t1847 * __this, TabButton_t1210 * ___curButton, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TabController/TabChangedDelegate::EndInvoke(System.IAsyncResult)
 void TabChangedDelegate_EndInvoke_m12207 (TabChangedDelegate_t1847 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
