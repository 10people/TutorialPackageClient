#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// EquipTooltipsLogic/VoidBuyDelegate
struct VoidBuyDelegate_t1398;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void EquipTooltipsLogic/VoidBuyDelegate::.ctor(System.Object,System.IntPtr)
 void VoidBuyDelegate__ctor_m8408 (VoidBuyDelegate_t1398 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic/VoidBuyDelegate::Invoke()
 void VoidBuyDelegate_Invoke_m8409 (VoidBuyDelegate_t1398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult EquipTooltipsLogic/VoidBuyDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * VoidBuyDelegate_BeginInvoke_m8410 (VoidBuyDelegate_t1398 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic/VoidBuyDelegate::EndInvoke(System.IAsyncResult)
 void VoidBuyDelegate_EndInvoke_m8411 (VoidBuyDelegate_t1398 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
