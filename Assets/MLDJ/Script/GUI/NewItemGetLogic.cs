using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using Games.LogicObj;
using Games.UserCommonData;
using System.Collections.Generic;

public class NewItemGetLogic : UIControllerBase<NewItemGetLogic>
{
    public enum NEWITEMTYPE
    {
        TYPE_INVALID = -1,
        TYPE_SKILL = 0,
        TYPE_MENUBAR,
        TYPE_FUNCTION,
        TYPE_QINGGONG,
        TYPE_FELLOW3DSHOW,
    }
    private NEWITEMTYPE m_ItemType = NEWITEMTYPE.TYPE_INVALID;

    public UISprite m_ItemIcon;
    public TweenPosition m_ItemTween;
    public GameObject m_NoticeLabel;
    public UISprite m_SprTitle;
    public UILabel m_ItemName;

    private GameObject m_destGameObject;
    private int m_IntParam = GlobeVar.INVALID_ID;

    public int m_NewPlayerGuide_Step = 0;

    public UIAtlas SkillAtlas;
    public UIAtlas MainMenuBarAtlas;
    public UIAtlas MainUIAtlas;

    public UILabel m_NameLabel;
    public UILabel m_DescLabel;

    public UISprite m_AttachItemIcon;
    public TweenPosition m_AttachItemTween;
    public UILabel m_AttachNameLabel;
    public UILabel m_AttachDescLabel;

    public GameObject m_MainItem;
    public GameObject m_AttachItem;

    private bool m_NeedToShow = false;

    private bool hasAttachSkill = false;
    private const float m_continueShowTime = 20.0f;
    private static float m_firstShowTime = 0;

    void Awake()
    {
        SetInstance(this);
    }

    void Start()
    {
        m_AttachItem.SetActive(m_NeedToShow);
        m_firstShowTime = 0;
    }
    void OnDestroy()
    {
        m_bShow = false;
    }

    void Update()
    {
        if (m_bShow)
        {
            if (m_firstShowTime > m_continueShowTime)
            {
                m_firstShowTime = 0;
                if (SkillBarLogic.Instance() != null)
                SkillBarLogic.Instance().UpdateSkillBarInfo();
                UIManager.CloseUI(UIInfo.NewItemGetRoot);
                m_bShow = false;

				if(OpenServer.Instance())
					OpenServer.Instance().onClickOpenServer();
				UIManager.CloseUI(UIInfo.OpenServer);

            }
            else
            {
                m_firstShowTime += Time.deltaTime;
            }
        }
    }
    public class InitDataInfo
    {
        public InitDataInfo(string spriteName, GameObject destGameObject, NEWITEMTYPE type, int nNewSkillID, GameObject attachGameObject, string itemName, string strFuncName, string strDec)
        {
            _spriteName = spriteName;
            _destGameObject = destGameObject;
            _type = type;
            _nNewSkillID = nNewSkillID;
            _attachGameObject = attachGameObject;
            _ItemName = itemName;
            _strFuncName = strFuncName;
            _strDec = strDec;

        }
        public string _spriteName;
        public GameObject _destGameObject;
        public NEWITEMTYPE _type;
        public int _nNewSkillID;
        public GameObject _attachGameObject;
        public string _ItemName;
        public string _strFuncName; // 功能开启用
        public string _strDec;      // 功能开启用
    }

    public static List<InitDataInfo> m_ItemListBuffer = new List<InitDataInfo>();
    private static bool m_bShow = false;

    /// <summary>
    /// 
    /// </summary>
    /// <param name="spriteName"></param>
    /// <param name="destGameObject"></param>
    /// <param name="type"></param>
    /// <param name="nNewSkillID">可用做新手引导id</param>
    /// <param name="attachGameObject"></param>
    /// <param name="itemName"></param>
    /// <param name="strFuncName"></param>
    /// <param name="strDec"></param>
    public static void InitItemInfo(string spriteName, GameObject destGameObject, NEWITEMTYPE type, int nNewSkillID = GlobeVar.INVALID_ID, GameObject attachGameObject = null, string itemName = "", string strFuncName = "", string strDec = "")
    {
        InitDataInfo curInfo = new InitDataInfo(spriteName, destGameObject, type, nNewSkillID, attachGameObject, itemName, strFuncName, strDec);
        if (!m_bShow)
        {
            UIManager.ShowUI(UIInfo.NewItemGetRoot, OnLoadItemGetRoot, curInfo);
            m_bShow = true;
            m_firstShowTime = Time.realtimeSinceStartup;
        }
        else
        {
            m_ItemListBuffer.Add(curInfo);
        }
    }

