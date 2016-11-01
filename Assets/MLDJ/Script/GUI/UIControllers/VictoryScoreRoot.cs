using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Games.GlobeDefine;
using GCGame;
using Module.Log;
using Games.LogicObj;
public class VictoryScoreRoot : UIControllerBase<VictoryScoreRoot>
{

    public struct ItemInfo
    {
        public int type;
        public int itemId;
        public int count;
    }

    public UISprite[] m_SpriteReward;
    public UILabel[] m_LabelReward;

    public UISprite[] m_SpriteDraw;
    public UISprite[] m_DisableSpriteDraw;
    public UILabel[] m_LabelDraw;
    public UISprite[] m_SignSprite;
    public UISprite[] m_QualitySprite;

    public UILabel m_Lianji;
    public UILabel m_TongGuanTime;
    public UILabel m_Exp;
    public UILabel m_PetExp;
    public UILabel m_Money;
    public UILabel m_JiFen;

    public UILabel m_CangJingGeTier;
    public UILabel m_CangJingGeTime;

    public GameObject[] m_StarActive;
    public GameObject[] m_StarShine;

    public GameObject cover;

    public GameObject CangJingGeWindow;
    public GameObject ScoreWindow;
    public GameObject LotteryWindow;

    public GameObject GameWinWindow;
    public GameObject GameFailWindow;        //失败励UI
    public GameObject GameStaticWinWindow;   //无奖励显示胜利励UI

    public GameObject BG;
    //==============================================
    public GameObject m_OpenCopyButton;
    public GameObject m_QuitBtn;
    //==============================================
    public static List<ItemInfo> m_DrawList;  //奖赏物品
    public static List<ItemInfo> m_RewardList;  //奖赏物品

    public static List<ulong> m_UserInCopyScene;
    
    public static int m_nResult = 0;
    public static int m_nSceneId = 0;
    public static int m_nSolo = 0;
    public static int m_Difficult = 0;
    public static int m_nStar = 0;
    public static int m_nScore = 0;
    public static int m_nCarom = 0;
    public static int m_nTime = 0;
    public static int m_nExp = 0;
    public static int m_nMoney = 0;
    public static int m_nDrawIndex = 0;
    public static int m_nPetExp = 0;

    private static int m_FirstRewardIndex = -1;
    public static int m_nDrawIndexTwo = -1;
	public static int m_FanPaiNumber = 0;

    private float m_fDrawTime = Time.realtimeSinceStartup;
    private int m_nDrawIndexEx = -1;
    private bool m_bSend = false;
    private float m_fEndTime = 5.0f;

   // public UIImageButton ButtonDraw;
    public UIImageButton ButtonAllDraw;
    public UIImageButton ContinueGame;
    public UIImageButton CangJingGeDraw;
    public UIImageButton CangJingGeTier;
    public UIImageButton AutoAddFriend;
    public GameObject[] ButtonDraw;
    public UILabel m_FailText;
    public UILabel m_StaticWinText;
	// Use this for initialization

    // 结算背景移动进入动画相关
    public TweenPosition m_WinBGLeftTween;
    public TweenPosition m_WinBGRigthTween;
    public GameObject m_ScoreInfo;
    public GameObject m_LotteryInfo;

	// 剩余翻牌次数
	public UILabel m_RemainFanPaiCount;

    // 评级星闪烁动画相关
    private bool m_BeginStarActive = false;
    private float m_StarActiveStartTime = 0;
    private const float PerStarActive = 0.5f;
    private int CurStarActive = 0;

    // 令牌闪烁动画相关
    private bool m_BeginFanPaiShine = false;
    private float m_FanPaiShineStartTime = 0;
    private const float PerFanPaiShine = 0.03f;
    private int CurFanPaiShineFrame = 1;

    // 令牌翻转动画相关
    private bool m_BeginFanPaiAni = false;
    private float m_FanPaiAniStartTime = 0;
    private const float PerFanPaiAni = 0.03f;
    private int CurFanPaiAniFrame = 1;
    private int m_PlayerClickIndex = 0;

    // 其他令牌翻转动画相关
    private bool m_BeginFanPaiOther = false;
    private float m_FanPaiOtherStartTime = 0;
    private const float PerFanPaiOther = 0.03f;
    private int CurFanPaiOtherFrame = 1;

	// 下一层倒计时
	public UILabel m_NextLevelButton;
	private float m_nNextLevelAuto = GlobeVar.INVALID_ID;
	private const int m_nNextLevelAutoTimer = 5;
	private const int m_nMissionLevel = 2;
	private const int m_nMissionID = 328;

    /// <summary>
    /// 是否翻牌完成
    /// </summary>
    private bool m_IsCompleteVictory = false;

