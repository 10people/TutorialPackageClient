#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_CHAT
struct CG_CHAT_t1173;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_CHAT::.ctor()
 void CG_CHAT__ctor_m18110 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasChattype()
 bool CG_CHAT_get_HasChattype_m18111 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_CHAT::get_Chattype()
 int32_t CG_CHAT_get_Chattype_m18112 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_Chattype(System.Int32)
 void CG_CHAT_set_Chattype_m18113 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetChattype(System.Int32)
 void CG_CHAT_SetChattype_m18114 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasChatinfo()
 bool CG_CHAT_get_HasChatinfo_m18115 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_CHAT::get_Chatinfo()
 String_t* CG_CHAT_get_Chatinfo_m18116 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_Chatinfo(System.String)
 void CG_CHAT_set_Chatinfo_m18117 (CG_CHAT_t1173 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetChatinfo(System.String)
 void CG_CHAT_SetChatinfo_m18118 (CG_CHAT_t1173 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasReceiverguid()
 bool CG_CHAT_get_HasReceiverguid_m18119 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_CHAT::get_Receiverguid()
 uint64_t CG_CHAT_get_Receiverguid_m18120 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_Receiverguid(System.UInt64)
 void CG_CHAT_set_Receiverguid_m18121 (CG_CHAT_t1173 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetReceiverguid(System.UInt64)
 void CG_CHAT_SetReceiverguid_m18122 (CG_CHAT_t1173 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasReceivername()
 bool CG_CHAT_get_HasReceivername_m18123 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_CHAT::get_Receivername()
 String_t* CG_CHAT_get_Receivername_m18124 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_Receivername(System.String)
 void CG_CHAT_set_Receivername_m18125 (CG_CHAT_t1173 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetReceivername(System.String)
 void CG_CHAT_SetReceivername_m18126 (CG_CHAT_t1173 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasLinktype()
 bool CG_CHAT_get_HasLinktype_m18127 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_CHAT::get_Linktype()
 int32_t CG_CHAT_get_Linktype_m18128 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_Linktype(System.Int32)
 void CG_CHAT_set_Linktype_m18129 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetLinktype(System.Int32)
 void CG_CHAT_SetLinktype_m18130 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> CG_CHAT::get_intdataList()
 Object_t* CG_CHAT_get_intdataList_m18131 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_CHAT::get_intdataCount()
 int32_t CG_CHAT_get_intdataCount_m18132 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_CHAT::GetIntdata(System.Int32)
 int32_t CG_CHAT_GetIntdata_m18133 (CG_CHAT_t1173 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::AddIntdata(System.Int32)
 void CG_CHAT_AddIntdata_m18134 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> CG_CHAT::get_strdataList()
 Object_t* CG_CHAT_get_strdataList_m18135 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_CHAT::get_strdataCount()
 int32_t CG_CHAT_get_strdataCount_m18136 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_CHAT::GetStrdata(System.Int32)
 String_t* CG_CHAT_GetStrdata_m18137 (CG_CHAT_t1173 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::AddStrdata(System.String)
 void CG_CHAT_AddStrdata_m18138 (CG_CHAT_t1173 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasLoudSpeakerNum()
 bool CG_CHAT_get_HasLoudSpeakerNum_m18139 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_CHAT::get_LoudSpeakerNum()
 int32_t CG_CHAT_get_LoudSpeakerNum_m18140 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_LoudSpeakerNum(System.Int32)
 void CG_CHAT_set_LoudSpeakerNum_m18141 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetLoudSpeakerNum(System.Int32)
 void CG_CHAT_SetLoudSpeakerNum_m18142 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasVoiceChat()
 bool CG_CHAT_get_HasVoiceChat_m18143 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString CG_CHAT::get_VoiceChat()
 ByteString_t3022 * CG_CHAT_get_VoiceChat_m18144 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_VoiceChat(Google.ProtocolBuffers.ByteString)
 void CG_CHAT_set_VoiceChat_m18145 (CG_CHAT_t1173 * __this, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetVoiceChat(Google.ProtocolBuffers.ByteString)
 void CG_CHAT_SetVoiceChat_m18146 (CG_CHAT_t1173 * __this, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasIsYaoHe()
 bool CG_CHAT_get_HasIsYaoHe_m18147 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_CHAT::get_IsYaoHe()
 int32_t CG_CHAT_get_IsYaoHe_m18148 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_IsYaoHe(System.Int32)
 void CG_CHAT_set_IsYaoHe_m18149 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetIsYaoHe(System.Int32)
 void CG_CHAT_SetIsYaoHe_m18150 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasAnoymousState()
 bool CG_CHAT_get_HasAnoymousState_m18151 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_CHAT::get_AnoymousState()
 int32_t CG_CHAT_get_AnoymousState_m18152 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_AnoymousState(System.Int32)
 void CG_CHAT_set_AnoymousState_m18153 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetAnoymousState(System.Int32)
 void CG_CHAT_SetAnoymousState_m18154 (CG_CHAT_t1173 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::get_HasFellowguid()
 bool CG_CHAT_get_HasFellowguid_m18155 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_CHAT::get_Fellowguid()
 uint64_t CG_CHAT_get_Fellowguid_m18156 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::set_Fellowguid(System.UInt64)
 void CG_CHAT_set_Fellowguid_m18157 (CG_CHAT_t1173 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::SetFellowguid(System.UInt64)
 void CG_CHAT_SetFellowguid_m18158 (CG_CHAT_t1173 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_CHAT::SerializedSize()
 int32_t CG_CHAT_SerializedSize_m18159 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_CHAT::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_CHAT_WriteTo_m18160 (CG_CHAT_t1173 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_CHAT::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_CHAT_MergeFrom_m18161 (CG_CHAT_t1173 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_CHAT::IsInitialized()
 bool CG_CHAT_IsInitialized_m18162 (CG_CHAT_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