    static void OnLoadItemGetRoot(bool bSuccess, object param)
    {
        // 异常 如果资源加载失败
        if (bSuccess == false)
        {
            InitDataInfo curInfo = param as InitDataInfo;
            if (curInfo == null)
            {
                return;
            }
            if (curInfo._type == NEWITEMTYPE.TYPE_SKILL)
            {
                if (SkillBarLogic.Instance() != null)
                {
                    SkillBarLogic.Instance().UpdateSkillBarInfo();

                    if (GameManager.gameManager.PlayerDataPool.ForthSkillFlag == true)
                    {
                        if (SkillBarLogic.Instance())
                        {
                            SkillBarLogic.Instance().NewPlayerGuide(4);
                        }
                    }
                }
            }
            else
            {
                if (curInfo._type == NEWITEMTYPE.TYPE_MENUBAR || curInfo._type == NEWITEMTYPE.TYPE_FELLOW3DSHOW)
                {
                    if (MenuBarLogic.Instance() != null)
                    {
                        MenuBarLogic.Instance().InitButtonActive();
                    }
                    if (PlayerFrameLogic.Instance() != null)
                    {
                        PlayerFrameLogic.Instance().AddRemindNum();
                    }
                }
                else if (curInfo._type == NEWITEMTYPE.TYPE_FUNCTION)
                {
                    if (FunctionButtonLogic.Instance() != null)
                    {
                        FunctionButtonLogic.Instance().InitButtonActive();
                        FunctionButtonLogic.Instance().PlayNewButtonEffect();
                    }
                }
            }
            return;
        }

        if (NewItemGetLogic.Instance() != null)
        {
            InitDataInfo curInfo = param as InitDataInfo;
            NewItemGetLogic.Instance().Init(curInfo._spriteName, curInfo._destGameObject, curInfo._type, curInfo._nNewSkillID,curInfo._attachGameObject, curInfo._ItemName, curInfo._strFuncName, curInfo._strDec);
            if (JoyStickLogic.Instance() != null)
            {
                ProcessInput.Instance().ReleaseTouch();
                JoyStickLogic.Instance().ReleaseJoyStick();
            }
        }
    }

