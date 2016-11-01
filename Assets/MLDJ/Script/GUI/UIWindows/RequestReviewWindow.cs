/********************************************************************
	created:	2014/12/15
	filename: 	RequestReview.cs
	author:		zhang dongai
	
	purpose:	请求玩家评论界面
*********************************************************************/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using Games.GlobeDefine;
using Games.UserCommonData;
using Games.Events;

public class RequestReviewWindow : MonoBehaviour 
{
    public GameObject m_RewardTipsLabel;
    void Awake()
    {
        if (0 == GameManager.gameManager.PlayerDataPool.ReviewRewardEnable)
        {
            if (null != m_RewardTipsLabel)
            {
                m_RewardTipsLabel.active = false;
            }
        }
    }

    void Start()
    {
    }

    void OnPleasureBtnClick()
    {
        //先把客户端的状态给改了
        PlayerPreferenceData.ReviewRefuseType = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WITH_PLEASURE;
        GameManager.gameManager.PlayerDataPool.ReviewResult = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WITH_PLEASURE;

        //notice gameserver
        CG_REVIEW_RESULT pPacket = (CG_REVIEW_RESULT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REVIEW_RESULT);
        if (null != pPacket)
        {
            pPacket.SetResult(GameManager.gameManager.PlayerDataPool.ReviewResult);//It is the most effective way that encourages us programming.
            pPacket.SendPacket();
        }

        GameEvent gameEvent = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_CALL_NAVIGATOR);
        gameEvent.IsDelay = true;
        gameEvent.DelayTime = 0.3f;
        Singleton<EventSystem>.GetInstance().PushEvent(gameEvent);

        UIManager.CloseUI(UIInfo.RequestReviewWindow);
        if (null != FunctionButtonLogic.Instance())
        {
            FunctionButtonLogic.Instance().UpdateActionButtonTip();
        }
        
    }

    void OnWaitBtnClick()
    {
        PlayerPreferenceData.ReviewRefuseType = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WAIT_FOR_A_MOMENT;
        PlayerPreferenceData.ClientLoginCount = 0;

        UIManager.CloseUI(UIInfo.RequestReviewWindow);
    }

    void OnRefuseBtnClick()
    {
        if ((int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.REFUSE_WITHOUT_RESON == PlayerPreferenceData.ReviewRefuseType)
        {
            PlayerPreferenceData.ReviewRefuseType = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.INTOLERABILITY;
            GameManager.gameManager.PlayerDataPool.ReviewResult = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.REFUSE_WITHOUT_RESON;
            CG_REVIEW_RESULT pPacket = (CG_REVIEW_RESULT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REVIEW_RESULT);
            if (null != pPacket)
            {
                pPacket.SetResult(GameManager.gameManager.PlayerDataPool.ReviewResult);//refuse without any concern.
                pPacket.SendPacket();

                if (null != FunctionButtonLogic.Instance())
                {
                    FunctionButtonLogic.Instance().UpdateActionButtonTip();
                }
                
            }
        }
        else
        {
            PlayerPreferenceData.ReviewRefuseType = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.REFUSE_WITHOUT_RESON;
            PlayerPreferenceData.ClientLoginCount = 0;
        }

        UIManager.CloseUI(UIInfo.RequestReviewWindow);
    }

    public static void OnTouchUI()
    {
        OnTouch();
    }

    public static void OnTouchObject()
    {
        OnTouch();
    }

    public static void OnTouchScene()
    {
        OnTouch();
    }

    static void OnTouch()
    {
        if (null == GameManager.gameManager.PlayerDataPool)
        {
            return;
        }
        int nReviewResult = GameManager.gameManager.PlayerDataPool.ReviewResult;
        if ((int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.DO_NOTHING == nReviewResult)
        {
            if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN ||
            GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOADINGSCENE)
            {
                return;
            }

            int nRefuseType = PlayerPreferenceData.ReviewRefuseType;
            if ((int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.DO_NOTHING == nRefuseType ||
                (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WAIT_FOR_A_MOMENT == nRefuseType)
            {
                if (5 <= PlayerPreferenceData.ClientLoginCount)
                {
                    //O(∩_∩)O
                    UIManager.ShowUI(UIInfo.RequestReviewWindow);
                }
            }
            else if ((int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.REFUSE_WITHOUT_RESON == nRefuseType)
            {
                if (30 <= PlayerPreferenceData.ClientLoginCount)
                {
                    //^_^
                    UIManager.ShowUI(UIInfo.RequestReviewWindow);
                }
            }
        }        
    }
}
