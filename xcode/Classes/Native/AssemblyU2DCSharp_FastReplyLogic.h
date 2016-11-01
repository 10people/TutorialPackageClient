#pragma once
#include <stdint.h>
// FastReplyLogic
struct FastReplyLogic_t1304;
// UnityEngine.GameObject
struct GameObject_t9;
// GameUIInput
struct GameUIInput_t1185;
// UILabel
struct UILabel_t1176;
// ChatInfoLogic
struct ChatInfoLogic_t1294;
// System.Collections.Generic.List`1<FastReplyItemLogic>
struct List_1_t1406;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FastReplyLogic/CUR_REPLYMODE
#include "AssemblyU2DCSharp_FastReplyLogic_CUR_REPLYMODE.h"
// FastReplyLogic
struct FastReplyLogic_t1304  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject FastReplyLogic::m_ModeButton
	GameObject_t9 * ___m_ModeButton;
	// UnityEngine.GameObject FastReplyLogic::m_EditButton
	GameObject_t9 * ___m_EditButton;
	// UnityEngine.GameObject FastReplyLogic::m_QuitEditButton
	GameObject_t9 * ___m_QuitEditButton;
	// UnityEngine.GameObject FastReplyLogic::m_FastReplyGrid
	GameObject_t9 * ___m_FastReplyGrid;
	// UnityEngine.GameObject FastReplyLogic::m_FastReplyEdit
	GameObject_t9 * ___m_FastReplyEdit;
	// GameUIInput FastReplyLogic::m_FastReplyEditInput
	GameUIInput_t1185 * ___m_FastReplyEditInput;
	// UnityEngine.GameObject FastReplyLogic::m_FastReplyDetail
	GameObject_t9 * ___m_FastReplyDetail;
	// UILabel FastReplyLogic::m_FastReplyDetailLabel
	UILabel_t1176 * ___m_FastReplyDetailLabel;
	// ChatInfoLogic FastReplyLogic::m_ChatInfoLogic
	ChatInfoLogic_t1294 * ___m_ChatInfoLogic;
	// System.Collections.Generic.List`1<FastReplyItemLogic> FastReplyLogic::m_FastReplyItemList
	List_1_t1406 * ___m_FastReplyItemList;
	// System.Int32 FastReplyLogic::m_CurFastReplyItemIndex
	int32_t ___m_CurFastReplyItemIndex;
	// FastReplyLogic/CUR_REPLYMODE FastReplyLogic::m_CurReplyMode
	int32_t ___m_CurReplyMode;
};
struct FastReplyLogic_t1304_StaticFields{
	// System.Int32 FastReplyLogic::FastReplyMaxNum
	int32_t ___FastReplyMaxNum;
	// FastReplyLogic FastReplyLogic::m_Instance
	FastReplyLogic_t1304 * ___m_Instance;
};
