#pragma once
#include <stdint.h>
// SkillLevelUpRoot
struct SkillLevelUpRoot_t1740;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UILabel
struct UILabel_t1176;
// SkillLevelUpRoot/SkillInfo[]
struct SkillInfoU5BU5D_t1741;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UIImageButton
struct UIImageButton_t1204;
// UISlider
struct UISlider_t1219;
// GCGame.Table.Tab_SkillEx
struct Tab_SkillEx_t639;
// SkillLevelUpRoot/OnUpdateSkillMenuInfo
struct OnUpdateSkillMenuInfo_t1739;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SkillLevelUpRoot
struct SkillLevelUpRoot_t1740  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_tabGameObjList
	GameObjectU5BU5D_t1200* ___m_tabGameObjList;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_tabBtnHighObjList
	GameObjectU5BU5D_t1200* ___m_tabBtnHighObjList;
	// System.Int32 SkillLevelUpRoot::m_curHighIndex
	int32_t ___m_curHighIndex;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_tabBtnShowObjList
	GameObjectU5BU5D_t1200* ___m_tabBtnShowObjList;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_skillObjList
	GameObjectU5BU5D_t1200* ___m_skillObjList;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_skillSelectList
	GameObjectU5BU5D_t1200* ___m_skillSelectList;
	// UISprite[] SkillLevelUpRoot::m_skillIcon
	UISpriteU5BU5D_t1201* ___m_skillIcon;
	// UILabel[] SkillLevelUpRoot::m_skillLevel
	UILabelU5BU5D_t1203* ___m_skillLevel;
	// UILabel[] SkillLevelUpRoot::m_skillName
	UILabelU5BU5D_t1203* ___m_skillName;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_skillLock
	GameObjectU5BU5D_t1200* ___m_skillLock;
	// UILabel[] SkillLevelUpRoot::m_lockLevel
	UILabelU5BU5D_t1203* ___m_lockLevel;
	// System.Int32 SkillLevelUpRoot::m_curNormalIndex
	int32_t ___m_curNormalIndex;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_PVEOjbList
	GameObjectU5BU5D_t1200* ___m_PVEOjbList;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_PVESelectList
	GameObjectU5BU5D_t1200* ___m_PVESelectList;
	// UISprite[] SkillLevelUpRoot::m_PVEIcon
	UISpriteU5BU5D_t1201* ___m_PVEIcon;
	// UILabel[] SkillLevelUpRoot::m_PVELEVEL
	UILabelU5BU5D_t1203* ___m_PVELEVEL;
	// UILabel[] SkillLevelUpRoot::m_PVEName
	UILabelU5BU5D_t1203* ___m_PVEName;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_PVELock
	GameObjectU5BU5D_t1200* ___m_PVELock;
	// System.Int32 SkillLevelUpRoot::m_PVEIndex
	int32_t ___m_PVEIndex;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_PVPOjbList
	GameObjectU5BU5D_t1200* ___m_PVPOjbList;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_PVPSelectList
	GameObjectU5BU5D_t1200* ___m_PVPSelectList;
	// UISprite[] SkillLevelUpRoot::m_PVPIcon
	UISpriteU5BU5D_t1201* ___m_PVPIcon;
	// UILabel[] SkillLevelUpRoot::m_PVPLEVEL
	UILabelU5BU5D_t1203* ___m_PVPLEVEL;
	// UILabel[] SkillLevelUpRoot::m_PVPName
	UILabelU5BU5D_t1203* ___m_PVPName;
	// UnityEngine.GameObject[] SkillLevelUpRoot::m_PVPLock
	GameObjectU5BU5D_t1200* ___m_PVPLock;
	// System.Int32 SkillLevelUpRoot::m_PVPIndex
	int32_t ___m_PVPIndex;
	// UILabel SkillLevelUpRoot::m_coinCount
	UILabel_t1176 * ___m_coinCount;
	// System.Single SkillLevelUpRoot::m_updateTime
	float ___m_updateTime;
	// SkillLevelUpRoot/SkillInfo[] SkillLevelUpRoot::NormalSkillInfos
	SkillInfoU5BU5D_t1741* ___NormalSkillInfos;
	// SkillLevelUpRoot/SkillInfo[] SkillLevelUpRoot::PVESkillInfos
	SkillInfoU5BU5D_t1741* ___PVESkillInfos;
	// SkillLevelUpRoot/SkillInfo[] SkillLevelUpRoot::PVPSkillInfos
	SkillInfoU5BU5D_t1741* ___PVPSkillInfos;
	// UnityEngine.GameObject SkillLevelUpRoot::m_showSkillMenuObj
	GameObject_t9 * ___m_showSkillMenuObj;
	// UISprite SkillLevelUpRoot::m_skillMenuIcon
	UISprite_t1202 * ___m_skillMenuIcon;
	// UILabel SkillLevelUpRoot::m_skillMenuLevel
	UILabel_t1176 * ___m_skillMenuLevel;
	// UILabel SkillLevelUpRoot::m_skillMenuName
	UILabel_t1176 * ___m_skillMenuName;
	// UILabel SkillLevelUpRoot::m_skillDescIntrol
	UILabel_t1176 * ___m_skillDescIntrol;
	// UnityEngine.GameObject SkillLevelUpRoot::m_skillDescIntrolObj
	GameObject_t9 * ___m_skillDescIntrolObj;
	// UnityEngine.GameObject SkillLevelUpRoot::m_LockMenuObj
	GameObject_t9 * ___m_LockMenuObj;
	// UILabel SkillLevelUpRoot::m_skillDesc
	UILabel_t1176 * ___m_skillDesc;
	// UnityEngine.GameObject SkillLevelUpRoot::m_LevelupMenuObj
	GameObject_t9 * ___m_LevelupMenuObj;
	// UILabel SkillLevelUpRoot::m_skillCurDesc
	UILabel_t1176 * ___m_skillCurDesc;
	// UILabel SkillLevelUpRoot::m_skillNextDesc
	UILabel_t1176 * ___m_skillNextDesc;
	// UILabel SkillLevelUpRoot::m_skillCdTime
	UILabel_t1176 * ___m_skillCdTime;
	// UILabel SkillLevelUpRoot::m_skillDel
	UILabel_t1176 * ___m_skillDel;
	// UIImageButton SkillLevelUpRoot::m_NormalLevelUpBtn
	UIImageButton_t1204 * ___m_NormalLevelUpBtn;
	// UIImageButton SkillLevelUpRoot::m_getItemBtn
	UIImageButton_t1204 * ___m_getItemBtn;
	// UIImageButton SkillLevelUpRoot::m_studySkillBtn
	UIImageButton_t1204 * ___m_studySkillBtn;
	// UIImageButton SkillLevelUpRoot::m_useSkillBtn
	UIImageButton_t1204 * ___m_useSkillBtn;
	// UIImageButton SkillLevelUpRoot::m_ItemLevelUpBtn
	UIImageButton_t1204 * ___m_ItemLevelUpBtn;
	// UnityEngine.GameObject SkillLevelUpRoot::m_NormalDelObj
	GameObject_t9 * ___m_NormalDelObj;
	// UILabel SkillLevelUpRoot::m_NormalDelCount
	UILabel_t1176 * ___m_NormalDelCount;
	// UnityEngine.GameObject SkillLevelUpRoot::m_ItemExpObj
	GameObject_t9 * ___m_ItemExpObj;
	// UISlider SkillLevelUpRoot::m_ItemExpCount
	UISlider_t1219 * ___m_ItemExpCount;
	// UnityEngine.GameObject SkillLevelUpRoot::m_NeedLevelObj
	GameObject_t9 * ___m_NeedLevelObj;
	// UILabel SkillLevelUpRoot::m_NeddLevel
	UILabel_t1176 * ___m_NeddLevel;
	// GCGame.Table.Tab_SkillEx SkillLevelUpRoot::m_SelectSkillEx
	Tab_SkillEx_t639 * ___m_SelectSkillEx;
	// System.Int32 SkillLevelUpRoot::m_CurSelectSkillState
	int32_t ___m_CurSelectSkillState;
	// SkillLevelUpRoot/OnUpdateSkillMenuInfo SkillLevelUpRoot::DelUpdateSkillMenu
	OnUpdateSkillMenuInfo_t1739 * ___DelUpdateSkillMenu;
	// UnityEngine.GameObject SkillLevelUpRoot::m_ItemLveUI
	GameObject_t9 * ___m_ItemLveUI;
	// UILabel SkillLevelUpRoot::m_curSelectValue
	UILabel_t1176 * ___m_curSelectValue;
	// UILabel SkillLevelUpRoot::m_curLevel
	UILabel_t1176 * ___m_curLevel;
	// UILabel SkillLevelUpRoot::m_maxCount
	UILabel_t1176 * ___m_maxCount;
	// UISlider SkillLevelUpRoot::m_ExpSpr
	UISlider_t1219 * ___m_ExpSpr;
	// System.Int32 SkillLevelUpRoot::m_curValue
	int32_t ___m_curValue;
	// System.Int32 SkillLevelUpRoot::m_itemLveSkillId
	int32_t ___m_itemLveSkillId;
	// System.Int32 SkillLevelUpRoot::m_itemLevel
	int32_t ___m_itemLevel;
	// System.Int32 SkillLevelUpRoot::m_addValue
	int32_t ___m_addValue;
	// System.Int32 SkillLevelUpRoot::m_curLevelValue
	int32_t ___m_curLevelValue;
	// System.Boolean SkillLevelUpRoot::m_isCanUpdteItemExp
	bool ___m_isCanUpdteItemExp;
	// UnityEngine.GameObject SkillLevelUpRoot::m_getItemWayWin
	GameObject_t9 * ___m_getItemWayWin;
	// System.Int32 SkillLevelUpRoot::m_pvxState
	int32_t ___m_pvxState;
};
struct SkillLevelUpRoot_t1740_StaticFields{
	// System.Int32 SkillLevelUpRoot::NORMAL_SKILL_COUNT
	int32_t ___NORMAL_SKILL_COUNT;
	// System.Int32 SkillLevelUpRoot::PVE_SKILL_COUNT
	int32_t ___PVE_SKILL_COUNT;
	// System.Int32 SkillLevelUpRoot::PVP_SKILL_COUNT
	int32_t ___PVP_SKILL_COUNT;
	// SkillLevelUpRoot SkillLevelUpRoot::m_instance
	SkillLevelUpRoot_t1740 * ___m_instance;
};
