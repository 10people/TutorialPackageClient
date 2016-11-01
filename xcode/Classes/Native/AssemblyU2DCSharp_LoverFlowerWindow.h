#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// LoverFlowerWindow
struct LoverFlowerWindow_t1897;
// ScoreAwardItem
struct ScoreAwardItem_t1712;
// UIGrid
struct UIGrid_t1199;
// LoverRankInfoItem
struct LoverRankInfoItem_t1898;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LoverFlowerWindow
struct LoverFlowerWindow_t1897  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject LoverFlowerWindow::m_RewardDescBtn
	GameObject_t9 * ___m_RewardDescBtn;
	// UnityEngine.GameObject LoverFlowerWindow::m_RewardDescBackBtn
	GameObject_t9 * ___m_RewardDescBackBtn;
	// UnityEngine.GameObject LoverFlowerWindow::m_LoverFlowerActivityInfo
	GameObject_t9 * ___m_LoverFlowerActivityInfo;
	// UnityEngine.GameObject LoverFlowerWindow::m_LoverFlowerRewardDesc
	GameObject_t9 * ___m_LoverFlowerRewardDesc;
	// UnityEngine.GameObject LoverFlowerWindow::m_SongHuaRankBtn
	GameObject_t9 * ___m_SongHuaRankBtn;
	// UnityEngine.GameObject LoverFlowerWindow::m_SongHuaRankBackBtn
	GameObject_t9 * ___m_SongHuaRankBackBtn;
	// UnityEngine.GameObject LoverFlowerWindow::m_ShouHuaRankBtn
	GameObject_t9 * ___m_ShouHuaRankBtn;
	// UnityEngine.GameObject LoverFlowerWindow::m_ShouHuaRankBackBtn
	GameObject_t9 * ___m_ShouHuaRankBackBtn;
	// UnityEngine.GameObject LoverFlowerWindow::m_SongHuaActivityDesc
	GameObject_t9 * ___m_SongHuaActivityDesc;
	// UnityEngine.GameObject LoverFlowerWindow::m_SongHuaActivityRank
	GameObject_t9 * ___m_SongHuaActivityRank;
	// UnityEngine.GameObject LoverFlowerWindow::m_ShouHuaActivityDesc
	GameObject_t9 * ___m_ShouHuaActivityDesc;
	// UnityEngine.GameObject LoverFlowerWindow::m_ShouHuaActivityRank
	GameObject_t9 * ___m_ShouHuaActivityRank;
	// UnityEngine.GameObject LoverFlowerWindow::GiveRoseRankGrid
	GameObject_t9 * ___GiveRoseRankGrid;
	// UnityEngine.GameObject LoverFlowerWindow::ReceiveRoseRankGrid
	GameObject_t9 * ___ReceiveRoseRankGrid;
	// UILabel LoverFlowerWindow::m_MySonghuaName
	UILabel_t1176 * ___m_MySonghuaName;
	// UILabel LoverFlowerWindow::m_MySonghuaRank
	UILabel_t1176 * ___m_MySonghuaRank;
	// UILabel LoverFlowerWindow::m_MySonghuaCount
	UILabel_t1176 * ___m_MySonghuaCount;
	// UILabel LoverFlowerWindow::m_MyShouhuaName
	UILabel_t1176 * ___m_MyShouhuaName;
	// UILabel LoverFlowerWindow::m_MyShouhuaRank
	UILabel_t1176 * ___m_MyShouhuaRank;
	// UILabel LoverFlowerWindow::m_MyShouhuaCount
	UILabel_t1176 * ___m_MyShouhuaCount;
	// UnityEngine.GameObject LoverFlowerWindow::m_RankInfo
	GameObject_t9 * ___m_RankInfo;
	// UnityEngine.GameObject LoverFlowerWindow::m_FlowerReward
	GameObject_t9 * ___m_FlowerReward;
	// System.Int32 LoverFlowerWindow::m_rankCount
	int32_t ___m_rankCount;
	// System.Int32 LoverFlowerWindow::m_nTipWaitWindow
	int32_t ___m_nTipWaitWindow;
	// UnityEngine.GameObject LoverFlowerWindow::m_FrirendChoose
	GameObject_t9 * ___m_FrirendChoose;
	// System.Boolean LoverFlowerWindow::IsFirstEnter
	bool ___IsFirstEnter;
	// UnityEngine.GameObject LoverFlowerWindow::m_ScoreUI
	GameObject_t9 * ___m_ScoreUI;
	// ScoreAwardItem LoverFlowerWindow::m_ScoreAwardItemCache
	ScoreAwardItem_t1712 * ___m_ScoreAwardItemCache;
	// UIGrid LoverFlowerWindow::m_SongHuaAwardList
	UIGrid_t1199 * ___m_SongHuaAwardList;
	// UIGrid LoverFlowerWindow::m_ShouHuaAwardList
	UIGrid_t1199 * ___m_ShouHuaAwardList;
	// LoverRankInfoItem LoverFlowerWindow::m_SongHuaRankItemCache
	LoverRankInfoItem_t1898 * ___m_SongHuaRankItemCache;
	// LoverRankInfoItem LoverFlowerWindow::m_ShouHuaRankItemCache
	LoverRankInfoItem_t1898 * ___m_ShouHuaRankItemCache;
	// UILabel LoverFlowerWindow::m_ActTimeLabel
	UILabel_t1176 * ___m_ActTimeLabel;
	// UILabel LoverFlowerWindow::m_ActTimeLabel1
	UILabel_t1176 * ___m_ActTimeLabel1;
	// UILabel LoverFlowerWindow::m_ActTimeEndLabel
	UILabel_t1176 * ___m_ActTimeEndLabel;
	// UnityEngine.GameObject LoverFlowerWindow::m_SongHuaBtn
	GameObject_t9 * ___m_SongHuaBtn;
};
struct LoverFlowerWindow_t1897_StaticFields{
	// LoverFlowerWindow LoverFlowerWindow::m_Instance
	LoverFlowerWindow_t1897 * ___m_Instance;
	// System.Boolean LoverFlowerWindow::IsOpenAward
	bool ___IsOpenAward;
};
