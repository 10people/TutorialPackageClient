#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ItemSlotLogic/OnClick
struct OnClick_t1493;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"

// System.Void ItemSlotLogic/OnClick::.ctor(System.Object,System.IntPtr)
 void OnClick__ctor_m9071 (OnClick_t1493 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic/OnClick::Invoke(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void OnClick_Invoke_m9072 (OnClick_t1493 * __this, int32_t ___nItemID, int32_t ___eItemType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ItemSlotLogic/OnClick::BeginInvoke(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String,System.AsyncCallback,System.Object)
 Object_t * OnClick_BeginInvoke_m9073 (OnClick_t1493 * __this, int32_t ___nItemID, int32_t ___eItemType, String_t* ___strSlotName, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic/OnClick::EndInvoke(System.IAsyncResult)
 void OnClick_EndInvoke_m9074 (OnClick_t1493 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
