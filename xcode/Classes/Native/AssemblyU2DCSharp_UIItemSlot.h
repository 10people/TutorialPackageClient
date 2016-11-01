#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UIWidget
struct UIWidget_t5195;
// UILabel
struct UILabel_t1176;
// UnityEngine.AudioClip
struct AudioClip_t2147;
// InvGameItem
struct InvGameItem_t5237;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIItemSlot
struct UIItemSlot_t5236  : public MonoBehaviour_t18
{
	// UISprite UIItemSlot::icon
	UISprite_t1202 * ___icon;
	// UIWidget UIItemSlot::background
	UIWidget_t5195 * ___background;
	// UILabel UIItemSlot::label
	UILabel_t1176 * ___label;
	// UnityEngine.AudioClip UIItemSlot::grabSound
	AudioClip_t2147 * ___grabSound;
	// UnityEngine.AudioClip UIItemSlot::placeSound
	AudioClip_t2147 * ___placeSound;
	// UnityEngine.AudioClip UIItemSlot::errorSound
	AudioClip_t2147 * ___errorSound;
	// InvGameItem UIItemSlot::mItem
	InvGameItem_t5237 * ___mItem;
	// System.String UIItemSlot::mText
	String_t* ___mText;
};
struct UIItemSlot_t5236_StaticFields{
	// InvGameItem UIItemSlot::mDraggedItem
	InvGameItem_t5237 * ___mDraggedItem;
};
