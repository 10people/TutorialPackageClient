using System;
using System.Collections.Generic;
using System.Runtime.Remoting.Lifetime;
using Games.GlobeDefine;
using Games.LogicObj;
using Games.SkillModle;
using GCGame;
using GCGame.Table;
using Module.Log;
using UnityEngine;
using System.Collections;

public class SkillRootLogic : MonoBehaviour
{
    // Use this for initialization
    public UISprite m_SkillButtonDragSprite;
    public UISprite m_SkillBarDragSprite;
    public UILabel m_InfoSkillName;
    public UILabel m_InfoSkillCDTime;
    public UILabel m_InfoSkillDel;
    public UILabel m_InfoSkillType;
    public UILabel m_InfoSkillDec;
    public UILabel m_InfoNextSkillDec;
    public UILabel m_SkillUpNeedExp;
    public UILabel m_SkillUpNeedLev;
    public UILabel m_SkillUpNeedCoin;
    public UILabel m_SkillLevel;
    public UILabel m_SkillExp;
    public UILabel m_coinCur;
    public GameObject m_LevelUpInfo;
    public GameObject m_CurSkillDec;
    public GameObject m_NextSkillDec;
    public UIImageButton m_LevelUpBt;
    public UIImageButton m_oneKeyLevelUpBt;
    public GameObject m_LeftSkillDescBt;
    public GameObject m_RightSkillDescBt;

    public GameObject m_NormalSkillInfo;        //非师门技能信息
    public GameObject m_MasterSkillInfo;        //师门技能信息

    public UISprite m_SkillEffectIcon;//技能升级特效图标
    public GameObject m_SkillBak;//技能升级特效背景
    public TweenScale m_SkillEffectScale;
    public GameObject m_LevelBtTipsIcon;
    public GameObject m_MasterLevelBtTipsIcon;
    //未解锁的 技能栏
    public GameObject[] m_EmptySkillBarItem = new GameObject[(int)SKILLBAR.MAXSKILLBARNUM];

    //师门技能相关控件
    public UILabel m_CurTorchLabel;
    public UILabel m_NeedUserTorch;
    public UILabel m_NeedMasterTorch;
    public UILabel m_NeedLevel;
    public GameObject m_MasterLevelupInfo;
    public UIImageButton m_MasterLevelUpBt;
    public GameObject m_MasterLevelupLimit;
    public UILabel m_MasterSkillNotUseTips;

    private List<GameObject> m_skillBarList = new List<GameObject>();
    private List<SkillRootButtonItemLogic> m_skillButtonItemLogicList = new List<SkillRootButtonItemLogic>();
    private SkillRootButtonItemLogic m_curClickBtItem = null;
    public SkillRootButtonItemLogic CurClickBtItem
    {
        get { return m_curClickBtItem; }
        set { m_curClickBtItem = value; }
    }
    private int m_nSelectSkillIndex;
    public int SelectSkillIndex
    {
        get { return m_nSelectSkillIndex; }
        set { m_nSelectSkillIndex = value; }
    }
    public GameObject m_SkillBtGird;
    public GameObject m_SkillBarGird;
    public UIDraggablePanel m_skillBarDraggablePanel;
    public UIDraggablePanel m_skillBtDraggablePanel;
    private int m_NewPlayerGuide_Step = -1;
    public int NewPlayerGuide_Step
    {
        get { return m_NewPlayerGuide_Step; }
        set { m_NewPlayerGuide_Step = value; }
    }


    //左侧技能位置按钮
    private const int CAN_LEVELUP_SKILL_COUNT = 12;
    //技能按钮
    public List<UISprite> m_skillItemList = new List<UISprite>(CAN_LEVELUP_SKILL_COUNT);

    //技能名字
    public List<UILabel> m_skillNameList = new List<UILabel>(CAN_LEVELUP_SKILL_COUNT);

    //技能当前等级
    public List<UILabel> m_skillLevelList = new List<UILabel>(CAN_LEVELUP_SKILL_COUNT);

    //技能选中与不选中背景图片
    public List<UISprite> m_skillSelectBKList = new List<UISprite>(CAN_LEVELUP_SKILL_COUNT);

    public List<GameObject> m_activeObj = new List<GameObject>(CAN_LEVELUP_SKILL_COUNT);

    //技能提示点
    public List<UISprite> m_skillRedRemindPoint = new List<UISprite>(CAN_LEVELUP_SKILL_COUNT);

    private int[] m_skillIdList = null;

    private int m_nSelectIndex = 0;

    public GameObject m_showOneKeyLevelUp;

    public UILabel m_showDetailLevelUp;
    public UILabel m_consumeCount;
    public UILabel m_coin;

    public GameObject m_skillIntroObj;
    public UILabel m_skillIntroLabel;
    public UISprite m_skillIntroSpr;
    public UIFont m_font;
    private float m_spacehight;

    public UIAtlas m_skillAtlas;
    public UIAtlas m_CommonAtlas;
    //private CG_SKILL_LEVELUP_TO_MAX CG_SKILL_LEVELUP_TO_MAX_Packet;
    private static SkillRootLogic m_Instance = null;
    public static SkillRootLogic Instance()
    {
        return m_Instance;
    }
    void Awake()
    {
        m_Instance = this;
    }
    void OnEnable()
    {
        m_spacehight = m_font.CalculatePrintedSize(" 　", true, UIFont.SymbolStyle.None).y;
        m_skillIntroObj.SetActive(false);
        //UpdateRedRemindPoint();
    }
    void OnDestroy()
    {
        m_Instance = null;
    }

