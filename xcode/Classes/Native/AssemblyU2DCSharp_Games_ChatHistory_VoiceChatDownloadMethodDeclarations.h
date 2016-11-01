#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.ChatHistory.VoiceChatDownload
struct VoiceChatDownload_t4563;
// System.Collections.Generic.List`1<Games.ChatHistory.VoiceChat>
struct List_1_t4562;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;

// System.Void Games.ChatHistory.VoiceChatDownload::.ctor()
 void VoiceChatDownload__ctor_m32790 (VoiceChatDownload_t4563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::CleanUp()
 void VoiceChatDownload_CleanUp_m32791 (VoiceChatDownload_t4563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.VoiceChatDownload::IsHaveVoice(System.Int32)
 bool VoiceChatDownload_IsHaveVoice_m32792 (VoiceChatDownload_t4563 * __this, int32_t ___voiceindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.VoiceChatDownload::IsHaveDownload(System.Int32)
 bool VoiceChatDownload_IsHaveDownload_m32793 (VoiceChatDownload_t4563 * __this, int32_t ___voiceindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::ReqDownload(System.Int32,System.UInt64,System.Boolean)
 void VoiceChatDownload_ReqDownload_m32794 (VoiceChatDownload_t4563 * __this, int32_t ___voiceindex, uint64_t ___senderguid, bool ___isClick, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.VoiceChatDownload::Add(System.Int32,System.Byte[])
 bool VoiceChatDownload_Add_m32795 (VoiceChatDownload_t4563 * __this, int32_t ___voiceindex, ByteU5BU5D_t1033* ___voicebuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.VoiceChatDownload::Add(System.Int32,Google.ProtocolBuffers.ByteString)
 bool VoiceChatDownload_Add_m32796 (VoiceChatDownload_t4563 * __this, int32_t ___voiceindex, ByteString_t3022 * ___voicebuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::ForcePlay(System.Int32)
 void VoiceChatDownload_ForcePlay_m32797 (VoiceChatDownload_t4563 * __this, int32_t ___voiceindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::PlayInPlayerDownload(System.Int32)
 void VoiceChatDownload_PlayInPlayerDownload_m32798 (VoiceChatDownload_t4563 * __this, int32_t ___voiceindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::OnPlayRecordOver()
 void VoiceChatDownload_OnPlayRecordOver_m32799 (VoiceChatDownload_t4563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::PlayNextVoice()
 void VoiceChatDownload_PlayNextVoice_m32800 (VoiceChatDownload_t4563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::DelVoice(System.Int32)
 void VoiceChatDownload_DelVoice_m32801 (VoiceChatDownload_t4563 * __this, int32_t ___voiceindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.ChatHistory.VoiceChat> Games.ChatHistory.VoiceChatDownload::get_Record()
 List_1_t4562 * VoiceChatDownload_get_Record_m32802 (VoiceChatDownload_t4563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::set_Record(System.Collections.Generic.List`1<Games.ChatHistory.VoiceChat>)
 void VoiceChatDownload_set_Record_m32803 (VoiceChatDownload_t4563 * __this, List_1_t4562 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ChatHistory.VoiceChatDownload::get_ForcePlayIndex()
 int32_t VoiceChatDownload_get_ForcePlayIndex_m32804 (VoiceChatDownload_t4563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::set_ForcePlayIndex(System.Int32)
 void VoiceChatDownload_set_ForcePlayIndex_m32805 (VoiceChatDownload_t4563 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ChatHistory.VoiceChatDownload::get_PlayingVoiceIndex()
 int32_t VoiceChatDownload_get_PlayingVoiceIndex_m32806 (VoiceChatDownload_t4563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::set_PlayingVoiceIndex(System.Int32)
 void VoiceChatDownload_set_PlayingVoiceIndex_m32807 (VoiceChatDownload_t4563 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.ChatHistory.VoiceChat> Games.ChatHistory.VoiceChatDownload::get_PlayerDownload()
 List_1_t4562 * VoiceChatDownload_get_PlayerDownload_m32808 (VoiceChatDownload_t4563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.VoiceChatDownload::set_PlayerDownload(System.Collections.Generic.List`1<Games.ChatHistory.VoiceChat>)
 void VoiceChatDownload_set_PlayerDownload_m32809 (VoiceChatDownload_t4563 * __this, List_1_t4562 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
