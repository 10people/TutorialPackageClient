#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityOSC.PacketReceivedEventHandler
struct PacketReceivedEventHandler_t5449;
// System.Object
struct Object_t;
// UnityOSC.OSCServer
struct OSCServer_t4440;
// UnityOSC.OSCPacket
struct OSCPacket_t4437;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityOSC.PacketReceivedEventHandler::.ctor(System.Object,System.IntPtr)
 void PacketReceivedEventHandler__ctor_m38643 (PacketReceivedEventHandler_t5449 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityOSC.PacketReceivedEventHandler::Invoke(UnityOSC.OSCServer,UnityOSC.OSCPacket)
 void PacketReceivedEventHandler_Invoke_m38644 (PacketReceivedEventHandler_t5449 * __this, OSCServer_t4440 * ___sender, OSCPacket_t4437 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityOSC.PacketReceivedEventHandler::BeginInvoke(UnityOSC.OSCServer,UnityOSC.OSCPacket,System.AsyncCallback,System.Object)
 Object_t * PacketReceivedEventHandler_BeginInvoke_m38645 (PacketReceivedEventHandler_t5449 * __this, OSCServer_t4440 * ___sender, OSCPacket_t4437 * ___packet, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityOSC.PacketReceivedEventHandler::EndInvoke(System.IAsyncResult)
 void PacketReceivedEventHandler_EndInvoke_m38646 (PacketReceivedEventHandler_t5449 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
