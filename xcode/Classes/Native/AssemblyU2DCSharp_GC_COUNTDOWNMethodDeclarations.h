#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_COUNTDOWN
struct GC_COUNTDOWN_t3132;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_COUNTDOWN::.ctor()
 void GC_COUNTDOWN__ctor_m20279 (GC_COUNTDOWN_t3132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COUNTDOWN::get_HasCountDownSecond()
 bool GC_COUNTDOWN_get_HasCountDownSecond_m20280 (GC_COUNTDOWN_t3132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COUNTDOWN::get_CountDownSecond()
 int32_t GC_COUNTDOWN_get_CountDownSecond_m20281 (GC_COUNTDOWN_t3132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COUNTDOWN::set_CountDownSecond(System.Int32)
 void GC_COUNTDOWN_set_CountDownSecond_m20282 (GC_COUNTDOWN_t3132 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COUNTDOWN::SetCountDownSecond(System.Int32)
 void GC_COUNTDOWN_SetCountDownSecond_m20283 (GC_COUNTDOWN_t3132 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COUNTDOWN::SerializedSize()
 int32_t GC_COUNTDOWN_SerializedSize_m20284 (GC_COUNTDOWN_t3132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COUNTDOWN::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_COUNTDOWN_WriteTo_m20285 (GC_COUNTDOWN_t3132 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_COUNTDOWN::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_COUNTDOWN_MergeFrom_m20286 (GC_COUNTDOWN_t3132 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COUNTDOWN::IsInitialized()
 bool GC_COUNTDOWN_IsInitialized_m20287 (GC_COUNTDOWN_t3132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
