#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPacket.SocketInstance.SocketOutputStream
struct SocketOutputStream_t2207;
// SPacket.SocketInstance.SocketInstance
struct SocketInstance_t2204;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void SPacket.SocketInstance.SocketOutputStream::.ctor(SPacket.SocketInstance.SocketInstance,System.UInt32,System.UInt32)
 void SocketOutputStream__ctor_m31026 (SocketOutputStream_t2207 * __this, SocketInstance_t2204 * ___sock, uint32_t ___BufferLen, uint32_t ___MaxBufferLen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.SocketOutputStream::ClearBufferTemp()
 void SocketOutputStream_ClearBufferTemp_m31027 (SocketOutputStream_t2207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.SocketInstance.SocketOutputStream::Write(System.Byte[],System.UInt32)
 uint32_t SocketOutputStream_Write_m31028 (SocketOutputStream_t2207 * __this, ByteU5BU5D_t1033* ___buf, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.SocketInstance.SocketOutputStream::Flush()
 uint32_t SocketOutputStream_Flush_m31029 (SocketOutputStream_t2207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.SocketOutputStream::Initsize(System.UInt32)
 void SocketOutputStream_Initsize_m31030 (SocketOutputStream_t2207 * __this, uint32_t ___BufferLen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPacket.SocketInstance.SocketOutputStream::Resize(System.UInt32)
 bool SocketOutputStream_Resize_m31031 (SocketOutputStream_t2207 * __this, uint32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.SocketInstance.SocketOutputStream::Length()
 uint32_t SocketOutputStream_Length_m31032 (SocketOutputStream_t2207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.SocketOutputStream::CleanUp()
 void SocketOutputStream_CleanUp_m31033 (SocketOutputStream_t2207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
