//********************************************************************
// 文件名: StoryDialogLogic.cs
// 描述: 剧情任务界面
// 作者: WangZhe
// 创建时间: 2013-11-14
//
// 修改历史:
// 2013-11-14 王喆创建 拆分prefab 分离UI逻辑
// 2015-03-21 陈惟楚修改，新增不影响操作的剧情对话，及剧情对话中摄像机动作
//********************************************************************

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Mission;
using Games.GlobeDefine;
using Games.LogicObj;
using System.Collections.Generic;
using Module.Log;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public class StoryDialogLogic : MonoBehaviour {

    private static StoryDialogLogic m_Instance = null;
    public static StoryDialogLogic Instance()
    {
        return m_Instance;
    }

    //剧情对话控件
    public GameObject m_StoryDialogRoot;
    public GameObject m_StoryDialogTop;
    public GameObject m_StoryDialogBottom;
    public GameObject m_StoryDialogAsync;
	public UISprite m_StoryDialogMovieUp;
    public UISprite m_StoryDialogMovieDn;

    public UISprite m_StoryDialogTopBG;             //顶部背景
    public UILabel m_StoryDialogTopLabel;           //顶部对话内容
    public UISprite m_StoryDialogTopRole;           //顶部人物头像
 
    public UISprite m_StoryDialogBottomBG;        //底部背景
	public UISprite m_StoryDialogBottomBG2;        //底部背景2
    public UILabel m_StoryDialogBottomLabel;      //底部对话内容
    public UITexture m_StoryDialogBottomRole;      //底部人物头像
    public UILabel m_SpeakerName;                  // 对话姓名
	public UILabel m_NextLabel;						// 新加的点击继续label
	public UISprite m_MingziBG;					// 名字背景图
    // 新增的异步对话的界面控件
    public UISprite m_StoryDialogAsyncBG;        // 背景
    public UILabel m_StoryDialogAsyncLabel;      // 对话内容
    public UISprite m_StoryDialogAsyncRole;      // 人物头像
    public UILabel m_AsyncSpeakerName;                  // 对话姓名

    // 新增加了异步对话，用这个字段区分现在是哪一种对话，0是大对话，1是小对话
    private static int m_nDialogType = 0;

	private bool m_bIsDefaultDialog = false;

    private TweenHeight m_cahcedMoveBgUpTweener = null;
    private TweenHeight m_cahcedMoveBgDownTweener = null;

    //挂机使用：对话的上次状态改变
    private bool m_IsLastDialogOpen = false;

	private static float m_fProtectTimer = 0;
    // 对话的内容
    private UILabel DialogLabel
    {
        get
        {
            if (m_nDialogType == 0)
            {
                return m_StoryDialogBottomLabel;
            }
            else if (m_nDialogType == 1)
            {
                return m_StoryDialogAsyncLabel;
            }
			else if (m_nDialogType == 2)
			{
				return m_StoryDialogAsyncLabel;
			}
			else if (m_nDialogType == 3)
			{
				return m_StoryDialogBottomLabel;
			}
            return null;
        }
        set
        {
            if (m_nDialogType == 0)
            {
                m_StoryDialogBottomLabel = value;
            }
            else if (m_nDialogType == 1)
            {
                m_StoryDialogAsyncLabel = value;
            }
			else if (m_nDialogType == 2)
			{
				m_StoryDialogAsyncLabel = value;
			}
			else if (m_nDialogType == 3)
			{
				m_StoryDialogBottomLabel = value;
			}
        }
    }

    // 人物头像
    private UITexture RoleHeadIcon
    {
        get
        {
            if (m_nDialogType == 0 || m_nDialogType == 3)
            {
                return m_StoryDialogBottomRole;
            }
//            else if (m_nDialogType == 1)
//            {
//                return m_StoryDialogAsyncRole;
//            }
            return null;
        }
        set
        {
            if (m_nDialogType == 0)
            {
                m_StoryDialogBottomRole = value;
            }
//            else if (m_nDialogType == 1)
//            {
//                m_StoryDialogAsyncRole = value;
//            }
        }
    }

    // 人物名称
    private UILabel SpeakerName
    {
        get
        {
            if (m_nDialogType == 0)
            {
                return m_SpeakerName;
            }
            else if (m_nDialogType == 1)
            {
                return m_AsyncSpeakerName;
            }
			else if (m_nDialogType == 2)
			{
				return m_AsyncSpeakerName;
			}
			else if (m_nDialogType == 3)
			{
				return m_SpeakerName;
			}
            return null;
        }
        set
        {
            if (m_nDialogType == 0)
            {
                m_SpeakerName = value;
            }
            else if (m_nDialogType == 1)
            {
                m_AsyncSpeakerName = value;
            }
			else if (m_nDialogType == 2)
			{
				m_AsyncSpeakerName = value;
			}
			else if (m_nDialogType == 3)
			{
				m_SpeakerName = value;
			}
        }
    }

    // 需要用0判断，居然不初始化为-1，我也真是服了
    private static int m_nClientStoryID = -1;            // 客户端剧情表ID
    private static int m_CurDialogIndex;             //当前任务剧情index

    private static Callback<bool> m_DialogEndCallback;        // 当前对话完成的回调


    private string[] m_MainPlayerHalfPic = { "KuangZhanNan", "ShuangJianNv", "GongJianNv", "MoDaoShi", "ShuangJianNv" };

    private bool m_bAniDialog = false;          // 是否在动态显示对话文字中
    private float m_fAniDialogTimer = 0;        // 对话文字显示计时器
    private string m_strAniDialog = "";         // 对话全部文字内容
    private int m_nAniDialogTextIndex = 0;      // 对话文字索引
    private bool m_bAniDialogTopUI = false;     // 是否在顶部UI显示 目前一直为false
    public float m_AniDialogTime = 0.05f;       // 文字显示时间间隔

    private float m_NextPageTimer = 0;      // 剧情翻页 关闭计时

    /// <summary>
    /// 这个接口改为只能CutSceneManager调用
    /// </summary>
    /// <param name="storyID"></param>
    /// <returns></returns>
    public static bool ShowStory(int clientStoryTableID, int dialogIndex, Callback<bool> dialogEndCallback, int dialogType)
    {
		if (clientStoryTableID == 121 || clientStoryTableID == 124)
			m_fProtectTimer = 1;
        m_nDialogType = dialogType;
		m_DialogEndCallback = dialogEndCallback;
		m_nClientStoryID = clientStoryTableID;
		m_CurDialogIndex = dialogIndex;
		if (m_Instance == null) {
			UIManager.ShowUI (UIInfo.StoryDialogRoot, OnShowStory, null);
		} else {
			OnShowStory (true, null);
		}
        return true;
    }

	public static bool ShowMissionStory (string missionContent, bool defaultDialog, bool bHaveNext)
	{
        List<object> param = new List<object>();
        param.Add(missionContent);
        param.Add(defaultDialog);
        param.Add(bHaveNext);
//		KeyValuePair<bool, string> para = new KeyValuePair<bool, string>(defaultDialog, missionContent);
        return UIManager.ShowUI(UIInfo.StoryDialogRoot, OnShowMission, param);
	}

    ///// <summary>
    ///// 播放不打断游戏流程的对话
    ///// </summary>
    ///// <param name="clientStoryTableID"></param>
    ///// <param name="storyEndCallback"></param>
    ///// <returns></returns>
    //public static bool ShowAsyncStory(int clientStoryTableID, Callback storyEndCallback)
    //{
    //    m_nDialogType = 1;
    //    m_StoryEndCallback = storyEndCallback;
    //    UIManager.ShowUI(UIInfo.StoryDialogRoot, OnShowStory, clientStoryTableID);
    //    return true;
    //}

    static void OnShowStory(bool bSuccess, object para)
	{
		if (!bSuccess) 
		{
			return;
		}
        if (m_nDialogType == 0)
        {
            m_Instance.m_StoryDialogBottom.SetActive(true);
//            m_Instance.m_StoryDialogAsync.SetActive(false);
//			m_Instance.m_StoryDialogMovieUp.SetActive(false);
//			m_Instance.m_StoryDialogMovieDn.SetActive(false);
        }
        else if (m_nDialogType == 1)
        {
//            m_Instance.m_StoryDialogBottom.SetActive(false);
            m_Instance.m_StoryDialogAsync.SetActive(true);
        }
        m_Instance.UpdateNextLabelShow(true);
        m_Instance.PlayStory();
    }

	static void OnShowMission (bool bSuccess, object para)
	{
		if (!bSuccess) return;

        List<object> initParams = para as List<object>;
        if (initParams.Count != 3)
        {
            return;
        }

        string missionContent = initParams[0] as string;
        bool defaultDialog = (bool)initParams[1];
        bool bHaveNext = (bool)initParams[2];

        m_Instance.ShowMissionUI(missionContent, defaultDialog);
		m_Instance.m_StoryDialogBottom.SetActive(true);
//		m_Instance.m_StoryDialogAsync.SetActive(false);
        m_Instance.UpdateNextLabelShow(bHaveNext);
	}
	
//	void Awake()
//    {
//        m_Instance = this;
//    }

	void OnEnable ()
    {
        if (!m_IsLastDialogOpen)
        {
            m_IsLastDialogOpen = true;
            Singleton<ObjManager>.GetInstance().MainPlayer.IsInDialog = true;
        }
		m_Instance = this;
		m_StoryDialogBottom.SetActive (false);
		m_StoryDialogTop.SetActive (false);
		m_StoryDialogAsync.SetActive (false);
		m_StoryDialogMovieDn.gameObject.SetActive (false);
		m_StoryDialogMovieUp.gameObject.SetActive (false);
		InitBackgroundWidth();
	}

	// Use this for initialization
	void Start () {
//		InitBackgroundWidth();
		DoAnimation ();
	}
	
	// Update is called once per frame
	void Update () {
		if (m_fProtectTimer > 0)
			m_fProtectTimer -= Time.deltaTime;
	    if (m_bAniDialog)
	    {
            UpdateAniDialog();
	    }	    
	}

    void FixedUpdate()
    {
		if (m_nClientStoryID >= 0)
		{
        	AutoNextStory();
		}
    }

	void OnDisable ()
	{
        if (m_IsLastDialogOpen)
        {
            m_IsLastDialogOpen = false;
            Singleton<ObjManager>.GetInstance().MainPlayer.IsInDialog = false;
        }
		m_Instance = null;
		m_StoryDialogBottom.SetActive (false);
		m_StoryDialogTop.SetActive (false);
		m_StoryDialogAsync.SetActive (false);
		m_StoryDialogMovieDn.gameObject.SetActive (false);
		m_StoryDialogMovieUp.gameObject.SetActive (false);
	}
//    void OnDestroy()
//    {
//        m_Instance = null;
//    }

	/// <summary>
	/// 初始化剧情对话UI 适应屏幕
	/// </summary>
	void InitStoryDialog()
	{
        CleanUp();
	}

//	void OnEnable()
//	{
//		//DoAnimation ();
//	}
    /// <summary>
    /// 对话结束
    /// </summary>
    private void DialogEnd(bool noMoreNext)
    {
        if (m_IsLastDialogOpen)
        {
            m_IsLastDialogOpen = false;
            Singleton<ObjManager>.GetInstance().MainPlayer.IsInDialog = false;
        }
        // 清理数据
        CleanUp();
        //UIManager.CloseUI(UIInfo.StoryDialogRoot);
		m_Instance.m_StoryDialogBottom.SetActive(false);
		m_Instance.m_StoryDialogAsync.SetActive(false);
		m_nClientStoryID = -1;

		if (m_DialogEndCallback != null)
        {
			m_DialogEndCallback(noMoreNext);
        }
    }

	// 清理数据
	void CleanUp()
	{
//        m_nClientStoryID = 0;
//		m_CurDialogIndex = 0;
        m_NextPageTimer = 0;
	}
    /// <summary>
    /// start Story
    /// </summary>
    void AutoBeginStory()
    {
        if (m_nClientStoryID >= 0 && m_CurDialogIndex >=0)
        {
            Tab_ClientStoryTable tab = TableManager.GetClientStoryTableByID(m_nClientStoryID, m_CurDialogIndex);
            if (tab != null)
            {
                ShowStoryUI(false, tab.SpriteName, StrDictionary.GetClientString_WithNameSex(tab.Story), tab.SpeakerID);
				DoAnimation();
            }
            else
            {
                DialogEnd(true);
            }
        }
    }

	/// <summary>
	/// 界面的点击相应函数
	/// </summary>
	void OnClickStoryDialog ()
	{
//		if (m_nDialogType == 2 || m_nDialogType == 3) return;
		//_onEndAnimation ();
		if (m_fProtectTimer > 0) return;
		ShowNextStory();
	}

    /// <summary>
    /// 显示对话
    /// </summary>
    void ShowNextStory()
    {
        if (m_bAniDialog)
        {
            // 如果动态对话未完全显示 那么本次点击只显示对话的全部内容 不进入下一句对话
            ShowAniDialogEnd();
			// 结束动画
			_onEndAnimation();
			return ;
        }
		else if (m_bIsDefaultDialog)
		{
			m_bIsDefaultDialog = false;
			UIManager.ShowAllUIExceptStory();
			DialogEnd(true);

			// 结束动画
			_onEndAnimation();
		}
        else
        {
            m_NextPageTimer = 0;
            m_CurDialogIndex++;
            AutoBeginStory();

			// 开启动画效果
			//DoAnimation ();
        } 
    }

    // 自动翻页
    void AutoNextStory()
    {
        if (false != m_bAniDialog)
        {
            return;
        }
		if (m_nClientStoryID >= 0)
		{
	        Tab_ClientStoryTable StoryItem = TableManager.GetClientStoryTableByID(m_nClientStoryID, m_CurDialogIndex);
	        if (null == StoryItem)
	        {
	            return;
	        }
			if (m_NextPageTimer > StoryItem.NextPageTime)
			{
				//ShowNextStory();
				StoryItem = TableManager.GetClientStoryTableByID(m_nClientStoryID, m_CurDialogIndex + 1);
				DialogEnd(null == StoryItem);
				return;
			}
			else
			{
				m_NextPageTimer += Time.deltaTime;
			}
		}
    }

	void ShowMissionUI (string missionContent, bool defaultDialog)
	{
		m_bIsDefaultDialog = defaultDialog;
		if (m_bIsDefaultDialog)
		{
			UIManager.HideAllUIExceptStory();
		}
        //LogModule.ErrorLog("________________________________ " + missionContent);
		m_StoryDialogBottomLabel.text = missionContent;
		Obj_NPC TargetNpc = Singleton<DialogCore>.GetInstance().CareNPC;
        if (TargetNpc == null)
        {
            return;
        }

        if (TargetNpc.ModelID < 0)
        {
            return;
        }

        Tab_RoleBaseAttr roleBase = TableManager.GetRoleBaseAttrByID(TargetNpc.BaseAttr.RoleBaseID, 0);
        if (roleBase == null)
        {
            return;
        }

        Tab_CharModel charModel = TableManager.GetCharModelByID(TargetNpc.ModelID, 0);
        if (null == charModel)
        {
            return;
        }

		if (m_SpeakerName && m_StoryDialogBottomRole)
        {
			m_SpeakerName.text = roleBase.Name;
			m_StoryDialogBottomRole.mainTexture = ResourceManager.LoadResource("Texture/MissionRole/" + charModel.NPCSpriteName, typeof(Texture)) as Texture;
        }
#if BOBJOYSTICK
//        RefreshJoyGUI(MissionUIType.TYPE_NONE);
#endif
	}

    /// <summary>
    /// 设置对话UI信息
    /// </summary>
    /// <param name="bTopUI">是否为顶部UI</param>
    /// <param name="strRolePicName">角色头像图片名</param>
    /// <param name="strDialog">对话内容</param>
    void ShowStoryUI(bool bTopUI, string strRolePicName, string strDialog, int nDataID)
    {
        //InitAniDialog(strDialog, bTopUI);
        // 暂时不手动设置altas
        if (bTopUI)
        {
            m_StoryDialogTop.SetActive(true);
            m_StoryDialogTopRole.spriteName = strRolePicName;
            // 对话内容交由动态显示设置
            // 又让改回去了
            m_StoryDialogTopLabel.text = strDialog;
        }
        else
        {
//            m_StoryDialogBottom.SetActive(true);
            // 对话内容交由动态显示设置
            // 又让改回去了
            DialogLabel.text = strDialog;
            //LogModule.ErrorLog("________________________ " + strDialog);
            if (-1 == nDataID)
            {
                string strSpeakerName = "";
                int nProfession = 0;

                if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
                {
                    strSpeakerName = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.RoleName;
                    nProfession = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
                }
                else
                {
                    strSpeakerName = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.RoleName;
                    nProfession = GameManager.gameManager.PlayerDataPool.EnterSceneCache.Profession;
                }

                SpeakerName.text = strSpeakerName;
                if (null != m_MainPlayerHalfPic[nProfession])
                {
                    //m_StoryDialogBottomRole.spriteName = m_MainPlayerHalfPic[nProfession];
					if (m_nDialogType == 0)
					{
                    	RoleHeadIcon.mainTexture = ResourceManager.LoadResource("Texture/MissionRole/" + m_MainPlayerHalfPic[nProfession], typeof(Texture)) as Texture; 
					}
					else if (m_nDialogType == 1)
					{
						m_StoryDialogAsyncRole.spriteName = strRolePicName;
					}
					else if (m_nDialogType == 3)
					{
						m_StoryDialogAsyncRole.spriteName = strRolePicName;
					}
					else if (m_nDialogType == 3)
					{
						RoleHeadIcon.mainTexture = ResourceManager.LoadResource("Texture/MissionRole/" + m_MainPlayerHalfPic[nProfession], typeof(Texture)) as Texture; 
					}
                }
            }
            else
            {
                Tab_RoleBaseAttr RoleBase = TableManager.GetRoleBaseAttrByID(nDataID, 0);
                if (RoleBase != null)
                {
                    SpeakerName.text = RoleBase.Name;
                }
                else
                    SpeakerName.text = "";

				if (m_nDialogType == 0)
				{
                	RoleHeadIcon.mainTexture = ResourceManager.LoadResource("Texture/MissionRole/" + strRolePicName, typeof(Texture)) as Texture; 
				}
				else if (m_nDialogType == 1)
				{
					m_StoryDialogAsyncRole.spriteName = strRolePicName;
				}
				else if (m_nDialogType == 2)
				{
					m_StoryDialogAsyncRole.spriteName = strRolePicName;
				}
				else if (m_nDialogType == 3)
				{
					RoleHeadIcon.mainTexture = ResourceManager.LoadResource("Texture/MissionRole/" + strRolePicName, typeof(Texture)) as Texture; 
				}
                //m_StoryDialogBottomRole.spriteName = strRolePicName;
            }
        }
    }

    // 播放剧情
    bool PlayStory()
    {
        InitStoryDialog();

        UIManager.ShowUI(UIInfo.StoryDialogRoot);
        AutoBeginStory();
        return true;
    }

    void InitBackgroundWidth()
    {
        /*// iphone5
        if (Screen.width % 1136 == 0)
        {
            m_StoryDialogTopBG.GetComponent<UIWidget>().width = 1346;
            m_StoryDialogBottomBG.GetComponent<UIWidget>().width = 1346;
        }
        // ipad
        else if (Screen.height % 768 == 0)
        {
            m_StoryDialogTopBG.GetComponent<UIWidget>().width = 1034;
            m_StoryDialogBottomBG.GetComponent<UIWidget>().width = 1034;
        }
        // iphone4
        else
        {
            m_StoryDialogTopBG.GetComponent<UIWidget>().width = 1032;
            m_StoryDialogBottomBG.GetComponent<UIWidget>().width = 1032;
        }*/
		
        int logicWidth = UIRootAdapter.GetLogicWidth();
        m_StoryDialogTopBG.GetComponent<UIWidget>().width = logicWidth;// +100;
		//UI修改，暂时删除自适应方案
		//m_StoryDialogBottomBG.GetComponent<UIWidget>().width = (int)(logicWidth * 0.8f);// +100;
		//m_StoryDialogBottomBG.transform.localPosition = new Vector3(-logicWidth * 0f,5f,0f);
		//if (m_StoryDialogBottomBG2) {
		//	m_StoryDialogBottomBG2.GetComponent<UIWidget> ().width = (int)(logicWidth);
		//	m_StoryDialogBottomBG2.transform.localPosition = new Vector3 (0, 61f, 0f);
		//}
        m_StoryDialogBottomRole.transform.localPosition = new Vector3(- logicWidth * 0.5f, -9, 0);
		m_RolePicPosition = m_StoryDialogBottomRole.transform.localPosition;

        //m_SpeakerName.transform.localPosition = new Vector3(165f - logicWidth * 0.5f, 21, 0);

		//m_StoryDialogBottomLabel.width = logicWidth - 496;
		//m_StoryDialogBottomLabel.height = 90;
		//m_StoryDialogBottomLabel.transform.localPosition = new Vector3(-(logicWidth * 0.5f - 327), 61);

		if (m_NextLabel) {
			m_NextLabel.transform.localPosition = new Vector3 (logicWidth * 0.5f - 80f, 23, 0);
		}

		//if (m_MingziBG) {
		//	m_MingziBG.transform.localPosition = new Vector3 (-logicWidth * 0.5f + 149f, 32, 0);
		//}
    }

    /// <summary>
    /// 初始化动态对话
    /// </summary>
    /// <param name="text">文字内容</param>
    /// <param name="bTopUI">是否在顶部显示 目前一直是false</param>
    void InitAniDialog(string text, bool bTopUI)
    {
        m_StoryDialogTopLabel.text = "";
        m_StoryDialogBottomLabel.text = "";
        m_StoryDialogAsyncLabel.text = "";
        m_strAniDialog = text;
        m_fAniDialogTimer = Time.fixedTime;
        m_nAniDialogTextIndex = 0;
        m_bAniDialogTopUI = bTopUI;
        m_bAniDialog = true;
    }

    void UpdateAniDialog()
    {
        if (Time.fixedTime - m_fAniDialogTimer > m_AniDialogTime)
        {
            m_fAniDialogTimer = Time.fixedTime;

            // 如果有颜色 需要先解析颜色
            if (m_strAniDialog[m_nAniDialogTextIndex] == '[')
            {
                string strColor = GetColorSymbols(ref m_nAniDialogTextIndex);
                if (m_bAniDialogTopUI)
                {
                    m_StoryDialogTopLabel.text += strColor;
                }
                else
                {
                    DialogLabel.text += strColor;
                }
            }
            
            // 显示下一文字
            if (m_bAniDialogTopUI)
            {
                m_StoryDialogTopLabel.text += m_strAniDialog[m_nAniDialogTextIndex];
            }
            else
            {
                DialogLabel.text += m_strAniDialog[m_nAniDialogTextIndex];
            }            

            if (m_nAniDialogTextIndex < m_strAniDialog.Length - 1)
            {
                m_nAniDialogTextIndex++;
            } 
            else
            {
                m_strAniDialog = "";
                m_nAniDialogTextIndex = 0;
                m_bAniDialogTopUI = false;
                m_bAniDialog = false;
            }
        }
    }

    string GetColorSymbols(ref int nBeginIndex)
    {
        string strColor = "";
        if (m_strAniDialog[nBeginIndex + 7] != ']')
        {
            return "";
        }

        for (int i = nBeginIndex; i < nBeginIndex + 8; i++)
        {
            strColor += m_strAniDialog[i];            
        }
        nBeginIndex = nBeginIndex + 8;
        return strColor;
    }

    void ShowAniDialogEnd()
    {
        if (m_bAniDialogTopUI)
        {
            m_StoryDialogTopLabel.text = m_strAniDialog;
        }
        else
        {
            //LogModule.ErrorLog("________________________ " + m_strAniDialog);
            DialogLabel.text = m_strAniDialog;
        }
        m_strAniDialog = "";
        m_nAniDialogTextIndex = 0;
        m_bAniDialogTopUI = false;
        m_bAniDialog = false;
    }

	[System.Obsolete("Use MovieUI instead")]
	public void ShowMovieUI ()
	{
//        m_StoryDialogBottom.SetActive(false);

        NGUITools.SetActive(m_StoryDialogMovieUp.cachedGameObject,true);
        NGUITools.SetActive(m_StoryDialogMovieDn.cachedGameObject,true);
	    if (m_cahcedMoveBgUpTweener == null)
	    {
	        m_cahcedMoveBgUpTweener = m_StoryDialogMovieUp.cachedGameObject.AddComponent<TweenHeight>();
	    }
	    if (m_cahcedMoveBgDownTweener == null)
	    {
            m_cahcedMoveBgDownTweener = m_StoryDialogMovieDn.cachedGameObject.AddComponent<TweenHeight>();
	    }
	    OperatorHeightTweener(m_cahcedMoveBgUpTweener, true);
        OperatorHeightTweener(m_cahcedMoveBgDownTweener, true);
	}

    private void OperatorHeightTweener(TweenHeight tweener,bool isFadeIn)
    {
        if (tweener == null)
        {
            return;
        }
        tweener.eventReceiver = null;
        tweener.callWhenFinished = "";
        tweener.Reset();
        if (isFadeIn)
        {
            tweener.from = 20;
            tweener.to = 100;
        }
        else
        {
            tweener.from = 100;
            tweener.to = 20;
            tweener.eventReceiver = gameObject;
            tweener.callWhenFinished = "OnFadeOutTweenerFinish";
        }
        tweener.duration = 0.5f;
        tweener.Play();     
    }

    private void OnFadeOutTweenerFinish(TweenHeight tweener)
    {
        if (tweener != null)
        {
            NGUITools.SetActive(tweener.gameObject,false);
        }
    }

	public void HideMovieUI ()
	{
        if (m_cahcedMoveBgUpTweener == null)
        {
            m_cahcedMoveBgUpTweener = m_StoryDialogMovieUp.cachedGameObject.AddComponent<TweenHeight>();
        }
        if (m_cahcedMoveBgDownTweener == null)
        {
            m_cahcedMoveBgDownTweener = m_StoryDialogMovieDn.cachedGameObject.AddComponent<TweenHeight>();
        }
        OperatorHeightTweener(m_cahcedMoveBgUpTweener, false);
        OperatorHeightTweener(m_cahcedMoveBgDownTweener, false);
        //NGUITools.SetActive(m_StoryDialogMovieUp.cachedGameObject, false);
        //NGUITools.SetActive(m_StoryDialogMovieDn.cachedGameObject, false);
	}

    /// <summary>
    /// 异步对话关闭按钮响应函数
    /// </summary>
    private void OnCloseButtonClicked()
    {
//        DialogEnd();
    }

    public void UpdateNextLabelShow(bool bShow)
    {
        m_NextLabel.gameObject.SetActive(bShow);
    }

	//==========================================================================
	private float m_AlphaFrom = 0.0f ;			// 渐变效果 开始数值
	private float m_AlphaTo     = 1.0f ;			// 渐变效果 结束数值
	private float m_AlphaDuration     = 0.5f ;  // 渐变效果 持续时间
	private float m_PositionTo = 10.0f ;					// 人物半身像 移动目标点
	private float m_PositionDuration = 0.5f  ;  // 人物半身像 移动持续时间

	private Vector3 m_RolePicPosition =  Vector3.zero ;


	public GameObject m_NpcNamePic ;
	bool isAddAnimation = false ;
	private List<TweenAlpha> m_TweenAlpha = new List<TweenAlpha>();
	private TweenPosition m_TweenPosition ;
	public void DoAnimation () 
	{
		if (isAddAnimation == false)
		{
			m_TweenAlpha.Clear();
			m_TweenAlpha.Add(gameObject.AddComponent<TweenAlpha>()) ;
			m_TweenAlpha.Add(m_StoryDialogBottomRole.gameObject.AddComponent<TweenAlpha>());
			m_TweenAlpha.Add(m_StoryDialogBottomLabel.gameObject.AddComponent<TweenAlpha>());
			m_TweenAlpha.Add(m_SpeakerName.gameObject.AddComponent<TweenAlpha>());
			m_TweenAlpha.Add(m_NpcNamePic.AddComponent<TweenAlpha>());

			//Vector3 tem = m_StoryDialogBottomRole.transform.localPosition; 
			m_TweenPosition = m_StoryDialogBottomRole.gameObject.AddComponent<TweenPosition>();
			isAddAnimation = true ;
		}

		if( m_RolePicPosition.x != 0)
			_onDoAnimation ();
	}

	private void  _onDoAnimation()
	{
		for (int i = 0; i < m_TweenAlpha.Count; ++i) 
		{
			m_TweenAlpha[i].enabled = true ;
			m_TweenAlpha[i].tweenGroup = 1;
			m_TweenAlpha[i].Reset();
			m_TweenAlpha[i].from = m_AlphaFrom ;
			m_TweenAlpha[i].to = m_AlphaTo ;
			m_TweenAlpha[i].duration = m_AlphaDuration ;
			m_TweenAlpha[i].Play();
		}

		m_TweenPosition.enabled = true;
		m_TweenPosition.Reset ();
		m_TweenPosition.from =  new Vector3 (m_RolePicPosition.x - m_PositionTo ,m_RolePicPosition.y,m_RolePicPosition.z);
		m_TweenPosition.to = m_RolePicPosition;
		m_TweenPosition.duration = m_PositionDuration ;
		m_TweenPosition.Play();
	}

	private void _onEndAnimation()
	{
		for (int i = 0; i < m_TweenAlpha.Count; ++i) 
		{
			m_TweenAlpha[i].duration = 0.0f ;
			 
		}
		m_TweenPosition.duration = 0.0f;
	}
}
