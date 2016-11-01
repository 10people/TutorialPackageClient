#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameChatInput
struct GameChatInput_t1186;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void GameChatInput::.ctor()
 void GameChatInput__ctor_m7070 (GameChatInput_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameChatInput::Start()
 void GameChatInput_Start_m7071 (GameChatInput_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameChatInput::OnSubmit()
 void GameChatInput_OnSubmit_m7072 (GameChatInput_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameChatInput::SubmitTextAndVoice(System.String,System.Byte[])
 void GameChatInput_SubmitTextAndVoice_m7073 (GameChatInput_t1186 * __this, String_t* ___text, ByteU5BU5D_t1033* ___voicechat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameChatInput::SubmitVoice(System.String,System.Byte[])
 void GameChatInput_SubmitVoice_m7074 (Object_t * __this/* static, unused */, String_t* ___text, ByteU5BU5D_t1033* ___voicechat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameChatInput::ShowNewChat(System.String)
 void GameChatInput_ShowNewChat_m7075 (GameChatInput_t1186 * __this, String_t* ___strChatFull, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameChatInput::ClearChatHistory()
 void GameChatInput_ClearChatHistory_m7076 (GameChatInput_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
