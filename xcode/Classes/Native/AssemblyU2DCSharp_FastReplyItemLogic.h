#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// FastReplyLogic
struct FastReplyLogic_t1304;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FastReplyItemLogic
struct FastReplyItemLogic_t1404  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject FastReplyItemLogic::m_DeleteButton
	GameObject_t9 * ___m_DeleteButton;
	// UnityEngine.GameObject FastReplyItemLogic::m_DetailButton
	GameObject_t9 * ___m_DetailButton;
	// UnityEngine.GameObject FastReplyItemLogic::m_EditButton
	GameObject_t9 * ___m_EditButton;
	// UnityEngine.GameObject FastReplyItemLogic::m_ReplyButton
	GameObject_t9 * ___m_ReplyButton;
	// UILabel FastReplyItemLogic::m_ReplyContent
	UILabel_t1176 * ___m_ReplyContent;
	// System.Int32 FastReplyItemLogic::m_ItemIndex
	int32_t ___m_ItemIndex;
	// System.String FastReplyItemLogic::m_ItemStrContent
	String_t* ___m_ItemStrContent;
	// FastReplyLogic FastReplyItemLogic::m_FastReplyLogic
	FastReplyLogic_t1304 * ___m_FastReplyLogic;
};
