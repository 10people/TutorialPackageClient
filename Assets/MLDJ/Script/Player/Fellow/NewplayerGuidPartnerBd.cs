using UnityEngine;
using System.Collections;
using Games.Fellow;
using Games.GlobeDefine;
using Games.FakeObject;
using GCGame;
using GCGame.Table;
using System;
using System.Collections.Generic;

public class NewplayerGuidPartnerBd : MonoBehaviour 
{
    private static PartnerFrameLogic_Breeding m_Instance = null;
    private  const int MAX_STEPS = 11;
    public static PartnerFrameLogic_Breeding Instance()
    {
        return m_Instance;
    }

    public GameObject m_PartnerChooseWindow;
    public GameObject m_ChooseItemTemplate;
    public GameObject m_ChooseItemGrid;

    public GameObject m_OpButtons;
    public GameObject m_PushPartnerButton;
    //public GameObject m_PlayerFellowModel;
    //public GameObject m_FriendFellowModel;
    public GameObject m_LockBreedingButton;
    public GameObject m_UnLockBreedingButton;
    public GameObject m_LookForBreedingButton;
    public GameObject m_BeginBreedingButton;
    public UISprite m_PlayerFellowSprite;
    public UISprite m_FriendFellowSprite;
    //public GameObject m_SpeedBreednigButton;
    public GameObject m_PlayerTips;
    public GameObject m_FriendTips;
    public GameObject m_PlayerLockFlag;
    public GameObject m_FriendLockFlag;
   // public UIViewport m_BreedingViewport;

    public GameObject m_BreedingReadyWindow;
    public GameObject m_BreedingGoingWindow;
    public GameObject m_BreedingOverWindow;
    public GameObject m_BreedingRuleWindow;
    public UILabel m_RemainTime;
    public UISprite m_RemainTimeSprite;
    public UILabel m_ReceiveRemainTime;

    //public GameObject m_PartnerAttrWindow;
    //public UISprite m_PartnerAttr_HeadIcon;
    //public UISprite m_PartnerAttr_Quality;
    //public UILabel m_PartnerAttr_Name;
    //public UILabel m_PartnerAttr_Lucky;
    //public UILabel m_PartnerAttr_Level;
    //public UISprite m_PartnerAttr_TalentIcon;
    //public UISprite m_PartnerAttr_TalentQuality;
    //public UILabel m_PartnerAttr_TalentName;
    //public UILabel m_PartnerAttr_TalentDesc;
    public GameObject m_BreedingGuidePoint;


    // 新手引导
    public GameObject m_PartnerChooseButton;
    public GameObject m_PartnerChooseClose;
    // 发布确认弹窗部分
    public GameObject m_PublishConfirmDialog;
    public GameObject m_PublishConfirmButton;
    public GameObject m_PublishFellowIntro;
    //
    public GameObject m_ReciveFellowButton;

    //private Fellow m_BabyFellow;
    //private Fellow m_BabyFellowBuffer;
    //private int m_FellowIndex = 0;
    //private int m_FellowIndexBuffer = 0;
    private float m_LastAutoFillTime;
    private const float FillSpritIncDeta = 0.20f;

    private static UIPathData NewPlayerGuidPartnerBdWindow = new UIPathData("Prefab/UI/Newplayguidpartnerbredding", UIPathData.UIType.TYPE_POP);
    //private FakeObject m_ChoosePartnerFakeObj;
    //private GameObject m_ChooseFakeObjGameObject;
    //private FakeObject m_FriendPartnerFakeObj;
    //private GameObject m_FriendFakeObjGameObject;

    private int m_step = 0;

    private bool m_LockBreeding = false;
    public bool LockBreeding
    {
        get { return m_LockBreeding; }
        set { m_LockBreeding = value; }
    }

    public static void OpenUI()
    {      
        UIManager.ShowUI(NewPlayerGuidPartnerBdWindow);
    }