    void Init(string spriteName, GameObject destGameObject, NEWITEMTYPE type, int IntParam = GlobeVar.INVALID_ID,GameObject attachGameObject = null,string itemName = "", string strFuncName = "", string strDec = "")
    {
		_forShowWin ();
        m_destGameObject = destGameObject;
        m_AttachItem.SetActive(false);
        hasAttachSkill = false;
        if (type == NEWITEMTYPE.TYPE_SKILL)
        {
            Dictionary<int, List<Tab_SkillActive>> dicTab_SkillActive = TableManager.GetSkillActive();

            foreach (KeyValuePair<int, List<Tab_SkillActive>> kv in dicTab_SkillActive)
            {
                Tab_SkillActive _skillActive = kv.Value[0];

                //有附带技能
                if (_skillActive.SkillId == IntParam && _skillActive.AttachSkillId != -1)
                {
                    m_AttachItem.SetActive(true);
                    m_NeedToShow = true;
                    m_AttachItemIcon.atlas = SkillAtlas;

                   
                    Tab_SkillEx _tabSkillEx = TableManager.GetSkillExByID(_skillActive.AttachSkillId, 0);
                    if (_tabSkillEx != null)
                    {
                        Tab_SkillBase _sttachSkillBase = TableManager.GetSkillBaseByID(_tabSkillEx.BaseId, 0);
                        if (_sttachSkillBase != null)
                        {
                            hasAttachSkill = true;
                            m_AttachItemIcon.spriteName = _sttachSkillBase.Icon;
                            m_AttachItemIcon.MakePixelPerfect();
                            m_AttachNameLabel.text = _sttachSkillBase.Name;
                            m_AttachDescLabel.text =   _tabSkillEx.SkillDesc;
                            m_AttachItemIcon.gameObject.transform.localScale =Vector3.one;
                        }
                    }
                }
            }

            if (hasAttachSkill)
                m_MainItem.transform.localPosition = new Vector3(12, -84, 0);

            m_ItemIcon.atlas = SkillAtlas;
            m_ItemIcon.spriteName = spriteName;
            //m_ItemIcon.MakePixelPerfect();
            m_SprTitle.spriteName = "Newjineng";// new skill

            Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(IntParam, 0);
            if (tabSkillEx != null)
            {
                Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(tabSkillEx.BaseId, 0);
                if (_skillBase != null)
                {
                    m_NameLabel.text = _skillBase.Name;
                    m_DescLabel.text = tabSkillEx.SkillDesc;
                    m_ItemIcon.gameObject.transform.localScale = Vector3.one;
                }
            }

           
        }
        else if (type == NEWITEMTYPE.TYPE_MENUBAR)
        {
            m_ItemIcon.atlas = MainMenuBarAtlas;
            m_ItemIcon.spriteName = spriteName;
            //m_ItemIcon.MakePixelPerfect();
            m_ItemIcon.gameObject.transform.localScale = Vector3.one;
            m_SprTitle.spriteName = "Newxitong";
            m_NameLabel.text = strFuncName;
            m_DescLabel.text = "      " + strDec;
            m_ItemName.text = itemName;
        }
        else if (type == NEWITEMTYPE.TYPE_FUNCTION)
        {
			if(IntParam == m_openServerId )
			{
				_hideShowWin();
				// 开服奖励的单独对待
                OpenServer.fakeId = 67;
                OpenServer.destroyCallBack = () =>
                {
                    if (FunctionButtonLogic.Instance() != null)
                    {
                        FunctionButtonLogic.Instance().ShowTweenPosition();
                    }
                };
                UIManager.ShowUI(UIInfo.OpenServer, (bSuccess, param) =>
                {
                    if (bSuccess && OpenServer.Instance() != null)
                    {
                        OpenServer.Instance().ShowRideDesc();
                    }
                });
			}
			else
			{
                m_ItemIcon.atlas = MainUIAtlas;
                m_ItemIcon.spriteName = spriteName;
                m_ItemIcon.gameObject.SetActive(!string.IsNullOrEmpty(spriteName));
				m_ItemIcon.MakePixelPerfect();
				m_ItemIcon.gameObject.transform.localScale = Vector3.one;
                m_SprTitle.spriteName = "Newxitong";
				m_NameLabel.text = strFuncName;
				m_DescLabel.text = "      " + strDec;
                m_ItemName.text = itemName;
			}
        }
        else if (type == NEWITEMTYPE.TYPE_QINGGONG)
        {
            m_ItemIcon.atlas = SkillAtlas;
            m_ItemIcon.spriteName = spriteName;
            m_ItemIcon.MakePixelPerfect();
            m_SprTitle.spriteName = "Newjineng";// new skill

            m_NameLabel.text = StrDictionary.GetClientDictionaryString("#{4584}");
            m_DescLabel.text = "      " + StrDictionary.GetClientDictionaryString("#{4586}");
            m_ItemIcon.gameObject.transform.localScale = 0.7f * Vector3.one;
        }
        else if (type == NEWITEMTYPE.TYPE_FELLOW3DSHOW)
        {
            _hideShowWin();
//            Transform parent = m_ItemIcon.transform.parent;
            m_ItemIcon.atlas = null;
            m_ItemIcon.transform.parent.FindChild("BGSprite").GetComponent<UISprite>().atlas = null;
            m_ItemIcon.transform.parent.FindChild("Sprite").GetComponent<UISprite>().atlas = null;
            OpenServer.fakeId = 79;
            OpenServer.destroyCallBack = () =>
            {
                NewItemOnClick();
            };
            UIManager.ShowUI(UIInfo.OpenServer, (bSuccess, param) =>
            {
                if (bSuccess && OpenServer.Instance() != null)
                {
                    OpenServer.Instance().ShowFellowDesc();
                }
            });
        }

        m_ItemTween.Reset();
        m_ItemTween.gameObject.SetActive(false);

        if (hasAttachSkill)
        {
            m_AttachItemTween.Reset();
            if(attachGameObject != null)
                m_AttachItemTween.to = m_AttachItemTween.gameObject.transform.parent.InverseTransformPoint(attachGameObject.transform.position);
        }
        
        m_ItemType = type;
        m_IntParam = IntParam;
    }

