/********************************************************************
	created:	2015/11/25
	created:	2015/11/25 11:27
	filename: 	SkillLevelUpRoot.cs
	author:		fanzhipeng
	
	purpose:	技能升级界面
*********************************************************************/
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using GCGame.Table;
using Games.GlobeDefine;
using Games.SkillModle;
using System.Collections.Generic;
using GCGame;

public class SkillLevelUpRoot : MonoBehaviour
{

    #region 成员变量
    private static SkillLevelUpRoot m_instance = null;
    public static SkillLevelUpRoot Instance()
    {
        return m_instance;
    }

    #region 侧边栏Tab按钮

    //tab键默认按钮
    public GameObject[] m_tabGameObjList;

    //tab键高亮按钮
    public GameObject[] m_tabBtnHighObjList;

    //tab键默认高亮索引
    private int m_curHighIndex = 0;
    public int CurHighIndex
    {
        get { return m_curHighIndex; }
        set
        {
            m_curHighIndex = value;
            UpdateTabState();
        }
    }

    //tab键对应的界面
    public GameObject[] m_tabBtnShowObjList; //0普通技能，1pve，2pvp


    #endregion

    #region 常规技能按钮
    public GameObject[] m_skillObjList;      //默认技能按钮
    public GameObject[] m_skillSelectList;   //选中按钮
    public UISprite[] m_skillIcon;
    public UILabel[] m_skillLevel;
    public UILabel[] m_skillName;

    public GameObject[] m_skillLock;
    public GameObject m_SkillLockPve;
    public GameObject m_SkillLockPvp;
    public UILabel[] m_lockLevel;
    private int m_curNormalIndex = 0;
    public int CurNormalIndex
    {
        get { return m_curNormalIndex; }
        set
        {
            m_curNormalIndex = value;
            UpdateNormalSelectState();
        }
    }

    #endregion

    #region PVE技能
    public GameObject[] m_PVEOjbList;
    public GameObject[] m_PVESelectList;
    public UISprite[] m_PVEIcon;
    public UILabel[] m_PVELEVEL;
    public UILabel[] m_PVEName;

    public GameObject[] m_PVELock;

    private int m_PVEIndex = 0;
    public int CurPVEIndex
    {
        get { return m_PVEIndex; }
        set
        {
            m_PVEIndex = value;
            UpdatePVESelectState();
        }
    }
    #endregion

    #region PVP技能
    public GameObject[] m_PVPOjbList;
    public GameObject[] m_PVPSelectList;
    public UISprite[] m_PVPIcon;
    public UILabel[] m_PVPLEVEL;
    public UILabel[] m_PVPName;

    public GameObject[] m_PVPLock;

    private int m_PVPIndex = 0;
    public int CurPVPIndex
    {
        get { return m_PVPIndex; }
        set
        {
            m_PVPIndex = value;
            UpdatePVPSelectState();
        }
    }
    #endregion

    #region 公用界面控件
    public UILabel m_coinCount;
    public UILabel m_DianjuanCount;
	public float m_updateTime;
    public GameObject m_levleUpEffectObj;
    #endregion

    #region 单个技能数据
    private struct SkillInfo
    {
        public enum SKILLSTATE
        {
            INVALID = 0,        //无效状态
            NORMAL_LOCK = 1,    //普通技能锁定状态
            NORMAL_STUDY = 2,   //普通技能已经学习状态
            NOT_HAVE_ITEM = 4,  //未获取
            HAVE_ITEM = 8,      //已获取
            IS_OWN = 16,        //已拥有
            IS_USING = 32,      //正在使用
        }

        public int nSKillId;    //技能ID
        public int nSkillState; //当前技能状态

        public SkillInfo(int skillId = -1, int state = (int)SKILLSTATE.NORMAL_LOCK)
        {
            nSKillId = -1;
            nSkillState = (int)SKILLSTATE.NOT_HAVE_ITEM;
        }
    }
    SkillInfo[] NormalSkillInfos;
    SkillInfo[] PVESkillInfos;
    SkillInfo[] PVPSkillInfos;
    private const int NORMAL_SKILL_COUNT = 4;
    private const int PVE_SKILL_COUNT = 5;
    private const int PVP_SKILL_COUNT = 5;
    private const int SKILL_MATERIAL_ITEM = 100001;
    #endregion

    #region 点击技能弹出的二级界面
    public GameObject m_showSkillMenuObj;

    public UISprite m_skillMenuIcon;
    public UILabel m_skillMenuLevel;
    public UILabel m_skillMenuName;
    public UILabel m_skillDescIntrol; //技能简要介绍
    public GameObject m_skillDescIntrolObj; //技能简要介绍的底板
    //未学习的技能块
    public GameObject m_LockMenuObj;
    public UILabel m_skillDesc;

    //已经学习的技能快
    public GameObject m_LevelupMenuObj;
    public UILabel m_skillCurDesc;
    public UILabel m_skillNextDesc;

    public UILabel m_skillCdTime;
    public UILabel m_skillDel;

    //按钮状态
    public UIImageButton m_NormalLevelUpBtn;  //升级按钮
    public UIImageButton m_getItemBtn;        //获取按钮
    public UIImageButton m_studySkillBtn;     //学习按钮
    public UIImageButton m_useSkillBtn;       //启用按钮
    public UIImageButton m_ItemLevelUpBtn;    //Item按钮
    public UIImageButton m_LevelUp2MaxBtn;  //一键升级按钮
    public UIImageButton m_LevelUpFull;     //已经升满按钮

    //按钮置灰
    public UISprite m_NormalLevelUpSpr;
    public UISprite m_getItemSpr;
    public UISprite m_studySkillSpr;
    public UISprite m_useSkillSpr;
    public UISprite m_ItemLevelUpSpr;
    public UISprite m_LevelUp2MaxSpr;
    public UISprite m_LevelUpFullSpr;

    //普通技能升级消耗模块
    public GameObject m_NormalDelObj;
    public UILabel m_NormalDelCount;

    //Item变身技能升级经验模块
    public GameObject m_ItemExpObj;
    public UISlider m_ItemExpCount;
    public TweenNumber m_ItemExpCountSlider;
    //升级需要的等级
    public GameObject m_NeedLevelObj;
    public UILabel m_NeddLevel;

    private Tab_SkillEx m_SelectSkillEx;
    public Tab_SkillEx SelectSkillEx
    {
        get { return m_SelectSkillEx; }
        set { m_SelectSkillEx = value; }
    }

    private int m_CurSelectSkillState;
    public int CurSelectSkillState
    {
        get { return m_CurSelectSkillState; }
        set { m_CurSelectSkillState = value; }
    }

    public delegate void OnUpdateSkillMenuInfo();
    public OnUpdateSkillMenuInfo DelUpdateSkillMenu;

    //private CG_SKILL_LEVELUP_TO_MAX cg_Skill_LevelUp_To_Max_Packet = null;

    //private CG_SKILL_LEVELUP_TO_MAX[] cg_Skill_LevelUpAll_Packet = new CG_SKILL_LEVELUP_TO_MAX[MAX_PUTONG_SKILL];
    private SkillLevelUpPacketStruct m_SkillLevelUpPacketStruct = new SkillLevelUpPacketStruct();
    private SkillLevelUpPacketStruct[] m_AllSkillLevelUpPacketStruct = new SkillLevelUpPacketStruct[MAX_PUTONG_SKILL];
    private struct SkillLevelUpPacketStruct
    {
        public int SkillExID;
        public int CanLevel;
        public int NeedConsume;
        public int NeedCoin;
    }
    private const int MAX_PUTONG_SKILL = 4;
    #endregion

    #region Item技能升级的二级弹出界面
    public GameObject m_ItemLveUI;   //二级弹出界面
    public UILabel m_curSelectValue;
    public UILabel m_curLevel;
    public UILabel m_maxCount;

    public UISlider m_ExpSpr;
    

    private int m_curValue;

    private int m_itemLveSkillId;
    private int m_itemLevel;

    private int m_addValue;
    private int m_curLevelValue;

    private bool m_isCanUpdteItemExp;

    public GameObject[] m_PutongSkillLevelUpPoint;

    public GameObject m_SkillStudyComfirm;
    public GameObject m_SkillBookLevelUpComfirm;
    public UISprite m_StudyBookItemIcon;
    public UILabel m_StudyBookItemLabel;

    public delegate void DelLevelUpComfirmMenu();
    public DelLevelUpComfirmMenu DelClickYes;
    public DelLevelUpComfirmMenu DelClickNo;

    public UISprite[] m_PveCanLevelUpTips;
    public UISprite[] m_PveCanStudyTips;

    public UISprite[] m_PvpCanLevelUpTips;
    public UISprite[] m_PvpCanStudyTips;

    public GameObject[] m_PveUseLine;
    public GameObject[] m_PvpUseLine;


    public GameObject m_LevelUpAllEffect;
    public GameObject m_LevelUpAllEffectBtn;
    public UILabel m_LevelUpAllEffectLabel;

    public GameObject[] m_JiNengShengJiEffectPve;
    public GameObject[] m_JiNengShengJiEffectPvp;

    public GameObject[] m_QiYongEffectPve;
    public GameObject[] m_QiYongEffectPvp;

    private bool ShowShengJiEffectPve = false;
    private bool ShowShengJiEffectPvp = false;

    private float m_LastValue = 0f;
    private float m_NowValue = 0f;
    

    //public GameObject effectCam;

    #endregion

    #region 获得Item的二级选择界面
    public GameObject m_getItemWayWin;
    #endregion

    #region PVE 与PVP按钮状态的枚举值
    enum PVESTATE
    {
        PVE = 0,
        PVP = 1,
    }
    private int m_pvxState =-1;
    #endregion
    #endregion

    #region 主体逻辑
    void Awake()
    {
        m_instance = this;
        InitSkillInfo();

        //关闭特效
        CloseLevelUpEffect();
        //effectCam = GameObject.Find("Camera-JoyStick");
    }
    // Use this for initialization
    void Start()
    {
        CurNormalIndex = 0;
        CurPVEIndex = 0;
        CurPVPIndex = 0;

        m_SelectSkillEx = null;
        m_CurSelectSkillState = (int)SkillInfo.SKILLSTATE.INVALID;
        DelUpdateSkillMenu = null;

        m_isCanUpdteItemExp = false;

        m_pvxState = -1;
        m_addValue = 0;
		m_updateTime = -1f;
        DelClickYes = null;
        DelClickNo = null;
       // m_isShowSrcollView = false;
    }

    void OnEnable()
    {
        CurHighIndex = 0;
        //普通技能数据填充
        FillNormalSkillList();
        //PVE数据填充
        FillPVESkillList();
        //PVP数据填充
        FillPVPSkillList();
        //公用界面信息填写
        FillCommonInfo();
        //关闭特效
        CloseLevelUpEffect();

        Check_NewPlayerGuide();
    }