    public static void CloseUI()
    {
        UIManager.CloseUI(NewPlayerGuidPartnerBdWindow);
    }
	// Use this for initialization
	void Start () 
    {
        PartnerBreedingNewPlayerGuide();
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (m_step == 9)
        {
            if (m_RemainTimeSprite.fillAmount >= 1)
            {
                ++m_step;
                PartnerBreedingNewPlayerGuide();
            }else
            {
                if (m_LastAutoFillTime >= 1)
                {
                    m_RemainTimeSprite.fillAmount += FillSpritIncDeta;
                    float leftFillAmount = 1 - m_RemainTimeSprite.fillAmount;
                    float leftTime = leftFillAmount / FillSpritIncDeta;
                    if (leftTime < 0.5f)
                    {
                        leftTime = 0;
                    }
                    else if (leftTime < 1)
                    {
                        leftTime = 1;
                    }
                     

                    m_RemainTime.text = StrDictionary.GetClientDictionaryString("#{10342}", 0, leftTime);
                    m_LastAutoFillTime = 0;
                }else
                {
                    m_LastAutoFillTime += Time.deltaTime;
                }
            }
        }
        
	}

    void OnCloseClick()
    {
        CloseUI();
    }

    public void PartnerBreedingNewPlayerGuide()
    {
        // 开始
        if (m_step == 0)
        {
            //ProcessInput.IsProcessInput = false;
        }
        // 结束，
        else if (m_step == MAX_STEPS)
        {
            //ProcessInput.IsProcessInput = true;
            NewPlayerGuidLogic.m_ChangedCloseWindowTime = 0;
            //if (MenuBarLogic.Instance())
            //{
            //    MenuBarLogic.Instance().CloseWindow();
            //}
            CloseUI();
            return;
        }
        NewPlayerGuideStep(m_step);
    }
   
