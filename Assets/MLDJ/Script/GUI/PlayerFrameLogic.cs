//********************************************************************
// 文件名: PlayerFrameLogic.cs
// 描述: 玩家头像脚本
// 作者: WangZhe
//********************************************************************

using Games.GlobeDefine;
using Games.ImpactModle;
using Games.LogicObj;
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;
using System.Collections.Generic;
using GCGame;
using System;
using Games.UserCommonData;
using Games.Fellow;
public class PlayerFrameLogic : MonoBehaviour {

    private static PlayerFrameLogic m_Instance = null;
    public static PlayerFrameLogic Instance()
    {
        return m_Instance;
    }

    private bool m_bFold  = true;           // 菜单折叠状态
    public bool Fold
    {
        get { return m_bFold; }
    }

    public GameObject m_FirstChild;
    public UIImageButton m_PlayerHeadButton;
    public UILabel m_PlayerLevel;
    public UISprite m_PlayerHPSprite;
    public UISprite m_PlayerHPBakSprite;
    public UISprite m_PlayerMPSprite;
    public UISprite m_PlayerMPBakSprite;
    public UILabel m_PlayerMPText;
    public UILabel m_PlayerHPText;
    public UISprite m_PlayerHeadSprite;
    public UILabel m_PlayerNameLabel;
    public GameObject m_PlayerFrameInfo;
    //public List<TweenAlpha> m_FoldTween;
    //public CircleEnergySlotLogic m_SkillXPEnergy;
    public UISprite m_XPPic;

    public UISprite m_HpItemCDPic;
    public UISprite m_MpItemCDPic;
    public GameObject m_HpPSGO;
    public GameObject m_MpPSGO;
    public GameObject m_HpPSPlusGO;
    public GameObject m_MpPSPlusGO;
    private float m_LastHp = 0f;
    private float m_LastMp = 0f;

    public UISprite m_TeamCaptain;      //组队队长标志
   
    private float m_fPlayerHPBakSpeed = 0.003f;
    private float m_fPlayerMPBakSpeed = 0.003f;

    public GameObject m_RemindNum;
    public UILabel m_RemindNumLabel;
    private int m_CurRemindNum = 0;

    private int m_nLastHp =0;
    private int m_nLastMp =0;

    private Transform m_WifiTransform;
    private Transform m_WifiSimple;
    private Transform m_WifiGood;
    private Transform m_WifiDelay;
    private int m_WifiStatie = -1;
   

    public GameObject m_PlayerFrameWhole;
    public UISprite[] m_BuffShowIcon =new UISprite[(int)BUFFICON.MAX_BUFFICONUM];
    public UISprite[] m_BuffCDIcon = new UISprite[(int)BUFFICON.MAX_BUFFICONUM];

    public UISprite m_VipImage;
    public GameObject m_VipInfo;
    public UILabel m_VipLevel;
    public UILabel m_CombatValueLable;
    public UILabel TimeLabel;

    public GameObject m_PillsSupplyBtn_N;
    public GameObject m_PillsSupplyBtn_H;
    void Awake()
    {
        m_Instance = this;
    }

	// Use this for initialization
	void Start () {
	
//#if UNITY_ANDROID
//		m_FirstChild.SetActive(false);
//#else
//		m_FirstChild.SetActive(true);
//#endif

		m_PlayerLevel.text = "0";
        m_PlayerHPText.text = "0/0";
        m_PlayerHPSprite.fillAmount = 0;
        m_PlayerHPBakSprite.fillAmount = 0;
        m_PlayerMPSprite.fillAmount = 0;
        m_PlayerMPBakSprite.fillAmount = 0;
        m_XPPic.fillAmount = 0;
        m_TeamCaptain.gameObject.SetActive(false);

       // HpItemCDTime = 0;
      //  MpItemCDTime = 0;
        //InitXPEnergySlot();
        UpdateData();
        InitUITweenerWhenChangeScene();
        InitAutoFight();
        UpdateBuffIcon();

        InvokeRepeating("UpdateFunctionCD", 0, 5);

        //获取网络状态对象
	    GetWifiGameObject();

        RefreshVIP();

        ShowFightObj();
        if (TimeLabel != null) {
          UpdateGameTime();
          DateTime now = System.DateTime.Now;
          InvokeRepeating("UpdateGameTime", 61f - now.Second, 60f);
        }
        if (m_MpPSGO != null) {
          m_MpPSGO.SetActive(false);
        }
        if (m_HpPSGO != null) {
          m_HpPSGO.SetActive(false);
        }
  }
  private void UpdateGameTime()
  {
    DateTime now = System.DateTime.Now;
    TimeLabel.text = now.ToString("HH:mm");
  }

    public void HideHPAndMPText()
    {
        m_PlayerHPText.gameObject.SetActive(false);
        m_PlayerMPText.gameObject.SetActive(false);
    }

