#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPacket.SocketInstance.SocketInputStream
struct SocketInputStream_t2206;
// SPacket.SocketInstance.SocketInstance
struct SocketInstance_t2204;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void SPacket.SocketInstance.SocketInputStream::.ctor(SPacket.SocketInstance.SocketInstance,System.UInt32,System.UInt32)
 void SocketInputStream__ctor_m31016 (SocketInputStream_t2206 * __this, SocketInstance_t2204 * ___socket, uint32_t ___BufferLen, uint32_t ___MaxBufferLen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.SocketInputStream::ClearBufferTemp()
 void SocketInputStream_ClearBufferTemp_m31017 (SocketInputStream_t2206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.SocketInstance.SocketInputStream::Length()
 uint32_t SocketInputStream_Length_m31018 (SocketInputStream_t2206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.SocketInstance.SocketInputStream::Read(System.Byte[],System.UInt32)
 uint32_t SocketInputStream_Read_m31019 (SocketInputStream_t2206 * __this, ByteU5BU5D_t1033* ___buf, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPacket.SocketInstance.SocketInputStream::Peek(System.Byte[],System.UInt32)
 bool SocketInputStream_Peek_m31020 (SocketInputStream_t2206 * __this, ByteU5BU5D_t1033* ___buf, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPacket.SocketInstance.SocketInputStream::Skip(System.UInt32)
 bool SocketInputStream_Skip_m31021 (SocketInputStream_t2206 * __this, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.SocketInstance.SocketInputStream::Fill()
 uint32_t SocketInputStream_Fill_m31022 (SocketInputStream_t2206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.SocketInputStream::Initsize(System.UInt32)
 void SocketInputStream_Initsize_m31023 (SocketInputStream_t2206 * __this, uint32_t ___BufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPacket.SocketInstance.SocketInputStream::Resize(System.UInt32)
 bool SocketInputStream_Resize_m31024 (SocketInputStream_t2206 * __this, uint32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.SocketInputStream::CleanUp()
 void SocketInputStream_CleanUp_m31025 (SocketInputStream_t2206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
