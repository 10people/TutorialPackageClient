#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_CHAT
struct GC_CHAT_t1292;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_CHAT::.ctor()
 void GC_CHAT__ctor_m18163 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasChattype()
 bool GC_CHAT_get_HasChattype_m18164 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_Chattype()
 int32_t GC_CHAT_get_Chattype_m18165 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_Chattype(System.Int32)
 void GC_CHAT_set_Chattype_m18166 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetChattype(System.Int32)
 void GC_CHAT_SetChattype_m18167 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasChatinfo()
 bool GC_CHAT_get_HasChatinfo_m18168 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_CHAT::get_Chatinfo()
 String_t* GC_CHAT_get_Chatinfo_m18169 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_Chatinfo(System.String)
 void GC_CHAT_set_Chatinfo_m18170 (GC_CHAT_t1292 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetChatinfo(System.String)
 void GC_CHAT_SetChatinfo_m18171 (GC_CHAT_t1292 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasSenderguid()
 bool GC_CHAT_get_HasSenderguid_m18172 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_CHAT::get_Senderguid()
 uint64_t GC_CHAT_get_Senderguid_m18173 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_Senderguid(System.UInt64)
 void GC_CHAT_set_Senderguid_m18174 (GC_CHAT_t1292 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetSenderguid(System.UInt64)
 void GC_CHAT_SetSenderguid_m18175 (GC_CHAT_t1292 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasSendername()
 bool GC_CHAT_get_HasSendername_m18176 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_CHAT::get_Sendername()
 String_t* GC_CHAT_get_Sendername_m18177 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_Sendername(System.String)
 void GC_CHAT_set_Sendername_m18178 (GC_CHAT_t1292 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetSendername(System.String)
 void GC_CHAT_SetSendername_m18179 (GC_CHAT_t1292 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasReceiverguid()
 bool GC_CHAT_get_HasReceiverguid_m18180 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_CHAT::get_Receiverguid()
 uint64_t GC_CHAT_get_Receiverguid_m18181 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_Receiverguid(System.UInt64)
 void GC_CHAT_set_Receiverguid_m18182 (GC_CHAT_t1292 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetReceiverguid(System.UInt64)
 void GC_CHAT_SetReceiverguid_m18183 (GC_CHAT_t1292 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasReceivername()
 bool GC_CHAT_get_HasReceivername_m18184 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_CHAT::get_Receivername()
 String_t* GC_CHAT_get_Receivername_m18185 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_Receivername(System.String)
 void GC_CHAT_set_Receivername_m18186 (GC_CHAT_t1292 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetReceivername(System.String)
 void GC_CHAT_SetReceivername_m18187 (GC_CHAT_t1292 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHAT::get_linktypeList()
 Object_t* GC_CHAT_get_linktypeList_m18188 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_linktypeCount()
 int32_t GC_CHAT_get_linktypeCount_m18189 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::GetLinktype(System.Int32)
 int32_t GC_CHAT_GetLinktype_m18190 (GC_CHAT_t1292 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::AddLinktype(System.Int32)
 void GC_CHAT_AddLinktype_m18191 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHAT::get_intdataList()
 Object_t* GC_CHAT_get_intdataList_m18192 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_intdataCount()
 int32_t GC_CHAT_get_intdataCount_m18193 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::GetIntdata(System.Int32)
 int32_t GC_CHAT_GetIntdata_m18194 (GC_CHAT_t1292 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::AddIntdata(System.Int32)
 void GC_CHAT_AddIntdata_m18195 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_CHAT::get_strdataList()
 Object_t* GC_CHAT_get_strdataList_m18196 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_strdataCount()
 int32_t GC_CHAT_get_strdataCount_m18197 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_CHAT::GetStrdata(System.Int32)
 String_t* GC_CHAT_GetStrdata_m18198 (GC_CHAT_t1292 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::AddStrdata(System.String)
 void GC_CHAT_AddStrdata_m18199 (GC_CHAT_t1292 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasSenderVIPLevel()
 bool GC_CHAT_get_HasSenderVIPLevel_m18200 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_SenderVIPLevel()
 int32_t GC_CHAT_get_SenderVIPLevel_m18201 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_SenderVIPLevel(System.Int32)
 void GC_CHAT_set_SenderVIPLevel_m18202 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetSenderVIPLevel(System.Int32)
 void GC_CHAT_SetSenderVIPLevel_m18203 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasReceiverVIPLevel()
 bool GC_CHAT_get_HasReceiverVIPLevel_m18204 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_ReceiverVIPLevel()
 int32_t GC_CHAT_get_ReceiverVIPLevel_m18205 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_ReceiverVIPLevel(System.Int32)
 void GC_CHAT_set_ReceiverVIPLevel_m18206 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetReceiverVIPLevel(System.Int32)
 void GC_CHAT_SetReceiverVIPLevel_m18207 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasVoiceChatIndex()
 bool GC_CHAT_get_HasVoiceChatIndex_m18208 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_VoiceChatIndex()
 int32_t GC_CHAT_get_VoiceChatIndex_m18209 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_VoiceChatIndex(System.Int32)
 void GC_CHAT_set_VoiceChatIndex_m18210 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetVoiceChatIndex(System.Int32)
 void GC_CHAT_SetVoiceChatIndex_m18211 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasAnoymousState()
 bool GC_CHAT_get_HasAnoymousState_m18212 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_AnoymousState()
 int32_t GC_CHAT_get_AnoymousState_m18213 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_AnoymousState(System.Int32)
 void GC_CHAT_set_AnoymousState_m18214 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetAnoymousState(System.Int32)
 void GC_CHAT_SetAnoymousState_m18215 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasSenderLevel()
 bool GC_CHAT_get_HasSenderLevel_m18216 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_SenderLevel()
 int32_t GC_CHAT_get_SenderLevel_m18217 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_SenderLevel(System.Int32)
 void GC_CHAT_set_SenderLevel_m18218 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetSenderLevel(System.Int32)
 void GC_CHAT_SetSenderLevel_m18219 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::get_HasSenderProfession()
 bool GC_CHAT_get_HasSenderProfession_m18220 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::get_SenderProfession()
 int32_t GC_CHAT_get_SenderProfession_m18221 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::set_SenderProfession(System.Int32)
 void GC_CHAT_set_SenderProfession_m18222 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::SetSenderProfession(System.Int32)
 void GC_CHAT_SetSenderProfession_m18223 (GC_CHAT_t1292 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHAT::SerializedSize()
 int32_t GC_CHAT_SerializedSize_m18224 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHAT::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_CHAT_WriteTo_m18225 (GC_CHAT_t1292 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_CHAT::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_CHAT_MergeFrom_m18226 (GC_CHAT_t1292 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHAT::IsInitialized()
 bool GC_CHAT_IsInitialized_m18227 (GC_CHAT_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