    private void GetWifiGameObject()
    {
        //暂时屏蔽
//         m_WifiTransform = null;
//         return;

        Transform tempTransform = this.transform.FindChild("PlayerFrameOffset");
        if (tempTransform != null)
        {
            m_WifiTransform = tempTransform.Find("Wifi");
        }
        //tempTransform = null;

        //
        if (m_WifiTransform != null)
        {
            m_WifiDelay = m_WifiTransform.FindChild("yanchi");
            m_WifiSimple = m_WifiTransform.FindChild("lianghao");
            m_WifiGood = m_WifiTransform.FindChild("zuijia");
        }
    }

    // Update is called once per frame
	void Update () {
        ShowFightObj();
		UpdateCD();
        //残血
        if (m_PlayerHPBakSprite.fillAmount <= 0 && m_PlayerHPSprite.fillAmount>0)
        {
            m_PlayerHPBakSprite.fillAmount = m_PlayerHPSprite.fillAmount;
        }
        else if (m_PlayerHPSprite.fillAmount -m_PlayerHPBakSprite.fillAmount<0)
        {
            m_PlayerHPBakSprite.fillAmount -= m_fPlayerHPBakSpeed;
            if (m_PlayerHPSprite.fillAmount - m_PlayerHPBakSprite.fillAmount >= 0)
            {
                m_PlayerHPBakSprite.fillAmount = m_PlayerHPSprite.fillAmount;
            }
        }
        //残蓝
        if (m_PlayerMPBakSprite.fillAmount <= 0 && m_PlayerMPSprite.fillAmount > 0)
        {
            m_PlayerMPBakSprite.fillAmount = m_PlayerMPSprite.fillAmount;
        }
        else if (m_PlayerMPSprite.fillAmount - m_PlayerMPBakSprite.fillAmount < 0)
        {
            m_PlayerMPBakSprite.fillAmount -= m_fPlayerMPBakSpeed;
        }

        m_PillsSupplyBtn_N.SetActive(GetHpDrugNum() >= 5);
        m_PillsSupplyBtn_H.SetActive(GetHpDrugNum() < 5);
	}

    void OnDestroy()
    {
        m_Instance = null;
    }

    public void PlayerFrameHeadOnClick()
    {
        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            return;
        }

        if (MenuBarLogic.Instance())
        {
            MenuBarLogic.Instance().PlayTween(m_bFold);
        }
        PlayTween();
        SwitchAllWhenPopUIShow(!m_bFold);
        if (!m_bFold)
        {
            if (MenuBarLogic.Instance() != null && MenuBarLogic.Instance().NewButtonEffectFlag == true)
            {
                MenuBarLogic.Instance().StopNewButtonEffect();
            }
        }

        m_bFold = !m_bFold;
        if (NewPlayerGuidLogic.Instance())
        {
            NewPlayerGuidLogic.CloseWindow();
        }

