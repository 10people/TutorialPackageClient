#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ChatBubbleLogic
struct ChatBubbleLogic_t1287;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void ChatBubbleLogic::.ctor()
 void ChatBubbleLogic__ctor_m7585 (ChatBubbleLogic_t1287 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatBubbleLogic::Awake()
 void ChatBubbleLogic_Awake_m7586 (ChatBubbleLogic_t1287 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatBubbleLogic::Show(Games.ChatHistory.ChatHistoryItem)
 void ChatBubbleLogic_Show_m7587 (ChatBubbleLogic_t1287 * __this, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatBubbleLogic::HideBubbleWait()
 void ChatBubbleLogic_HideBubbleWait_m7588 (ChatBubbleLogic_t1287 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatBubbleLogic::ClearBubble()
 void ChatBubbleLogic_ClearBubble_m7589 (ChatBubbleLogic_t1287 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatBubbleLogic::MakeLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatBubbleLogic_MakeLinkEnabled_m7590 (ChatBubbleLogic_t1287 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatBubbleLogic::CalculateLinkSpace(System.String&,System.Int32,System.Int32,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32&,System.Boolean&)
 void ChatBubbleLogic_CalculateLinkSpace_m7591 (ChatBubbleLogic_t1287 * __this, String_t** ___text, int32_t ___linkstart_whole, int32_t ___linkstart, int32_t ___linkend, Vector2_t12 * ___LeftSideSpace, Vector2_t12 * ___RightSideSpace, int32_t* ___nNextLineNum, bool* ___needShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatBubbleLogic::MakeEmotionEnabled(System.String)
 String_t* ChatBubbleLogic_MakeEmotionEnabled_m7592 (ChatBubbleLogic_t1287 * __this, String_t* ___fulltext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatBubbleLogic::CalculateEmotionSpace(System.String&,UnityEngine.Vector2&,System.Int32&,System.Boolean&)
 void ChatBubbleLogic_CalculateEmotionSpace_m7593 (ChatBubbleLogic_t1287 * __this, String_t** ___text, Vector2_t12 * ___LeftSideSpace, int32_t* ___nNextLineNum, bool* ___needShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatBubbleLogic::GetSpaceEmotionItem(UnityEngine.GameObject)
 String_t* ChatBubbleLogic_GetSpaceEmotionItem_m7594 (ChatBubbleLogic_t1287 * __this, GameObject_t9 * ___emotion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatBubbleLogic::UpdateEmotionLinkPos(System.String)
 void ChatBubbleLogic_UpdateEmotionLinkPos_m7595 (ChatBubbleLogic_t1287 * __this, String_t* ___strChatFull, MethodInfo* method) IL2CPP_METHOD_ATTR;