    void Start()
    {
        //  m_CurSkillDec.SetActive(true);
        //         m_SkillBarDragSprite.gameObject.SetActive(false);
        //         m_SkillButtonDragSprite.gameObject.SetActive(false);
        //         m_SkillBak.SetActive(false);
        m_LevelUpInfo.SetActive(false);
        // UIManager.LoadItem(UIInfo.SkillRootButtonItem, OnLoadButtonItem);
        // UIManager.LoadItem(UIInfo.SkillRootBarItem, OnLoadBarItem);
        if (m_skillIdList == null)
        {
            m_skillIdList = new int[CAN_LEVELUP_SKILL_COUNT];
        }
        OnLoadButtonItem();

        m_SkillExp.text = Utils.ConvertLargeNumToString(PVPData.Power);
        m_coinCur.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
        //         //更新薪火值
        //         Singleton<ObjManager>.GetInstance().MainPlayer.ReqUpdateTorch();
        //         //更新师门信息
        //         if (Singleton<ObjManager>.GetInstance().MainPlayer.NeedRequestMasterInfo)
        //         {
        //             Singleton<ObjManager>.GetInstance().MainPlayer.ReqMasterInfo();
        //         }
        // 
        //         Check_NewPlayerGuide();
#if BOBJOYSTICK
		UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.SKILL_UI);
#endif
    }
    //初始化技能按钮信息
    void OnLoadButtonItem()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null || m_skillItemList == null || m_skillItemList.Count != CAN_LEVELUP_SKILL_COUNT
            || m_skillNameList == null || m_skillNameList.Count != CAN_LEVELUP_SKILL_COUNT
            || m_skillLevelList == null || m_skillLevelList.Count != CAN_LEVELUP_SKILL_COUNT)
        {
            return;
        }


        //填充每个位置的信息
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

                int nPutIndex = _skillBase.LevelUpIndex;

                if (nPutIndex < 0 || nPutIndex >= CAN_LEVELUP_SKILL_COUNT || null == m_skillIdList || nPutIndex >= m_skillIdList.Length)
                    continue;

                bool isOwn = false;
                for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
                {
                    int nSkillId = _mainPlayer.OwnSkillInfo[i].SkillId;
                    Tab_SkillEx _tempSkillEx = TableManager.GetSkillExByID(nSkillId, 0);
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
                        m_skillIdList[nPutIndex] = nSkillId;
                        _SkillEx = _tempSkillEx;
                        _skillBase = _tempSkillBase;
                        isOwn = true;
                        break;
                    }
                }
                m_skillIntroLabel.text = _skillBase.SkillIntro;
                m_skillIntroSpr.height = (int)(m_skillIntroLabel.printedSize.y + m_spacehight);

                //                 //特殊处理，如果是后面普攻，要基于前面技能是否学会来判断显示状态(比较特殊的一种处理，要注意下！)--------------------------------
                //                 if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0 && nPutIndex > 0)
                //                 {
                //                     //上个技能在锁着此时也锁住
                //                     if (m_skillItemList[nPutIndex - 1].spriteName == "Lock")
                //                     {
                //                         isOwn = false;
                //                     }
                //                 }

                int preSkillId = _skillActiveInfo.PreSkillId;
                int preLevel = 1;
                if (preSkillId != -1)
                {
                    isOwn = IsPreSkillIsOwn(preSkillId);

                    if (!isOwn)
                    {
                        preLevel = GetPreskillActiveLevel(preSkillId);
                    }
                }
                if (!isOwn)
                    m_skillIdList[nPutIndex] = _skillActiveInfo.SkillId;
                string formatStr = isOwn ? "{0}" : "[FF0000]{0}";
                //师门技能特殊
                if ((_skillBase.SkillClass & (int)SKILLCLASS.MASTERSKILL) != 0)
                {
                    m_skillNameList[nPutIndex].text = String.Format(formatStr, GameManager.gameManager.PlayerDataPool.GetMasterSkillName(_skillActiveInfo.SkillId));
                    if (m_skillNameList[nPutIndex].text == "")
                    {
                        m_skillNameList[nPutIndex].text = String.Format(formatStr, _skillBase.Name);
                    }
                    m_skillLevelList[nPutIndex].text = isOwn ? StrDictionary.GetClientDictionaryString("#{2162}", _SkillEx.Level) : "";
                }
                else //非师门技能
                {
                    m_skillNameList[nPutIndex].text = String.Format(formatStr, _skillBase.Name);
                    m_skillLevelList[nPutIndex].text = isOwn ? StrDictionary.GetClientDictionaryString("#{2162}", _SkillEx.Level) : String.Format("[FF0000]{0}", StrDictionary.GetClientDictionaryString("#{2770}", _skillActiveInfo.Level));

                    //变身附带的自动连续技能
                    if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0)
                    {
                        if (!isOwn && preSkillId != -1)
                        {
                            m_skillLevelList[nPutIndex].text = String.Format("[FF0000]{0}", StrDictionary.GetClientDictionaryString("#{2770}", preLevel));
                        }
                    }

                    m_activeObj[nPutIndex].SetActive(!isOwn);
                    m_skillItemList[nPutIndex].spriteName = _skillBase.Icon;
                }
                //是否要显示升级提醒的角标
                if (SkillRootLogic.IsCanLevelUpSkill(_skillActiveInfo.SkillId) ||
                    SkillRootLogic.IsCanLevelUpMasterSkill(_skillActiveInfo.SkillId))
                {
                    m_skillRedRemindPoint[nPutIndex].gameObject.SetActive(true);
                }
                else
                {
                    m_skillRedRemindPoint[nPutIndex].gameObject.SetActive(false);
                }

            }
        }

        //默认选中当前第一个按钮
        m_nSelectIndex = 0;
        ClickButton(new GameObject("0"));
        //         //填充每个位置的信息
        //         for (int i = 0; i < m_skillItemList.Count; i++)
        //         {
        // 
        //         }
        //         //已经学会的技能
        //         for (int nIndex = 0; nIndex < _mainPlayer.OwnSkillInfo.Length; ++nIndex)
        //         {
        //             if (_mainPlayer.OwnSkillInfo[nIndex].IsValid())
        //             {
        //                 GameObject _gameObject = Utils.BindObjToParent(resObj, m_SkillBtGird, (nIndex + 1000).ToString());
        //                 if (_gameObject != null)
        //                 {
        //                     SkillRootButtonItemLogic _buttonItemLogic = _gameObject.GetComponent<SkillRootButtonItemLogic>();
        //                     if (_buttonItemLogic != null)
        //                     {
        //                         _buttonItemLogic.UpdateButtonInfo(nIndex);
        //                         m_skillButtonItemLogicList.Add(_buttonItemLogic);
        //                         if (nIndex == 0)
        //                         {
        //                             _buttonItemLogic.ClickButton();
        //                         }
        //                         UIDragObject _dragObject = _buttonItemLogic.m_SkillIconSprite.GetComponent<UIDragObject>();
        //                         if (null != _dragObject)
        //                         {
        //                             _dragObject.enabled = true;
        //                             _dragObject.target = m_SkillButtonDragSprite.transform;
        //                             int _skillId = _mainPlayer.OwnSkillInfo[nIndex].SkillId;
        //                             //普攻和Xp 被动技 禁用拖曳图标
        //                             if (_skillId > 0)
        //                             {
        //                                 Tab_SkillEx _skillEx = TableManager.GetSkillExByID(_skillId, 0);
        //                                 if (_skillEx != null)
        //                                 {
        //                                     Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
        // 
        //                                     if (_skillBase != null)
        //                                     {
        //                                         if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0 ||
        //                                             (_skillBase.SkillClass & (int)SKILLCLASS.XP) != 0 ||
        //                                             (_skillBase.SkillClass & (int)SKILLCLASS.PASSIVITY) != 0)
        //                                         {
        //                                             _dragObject.enabled = false;
        //                                         }
        //                                     }
        //                                 }
        //                             }
        //                         }
        //                     }
        //                 }
        //             }
        //         }
        //         //未学习的技能
        //         for (int nIndex = 1; nIndex <= TableManager.GetSkillActive().Count; nIndex++)
        //         {
        //             Tab_SkillActive _skillActiveInfo = TableManager.GetSkillActiveByID(nIndex, 0);
        //             if (_skillActiveInfo != null && _mainPlayer.Profession == _skillActiveInfo.Profession)
        //             {
        //                 Tab_SkillEx _SkillEx = TableManager.GetSkillExByID(_skillActiveInfo.SkillId, 0);
        //                 if (_SkillEx != null)
        //                 {
        //                     if (_mainPlayer.IsStudySkill(_SkillEx.BaseId) == false)
        //                     {
        //                         GameObject _gameObject = Utils.BindObjToParent(resObj, m_SkillBtGird, (nIndex + 2000).ToString());
        //                         if (_gameObject != null)
        //                         {
        //                             SkillRootButtonItemLogic _buttonItemLogic = _gameObject.GetComponent<SkillRootButtonItemLogic>();
        //                             if (_buttonItemLogic != null)
        //                             {
        //                                 _buttonItemLogic.UpdateNoStudyButtonInfo(_skillActiveInfo.SkillId);
        //                                 m_skillButtonItemLogicList.Add(_buttonItemLogic);
        //                                 if (null != _gameObject.GetComponent<SkillRootButtonItemLogic>())
        //                                 {
        //                                     UIDragObject _dragObject = _gameObject.GetComponent<SkillRootButtonItemLogic>().m_SkillIconSprite.GetComponent<UIDragObject>();
        //                                     // 禁用拖曳图标
        //                                     if (null != _dragObject)
        //                                         _dragObject.enabled = false;
        //                                 }
        //                             }
        //                         }
        //                     }
        //                 }
        //             }
        //         }
        //         m_SkillBtGird.GetComponent<UIGrid>().hideInactive = true;
        //         m_SkillBtGird.GetComponent<UIGrid>().sorted = true;
        //         m_SkillBtGird.GetComponent<UIGrid>().Reposition();
        //         m_skillBtDraggablePanel.repositionClipping = true;
    }

    public void PlaySkillLevelUpEffect()
    {
        if (BackCamerControll.Instance() != null)
        {
            BackCamerControll.Instance().StopSceneEffect(GlobeVar.SKILLLEVUPEFFECTID, true);
            BackCamerControll.Instance().PlaySceneEffect(GlobeVar.SKILLLEVUPEFFECTID);
            if (m_curClickBtItem != null)
            {
                m_SkillEffectIcon.spriteName = m_curClickBtItem.m_SkillIconSprite.spriteName;
                m_SkillEffectIcon.MakePixelPerfect();
                m_SkillEffectScale.Reset();
                m_SkillBak.SetActive(true);
            }
        }
    }

    public int GetPreskillActiveLevel(int nPreSkillId)
    {
        int nlevel = 1;
        for (int nIndex = 1; nIndex <= TableManager.GetSkillActive().Count; nIndex++)
        {
            Tab_SkillActive _skillActiveInfo = TableManager.GetSkillActiveByID(nIndex, 0);
            if (_skillActiveInfo != null && _skillActiveInfo.SkillId == nPreSkillId)
            {
                return _skillActiveInfo.Level;
            }
        }
        return nlevel;
    }
    public bool IsPreSkillIsOwn(int nPreSkillId)
    {
        bool isOwn = false;
        Tab_SkillEx _SkillEx = TableManager.GetSkillExByID(nPreSkillId, 0);
        Tab_SkillBase _skillBase = null;
        if (_SkillEx != null)
        {
            _skillBase = TableManager.GetSkillBaseByID(_SkillEx.BaseId, 0);
        }

        if (null == _skillBase)
        {
            return isOwn;
        }
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return isOwn;
        }

        for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
        {
            int nSkillId = _mainPlayer.OwnSkillInfo[i].SkillId;
            Tab_SkillEx _tempSkillEx = TableManager.GetSkillExByID(nSkillId, 0);
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
                break;
            }
        }

        return isOwn;
    }
    public void SkillLevelUpEffectOver()
    {
        m_SkillBak.SetActive(false);
    }
    //初始化 技能栏信息
    void OnLoadBarItem(GameObject resObj, object param)
    {
        if (null == resObj)
        {
            LogModule.ErrorLog("load OnLoadBarItem error");
            return;
        }
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        int nSkillBarUnLockCount = _mainPlayer.NeedSkillBarNum();
        for (int nIndex = 0; nIndex < (int)SKILLBAR.MAXSKILLBARNUM; ++nIndex)
        {
            if (nIndex >= 0 && nIndex < nSkillBarUnLockCount)
            {
                GameObject _gameObject = Utils.BindObjToParent(resObj, m_SkillBarGird, (nIndex + 1000).ToString());
                m_skillBarList.Add(_gameObject);
                if (null != _gameObject.GetComponent<SkillRootBarItemLogic>())
                    _gameObject.GetComponent<SkillRootBarItemLogic>().m_IconSprite.gameObject.SetActive(false);
                //读取技能栏配置
                Dictionary<string, SkillBarInfo[]> _skillBarSetMap = UserConfigData.GetSkillBarSetInfo();
                if (_skillBarSetMap != null && _skillBarSetMap.ContainsKey(_mainPlayer.GUID.ToString()))
                {
                    SkillBarInfo[] _skillBarSetInfo = _skillBarSetMap[_mainPlayer.GUID.ToString()];
                    _gameObject.GetComponent<SkillRootBarItemLogic>().UpdateSkillBarInfo(_skillBarSetInfo[nIndex].SkillIndex);
                }
                if (m_EmptySkillBarItem[nIndex] != null)
                {
                    m_EmptySkillBarItem[nIndex].SetActive(false);
                }
            }
            else if (m_EmptySkillBarItem[nIndex] != null)
            {
                m_EmptySkillBarItem[nIndex].SetActive(true);
            }
        }

        m_SkillBarGird.GetComponent<UIGrid>().hideInactive = true;
        m_SkillBarGird.GetComponent<UIGrid>().sorted = true;
        m_SkillBarGird.GetComponent<UIGrid>().Reposition();
        m_skillBarDraggablePanel.repositionClipping = true;
        SkillLevelUpGuide();
    }

    public void SaveSkillBarSetInfo()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        //更新右下角技能栏
        if (SkillBarLogic.Instance() != null)
        {
            for (int _BarIndex = 0; _BarIndex < m_skillBarList.Count; _BarIndex++)
            {
                if (_BarIndex >= 0 && _BarIndex < (int)SKILLBAR.MAXSKILLBARNUM)
                {
                    SkillBarLogic.Instance().MySkillBarInfo[_BarIndex].SkillIndex = m_skillBarList[_BarIndex].GetComponent<SkillRootBarItemLogic>().SkillIndex;
                }
            }
            //保存配置
            UserConfigData.AddSkillBarSetInfo(_mainPlayer.GUID.ToString(), SkillBarLogic.Instance().MySkillBarInfo);
            //更新
            SkillBarLogic.Instance().UpdateSkillBarInfo();
        }
    }

    public void ReleaseButtonDragSprite(int nSkillIndex)
    {
        Vector3 _dragVector3 = m_SkillBarGird.transform.InverseTransformPoint(m_SkillButtonDragSprite.transform.position);
        for (int i = 0; i < m_skillBarList.Count; i++)
        {
            float fDis = Vector3.Distance(_dragVector3, m_skillBarList[i].transform.localPosition);
            if (fDis - 50 <= 0)
            {
                m_skillBarList[i].GetComponent<SkillRootBarItemLogic>().UpdateSkillBarInfo(nSkillIndex);
                SaveSkillBarSetInfo();
                break;
            }
        }
        m_SkillButtonDragSprite.gameObject.SetActive(false);
    }
    public void OnCloseClick()
    {
        if (BackCamerControll.Instance() != null)
        {
            BackCamerControll.Instance().StopSceneEffect(GlobeVar.SKILLLEVUPEFFECTID, true);
        }
        UIManager.CloseUI(UIInfo.SkillInfo);
    }

    public void UpdateSkillInfo()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        if (m_nSelectIndex < 0 || m_nSelectIndex >= CAN_LEVELUP_SKILL_COUNT || m_skillIdList == null || m_skillIdList.Length < CAN_LEVELUP_SKILL_COUNT)
        {
            return;
        }



        if (m_nSelectSkillIndex < 0 || m_nSelectSkillIndex >= _mainPlayer.OwnSkillInfo.Length)
        {
            return;
        }

        int nSkillId = _mainPlayer.OwnSkillInfo[m_nSelectSkillIndex].SkillId;
        m_skillIdList[m_nSelectIndex] = nSkillId;

        m_SkillExp.text = Utils.ConvertLargeNumToString(PVPData.Power);
        m_coinCur.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());

        //更新左侧的所有的技能栏信息
        Tab_SkillEx _SkillEx = TableManager.GetSkillExByID(nSkillId, 0);
        Tab_SkillBase _skillBase = null;
        if (_SkillEx != null)
        {
            _skillBase = TableManager.GetSkillBaseByID(_SkillEx.BaseId, 0);
        }

        if (null == _skillBase)
        {
            return;
        }

        //       string formatStr = _mainPlayer.IsStudySkill(_SkillEx.BaseId) ? "{0}" : "[FF0000]{0}";
        //         师门技能特殊
        //                 if ((_skillBase.SkillClass & (int)SKILLCLASS.MASTERSKILL) != 0)
        //                 {
        //                     m_skillNameList[m_nSelectIndex].text = String.Format(formatStr, GameManager.gameManager.PlayerDataPool.GetMasterSkillName(_skillActiveInfo.SkillId));
        //                     if (m_skillNameList[m_nSelectIndex].text == "")
        //                     {
        //                         m_skillNameList[m_nSelectIndex].text = String.Format(formatStr, _skillBase.Name);
        //                     }
        //                     m_skillLevelList[m_nSelectIndex].text = _mainPlayer.IsStudySkill(_SkillEx.BaseId) ? StrDictionary.GetClientDictionaryString("#{2162}", _SkillEx.Level) : "";
        //                 }
        //  else //非师门技能
        {
            m_skillNameList[m_nSelectIndex].text = _skillBase.Name;
            m_skillLevelList[m_nSelectIndex].text = StrDictionary.GetClientDictionaryString("#{2162}", _SkillEx.Level);
            m_skillItemList[m_nSelectIndex].spriteName = _skillBase.Icon;
        }

        //显示右侧技能信息
        ShowSkillInfo();
    }
    public void ShowSkillInfo()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        if (m_nSelectIndex < 0 || m_nSelectIndex >= CAN_LEVELUP_SKILL_COUNT)
        {
            return;
        }

        int nSkillId = m_skillIdList[m_nSelectIndex];

        //再次检测是否学会
        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
        if (_skillEx != null)
        {
            Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);

            //再次检测是否学会
            if (_skillBase != null && _mainPlayer.IsStudySkill(nSkillId))
            {
                //名字
                if ((_skillBase.SkillClass & (int)SKILLCLASS.MASTERSKILL) != 0)
                {
                    m_InfoSkillName.text = GameManager.gameManager.PlayerDataPool.GetMasterSkillName(nSkillId);
                }
                else
                {
                    m_InfoSkillName.text = _skillBase.Name;
                }

                //冷却
                Tab_CoolDownTime _CDTimeInfo = TableManager.GetCoolDownTimeByID(_skillEx.CDTimeId, 0);
                if (_CDTimeInfo != null)
                {
                    int CDTime = _CDTimeInfo.CDTime / 1000;
                    m_InfoSkillCDTime.text = StrDictionary.GetClientDictionaryString("#{1794}", CDTime);
                }
                else
                {
                    m_InfoSkillCDTime.text = StrDictionary.GetClientDictionaryString("#{1793}");
                }
                //消耗
                string strDelInfo1 = StrDictionary.GetClientDictionaryString("#{1793}");
                string strDelInfo2 = StrDictionary.GetClientDictionaryString("#{1793}");
                SKILLDELANDGAINTYPE nType_1 = (SKILLDELANDGAINTYPE)_skillEx.GetDelTypebyIndex(0);
                if (nType_1 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
                {
                    strDelInfo1 = GetTypeDesc(nType_1, _skillEx.GetDelNumbyIndex(0));
                    m_InfoSkillDel.text = strDelInfo1;
                }
                SKILLDELANDGAINTYPE nType_2 = (SKILLDELANDGAINTYPE)_skillEx.GetDelTypebyIndex(1);
                if (nType_2 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
                {
                    strDelInfo2 = GetTypeDesc(nType_1, _skillEx.GetDelNumbyIndex(1));
                    m_InfoSkillDel.text = strDelInfo2;
                }
                if (nType_1 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID &&
                    nType_2 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
                {
                    m_InfoSkillDel.text = strDelInfo1 + "/" + strDelInfo2;
                }
                else if (nType_1 == SKILLDELANDGAINTYPE.HPTYPE_INVAILID &&
                    nType_2 == SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
                {
                    m_InfoSkillDel.text = StrDictionary.GetClientDictionaryString("#{1793}");
                }

                //技能类型
                if (_skillBase.UseType == (int)SKILLUSETYPE.SHUNFA)
                {
                    m_InfoSkillType.text = StrDictionary.GetClientDictionaryString("#{1795}");
                }
                else if (_skillBase.UseType == (int)SKILLUSETYPE.YINCHANG)
                {
                    m_InfoSkillType.text = StrDictionary.GetClientDictionaryString("#{1796}");
                }
                else if (_skillBase.UseType == (int)SKILLUSETYPE.BEIDONG)
                {
                    m_InfoSkillType.text = StrDictionary.GetClientDictionaryString("#{3101}");
                }
                //技能描述 
                m_InfoSkillDec.text = _skillEx.SkillDesc;

                //技能当前等级
                m_SkillLevel.text = StrDictionary.GetClientDictionaryString("#{2162}", _skillEx.Level);
                //技能升级信息

                //普攻
                if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0)
                {
                    //当前的真气
                  //    m_SkillExp.text = Utils.ConvertLargeNumToString(PVPData.Power);
                    m_SkillLevel.text = StrDictionary.GetClientDictionaryString("#{1810}"); //标明最高等级

                    //升级界面都隐藏了
                    m_LevelUpInfo.SetActive(false);
                }
                else
                {
                    //当前真气值
                    //   m_SkillExp.text = Utils.ConvertLargeNumToString(PVPData.Power);
                    Tab_SkillLevelUp _levelUp = TableManager.GetSkillLevelUpByID(nSkillId, 0);
                    if (_levelUp != null)
                    {
                        m_LevelUpInfo.SetActive(true);
                        if (_levelUp.NextSkillId == -1)
                        {
                            m_SkillLevel.text = StrDictionary.GetClientDictionaryString("#{1810}"); //标明最高等级

                            //已达最大等级
                            m_LevelUpInfo.SetActive(false);
                        }
                        else
                        {
                            int nNeedExp = _levelUp.NeedConsume;
                            int nNeedLeve = _levelUp.Level;
                            //所需等级 
                            if (_mainPlayer.BaseAttr.Level >= nNeedLeve)
                            {
                                m_SkillUpNeedLev.text = nNeedLeve.ToString();
                            }
                            else
                            {
                                m_SkillUpNeedLev.text = StrDictionary.GetClientDictionaryString("#{1797}", nNeedLeve);
                                m_LevelUpBt.isEnabled = false; // 灰化按钮
                                m_oneKeyLevelUpBt.isEnabled = false;
                                //隐藏升级角标
                                m_LevelBtTipsIcon.SetActive(false);
                            }
                            //所需真气
                            if (PVPData.Power >= nNeedExp)
                            {
                                m_SkillUpNeedExp.text = nNeedExp.ToString();
                            }
                            else
                            {
                                m_SkillUpNeedExp.text = StrDictionary.GetClientDictionaryString("#{1797}", nNeedExp);
                                m_LevelUpBt.isEnabled = false; // 灰化
                                m_oneKeyLevelUpBt.isEnabled = false;

                                //隐藏升级角标
                                m_LevelBtTipsIcon.SetActive(false);
                            }
                            //所需金币
                            int nCoin = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
                            if (nCoin >= _levelUp.NeedCoin)
                            {
                                m_SkillUpNeedCoin.text = _levelUp.NeedCoin.ToString();
                            }
                            else
                            {
                                m_SkillUpNeedCoin.text = StrDictionary.GetClientDictionaryString("#{1797}", _levelUp.NeedCoin);
                                m_LevelUpBt.isEnabled = false; // 灰化按钮
                                m_oneKeyLevelUpBt.isEnabled = false;
                                //隐藏升级角标
                                m_LevelBtTipsIcon.SetActive(false);
                            }
                            if (PVPData.Power >= nNeedExp && _mainPlayer.BaseAttr.Level >= nNeedLeve && nCoin >= _levelUp.NeedCoin)
                            {
                                m_LevelUpBt.isEnabled = true; // 恢复按钮
                                m_oneKeyLevelUpBt.isEnabled = true;
                                //显示升级角标
                                m_LevelBtTipsIcon.SetActive(true);
                            }
                        }
                    }
                }
            }
        }
    }
    public void ShowNoStudySkillInfo(int nSkillId)
    {
        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
        if (_skillEx != null)
        {
            Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
            if (_skillBase != null)
            {
                m_InfoSkillName.text = _skillBase.Name;
                //冷却
                Tab_CoolDownTime _CDTimeInfo = TableManager.GetCoolDownTimeByID(_skillEx.CDTimeId, 0);
                if (_CDTimeInfo != null)
                {
                    int CDTime = _CDTimeInfo.CDTime / 1000;
                    m_InfoSkillCDTime.text = StrDictionary.GetClientDictionaryString("#{1794}", CDTime);
                }
                else
                {
                    m_InfoSkillCDTime.text = StrDictionary.GetClientDictionaryString("#{1793}");
                }
                //消耗
                string strDelInfo1 = StrDictionary.GetClientDictionaryString("#{1793}");
                string strDelInfo2 = StrDictionary.GetClientDictionaryString("#{1793}");
                SKILLDELANDGAINTYPE nType_1 = (SKILLDELANDGAINTYPE)_skillEx.GetDelTypebyIndex(0);
                if (nType_1 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
                {
                    strDelInfo1 = GetTypeDesc(nType_1, _skillEx.GetDelNumbyIndex(0));
                    m_InfoSkillDel.text = strDelInfo1;
                }
                SKILLDELANDGAINTYPE nType_2 = (SKILLDELANDGAINTYPE)_skillEx.GetDelTypebyIndex(1);
                if (nType_2 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
                {
                    strDelInfo2 = GetTypeDesc(nType_1, _skillEx.GetDelNumbyIndex(1));
                    m_InfoSkillDel.text = strDelInfo2;
                }
                if (nType_1 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID &&
                    nType_2 != SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
                {
                    m_InfoSkillDel.text = strDelInfo1 + "/" + strDelInfo2;
                }
                else if (nType_1 == SKILLDELANDGAINTYPE.HPTYPE_INVAILID &&
                         nType_2 == SKILLDELANDGAINTYPE.HPTYPE_INVAILID)
                {
                    m_InfoSkillDel.text = StrDictionary.GetClientDictionaryString("#{1793}");
                }
                //技能类型
                if (_skillBase.UseType == (int)SKILLUSETYPE.SHUNFA)
                {
                    m_InfoSkillType.text = StrDictionary.GetClientDictionaryString("#{1795}");
                }
                else if (_skillBase.UseType == (int)SKILLUSETYPE.YINCHANG)
                {
                    m_InfoSkillType.text = StrDictionary.GetClientDictionaryString("#{1796}");
                }
                else if (_skillBase.UseType == (int)SKILLUSETYPE.BEIDONG)
                {
                    m_InfoSkillType.text = StrDictionary.GetClientDictionaryString("#{3101}");
                }
                //技能描述 
                m_InfoSkillDec.text = _skillEx.SkillDesc;
                //可以激活的等级

                int preSkillId = -1;
                if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0)
                {
                    Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                    if (null != _mainPlayer)
                    {
                        preSkillId = _mainPlayer.GetPreSkillId(nSkillId);
                    }
                }

                //如果有前置技能，看前置技能的等级
                if (preSkillId != -1)
                {
                    nSkillId = preSkillId;
                }
                for (int i = 1; i <= TableManager.GetSkillActive().Count; i++)
                {
                    Tab_SkillActive _skillActiveInfo = TableManager.GetSkillActiveByID(i, 0);
                    if (_skillActiveInfo != null)
                    {
                        if (_skillActiveInfo.SkillId == nSkillId)
                        {
                            m_SkillLevel.text = String.Format("[FF0000]{0}", StrDictionary.GetClientDictionaryString("#{2770}", _skillActiveInfo.Level));
                            break;
                        }
                    }
                }

                //无技能升级信息
                //  m_SkillExp.text = Utils.ConvertLargeNumToString(PVPData.Power);
                m_LevelUpInfo.SetActive(false);
                //隐藏升级角标
                m_LevelBtTipsIcon.SetActive(false);
            }
        }
    }

    public static int GetCanLevUpSkillCount()
    {
        //已经学会的技能
        int nCanLevUpCount = 0;
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return 0;
        }
        for (int nIndex = 0; nIndex < _mainPlayer.OwnSkillInfo.Length; ++nIndex)
        {
            if (_mainPlayer.OwnSkillInfo[nIndex].IsValid())
            {
                if (IsCanLevelUpSkill(_mainPlayer.OwnSkillInfo[nIndex].SkillId) ||
                    IsCanLevelUpMasterSkill(_mainPlayer.OwnSkillInfo[nIndex].SkillId))
                {
                    nCanLevUpCount++;
                }
            }
        }
        return nCanLevUpCount;
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
        if (_skillLevUp.NextSkillId == -1 )
        {
            return false;
        }
        if (_skillLevUp.NeedItemId > 0 )
        {
            Games.Item.GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
            if (BackPack != null)
            {
               if(BackPack.GetItemCountByDataId(100001)<=0)
                   return false;
            }  
        }
        //金币不足
        int nCoin = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
        if (nCoin < _skillLevUp.NeedCoin)
        {
            return false;
        }
        return true;
    }
    public static bool IsCanLevelUpMasterSkill(int nCurSkillId)
    {
        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nCurSkillId, 0);
        if (_skillEx == null)
        {
            return false;
        }

        Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
        if (_skillBase == null)
        {
            return false;
        }

        //技能类型为师门技能
        if ((_skillBase.SkillClass & (int)SKILLCLASS.MASTERSKILL) == 0)
        {
            return false;
        }

        Tab_MasterSkill masterskill = TableManager.GetMasterSkillByID(nCurSkillId, 0);
        if (masterskill == null)
        {
            return false;
        }

        if (masterskill.NextSkillId == -1)
        {
            return false;
        }
        //个人薪火
        if (GameManager.gameManager.PlayerDataPool.TorchValue < masterskill.ConsumeNum)
        {
            return false;
        }
        //师门薪火
        if (GameManager.gameManager.PlayerDataPool.MasterInfo.MasterTorch < masterskill.MinMasterTorch)
        {
            return false;
        }
        //等级
        if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level < masterskill.MinLevel)
        {
            return false;
        }
        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer.MasterSkillCanUse(nCurSkillId) == false)
            {
                return false;
            }
        }

        return true;
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
    void ClickLevelUp()
    {
        // 新手指引
        if (m_NewPlayerGuide_Step == 2)
        {
            NewPlayerGuidLogic.CloseWindow();
            m_NewPlayerGuide_Step = -1;
        }

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        if (m_skillIdList == null || m_skillIdList.Length < CAN_LEVELUP_SKILL_COUNT || m_nSelectIndex < 0 || m_nSelectIndex >= CAN_LEVELUP_SKILL_COUNT)
        {
            return;
        }
        int nCurSelSkillId = m_skillIdList[m_nSelectIndex];
        m_nSelectSkillIndex = -1;
        for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
        {
            if (_mainPlayer.OwnSkillInfo[i].SkillId == nCurSelSkillId)
            {
                m_nSelectSkillIndex = i;
                break;
            }
        }

        //技能未学会就不升级了
        if (-1 == m_nSelectSkillIndex)
        {
            return;
        }

        if (IsCanLevelUpSkill(nCurSelSkillId) || IsCanLevelUpMasterSkill(nCurSelSkillId))
        {
            //发包
            CG_ASK_LEVELUPSKILL packet = (CG_ASK_LEVELUPSKILL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_LEVELUPSKILL);
            packet.SetSkillId(nCurSelSkillId);
            packet.SendPacket();
        }
    }

    void OnClickLevelUp2Max()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        if (m_skillIdList == null || m_skillIdList.Length < CAN_LEVELUP_SKILL_COUNT || m_nSelectIndex < 0 || m_nSelectIndex >= CAN_LEVELUP_SKILL_COUNT)
        {
            return;
        }
        int nCurSelSkillId = m_skillIdList[m_nSelectIndex];
        m_nSelectSkillIndex = -1;
        for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
        {
            if (_mainPlayer.OwnSkillInfo[i].SkillId == nCurSelSkillId)
            {
                m_nSelectSkillIndex = i;
                break;
            }
        }

        //技能未学会就不升级了
        if (-1 == m_nSelectSkillIndex)
        {
            return;
        }

        //计算当前技能升级可达的最大等级
        Tab_SkillLevelUp _SkillLevelUp = TableManager.GetSkillLevelUpByID(nCurSelSkillId, 0);
        if (_SkillLevelUp == null)
        {
            return;
        }

        //记录下上一个可升级技能
        Tab_SkillLevelUp _PreSkillLevelUp = _SkillLevelUp;
        //找到当前技能的下一个可升级的技能开始，依次往下找。
        Tab_SkillLevelUp _curSelSkillLevelUp = TableManager.GetSkillLevelUpByID(nCurSelSkillId, 0);
        int needConsume = _curSelSkillLevelUp.NeedConsume;
        int needCoin = _curSelSkillLevelUp.NeedCoin;
        bool isMoneyNotEnough = false;
        bool isMaxLevel = false;

        Tab_SkillLevelUp _moneyNotEnough = null;

        int noConsume = 0;
        int noCoin = 0;
        while (_curSelSkillLevelUp != null)
        {
            _PreSkillLevelUp = _curSelSkillLevelUp;

            //先看等级够不够
            if (_curSelSkillLevelUp.Level > _mainPlayer.BaseAttr.Level)
            {
                isMaxLevel = true;
                //金钱之前没有被暂停添加，看下本次金钱是否满足，否则，金钱就按暂停处计算
                if (!isMoneyNotEnough)
                {
                    needConsume -= _curSelSkillLevelUp.NeedConsume;
                    needCoin -= _curSelSkillLevelUp.NeedCoin;
                }
                //_curSelSkillLevelUp = _PreSkillLevelUp;
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
                isMaxLevel = true;
                _curSelSkillLevelUp = _PreSkillLevelUp;
                break;
            }
        }

        int maxLevel = _curSelSkillLevelUp.Level;
        int canLevele = _moneyNotEnough != null ? _moneyNotEnough.Level : maxLevel;
        //         needConsume -= _curSelSkillLevelUp.NeedConsume;
        //         needCoin -= _curSelSkillLevelUp.NeedCoin;
        if (isMoneyNotEnough)
        {
            LogModule.DebugLog("moneyNotEnough..............................");
            needConsume = noConsume;
            needCoin = noCoin;
        }
        else
        {
            LogModule.DebugLog("maxLevel.....................................");
            //             needConsume -= _curSelSkillLevelUp.NeedConsume;
            //             needCoin -= _curSelSkillLevelUp.NeedCoin;
        }

        LogModule.DebugLog("orgin ----  " + canLevele + " " + needConsume + " " + needCoin + " curPower" + PVPData.Power + " curCoin " + GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());

        //一级也不能升
        if (_curSelSkillLevelUp != null && _SkillLevelUp.Id == _curSelSkillLevelUp.Id)
        {
            return;
        }

        //至少升了一级但是是因为金钱不足停止的给出一个提示
        if (isMoneyNotEnough)
        {
            LogModule.DebugLog("monyeNotEnogh -----------------------------------");
            if (isMaxLevel)
            {
                LogModule.DebugLog("maxLevel-------------------------------");
            }
        }

        LogModule.DebugLog(canLevele + " " + needConsume + " " + needCoin + " curPower" + PVPData.Power + " curCoin " + GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin() + "maxLevel " + maxLevel);

        if (_curSelSkillLevelUp == null)
        {
            return;
        }

        Tab_SkillEx _levelUpEx = TableManager.GetSkillExByID(_curSelSkillLevelUp.Id, 0);
        if (_levelUpEx == null)
        {
            return;
        }
        string maxStr = canLevele == maxLevel ? StrDictionary.GetClientDictionaryString("#{10563}") : StrDictionary.GetClientDictionaryString("#{10564}", _levelUpEx.Level);

        int canSkilllevel = _levelUpEx.Level;
        if (_moneyNotEnough != null)
        {
            Tab_SkillEx _levelUpMoneyEx = TableManager.GetSkillExByID(_moneyNotEnough.Id, 0);
            if (_levelUpMoneyEx == null)
            {
                return;
            }
            canSkilllevel = _levelUpMoneyEx.Level < canSkilllevel ? _levelUpMoneyEx.Level : canSkilllevel;
        }
        string showInfo = StrDictionary.GetClientDictionaryString("#{10562}", canSkilllevel, maxStr);

        m_showOneKeyLevelUp.SetActive(true);
        m_showDetailLevelUp.text = showInfo;

        m_consumeCount.text = needConsume.ToString();
        m_coin.text = needCoin.ToString();