    // Update is called once per frame
    void Update()
    {
        if (m_isCanUpdteItemExp)
        {
            UpdateItemExpValue(m_addValue);
        }

        if (m_updateTime > 0 && Time.realtimeSinceStartup - m_updateTime > 0.5)
        {
            FillCommonInfo();
            m_updateTime = -1f;
        }

        if (!m_showSkillMenuObj.activeSelf)
        {
            //关闭升级特效
            CloseLevelUpEffect();
        }
    }
    /// <summary>
    /// 常规技能数据
    /// </summary>
    private void FillNormalSkillList()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        bool HaveSkillCanLevelup = false;
        for (int nIndex = 1; nIndex <= TableManager.GetSkillActive().Count; nIndex++)
        {
            Tab_SkillActive _skillActiveInfo = TableManager.GetSkillActiveByID(nIndex, 0);
            if (_skillActiveInfo != null && _mainPlayer.Profession == _skillActiveInfo.Profession)
            {
                Tab_SkillEx _SkillEx = TableManager.GetSkillExByID(_skillActiveInfo.SkillId, 0);
                Tab_SkillBase _skillBase = null;
                if (_SkillEx != null)
                {
                    _skillBase = TableManager.GetSkillBaseByID(_SkillEx.BaseId, 0);
                }

                if (null == _skillBase)
                {
                    continue;
                }

                if (_skillBase.LevelUpIndex / 10 != 0)
                {
                    continue;
                }
                int nPutIndex = _skillBase.LevelUpIndex % 10;

                if (nPutIndex < 0 || nPutIndex >= m_skillObjList.Length || nPutIndex >= m_skillName.Length
                    || nPutIndex >= m_skillIcon.Length || nPutIndex >= m_skillLevel.Length
                    || nPutIndex >= m_skillLock.Length || nPutIndex >= m_lockLevel.Length
                    || nPutIndex >= NormalSkillInfos.Length)
                    continue;

                bool isOwn = false;
                int nSkillId = _skillActiveInfo.SkillId;
                for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
                {
                    int tempSkillId = _mainPlayer.OwnSkillInfo[i].SkillId;
                    Tab_SkillEx _tempSkillEx = TableManager.GetSkillExByID(tempSkillId, 0);
                    if (null == _tempSkillEx)
                    {
                        continue;
                    }

                    Tab_SkillBase _tempSkillBase = TableManager.GetSkillBaseByID(_tempSkillEx.BaseId, 0);

                    if (null == _tempSkillBase)
                    {
                        continue;
                    }

                    if (_tempSkillBase.Id == _skillBase.Id)
                    {
                        _SkillEx = _tempSkillEx;
                        _skillBase = _tempSkillBase;
                        isOwn = true;
                        nSkillId = tempSkillId;
                        break;
                    }
                }
                NormalSkillInfos[nPutIndex].nSKillId = nSkillId;
                NormalSkillInfos[nPutIndex].nSkillState = isOwn ? (int)SkillInfo.SKILLSTATE.NORMAL_STUDY : (int)SkillInfo.SKILLSTATE.NORMAL_LOCK;
                m_skillName[nPutIndex].text = _skillBase.Name;
                m_skillIcon[nPutIndex].spriteName = _skillBase.Icon;
                m_skillLevel[nPutIndex].text = StrDictionary.GetClientDictionaryString("#{2162}", _SkillEx.Level);

                m_skillLock[nPutIndex].SetActive(!isOwn);
                m_lockLevel[nPutIndex].text = StrDictionary.GetClientDictionaryString("#{10847}", _skillActiveInfo.Level);

                m_skillLevel[nPutIndex].gameObject.SetActive(isOwn);
                
                if (CanLevelUpSkill(nSkillId))
                {
                    m_PutongSkillLevelUpPoint[nPutIndex].SetActive(true);
                    HaveSkillCanLevelup = true;
                }
            }
        }