    void NewItemOnClick()
    {
		m_MainItem.SetActive (true);
		_NewItemOnClick ();
    }

    public void AfterTweenPosition()
    {
        if (m_ItemType == NEWITEMTYPE.TYPE_SKILL)
        {
            if (!hasAttachSkill)
            {
                if (SkillBarLogic.Instance() != null)
                {
                    if (GetItemListSkillCount() == 0)
                    {
                        //播放新技能特效
                        SkillBarLogic.Instance().SkillBtnShowEffect = SkillBarLogic.Instance().ShowSkillButtonEffect;
                        SkillBarLogic.Instance().PlayNewSkillEffect(m_destGameObject);

                        SkillBarLogic.Instance().UpdateSkillBarInfo();
                    }
                    if (m_NewPlayerGuide_Step != 0)
                    {
                        m_NewPlayerGuide_Step = 0;
                    }
                }
            }
        }
        else
        {
            if (m_ItemType == NEWITEMTYPE.TYPE_MENUBAR || m_ItemType == NEWITEMTYPE.TYPE_FELLOW3DSHOW)
            {
                if (MenuBarLogic.Instance() != null)
                {
                    MenuBarLogic.Instance().InitButtonActive();
                }
                if (PlayerFrameLogic.Instance() != null)
                {
                    PlayerFrameLogic.Instance().AddRemindNum();
                }
            }
            else if (m_ItemType == NEWITEMTYPE.TYPE_FUNCTION)
            {
                if (FunctionButtonLogic.Instance() != null)
                {
                    FunctionButtonLogic.Instance().InitButtonActive();
                    FunctionButtonLogic.Instance().PlayNewButtonEffect();
                }
            }
            MissionNewPlayerGuide(m_IntParam);
        }

        m_ItemTween.enabled = false;

        //如果有附带技能
        if (hasAttachSkill)
        {
            NewPlayerGuider(2);
        }
        else
        {
            m_AttachItemTween.enabled = false;
            if (m_ItemListBuffer.Count > 0)
            {
                InitDataInfo curInfo = m_ItemListBuffer[0];
                NewItemGetLogic.Instance().Init(curInfo._spriteName, curInfo._destGameObject, curInfo._type, curInfo._nNewSkillID, curInfo._attachGameObject, curInfo._ItemName, curInfo._strFuncName, curInfo._strDec);
                m_ItemListBuffer.RemoveAt(0);
            }
            else
            {
                UIManager.CloseUI(UIInfo.NewItemGetRoot);
                m_bShow = false;
            }
        }

    }

    int GetItemListSkillCount()
    {
        int nCount = 0;
        for (int i = 0; i < m_ItemListBuffer.Count; i++)
        {
            if (m_ItemListBuffer[i]._type == NEWITEMTYPE.TYPE_SKILL)
            {
                nCount += 1;
            }
        }
        return nCount;
    }

    public void NewPlayerGuider(int nIndex)
    {
        return;// 不再显示新手引导指示
//        m_NewPlayerGuide_Step = nIndex;
//
//        if (NewPlayerGuidLogic.IsOpenFlag == true)
//        {
//            NewPlayerGuidLogic.CloseWindow();
//        }
//        switch (nIndex)
//        {
//            case 1:
//                NewPlayerGuidLogic.OpenWindow_Circle(m_ItemIcon.gameObject, 120, "", "", 0, true);
//                break;
//            case 2: //附带技能
//                NewPlayerGuidLogic.OpenWindow_Circle(m_AttachItemIcon.gameObject, 120, "", "", 0, true);
//                break;
//            default:
//                break;
//        }
    }