    void NewPlayerGuideStep(int step)
    {
        switch (step)
        {
            //
            case 0:
                {
                 
                    NewPlayerGuidLogic.m_ChangedCloseWindowTime = 6;
                    m_LookForBreedingButton.GetComponent<UIImageButton>().isEnabled = false;
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow_Circle(m_BreedingGuidePoint, 110, "", "", 0, true, true, false, null, PartnerBreedingNewPlayerGuide);
                    NewPlayerGuidLogic.m_ChangedCloseWindowTime = 4;
                }
                break;
            //打开繁殖界面寻找配对按钮置灰，新手引导在我的宠物grid里出现并闪烁
            case 1:
                {
                    m_LookForBreedingButton.GetComponent<UIImageButton>().isEnabled = false;
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow(m_PushPartnerButton, 340, 340, "", "", 2, true, true, false, null,PartnerBreedingNewPlayerGuide);
                }
                
                break;
            // 弹出选择宠物界面，并在选择按钮上出现新手引导并闪烁
            case 2:
                {
                    //m_BreedingReadyWindow.SetActive(false);
                    m_PartnerChooseWindow.SetActive(true);
                    m_PartnerChooseButton.SetActive(true);
                   
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow(m_PartnerChooseButton, 110, 60, "", "", 2, true, true, false, null, PartnerBreedingNewPlayerGuide);
                }
                
                break;
            // 选择宠物界面关闭按钮出现新手引导，
            case 3:
                {
                    m_PartnerChooseClose.SetActive(true);
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow(m_PartnerChooseClose, 50, 50, "", "", 2, true, true, false, null, PartnerBreedingNewPlayerGuide);
                }
               
                break;
            // 关闭选择宠物界面，在我的宠物grid里出现宠物图片，并出现锁定（解锁）配对的按钮，寻找配对按钮点亮，playertips消失新手引导出现在寻找配对按钮并闪烁
            case 4:
                {
                              
                    m_PartnerChooseWindow.SetActive(false);
                    m_PlayerFellowSprite.enabled = true;
                    m_OpButtons.SetActive(true);
                    m_LookForBreedingButton.GetComponent<UIImageButton>().isEnabled = true;
                    m_BreedingReadyWindow.SetActive(true);
                    m_PlayerTips.SetActive(false);
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow(m_LookForBreedingButton, 165, 65, "", "", 2, true, true, false, null, PartnerBreedingNewPlayerGuide);
                }
                
                break;
            // 弹出发布宠物信息界面，并在确定按钮上出现新手引导
            case 5:
                {
                    m_PublishConfirmDialog.SetActive(true);
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow(m_PublishConfirmButton, 165, 54, "", "", 2, true, true, false, null, PartnerBreedingNewPlayerGuide);
                }
                
                break;
            // 关闭发布宠物信息界面，弹出宠物寻找配对说明，出现新手引导并闪烁
            case 6:
                {
                    m_PublishConfirmDialog.SetActive(false);
                    m_PublishFellowIntro.SetActive(true);
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow(m_PublishFellowIntro, 364, 100, "", "", 2, true, true, false, null, PartnerBreedingNewPlayerGuide);
                }
             
                break;
            // 关闭宠物寻找配对说明，在好友宠物grid出现好友图片，friedtips消失，新手引导在锁定按钮上出现并闪烁，开始配对按钮出现且置灰
            case 7:
                {
                    m_PublishFellowIntro.SetActive(false);
                    m_FriendFellowSprite.enabled = true;
                    //m_UnLockBreedingButton.SetActive(true);
                    //m_LockBreedingButton.SetActive(true);
                    m_FriendTips.SetActive(false);
                    m_LookForBreedingButton.SetActive(false);
                    m_BeginBreedingButton.SetActive(true);
                    m_BeginBreedingButton.GetComponent<UIImageButton>().isEnabled = false;
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow(m_LockBreedingButton, 140, 62, "", "", 2, true, true, false, null, PartnerBreedingNewPlayerGuide);

                }
                
                break;
            // 开始配对按钮点亮，出现宠物锁定标示，新手引导出现在配对按钮并闪烁
            case 8:
                {
                    m_PlayerLockFlag.SetActive(true);
                    m_FriendLockFlag.SetActive(true);
                    m_BeginBreedingButton.GetComponent<UIImageButton>().isEnabled = true;
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow(m_BeginBreedingButton, 140, 62, "", "", 2, true, true, false, null, PartnerBreedingNewPlayerGuide);
                }
                
                break;
            // 繁殖准备界面隐藏，出现繁殖中界面，播放进度条动画
            case 9:
                {
                    m_BreedingReadyWindow.SetActive(false);
                    m_BreedingGoingWindow.SetActive(true);
                    //++m_step;
                    //update()播进度条动画
                }
               
                break;
            // 出现繁殖完成界面，拆开按钮点亮
            case 10:
                {
                    m_BreedingGoingWindow.SetActive(false);
                    m_BreedingOverWindow.SetActive(true);
                    ++m_step;
                    NewPlayerGuidLogic.OpenWindow(m_ReciveFellowButton, 160, 62, "", "", 2, true, true, false, null, PartnerBreedingNewPlayerGuide);
                }
                break;
            //再增加步骤需要修改MAX_STEPS的值
            default:
                break;
        }
       
    }

    // public GameObject m_NewGuidButton;
    public void BreedingGuaid()
    {
        // 先屏蔽所有输入
        ProcessInput.IsProcessInput = false;
        NewPlayerGuidLogic.m_ChangedCloseWindowTime = 6;
        NewPlayerGuidLogic.OpenWindow_Circle(m_BreedingGuidePoint, 110, "", "", 0, true, false, false, null, OnNewPlayerBreedingGuaid);
        //NewPlayerGuidLogic.OpenWindow_Circle(m_BreedingGuidePoint, 110, StrDictionary.GetClientDictionaryString("#{10814}"), "left", 2, true, true, true, OnNewPlayerBreedingGuaid);

    }

    void OnNewPlayerBreedingGuaid()
    {
        NewplayerGuidPartnerBd.OpenUI();
        if (MenuBarLogic.Instance())
        {
            MenuBarLogic.Instance().CloseWindow();
        }
        UIManager.CloseUI(UIInfo.PartnerFrameRoot);
        //OnCloseClick();
        NewPlayerGuidLogic.m_ChangedCloseWindowTime = 0;
        //UIManager.ShowUI(UIInfo.NewPlayerGuidPartnerBdWindow);

    }
}

