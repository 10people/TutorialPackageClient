#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.DictionaryEntry>
struct Transform_1_t20550;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// MessageID
#include "AssemblyU2DCSharp_MessageID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m149921 (Transform_1_t20550 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1066  Transform_1_Invoke_m149922 (Transform_1_t20550 * __this, uint16_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m149923 (Transform_1_t20550 * __this, uint16_t ___key, Object_t * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1066  Transform_1_EndInvoke_m149924 (Transform_1_t20550 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