//         CG_SKILL_LEVELUP_TO_MAX packet = (CG_SKILL_LEVELUP_TO_MAX)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SKILL_LEVELUP_TO_MAX);
//         packet.SetSkillID(nCurSelSkillId);
//         packet.SetMaxLevel(canLevele);
//         packet.SetConsume(needConsume);
//         packet.SetCoin(needCoin);
        //this.CG_SKILL_LEVELUP_TO_MAX_Packet = packet;

    }


    public void onClickLevelUpDetail()
    {
//         if (this.CG_SKILL_LEVELUP_TO_MAX_Packet != null)
//         {
//             this.CG_SKILL_LEVELUP_TO_MAX_Packet.SendPacket();
//         }
//         m_showOneKeyLevelUp.SetActive(false);
    }

    public void OnClickCancel()
    {
        m_showOneKeyLevelUp.SetActive(false);
    }
    void ClickLeftSkillInfo()
    {
        m_NextSkillDec.SetActive(false);
        m_CurSkillDec.SetActive(true);
        m_LeftSkillDescBt.SetActive(false);
        m_RightSkillDescBt.SetActive(true);
    }
    void ClickRightSkillInfo()
    {
        m_CurSkillDec.SetActive(false);
        m_NextSkillDec.SetActive(true);
        m_LeftSkillDescBt.SetActive(true);
        m_RightSkillDescBt.SetActive(false);
    }

    void Check_NewPlayerGuide()
    {
        Debug.LogError("Check_NewPlayerGuide");
        if (MenuBarLogic.Instance() == null)
        {
            return;
        }
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 7)
        {
            NewPlayerGuide(2);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        switch (nIndex)
        {
            case 1:
                break;
            case 2:
                NewPlayerGuidLogic.OpenWindow(m_LevelUpBt.gameObject, 180, 70, "", "right", 0, true, true);
                break;
        }
        m_NewPlayerGuide_Step = nIndex;
    }

    void SkillLevelUpGuide()
    {
        if (m_NewPlayerGuide_Step != 1)
        {
            return;
        }

        if (m_SkillBtGird == null)
        {
            return;
        }

        Transform gObjTransform = m_SkillBtGird.transform.FindChild("1002");
        if (gObjTransform == null)
        {
            return;
        }
        SkillRootButtonItemLogic item = gObjTransform.GetComponent<SkillRootButtonItemLogic>();
        if (item)
        {
            NewPlayerGuidLogic.OpenWindow(item.gameObject, 300, 150, "", "right", 0, true, true);
        }
    }

    public void ClickButton(GameObject obj)
    {
        int curIndex = -1;
        if (int.TryParse(obj.name, out curIndex))
        {
        }
        else
        {
            return;
        }

        if (curIndex < 0 || curIndex >= CAN_LEVELUP_SKILL_COUNT)
        {
            return;
        }


        for (int i = 0; i < m_skillSelectBKList.Count; i++)
        {

            m_skillSelectBKList[i].spriteName = curIndex != i ? "jinengkuang" : "chongwujinengkuang";
            m_skillSelectBKList[i].MakePixelPerfect();
        }
        m_nSelectIndex = curIndex;


        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == _mainPlayer)
            return;

        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(m_skillIdList[curIndex], 0);
        if (_skillEx == null)
        {
            return;
        }
        Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
        if (null == _skillBase)
        {
            return;
        }

        if (_mainPlayer.IsStudySkill(m_skillIdList[curIndex]))
        {
            SkillRootLogic.Instance().ShowSkillInfo();
        }
        else //未学习的技能
        {
            SkillRootLogic.Instance().ShowNoStudySkillInfo(_skillEx.SkillExID);
        }

    }

    void OnClickSkillIntro()
    {
        if (m_skillIntroObj.gameObject.activeSelf)
        {
            m_skillIntroObj.SetActive(false);
        }
        else
        {
            m_skillIntroObj.SetActive(true);
        }
    }

    public void UpdateRedRemindPoint()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        for (int m_nSkillIndex = 0; m_nSkillIndex < _mainPlayer.OwnSkillInfo.Length; m_nSkillIndex++)
        {
            int nSkillId = _mainPlayer.OwnSkillInfo[m_nSkillIndex].SkillId;
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
            if (_skillEx != null)
            {
                Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                if (_skillBase != null)
                {
                    //是否要显示升级提醒的角标
                    if (SkillRootLogic.IsCanLevelUpSkill(nSkillId) ||
                        SkillRootLogic.IsCanLevelUpMasterSkill(nSkillId))
                    {
                        m_skillRedRemindPoint[m_nSkillIndex].gameObject.SetActive(true);
                    }
                    else
                    {
                        m_skillRedRemindPoint[m_nSkillIndex].gameObject.SetActive(false);
                    }
                }
            }

        }
    }
}