    void MissionNewPlayerGuide(int nType)
    {
        bool bRet = false;
        switch (nType)
        {
            case (int)USER_COMMONFLAG.CF_FELLOWFUNCTION_OPENFLAG:
                {
                    bRet = GameManager.gameManager.MissionManager.IsHaveMission(14);
                    if (bRet)
                    {
                        NewPlayerGuide.NewPlayerGuideOpt("PlayerFrame", 2);
                    }
                }
                break;
            case (int)USER_COMMONFLAG.CF_BELLEFUNCTION_OPENFLAG:
                {
                    bRet = GameManager.gameManager.MissionManager.IsHaveMission(20);
                    if (bRet)
                    {
                        NewPlayerGuide.NewPlayerGuideOpt("PlayerFrame", 1);
                    }
                }
                break;
            case (int)USER_COMMONFLAG.CF_ACTIVITYFUNCTION_OPENFLAG:
                {
                    bRet = GameManager.gameManager.MissionManager.IsHaveMission(38);
                    if (bRet)
                    {
                        NewPlayerGuide.NewPlayerGuideOpt("FunctionButton", 2);
                    }
                }
                break;
            case (int)USER_COMMONFLAG.CF_STRENGTHENFUNCTION_OPENFLAG:
                {
                    bRet = GameManager.gameManager.MissionManager.IsHaveMission(43);
                    if (bRet)
                    {
                        NewPlayerGuide.NewPlayerGuideOpt("PlayerFrame", 0);
                    }
                }
                break;
            case (int)USER_COMMONFLAG.CF_RESTAURANTFUNCTION_OPENFLAG:
                {
                    bRet = GameManager.gameManager.MissionManager.IsHaveMission(167);
                    if (bRet)
                    {
                        NewPlayerGuide.NewPlayerGuideOpt("PlayerFrame", 5);
                    }
                }
                break;
            case (int)USER_COMMONFLAG.CF_GUILDFUNCTION_OPENFLAG:
                {
                    bRet = GameManager.gameManager.MissionManager.IsHaveMission(206);
                    if (bRet)
                    {
                        NewPlayerGuide.NewPlayerGuideOpt("PlayerFrame", 8);
                    }
                }
                break;
            case (int)USER_COMMONFLAG.CF_XIAKEFUNCTION_OPENFLAG:
                break;
            case (int)USER_COMMONFLAG.CF_JICHE_THESECONDDAY_OPENFLAG:
                {
                    bRet = GameManager.gameManager.MissionManager.IsHaveMission(1);
                    if (bRet)
                    {
                        NewPlayerGuide.NewPlayerGuideOpt("NewFunction", 16);
                    }
                }
                break;
            case (int)USER_COMMONFLAG.CF_GUAJI_FLAG:
                {
                    bRet = GameManager.gameManager.MissionManager.IsHaveMission(NewPlayerGuide.GUAJIMISSIONID);
                    if (bRet)
                    {
                        NewPlayerGuide.NewPlayerGuideOpt("FunctionButton", 1);
                    }
                }
                break;
            case (int)USER_COMMONFLAG.CF_OPEN_FLYWING:
                {
                    bRet = GameManager.gameManager.MissionManager.IsHaveMission(NewPlayerGuide.WINGMISSIONID);
                    if (bRet)
                    {
                        NewPlayerGuide.NewPlayerGuideOpt("PlayerFrame", 19);
                    }
                }
                break;
        }
    }
	//================================================
	public GameObject m_BGobj ;
	public int    m_openServerId = 52 ;

	private void _forShowWin()
	{
		m_MainItem.SetActive (true);
		m_ItemIcon.gameObject.SetActive(true);
		m_NoticeLabel.gameObject.SetActive(true);
		m_NameLabel.gameObject.SetActive(true);
		m_DescLabel.gameObject.SetActive(true);
		m_BGobj.SetActive (true);
	}
	private void _hideShowWin()
	{
		//m_ItemIcon.gameObject.SetActive(false);
		m_MainItem.SetActive (false);
		m_NoticeLabel.gameObject.SetActive(false);
		m_NameLabel.gameObject.SetActive(false);
		m_DescLabel.gameObject.SetActive(false);
		m_BGobj.SetActive (false);

		//m_ItemTween.from = new Vector3 (245,197,0);
	}
	private void _NewItemOnClick()
	{
        m_ItemTween.to = m_ItemTween.transform.parent.InverseTransformPoint(m_destGameObject.transform.position);
        m_ItemTween.gameObject.SetActive(true);
		m_ItemTween.Play();
		m_NoticeLabel.SetActive(false);
		if (m_NewPlayerGuide_Step == 1)
		{
			NewPlayerGuidLogic.CloseWindow();
			if (hasAttachSkill)
				NewPlayerGuider(2);
		}
		else if(m_NewPlayerGuide_Step == 2)
		{
			NewPlayerGuidLogic.CloseWindow();
			if (hasAttachSkill)
			{
				hasAttachSkill = false;
				m_AttachItemTween.Play();
			}
		}
	}
}