#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.SerializableTable
struct SerializableTable_t334;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t333;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GCGame.Table.SerializableTable::.ctor(System.Object,System.IntPtr)
 void SerializableTable__ctor_m4036 (SerializableTable_t334 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.SerializableTable::Invoke(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void SerializableTable_Invoke_m4037 (SerializableTable_t334 * __this, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GCGame.Table.SerializableTable::BeginInvoke(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>,System.AsyncCallback,System.Object)
 Object_t * SerializableTable_BeginInvoke_m4038 (SerializableTable_t334 * __this, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.SerializableTable::EndInvoke(System.IAsyncResult)
 void SerializableTable_EndInvoke_m4039 (SerializableTable_t334 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
