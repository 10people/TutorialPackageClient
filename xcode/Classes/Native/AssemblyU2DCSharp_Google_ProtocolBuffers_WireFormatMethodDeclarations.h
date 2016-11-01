#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Google.ProtocolBuffers.WireFormat
struct WireFormat_t4369;
// Google.ProtocolBuffers.WireFormat/WireType
#include "AssemblyU2DCSharp_Google_ProtocolBuffers_WireFormat_WireType.h"

// Google.ProtocolBuffers.WireFormat/WireType Google.ProtocolBuffers.WireFormat::GetTagWireType(System.UInt32)
 uint32_t WireFormat_GetTagWireType_m30987 (Object_t * __this/* static, unused */, uint32_t ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.WireFormat::IsEndGroupTag(System.UInt32)
 bool WireFormat_IsEndGroupTag_m30988 (Object_t * __this/* static, unused */, uint32_t ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.WireFormat::GetTagFieldNumber(System.UInt32)
 int32_t WireFormat_GetTagFieldNumber_m30989 (Object_t * __this/* static, unused */, uint32_t ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.WireFormat::MakeTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
 uint32_t WireFormat_MakeTag_m30990 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, uint32_t ___wireType, MethodInfo* method) IL2CPP_METHOD_ATTR;
