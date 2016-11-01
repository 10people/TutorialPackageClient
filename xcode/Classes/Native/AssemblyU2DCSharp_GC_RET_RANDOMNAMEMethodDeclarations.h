#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_RANDOMNAME
struct GC_RET_RANDOMNAME_t3344;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_RANDOMNAME::.ctor()
 void GC_RET_RANDOMNAME__ctor_m23927 (GC_RET_RANDOMNAME_t3344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_RANDOMNAME::get_namesList()
 Object_t* GC_RET_RANDOMNAME_get_namesList_m23928 (GC_RET_RANDOMNAME_t3344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANDOMNAME::get_namesCount()
 int32_t GC_RET_RANDOMNAME_get_namesCount_m23929 (GC_RET_RANDOMNAME_t3344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_RANDOMNAME::GetNames(System.Int32)
 String_t* GC_RET_RANDOMNAME_GetNames_m23930 (GC_RET_RANDOMNAME_t3344 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANDOMNAME::AddNames(System.String)
 void GC_RET_RANDOMNAME_AddNames_m23931 (GC_RET_RANDOMNAME_t3344 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANDOMNAME::SerializedSize()
 int32_t GC_RET_RANDOMNAME_SerializedSize_m23932 (GC_RET_RANDOMNAME_t3344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANDOMNAME::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_RANDOMNAME_WriteTo_m23933 (GC_RET_RANDOMNAME_t3344 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_RANDOMNAME::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_RANDOMNAME_MergeFrom_m23934 (GC_RET_RANDOMNAME_t3344 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_RANDOMNAME::IsInitialized()
 bool GC_RET_RANDOMNAME_IsInitialized_m23935 (GC_RET_RANDOMNAME_t3344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
