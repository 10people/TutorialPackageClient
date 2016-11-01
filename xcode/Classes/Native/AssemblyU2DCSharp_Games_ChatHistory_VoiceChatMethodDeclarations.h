#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.ChatHistory.VoiceChat
struct VoiceChat_t4561;
struct VoiceChat_t4561_marshaled;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void Games.ChatHistory.VoiceChat::.ctor(System.Int32,System.Byte[])
 void VoiceChat__ctor_m32785 (VoiceChat_t4561 * __this, int32_t ___index, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ChatHistory.VoiceChat::get_VoiceIndex()
 int32_t VoiceChat_get_VoiceIndex_m32786 (VoiceChat_t4561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChat::set_VoiceIndex(System.Int32)
 void VoiceChat_set_VoiceIndex_m32787 (VoiceChat_t4561 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Games.ChatHistory.VoiceChat::get_VoiceBuffer()
 ByteU5BU5D_t1033* VoiceChat_get_VoiceBuffer_m32788 (VoiceChat_t4561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChat::set_VoiceBuffer(System.Byte[])
 void VoiceChat_set_VoiceBuffer_m32789 (VoiceChat_t4561 * __this, ByteU5BU5D_t1033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void VoiceChat_t4561_marshal(const VoiceChat_t4561& unmarshaled, VoiceChat_t4561_marshaled& marshaled);
void VoiceChat_t4561_marshal_back(const VoiceChat_t4561_marshaled& marshaled, VoiceChat_t4561& unmarshaled);
void VoiceChat_t4561_marshal_cleanup(VoiceChat_t4561_marshaled& marshaled);