        if (HaveSkillCanLevelup)
        {
            m_LevelUpAllEffect.SetActive(true);
            m_LevelUpAllEffectBtn.SetActive(true);
            m_LevelUpAllEffectLabel.gameObject.GetComponent<UIWidget>().color = new Color(1, 1, 1, 1);
        }
        else
        {
            m_LevelUpAllEffect.SetActive(false);
            m_LevelUpAllEffectBtn.SetActive(false);
            m_LevelUpAllEffectLabel.gameObject.GetComponent<UIWidget>().color = new Color(0.5f, 0.5f, 0.5f, 1);
        }
    }

    /// <summary>
    /// PVE技能数据
    /// </summary>
    private void FillPVESkillList()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        for (int nIndex = 1; nIndex <= TableManager.GetSkillActive().Count; nIndex++)
        {
            Tab_SkillActive _skillActiveInfo = TableManager.GetSkillActiveByID(nIndex, 0);
            if (_skillActiveInfo != null && _mainPlayer.Profession == _skillActiveInfo.Profession)
            {
                Tab_SkillEx _SkillEx = TableManager.GetSkillExByID(_skillActiveInfo.SkillId, 0);
                Tab_SkillBase _skillBase = null;
                if (_SkillEx != null)
                {
                    _skillBase = TableManager.GetSkillBaseByID(_SkillEx.BaseId, 0);
                }

                if (null == _skillBase)
                {
                    continue;
                }

                if (_skillBase.LevelUpIndex / 10 != 1)
                {
                    continue;
                }
                int nPutIndex = _skillBase.LevelUpIndex % 10;

                if (nPutIndex < 0 || nPutIndex >= m_PVEOjbList.Length || nPutIndex >= m_PVESelectList.Length
                    || nPutIndex >= m_PVEIcon.Length || nPutIndex >= m_PVELEVEL.Length
                    || nPutIndex >= m_PVEName.Length || nPutIndex >= m_PVELock.Length
                    || nPutIndex >= PVESkillInfos.Length)
                    continue;

                if (GameManager.gameManager.PlayerDataPool == null)
                {
                    return;
                }
                Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
                if (backPack == null)
                {
                    return;
                }
                int ItemCount = backPack.GetItemCountByDataId(_skillActiveInfo.SkillItemID);
                bool isHaveItem = false;
                bool isOwn = false;

                int nSkillId = _skillActiveInfo.SkillId;
                int nCurUsingIndex = -1;
                if (ItemCount > 0)
                {
                    isHaveItem = true;
                }

                for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
                {
                    int tempSkillId = _mainPlayer.OwnSkillInfo[i].SkillId;
                    Tab_SkillEx _tempSkillEx = TableManager.GetSkillExByID(tempSkillId, 0);
                    if (null == _tempSkillEx)
                    {
                        continue;
                    }

                    Tab_SkillBase _tempSkillBase = TableManager.GetSkillBaseByID(_tempSkillEx.BaseId, 0);

                    if (null == _tempSkillBase)
                    {
                        continue;
                    }

                    if (_tempSkillBase.Id == _skillBase.Id)
                    {
                        _SkillEx = _tempSkillEx;
                        _skillBase = _tempSkillBase;
                        isOwn = true;
                        nSkillId = tempSkillId;
                        nCurUsingIndex = i;
                        break;
                    }
                }

                int nSkillState = (int)SkillInfo.SKILLSTATE.NOT_HAVE_ITEM;
                m_PveCanLevelUpTips[nPutIndex].gameObject.SetActive(false);
                m_PveCanStudyTips[nPutIndex].gameObject.SetActive(false);
                if (m_PveUseLine[nPutIndex] != null)
                {
                    m_PveUseLine[nPutIndex].SetActive(false);
                }
                if (m_JiNengShengJiEffectPve[nPutIndex] != null)
                {
                    m_JiNengShengJiEffectPve[nPutIndex].SetActive(false);
                }
                if (isHaveItem)
                {
                    nSkillState = (int)SkillInfo.SKILLSTATE.HAVE_ITEM;
                }

                if (isOwn)
                {
                    nSkillState = (int)SkillInfo.SKILLSTATE.IS_OWN;
                }

                if (nCurUsingIndex != -1 && nCurUsingIndex == PlayerPreferenceData.PVESkillIdCurUsing)
                {
                    nSkillState = (int)SkillInfo.SKILLSTATE.IS_USING;
                    
                    m_PveUseLine[nPutIndex].SetActive(true);
                    if (ShowShengJiEffectPve)
                    {
                        ShowShengJiEffectPve = false;
                        m_JiNengShengJiEffectPve[nPutIndex].SetActive(true);
                    }
                    else
                    {
                        m_JiNengShengJiEffectPve[nPutIndex].SetActive(false);
                    }
                }
                

                //如果是xp技能
                if ((_skillBase.SkillClass & (int)SKILLCLASS.XP) != 0)
                {
                    nSkillState = isOwn ? (int)SkillInfo.SKILLSTATE.NORMAL_STUDY : (int)SkillInfo.SKILLSTATE.NORMAL_LOCK;
                    m_SkillLockPve.SetActive(!isOwn);
                }
                PVESkillInfos[nPutIndex].nSKillId = nSkillId;


                PVESkillInfos[nPutIndex].nSkillState = nSkillState;
                m_PVEName[nPutIndex].text = _skillBase.Name;
                m_PVEIcon[nPutIndex].spriteName = _skillBase.Icon;
                m_PVELEVEL[nPutIndex].text = StrDictionary.GetClientDictionaryString("#{2162}", _SkillEx.Level);

                
                m_PVELock[nPutIndex].SetActive(!isOwn);
                // m_lockLevel[nPutIndex].text = StrDictionary.GetClientDictionaryString("#{10847}", _skillActiveInfo.Level);
                int haveMoney = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
                Tab_SkillLevelUp _skillLevelUp = TableManager.GetSkillLevelUpByID(nSkillId, 0);
                m_PVELEVEL[nPutIndex].gameObject.SetActive(isOwn);
                int LevelupItemCount = backPack.GetItemCountByDataId(SKILL_MATERIAL_ITEM);
                if (nSkillState == (int) SkillInfo.SKILLSTATE.HAVE_ITEM)
                {
                    m_PveCanStudyTips[nPutIndex].gameObject.SetActive(true);
                }
                else if(nSkillState == (int)SkillInfo.SKILLSTATE.IS_OWN)
                {
                    if (LevelupItemCount > 0 && _skillLevelUp.NeedCoin <= haveMoney)
                    {
                        m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(true);
                    }
                    else
                    {
                        m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(false);
                    }
                }
                else if(nSkillState == (int)SkillInfo.SKILLSTATE.IS_USING)
                {
                    if (LevelupItemCount > 0 && _skillLevelUp.NeedCoin <= haveMoney)
                    {
                        m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(true);
                    }
                    else
                    {
                        m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(false);
                    }
                }
                else if (nSkillState == (int)SkillInfo.SKILLSTATE.NORMAL_STUDY)
                {
                    m_PveCanLevelUpTips[nPutIndex].gameObject.SetActive(CanLevelUpSkill(nSkillId) ? true : false);
                }
                
            }
        }//for
    }

    /// <summary>
    /// PVP技能数据
    /// </summary>
    private void FillPVPSkillList()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        for (int nIndex = 1; nIndex <= TableManager.GetSkillActive().Count; nIndex++)
        {
            Tab_SkillActive _skillActiveInfo = TableManager.GetSkillActiveByID(nIndex, 0);
            if (_skillActiveInfo != null && _mainPlayer.Profession == _skillActiveInfo.Profession)
            {
                Tab_SkillEx _SkillEx = TableManager.GetSkillExByID(_skillActiveInfo.SkillId, 0);
                Tab_SkillBase _skillBase = null;
                if (_SkillEx != null)
                {
                    _skillBase = TableManager.GetSkillBaseByID(_SkillEx.BaseId, 0);
                }

                if (null == _skillBase)
                {
                    continue;
                }

                if (_skillBase.LevelUpIndex / 10 != 2)
                {
                    continue;
                }
                int nPutIndex = _skillBase.LevelUpIndex % 10;

                if (nPutIndex < 0 || nPutIndex >= m_PVPOjbList.Length || nPutIndex >= m_PVPSelectList.Length
                    || nPutIndex >= m_PVPIcon.Length || nPutIndex >= m_PVPLEVEL.Length
                    || nPutIndex >= m_PVPName.Length || nPutIndex >= m_PVPLock.Length
                    || nPutIndex >= PVPSkillInfos.Length)
                    continue;

                if (GameManager.gameManager.PlayerDataPool == null)
                {
                    return;
                }
                Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
                if (backPack == null)
                {
                    return;
                }
                int ItemCount = backPack.GetItemCountByDataId(_skillActiveInfo.SkillItemID);
                bool isHaveItem = false;
                bool isOwn = false;

                int nSkillId = _skillActiveInfo.SkillId;
                int nCurUseIndex = -1;
                if (ItemCount > 0)
                {
                    isHaveItem = true;
                }

                for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
                {
                    int tempSkillId = _mainPlayer.OwnSkillInfo[i].SkillId;
                    Tab_SkillEx _tempSkillEx = TableManager.GetSkillExByID(tempSkillId, 0);
                    if (null == _tempSkillEx)
                    {
                        continue;
                    }

                    Tab_SkillBase _tempSkillBase = TableManager.GetSkillBaseByID(_tempSkillEx.BaseId, 0);

                    if (null == _tempSkillBase)
                    {
                        continue;
                    }

                    if (_tempSkillBase.Id == _skillBase.Id)
                    {
                        _SkillEx = _tempSkillEx;
                        _skillBase = _tempSkillBase;
                        isOwn = true;
                        nSkillId = tempSkillId;
                        nCurUseIndex = i;
                        break;
                    }
                }

                int nSkillState = (int)SkillInfo.SKILLSTATE.NOT_HAVE_ITEM;
                m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(false);
                m_PvpCanStudyTips[nPutIndex].gameObject.SetActive(false);
                if (m_PvpUseLine[nPutIndex] != null)
                {
                    m_PvpUseLine[nPutIndex].SetActive(false);
                }
                if (m_JiNengShengJiEffectPvp[nPutIndex] != null)
                {
                    m_JiNengShengJiEffectPvp[nPutIndex].SetActive(false);
                }
                if (isHaveItem)
                {
                    nSkillState = (int)SkillInfo.SKILLSTATE.HAVE_ITEM;
                }

                if (isOwn)
                {
                    nSkillState = (int)SkillInfo.SKILLSTATE.IS_OWN;
                }

                if (nCurUseIndex != -1 && nCurUseIndex == PlayerPreferenceData.PVPSkillIdCurUsing)
                {
                    nSkillState = (int)SkillInfo.SKILLSTATE.IS_USING;
                    m_PvpUseLine[nPutIndex].SetActive(true);
                    if (ShowShengJiEffectPvp)
                    {
                        ShowShengJiEffectPvp = false;
                        m_JiNengShengJiEffectPvp[nPutIndex].SetActive(true);
                        
                    }
                    else
                    {
                        m_JiNengShengJiEffectPvp[nPutIndex].SetActive(false);
                    }
                }

                //如果是xp技能
                if ((_skillBase.SkillClass & (int)SKILLCLASS.XP) != 0)
                {
                    nSkillState = isOwn ? (int)SkillInfo.SKILLSTATE.NORMAL_STUDY : (int)SkillInfo.SKILLSTATE.NORMAL_LOCK;
                    m_SkillLockPvp.SetActive(!isOwn);
                }
                PVPSkillInfos[nPutIndex].nSKillId = nSkillId;


                PVPSkillInfos[nPutIndex].nSkillState = nSkillState;
                m_PVPName[nPutIndex].text = _skillBase.Name;
                m_PVPIcon[nPutIndex].spriteName = _skillBase.Icon;
                m_PVPLEVEL[nPutIndex].text = StrDictionary.GetClientDictionaryString("#{2162}", _SkillEx.Level);

                m_PVPLock[nPutIndex].SetActive(!isOwn);
                // m_lockLevel[nPutIndex].text = StrDictionary.GetClientDictionaryString("#{10847}", _skillActiveInfo.Level);
                int haveMoney = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
                Tab_SkillLevelUp _skillLevelUp = TableManager.GetSkillLevelUpByID(nSkillId, 0);
                m_PVPLEVEL[nPutIndex].gameObject.SetActive(isOwn);
                int LevelupItemCount = backPack.GetItemCountByDataId(SKILL_MATERIAL_ITEM);
                if (nSkillState == (int)SkillInfo.SKILLSTATE.HAVE_ITEM)
                {
                    m_PvpCanStudyTips[nPutIndex].gameObject.SetActive(true);
                }
                else if (nSkillState == (int)SkillInfo.SKILLSTATE.IS_OWN)
                {
                    if (LevelupItemCount > 0 && _skillLevelUp.NeedCoin <= haveMoney)
                    {
                        m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(true);
                    }
                    else
                    {
                        m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(false);
                    }
                }
                else if (nSkillState == (int)SkillInfo.SKILLSTATE.IS_USING)
                {
                    if (LevelupItemCount > 0 && _skillLevelUp.NeedCoin <= haveMoney)
                    {
                        m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(true);
                    }
                    else
                    {
                        m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(false);
                    }
                }
                else if (nSkillState == (int)SkillInfo.SKILLSTATE.NORMAL_STUDY)
                {
                    m_PvpCanLevelUpTips[nPutIndex].gameObject.SetActive(CanLevelUpSkill(nSkillId) ? true : false);
                }
            }
        }
    }

    /// <summary>
    /// 主界面公用信息填写
    /// </summary>
    private void FillCommonInfo()
    {
		Debug.Log ("cur coin =====      " + GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
		
        m_coinCount.text = GCGame.Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
        m_DianjuanCount.text = GCGame.Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind());
        FixCurSelectBtnState();//金钱更新后再次修正下当前按钮状态
        UpdatePveSkillLevelUpPointState();
        UpdatePvpSkillLevelUpPointState();
    }
    /// <summary>
    /// 修正下当前按钮状态
    /// </summary>
    void FixCurSelectBtnState()
    {
        if (m_SelectSkillEx != null)
        {
            Tab_SkillLevelUp _skillLevelUp = TableManager.GetSkillLevelUpByID(m_SelectSkillEx.SkillExID, 0);
            if (_skillLevelUp != null)
            {
                int nCoin = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
                if (nCoin < _skillLevelUp.NeedCoin)
                {
                    m_NormalLevelUpBtn.isEnabled = false;
                    m_NormalLevelUpSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
                    m_LevelUp2MaxBtn.isEnabled = false;
                    m_LevelUp2MaxSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
                    m_ItemLevelUpBtn.isEnabled = false;
                    m_ItemLevelUpSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
                }
            }
        }
    }

    #endregion

    #region 工具函数
    /// <summary>
    /// 根据按键Index值更新界面
    /// </summary>
    private void UpdateTabState()
    {
        if (m_curHighIndex < 0 || m_curHighIndex >= m_tabGameObjList.Length)
        {
            return;
        }

        for (int i = 0; i < m_tabBtnHighObjList.Length && i < m_tabBtnShowObjList.Length; i++)
        {
            m_tabBtnHighObjList[i].SetActive(i == m_curHighIndex);
            m_tabBtnShowObjList[i].SetActive(i == m_curHighIndex);
        }
    }

    /// <summary>
    /// 根据当前tab键的名字得到当前的Index
    /// </summary>
    /// <param name="objName"></param>
    /// <returns></returns>
    private int GetIndexByObjName(string objName, GameObject[] objList)
    {
        int nIndex = 0;

        if (null == objList)
        {
            return nIndex;
        }

        for (int i = 0; i < objList.Length; i++)
        {
            if (objList[i] != null && objList[i].name.Equals(objName))
            {
                return i;
            }
        }
        return nIndex;
    }

    /// <summary>
    /// 更新常规技能选中状态
    /// </summary>
    private void UpdateNormalSelectState()
    {
        if (m_curNormalIndex < 0 || m_curNormalIndex >= m_skillObjList.Length)
        {
            return;
        }

        for (int i = 0; i < m_skillObjList.Length && i < m_skillSelectList.Length; i++)
        {
            m_skillSelectList[i].SetActive(i == m_curNormalIndex);
        }
    }

    /// <summary>
    /// 更新PVE技能选中状态
    /// </summary>
    private void UpdatePVESelectState()
    {
        if (m_PVEIndex < 0 || m_PVEIndex >= m_PVEOjbList.Length)
        {
            return;
        }

        for (int i = 0; i < m_PVEOjbList.Length && i < m_PVESelectList.Length; i++)
        {
            m_PVESelectList[i].SetActive(i == m_PVEIndex);
        }
    }

    /// <summary>
    /// 更新PVP技能选中状态
    /// </summary>
    private void UpdatePVPSelectState()
    {
        if (m_PVPIndex < 0 || m_PVPIndex >= m_PVPOjbList.Length)
        {
            return;
        }

        for (int i = 0; i < m_PVPOjbList.Length && i < m_PVPSelectList.Length; i++)
        {
            m_PVPSelectList[i].SetActive(i == m_PVPIndex);
        }
    }

    /// <summary>
    /// 初始化技能数据
    /// </summary>
    private void InitSkillInfo()
    {
        PVESkillInfos = new SkillInfo[PVE_SKILL_COUNT];
        PVPSkillInfos = new SkillInfo[PVP_SKILL_COUNT];
        NormalSkillInfos = new SkillInfo[NORMAL_SKILL_COUNT];
        for (int i = 0; i < PVESkillInfos.Length; i++)
        {
            PVESkillInfos[i] = new SkillInfo(-1, (int)SkillInfo.SKILLSTATE.NOT_HAVE_ITEM);
        }

        for (int i = 0; i < PVPSkillInfos.Length; i++)
        {
            PVPSkillInfos[i] = new SkillInfo(-1, (int)SkillInfo.SKILLSTATE.NOT_HAVE_ITEM); ;
        }

        for (int i = 0; i < NormalSkillInfos.Length; i++)
        {
            NormalSkillInfos[i] = new SkillInfo(-1, (int)SkillInfo.SKILLSTATE.NORMAL_LOCK);
        }
    }

    /// <summary>
    /// 根据当前技能状态控制界面对应控件的显示状态
    /// </summary>
    /// <param name="nState"></param>
    /// <param name="nSkillId"></param>
    public void UpdateSkillDetailByState(int nState, int nSkillId)
    {
        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
        if (null == _skillEx)
        {
            return;
        }
        Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
        if (null == _skillBase)
        {
            return;
        }
        m_CurSelectSkillState = nState;
        m_SelectSkillEx = _skillEx;
        switch (nState)
        {
            case (int)SkillInfo.SKILLSTATE.NORMAL_LOCK:
                {
                    m_skillMenuLevel.gameObject.SetActive(true);
                    m_LevelupMenuObj.SetActive(false);
                    m_ItemExpObj.SetActive(false);
                    m_NormalLevelUpBtn.gameObject.SetActive(false);  //升级按钮
                    m_getItemBtn.gameObject.SetActive(false);        //获取按钮
                    m_studySkillBtn.gameObject.SetActive(false);     //学习按钮
                    m_useSkillBtn.gameObject.SetActive(false);       //启用按钮
                    m_ItemLevelUpBtn.gameObject.SetActive(false);    //item升级
                    m_LevelUp2MaxBtn.gameObject.SetActive(false);
                    m_LevelUpFull.gameObject.SetActive(false);
                    m_skillDescIntrolObj.SetActive(false);

                    m_LockMenuObj.SetActive(true);
                    m_NormalDelObj.SetActive(true);
                    m_NeedLevelObj.SetActive(true);


                    break;
                }
            case (int)SkillInfo.SKILLSTATE.NORMAL_STUDY:
                {
                    Tab_SkillLevelUp _levelUp = TableManager.GetSkillLevelUpByID(_skillEx.SkillExID, 0);
                    if (_levelUp != null)
                    {
                        //到达最大等级
                        if (_levelUp.NextSkillId == -1)
                        {
                            m_LevelupMenuObj.SetActive(false);
                            m_ItemExpObj.SetActive(false);
                            m_skillDescIntrolObj.SetActive(false);

                            m_NormalLevelUpBtn.gameObject.SetActive(false);  //升级按钮
                            m_getItemBtn.gameObject.SetActive(false);        //获取按钮
                            m_studySkillBtn.gameObject.SetActive(false);     //学习按钮
                            m_useSkillBtn.gameObject.SetActive(false);       //启用按钮
                            m_ItemLevelUpBtn.gameObject.SetActive(false);    //item升级
                            m_LevelUp2MaxBtn.gameObject.SetActive(false);

                            m_LevelUpFull.gameObject.SetActive(true);
                            m_LockMenuObj.SetActive(true);
                            m_NormalDelObj.SetActive(true);
                            m_NeedLevelObj.SetActive(true);
                            m_skillMenuLevel.gameObject.SetActive(true);
                        }
                        else
                        {
                            m_ItemExpObj.SetActive(false);
                            m_LockMenuObj.SetActive(false);
                            m_getItemBtn.gameObject.SetActive(false);        //获取按钮
                            m_studySkillBtn.gameObject.SetActive(false);     //学习按钮
                            m_useSkillBtn.gameObject.SetActive(false);       //启用按钮
                            m_ItemLevelUpBtn.gameObject.SetActive(false);    //item升级
                            m_skillDescIntrolObj.SetActive(false);
                            m_LevelUpFull.gameObject.SetActive(false);

                            m_skillMenuLevel.gameObject.SetActive(true);
                            m_LevelupMenuObj.SetActive(true);
                            m_NormalLevelUpBtn.gameObject.SetActive(true);  //升级按钮
                            if ((_skillBase.SkillClass & (int)SKILLCLASS.XP) != 0)
                            {
                                m_LevelUp2MaxBtn.gameObject.SetActive(false);
                            }
                            else 
                            {
                                m_LevelUp2MaxBtn.gameObject.SetActive(true);
                            }
                            m_LevelUpFull.gameObject.SetActive(false);
                            m_NormalDelObj.SetActive(true);
                            m_NeedLevelObj.SetActive(true);
                        }
                    }
                    break;
                }
            case (int)SkillInfo.SKILLSTATE.NOT_HAVE_ITEM:
                {
                    m_ItemExpObj.SetActive(false);
                    m_NormalLevelUpBtn.gameObject.SetActive(false);  //升级按钮
                    m_LevelUp2MaxBtn.gameObject.SetActive(false);
                    m_studySkillBtn.gameObject.SetActive(false);     //学习按钮
                    m_useSkillBtn.gameObject.SetActive(false);       //启用按钮
                    m_ItemLevelUpBtn.gameObject.SetActive(false);    //item升级
                    m_skillDescIntrolObj.SetActive(false);
                    m_NormalDelObj.SetActive(false);
                    m_NeedLevelObj.SetActive(false);
                    m_LevelupMenuObj.SetActive(false);
                    m_LevelUpFull.gameObject.SetActive(false);

                    m_LockMenuObj.SetActive(true);
                    m_skillMenuLevel.gameObject.SetActive(true);
                    m_getItemBtn.gameObject.SetActive(true);        //获取按钮

                    break;
                }

            case (int)SkillInfo.SKILLSTATE.HAVE_ITEM:
                {
                    m_LevelupMenuObj.SetActive(false);
                    m_ItemExpObj.SetActive(false);
                    m_NormalLevelUpBtn.gameObject.SetActive(false);  //升级按钮
                    m_LevelUp2MaxBtn.gameObject.SetActive(false);
                    m_useSkillBtn.gameObject.SetActive(false);       //启用按钮
                    m_ItemLevelUpBtn.gameObject.SetActive(false);    //item升级
                    m_getItemBtn.gameObject.SetActive(false);        //获取按钮
                    m_skillDescIntrolObj.SetActive(false);
                    m_NormalDelObj.SetActive(false);
                    m_NeedLevelObj.SetActive(false);
                    m_LevelUpFull.gameObject.SetActive(false);

                    m_LockMenuObj.SetActive(true);
                    m_skillMenuLevel.gameObject.SetActive(true);
                    m_studySkillBtn.gameObject.SetActive(true);     //学习按钮
                    break;
                }
            case (int)SkillInfo.SKILLSTATE.IS_OWN:
                {
                    m_NormalLevelUpBtn.gameObject.SetActive(false);  //升级按钮
                    m_LevelUp2MaxBtn.gameObject.SetActive(false);
                    m_LockMenuObj.SetActive(false);
                    m_getItemBtn.gameObject.SetActive(false);        //获取按钮
                    m_studySkillBtn.gameObject.SetActive(false);     //学习按钮
                    m_skillDescIntrolObj.SetActive(false);
                    m_NormalDelObj.SetActive(false);
                    m_NeedLevelObj.SetActive(false);
                    m_LevelUpFull.gameObject.SetActive(false);

                    m_LevelupMenuObj.SetActive(true);
                    m_skillMenuLevel.gameObject.SetActive(true);
                    m_useSkillBtn.gameObject.SetActive(true);       //启用按钮
                    m_useSkillBtn.isEnabled = !Singleton<ObjManager>.GetInstance().MainPlayer.IsChangeMode();
                    m_ItemLevelUpBtn.gameObject.SetActive(true);    //item升级
                    m_ItemExpObj.SetActive(true);
                    break;
                }

            case (int)SkillInfo.SKILLSTATE.IS_USING:
                {
                    m_NormalLevelUpBtn.gameObject.SetActive(false);  //升级按钮
                    m_LevelUp2MaxBtn.gameObject.SetActive(false);
                    m_LockMenuObj.SetActive(false);
                    m_getItemBtn.gameObject.SetActive(false);        //获取按钮
                    m_studySkillBtn.gameObject.SetActive(false);     //学习按钮
                    m_skillDescIntrolObj.SetActive(false);
                    m_NormalDelObj.SetActive(false);
                    m_NeedLevelObj.SetActive(false);
                    m_LevelUpFull.gameObject.SetActive(false);

                    m_LevelupMenuObj.SetActive(true);
                    m_skillMenuLevel.gameObject.SetActive(true);
                    m_useSkillBtn.gameObject.SetActive(false);       //启用按钮
                    m_ItemLevelUpBtn.gameObject.SetActive(true);    //item升级
                    m_ItemExpObj.SetActive(true);
                    break;
                }

            default:
                break;
        }

        SetSkillDetailInfoBySkillEx(_skillEx);
    }

    /// <summary>
    /// 此函数只填充数据，不关注状态
    /// </summary>
    /// <param name="_skillEx"></param>
    private void SetSkillDetailInfoBySkillEx(Tab_SkillEx _skillEx)
    {
        if (null == _skillEx)
        {
            return;
        }

        Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
        if (null == _skillBase)
        {
            return;
        }

        m_SelectSkillEx = _skillEx;

        m_skillMenuIcon.spriteName = _skillBase.Icon;
        if( m_pvxState == (int)PVESTATE.PVE || m_pvxState == (int)PVESTATE.PVP)
        {
            m_skillMenuLevel.text = StrDictionary.GetClientDictionaryString("#{2162}", _skillEx.Level) + "/10";
        }
        else
        {
            m_skillMenuLevel.text = StrDictionary.GetClientDictionaryString("#{2162}", _skillEx.Level) + "/100";
        }
        m_skillMenuName.text = _skillBase.Name;
        m_skillDesc.text = _skillEx.SkillDesc;
        m_skillCurDesc.text = _skillEx.SkillDesc;
        m_skillDescIntrol.text = _skillBase.SkillIntro;

        m_NormalLevelUpBtn.isEnabled = true;
        m_LevelUp2MaxBtn.isEnabled = true;
        m_ItemLevelUpBtn.isEnabled = true;

        Tab_SkillLevelUp _levelUp = TableManager.GetSkillLevelUpByID(_skillEx.SkillExID, 0);
        if (_levelUp != null)
        {
            //到达最大等级
            if (_levelUp.NextSkillId == -1)
            {
                m_skillNextDesc.text = StrDictionary.GetClientDictionaryString("#{1810}"); //标明最高等级
                m_NormalLevelUpBtn.isEnabled = false;
                m_NormalLevelUpSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
                m_LevelUp2MaxBtn.isEnabled = false;
                m_LevelUp2MaxSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
                m_ItemLevelUpBtn.isEnabled = false;
                m_ItemLevelUpSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
                m_LevelUpFull.isEnabled = false;
                m_LevelUpFullSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
                if (GetSkillExpBySkillId(_skillEx.SkillExID) < _levelUp.NeedItemCount)
                {
                    m_ItemLevelUpBtn.isEnabled = true;
                }
                m_NormalDelCount.text = "---";
                m_NeddLevel.text = "---";
             
            }
            else
            {
                Tab_SkillEx _nextSkillEx = TableManager.GetSkillExByID(_levelUp.NextSkillId, 0);
                if (_nextSkillEx != null)
                {
                    m_skillNextDesc.text = _nextSkillEx.SkillDesc;
                }
                //消耗的金币
                m_NormalDelCount.text = _levelUp.NeedCoin.ToString();
                m_NeddLevel.text = StrDictionary.GetClientDictionaryString("#{2162}", _levelUp.Level);
            }
        }
        else
        {
            return;
        }

        //冷却
        Tab_CoolDownTime _CDTimeInfo = TableManager.GetCoolDownTimeByID(_skillEx.CDTimeId, 0);
        if (_CDTimeInfo != null)
        {
            int CDTime = _CDTimeInfo.CDTime / 1000;
            m_skillCdTime.text = StrDictionary.GetClientDictionaryString("#{1794}", CDTime);
        }
        else
        {
            m_skillCdTime.text = StrDictionary.GetClientDictionaryString("#{1793}");
        }
        //消耗
        string strDelInfo1 = StrDictionary.GetClientDictionaryString("#{1793}");
        string strDelInfo2 = StrDictionary.GetClientDictionaryString("#{1793}");
        SKILLDELANDGAINTYPE nType_1 = (SKILLDELANDGAINTYPE)_skillEx.GetDelTypebyIndex(0);
        if (nType_1 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
        {
            strDelInfo1 = GetTypeDesc(nType_1, _skillEx.GetDelNumbyIndex(0));
            m_skillDel.text = strDelInfo1;
        }
        SKILLDELANDGAINTYPE nType_2 = (SKILLDELANDGAINTYPE)_skillEx.GetDelTypebyIndex(1);
        if (nType_2 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
        {
            strDelInfo2 = GetTypeDesc(nType_1, _skillEx.GetDelNumbyIndex(1));
            m_skillDel.text = strDelInfo2;
        }
        if (nType_1 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID &&
            nType_2 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
        {
            m_skillDel.text = strDelInfo1 + "/" + strDelInfo2;
        }
        else if (nType_1 == SKILLDELANDGAINTYPE.HPTYPE_INVAILID &&
            nType_2 == SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
        {
            m_skillDel.text = StrDictionary.GetClientDictionaryString("#{1793}");
        }

        //消耗的金币
        //m_NormalDelCount.text = _levelUp.NeedCoin.ToString();
        //m_NeddLevel.text = StrDictionary.GetClientDictionaryString("#{2162}", _levelUp.Level);

        int nCoin = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
        if (nCoin < _levelUp.NeedCoin)
        {
            m_NormalLevelUpBtn.isEnabled = false;
            m_NormalLevelUpSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
            m_LevelUp2MaxBtn.isEnabled = false;
            m_LevelUp2MaxSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
            //m_ItemLevelUpBtn.isEnabled = false;
            //m_ItemLevelUpSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
        }

        Games.Item.GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (BackPack != null)
        {
            if (BackPack.GetItemCountByDataId(100001) <= 0)
            {
                m_ItemLevelUpBtn.isEnabled = false;
                m_ItemLevelUpSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
            }
        }  
        //item消耗的经验值
        int nTotalCount = _levelUp.NeedItemCount;

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null || nTotalCount < 0)
        {
            return;
        }
        if (_mainPlayer.BaseAttr.Level < _levelUp.Level)
        {
            m_NormalLevelUpBtn.isEnabled = false;
            m_NormalLevelUpSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0,1);
            m_LevelUp2MaxBtn.isEnabled = false;
            m_LevelUp2MaxSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
            m_ItemLevelUpBtn.isEnabled = false;
            m_ItemLevelUpSpr.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
        }


        //m_ItemExpCount.value = nTotalCount == 0 ? 0 : GetSkillExpBySkillId(_skillEx.SkillExID) * 1.0f / nTotalCount;
        //m_LastValue = m_ItemExpCount.value;
        m_LastValue = nTotalCount == 0 ? 0 : GetSkillExpBySkillId(_skillEx.SkillExID) * 1.0f / nTotalCount;

        m_ItemExpCountSlider = TweenNumber.Begin(m_ItemExpCount.gameObject, 1, 0, m_LastValue);
        m_ItemExpCountSlider.onUpdatingNum = RefreshSlider1;
    }

    private int GetSkillExpBySkillId(int nSkillId)
    {
        int nCount = 0;
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return nCount;
        }

        for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
        {
            if (nSkillId == _mainPlayer.OwnSkillInfo[i].SkillId)
            {
                return _mainPlayer.OwnSkillInfo[i].LevelUpExp;
            }
        }
        return nCount;
    }
    string GetTypeDesc(SKILLDELANDGAINTYPE nType, int nValue)
    {
        string strInfo = StrDictionary.GetClientDictionaryString("#{1793}");
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer != null)
        {
            switch (nType)
            {
                case SKILLDELANDGAINTYPE.HPTYPE_VALUE: //HP的数值
                    strInfo = StrDictionary.GetClientDictionaryString("#{1798}", nValue); ;
                    break;
                case SKILLDELANDGAINTYPE.HPTYPE_RATE: //HP的百分比
                    strInfo = StrDictionary.GetClientDictionaryString("#{1799}", nValue); ;
                    break;
                case SKILLDELANDGAINTYPE.MPTYPE_VALUE: //MP数值
                    strInfo = StrDictionary.GetClientDictionaryString("#{1804}", nValue);
                    break;
                case SKILLDELANDGAINTYPE.MPTYPE_RATE: //MP百分比
                    strInfo = StrDictionary.GetClientDictionaryString("#{1805}", nValue);
                    break;
                case SKILLDELANDGAINTYPE.XPTYPE_VALUE: //XP数值
                    strInfo = StrDictionary.GetClientDictionaryString("#{1806}", nValue);
                    break;
                case SKILLDELANDGAINTYPE.XPTYPE_RATE: //XP百分比
                    strInfo = StrDictionary.GetClientDictionaryString("#{1807}", nValue);
                    break;
                default:
                    break;
            }
        }
        return strInfo;
    }

    public static bool IsCanLevelUpSkill(int nCurSkillId)
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return false;
        }
        Tab_SkillLevelUp _skillLevUp = TableManager.GetSkillLevelUpByID(nCurSkillId, 0);
        if (_skillLevUp == null)
        {
            return false;
        }
        if (_mainPlayer.Profession != _skillLevUp.Profession)
        {
            _mainPlayer.SendNoticMsg(false,"#{10994}");
            return false;
        }
        if (_mainPlayer.BaseAttr.Level < _skillLevUp.Level)
        {
            _mainPlayer.SendNoticMsg(false, "#{10995}");
            return false;
        }
        if (_mainPlayer.IsHaveSkill(_skillLevUp.NeedSkillId) == false)
        {
            _mainPlayer.SendNoticMsg(false, "#{10996}");
            return false;
        }
        if (_skillLevUp.NextSkillId == -1)
        {
            int nIndex = Utils.GetSkillIndexBySkillId(nCurSkillId);
            if (nIndex < 0 || nIndex >= _mainPlayer.OwnSkillInfo.Length)
            {
                return false; 
            }

            //当前是最大等级，并且经验值已满
           // if (_mainPlayer.OwnSkillInfo[nIndex].LevelUpExp >= _skillLevUp.NeedItemCount)
            //{
                _mainPlayer.SendNoticMsg(false, "#{10997}");
                return false;
            //}
            
        }
        
        //金币不足
        int nCoin = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
        if (nCoin < _skillLevUp.NeedCoin)
        {
            _mainPlayer.SendNoticMsg(false, "#{1019}");
            return false;
        }
        return true;
    }

    public void PlaySkillLevelUpEffect()
    {
        if (BackCamerControll.Instance() != null)
        {
            BackCamerControll.Instance().StopSceneEffect(GlobeVar.SKILLLEVUPEFFECTID, true);
            BackCamerControll.Instance().PlaySceneEffect(GlobeVar.SKILLLEVUPEFFECTID);
            //             if (m_curClickBtItem != null)
            //             {
            //                 m_SkillEffectIcon.spriteName = m_curClickBtItem.m_SkillIconSprite.spriteName;
            //                 m_SkillEffectIcon.MakePixelPerfect();
            //                 m_SkillEffectScale.Reset();
            //                 m_SkillBak.SetActive(true);
            //             }
        }
    }

    /// <summary>
    /// 升级完了之后刷新界面
    /// </summary>
    public void UpdateSkillInfo()
    {
        //普通技能数据填充
        FillNormalSkillList();
        //PVE数据填充
        FillPVESkillList();
        //PVP数据填充
        FillPVPSkillList();
        //公用界面信息填写
        FillCommonInfo();
        //延迟更新下金币
        UpdateTime();
        UpdatePutongSkillLevelUpPointState();
    }

    /// <summary>
    /// 记录更新时间
    /// </summary>
    private void UpdateTime()
    {
        m_updateTime = Time.realtimeSinceStartup;
    }
    /// <summary>
    /// 更新正常技能二级弹出界面信息
    /// </summary>
    public void DelUpdateNormalSkillInfo()
    {
        if (CurNormalIndex >= 0 && CurNormalIndex < NormalSkillInfos.Length)
            UpdateSkillDetailByState(NormalSkillInfos[CurNormalIndex].nSkillState, NormalSkillInfos[CurNormalIndex].nSKillId);
    }

    /// <summary>
    /// 更新PVE技能信息
    /// </summary>
    public void DelUpdatePVESkillInfo()
    {
        if (CurPVEIndex >= 0 && CurPVEIndex < PVESkillInfos.Length)
        {
            UpdateSkillDetailByState(PVESkillInfos[CurPVEIndex].nSkillState, PVESkillInfos[CurPVEIndex].nSKillId);

        }
    }

    /// <summary>
    /// 更新PVP技能信息
    /// </summary>
    public void DelUpdatePVPSkillInfo()
    {
        if (CurPVPIndex >= 0 && CurPVPIndex < PVPSkillInfos.Length)
        {
            UpdateSkillDetailByState(PVPSkillInfos[CurPVPIndex].nSkillState, PVPSkillInfos[CurPVPIndex].nSKillId);

        }
    }
	
    /// <summary>
    /// 根据ItemID获得玩家身上的Item数量
    /// </summary>
    /// <param name="nItemId"></param>
    /// <returns></returns>
    public int GetItemCountByItemId(int nItemId)
    {
        int nItemCount = 0;

        if (nItemId < 0)
        {
            return 0;
        }

        Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (backPack == null)
        {
            return nItemCount;
        }

        return backPack.GetItemCountByDataId(nItemId);
    }

    /// <summary>
    /// 下一个点击触发事件
    /// </summary>
    public void SetNextLevelData()
    {
        m_isCanUpdteItemExp = false;
        if (-1 == m_itemLveSkillId)
        {
            return;
        }

        Tab_SkillLevelUp _levelUP = TableManager.GetSkillLevelUpByID(m_itemLveSkillId, 0);
        if (null == _levelUP)
        {
            return;
        }

        int maxCount = GetItemCountByItemId(_levelUP.NeedItemId);

        if (m_addValue < 0)
        {
            m_addValue = 0;
        }
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPlayer)
        {
            return;
        }

        //增加的值超过拥有的个数
        if (m_addValue >= maxCount)
        {

            //已达最大值
//             mainPlayer.SendNoticMsg(false, "#{10998}");
// 
//             return;
        }


        m_addValue++;