    void Awake()
    {
        SetInstance(this);
    }

    void Start () {
		m_RemainFanPaiCount.text = m_FanPaiNumber.ToString();
		m_nNextLevelAuto = GlobeVar.INVALID_ID;
        if (m_DrawList == null)
        {
            m_DrawList = new List<ItemInfo>();
        }
        if (m_RewardList == null)
        {
            m_RewardList = new List<ItemInfo>();
        }
        m_nDrawIndexEx = -1;
//         for (int i = 0; i < m_Star.Length; i++)
//         {
//             m_Star[i].spriteName = "weijihuo";//.gameObject.SetActive(false);
//         }

        if (m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI)
        {
			GameWinWindow.SetActive(false);
            LotteryWindow.SetActive(false);
            ScoreWindow.SetActive(false);
            CangJingGeWindow.SetActive(true);
            //m_CangJingGeTier.text = "层数:" + m_nStar.ToString();
            m_CangJingGeTier.text = StrDictionary.GetClientDictionaryString("#{2781}", m_nStar);
            //m_CangJingGeTime.text = "通过时间:" + m_nScore.ToString();
            m_CangJingGeTime.text = StrDictionary.GetClientDictionaryString("#{2782}", m_nScore);

            m_OpenCopyButton.SetActive(true);
            m_QuitBtn.SetActive(true);

        }
        else
        {
			GameWinWindow.SetActive(true);
            LotteryWindow.SetActive(true);
            ScoreWindow.SetActive(true);
            CangJingGeWindow.SetActive(false);
            m_CangJingGeTier.text = "";
            m_CangJingGeTime.text = "";

            m_OpenCopyButton.SetActive(false);
            m_QuitBtn.SetActive(false);
        }
        if (m_nResult == 1)
        {
            if (m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI)
            {
                BG.SetActive(false);
                GameWinWindow.SetActive(false);
                GameFailWindow.SetActive(false);
                GameStaticWinWindow.SetActive(true);
                //modified by mawenbin
                //藏经阁挑战胜利特殊处理
                //已通关最高层
                if (m_nStar >= (int)Games.GlobeDefine.GameDefine_Globe.MAX_COPYSCENE_CJGTIER)
                {
                    m_OpenCopyButton.SetActive(false);
                    m_StaticWinText.text = StrDictionary.GetClientDictionaryString("#{2658}");
                }
                else
                {
                    //单人藏经阁
                    if ((int)GameDefine_Globe.CopyScene_PlayType.SINGLE == m_nSolo)
                    {
						if(GameManager.gameManager.MissionManager.IsHaveMission(m_nMissionID)&&m_nStar==m_nMissionLevel)
						{
							m_nNextLevelAuto = GlobeVar.INVALID_ID;
						}
						else
						{
							m_nNextLevelAuto = m_nNextLevelAutoTimer;
						}

                        m_OpenCopyButton.SetActive(true);
                        m_StaticWinText.text = StrDictionary.GetClientDictionaryString("#{2220}", m_nStar);
                    }
                    //组队藏经阁
                    else if ((int)GameDefine_Globe.CopyScene_PlayType.MULTIPLE == m_nSolo)
                    {
                        Obj_MainPlayer MainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                        if (null != MainPlayer)
                        {
                            //队长显示下一层按钮
                            if (MainPlayer.IsTeamLeader())
                            {
                                m_OpenCopyButton.SetActive(true);
                                m_StaticWinText.text = StrDictionary.GetClientDictionaryString("#{2220}", m_nStar);
                            }
                            //组队藏经阁队员不显示下一层按钮
                            else
                            {
                                m_OpenCopyButton.SetActive(false);
                                m_StaticWinText.text = StrDictionary.GetClientDictionaryString("#{10828}", m_nStar);
                            }
                        }
                    }
                }
            }
            else
            {
                if (m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ZHENLONGQIJU ||
                   m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JUXIANZHUANG ||
                   m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU ||
                   m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU ||
                   m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUTOUZHANCHUAN ||
                   m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN ||
                   m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANMENGUANDEFENCE)
                {
                    GameWinWindow.SetActive(false);
                    GameFailWindow.SetActive(false);
                    BG.SetActive(false);
                    m_fEndTime = Time.realtimeSinceStartup + 3.0f;
                    //m_StaticWinText.text = "副本成功";
                    //m_StaticWinText.text = StrDictionary.GetClientDictionaryString("#{2783}");
                }
                else
                {
                    GameWinWindow.SetActive(false);
                    GameFailWindow.SetActive(false);
                    if (BackCamerControll.Instance() != null)
                    {
                        BackCamerControll.Instance().PlaySceneEffect(475);
                    }
                    GameManager.gameManager.SoundManager.PlaySoundEffect(249);
                    BG.SetActive(false);
                    m_fEndTime = Time.realtimeSinceStartup + 2.0f;
                    //m_StaticWinText.text = "副本成功";
                    //m_StaticWinText.text = StrDictionary.GetClientDictionaryString("#{2783}");
                }
            }

        }
        else
        {
            if (m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI)
            {
                BG.SetActive(false);
                GameWinWindow.SetActive(false);
                GameFailWindow.SetActive(true);
                GameStaticWinWindow.SetActive(false); 
                m_FailText.text = StrDictionary.GetClientDictionaryString("#{2219}", m_nStar);
            }
            else
            {
                BG.SetActive(false);
                GameWinWindow.SetActive(false);
                GameFailWindow.SetActive(true);
                //m_FailText.text = "副本失败";
                m_FailText.text = StrDictionary.GetClientDictionaryString("#{2784}");
            }
        }        
        m_Lianji.text = m_nCarom.ToString();
        Tab_SceneClass pSceneClass = null;
        Tab_CopyScene pCopyScene = null;
        Tab_CopySceneRule pCopySceneRule = null;
        if (m_nSceneId == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI)
        {

            pCopySceneRule = TableManager.GetCopySceneRuleByID(m_nStar, 0);
            if (pCopySceneRule == null)
            {
                return;
            }
        }
        else
        {
            pSceneClass = TableManager.GetSceneClassByID(m_nSceneId, 0);
            if (pSceneClass == null)
            {
                return;
            }

            pCopyScene = TableManager.GetCopySceneByID(pSceneClass.CopySceneID, 0);
            if (pCopyScene == null)
            {
                return;
            }
            if (m_nSolo == 1)
            {
                pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRulebyIndex(m_Difficult - 1), 0);
            }
            else
            {
                pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRuleTeambyIndex(m_Difficult - 1), 0);
            }
            if (pCopySceneRule == null)
            {
                return;
            }
        }
        
        string TongGuanSec = (m_nTime % 60).ToString();
        if (m_nTime % 60 < 10 )
        {
            TongGuanSec = "0" + (m_nTime % 60).ToString();
        }
        string RuleSec = (pCopySceneRule.ExistTime % 60).ToString();
        if (pCopySceneRule.ExistTime % 60 < 10)
        {
            RuleSec = "0" + (pCopySceneRule.ExistTime % 60).ToString();
        }

        m_TongGuanTime.text = (m_nTime / 60).ToString() + ":" + TongGuanSec + "/" + (pCopySceneRule.ExistTime / 60).ToString() + ":" + RuleSec;
        m_Exp.text = m_nExp.ToString();
        m_PetExp.text = m_nPetExp.ToString();
        m_Money.text = m_nMoney.ToString();
        m_JiFen.text = m_nScore.ToString();

        for (int i = 0; i < 6; ++i )
        {
            m_SpriteDraw[i].spriteName = "";
            m_LabelDraw[i].text = "0";
        }
        for (int i = 0; i < 10; ++i)
        {
            m_SpriteReward[i].spriteName = "";
            m_LabelReward[i].text = "0";
        }
        for (int i = 0; i < m_DrawList.Count && i < 4; ++i)
        {

            if (m_DrawList[i].type== 1)  //物品
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(m_DrawList[i].itemId, 0);
                if (curItem != null)
                {
                    m_SpriteDraw[i].spriteName = curItem.Icon;
                    m_LabelDraw[i].text = m_DrawList[i].count.ToString();
                }
            }
            else if (m_DrawList[i].type == 2)  //金钱
            {
                m_SpriteDraw[i].spriteName = "jinbi";
                m_LabelDraw[i].text = m_DrawList[i].count.ToString();
            }
            else if (m_DrawList[i].type == 3)  //元宝
            {
                m_SpriteDraw[i].spriteName = "yuanbao";
                m_LabelDraw[i].text = m_DrawList[i].count.ToString();
            }
            else if (m_DrawList[i].type == 4)  //经验
            {
                m_SpriteDraw[i].spriteName = "jingyan";
                m_LabelDraw[i].text = m_DrawList[i].count.ToString();
            }
              
        }
        for (int i = 0; i < m_RewardList.Count && i < 10; ++i)
        {
            if (m_RewardList[i].type == 1)  //物品
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(m_RewardList[i].itemId, 0);
                if (curItem != null)
                {
                    m_SpriteReward[i].spriteName = curItem.Icon;
                    m_LabelReward[i].text = m_RewardList[i].count.ToString();
                }
            }
            else if (m_RewardList[i].type == 2)  //金钱
            {
                m_SpriteReward[i].spriteName = "jinbi";
                m_LabelReward[i].text = m_RewardList[i].count.ToString();
            }
            else if (m_RewardList[i].type == 3)  //元宝
            {
                m_SpriteReward[i].spriteName = "yuanbao";
                m_LabelReward[i].text = m_RewardList[i].count.ToString();
            }
            else if (m_RewardList[i].type == 4)  //经验
            {
                m_SpriteReward[i].spriteName = "jingyan";
                m_LabelReward[i].text = m_RewardList[i].count.ToString();
            }

        }
        UpdateButtonState(false);

		showNewGuild ();
    }

    /// <summary>
    /// 初始化藏经阁胜利界面
    /// 1：队长显示“离开”和“下一层”按钮；
    /// 2：队员只显示“离开”按钮；
    /// </summary>
    private void InitGameStaticWinWindow()
    {

    }

    //Update is called once per frame
	void Update () {
        if (m_fDrawTime - Time.realtimeSinceStartup <= 0 && m_nDrawIndexEx == m_nDrawIndex && m_nDrawIndexEx != -1)
        {
            SendData(0);
            m_nDrawIndexEx = -1;
            ClearCover();
        }
        else if (m_nDrawIndexEx != -1)
        {
            m_nDrawIndexEx += 1;
            if (m_nDrawIndexEx >= 6 )
            {
                m_nDrawIndexEx = 0;
            }
            //m_nDrawIndexEx
            m_DisableSpriteDraw[0].gameObject.SetActive(false);
            m_DisableSpriteDraw[1].gameObject.SetActive(false);
            m_DisableSpriteDraw[2].gameObject.SetActive(false);
            m_DisableSpriteDraw[3].gameObject.SetActive(false);
            m_DisableSpriteDraw[4].gameObject.SetActive(false);
            m_DisableSpriteDraw[5].gameObject.SetActive(false);
            m_DisableSpriteDraw[m_nDrawIndexEx].gameObject.SetActive(true);
            //SendData(0);
            //ClearCover();
        }
        if (m_nResult == 1 && m_nSceneId != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI)
        {
            if (m_fEndTime - Time.realtimeSinceStartup <= 0)
            {
                if (!GameWinWindow.activeSelf)
                {
                    m_ScoreInfo.SetActive(false);
                    m_LotteryInfo.SetActive(false);

                    GameWinWindow.SetActive(true);

					GameWinWindow.SetActive(true);
					LotteryWindow.SetActive(true);
					ScoreWindow.SetActive(true);
					CangJingGeWindow.SetActive(false);
					m_WinBGLeftTween.gameObject.SetActive(true);
					m_CangJingGeTier.text = "";
					m_CangJingGeTime.text = "";

                    BG.SetActive(false);

                    m_WinBGLeftTween.Play();
                    m_WinBGRigthTween.Play();                    
                }
            }
        }
        
        UpdateShowStarActive();
        //UpdateFanPaiShine();
        UpdateFanPaiAni();
        UpdateFanPaiOther();

		if( m_nNextLevelAuto > 0 )
		{
			m_nNextLevelAuto -= Time.deltaTime;
			m_NextLevelButton.text = StrDictionary.GetClientDictionaryString("#{3824}")+":"+((int)m_nNextLevelAuto).ToString();
			if(m_nNextLevelAuto<=0)
			{
				m_NextLevelButton.text = StrDictionary.GetClientDictionaryString("#{3824}");
				m_nNextLevelAuto = GlobeVar.INVALID_ID;
				OnTierClick();
			}
		}
	}

    public void WinBGTweenOver()
    {
        m_ScoreInfo.SetActive(true);
        m_LotteryInfo.SetActive(true);

        m_BeginStarActive = true;
        m_StarActiveStartTime = Time.time;
    }

    void UpdateShowStarActive()
    {
        if (m_BeginStarActive)
        {
            if (Time.time - m_StarActiveStartTime >= PerStarActive && CurStarActive < m_nStar)
            {
                m_StarActiveStartTime = Time.time;
                m_StarActive[CurStarActive].SetActive(true);
                m_StarShine[CurStarActive].SetActive(true);
                GameManager.gameManager.SoundManager.PlaySoundEffect(251);
                CurStarActive += 1;          
            }
            if (CurStarActive == m_nStar)
            {
                m_IsCompleteVictory = false;
                m_BeginStarActive = false;
                m_StarActiveStartTime = 0;
                CurStarActive = 0;

                m_BeginFanPaiShine = true;
                m_FanPaiShineStartTime = Time.fixedTime - PerFanPaiShine + 1;
            } 
        }
    }

    // 播放令牌闪光帧动画
    void UpdateFanPaiShine()
    {
        if (m_BeginFanPaiShine)
        {
            if (Time.fixedTime - m_FanPaiShineStartTime >= PerFanPaiShine)
            {
                if (CurFanPaiShineFrame == 1)
                {
                    for (int i = 0; i < ButtonDraw.Length; i++)
                    {
                        ButtonDraw[i].SetActive(true);
                    }
                }

                for (int i = 0; i < m_SignSprite.Length; i++ )
                {
                    m_SignSprite[i].spriteName = "lingpai_00" + CurFanPaiShineFrame.ToString();
                }
                m_FanPaiShineStartTime = Time.fixedTime;

                // 共6帧
                if (CurFanPaiShineFrame >= 6)
                {
                    m_BeginFanPaiShine = false;
                    m_FanPaiShineStartTime = 0;
                    CurFanPaiShineFrame = 1;
                    return;
                }
                else
                {
                    CurFanPaiShineFrame += 1;
                }     
            }
        }
    }

    /// <summary>
    /// 翻牌动画
    /// </summary>
    void UpdateFanPaiAni()
    {
        if (m_BeginFanPaiAni)
        {
            if (Time.fixedTime - m_FanPaiAniStartTime >= PerFanPaiAni)
            {
                m_SignSprite[m_PlayerClickIndex].spriteName = "fanpai_00" + CurFanPaiAniFrame.ToString();
                m_FanPaiShineStartTime = Time.fixedTime;

                // 共4帧
                if (CurFanPaiAniFrame >= 4)
                {
                    m_BeginFanPaiAni = false;
                    m_FanPaiAniStartTime = 0;
                    CurFanPaiAniFrame = 1;
                    // 播放结束后消失
                    m_SignSprite[m_PlayerClickIndex].gameObject.SetActive(false);
                    // 其他令牌开始翻转

                    if (m_IsCompleteVictory)
                    {
                        m_BeginFanPaiOther = true;
                        m_FanPaiOtherStartTime = Time.fixedTime + 0.3f;
                    }
                    return;
                }
                else
                {
                    CurFanPaiAniFrame += 1;
                }
            }
        }
    }

    void UpdateFanPaiOther()
    {
        if (m_BeginFanPaiOther)
        {
            if (Time.fixedTime - m_FanPaiOtherStartTime >= PerFanPaiOther)
            {
                for (int i = 0; i < m_SignSprite.Length; i++ )
                {
                    if (i != m_PlayerClickIndex)
                    {
                        m_SignSprite[i].spriteName = "fanpai_00" + CurFanPaiOtherFrame.ToString();
                    }
                }
                m_FanPaiOtherStartTime = Time.fixedTime;

                // 共4帧
                if (CurFanPaiOtherFrame >= 4)
                {
                    m_BeginFanPaiOther = false;
                    m_FanPaiOtherStartTime = 0;
                    CurFanPaiOtherFrame = 1;
                    // 播放结束后消失
                    for (int i = 0; i < m_SignSprite.Length; i++)
                    {
                        if (i != m_PlayerClickIndex)
                        {
                            m_SignSprite[i].gameObject.SetActive(false);
                        }
                    }
                    return;
                }
                else
                {
                    CurFanPaiOtherFrame += 1;
                }
            }
        }
    }

    public static void Clear()
    {
        if (m_DrawList == null)
        {
            m_DrawList = new List<ItemInfo>();
        }
        if (m_RewardList == null)
        {
            m_RewardList = new List<ItemInfo>();
        }

        if (m_UserInCopyScene == null)
        {
            m_UserInCopyScene = new List<ulong>();
        }

        m_DrawList.Clear();  //奖赏物品
        m_RewardList.Clear();  //奖赏物品
        m_UserInCopyScene.Clear();
        m_nStar = 0;
        m_nScore = 0;
        m_nCarom = 0;
        m_nTime = 0;
        m_nExp = 0;
        m_nMoney = 0;
        m_nDrawIndex = 0;
        m_nSceneId = -1;
        m_FirstRewardIndex = -1;
        m_nDrawIndexTwo = -1;
        m_FanPaiNumber = 0;
        m_OverFanPaiNum = 0;
    }

    public static void addUserInScene(ulong guid)
    {
        if (m_UserInCopyScene == null)
        {
            m_UserInCopyScene = new List<ulong>();
        }

        m_UserInCopyScene.Add(guid);
    }

    public void AutoAddFriendAll()
    {
        if( m_UserInCopyScene != null )
        {
            for (int i = 0; i < m_UserInCopyScene.Count; i++)
            {
                if (m_UserInCopyScene[i] != Games.GlobeDefine.GlobeVar.INVALID_GUID)
                {
                    if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
                    {
                        Singleton<ObjManager>.GetInstance().MainPlayer.ReqAddFriend(m_UserInCopyScene[i]);
                    }
                }
            }
        }
    }

    public static void addDrawList(int type, int ItemId, int count)
    {
        if (m_DrawList == null)
        {
            m_DrawList = new List<ItemInfo>();
        }
        ItemInfo info;
        info.type = type;
        info.itemId = ItemId;
        info.count = count;
        m_DrawList.Add(info);

    }
    public static void addRewardList(int type, int ItemId, int count)
    {
        if (m_RewardList == null)
        {
            m_RewardList = new List<ItemInfo>();
        }
        ItemInfo info;
        info.type = type;
        info.itemId = ItemId;
        info.count = count;
        m_RewardList.Add(info);
    }
    public void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.VictoryScoreRoot);
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            Singleton<ObjManager>.Instance.MainPlayer.ExitTime = 1;
        }
        
    }
    public void OnDraw()
    {
        cover.SetActive(true);
       // MessageBoxLogic.OpenWaitBox(1290, GameDefines.CONNECT_TIMEOUT, GameDefines.CONNECT_WAIT_DELAY); 
         m_fDrawTime = Time.realtimeSinceStartup + 3.0f;
         m_nDrawIndexEx = 0;
        

        //SendData(0);
    }
    public void OnAllDraw()
    {
        cover.SetActive(true);
       // MessageBoxLogic.OpenWaitBox(1290, GameDefines.CONNECT_TIMEOUT, GameDefines.CONNECT_WAIT_DELAY); 
        SendData(1);
    }
    public void OnCangJingGeDraw()
    {
        cover.SetActive(true);
        SendData(0);
    }
    public void OnQuitCopyScene()
    {
        CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
        packet.NoParam = 1;
        packet.SendPacket();
    }
    public void ClearSend()
    {
        m_bSend = false;
    }
    void SendData(int All)
    {
        if (m_bSend == false)
        {
            CG_ASK_COPYSCENE_REWARD packet = (CG_ASK_COPYSCENE_REWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_COPYSCENE_REWARD);
            packet.SetSceneID(GameManager.gameManager.RunningScene);
            packet.SetType(All);
            packet.SendPacket();
            m_bSend = true;
            //MessageBoxLogic.OpenWaitBox(1290, 5, 0); 
        }
        else
        {
            if (Singleton<ObjManager>.Instance.MainPlayer)
            {
                //Singleton<ObjManager>.Instance.MainPlayer.SendMessage("请耐心等待");   //稍后替换
                Singleton<ObjManager>.Instance.MainPlayer.SendMessage(StrDictionary.GetClientDictionaryString("#{2891}"));   //稍后替换
            }
        }
        
    }
    public void ClearCover()
    {
        cover.SetActive(false);
    }
    public void OnTierClick()
    {
//         CG_OPEN_COPYSCENE packet = (CG_OPEN_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_OPEN_COPYSCENE);
        //         packet.SceneID = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI;
//         packet.Type = 1;
//         packet.Difficult = 1;
//         packet.SendPacket();

        if(GameManager.gameManager.PlayerDataPool == null)
        {
            return;
        }
        if (GameManager.gameManager.PlayerDataPool.CopySceneChange) //正在传送中
        {
            return;
        }
        GameManager.gameManager.PlayerDataPool.CopySceneChange = true;
        //进入下个副本
        CG_OPEN_COPYSCENE packet = (CG_OPEN_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_OPEN_COPYSCENE);
        packet.SceneID = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI;
        packet.Type = 1;
        packet.Difficult = 1;
        packet.EnterType = 2;   //传送点进入
        packet.SendPacket();
//         if (Singleton<ObjManager>.GetInstance() == null)
//         {
//             return;
//         }
        //         Singleton<ObjManager>.GetInstance().MainPlayer.SendOpenScene((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI, 1, 1);
    }

    public void UpdateButtonState(bool isDraw)
    {
        // ButtonDraw.isEnabled = false;
         ButtonAllDraw.isEnabled = false;
         ContinueGame.isEnabled = false;
         CangJingGeDraw.isEnabled = false;
         CangJingGeTier.isEnabled = false;
         AutoAddFriend.isEnabled = false;
        if (isDraw)
        {
            ContinueGame.isEnabled = true;
            if (m_UserInCopyScene != null && m_UserInCopyScene.Count > 0)
            {
                AutoAddFriend.isEnabled = true;
            }
        }
        else
        {
           // ButtonDraw.isEnabled = true;
            ButtonAllDraw.isEnabled = true;
            CangJingGeDraw.isEnabled = true;
            CangJingGeTier.isEnabled = true;
        }  
    }

    private static int m_OverFanPaiNum = 0;

    public void Lottery1()
    {
        //m_PlayerClickIndex = 0;
        //m_BeginFanPaiAni = true;
        //m_FanPaiAniStartTime = Time.fixedTime;
        //LotteryReward(0);

        LotteryFanPai(0);
    }
    public void Lottery2()
    {
        //m_PlayerClickIndex = 1;
        //m_BeginFanPaiAni = true;
        //m_FanPaiAniStartTime = Time.fixedTime;
        //LotteryReward(1);

        LotteryFanPai(1);
    }
    public void Lottery3()
    {
        //m_PlayerClickIndex = 2;
        //m_BeginFanPaiAni = true;
        //m_FanPaiAniStartTime = Time.fixedTime;
        //LotteryReward(2);

        LotteryFanPai(2);
    }
    public void Lottery4()
    {
        //m_PlayerClickIndex = 3;
        //m_BeginFanPaiAni = true;
        //m_FanPaiAniStartTime = Time.fixedTime;
        //LotteryReward(3);

        LotteryFanPai(3);
    }

    private void LotteryFanPai(int nIndex)
    {
        m_OverFanPaiNum++;
		int nRemainFanPaiCount = m_FanPaiNumber-m_OverFanPaiNum;
		if(nRemainFanPaiCount<0)
			nRemainFanPaiCount = 0;
		m_RemainFanPaiCount.text = nRemainFanPaiCount.ToString();

        //if (m_OverFanPaiNum >= m_FanPaiNumber)
        //{
        //    m_BeginFanPaiAni = true;
        //    m_FanPaiAniStartTime = Time.fixedTime;
        //}

        m_PlayerClickIndex = nIndex;
        m_FanPaiAniStartTime = Time.fixedTime;
        m_BeginFanPaiAni = true;
        CurFanPaiAniFrame = 1;

        //第一次
        if (m_OverFanPaiNum <= 1)
        {
            LotteryReward(nIndex);
            ShowVictore(nIndex, m_nDrawIndex);
            m_FirstRewardIndex = nIndex;
        }
        else
        {
            ShowVictore(nIndex, m_nDrawIndexTwo);
        }
    }

    public void LotteryReward(int nReward)
    {
        //m_nDrawIndex
        for (int i = 0; i < m_DrawList.Count && i < 4; ++i)
        {
            if (m_DrawList[i].type == 1)  //物品
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(m_DrawList[i].itemId, 0);
                if (curItem != null)
                {
                    m_SpriteDraw[i].spriteName = curItem.Icon;
                    m_LabelDraw[i].text = m_DrawList[i].count.ToString();
                }
            }
            else if (m_DrawList[i].type == 2)  //金钱
            {
                m_SpriteDraw[i].spriteName = "jinbi";
                m_LabelDraw[i].text = m_DrawList[i].count.ToString();
            }
            else if (m_DrawList[i].type == 3)  //元宝
            {
                m_SpriteDraw[i].spriteName = "yuanbao";
                m_LabelDraw[i].text = m_DrawList[i].count.ToString();
            }
            else if (m_DrawList[i].type == 4)  //经验
            {
                m_SpriteDraw[i].spriteName = "jingyan";
                m_LabelDraw[i].text = m_DrawList[i].count.ToString();
            }
            
        }

        //交换点击的物品,但资源就四个,抽奖物品10个,做特殊处理
        //if (nReward != m_nDrawIndex && nReward < 4)
        //{
        //    string spriteName = m_SpriteDraw[nReward].spriteName;
        //    string text = m_LabelDraw[nReward].text;
        //    if (m_DrawList[m_nDrawIndex].type == 1)  //物品
        //    {
        //        Tab_CommonItem curItem = TableManager.GetCommonItemByID(m_DrawList[m_nDrawIndex].itemId, 0);
        //        if (curItem != null)
        //        {
        //            m_SpriteDraw[nReward].spriteName = curItem.Icon;
        //            m_LabelDraw[nReward].text = m_DrawList[m_nDrawIndex].count.ToString();
        //        }
        //    }
        //    else if (m_DrawList[m_nDrawIndex].type == 2)  //金钱
        //    {
        //        m_SpriteDraw[nReward].spriteName = "jinbi";
        //        m_LabelDraw[nReward].text = m_DrawList[m_nDrawIndex].count.ToString();
        //    }
        //    else if (m_DrawList[m_nDrawIndex].type == 3)  //元宝
        //    {
        //        m_SpriteDraw[nReward].spriteName = "yuanbao";
        //        m_LabelDraw[nReward].text = m_DrawList[m_nDrawIndex].count.ToString();
        //    }
        //    else if (m_DrawList[m_nDrawIndex].type == 4)  //经验
        //    {
        //        m_SpriteDraw[nReward].spriteName = "jingyan";
        //        m_LabelDraw[nReward].text = m_DrawList[m_nDrawIndex].count.ToString();
        //    }
        //    if (m_nDrawIndex < 4)
        //    {
        //        m_SpriteDraw[m_nDrawIndex].spriteName = spriteName;
        //        m_LabelDraw[m_nDrawIndex].text = text;
        //    }

        //}
        //for (int i = 0; i < m_DrawList.Count && i < 4; ++i)
        //{
        //    //m_SignSprite[i].gameObject.SetActive(false);
        //    m_SpriteDraw[i].gameObject.SetActive(true);
        //    if (nReward == i)
        //    {
        //        m_DisableSpriteDraw[i].gameObject.SetActive(true);
        //    }
        //    else
        //    {
        //        m_QualitySprite[i].gameObject.SetActive(true);
        //    }
        //    m_LabelDraw[i].gameObject.SetActive(true);
        //    ButtonDraw[i].GetComponent<BoxCollider>().enabled = false;
        //}
        //ContinueGame.gameObject.SetActive(true);
        //AutoAddFriend.gameObject.SetActive(true);
        //SendData(0);
    }

    private void ShowVictore(int nReward, int nIndex)
    {
        //交换点击的物品,但资源就四个,抽奖物品10个,做特殊处理
        if (nReward != nIndex && nReward < 4 && nIndex >= 0 && nIndex < m_DrawList.Count && nReward < m_SpriteDraw.Length)
        {
            string spriteName = m_SpriteDraw[nReward].spriteName;
            string text = m_LabelDraw[nReward].text;
            if (m_DrawList[nIndex].type == 1)  //物品
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(m_DrawList[nIndex].itemId, 0);
                if (curItem != null)
                {
                    m_SpriteDraw[nReward].spriteName = curItem.Icon;
                    m_LabelDraw[nReward].text = m_DrawList[nIndex].count.ToString();
                }
            }
            else if (m_DrawList[nIndex].type == 2)  //金钱
            {
                m_SpriteDraw[nReward].spriteName = "jinbi";
                m_LabelDraw[nReward].text = m_DrawList[nIndex].count.ToString();
            }
            else if (m_DrawList[nIndex].type == 3)  //元宝
            {
                m_SpriteDraw[nReward].spriteName = "yuanbao";
                m_LabelDraw[nReward].text = m_DrawList[nIndex].count.ToString();
            }
            else if (m_DrawList[nIndex].type == 4)  //经验
            {
                m_SpriteDraw[nReward].spriteName = "jingyan";
                m_LabelDraw[nReward].text = m_DrawList[nIndex].count.ToString();
            }

            if (nIndex < 4 && nIndex != m_FirstRewardIndex)
            {
                m_SpriteDraw[nIndex].spriteName = spriteName;
                m_LabelDraw[nIndex].text = text;
            }

        }

        if (m_OverFanPaiNum < m_FanPaiNumber && m_nDrawIndexTwo >= 0) //判断是否完成本次抽奖
        {
            m_SpriteDraw[nReward].gameObject.SetActive(true);
            m_DisableSpriteDraw[nReward].gameObject.SetActive(true);
            m_LabelDraw[nReward].gameObject.SetActive(true);
            ButtonDraw[nReward].GetComponent<BoxCollider>().enabled = false;
        }
        else
        {
            m_IsCompleteVictory = true;

            for (int i = 0; i < m_DrawList.Count && i < 4; ++i)
            {
                m_SpriteDraw[i].gameObject.SetActive(true);
                if (nReward == i || i == m_FirstRewardIndex)
                {
                    m_DisableSpriteDraw[i].gameObject.SetActive(true);
                }
                else
                {
                    m_QualitySprite[i].gameObject.SetActive(true);
                }
                m_LabelDraw[i].gameObject.SetActive(true);
                ButtonDraw[i].GetComponent<BoxCollider>().enabled = false;
            }
        }

        if (m_IsCompleteVictory)
        {
            ContinueGame.gameObject.SetActive(true);
            AutoAddFriend.gameObject.SetActive(true);
            SendData(0);
        }
    }

	public void showNewGuild()
	{ 
		if (MissionDialogAndLeftTabsLogic.Instance ().GetVictorNewGuild ())
		{
			NewPlayerGuidLogic.OpenWindow(m_QuitBtn, 200, 100, "", "left", 0, true, true,true);
		}
	}
}


