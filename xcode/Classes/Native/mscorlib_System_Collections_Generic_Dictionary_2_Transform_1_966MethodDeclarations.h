#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,SPacket.SocketInstance.Ipacket>
struct Transform_1_t20566;
// System.Object
struct Object_t;
// SPacket.SocketInstance.Ipacket
struct Ipacket_t2528;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// MessageID
#include "AssemblyU2DCSharp_MessageID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,SPacket.SocketInstance.Ipacket>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m149917 (Transform_1_t20566 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,SPacket.SocketInstance.Ipacket>::Invoke(TKey,TValue)
 Object_t * Transform_1_Invoke_m149918 (Transform_1_t20566 * __this, uint16_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,SPacket.SocketInstance.Ipacket>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m149919 (Transform_1_t20566 * __this, uint16_t ___key, Object_t * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,SPacket.SocketInstance.Ipacket>::EndInvoke(System.IAsyncResult)
 Object_t * Transform_1_EndInvoke_m149920 (Transform_1_t20566 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