//         if (m_addValue >= maxCount)
//         {
//             m_addValue = maxCount;
//         }
        if (m_addValue > maxCount)
        {
            m_addValue = 0;
        }

        if (!CheckCanLevelUp(m_addValue))
        {
            return;
        }

        m_curSelectValue.text = m_addValue.ToString();
        m_isCanUpdteItemExp = true;
        m_ExpSpr.value = getSliderValue(0);
    }

    /// <summary>
    /// 上一个
    /// </summary>
    public void SetPreLevelData()
    {
       
        m_isCanUpdteItemExp = false;
        if (-1 == m_itemLveSkillId)
        {
            return;
        }

        Tab_SkillLevelUp _levelUP = TableManager.GetSkillLevelUpByID(m_itemLveSkillId, 0);
        if (null == _levelUP)
        {
            return;
        }

        int maxCount = GetItemCountByItemId(_levelUP.NeedItemId);

        if (m_addValue <= 0)
        {
            m_addValue = 0;
        }
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPlayer)
        {
            return;
        }

        if (m_addValue == 0)
        {
//             mainPlayer.SendNoticMsg(false,"#{11001}");
//             return;
        }
        m_addValue--;

//         if (m_addValue < 0)
//         {
//             m_addValue = 0;
//         }
        if (m_addValue < 0)
        {
            m_addValue = maxCount;
        }
        if (!CheckCanLevelUp(m_addValue))
        {
            return;
        }

        m_curSelectValue.text = m_addValue.ToString();
        m_isCanUpdteItemExp = true;
    }
    /// <summary>
    /// 设置Item升级的默认界面
    /// </summary>
    public void SetInitItemMenuData()
    {
        m_curValue = GetSkillExpBySkillId(m_SelectSkillEx.SkillExID);
        m_addValue = 0;
        m_itemLevel = 1;
        m_curLevelValue = m_curValue;
        m_curSelectValue.text = m_addValue.ToString();
        m_isCanUpdteItemExp = false;
        if (m_SelectSkillEx != null)
        {
            m_itemLveSkillId = m_SelectSkillEx.SkillExID;
        }
        else
        {
            m_itemLveSkillId = -1;
        }

        if (-1 == m_itemLveSkillId)
        {
            return;
        }

        Tab_SkillLevelUp _levelUP = TableManager.GetSkillLevelUpByID(m_itemLveSkillId, 0);
        if (null == _levelUP)
        {
            return;
        }

        int maxCount = GetItemCountByItemId(_levelUP.NeedItemId);

        m_maxCount.text = maxCount.ToString();
        m_curLevel.text = "X" + m_itemLevel;

        m_ExpSpr.value = _levelUP.NeedItemCount == 0 ? 0 : m_curValue * 1.0f / _levelUP.NeedItemCount;
    }

    /// <summary>
    /// 选中item数量可以升级到多少级
    /// </summary>
    /// <param name="nMaxValue"></param>
    public void UpdateItemExpValue(int nMaxValue)
    {
        if (null == m_SelectSkillEx)
        {
            return;
        }

        Tab_SkillLevelUp _curLevelUp = TableManager.GetSkillLevelUpByID(m_SelectSkillEx.SkillExID, 0);
        if (null == _curLevelUp)
        {
            return;
        }

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == _mainPlayer)
        {
            return;
        }

        int nCurExp = GetSkillExpBySkillId(m_SelectSkillEx.SkillExID);
        int nCanLevel = 1;
        while (nMaxValue > 0)
        {
            int tempMaxValue = nMaxValue;
            nMaxValue -= (_curLevelUp.NeedItemCount - nCurExp);

            //可以升级
            if (nMaxValue >= 0)
            {
                //看看等级够不够
                if (_curLevelUp.Level > _mainPlayer.BaseAttr.Level)
                {
                    break;
                }

                //最大等级
                if (_curLevelUp.NextSkillId == -1)
                {
                    nCurExp = _curLevelUp.NeedItemCount;
                    break;
                }

                _curLevelUp = TableManager.GetSkillLevelUpByID(_curLevelUp.NextSkillId, 0);

                nCurExp = 0;
                nCanLevel++;
            }
            else //当前不可以升级
            {
                nCurExp += tempMaxValue;
                break;
            }
        }
        m_itemLveSkillId = _curLevelUp.Id;

        m_curLevel.text = "X" + nCanLevel;
        m_ExpSpr.value = _curLevelUp.NeedItemCount == 0 ? 0 : nCurExp * 1.0f / _curLevelUp.NeedItemCount;
    }

    /// <summary>
    /// 根据当前值判断是否可以升级
    /// </summary>
    /// <param name="nMaxValue"></param>
    public bool CheckCanLevelUp(int nMaxValue)
    {
        bool isCanLevelUp = false;
        if (null == m_SelectSkillEx)
        {
            return isCanLevelUp;
        }

        Tab_SkillLevelUp _curLevelUp = TableManager.GetSkillLevelUpByID(m_SelectSkillEx.SkillExID, 0);
        if (null == _curLevelUp)
        {
            return isCanLevelUp;
        }

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == _mainPlayer)
        {
            return isCanLevelUp;
        }

        if (_curLevelUp.NextSkillId == -1)
        {
            _mainPlayer.SendNoticMsg(false, "#{10997}");
            return false;
        }
        int nCurExp = GetSkillExpBySkillId(m_SelectSkillEx.SkillExID);
        int nCanLevel = 1;
        while (nMaxValue > 0)
        {
            int tempMaxValue = nMaxValue;
            nMaxValue -= (_curLevelUp.NeedItemCount - nCurExp);

            //可以升级
            if (nMaxValue >= 0)
            {
                //看看等级够不够
                if (_curLevelUp.Level > _mainPlayer.BaseAttr.Level)
                {
                    _mainPlayer.SendNoticMsg(false, "#{10995}");
                    return false;
                }

                //最大等级
                if (_curLevelUp.NextSkillId == -1)
                {
                    _mainPlayer.SendNoticMsg(false, "#{10997}");
                    return false;
                }

                _curLevelUp = TableManager.GetSkillLevelUpByID(_curLevelUp.NextSkillId, 0);

                nCurExp = 0;
                nCanLevel++;

                //下个技能是最大值
                if (_curLevelUp.NextSkillId == -1)
                {
                    _mainPlayer.SendNoticMsg(false, "#{10997}");
                    if (nMaxValue == 0)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else //当前不可以升级
            {
                nCurExp += tempMaxValue;
                break;
            }
        }

        return true;
    }

    /// <summary>
    /// 点击学习按钮的触发操作
    /// </summary>
    private void SendUseItemPacket()
    {
        if (null == m_SelectSkillEx)
        {
            return;
        }
        Tab_SkillActive _skillActiveInfo = null;
        foreach (List<Tab_SkillActive> skillActives in TableManager.GetSkillActive().Values)
        {
            if (skillActives[0].SkillId == m_SelectSkillEx.SkillExID)
            {
                _skillActiveInfo = skillActives[0];
                break;
            }
        }

        if (null == _skillActiveInfo)
        {
            return;
        }

        Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (backPack == null)
        {
            return;
        }
//        int ItemCount = backPack.GetItemCountByDataId(_skillActiveInfo.SkillItemID);

        CG_USE_ITEM useitem = (CG_USE_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USE_ITEM);
        useitem.SetItemguid(backPack.GetItemGuidByDataID(_skillActiveInfo.SkillItemID));
        useitem.SendPacket();
    }

    /// <summary>
    /// 关闭升级特效
    /// </summary>
    private void CloseLevelUpEffect()
    {
        m_levleUpEffectObj.SetActive(false);
    }

    /// <summary>
    /// 播放升级特效
    /// </summary>
    public void PlayLevelupEffect()
    {
        m_levleUpEffectObj.SetActive(false);
        m_levleUpEffectObj.SetActive(true);
    }
    #endregion

    #region 响应函数

    //tab按键的响应函数
    public void OnClickTab(GameObject tabObj)
    {
        if (null == tabObj)
        {
            return;
        }

        int nIndex = GetIndexByObjName(tabObj.name, m_tabGameObjList);

        if (nIndex < 0 || nIndex >= m_tabGameObjList.Length)
        {
            return;
        }

        //如果是当前界面就直接返回
        if (nIndex != m_curHighIndex)
        {
            CurHighIndex = nIndex;
        }
        else
        {
            return;
        }
        for (int i = 0; i < m_JiNengShengJiEffectPve.Length; i++)
        {
            if (m_JiNengShengJiEffectPve[i] != null)
            {
                m_JiNengShengJiEffectPve[i].SetActive(false);
            }
        }
        for (int i = 0; i < m_JiNengShengJiEffectPvp.Length; i++)
        {
            if (m_JiNengShengJiEffectPvp[i] != null)
            {
                m_JiNengShengJiEffectPvp[i].SetActive(false);
            }
        }
        if (NewPlayerGuideFlag_Step== 2)
              NewPlayerGuide(3);

    }

    /// <summary>
    /// 正常技能的响应函数
    /// </summary>
    /// <param name="skillObj"></param>
    public void OnClickNormalSkillBtn(GameObject skillObj)
    {
        if (null == skillObj)
        {
            return;
        }

        int nIndex = GetIndexByObjName(skillObj.name, m_skillObjList);

        if (nIndex < 0 || nIndex >= m_skillObjList.Length)
        {
            return;
        }

        //如果是当前界面就直接返回
        if (nIndex != m_curNormalIndex)
        {
            CurNormalIndex = nIndex;
        }
        m_pvxState = -1;
        m_showSkillMenuObj.SetActive(true);
        //effectCam.gameObject.SetActive(false);
        if (nIndex >= 0 && nIndex < NormalSkillInfos.Length)
            UpdateSkillDetailByState(NormalSkillInfos[nIndex].nSkillState, NormalSkillInfos[nIndex].nSKillId);
        DelUpdateSkillMenu = DelUpdateNormalSkillInfo;
    }

    /// <summary>
    /// PVE技能的响应函数
    /// </summary>
    /// <param name="skillObj"></param>
    public void OnClickPVEBtn(GameObject skillObj)
    {
        if (null == skillObj)
        {
            return;
        }

        int nIndex = GetIndexByObjName(skillObj.name, m_PVEOjbList);

        if (nIndex < 0 || nIndex >= m_PVEOjbList.Length)
        {
            return;
        }

        //如果是当前界面就直接返回
        if (nIndex != m_PVEIndex)
        {
            CurPVEIndex = nIndex;
        }
        m_pvxState = (int)PVESTATE.PVE;
        m_showSkillMenuObj.SetActive(true);
        //effectCam.gameObject.SetActive(false);
        if (nIndex >= 0 && nIndex < PVESkillInfos.Length)
            UpdateSkillDetailByState(PVESkillInfos[nIndex].nSkillState, PVESkillInfos[nIndex].nSKillId);
        DelUpdateSkillMenu = DelUpdatePVESkillInfo;
        if (NewPlayerGuideFlag_Step == 3)
        NewPlayerGuide(4);
    }

    /// <summary>
    /// PVP技能的响应函数
    /// </summary>
    /// <param name="skillObj"></param>
    public void OnClickPVPBtn(GameObject skillObj)
    {
        if (null == skillObj)
        {
            return;
        }

        int nIndex = GetIndexByObjName(skillObj.name, m_PVPOjbList);

        if (nIndex < 0 || nIndex >= m_PVPOjbList.Length)
        {
            return;
        }

        //如果是当前界面就直接返回
        if (nIndex != m_PVPIndex)
        {
            CurPVPIndex = nIndex;
        }

        m_pvxState = (int)PVESTATE.PVP;
        m_showSkillMenuObj.SetActive(true);
        //effectCam.gameObject.SetActive(false);
        if (nIndex >= 0 && nIndex < PVPSkillInfos.Length)
            UpdateSkillDetailByState(PVPSkillInfos[nIndex].nSkillState, PVPSkillInfos[nIndex].nSKillId);

        DelUpdateSkillMenu = DelUpdatePVPSkillInfo;
    }

    /// <summary>
    /// 主界面关闭
    /// </summary>
    public void OnCloseClick()
    {
        //effectCam.SetActive(true);
        if (BackCamerControll.Instance() != null)
        {
            BackCamerControll.Instance().StopSceneEffect(GlobeVar.SKILLLEVUPEFFECTID, true);
        }
        UIManager.CloseUI(UIInfo.SkillInfo);
    }

    /// <summary>
    /// 关闭二级界面
    /// </summary>
    public void OnCloseClickSkillMenu()
    {
        m_showSkillMenuObj.SetActive(false);
        //effectCam.gameObject.SetActive(true);
    }

    /// <summary>
    /// 技能简要介绍
    /// </summary>
    public void OnClickSkillIntro()
    {
        m_skillDescIntrolObj.SetActive(!m_skillDescIntrolObj.activeSelf);
    }
    /// <summary>
    /// 升级全部当前拥有技能
    /// </summary>
    private int m_CurCoin = 0;
    private int m_LevelUpAllNeedMoney = 0;
    void OnClickLevelUpAll2Max()
    {
        if (NewPlayerGuidLogic.Instance()!= null)
            NewPlayerGuidLogic.CloseWindow();
        //Debug.LogError("click levelup all 2 max");
        m_CurCoin = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
        for (int index = 0; index < NormalSkillInfos.Length; index ++)
        {
            int curSkillID = NormalSkillInfos[index].nSKillId;
            int curSkillState = NormalSkillInfos[index].nSkillState;
            if (curSkillState == (int)SkillInfo.SKILLSTATE.NORMAL_STUDY)
            {
                LevelUpCurSkill2Max(curSkillID, m_CurCoin, index);
            }
        }
        if (m_AllSkillLevelUpPacketStruct == null)
        {
            return;
        }
        for (int i = 0; i < m_AllSkillLevelUpPacketStruct.Length; i++)
        {
            if (m_AllSkillLevelUpPacketStruct[i].NeedCoin != 0)
            {
                m_LevelUpAllNeedMoney += m_AllSkillLevelUpPacketStruct[i].NeedCoin;
            }
        }
        if (m_LevelUpAllNeedMoney <= 0)
        {
            //GUIData.AddNotifyData("#{10277}");
        }
        else
        {
            MessageBoxLogic.OpenCostBox(
            StrDictionary.GetClientDictionaryString("#{11311}"),
            null,
            StrDictionary.GetClientDictionaryString("#{11316}"),
            StrDictionary.GetClientDictionaryString("#{11312}"),
            "qian1", "X" + m_LevelUpAllNeedMoney.ToString(), LevelupAll2MaxOK, LevelupAll2MaxCancel);
        }
    }

    void LevelupAll2MaxOK()
    {
        for (int i = 0; i < m_AllSkillLevelUpPacketStruct.Length; i++)
        {
            CG_SKILL_LEVELUP_TO_MAX packet = (CG_SKILL_LEVELUP_TO_MAX)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SKILL_LEVELUP_TO_MAX);
            packet.SetSkillID(m_AllSkillLevelUpPacketStruct[i].SkillExID);
            packet.SetMaxLevel(m_AllSkillLevelUpPacketStruct[i].CanLevel);
            packet.SetConsume(m_AllSkillLevelUpPacketStruct[i].NeedConsume);
            packet.SetCoin(m_AllSkillLevelUpPacketStruct[i].NeedCoin);
            packet.SendPacket();
        }
        m_LevelUpAllNeedMoney = 0;
        CleanPacketStruct();
    }

    void LevelupAll2MaxCancel()
    {
        m_LevelUpAllNeedMoney = 0;
        CleanPacketStruct();
    }

    void CleanPacketStruct()
    {
        for (int i = 0; i < m_AllSkillLevelUpPacketStruct.Length; i++)
        {
            m_AllSkillLevelUpPacketStruct[i].SkillExID = 0;
            m_AllSkillLevelUpPacketStruct[i].CanLevel = 0;
            m_AllSkillLevelUpPacketStruct[i].NeedConsume = 0;
            m_AllSkillLevelUpPacketStruct[i].NeedCoin = 0;
        }
    }

    void LevelUpCurSkill2Max(int curSkillid, int curCoin,int index)
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        //计算当前技能升级可达的最大等级
        Tab_SkillLevelUp _SkillLevelUp = TableManager.GetSkillLevelUpByID(curSkillid, 0);
        if (_SkillLevelUp == null)
        {
            return;
        }

        //记录下上一个可升级技能
        Tab_SkillLevelUp _PreSkillLevelUp = _SkillLevelUp;
        //找到当前技能的下一个可升级的技能开始，依次往下找。
        Tab_SkillLevelUp _curSelSkillLevelUp = TableManager.GetSkillLevelUpByID(curSkillid, 0);
        int needConsume = _curSelSkillLevelUp.NeedConsume;
        int needCoin = _curSelSkillLevelUp.NeedCoin;
        bool isMoneyNotEnough = false;
