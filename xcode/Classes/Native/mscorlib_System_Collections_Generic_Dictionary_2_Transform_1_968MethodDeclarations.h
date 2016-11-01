#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.Generic.KeyValuePair`2<MessageID,SPacket.SocketInstance.Ipacket>>
struct Transform_1_t20567;
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
// System.Collections.Generic.KeyValuePair`2<MessageID,SPacket.SocketInstance.Ipacket>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_257.h"
// MessageID
#include "AssemblyU2DCSharp_MessageID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.Generic.KeyValuePair`2<MessageID,SPacket.SocketInstance.Ipacket>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m149925 (Transform_1_t20567 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.Generic.KeyValuePair`2<MessageID,SPacket.SocketInstance.Ipacket>>::Invoke(TKey,TValue)
 KeyValuePair_2_t20556  Transform_1_Invoke_m149926 (Transform_1_t20567 * __this, uint16_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.Generic.KeyValuePair`2<MessageID,SPacket.SocketInstance.Ipacket>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m149927 (Transform_1_t20567 * __this, uint16_t ___key, Object_t * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.Generic.KeyValuePair`2<MessageID,SPacket.SocketInstance.Ipacket>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t20556  Transform_1_EndInvoke_m149928 (Transform_1_t20567 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
