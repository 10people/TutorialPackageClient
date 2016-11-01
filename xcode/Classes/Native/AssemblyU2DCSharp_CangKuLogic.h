#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UIImageButton
struct UIImageButton_t1204;
// UILabel
struct UILabel_t1176;
// CangKuItemLogic[]
struct CangKuItemLogicU5BU5D_t1270;
// System.Collections.Generic.List`1<CangKuBackItemLogic>
struct List_1_t1271;
// CangKuLogic
struct CangKuLogic_t1272;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CangKuLogic
struct CangKuLogic_t1272  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject CangKuLogic::m_CangKuItemGrid
	GameObject_t9 * ___m_CangKuItemGrid;
	// UnityEngine.GameObject CangKuLogic::m_CangKuBackPackItemGrid
	GameObject_t9 * ___m_CangKuBackPackItemGrid;
	// UIImageButton CangKuLogic::m_PageDownBtn
	UIImageButton_t1204 * ___m_PageDownBtn;
	// UIImageButton CangKuLogic::m_PageUpBtn
	UIImageButton_t1204 * ___m_PageUpBtn;
	// UILabel CangKuLogic::m_PageLabel
	UILabel_t1176 * ___m_PageLabel;
	// UILabel CangKuLogic::m_BackPakcSize
	UILabel_t1176 * ___m_BackPakcSize;
	// UILabel CangKuLogic::m_Moneyinfo_CoinLable
	UILabel_t1176 * ___m_Moneyinfo_CoinLable;
	// UILabel CangKuLogic::m_Moneyinfo_YuanBaoLable
	UILabel_t1176 * ___m_Moneyinfo_YuanBaoLable;
	// UILabel CangKuLogic::m_Moneyinfo_YuanBaoBindLable
	UILabel_t1176 * ___m_Moneyinfo_YuanBaoBindLable;
	// CangKuItemLogic[] CangKuLogic::m_CangKuItems
	CangKuItemLogicU5BU5D_t1270* ___m_CangKuItems;
	// System.Collections.Generic.List`1<CangKuBackItemLogic> CangKuLogic::m_CangKuBackItems
	List_1_t1271 * ___m_CangKuBackItems;
	// System.Int32 CangKuLogic::m_CurPage
	int32_t ___m_CurPage;
};
struct CangKuLogic_t1272_StaticFields{
	// System.Int32 CangKuLogic::MAX_ITEM_PAGE
	int32_t ___MAX_ITEM_PAGE;
	// System.Int32 CangKuLogic::MAX_PAGE
	int32_t ___MAX_PAGE;
	// CangKuLogic CangKuLogic::m_Instance
	CangKuLogic_t1272 * ___m_Instance;
};