//        bool isMaxLevel = false;

        Tab_SkillLevelUp _moneyNotEnough = null;

        int noConsume = 0;
        int noCoin = 0;
        while (_curSelSkillLevelUp != null)
        {
            _PreSkillLevelUp = _curSelSkillLevelUp;

            //先看等级够不够
            if (_curSelSkillLevelUp.Level > _mainPlayer.BaseAttr.Level)
            {
//                isMaxLevel = true;
                //金钱之前没有被暂停添加，看下本次金钱是否满足，否则，金钱就按暂停处计算
                if (!isMoneyNotEnough)
                {
                    needConsume -= _curSelSkillLevelUp.NeedConsume;
                    needCoin -= _curSelSkillLevelUp.NeedCoin;
                }
                break;
            }

            //等级够了再看花费够不够。
            _curSelSkillLevelUp = TableManager.GetSkillLevelUpByID(_curSelSkillLevelUp.NextSkillId, 0);
            if (!isMoneyNotEnough)
            {
                if (needConsume > PVPData.Power || needCoin > curCoin)
                {
                    //金钱不足
                    isMoneyNotEnough = true;
                    noConsume = needConsume - _PreSkillLevelUp.NeedConsume;
                    noCoin = needCoin - _PreSkillLevelUp.NeedCoin;
                    _moneyNotEnough = _PreSkillLevelUp;
                }
                else //金钱满足，当前等级也满足，就添加下一等级的金钱
                {
                    needConsume += _curSelSkillLevelUp == null ? 0 : _curSelSkillLevelUp.NeedConsume;
                    needCoin += _curSelSkillLevelUp == null ? 0 : _curSelSkillLevelUp.NeedCoin;
                }
            }
            if (_curSelSkillLevelUp == null)
            {
//                isMaxLevel = true;
                _curSelSkillLevelUp = _PreSkillLevelUp;
                break;
            }
        }

        int maxLevel = _curSelSkillLevelUp.Level;
        int canLevele = _moneyNotEnough != null ? _moneyNotEnough.SkillLevel : maxLevel;
        if (isMoneyNotEnough)
        {
            needConsume = noConsume;
            needCoin = noCoin;
        }

        //一级也不能升
        if (_curSelSkillLevelUp != null && _SkillLevelUp.Id == _curSelSkillLevelUp.Id)
        {
            return;
        }

        if (_curSelSkillLevelUp == null)
        {
            return;
        }

        Tab_SkillEx _levelUpEx = TableManager.GetSkillExByID(_curSelSkillLevelUp.Id, 0);
        if (_levelUpEx == null)
        {
            return;
        }
        
        if (_moneyNotEnough != null)
        {
            Tab_SkillEx _levelUpMoneyEx = TableManager.GetSkillExByID(_moneyNotEnough.Id, 0);
            if (_levelUpMoneyEx == null)
            {
                return;
            }
         }
        
        m_AllSkillLevelUpPacketStruct[index].SkillExID = curSkillid;
        m_AllSkillLevelUpPacketStruct[index].CanLevel = canLevele;
        m_AllSkillLevelUpPacketStruct[index].NeedConsume = needConsume;
        m_AllSkillLevelUpPacketStruct[index].NeedCoin = needCoin;


        m_CurCoin -= needCoin;
     }


    /// <summary>
    /// 一键升级当前选中技能
    /// </summary>
    void OnClickLevelUp2Max()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        if (null == m_SelectSkillEx)
        {
            return;
        }
        int nSelectSkillIndex = -1;
        for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
        {
            if (m_SelectSkillEx != null && _mainPlayer.OwnSkillInfo[i].SkillId == m_SelectSkillEx.SkillExID)
            {
                nSelectSkillIndex = i;
                break;
            }
        }

        //技能未学会就不升级了
        if (-1 == nSelectSkillIndex)
        {
            return;
        }

        //计算当前技能升级可达的最大等级
        Tab_SkillLevelUp _SkillLevelUp = TableManager.GetSkillLevelUpByID(m_SelectSkillEx.SkillExID, 0);
        if (_SkillLevelUp == null)
        {
            return;
        }

        //记录下上一个可升级技能
        Tab_SkillLevelUp _PreSkillLevelUp = _SkillLevelUp;
        //找到当前技能的下一个可升级的技能开始，依次往下找。
        Tab_SkillLevelUp _curSelSkillLevelUp = TableManager.GetSkillLevelUpByID(m_SelectSkillEx.SkillExID, 0);
        int needConsume = _curSelSkillLevelUp.NeedConsume;
        int needCoin = _curSelSkillLevelUp.NeedCoin;
        bool isMoneyNotEnough = false;
