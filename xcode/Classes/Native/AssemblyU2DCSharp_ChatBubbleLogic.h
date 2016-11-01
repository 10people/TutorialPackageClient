#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UIFont
struct UIFont_t1286;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ChatBubbleLogic
struct ChatBubbleLogic_t1287  : public MonoBehaviour_t18
{
	// UILabel ChatBubbleLogic::m_ChatText
	UILabel_t1176 * ___m_ChatText;
	// UnityEngine.GameObject ChatBubbleLogic::m_LinkRoot
	GameObject_t9 * ___m_LinkRoot;
	// UnityEngine.GameObject ChatBubbleLogic::m_EmotionRoot
	GameObject_t9 * ___m_EmotionRoot;
	// UISprite ChatBubbleLogic::m_Background
	UISprite_t1202 * ___m_Background;
	// UIFont ChatBubbleLogic::m_Font
	UIFont_t1286 * ___m_Font;
	// System.Single ChatBubbleLogic::m_ChatTextHeight
	float ___m_ChatTextHeight;
	// UnityEngine.Vector3 ChatBubbleLogic::EmotionRootPos
	Vector3_t121  ___EmotionRootPos;
	// System.Single ChatBubbleLogic::SPACE_WIDTH
	float ___SPACE_WIDTH;
};
