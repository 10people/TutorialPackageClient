#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LoudSpeakerFrameLogic
struct LoudSpeakerFrameLogic_t1526;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void LoudSpeakerFrameLogic::.ctor()
 void LoudSpeakerFrameLogic__ctor_m9402 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::.cctor()
 void LoudSpeakerFrameLogic__cctor_m9403 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LoudSpeakerFrameLogic LoudSpeakerFrameLogic::Instance()
 LoudSpeakerFrameLogic_t1526 * LoudSpeakerFrameLogic_Instance_m9404 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::Awake()
 void LoudSpeakerFrameLogic_Awake_m9405 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::Start()
 void LoudSpeakerFrameLogic_Start_m9406 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::OnEnable()
 void LoudSpeakerFrameLogic_OnEnable_m9407 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::Update()
 void LoudSpeakerFrameLogic_Update_m9408 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::OnDestroy()
 void LoudSpeakerFrameLogic_OnDestroy_m9409 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::InitTextPos()
 void LoudSpeakerFrameLogic_InitTextPos_m9410 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::OnReceiveLoudSpeaker()
 void LoudSpeakerFrameLogic_OnReceiveLoudSpeaker_m9411 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::SelectTextNumber()
 void LoudSpeakerFrameLogic_SelectTextNumber_m9412 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::InitCurLoudSpeaker()
 void LoudSpeakerFrameLogic_InitCurLoudSpeaker_m9413 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LoudSpeakerFrameLogic::MakeNameLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* LoudSpeakerFrameLogic_MakeNameLinkEnabled_m9414 (LoudSpeakerFrameLogic_t1526 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LoudSpeakerFrameLogic::ShowVIPIcon(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* LoudSpeakerFrameLogic_ShowVIPIcon_m9415 (LoudSpeakerFrameLogic_t1526 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LoudSpeakerFrameLogic::MakeLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* LoudSpeakerFrameLogic_MakeLinkEnabled_m9416 (LoudSpeakerFrameLogic_t1526 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::CalculateLinkSpace(System.String&,System.Int32,System.Int32,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32&,System.Boolean&)
 void LoudSpeakerFrameLogic_CalculateLinkSpace_m9417 (LoudSpeakerFrameLogic_t1526 * __this, String_t** ___text, int32_t ___linkstart_whole, int32_t ___linkstart, int32_t ___linkend, Vector2_t12 * ___LeftSideSpace, Vector2_t12 * ___RightSideSpace, int32_t* ___nNextLineNum, bool* ___needShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LoudSpeakerFrameLogic::MakeEmotionEnabled(System.String)
 String_t* LoudSpeakerFrameLogic_MakeEmotionEnabled_m9418 (LoudSpeakerFrameLogic_t1526 * __this, String_t* ___fulltext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::CalculateEmotionSpace(System.String&,UnityEngine.Vector2&,System.Int32&,System.Boolean&)
 void LoudSpeakerFrameLogic_CalculateEmotionSpace_m9419 (LoudSpeakerFrameLogic_t1526 * __this, String_t** ___text, Vector2_t12 * ___LeftSideSpace, int32_t* ___nNextLineNum, bool* ___needShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LoudSpeakerFrameLogic::GetSpaceEmotionItem(UnityEngine.GameObject)
 String_t* LoudSpeakerFrameLogic_GetSpaceEmotionItem_m9420 (LoudSpeakerFrameLogic_t1526 * __this, GameObject_t9 * ___emotion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::ConfirmEllipsis(System.String&)
 void LoudSpeakerFrameLogic_ConfirmEllipsis_m9421 (LoudSpeakerFrameLogic_t1526 * __this, String_t** ___strChatFull, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::UpdateEmotionLinkPos(System.String)
 void LoudSpeakerFrameLogic_UpdateEmotionLinkPos_m9422 (LoudSpeakerFrameLogic_t1526 * __this, String_t* ___strChatFull, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoudSpeakerFrameLogic::ChangeText()
 void LoudSpeakerFrameLogic_ChangeText_m9423 (LoudSpeakerFrameLogic_t1526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