//        bool isMaxLevel = false;

        Tab_SkillLevelUp _moneyNotEnough = null;

        int noConsume = 0;
        int noCoin = 0;
        while (_curSelSkillLevelUp != null)
        {
            _PreSkillLevelUp = _curSelSkillLevelUp;

            //先看等级够不够
            if (_curSelSkillLevelUp.Level > _mainPlayer.BaseAttr.Level)
            {
//                isMaxLevel = true;
                //金钱之前没有被暂停添加，看下本次金钱是否满足，否则，金钱就按暂停处计算
                if (!isMoneyNotEnough)
                {
                    needConsume -= _curSelSkillLevelUp.NeedConsume;
                    needCoin -= _curSelSkillLevelUp.NeedCoin;
                }
                break;
            }

            //等级够了再看花费够不够。
            _curSelSkillLevelUp = TableManager.GetSkillLevelUpByID(_curSelSkillLevelUp.NextSkillId, 0);
            if (!isMoneyNotEnough)
            {
                if (needConsume > PVPData.Power || needCoin > GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin())
                {
                    //金钱不足
                    isMoneyNotEnough = true;
                    noConsume = needConsume - _PreSkillLevelUp.NeedConsume;
                    noCoin = needCoin - _PreSkillLevelUp.NeedCoin;
                    _moneyNotEnough = _PreSkillLevelUp;
                }
                else //金钱满足，当前等级也满足，就添加下一等级的金钱
                {
                    needConsume += _curSelSkillLevelUp == null ? 0 : _curSelSkillLevelUp.NeedConsume;
                    needCoin += _curSelSkillLevelUp == null ? 0 : _curSelSkillLevelUp.NeedCoin;
                }
            }
            if (_curSelSkillLevelUp == null)
            {
//                isMaxLevel = true;
                _curSelSkillLevelUp = _PreSkillLevelUp;
                break;
            }
        }

        int maxLevel = _curSelSkillLevelUp.Level;
        int canLevele = _moneyNotEnough != null ? _moneyNotEnough.Level : maxLevel;
        if (isMoneyNotEnough)
        {
            needConsume = noConsume;
            needCoin = noCoin;
        }

        //一级也不能升
        if (_curSelSkillLevelUp != null && _SkillLevelUp.Id == _curSelSkillLevelUp.Id)
        {
            return;
        }

        if (_curSelSkillLevelUp == null)
        {
            return;
        }

        Tab_SkillEx _levelUpEx = TableManager.GetSkillExByID(_curSelSkillLevelUp.Id, 0);
        if (_levelUpEx == null)
        {
            return;
        }

        if (_moneyNotEnough != null)
        {
            Tab_SkillEx _levelUpMoneyEx = TableManager.GetSkillExByID(_moneyNotEnough.Id, 0);
            if (_levelUpMoneyEx == null)
            {
                return;
            }
        }
        
        m_SkillLevelUpPacketStruct.SkillExID = m_SelectSkillEx.SkillExID;
        m_SkillLevelUpPacketStruct.CanLevel = canLevele;
        m_SkillLevelUpPacketStruct.NeedConsume = needConsume;
        m_SkillLevelUpPacketStruct.NeedCoin = needCoin;
        //effectCam.SetActive(true);
        MessageBoxLogic.OpenCostBox(
            StrDictionary.GetClientDictionaryString("#{11313}"),
            null,
            StrDictionary.GetClientDictionaryString("#{11316}"),
            StrDictionary.GetClientDictionaryString("#{11312}"),
            "qian1", "X" + needCoin.ToString(), Levelup2MaxOK, Levelup2MaxCancel);


    }
    /// <summary>
    ///     确定一键升级
    /// </summary>
    public void Levelup2MaxOK()
    {
//         if (cg_Skill_LevelUp_To_Max_Packet != null)
//         {
//             cg_Skill_LevelUp_To_Max_Packet.SendPacket();
//         }
        CG_SKILL_LEVELUP_TO_MAX packet = (CG_SKILL_LEVELUP_TO_MAX)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SKILL_LEVELUP_TO_MAX);
        packet.SetSkillID(m_SkillLevelUpPacketStruct.SkillExID);
        packet.SetMaxLevel(m_SkillLevelUpPacketStruct.CanLevel);
        packet.SetConsume(m_SkillLevelUpPacketStruct.NeedConsume);
        packet.SetCoin(m_SkillLevelUpPacketStruct.NeedCoin);
        packet.SendPacket();
        m_SkillLevelUpPacketStruct.SkillExID = 0;
        m_SkillLevelUpPacketStruct.CanLevel = 0;
        m_SkillLevelUpPacketStruct.NeedConsume = 0;
        m_SkillLevelUpPacketStruct.NeedCoin = 0;
    }
    /// <summary>
    /// 取消不一键了
    /// </summary>
    void Levelup2MaxCancel()
    {
        m_SkillLevelUpPacketStruct.SkillExID = 0;
        m_SkillLevelUpPacketStruct.CanLevel = 0;
        m_SkillLevelUpPacketStruct.NeedConsume = 0;
        m_SkillLevelUpPacketStruct.NeedCoin = 0;
    }

    /// <summary>
    /// 升级技能
    /// </summary>
    public void OnClickSkillLevelUp()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        if (null == m_SelectSkillEx)
        {
            return;
        }
        int nSelectSkillIndex = -1;
        for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
        {
            if (m_SelectSkillEx != null && _mainPlayer.OwnSkillInfo[i].SkillId == m_SelectSkillEx.SkillExID)
            {
                nSelectSkillIndex = i;
                break;
            }
        }

        //技能未学会就不升级了
        if (-1 == nSelectSkillIndex)
        {
            return;
        }

        if (IsCanLevelUpSkill(m_SelectSkillEx.SkillExID) /*|| IsCanLevelUpMasterSkill(nCurSelSkillId)*/)
        {
            //发包
            CG_ASK_LEVELUPSKILL packet = (CG_ASK_LEVELUPSKILL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_LEVELUPSKILL);
            packet.SetSkillId(m_SelectSkillEx.SkillExID);
            packet.SendPacket();
        }
    }

    /// <summary>
    /// 获得Item
    /// </summary>
    public void OnClickGetItem()
    {

    }

    /// <summary>
    /// 学习技能
    /// </summary>
    public void OnClickStudySkill()
    {
        m_ItemLveUI.SetActive(true);
        m_SkillStudyComfirm.SetActive(true);
        m_SkillBookLevelUpComfirm.SetActive(false);
        SetStudySkillData();
        DelClickYes = OnClickStudySkillYes;
        DelClickNo = OnCloseStudySkillNo;
    }

    void SetStudySkillData()
    {
        if (null == m_SelectSkillEx)
        {
            return;
        }
        int nSkillActiveCount = TableManager.GetSkillActive().Count;
        Tab_SkillActive _skillActiveInfo = null;
        for (int i = 0; i < nSkillActiveCount; i++)
        {
            Tab_SkillActive _skillActive = TableManager.GetSkillActiveByID(i, 0);
            if (_skillActive != null && _skillActive.SkillId == m_SelectSkillEx.SkillExID)
            {
                _skillActiveInfo = _skillActive;
                break;
            }
        }

        if (null == _skillActiveInfo)
        {
            return;
        }

        Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (backPack == null)
        {
            return;
        }
        Tab_CommonItem tBook = TableManager.GetCommonItemByID(_skillActiveInfo.SkillItemID, 0);
        if (tBook != null)
        {
            m_StudyBookItemIcon.spriteName =  tBook.Icon;
            m_StudyBookItemLabel.text = StrDictionary.GetClientDictionaryString("#{11318}") + tBook.Name;
        }
    }

    void OnClickStudySkillYes()
    {
        SendUseItemPacket();
        if (m_pvxState == (int)PVESTATE.PVE)
        {
            DelUpdateSkillMenu = DelUpdatePVESkillInfo;
        }
        else if (m_pvxState == (int)PVESTATE.PVP)
        {
            DelUpdateSkillMenu = DelUpdatePVPSkillInfo;
        }
        m_ItemLveUI.SetActive(false);
        m_showSkillMenuObj.SetActive(false);
    }

    void OnCloseStudySkillNo()
    {
        m_ItemLveUI.SetActive(false);
    }

    /// <summary>
    /// 启用技能
    /// </summary>
    public void OnClickUseSkill()
    {
        //effectCam.SetActive(true);
        
        if (m_SelectSkillEx == null)
        {
            return;    
        }

        int nSkillIndex = Utils.GetSkillIndexBySkillId(m_SelectSkillEx.SkillExID);

        if (nSkillIndex == -1)
        {
            return;
        }
        if (Utils.IsPVESkill(m_SelectSkillEx.SkillExID))
        {
            if (nSkillIndex != -1 && nSkillIndex != PlayerPreferenceData.PVESkillIdCurUsing)
            {
                Obj_MainPlayer rUser = Singleton<ObjManager>.Instance.MainPlayer;
                if (rUser != null)
                    rUser.DelAutoSelSkillID(PlayerPreferenceData.PVESkillIdCurUsing);
                PlayerPreferenceData.PVESkillIdCurUsing = nSkillIndex;
            }
            ShowShengJiEffectPve = true;
        }
        else if (Utils.IsPVPSkill(m_SelectSkillEx.SkillExID))
        {
            if (nSkillIndex != -1 && nSkillIndex != PlayerPreferenceData.PVPSkillIdCurUsing)
            {
                Obj_MainPlayer rUser = Singleton<ObjManager>.Instance.MainPlayer;
                if (rUser != null)
                    rUser.DelAutoSelSkillID(PlayerPreferenceData.PVPSkillIdCurUsing);
                PlayerPreferenceData.PVPSkillIdCurUsing = nSkillIndex;
            }
            ShowShengJiEffectPvp = true;

        }
        UpdateSkillInfo();
        if (m_pvxState == (int)PVESTATE.PVE)
        {
            DelUpdatePVESkillInfo();
        }
        else if (m_pvxState == (int)PVESTATE.PVP)
        {
            DelUpdatePVPSkillInfo();
        }
        m_showSkillMenuObj.SetActive(false);
        
    }

    /// <summary>
    /// Item升级弹出二级界面
    /// </summary>
    public void OnClickItemLevelUp()
    {
        m_ItemLveUI.SetActive(true);
        m_SkillStudyComfirm.SetActive(false);
        m_SkillBookLevelUpComfirm.SetActive(true);
        SetInitItemMenuData();
        DelClickYes = OnConfirmItemLevelUp;
        DelClickNo = OnCloseItemLevelUp;
        SetNextLevelData();
        if (NewPlayerGuideFlag_Step == 4)
        NewPlayerGuide(5);
    }


    void OnClickYesBtn()
    {
        if (DelClickYes != null)
        {
            DelClickYes();
        }
    }

    void OnClickNoBtn()
    {
        if (DelClickNo != null)
        {
            DelClickNo();
        }
    }
    /// <summary>
    /// 关闭item升级的二级弹出界面
    /// </summary>
    public void OnCloseItemLevelUp()
    {
        m_ItemLveUI.SetActive(false);
        SetInitItemMenuData();
    }
    public void OnConfirmItemLevelUp()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        if (null == m_SelectSkillEx)
        {
            return;
        }
        int nSelectSkillIndex = -1;
        for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
        {
            if (m_SelectSkillEx != null && _mainPlayer.OwnSkillInfo[i].SkillId == m_SelectSkillEx.SkillExID)
            {
                nSelectSkillIndex = i;
                break;
            }
        }

        //技能未学会就不升级了
        if (-1 == nSelectSkillIndex)
        {
            _mainPlayer.SendNoticMsg(false, "#{10999}");
            return;
        }

        if (m_addValue <= 0)
        {
            _mainPlayer.SendNoticMsg(false,"#{11000}");
            return;
        }
        if (IsCanLevelUpSkill(m_SelectSkillEx.SkillExID) /*|| IsCanLevelUpMasterSkill(nCurSelSkillId)*/)
        {
            //发包
            CG_LEVELUP_SKILLBOOK packet = (CG_LEVELUP_SKILLBOOK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEVELUP_SKILLBOOK);
            packet.SetSkillID(m_SelectSkillEx.SkillExID);
            packet.SetMaxValue(m_addValue);
            packet.SendPacket();
        }
        //关闭界面
        OnCloseItemLevelUp();
    }
    /// <summary>
    /// item弹出框的下一级触发函数
    /// </summary>
    public void OnPreLevel()
    {
        SetPreLevelData();
    }

    /// <summary>
    /// item弹出框的上一级触发函数
    /// </summary>
    public void OnNextLevel()
    {
        SetNextLevelData();
    }

    /// <summary>
    /// 显示获得Item方式的新的窗口函数
    /// </summary>
    public void OnShowGetItemWayWin()
    {
        m_getItemWayWin.SetActive(!m_getItemWayWin.activeSelf);
    }

    public void OnCloseGetItemWayWin()
    {
        m_getItemWayWin.SetActive(false);
    }

    void UpdatePutongSkillLevelUpPointState()
    {
        bool IsShowEffect = false;
        for (int index = 0; index < NormalSkillInfos.Length; index++)
        {
            int curSkillID = NormalSkillInfos[index].nSKillId;
            int curSkillState = NormalSkillInfos[index].nSkillState;
            if ((curSkillState == (int)SkillInfo.SKILLSTATE.NORMAL_STUDY) && CanLevelUpSkill(curSkillID))
            {
                m_PutongSkillLevelUpPoint[index].SetActive(true);
                IsShowEffect = true;
            }
            else
            {
                m_PutongSkillLevelUpPoint[index].SetActive(false);
            }
        }
        if (IsShowEffect)
        {
            m_LevelUpAllEffect.SetActive(true);
            m_LevelUpAllEffectBtn.SetActive(true);
            m_LevelUpAllEffectLabel.gameObject.GetComponent<UIWidget>().color = new Color(1, 1, 1, 1);
        }
        else
        {
            m_LevelUpAllEffect.SetActive(false);
            m_LevelUpAllEffectBtn.SetActive(false);
            m_LevelUpAllEffectLabel.gameObject.GetComponent<UIWidget>().color = new Color(0.5f, 0.5f, 0.5f, 1);
        }
    }

    void UpdatePveSkillLevelUpPointState()
    {
        Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (backPack == null)
        {
            return;
        }
        int LevelupItemCount = backPack.GetItemCountByDataId(SKILL_MATERIAL_ITEM);
        for (int index = 0; index < PVESkillInfos.Length; index++)
        {
            //m_PveCanLevelUpTips[index].gameObject.SetActive(LevelupItemCount > 0 ? true:false);
                int nSkillId = PVESkillInfos[index].nSKillId;
                Tab_SkillLevelUp _skillLevelUp = TableManager.GetSkillLevelUpByID(nSkillId, 0);
                int haveMoney = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
                int nSkillState = PVESkillInfos[index].nSkillState;
                if (nSkillState == (int) SkillInfo.SKILLSTATE.HAVE_ITEM)
                {
                    m_PveCanStudyTips[index].gameObject.SetActive(true);
                }
                else if(nSkillState == (int)SkillInfo.SKILLSTATE.IS_OWN)
                {
                    if (LevelupItemCount > 0 && _skillLevelUp.NeedCoin <= haveMoney)
                    {
                        m_PveCanLevelUpTips[index].gameObject.SetActive(true);
                    }
                    else
                    {
                        m_PveCanLevelUpTips[index].gameObject.SetActive(false);
                    }
                }
                else if(nSkillState == (int)SkillInfo.SKILLSTATE.IS_USING)
                {
                    if (LevelupItemCount > 0 && _skillLevelUp.NeedCoin <= haveMoney)
                    {
                        m_PveCanLevelUpTips[index].gameObject.SetActive(true);
                    }
                    else
                    {
                        m_PveCanLevelUpTips[index].gameObject.SetActive(false);
                    }
                }
                else if (nSkillState == (int)SkillInfo.SKILLSTATE.NORMAL_STUDY)
                {
                    m_PveCanLevelUpTips[index].gameObject.SetActive(CanLevelUpSkill(PVESkillInfos[index].nSKillId) ? true : false);
                }
        }
    }

    void UpdatePvpSkillLevelUpPointState()
    {
        Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (backPack == null)
        {
            return;
        }
        int LevelupItemCount = backPack.GetItemCountByDataId(SKILL_MATERIAL_ITEM);
        for (int index = 0; index < PVPSkillInfos.Length; index++)
        {
            int nSkillId = PVPSkillInfos[index].nSKillId;
            Tab_SkillLevelUp _skillLevelUp = TableManager.GetSkillLevelUpByID(nSkillId, 0);
            int haveMoney = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
            int nSkillState = PVPSkillInfos[index].nSkillState;
            if (nSkillState == (int)SkillInfo.SKILLSTATE.HAVE_ITEM)
            {
                m_PvpCanStudyTips[index].gameObject.SetActive(true);
            }
            else if (nSkillState == (int)SkillInfo.SKILLSTATE.IS_OWN)
            {
                if (LevelupItemCount > 0 && _skillLevelUp.NeedCoin <= haveMoney)
                {
                    m_PvpCanLevelUpTips[index].gameObject.SetActive(true);
                }
                else
                {
                    m_PvpCanLevelUpTips[index].gameObject.SetActive(false);
                }
            }
            else if (nSkillState == (int)SkillInfo.SKILLSTATE.IS_USING)
            {
                if (LevelupItemCount > 0 && _skillLevelUp.NeedCoin <= haveMoney)
                {
                    m_PvpCanLevelUpTips[index].gameObject.SetActive(true);
                }
                else
                {
                    m_PvpCanLevelUpTips[index].gameObject.SetActive(false);
                }
            }
            else if (nSkillState == (int)SkillInfo.SKILLSTATE.NORMAL_STUDY)
            {
                m_PvpCanLevelUpTips[index].gameObject.SetActive(CanLevelUpSkill(PVPSkillInfos[index].nSKillId) ? true : false);
            }
        }
    }

    public static bool CanLevelUpSkill(int nCurSkillId)
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return false;
        }
        Tab_SkillLevelUp _skillLevUp = TableManager.GetSkillLevelUpByID(nCurSkillId, 0);
        if (_skillLevUp == null)
        {
            return false;
        }
        if (_mainPlayer.Profession != _skillLevUp.Profession)
        {
            return false;
        }
        if (_mainPlayer.BaseAttr.Level < _skillLevUp.Level)
        {
            return false;
        }
        if (_mainPlayer.IsHaveSkill(_skillLevUp.NeedSkillId) == false)
        {
            return false;
        }
        if (_skillLevUp.NextSkillId == -1)
        {
            return false;
        }
        //真气不足
        if (PVPData.Power < _skillLevUp.NeedConsume)
        {
            return false;
        }
        //金币不足
        int nCoin = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
        if (nCoin < _skillLevUp.NeedCoin)
        {
            return false;
        }
        return true;
    }

    void RefreshSlider1(TweenNumber tw, bool bFinished)
    {
        RefreshSlider(m_ItemExpCount, tw, bFinished);
    }

    void RefreshSlider(UISlider slider, TweenNumber tw, bool bFinished)
    {
        if (bFinished)
        {
            slider.value = getSliderValue(tw.to);
        }
        else
        {
            slider.value = getSliderValue(tw.value);
        }
    }

    float getSliderValue(float tmpValue)
    {
        if (tmpValue < 0)
        {
            tmpValue += 1;
        }
        else if (tmpValue > 1)
        {
            tmpValue -= 1;
        }

        return tmpValue;
    }


    // 新手指引相关
    private int m_NewPlayerGuideFlag_Step = -1;
    public int NewPlayerGuideFlag_Step
    {
        get { return m_NewPlayerGuideFlag_Step; }
        set { m_NewPlayerGuideFlag_Step = value; }
    }

    void Check_NewPlayerGuide()
    {
        if (MenuBarLogic.Instance() == null)
        {
            return;
        }
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 7)
        {
            NewPlayerGuide(1);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
        if (nIndex == 17)
        {
            NewPlayerGuide(2);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        if (nIndex < 0)
        {
            return;
        }
        m_NewPlayerGuideFlag_Step = nIndex;

        switch (nIndex)
        {
            case 1:
                NewPlayerGuidLogic.OpenWindow(m_LevelUpAllEffectBtn.transform.parent.gameObject, 250, 70, Utils.GetDicByID(11409), "top", 0, true, true, offsetX: -0.2f);
                m_NewPlayerGuideFlag_Step = -1;
                break;
            case 2:
                NewPlayerGuidLogic.OpenWindow(m_tabGameObjList[1], 250, 100, "", "top", 0, true, true);
                break;
            case 3:
                NewPlayerGuidLogic.OpenWindow(m_PVEOjbList[0], 200, 200, "", "top", 0, true, true);
                break;
            case 4:
                NewPlayerGuidLogic.OpenWindow(m_ItemLevelUpBtn.gameObject, 200, 100, "", "top", 0, true, true);
                break;
            case 5:
                NewPlayerGuidLogic.OpenWindow(m_SkillBookLevelUpComfirm.transform.parent.FindChild("YES").gameObject, 200, 100, "", "top", 0, true, true, offsetX: -0.1f);
                m_NewPlayerGuideFlag_Step = -1;
                break;
        }
    }
    #endregion
}
