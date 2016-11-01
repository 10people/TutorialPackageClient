/********************************************************************************
 *	文件名：MissionItemLogic.cs
 *	全路径：	\Script\GUI\MissionItemLogic.cs
 *	创建人：	贺文鹏
 *	创建时间：2014-02-17
 *
 *	功能说明： 任务追踪界面 任务项UI。
 *	       
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Mission;
using Games.Events;

public class MissionItemLogic : MonoBehaviour
{
    public UILabel m_MissionTitle;		//任务追踪标题
    public UILabel MissionTile
    {
        get { return m_MissionTitle; }
    }
    public UILabel m_MissionInfo;		//任务追踪信息
    public UILabel MissionInfo
    {
        get { return m_MissionInfo; }
    }

    public GameObject m_MissionComplete;
    public GameObject m_MissionNoComplete;
    private int m_MissionID = -1;
    public int MissionID
    {
        get { return m_MissionID; }
        set { m_MissionID = value; }
    }

    public TweenScale m_EffectSprite;
	public GameObject m_Effect;
	public GameObject m_EffectDiff;

	// 奖励物品的图标
	public UISprite ItemIcon;
	// 奖励物品的底框
	public UISprite ItemDiKuang;
	// 奖励物品获得的特效
	public GameObject ItemDuang;

	// 跑环进度条
	public UISprite ProcessSprite;

	void Awake()
	{
		UpdateMissionFollowBlink(false);

	}
	// Use this for initialization
	void Start () {
        Init();
	}

	void OnEnable ()
	{
		Messenger.AddListener (MessengerConst.OnUpdatePaoHuanInfo, OnUpdatePaoHuanInfo);
	}

	void OnDisable () {
		Messenger.RemoveListener (MessengerConst.OnUpdatePaoHuanInfo, OnUpdatePaoHuanInfo);
	}

    void Init()
    {
        TweenAlpha[] missionTableAlphaArray = m_MissionTitle.gameObject.GetComponents<TweenAlpha>();
        for (int i = 0; i < missionTableAlphaArray.Length; ++i)
        {
            if (missionTableAlphaArray[i].tweenGroup == 2)
            {
                missionTableAlphaArray[i].enabled = false;
                if (!enabled)
                {
                    missionTableAlphaArray[i].Reset();
                }
            }
        }
        
        TweenAlpha[] missionTitleAlphaArray = m_MissionTitle.gameObject.GetComponents<TweenAlpha>();
        for (int i = 0; i < missionTitleAlphaArray.Length; ++i)
        {
            if (missionTitleAlphaArray[i].tweenGroup == 2)
            {
                missionTitleAlphaArray[i].enabled = false;
                if (!enabled)
                {
                    missionTitleAlphaArray[i].Reset();
                }
            }
        }
    }

    // 点击MissionItem
    void MissionItemClicked()
    {
        if (NewPlayerGuidLogic.IsOpenFlag)
        {
            NewPlayerGuidLogic.CloseWindow();
        }
        if (GameManager.gameManager.MissionManager != null)
        {
            GameManager.gameManager.MissionManager.MissionPathFinder(m_MissionID);
        }
        Games.LogicObj.Obj_MainPlayer mainPalyer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null != mainPalyer && null != mainPalyer.SkillCore
            && mainPalyer.SkillCore.UsingSkillBaseInfo != null
            && mainPalyer.SkillCore.UsingSkillBaseInfo.IsMoveBreak == 1)
        {
            mainPalyer.SkillCore.BreakCurSkill();
        }
    }

    public void UpdateMissionFollowBlink(bool enabled)
    {
//         foreach (TweenAlpha nTween in m_MissionTitle.gameObject.GetComponents<TweenAlpha>())
//         {
//             if (nTween.tweenGroup == 2)
//             {
//                 nTween.enabled = enabled;
//                 if (!enabled)
//                 {
//                     nTween.Reset();
//                 }
//             }
//         }
//         foreach (TweenAlpha nTween in m_MissionInfo.gameObject.GetComponents<TweenAlpha>())
//         {
//             if (nTween.tweenGroup == 2)
//             {
//                 nTween.enabled = enabled;
//                 if (!enabled)
//                 {
//                     nTween.Reset();
//                 }
//             }
//         }

        if (m_EffectSprite)
        {
            m_EffectSprite.enabled = enabled;
            m_EffectSprite.gameObject.SetActive(enabled);
            if (m_EffectSprite.enabled)
            {
                m_EffectSprite.Play(enabled);
            }
            else
            {
                m_EffectSprite.Reset();
            }
        }
        
    }

	/// <summary>
	/// 设置奖励物品图标
	/// </summary>
	/// <param name="itemID">Item I.</param>
	public void SetAwardItemID (int itemID)
	{
		Tab_CommonItem commonItem = TableManager.GetCommonItemByID(itemID, 0);
		if (commonItem != null) 
		{
			ItemIcon.gameObject.SetActive (true);
			ItemDiKuang.gameObject.SetActive (true);
			ProcessSprite.gameObject.SetActive (true);
			ItemIcon.spriteName = commonItem.Icon;
			ItemDiKuang.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid [commonItem.Quality - 1];

			OnUpdatePaoHuanInfo ();
		}
		else
		{
			ItemIcon.gameObject.SetActive (false);
			ItemDiKuang.gameObject.SetActive (false);
			ItemDuang.gameObject.SetActive (false);
			ProcessSprite.gameObject.SetActive (false);
		}
	}

	public void PlayAwardEffect ()
	{
		ItemDuang.SetActive (true);
	}

	private void OnClickItemIcon ()
	{
		if (GameManager.gameManager.MissionManager.PaoHuanInfo.AwardTipShowing) {
			ItemDuang.SetActive (false);
			GameManager.gameManager.MissionManager.PaoHuanInfo.AwardTipShowing = false;
			SetAwardItemID (GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentSpecialAwardItemID());
		}
	}

	private void OnUpdatePaoHuanInfo()
	{
		if (ProcessSprite.gameObject.activeSelf) {
			int currentPos = (GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentNum - 1) % 10;
			ProcessSprite.fillAmount = currentPos / 10f;
			if (GameManager.gameManager.MissionManager.PaoHuanInfo.AwardTipShowing) {
				PlayAwardEffect ();
			}
		}
	}

    public void OnUpdateMissionStateIcon(MissionState m_MissionState)
    {
        if (m_MissionState == MissionState.Mission_Completed)
        {
            m_MissionComplete.SetActive(true);
            m_MissionNoComplete.SetActive(false);
        }
        else
        {
            m_MissionComplete.SetActive(false);
            m_MissionNoComplete.SetActive(true);
        }
    }

	public void UpdateMissionEffect()
	{
		Tab_MissionDictionary tabMissionDic = TableManager.GetMissionDictionaryByID(m_MissionID,0);
		bool bIsDifficult = tabMissionDic.IsDifficult;

		m_Effect.SetActive(!bIsDifficult);
		m_EffectDiff.SetActive(bIsDifficult);
	}
}