        if (m_RemindNum.activeSelf)
        {
            m_CurRemindNum = 0;
            //m_RemindNum.SetActive(false);
            //m_RemindNumLabel.text = "";
            UpdateRemainNum();

            if (MenuBarLogic.Instance() != null)
            {
                MenuBarLogic.Instance().PlayNewButtonEffect();
            }
        }
    }

    void PlayTween()
    {
        //foreach (TweenAlpha tween in m_FoldTween)
        //{
        //    tween.Play(m_bFold);
        //}
        //foreach(BoxCollider box in gameObject.GetComponentsInChildren<BoxCollider>())
        //{
        //    box.enabled = !m_bFold;
        //}

        //gameObject.SetActive(!m_bFold);
        //m_PlayerFrameInfo.SetActive(!m_bFold);
        m_PlayerFrameWhole.SetActive(!m_bFold);
        if (m_WifiTransform != null)
        {
          m_WifiTransform.gameObject.SetActive(!m_bFold);
        }
        if (TimeLabel != null && TimeLabel.transform != null && TimeLabel.transform.parent != null) {
          TimeLabel.transform.parent.gameObject.SetActive(!m_bFold);
        }
    }

    public void ChangeHP(int nCurHp, int nMaxHp)
    {
        m_PlayerHPText.text = Utils.ConvertLargeNumToString(nCurHp) + "/" + Utils.ConvertLargeNumToString(nMaxHp);
        if (nMaxHp!=0)
        {
           m_PlayerHPSprite.fillAmount = (float)nCurHp / (float)nMaxHp;
        }
        else
        {
            m_PlayerHPSprite.fillAmount = 0;
        }
        if (m_PlayerHPSprite.fillAmount <=0)
        {
            m_PlayerHPSprite.fillAmount = 0;
            m_PlayerHPBakSprite.fillAmount = 0;
            m_fPlayerHPBakSpeed = 0.003f;
        }
        else if(m_PlayerHPBakSprite.fillAmount - m_PlayerHPSprite.fillAmount>0)
        {
            m_fPlayerHPBakSpeed = (m_PlayerHPBakSprite.fillAmount - m_PlayerHPSprite.fillAmount)*Time.deltaTime;
        }
        else if (m_PlayerHPBakSprite.fillAmount - m_PlayerHPSprite.fillAmount <0)
        {
            m_PlayerHPBakSprite.fillAmount = m_PlayerHPSprite.fillAmount;
        }
        
        if (m_nLastHp <=nCurHp)
        {
            m_PlayerHPBakSprite.fillAmount = m_PlayerHPSprite.fillAmount;
        }
        m_nLastHp = nCurHp;
        //m_PlayerHPSprite.MakePixelPerfect();
    }

    public void ChangeMP(int nCurMp, int nMaxMp)
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer)
        {
            if (nMaxMp != 0)
            {
//                 m_PlayerMPSprite.spriteName = "MagicBar";
//                 m_PlayerMPSprite.MakePixelPerfect();
//                 m_PlayerMPBakSprite.spriteName = "MagicBar1";
//                 m_PlayerMPBakSprite.MakePixelPerfect();

                m_PlayerMPText.text = Utils.ConvertLargeNumToString(nCurMp) + "/" + Utils.ConvertLargeNumToString(nMaxMp);
                m_PlayerMPSprite.fillAmount = (float) nCurMp/(float) nMaxMp;
            }
            else
            {
                m_PlayerMPText.text = "0/0";
                m_PlayerMPSprite.fillAmount = 0;
            }
        }
        else
        {
            m_PlayerMPText.text = "0/0";
            m_PlayerMPSprite.fillAmount = 0;
        }
        if (m_PlayerMPSprite.fillAmount <= 0)
        {
            m_PlayerMPSprite.fillAmount = 0;
            m_PlayerMPBakSprite.fillAmount = 0;
            m_fPlayerMPBakSpeed = 0.003f;
        }
        else if (m_PlayerMPBakSprite.fillAmount - m_PlayerMPSprite.fillAmount > 0)
        {
            m_fPlayerMPBakSpeed = (m_PlayerMPBakSprite.fillAmount - m_PlayerMPSprite.fillAmount) * Time.deltaTime;
        }
        else if (m_PlayerMPBakSprite.fillAmount - m_PlayerMPSprite.fillAmount < 0)
        {
            m_PlayerMPBakSprite.fillAmount = m_PlayerMPSprite.fillAmount;
        }
        if (m_nLastMp <=nCurMp)
        {
            m_PlayerMPBakSprite.fillAmount = m_PlayerMPSprite.fillAmount;
        }
        m_nLastMp = nCurMp;
    }

    public void ChangeLev(int nLev)
    {
        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
		{
            m_PlayerLevel.text = "100";
		}
		else
		{
            m_PlayerLevel.text = nLev.ToString();
		}
    }

    public void ChangeHeadPic(string strPic)
    {
        m_PlayerHeadSprite.spriteName = strPic;
    }
    public void ChangeName(string strName)
    {
        m_PlayerNameLabel.text = strName;
    }
    public void ChangeCombatValue(int val)
    {
        m_CombatValueLable.text = val.ToString();
    }
    public void UpdateData()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            LoginData.PlayerRoleData curRoleData = LoginData.GetPlayerRoleData(PlayerPreferenceData.LastRoleGUID);
            if (null != curRoleData)
            {
                ChangeName(curRoleData.name);
                ChangeHeadPic(null);
            }
            return;
        }
         
        int nPlayerHP = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.HP;
        int nPlayerMaxHP = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.MaxHP;
        int nPlayerMP = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.MP;
        int nPlayerMaxMP = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.MaxMP;
        int nPlayerXP = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.XP;
        int nPlayerMaxXP = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.MaxXP;
        int nPlayerLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
        string strPlayerHeadPic = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.HeadPic;
        string strPlayerName = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.RoleName;        
        
        ChangeHP(nPlayerHP, nPlayerMaxHP);
        ChangeMP(nPlayerMP, nPlayerMaxMP);
        ChangeXPEnergy(nPlayerXP, nPlayerMaxXP);
        ChangeLev(nPlayerLevel);
        ChangeHeadPic(strPlayerHeadPic);
        ChangeName(strPlayerName);
        ChangeCombatValue(Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.CombatValue);
        UpdateCD();
    }

    /// <summary>
    /// Tween动画播放完毕后改变头像按钮图片
    /// </summary>
    public void AfterPlayTweenFold()
    {
    }

    /// <summary>
    /// 应对切换场景时UI异常消失 重新初始化Tween动画
    /// </summary>
    void InitUITweenerWhenChangeScene()
    {
        BoxCollider[] box = gameObject.GetComponentsInChildren<BoxCollider>();
        for (int i=0; i<box.Length; ++i)
        {
            if (null != box[i])
                box[i].enabled = true;
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        // 判断折叠状态
        if (m_bFold)
        {
            NewPlayerGuidLogic.OpenWindow_Circle(m_PlayerHeadSprite.gameObject, 120, Utils.GetDicByID(10411), "right", 0, true, true);

            if (MenuBarLogic.Instance())
            {
                MenuBarLogic.Instance().NewPlayerGuideIndex = nIndex;
            }
        }
    }
    public void InitAutoFight()
    {        
        m_HpItemCDPic.fillAmount = 1;
        m_MpItemCDPic.fillAmount = 1;
//         HpItemCDTime = 0;
//         HpItemCDTime = 0;
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
        if (User)  //更新信息
        {
            if (User.AutoHpID != -1)
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(User.AutoHpID, 0);
                if (curItem != null)
                {                    
                    if (BackPack.GetItemCountByDataId(User.AutoHpID) <= 0)
                    {
                           m_HpItemCDPic.fillAmount = 1;
                           GameManager.gameManager.PlayerDataPool.HpItemCDTime = 0;
                    }
                }
              
            }
            if (User.AutoMpID != -1)
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(User.AutoMpID, 0);
                if (curItem != null)
                {
                    if (BackPack.GetItemCountByDataId(User.AutoMpID) <= 0)
                    {
                           m_MpItemCDPic.fillAmount = 1;
                           GameManager.gameManager.PlayerDataPool.MpItemCDTime = 0;
                    }
                }
            }
        }
    }
    private static float m_fCDTimeSecond = Time.realtimeSinceStartup;
    private static float m_fItemDescSecound = 0;
    public void UpdateCD()
    {
        float ftimeSec = Time.realtimeSinceStartup;
        float fTimeSpace = ftimeSec - m_fCDTimeSecond;
        if (fTimeSpace > 0)
        {
            m_fCDTimeSecond = ftimeSec;
        }
        if (m_fItemDescSecound == 0)
        {
            m_fItemDescSecound = Time.realtimeSinceStartup;
        }
        if (Time.realtimeSinceStartup - m_fItemDescSecound > 2)
        {
            m_fItemDescSecound = ftimeSec;
        }
       
        Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
        if (User)  //更新信息
        {
            if (m_HpItemCDPic.fillAmount < 1f || GameManager.gameManager.PlayerDataPool.HpItemCDTime > 0)
            {
                Tab_UsableItem _UsableInfo = TableManager.GetUsableItemByID(User.AutoHpID,0);
                if (_UsableInfo != null)
                {
                    int nCoolId = _UsableInfo.CoolDownId;
                    Tab_CoolDownTime _CDTimeInfo = TableManager.GetCoolDownTimeByID(nCoolId, 0);
                    if (_CDTimeInfo != null)
                    {
                        int _totalCDTime = _CDTimeInfo.CDTime;
                        if (_totalCDTime > 0)
                        {
                            m_HpItemCDPic.fillAmount = (1f - (GameManager.gameManager.PlayerDataPool.HpItemCDTime * 1.0f) / _totalCDTime);
                        }
                        if (m_HpItemCDPic.fillAmount >= 1f)
                        {
                          m_HpItemCDPic.fillAmount = 1f;
                        }
                        if (m_HpItemCDPic.fillAmount.Equals(1f) && !m_LastHp.Equals(1f) && m_HpPSGO != null) {
                          m_HpPSGO.SetActive(true);
                          CancelInvoke("OnDisable");
                          Invoke("OnDisable", 2f);
                        }
                        m_LastHp = m_HpItemCDPic.fillAmount;
                    }
                }
            }
            if (m_MpItemCDPic.fillAmount < 1 || GameManager.gameManager.PlayerDataPool.MpItemCDTime > 0)
            {
                Tab_UsableItem _UsableInfo = TableManager.GetUsableItemByID(User.AutoMpID, 0);
                if (_UsableInfo != null)
                {
                    int nCoolId = _UsableInfo.CoolDownId;
                    Tab_CoolDownTime _CDTimeInfo = TableManager.GetCoolDownTimeByID(nCoolId, 0);
                    if (_CDTimeInfo != null)
                    {
                        int _totalCDTime = _CDTimeInfo.CDTime;
                        if (_totalCDTime > 0)
                        {
                            m_MpItemCDPic.fillAmount = (1f - ((GameManager.gameManager.PlayerDataPool.MpItemCDTime * 1.0f) / _totalCDTime));
                        }
                        if (m_MpItemCDPic.fillAmount >= 1f)
                        {
                            m_MpItemCDPic.fillAmount = 1f;
                        }
                        if (m_MpItemCDPic.fillAmount.Equals(1f) && !m_LastMp.Equals(1f) && m_MpPSGO != null) {
                          m_MpPSGO.SetActive(true);
                          CancelInvoke("OnDisable");
                          Invoke("OnDisable", 2f);
                        }
                        m_LastMp = m_MpItemCDPic.fillAmount;
                    }
                }
            }
        }        
    }

    void OnEnable()
    {
      CalcalateHPMPPlusState();
    }
    void OnDisable()
    {
      if (m_MpPSGO != null) {
        m_MpPSGO.SetActive(false);
      }
      if (m_HpPSGO != null) {
        m_HpPSGO.SetActive(false);
      }
    }
    private void CalcalateHPMPPlusState()
    {
      GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
      Obj_MainPlayer mainobj = Singleton<ObjManager>.Instance.MainPlayer;
      if (BackPack != null && mainobj != null && mainobj.BaseAttr != null) {
        bool hpactive = false;
        for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_HP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_HP; i++) {
          if (BackPack.GetItemCountByDataId(i) > 0) {
            Tab_CommonItem curItem = TableManager.GetCommonItemByID(i, 0);
            if (null != curItem && curItem.MinLevelRequire <= mainobj.BaseAttr.Level && curItem.MaxLevelRequire >= mainobj.BaseAttr.Level) {
              hpactive = true;
              break;
            }
          }
        }
        if (!hpactive) {
          for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_DYHP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_DYHP; i++) {
            if (BackPack.GetItemCountByDataId(i) > 0) {
              Tab_CommonItem curItem = TableManager.GetCommonItemByID(i, 0);
              if (null != curItem && curItem.MinLevelRequire <= mainobj.BaseAttr.Level && curItem.MaxLevelRequire >= mainobj.BaseAttr.Level) {
                hpactive = true;
                break;
              }
            }
          }
        }
        if (m_HpPSPlusGO != null) {
          m_HpPSPlusGO.SetActive(hpactive);
        }
        bool mpactive = false;
        for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_MP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_MP; i++) {
          if (BackPack.GetItemCountByDataId(i) > 0) {
            Tab_CommonItem curItem = TableManager.GetCommonItemByID(i, 0);
            if (null != curItem && curItem.MinLevelRequire <= mainobj.BaseAttr.Level && curItem.MaxLevelRequire >= mainobj.BaseAttr.Level) {
              mpactive = true;
              break;
            }
          }
        }
        if (!mpactive) {
          for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_DYMP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_DYMP; i++) {
            if (BackPack.GetItemCountByDataId(i) > 0) {
              Tab_CommonItem curItem = TableManager.GetCommonItemByID(i, 0);
              if (null != curItem && curItem.MinLevelRequire <= mainobj.BaseAttr.Level && curItem.MaxLevelRequire >= mainobj.BaseAttr.Level) {
                mpactive = true;
                break;
              }
            }
          }
        }
        if (m_MpPSPlusGO != null) {
          m_MpPSPlusGO.SetActive(mpactive);
        }
      }
    }
    public void OnItemHPClick()
    {
        CalcalateHPMPPlusState();
        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            return;
        }

        if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_SYSTEMSHOP))
        {
            return;
        }
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
        if (User)  //更新信息
        {
            if (User.AutoHpID != -1)
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(User.AutoHpID, 0);
                if (curItem != null)
                {                    
                    if (BackPack.GetItemCountByDataId(User.AutoHpID) <= 0)
                    {
                        UIManager.ShowUI(UIInfo.SysShop);
                        return;
                    }
                 }
             }
        }
