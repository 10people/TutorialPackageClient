#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_REQUEST_CDKEY
struct CG_REQUEST_CDKEY_t3382;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_REQUEST_CDKEY::.ctor()
 void CG_REQUEST_CDKEY__ctor_m24434 (CG_REQUEST_CDKEY_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQUEST_CDKEY::get_HasCdkeystr()
 bool CG_REQUEST_CDKEY_get_HasCdkeystr_m24435 (CG_REQUEST_CDKEY_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_REQUEST_CDKEY::get_Cdkeystr()
 String_t* CG_REQUEST_CDKEY_get_Cdkeystr_m24436 (CG_REQUEST_CDKEY_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQUEST_CDKEY::set_Cdkeystr(System.String)
 void CG_REQUEST_CDKEY_set_Cdkeystr_m24437 (CG_REQUEST_CDKEY_t3382 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQUEST_CDKEY::SetCdkeystr(System.String)
 void CG_REQUEST_CDKEY_SetCdkeystr_m24438 (CG_REQUEST_CDKEY_t3382 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_REQUEST_CDKEY::SerializedSize()
 int32_t CG_REQUEST_CDKEY_SerializedSize_m24439 (CG_REQUEST_CDKEY_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQUEST_CDKEY::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_REQUEST_CDKEY_WriteTo_m24440 (CG_REQUEST_CDKEY_t3382 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_REQUEST_CDKEY::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_REQUEST_CDKEY_MergeFrom_m24441 (CG_REQUEST_CDKEY_t3382 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQUEST_CDKEY::IsInitialized()
 bool CG_REQUEST_CDKEY_IsInitialized_m24442 (CG_REQUEST_CDKEY_t3382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
