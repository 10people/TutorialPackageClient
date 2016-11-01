#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.ChatHistory.LastSpeaker
struct LastSpeaker_t4558;
struct LastSpeaker_t4558_marshaled;
// System.String
struct String_t;

// System.Void Games.ChatHistory.LastSpeaker::CleanUp()
 void LastSpeaker_CleanUp_m32773 (LastSpeaker_t4558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.LastSpeaker::IsValid()
 bool LastSpeaker_IsValid_m32774 (LastSpeaker_t4558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Games.ChatHistory.LastSpeaker::get_Guid()
 uint64_t LastSpeaker_get_Guid_m32775 (LastSpeaker_t4558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.LastSpeaker::set_Guid(System.UInt64)
 void LastSpeaker_set_Guid_m32776 (LastSpeaker_t4558 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.ChatHistory.LastSpeaker::get_Name()
 String_t* LastSpeaker_get_Name_m32777 (LastSpeaker_t4558 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.LastSpeaker::set_Name(System.String)
 void LastSpeaker_set_Name_m32778 (LastSpeaker_t4558 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void LastSpeaker_t4558_marshal(const LastSpeaker_t4558& unmarshaled, LastSpeaker_t4558_marshaled& marshaled);
void LastSpeaker_t4558_marshal_back(const LastSpeaker_t4558_marshaled& marshaled, LastSpeaker_t4558& unmarshaled);
void LastSpeaker_t4558_marshal_cleanup(LastSpeaker_t4558_marshaled& marshaled);