//         if (!m_HpItem.activeInHierarchy)
//         {
//             UIManager.ShowUI(UIInfo.SysShop);
//             return;
//         }
        
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            if (Singleton<ObjManager>.Instance.MainPlayer.AutoPercent((int)MedicSubClass.HP) == false)
            {
                Singleton<ObjManager>.Instance.MainPlayer.UpdateSelectDrug(); //重新选择药
                Singleton<ObjManager>.Instance.MainPlayer.AutoPercent((int)MedicSubClass.HP);
            }
        }
    }
    public void OnItemMPClick()
    {
        CalcalateHPMPPlusState();
        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            return;
        }

        if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_SYSTEMSHOP))
        {
            return;
        }
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
        if (User)  //更新信息
        {
            if (User.AutoMpID != -1)
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(User.AutoMpID, 0);
                if (curItem != null)
                {
                    if (BackPack.GetItemCountByDataId(User.AutoMpID) <= 0)
                    {
                        UIManager.ShowUI(UIInfo.SysShop);
                        return;
                    }
                }
            }
        }
//         if ( !m_MpItem.activeInHierarchy )
//         {
//             UIManager.ShowUI(UIInfo.SysShop);
//             return;
//         }
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            if (Singleton<ObjManager>.Instance.MainPlayer.AutoPercent((int)MedicSubClass.MP) == false)
            {
                Singleton<ObjManager>.Instance.MainPlayer.UpdateSelectDrug(); //重新选择药
                Singleton<ObjManager>.Instance.MainPlayer.AutoPercent((int)MedicSubClass.MP);
            }
        }
    }

    public void showshop()
    {
        UIManager.ShowUI(UIInfo.SysShop);
        return;
    }
    //void InitXPEnergySlot()
    //{
    //    CircleEnergySlotLogic.CircleEnergyInfo energyInfo = new CircleEnergySlotLogic.CircleEnergyInfo();
    //    energyInfo.zeroSpriteFill = 0;
    //    energyInfo.maxSpriteFill = 1;
    //    energyInfo.zeroEffectRotation = 10.0f;
    //    energyInfo.maxEffectRotation = -125.0f;
    //    energyInfo.deleEnergyFull = PlayXPEffect;
    //    m_SkillXPEnergy.InitInfo(energyInfo);
    //}

    public void ChangeXPEnergy(int nValue, int maxXP)
    {
        if (maxXP <= 0 || nValue < 0)
        {
            return;            
        }

        if(SkillBarLogic.Instance() != null)
        {
            SkillBarLogic.Instance().ChangeXpValueBtn(nValue,maxXP);
        }

        int nXPPercent = 0;
        nXPPercent = (int)(((float)nValue / (float)maxXP) * 100);
         if (SkillBarLogic.Instance() != null)
         {
             SkillBarLogic.Instance().UpdateXpBtnState(nXPPercent);
         }

//         int nIndex = 0;
// 
//         //小于最小变身值
//         if (nXPPercent < GlobeVar.XP_CHNAGE_MODE_1)
//         {
//             //一个也不显示
//             nIndex = 0;
//         }//1变
//         else if (nXPPercent >= GlobeVar.XP_CHNAGE_MODE_1 && nXPPercent < GlobeVar.XP_CHANGE_MODE_2)
//         {
//             nIndex = 1;
//         }//2变
//         else if(nXPPercent >= GlobeVar.XP_CHANGE_MODE_2 && nXPPercent < GlobeVar.XP_CHANGE_MODE_3)
//         {
//             nIndex = 2;
//         }//3变
//         else if (nXPPercent >= GlobeVar.XP_CHANGE_MODE_3)
//         {
//             nIndex = 3;
//         }
//         if (SkillBarLogic.Instance() != null)
//         {
//             SkillBarLogic.Instance().PlayXPActiveEffect(nIndex);
//         }
    }


    static void PlayXPEffect(bool showEffect)
    {
       
    }

    void RefreshVIP()
    {
        int nLevel = VipData.GetVipLv();
        if (nLevel > 0)
        {
            m_VipInfo.SetActive(true);
            m_VipLevel.text = nLevel.ToString();
        }
        else
        {
            m_VipInfo.SetActive(false);
        }
    }
    public void OnVipCostChange(int nCost)
    {
        if (nCost >= 0)
        {
            m_VipImage.gameObject.SetActive(true);
            //m_VipImage.spriteName = VipData.GetVipImage(nCost);       
        }
        else
        {
            m_VipImage.gameObject.SetActive(false);
        }

        RefreshVIP();
    }

    public void AddRemindNum()
    {
        //m_CurRemindNum += 1;
        UpdateRemainNum();
    }

    int GetPartnerTipCount()
    {
//        int remainCount = PartnerFrameLogic.GetPartnerRemainCount();
//        bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_FELLOWFUNCTION_OPENFLAG);
//        if (remainCount > 0 && bRet)
//        {
//            return 1;
//        }
        return 0;
    }

    int GetMasterAndGuildTipCount()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer.ShowGuildNewReserveFlag)
            {
                UInt64 myGuid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
                if (GameManager.gameManager.PlayerDataPool.IsGuildChief() ||
                    GameManager.gameManager.PlayerDataPool.IsGuildViceChief(myGuid))
                {
                    return 1;
                }
            }
