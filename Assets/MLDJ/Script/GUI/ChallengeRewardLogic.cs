using UnityEngine;
using System.Collections;
using Games.LogicObj;
using Games.GlobeDefine;
using GCGame.Table;
using GCGame;
public enum ChallegeRewardUIType
{
    Challenge = 0,
    HuaShan = 1,
    Duel=2,
    WorldBoss=3,
    WuLin=4,
}
public class ChallengeRewardLogic : MonoBehaviour {

    private static ChallengeRewardLogic m_Instance = null;
    public static int RewardType{ set; get; }


    public static ChallengeRewardLogic Instance()
    {
        return m_Instance;
    }


    public UISprite SprWinOrLose;
    public UILabel LableResult;


    void Awake()
    {
        m_Instance = this;
    }

	// Use this for initialization
	void Start ()
	{
        ShowRewardUIByType( );
	}

    void OnDestroy()
    {
        m_Instance = null;
    }
 
	public static void  ShowRewardUI( int type )
	{
        ChallengeRewardLogic.RewardType = type;
        UIManager.ShowUI(UIInfo.ChallengeRewardRoot);
	}

    public void ShowRewardUIByType( )
    {
        switch( ChallengeRewardLogic.RewardType )
        {
            case (int)ChallegeRewardUIType.Challenge: 
                ShowChallengeResult();
                break;
            case (int)ChallegeRewardUIType.HuaShan:
                ShowHuaShanPvPResult();
                break;
            case (int)ChallegeRewardUIType.Duel:
                ShowDuelResultUI();
                break;
            case (int)ChallegeRewardUIType.WorldBoss:
                ShowWorldBossChallResultUI();
                break;
            case (int)ChallegeRewardUIType.WuLin:
                ShowWuLinResult();
                break;

        };
    }

    public void ShowChallengeResult( )
    {
        if (PVPData.ChallengeIsLose == 0)
        {
            LableResult.text = StrDictionary.GetClientDictionaryString("#{1230}", PVPData.ChallengeSpirit, PVPData.ChallengeReputation);
            SprWinOrLose.spriteName = "Win";
        }
        else
        {
            LableResult.text = StrDictionary.GetClientDictionaryString("#{1231}", PVPData.ChallengeSpirit, PVPData.ChallengeReputation);
            SprWinOrLose.spriteName = "Lose";
        }
    }

     public void ShowHuaShanPvPResult( )
    {
        string tips = HuaShanPVPData.HSRoundTipPrefix();
        if (HuaShanPVPData.Resultwin == 1)
        {
            if( HuaShanPVPData.Rounder == 1)
                LableResult.text = StrDictionary.GetClientDictionaryString("#{2346}"); 
            else
                LableResult.text = StrDictionary.GetClientDictionaryString("#{1664}", tips);
            SprWinOrLose.spriteName = "Win";
        }
        else
        {
            LableResult.text = StrDictionary.GetClientDictionaryString("#{1665}", tips);
            SprWinOrLose.spriteName = "Lose";
        }
    }

    public void ShowDuelResultUI( )
    {
        if (HuaShanPVPData.DuelResult == 1)
         {
             LableResult.text = StrDictionary.GetClientDictionaryString("#{1661}"); ;
             SprWinOrLose.spriteName = "Win";
         }
         else
         {
             LableResult.text = StrDictionary.GetClientDictionaryString("#{1662}"); ;
             SprWinOrLose.spriteName = "Lose";
         }
     
    }

    public void ShowWorldBossChallResultUI()
    {
        if (HuaShanPVPData.DuelResult == 1)
        {
            LableResult.text = StrDictionary.GetClientDictionaryString("#{3024}"); ;
            SprWinOrLose.spriteName = "Win";
        }
        else
        {
            LableResult.text = StrDictionary.GetClientDictionaryString("#{3025}"); ;
            SprWinOrLose.spriteName = "Lose";
        }

    }
    
    void ChallengeOkCallBack()
    {
        switch (ChallengeRewardLogic.RewardType)
        {
            case 0:
                HandleClickChallengeOk();
                SendLeaveCopySceneMsg();
//                 if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WUDAOZHIDIAN)
//                 {// 副本场景直接发包返回副本前场景 不查表
//                     CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
//                     packet.NoParam = -1;
//                     packet.SendPacket();
//                 }
                break;
            case 1:
                if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUASHANLUNJIAN)
                {// 副本场景直接发包返回副本前场景 不查表
                    CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
                    packet.NoParam = -1;
                    packet.SendPacket();
                }
                break;
            case 2:
                if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_RICHANGJUEDOU)
                {// 副本场景直接发包返回副本前场景 不查表
                    CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
                    packet.NoParam = -1;
                    packet.SendPacket();
                }
                break;
            default:
                break;
        };

        UIManager.CloseUI(UIInfo.ChallengeRewardRoot);
    }

    /// <summary>
    /// 竞技场结算 点击结算弹出框中的确定按钮后的事件
    /// 处理需求：从竞技场出来后应该打开UI->活动->竞技场
    /// </summary>
    public void HandleClickChallengeOk()
    {
        if (GameManager.gameManager.ActiveScene.IsCopyScene() == false) //不是副本
        {
            //这个窗是在竞技场外面弹开的 - 打开竞技场UI
            PVPData.ChallengeAutoShow = true;
            PVPData.CheckAutoShowChallengeUI();
        }
        else
        {
            //在竞技场页面弹开的- 从竞技场出去后在打开竞技场UI
            PVPData.ChallengeAutoShow = true;
        }
    }

    void SendLeaveCopySceneMsg()
    {
        CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
        packet.NoParam = -1;
        packet.SendPacket();
    }

    public void ShowWuLinResult()
    {
        string tips = WuLinData.WuLinRoundTipPrefix();
        if (WuLinData.Resultwin == 1)
        {
            if (WuLinData.Rounder == 1)
                LableResult.text = StrDictionary.GetClientDictionaryString("#{4813}");
            else
                LableResult.text = StrDictionary.GetClientDictionaryString("#{4824}", tips);
            SprWinOrLose.spriteName = "Win";
        }
        else
        {
            LableResult.text = StrDictionary.GetClientDictionaryString("#{4825}", tips);
            SprWinOrLose.spriteName = "Lose";
        }
    }
}
