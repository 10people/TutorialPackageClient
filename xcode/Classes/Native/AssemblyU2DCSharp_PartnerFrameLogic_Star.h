#pragma once
#include <stdint.h>
// PartnerFrameLogic_Star
struct PartnerFrameLogic_Star_t1635;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// PartnerFrameLogic_FellowDetail
struct PartnerFrameLogic_FellowDetail_t1637;
// Games.Fellow.Fellow
struct Fellow_t1174;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PartnerFrameLogic_Star
struct PartnerFrameLogic_Star_t1635  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_StarAttr
	GameObject_t9 * ___m_StarAttr;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_Tips
	GameObject_t9 * ___m_Tips;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_StarButton
	GameObject_t9 * ___m_StarButton;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_CloseBg
	GameObject_t9 * ___m_CloseBg;
	// UISprite[] PartnerFrameLogic_Star::m_CurStarPic
	UISpriteU5BU5D_t1201* ___m_CurStarPic;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_MaterialPartnerGrid
	GameObject_t9 * ___m_MaterialPartnerGrid;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_MaterialPartnerItem
	GameObject_t9 * ___m_MaterialPartnerItem;
	// UILabel PartnerFrameLogic_Star::m_MaterialPartnerExpLabel
	UILabel_t1176 * ___m_MaterialPartnerExpLabel;
	// UISprite PartnerFrameLogic_Star::m_MaterialPartnerExpSprite
	UISprite_t1202 * ___m_MaterialPartnerExpSprite;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_MaterialPartnerLabel
	GameObject_t9 * ___m_MaterialPartnerLabel;
	// UILabel PartnerFrameLogic_Star::m_MaterialPartnerExpCount
	UILabel_t1176 * ___m_MaterialPartnerExpCount;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_ChooseMaterialAutoMenu
	GameObject_t9 * ___m_ChooseMaterialAutoMenu;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_ChooseMaterialWindow
	GameObject_t9 * ___m_ChooseMaterialWindow;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_ChooseMaterialGrid
	GameObject_t9 * ___m_ChooseMaterialGrid;
	// UILabel PartnerFrameLogic_Star::m_ChooseMaterialExpLabel
	UILabel_t1176 * ___m_ChooseMaterialExpLabel;
	// UISprite PartnerFrameLogic_Star::m_ChooseMaterialExpSprite
	UISprite_t1202 * ___m_ChooseMaterialExpSprite;
	// UILabel PartnerFrameLogic_Star::m_ChooseMaterialExpCount
	UILabel_t1176 * ___m_ChooseMaterialExpCount;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_PartnerChooseItem
	GameObject_t9 * ___m_PartnerChooseItem;
	// UISprite[] PartnerFrameLogic_Star::m_NextStarPic
	UISpriteU5BU5D_t1201* ___m_NextStarPic;
	// UILabel PartnerFrameLogic_Star::m_AttackLabel
	UILabel_t1176 * ___m_AttackLabel;
	// UILabel PartnerFrameLogic_Star::m_HitLabel
	UILabel_t1176 * ___m_HitLabel;
	// UILabel PartnerFrameLogic_Star::m_CriticalLabel
	UILabel_t1176 * ___m_CriticalLabel;
	// UILabel PartnerFrameLogic_Star::m_GuardLabel
	UILabel_t1176 * ___m_GuardLabel;
	// UILabel PartnerFrameLogic_Star::m_BlessLabel
	UILabel_t1176 * ___m_BlessLabel;
	// UILabel PartnerFrameLogic_Star::m_AttackLabelNext
	UILabel_t1176 * ___m_AttackLabelNext;
	// UILabel PartnerFrameLogic_Star::m_HitLabelNext
	UILabel_t1176 * ___m_HitLabelNext;
	// UILabel PartnerFrameLogic_Star::m_CriticalLabelNext
	UILabel_t1176 * ___m_CriticalLabelNext;
	// UILabel PartnerFrameLogic_Star::m_GuardLabelNext
	UILabel_t1176 * ___m_GuardLabelNext;
	// UILabel PartnerFrameLogic_Star::m_BlessLabelNext
	UILabel_t1176 * ___m_BlessLabelNext;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_ChooseMaterialTitle
	GameObject_t9 * ___m_ChooseMaterialTitle;
	// UnityEngine.GameObject PartnerFrameLogic_Star::m_ChoosePanel
	GameObject_t9 * ___m_ChoosePanel;
	// UILabel PartnerFrameLogic_Star::m_AutoButtonLabel
	UILabel_t1176 * ___m_AutoButtonLabel;
	// PartnerFrameLogic_FellowDetail PartnerFrameLogic_Star::m_FellowDetail
	PartnerFrameLogic_FellowDetail_t1637 * ___m_FellowDetail;
	// Games.Fellow.Fellow PartnerFrameLogic_Star::m_Fellow
	Fellow_t1174 * ___m_Fellow;
	// System.Collections.Generic.List`1<System.UInt64> PartnerFrameLogic_Star::m_ChoosePartnerGuid
	List_1_t1393 * ___m_ChoosePartnerGuid;
	// System.Int32 PartnerFrameLogic_Star::m_ChoosePartnerExp
	int32_t ___m_ChoosePartnerExp;
};
struct PartnerFrameLogic_Star_t1635_StaticFields{
	// System.Int32 PartnerFrameLogic_Star::FELLOW_PACK_DEFAULT_NUM
	int32_t ___FELLOW_PACK_DEFAULT_NUM;
	// PartnerFrameLogic_Star PartnerFrameLogic_Star::m_Instance
	PartnerFrameLogic_Star_t1635 * ___m_Instance;
};