//            if (MasterWindow.GetMasterRemainNum() > 0)
//            {
//                return 1;
//            }
            if (Singleton<ObjManager>.GetInstance().MainPlayer.IsPSCanAccept())
            {
                return 1;
            }

        }
        return 0;
    }

    public void UpdateRemainNum()
    {
        int nShowNum = m_CurRemindNum;
        //nShowNum += RestaurantData.m_restaurantTipsCount;
        nShowNum += BelleData.GetBelleTipCount();
        //nShowNum += GetPartnerTipCount();
        nShowNum += SkillRootLogic.GetCanLevUpSkillCount();
        //nShowNum += GetMasterAndGuildTipCount();
        nShowNum += GetSystemLogicTipCount();// 系统提示
        nShowNum += GetGemHoleCanOpenCount(1);   //宝石40开孔
        nShowNum += GetGemHoleCanOpenCount(2);   //宝石70开孔
        nShowNum += GetGemHoleCanOpenCount(3);   //宝石90开孔
        nShowNum += GetPartnerSkillCanLevelUpCount();   //宠物技能升级
        if (null != GameManager.gameManager.PlayerDataPool)
        {
            nShowNum += GameManager.gameManager.PlayerDataPool.m_objMountParam.MountRemindFlagCount();
        }

// 
//         bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_AUTOENHANCE_OPENFLAG);
//         GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag((int)USER_COMMONFLAG.CF_AUTOENHANCE_OPENFLAG, true
        if (nShowNum > 0 && GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            m_RemindNum.SetActive(true);
            //m_RemindNumLabel.text = nShowNum.ToString();
        }
        else
        {
             m_RemindNum.SetActive(false);
        }
    }

    //更新头像的BUFF位
    public void UpdateBuffIcon()
    {
        for (int i = 0; i < (int) BUFFICON.MAX_BUFFICONUM; i++)
        {
            m_BuffShowIcon[i].gameObject.SetActive(false);
            m_BuffCDIcon[i].gameObject.SetActive(false);
        }

        int nBuffShowIndex = 0;
        for (int i = 0; i < GameManager.gameManager.PlayerDataPool.ClientImpactInfo.Count; ++i)
        {
            if (GameManager.gameManager.PlayerDataPool.ClientImpactInfo[i].IsVaild())
            {
                Tab_Impact _tabImpact = TableManager.GetImpactByID(GameManager.gameManager.PlayerDataPool.ClientImpactInfo[i].ImpactId, 0);
                if (_tabImpact != null)
                {
                    if (_tabImpact.BuffType == (int) BUFFTYPE.BUFF && _tabImpact.BuffIcon != "-1")
                    {
                        if (nBuffShowIndex >= 0 && nBuffShowIndex < (int) BUFFICON.MAX_BUFFICONUM)
                        {
                            m_BuffShowIcon[nBuffShowIndex].gameObject.SetActive(true);
                            m_BuffShowIcon[nBuffShowIndex].spriteName = _tabImpact.BuffIcon;
                            m_BuffShowIcon [nBuffShowIndex].MakePixelPerfect();
                            nBuffShowIndex++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
    }

    public void SwitchAllWhenPopUIShow(bool isShow)
    {
        if (MissionDialogAndLeftTabsLogic.Instance())
        {
            MissionDialogAndLeftTabsLogic.Instance().PlayTween(!isShow);
        }
        if (TargetFrameLogic.Instance())
        {
            TargetFrameLogic.Instance().PlayTween(!isShow);
        }
        if (FunctionButtonLogic.Instance())
        {
            FunctionButtonLogic.Instance().PlayTween(!isShow);
        }

        if (ExpLogic.Instance())
        {
            ExpLogic.Instance().PlayTween(!isShow);
        }
        if (ChatFrameLogic.Instance())
        {
            ChatFrameLogic.Instance().PlayTween(!isShow);
        }
        if (SkillBarLogic.Instance())
        {
            SkillBarLogic.Instance().PlayTween(!isShow);
        }
        if (PlayerHitsLogic.Instance())
        {
            PlayerHitsLogic.Instance().PlayTween(!isShow);
        }

        if (RechargeBarLogic.Instance())
        {
            RechargeBarLogic.Instance().PlayTween(!isShow);
        }

        if (!isShow)
        {
            if (JoyStickLogic.Instance())
            {
                JoyStickLogic.Instance().CloseWindow();
            }
        }
        else
        {
            if (JoyStickLogic.Instance())
            {
                JoyStickLogic.Instance().OpenWindow();
            }                        
        }
    }

    public void SetTeamCaptain(bool bActive)
    {
        if (null != m_TeamCaptain)
        {
            m_TeamCaptain.gameObject.SetActive(bActive);
        }        
    }

    /// <summary>
    /// 获取当前网络状态信息，并进行相关设置
    /// </summary>
    public void GetWifiInfo(float tagSpeed)
    {
        //if (Singleton<ObjManager>.Instance.MainPlayer == null) return;

        int tag = -1;

        ////检查当前网络是否可用
        //if (NetWorkLogic.GetMe().GetConnectStautus() == NetWorkLogic.ConnectStatus.DISCONNECTED)
        //{
        //    Singleton<ObjManager>.Instance.MainPlayer.NetSpeed = -1;
        //}

        //float tagSpeed = Singleton<ObjManager>.Instance.MainPlayer.NetSpeed;

        if (tagSpeed >= 0 && tagSpeed <= 250)
        {
            tag = 1;
        }
        else if (tagSpeed > 250 && tagSpeed <= 500)
        {
            tag = 2;
        }
        else if (tagSpeed > 500)
        {
            tag = 3;
        }

        SetWifiStatic(tag);
    }


    /// <summary>
    /// 设置当前网络状态
    /// </summary>
    /// <param name="wifiStatic"></param>
    private void SetWifiStatic(int wifiStatic = 1)
    {
        if (m_WifiGood == null || m_WifiSimple == null || m_WifiDelay == null) return;

        if (wifiStatic == m_WifiStatie) return;
        m_WifiStatie = wifiStatic;

        switch (m_WifiStatie)
        {
            case 1: //
                {
                    m_WifiGood.gameObject.SetActive(true);
                    m_WifiSimple.gameObject.SetActive(false);
                    m_WifiDelay.gameObject.SetActive(false);
                    break;
                }
            case 2:
                {
                    m_WifiGood.gameObject.SetActive(false);
                    m_WifiSimple.gameObject.SetActive(true);
                    m_WifiDelay.gameObject.SetActive(false);
                    break;
                }
            case 3:
                {
                    m_WifiGood.gameObject.SetActive(false);
                    m_WifiSimple.gameObject.SetActive(false);
                    m_WifiDelay.gameObject.SetActive(true);
                    break;
                }
            default:
                {
                    m_WifiGood.gameObject.SetActive(false);
                    m_WifiSimple.gameObject.SetActive(false);
                    m_WifiDelay.gameObject.SetActive(false);
                    break;
                }
        }
    }

    // 更新功能CD提醒图标，5秒一更新
    public void UpdateFunctionCD()
    {
        UpdateRemainNum();
        if (null != MenuBarLogic.Instance())
        {
            MenuBarLogic.Instance().UpdateBelleTip();
            MenuBarLogic.Instance().UpdatePartnerTip();
            MenuBarLogic.Instance().UpdateSkillTip();
            MenuBarLogic.Instance().UpdateSystemCountTip();
            MenuBarLogic.Instance().UpdateRoleCountTip();
            MenuBarLogic.Instance().UpdateFellowRedTip();
        }
        if (RechargeBarLogic.Instance() != null)
        {
            RechargeBarLogic.Instance().UpdateChargeTip();
        }
    }

    public int GetSystemLogicTipCount()
    {
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            int nPlayerLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
            int nPlayerVipLevel = VipData.GetVipLv();
            bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_AUTOENHANCE_OPENFLAG);
            if (nPlayerLevel >= GlobeVar.MAX_AUTOEQUIT_LIVE && nPlayerVipLevel >= GlobeVar.USE_AUTOFIGHT_VIPLEVEL && false == bRet)
            {
                return 1;
            }
        } 
        return 0;
    }

    public int GetGemHoleCanOpenCount(int i)
    {
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            int nPlayerLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
            bool bRet1 = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GEMHOLE_OPENFLAG1);
            bool bRet2 = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GEMHOLE_OPENFLAG2);
            bool bRet3 = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GEMHOLE_OPENFLAG3);
            if (i == 1)
            {
                if (nPlayerLevel >= GlobeVar.GEM_HOLE_FIRST && false == bRet1)
                {
                    return 1;
                }
            }
            else if (i == 2)
            {
                if (nPlayerLevel >= GlobeVar.GEM_HOLE_SECOND && false == bRet2)
                {
                    return 1;
                }
            }
            else if (i == 3)
            {
                if (nPlayerLevel >= GlobeVar.GEM_HOLE_THIRD && false == bRet3)
                {
                    return 1;
                }
            }
            
        }
        return 0;
    }

    public int GetPartnerSkillCanLevelUpCount()
    {
        //遍历伙伴容器
        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container == null)
        {
                return 0;
        }
        List<Fellow> fellowlist = FellowTool.FellowSort(container);
        for (int i = 0; i < fellowlist.Count; ++i)
        {
            Fellow fellow = fellowlist[i];
            if (fellow.IsValid())
            {
                //天赋技能
                foreach (KeyValuePair<int, int> pair in fellow.TallentSkill)
                {
                    if (pair.Key != GlobeVar.INVALID_ID)
                    {
                        int talentSkillId = pair.Key;
                        Tab_CabalFellowTallentSkill tabTalentSkill = TableManager.GetCabalFellowTallentSkillByID(talentSkillId, 0);
                        if (tabTalentSkill == null)
                        {
                            return 0;
                        }
                        int needTalentBookId = tabTalentSkill.SkillBook;
                        if (tabTalentSkill.NextSkillId != GlobeVar.INVALID_ID)
                        {
                            if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(needTalentBookId) > 0)
                            {
                                return 1;
                            }
                        }
                        else
                        {
                            return 0;
                        }
                    }
                }
                //培养技能
                for (int j = 0; j < Fellow.FELLOW_ELEMENTSKILL_COUNT; j++)
                {
                    int fellowElementSkillId = fellow.GetElementSkillId(i);
                    int fellowLevel = fellow.Level;
                    int index = j;
                    if (fellowElementSkillId == GlobeVar.INVALID_ID)//空位还没有开启的话
                    {
                        if (index < 0 || index >= Fellow.FELLOW_ELEMENTSKILL_LEVELNEED.Length)
                        {
                            return 0;
                        }
                        if (fellowLevel == Fellow.FELLOW_ELEMENTSKILL_LEVELNEED[index])
                        {
                            return 0;
                        }
                    }
                    else //开启了
                    {
                        Tab_CabalFellowElementSkill tabSkill = TableManager.GetCabalFellowElementSkillByID(fellowElementSkillId, 0);
                        if (tabSkill == null)
                        {
                            return 0;
                        }
                        Tab_CabalFellowElementSkill tabNextSkill = TableManager.GetCabalFellowElementSkillByID(tabSkill.NextSkillId, 0);
                        {
                            if (tabNextSkill == null)
                                return 0;
                            else
                            {
                                int packHaveBookNum = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(tabNextSkill.NeedBookId);
                                int nextSkillNeedBookNum = tabNextSkill.NeedBookCount;
                                if (packHaveBookNum >= nextSkillNeedBookNum)
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }

        }

        return 0;
    }
    // 战力
    public GameObject m_FightObj;
    public void ShowFightObj()
    {
        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            m_FightObj.gameObject.SetActive(false);
        else
            m_FightObj.gameObject.SetActive(true);
    }

    public int GetHpDrugNum()
    {
        int num = 0;
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_HP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_HP; i++)
            {
                num += BackPack.GetItemCountByDataId(i);
            }
            for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_DYHP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_DYHP; i++)
            {
                num += BackPack.GetItemCountByDataId(i);
            }
        }
        return num;
    }
}