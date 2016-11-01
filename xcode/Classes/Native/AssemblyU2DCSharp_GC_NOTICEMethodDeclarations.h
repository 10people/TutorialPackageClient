#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_NOTICE
struct GC_NOTICE_t2931;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_NOTICE::.ctor()
 void GC_NOTICE__ctor_m16341 (GC_NOTICE_t2931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_NOTICE::get_HasNotice()
 bool GC_NOTICE_get_HasNotice_m16342 (GC_NOTICE_t2931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_NOTICE::get_Notice()
 String_t* GC_NOTICE_get_Notice_m16343 (GC_NOTICE_t2931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NOTICE::set_Notice(System.String)
 void GC_NOTICE_set_Notice_m16344 (GC_NOTICE_t2931 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NOTICE::SetNotice(System.String)
 void GC_NOTICE_SetNotice_m16345 (GC_NOTICE_t2931 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_NOTICE::get_HasFilterRepeat()
 bool GC_NOTICE_get_HasFilterRepeat_m16346 (GC_NOTICE_t2931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NOTICE::get_FilterRepeat()
 int32_t GC_NOTICE_get_FilterRepeat_m16347 (GC_NOTICE_t2931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NOTICE::set_FilterRepeat(System.Int32)
 void GC_NOTICE_set_FilterRepeat_m16348 (GC_NOTICE_t2931 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NOTICE::SetFilterRepeat(System.Int32)
 void GC_NOTICE_SetFilterRepeat_m16349 (GC_NOTICE_t2931 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NOTICE::SerializedSize()
 int32_t GC_NOTICE_SerializedSize_m16350 (GC_NOTICE_t2931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NOTICE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_NOTICE_WriteTo_m16351 (GC_NOTICE_t2931 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_NOTICE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_NOTICE_MergeFrom_m16352 (GC_NOTICE_t2931 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_NOTICE::IsInitialized()
 bool GC_NOTICE_IsInitialized_m16353 (GC_NOTICE_t2931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
