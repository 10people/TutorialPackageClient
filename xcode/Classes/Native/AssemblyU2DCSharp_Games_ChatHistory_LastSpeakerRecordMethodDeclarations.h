#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.ChatHistory.LastSpeakerRecord
struct LastSpeakerRecord_t4560;
// System.Collections.Generic.List`1<Games.ChatHistory.LastSpeaker>
struct List_1_t4559;
// System.String
struct String_t;

// System.Void Games.ChatHistory.LastSpeakerRecord::.ctor()
 void LastSpeakerRecord__ctor_m32779 (LastSpeakerRecord_t4560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.ChatHistory.LastSpeaker> Games.ChatHistory.LastSpeakerRecord::get_LastSpeakerList()
 List_1_t4559 * LastSpeakerRecord_get_LastSpeakerList_m32780 (LastSpeakerRecord_t4560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.LastSpeakerRecord::set_LastSpeakerList(System.Collections.Generic.List`1<Games.ChatHistory.LastSpeaker>)
 void LastSpeakerRecord_set_LastSpeakerList_m32781 (LastSpeakerRecord_t4560 * __this, List_1_t4559 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.LastSpeakerRecord::Add(System.UInt64,System.String)
 void LastSpeakerRecord_Add_m32782 (LastSpeakerRecord_t4560 * __this, uint64_t ___guid, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.LastSpeakerRecord::IsExist(System.UInt64)
 bool LastSpeakerRecord_IsExist_m32783 (LastSpeakerRecord_t4560 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.LastSpeakerRecord::ClearData()
 void LastSpeakerRecord_ClearData_m32784 (LastSpeakerRecord_t4560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
