//********************************************************************
// 文件名: ChatInfoLogic.cs
// 描述: 聊天信息界面 从底部聊天按钮点开
// 作者: WangZhe
//********************************************************************

using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;
using Games.ChatHistory;
using Games.Item;
using GCGame.Table;
using GCGame;
using Module.Log;
using Google.ProtocolBuffers;
using System.Text;
using Games.Mission;
using Games.Fellow;

public class ChatInfoLogic : UIControllerBase<ChatInfoLogic>
{

    //系统>综合>世界>附近>公会>队伍>密聊>繁殖>师徒 (客户端频道顺序 八个)
    //好友代码保留，防止再改回来
    public enum CHANNEL_TYPE
    {
        CHANNEL_TYPE_INVALID = -1,
        CHAT_TYPE_SYSTEM = 0,                       // 系统频道
        CHAT_TYPE_VARIOUS ,                         // 综合频道
        CHAT_TYPE_WORLD ,                           // 世界频道
        CHAT_TYPE_NORMAL,                           // 附近频道
        CHAT_TYPE_GUILD,                            // 帮会频道	
        CHAT_TYPE_TEAM,		                        // 队伍频道
        CHAT_TYPE_TELL,                             // 密聊频道
        CHAT_TYPE_PROPAGATE,                        // 繁殖频道
        CHAT_TYPE_MASTER,                           // 师门频道
        CHAT_TYPE_FRIEND,                           // 好友频道
        CHAT_TYPE_NUM,
    }

    public enum LINK_TYPE
    {
        LINK_TYPE_INVALID1 = -1,
        LINK_TYPE_INVALID = 0,
        LINK_TYPE_ITEM = 1,        // 物品链接
        LINK_TYPE_EQUIP = 2,        // 装备链接
        LINK_TYPE_COPYTEAM = 3,		//副本组队
        LINK_TYPE_GUILD = 7,        // 帮会链接
        LINK_TYPE_PROPAGATE = 9,            //繁殖连接 
        LINK_TYPE_MISSION = 10,           //任务链接 
        LINK_TYPE_SUB_PROPAGATE = 11,           //繁殖子链接（用于显示自己能繁殖列表） 
        LINK_TYPE_PROPAGATE_ACCEPT = 12         //繁殖接收连接
    }

    // 链接移动方向 注意链接移动方向是与拖动条滚动方向相反的 拖动条向上 链接向下
    public enum EMOTIONLINK_MOVE_DIRECTION
    {
        EMOTIONLINK_MOVE_DOWN = -1,
        EMOTIONLINK_MOVE_UP = 1,
    }
    public GameObject m_ActivityValueTip;
    public UIGrid m_ChannelGrid;
    public List<GameObject> m_Channels = new List<GameObject>();    // 频道列表
    public GameUIInput m_Input;                                         // 输入框input脚本
    public GameChatInput m_GameChatInput;                           // 聊天输入 在NGUI自带的基础上修改
    public GameObject m_ChatInfoLinkRoot;                           // 聊天链接节点
    public GameObject m_EmotionRoot;
    public GameObject m_EmotionGrid;
    public GameObject m_EmotionItemRoot;
    public TweenPosition m_TouchKeyboardTween;
    public GameObject m_OpButtons;
    public GameObject m_ChatSetupRoot;
    public GameObject m_TellChatTitle;
    public UILabel m_TellPlayerNameLabel;
    public GameObject m_FastReplyButton;
    public GameObject m_FriendInformSprite;
    public GameObject m_TellInformSprite;
    public GameObject m_TeamInfoSprite;
    public ChatInfoSetupLogic m_ChatInfoSetupLogic;
    public LoudSpeakerLogic m_LoudSpeakerLogic;
    public LastSpeakerChatLogic m_LastSpeakerChatLogic;
    public FastReplyLogic m_FastReplyLogic;
    //public WSpeak m_WSpeak;
    public SpeechLogic m_SpeeachLogic;
    public GameObject m_VoiceTitle;
    public GameObject m_VIPIcon;
    public GameObject m_PlayVoiceChatBtn;
    public UIDraggablePanel uiDraggablePanel;
    public GameObject m_SetupObj;
    private CHANNEL_TYPE m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_WORLD; // 当前频道
    public CHANNEL_TYPE CurChannelType
    {
        get { return m_eCurChannelType; }
        set { m_eCurChannelType = value; }
    }

    private UInt64 m_TellChatReceiverGuid = GlobeVar.INVALID_GUID;      // 密聊对象GUID
    public UInt64 TellChatReceiverGuid
    {
        get { return m_TellChatReceiverGuid; }
    }

    private string m_TellChatReceiverName = "";
    public string TellChatReceiverName
    {
        get { return m_TellChatReceiverName; }
    }

    //密聊的输入内容
    private string m_tellChatInputValue = "";
    public string TellChatInputValue
    {
        get { return m_tellChatInputValue; }
    }
    private UInt64 m_FriendChatReceiverGuid = GlobeVar.INVALID_GUID;      // 好友聊天对象GUID
    public UInt64 FriendChatReceiverGuid
    {
        get { return m_FriendChatReceiverGuid; }
    }

    private string m_FriendChatReceiverName = "";
    public string FriendChatReceiverName
    {
        get { return m_FriendChatReceiverName; }
    }

    private LINK_TYPE m_eChatLinkType = LINK_TYPE.LINK_TYPE_INVALID;            // 本次输入的聊天链接类型
    public LINK_TYPE ChatLinkType
    {
        get { return m_eChatLinkType; }
    }

    private string m_LinkText = "";                                             // 链接文字内容

    private GameItem m_ItemBuffer = new GameItem();                             // 本次聊天链接物品缓存
    public GameItem ItemBuffer
    {
        get { return m_ItemBuffer; }
    }

    private GameItem m_EquipBuffer = new GameItem();                            // 本次聊天链接装备缓存
    public GameItem EquipBuffer
    {
        get { return m_EquipBuffer; }
    }

    private UInt64 m_guildIdBuffer = 0;                                        // 本次聊天帮会Id缓存
    public UInt64 GuildBuffer
    {
        get { return m_guildIdBuffer; }
    }

    private List<GameObject> m_LinkList = new List<GameObject>();               // 聊天栏中所有链接的list
    public List<GameObject> LinkList
    {
        get { return m_LinkList; }
    }

    private ChatLinkLogic.MissonLinkInfo m_missionBuffer = new ChatLinkLogic.MissonLinkInfo();
    public ChatLinkLogic.MissonLinkInfo MissionBuffer
    {
        get { return m_missionBuffer; }
    }

    private UInt64 m_guidFellow = 0;                                         //宠物guid
    public UInt64 GuidFellow
    {
        get { return m_guidFellow; }
    }
    // 用于标示玩家向上滚动聊天记录时 是否接收到新消息
    private bool m_WaitRefresh = false;
    public bool WaitRefresh
    {
        get { return m_WaitRefresh; }
        set { m_WaitRefresh = value; }
    }

    private UIFont m_Font;
    private float m_ChatTextHeight = 0;

    //static private string[] m_ChannelIconName = { "New_ZongHe_", "New_FuJin_", "New_MiLiao_", "New_DuiWu_", "New_BangHui_", "New_ShiJie_", "New_XiTong_" };
    private bool m_bKeyboardTweenOrigin = true;

    private List<UISprite> deletrans = new List<UISprite>();
    private const int MAX_TEXTNUM = 128;
    private const int EMOTIONITEM_WIDTH = 26;
    private float SPACE_WIDTH = 0;

    private Vector3 m_TouchVoiceChatPos = new Vector3(0, 0, 0);
    private bool m_ForceStopRecord = false;     // 是否因为超过6秒被强制打断
    private bool m_CanSendVoice = true;         // 是否可以发送语音 防止操作过快
    private int m_VoiceChatCountDown = 0;
    private bool m_bIsYaoHe = false;
    public bool IsYaoHe
    {
        get { return m_bIsYaoHe; }
        set { m_bIsYaoHe = value; }
    }

    //聊天信息显示
    public UILabel chatTextInfo;

    public UILabel m_Vitality;

    public UITable m_ChatInfoItemGrid; // 聊天item list
    public GameObject m_ChatInfoItem;
    //聊天item增初始化
    private static int m_CurChatInfoItemIndex = int.MaxValue;
    public static int CurChatInfoItemIndex
    {
        get { return m_CurChatInfoItemIndex; }
        set { m_CurChatInfoItemIndex = value; }
    }

    private static int ChatInfoItemMaxNum = 300;

    public TweenPosition m_setUpTween;
    private bool isOpenSetUp = true;

    public TweenPosition m_setUpBtnTween;
    private bool isOpenBtnSetup = true;

    //频道tabsprite文字
    private const string NORMAL_STR = "labanormal";
    private const string PRESSED_STR = "labalight";

    public string SelectFellowName = "";

    private const string TIME_STR = "00:0";
    private const int m_nStartTime = 6;
    public UILabel m_speechTime;
    private int m_nSpeechTime = 6;
    private float m_fUpdteTimes = 1;
    private bool m_isSpeech = false;
    public GameObject m_beginReordObj;
    public GameObject m_endRecordObj;
    void Awake()
    {
        SetInstance(this);
        if (m_Font == null)
        {
            m_Font = m_GameChatInput.textList.textLabel.font;
            m_ChatTextHeight = m_Font.CalculatePrintedSize(" ", true, UIFont.SymbolStyle.Uncolored).y;
            SPACE_WIDTH = m_Font.CalculatePrintedSize("　", true, UIFont.SymbolStyle.Uncolored).x;
        }

        isOpenSetUp = true;
        isOpenBtnSetup = true;
        //         chatItem.SetActive(chatTextInfo.text != null);

        // 
        //         chatItemPop.height = Mathf.CeilToInt(chatTextInfo.printedSize.y + 20);

        // InitEmotionButtons();
        Init();
    }

    // Use this for initialization
    void Start()
    {
        //Init();

    }

    void Update()
    {
        UpdateSpeechTime();
        UpdateSpeechPressState();
    }

    void UpdateSpeechTime()
    {
        if (!m_isSpeech)
        {
            return;
        }

        if (m_nSpeechTime < 0)
        {
            m_isSpeech = false;
            return;
        }

        if (m_fUpdteTimes >= 1)
        {
            m_fUpdteTimes = 0;
            m_speechTime.text = TIME_STR + m_nSpeechTime--;
        }

        m_fUpdteTimes += Time.deltaTime;
    }
    void SetData()
    {
        // chatItem.SetActive(chatTextInfo.text != null);

        //  chatItemPop.height = Mathf.CeilToInt(chatTextInfo.printedSize.y + 20);
    }
    void OnEnable()
    {
        Init();
        InvokeRepeating("SlowUpdate", 0, 0.3f); 
    }

    void OnDisable()
    {
        HideKeyboard();
        ClearData();
        SetInstance(null);
        m_ChatInfoSetupLogic.OnCloseChat();
        m_FastReplyLogic.OnCloseChat();
        CancelInvoke("SlowUpdate");
    }

    public void OnTweenPositionOver()
    {
        if (!isOpenSetUp)
        {
            m_SetupObj.SetActive(false);
        }
        isOpenSetUp = !isOpenSetUp;
    }

    public void OnSetUpBtnTweenPositionOver()
    {
        isOpenBtnSetup = !isOpenBtnSetup;
    }

    public void RefreshVitaliy()
    {
        m_Vitality.text = GameManager.gameManager.PlayerDataPool.VitalityData.Vitality.ToString();
    }

    void Init()
    {
        SetInstance(this);

        m_Input.defaultText = StrDictionary.GetClientDictionaryString("#{4350}");
        string strChatEditInput = GameManager.gameManager.PlayerDataPool.ChatEditInput;
        if (strChatEditInput != "")
        {
            m_Input.value = strChatEditInput;
        }
        m_ChatInfoSetupLogic.Init();
        m_FastReplyLogic.Init();

        //设置节点默认隐藏
        m_ChatSetupRoot.SetActive(false);

        m_OpButtons.SetActive(true);
        m_eCurChannelType = GameManager.gameManager.PlayerDataPool.ChooseChannel;

        RefreshVitaliy();

        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL)
        {
            m_TellChatReceiverGuid = GameManager.gameManager.PlayerDataPool.LastTellGUID;
            m_TellChatReceiverName = GameManager.gameManager.PlayerDataPool.LastTellName;
        }
        else
        {
            m_TellChatReceiverGuid = GlobeVar.INVALID_GUID;
            m_TellChatReceiverName = "";
            if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_SYSTEM || m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_VARIOUS)
            {
                m_OpButtons.SetActive(false);
                m_Input.enabled = false;
            }
            else
            {
                m_OpButtons.SetActive(true);
                m_Input.enabled = true;
            }
        }
        m_EmotionRoot.SetActive(false);
        UpdateChannelState();
        UpdateChannelHistory();
        UpdateChatFrameInformSprite();

        UpdateTeamGuildMasterChannel();

        UpdateFriendInformSprite();
        UpdateTellInformSprite();
        UpdateTeamInfoSprite();
        m_LastSpeakerChatLogic.gameObject.SetActive(false);

        ChatInfoSelectLinkLogic.M_OPEN_TYPE = ChatInfoSelectLinkLogic.OPEN_TYPE.NORMAL;
        SelectFellowName = "";
        m_nSpeechTime = m_nStartTime;
        m_isSpeech = false;

#if !UNITY_EDITOR && UNITY_IPHONE
        InitTouchKeyboardTween();
#endif
    }

    void ClearData()
    {
        m_GameChatInput.ClearChatHistory();
        m_Input.value = "";
        Utils.CleanGrid(m_ChatInfoLinkRoot);
        Utils.CleanGrid(m_EmotionItemRoot);

        if (null != m_ChatInfoItemGrid)
            Utils.CleanGrid(m_ChatInfoItemGrid.gameObject);
        m_EmotionRoot.SetActive(false);
        if (m_TouchKeyboardTween.tweenFactor == 1)
        {
            m_TouchKeyboardTween.Reset();
        }

        UIPlayTween[] playArray = m_FastReplyButton.GetComponents<UIPlayTween>();
        for (int i = 0; i < playArray.Length; i++)
        {
            if (playArray[i] != null)
            {
                UITweener tween = playArray[i].tweenTarget.GetComponent<UITweener>();
                if (tween != null && tween.tweenFactor == 1)
                {
                    tween.Reset();
                }
            }
        }

        m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_WORLD;
        m_TellChatReceiverGuid = GlobeVar.INVALID_GUID;
        m_TellChatReceiverName = "";
        m_FriendChatReceiverGuid = GlobeVar.INVALID_GUID;
        m_FriendChatReceiverName = "";
        ClearLinkBuffer();
        if (m_LinkList != null)
        {
            m_LinkList.Clear();
        }
        m_bKeyboardTweenOrigin = true;
        m_WaitRefresh = false;

        m_ForceStopRecord = false;
        m_CanSendVoice = true;
        m_VoiceChatCountDown = 0;
    }

    public void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.ChatInfoRoot);
        if (ChatFrameLogic.Instance() != null)
        {
            ChatFrameLogic.Instance().InitCurChat();
        }
    }

    /// <summary>
    /// 打开聊天窗口时 用playerdata中的数据初始化聊天记录和左侧发言玩家列表
    /// </summary>
    public void InitChatInfo()
    {
        //         Utils.CleanGrid(m_ChatInfoLinkRoot);
        //         Utils.CleanGrid(m_EmotionItemRoot);
        Utils.CleanGrid(m_ChatInfoItemGrid.gameObject);
        m_GameChatInput.ClearChatHistory();
        for (int j = 0; j < GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList.Count; ++j)
        {
            HandleChatHistory(GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList[j]);
        }
    }

    /// <summary>
    /// 所有频道gameobject合法验证
    /// </summary>
    /// <returns></returns>
    bool IsAllChannelValid()
    {
        for (int i = 0; i < (int)CHANNEL_TYPE.CHAT_TYPE_NUM; i++)
        {
            if (m_Channels[i] == null)
            {
                return false;
            }
        }
        return true;
    }

    /// <summary>
    /// 切换频道点击响应事件
    /// </summary>
    /// <param name="value">按钮名</param>
    void ChangeChannel(GameObject value)
    {
        if (IsAllChannelValid() && m_Input != null)
        {
            if (value == m_Channels[(int)m_eCurChannelType])
            {
              return;
            }
            if (uiDraggablePanel != null) {
              uiDraggablePanel.DisableSpring();
            }
            if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_TELL].name)
            {
                m_OpButtons.SetActive(true);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_TELL;
                m_Input.enabled = true;
                m_Input.value = "";
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHAT_TYPE_TELL; 
            }
            else if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_NORMAL].name)
            {
                m_OpButtons.SetActive(true);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_NORMAL;
                m_Input.enabled = true;
                m_Input.value = "";
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHANNEL_TYPE_INVALID; 
            }
            else if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_TEAM].name)
            {
                m_OpButtons.SetActive(true);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_TEAM;
                m_Input.enabled = true;
                m_Input.value = "";
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHAT_TYPE_TEAM; 
            }
            else if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_GUILD].name)
            {
                m_OpButtons.SetActive(true);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_GUILD;
                m_Input.enabled = true;
                m_Input.value = "";
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHAT_TYPE_GUILD;
            }
            else if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_MASTER].name)
            {
                m_OpButtons.SetActive(true);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_MASTER;
                m_Input.enabled = true;
                m_Input.value = "";
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHANNEL_TYPE_INVALID; 
            }
            else if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_WORLD].name)
            {
                m_OpButtons.SetActive(true);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_WORLD;
                m_Input.enabled = true;
                m_Input.value = "";
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHAT_TYPE_WORLD;
            }
            else if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_SYSTEM].name)
            {
                m_OpButtons.SetActive(false);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_SYSTEM;
                m_Input.enabled = false;
                m_Input.value = "";
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHANNEL_TYPE_INVALID; 
            }
            else if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_FRIEND].name)
            {
                m_OpButtons.SetActive(true);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_FRIEND;
                m_Input.enabled = true;
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHANNEL_TYPE_INVALID; 
            }
            else if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_VARIOUS].name)
            {
                m_OpButtons.SetActive(false);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_VARIOUS;
                m_Input.enabled = false;
                m_Input.value = "";
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHANNEL_TYPE_INVALID; 
            }
            else if (value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_PROPAGATE].name)
            {
                m_OpButtons.SetActive(true);
                m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_PROPAGATE;
                m_Input.enabled = true;
                m_Input.value = "";
                ChatFrameLogic.CurChannelType = CHANNEL_TYPE.CHANNEL_TYPE_INVALID; 
            }
            m_ChatSetupRoot.SetActive(value.name == m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_VARIOUS].name);
            GameManager.gameManager.PlayerDataPool.ChooseChannel = m_eCurChannelType;
            if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL)
            {
                GameManager.gameManager.PlayerDataPool.LastTellGUID = m_TellChatReceiverGuid;
                GameManager.gameManager.PlayerDataPool.LastTellName = m_TellChatReceiverName;
            }
            else
            {
                GameManager.gameManager.PlayerDataPool.LastTellGUID = GlobeVar.INVALID_GUID;
                GameManager.gameManager.PlayerDataPool.LastTellName = "";
            }
            UpdateChannelState();
            UpdateChannelHistory();
            UpdateChatFrameInformSprite();
            if (m_LastSpeakerChatLogic != null)
            {
                m_LastSpeakerChatLogic.UpdateSpeakers();
                if (m_LastSpeakerChatLogic.m_ButtonMenu.activeSelf)
                {
                    m_LastSpeakerChatLogic.m_ButtonMenu.SetActive(false);
                }
            }
        }
    }

    /// <summary>
    /// 改变到密聊频道
    /// </summary>
    public void ChangeTellChannel()
    {
        GameObject obj = new GameObject();
        obj.name = m_Channels[(int)CHANNEL_TYPE.CHAT_TYPE_TELL].name; 
        ChangeChannel(obj);
    }
    /// <summary>
    /// 更新频道状态 换aprite
    /// </summary>
    void UpdateChannelState()
    {
        if (IsAllChannelValid())
        {
            for (int i = 0; i < (int)CHANNEL_TYPE.CHAT_TYPE_NUM; i++)
            {
                if (i == (int)m_eCurChannelType)
                {
                    UIImageButton imagebutton = m_Channels[i].GetComponent<UIImageButton>();
                    imagebutton.normalSprite = PRESSED_STR;
                    imagebutton.hoverSprite = PRESSED_STR;
                    imagebutton.pressedSprite = NORMAL_STR;
                    imagebutton.disabledSprite = PRESSED_STR;
                    imagebutton.target.spriteName = PRESSED_STR;
                    imagebutton.target.MakePixelPerfect();
                }
                else
                {
                    UIImageButton imagebutton = m_Channels[i].GetComponent<UIImageButton>();
                    imagebutton.normalSprite = NORMAL_STR;
                    imagebutton.hoverSprite = NORMAL_STR;
                    imagebutton.pressedSprite = PRESSED_STR;
                    imagebutton.disabledSprite = NORMAL_STR;
                    imagebutton.target.spriteName = NORMAL_STR;
                    imagebutton.target.MakePixelPerfect();
                }
            }
        }
    }

    /// <summary>
    /// 获取当前频道 把CHANNEL_TYPE转化为CG_CHAT.CHATTYPE返回
    /// </summary>
    /// <returns></returns>
    public int GetCurChannelType()
    {
        int nChannel = -1;
        if (IsAllChannelValid())
        {
            switch (m_eCurChannelType)
            {
                case CHANNEL_TYPE.CHAT_TYPE_NORMAL:
                    {
                        nChannel = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_NORMAL;
                    }
                    break;
                case CHANNEL_TYPE.CHAT_TYPE_TELL:
                    {
                        nChannel = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_TELL;
                    }
                    break;
                case CHANNEL_TYPE.CHAT_TYPE_TEAM:
                    {
                        nChannel = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_TEAM;
                    }
                    break;
                case CHANNEL_TYPE.CHAT_TYPE_GUILD:
                    {
                        nChannel = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_GUILD;
                    }
                    break;
                case CHANNEL_TYPE.CHAT_TYPE_MASTER:
                    {
                        nChannel = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_MASTER;
                    }
                    break;
                case CHANNEL_TYPE.CHAT_TYPE_WORLD:
                    {
                        nChannel = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_WORLD;
                    }
                    break;
                case CHANNEL_TYPE.CHAT_TYPE_SYSTEM:
                    {
                        // 正常逻辑不可能进入
                    }
                    break;
                case CHANNEL_TYPE.CHAT_TYPE_FRIEND:
                    {
                        nChannel = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_FRIEND;
                    }
                    break;
                case CHANNEL_TYPE.CHAT_TYPE_VARIOUS:
                    {
                        nChannel = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_VARIOUS;
                    }
                    break;
                case CHANNEL_TYPE.CHAT_TYPE_PROPAGATE:
                    {
                        nChannel = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_PROPAGATE;
                    }
                    break;
                default:
                    break;
            }
        }
        return nChannel;
    }

    /// <summary>
    /// 点击提交
    /// </summary>
    public void OnSubmitClick()
    {
        if (Utils.GetStrTextNum(m_Input.value) > MAX_TEXTNUM)
        {
            GUIData.AddNotifyData2Client(false, "#{4760}");
            return;
        }

        m_GameChatInput.OnSubmit();
        if (m_EmotionRoot.activeSelf)
        {
            m_EmotionRoot.SetActive(false);
        }
        if (m_ChatSetupRoot.activeSelf)
        {
            m_ChatSetupRoot.SetActive(false);
        }
#if !UNITY_EDITOR && UNITY_IPHONE
        ChatInfoGoBack();
#endif
        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL) {
          m_Input.value = "/" + TellChatReceiverName + " ";
        }
    }

    /// <summary>
    /// 打开状态下收到聊天信息
    /// </summary>
    /// <param name="pak"></param>
    public void OnReceiveChat()
    {
        // 采用最新一条聊天记录
        int HistoryCount = GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList.Count;
        ChatHistoryItem LastHistory = GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList[HistoryCount - 1];
        HandleChatHistory(LastHistory);
        //    SetData(LastHistory);
        if (LastHistory.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_LOUDSPEAKER)
        {
            m_LoudSpeakerLogic.OnReceiveLoudSpeaker();
        }

        UpdateFriendInformSprite();
        if (m_ChatInfoItemGrid.gameObject.GetComponentsInChildren<ChatInfoItemLogic>().Length >= ChatInfoItemMaxNum)
        {
            InitChatInfo();
        }
    }

    /// <summary>
    /// 更新频道聊天记录 在切换频道时用
    /// </summary>
    public void UpdateChannelHistory()
    {
        m_GameChatInput.ClearChatHistory();
        for (int i = 0; i < m_LinkList.Count; ++i)
        {
            if (null != m_LinkList[i])
            {
                Destroy(m_LinkList[i]);
            }
        }
        m_LinkList.Clear();

        //         UISprite[] spriteArray = m_EmotionItemRoot.GetComponentsInChildren<UISprite>();
        //         for (int i = 0; i < spriteArray.Length; i++)
        //         {
        //             Destroy(spriteArray[i].gameObject);
        //         }
        Utils.CleanGrid(m_ChatInfoItemGrid.gameObject);
        deletrans.Clear();
      //  LogModule.DebugLog("GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList.Count " + GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList.Count);

		for (int j = 0; j < GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList.Count; ++j)
        {
//             LogModule.DebugLog(j + " " + GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList[j].StrData.Count + 
// 			          " " + GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList[j].IntData.Count);
            HandleChatHistory(GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList[j]);
        }
    }

    /// <summary>
    /// 插入物品链接
    /// </summary>
    /// <param name="item">物品结构</param>
    public void InsertItemLinkText(GameItem item)
    {
        ClearLinkBuffer();
        m_ItemBuffer = item;
        m_eChatLinkType = LINK_TYPE.LINK_TYPE_ITEM;
        m_LinkText = "[" + TableManager.GetCommonItemByID(m_ItemBuffer.DataID, 0).Name + "]";
        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL) {
          m_Input.value = string.Format("{0}{1}{2}", "/" + TellChatReceiverName + " ", m_LinkText, ShareTargetChooseLogic.AdditionShareMsg);
        } else {
          m_Input.value = string.Format("{0}{1}", m_LinkText, ShareTargetChooseLogic.AdditionShareMsg);
        }
        m_bIsYaoHe = ShareTargetChooseLogic.IsYaoHe;
    }

    /// <summary>
    /// 插入装备链接
    /// </summary>
    /// <param name="equip">装备物品结构</param>
    public void InsertEquipLinkText(GameItem equip)
    {
        ClearLinkBuffer();
        m_EquipBuffer = equip;
        m_eChatLinkType = LINK_TYPE.LINK_TYPE_EQUIP;
        m_LinkText = "[" + TableManager.GetCommonItemByID(m_EquipBuffer.DataID, 0).Name + "]";
        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL) {
          m_Input.value = string.Format("{0}{1}{2}", "/" + TellChatReceiverName + " ", m_LinkText, ShareTargetChooseLogic.AdditionShareMsg);
        } else {
          m_Input.value = string.Format("{0}{1}", m_LinkText, ShareTargetChooseLogic.AdditionShareMsg);
        }
        m_bIsYaoHe = ShareTargetChooseLogic.IsYaoHe;
    }

    /// <summary>
    /// 插入任务链接数据
    /// </summary>
    /// <param name="missionId"></param>
    public void InsertMissionLinkText(int nMissionID)
    {
        ClearLinkBuffer();
        Tab_MissionDictionary MissionDic = TableManager.GetMissionDictionaryByID(nMissionID, 0);
        if (MissionDic == null)
        {
            LogModule.ErrorLog("Can not find missionDictionary {0}", nMissionID);
            return;
        }
        byte yMissionQuality = GameManager.gameManager.MissionManager.GetMissionQuality(nMissionID);
        string strMissionColor = MissionDialogAndLeftTabsLogic.GetColorByQuality(yMissionQuality);

        //服务器计算连接发送的int数据的时候会判断该值是否等于-1，所以这里默认值设为-2，防止服务器误判        
        if (nMissionID == -1)
        {
            nMissionID = -2;
        } 

        //发送给服务器的链接携带的数据
        m_missionBuffer.missionId = nMissionID;
        m_missionBuffer.missionDesc = "";

        //服务器计算连接发送的int数据的时候会判断该值是否等于-1，所以这里默认值设为-2，防止服务器误判
        m_missionBuffer.missionAwardId = -2;
        m_missionBuffer.missionName = "";

        m_missionBuffer.missionName = string.Format(MissionDic.MissionName, strMissionColor, "[ffe6b4]");
        m_missionBuffer.missionDesc = "[ffe6b4]" + string.Format(MissionDic.FollowText, "[fe3737]", "0");

        if (nMissionID == GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentMissionID)
            m_missionBuffer.missionAwardId = GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentSpecialAwardItemID();

        MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(nMissionID);
        if (MissionState.Mission_Completed == misState)
        {
            m_missionBuffer.missionName = string.Format(MissionDic.MissionName, "[1fff1f]", "[1fff1f]");

            int nParam = GameManager.gameManager.MissionManager.GetMissionParam(nMissionID, 0);
            m_missionBuffer.missionDesc = "[1fff1f]" + string.Format(MissionDic.FollowText, "[1fff1f]", nParam);

            if (nMissionID == GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentMissionID)
                m_missionBuffer.missionAwardId = GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentSpecialAwardItemID();
        }
        else
        {
            string StrMissionTile = MissionDic.MissionName;
            if (MissionState.Mission_Failed == misState)
            {
                StrMissionTile = "[fe3737]" + StrDictionary.GetClientDictionaryString("#{1362}") + StrMissionTile;
            }
            m_missionBuffer.missionName = string.Format(StrMissionTile, strMissionColor, "[ffe6b4]");
            if (nMissionID == GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentMissionID)
                m_missionBuffer.missionAwardId = GameManager.gameManager.MissionManager.PaoHuanInfo.CurrentSpecialAwardItemID();

            int nParam = GameManager.gameManager.MissionManager.GetMissionParam(nMissionID, 0);
            if (nParam != 0)
            {
                m_missionBuffer.missionDesc = "[ffe6b4]" + string.Format(MissionDic.FollowText, "[fe3737]", nParam);
            }

        }


        m_eChatLinkType = LINK_TYPE.LINK_TYPE_MISSION;
        //m_LinkText = "[xxxxxxx]";
        m_LinkText = "[" + string.Format(MissionDic.MissionName, "", "") +"]";
        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL) {
          m_Input.value = "/" + TellChatReceiverName + " " + m_LinkText;
        } else {
          m_Input.value = m_LinkText;
        }
        //m_Input.value = m_LinkText;
      //  m_Input.value = string.Format("{0}{1}", m_LinkText, StrDictionary.GetClientDictionaryString("#{10676}"));
    }
    /// <summary>
    /// 插入帮会链接
    /// </summary>
    /// <param name="guild">帮会Id</param>
    public void InsertGuildLinkText(UInt64 guild)
    {
        ClearLinkBuffer();
        m_eChatLinkType = LINK_TYPE.LINK_TYPE_GUILD;
        m_guildIdBuffer = guild;

        m_LinkText = "[" + StrDictionary.GetClientDictionaryString("#{3294}") + "]";
        m_Input.value = string.Format("{0}{1}", m_LinkText, ShareTargetChooseLogic.AdditionShareMsg);
    }

    /// <summary>
    /// 插入宠物链接
    /// </summary>
    /// <param name="fellowGuid">宠物Id</param>
    public void InsertFellowLinkText(UInt64 fellowGuid)
    {
        ClearLinkBuffer();
        m_eChatLinkType = LINK_TYPE.LINK_TYPE_PROPAGATE;
        m_guidFellow = fellowGuid;
        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container == null)
        {
            return;
        }
        Fellow fellow = container.GetFellowByGuid(fellowGuid);

        if (null == fellow)
        {
            return;
        }
        m_LinkText = "[" + fellow.Name + "]";
        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL) {
          m_Input.value = "/" + TellChatReceiverName + " " + m_LinkText;
        } else {
          m_Input.value = m_LinkText;
        }
       // m_Input.value = string.Format("{0}{1}", m_LinkText, StrDictionary.GetClientDictionaryString("#{10677}"));
    }

    /// <summary>
    /// 插入宠物繁殖链接
    /// </summary>
    /// <param name="fellowGuid">宠物Id</param>
    public void InsertFellowLinkForProText(UInt64 fellowGuid)
    {
        ClearLinkBuffer();
        m_eChatLinkType = LINK_TYPE.LINK_TYPE_PROPAGATE_ACCEPT;
        m_guidFellow = fellowGuid;
        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container == null)
        {
            return;
        }
        Fellow fellow = container.GetFellowByGuid(fellowGuid);

        if (null == fellow)
        {
            return;
        }

        m_LinkText = "[" + fellow.Name + "]";
        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL)
        {
            m_Input.value = "/" + TellChatReceiverName + " " + m_tellChatInputValue + StrDictionary.GetClientDictionaryString("#{11042}", SelectFellowName, m_LinkText);
        }
        else
        {
            m_Input.value = m_tellChatInputValue + StrDictionary.GetClientDictionaryString("#{11042}", SelectFellowName, m_LinkText);
        }
        m_tellChatInputValue = "";
    }
    /// <summary>
    /// 插入链接标记
    /// </summary>
    /// <param name="text">玩家发言</param>
    /// <returns></returns>
    public string InsertLinkSymbols(string text)
    {
        if (string.IsNullOrEmpty(text))
        {
            return text;
        }

        if (m_eChatLinkType != LINK_TYPE.LINK_TYPE_INVALID && m_eChatLinkType != LINK_TYPE.LINK_TYPE_INVALID1)
        {
            text = text.Replace(m_LinkText, "<a>" + m_LinkText + "</a>");

			if(text.Contains(m_LinkText))
			{
              //  LogModule.DebugLog("ccsddddddddddddddddddddddddddddddddddddddd");
			}
			//text = "<a>" + text+ "</a>";
            LogModule.DebugLog(text);
            if (m_eChatLinkType == LINK_TYPE.LINK_TYPE_GUILD)
            {
                text = StrDictionary.GetClientDictionaryString("#{3111}", GameManager.gameManager.PlayerDataPool.GuildInfo.GuildName) + text;
            }
        }
        return text;
    }

    /// <summary>
    /// 激活链接
    /// </summary>
    /// <param name="fulltext">已和频道 玩家名拼接完毕的完整发言</param>
    /// <param name="history">该条发言所在的聊天历史</param>
    /// <returns></returns>
    public string MakeLinkEnabled(string fulltext, ChatHistoryItem history)
    {
        int linkindex = 0;
        while (Utils.IsContainChatLink(fulltext))
        {
            int linkstart_whole = fulltext.IndexOf("<a>");

            int linkstart = NGUITools.StripSymbols(fulltext).IndexOf("<a>");
            int linkend = NGUITools.StripSymbols(fulltext).IndexOf("</a>") - 3;           // 减3为减去"<a>"三个字符的长度

            string strLinkColor = Utils.GetLinkColor(history, linkindex);
            fulltext = fulltext.Substring(0, fulltext.IndexOf("<a>")) + strLinkColor + fulltext.Substring(fulltext.IndexOf("<a>") + 3);
            string strChannelColor = Utils.GetChannelColor(history);
            fulltext = fulltext.Substring(0, fulltext.IndexOf("</a>")) + strChannelColor + fulltext.Substring(fulltext.IndexOf("</a>") + 4);

            Vector2 LeftSideSpace, RightSideSpace;
            int nNextLineNum;
            CalculateLinkSpace(ref fulltext, linkstart_whole, linkstart, linkend, out LeftSideSpace, out RightSideSpace, out nNextLineNum);
            m_ChatTextHeight = RightSideSpace.y;

            GameObject link = null;
            link = ResourceManager.LoadChatLink(m_ChatInfoLinkRoot);
            if (link != null)
            {
                link.transform.localPosition = new Vector3((LeftSideSpace.x + RightSideSpace.x) / 2, -m_ChatTextHeight / 2, 0);
                link.transform.localPosition -= new Vector3(0, m_ChatTextHeight * nNextLineNum, 0);
                link.transform.localPosition -= new Vector3(0, m_ChatTextHeight * m_GameChatInput.textList.PlayerScroll, 0);

                if (null != link.GetComponent<BoxCollider>())
                    link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_ChatTextHeight, 0);

                if (null != link.GetComponent<ChatLinkLogic>())
                    link.GetComponent<ChatLinkLogic>().Init(history, linkindex);

                m_LinkList.Add(link);
            }

            linkindex += 1;
        }

        return fulltext;
    }

    public string MakeMyLinkEnabled(string fulltext, ChatHistoryItem history)
    {
        int linkindex = 0;
        while (Utils.IsContainChatLink(fulltext))
        {
            int linkstart_whole = fulltext.IndexOf("<a>");

            int linkstart = NGUITools.StripSymbols(fulltext).IndexOf("<a>");
            int linkend = NGUITools.StripSymbols(fulltext).IndexOf("</a>") - 3;           // 减3为减去"<a>"三个字符的长度

            string strLinkColor = Utils.GetLinkColor(history, linkindex);
            fulltext = fulltext.Substring(0, fulltext.IndexOf("<a>")) + strLinkColor + fulltext.Substring(fulltext.IndexOf("<a>") + 3);
            string strChannelColor = Utils.GetChannelColor(history);
            fulltext = fulltext.Substring(0, fulltext.IndexOf("</a>")) + strChannelColor + fulltext.Substring(fulltext.IndexOf("</a>") + 4);

            Vector2 LeftSideSpace, RightSideSpace;
            int nNextLineNum;
            CalculateMyLinkSpace(ref fulltext, linkstart_whole, linkstart, linkend, out LeftSideSpace, out RightSideSpace, out nNextLineNum);
            m_ChatTextHeight = RightSideSpace.y;

            GameObject link = null;
            //   link = ResourceManager.LoadChatLink(chatItem);
            if (link != null)
            {
                link.transform.localPosition = new Vector3((LeftSideSpace.x + RightSideSpace.x) / 2, -m_ChatTextHeight / 2, 0);
                link.transform.localPosition -= new Vector3(0, m_ChatTextHeight * nNextLineNum, 0);
                //  link.transform.localPosition -= new Vector3(0, m_ChatTextHeight * m_GameChatInput.textList.PlayerScroll, 0);

                if (null != link.GetComponent<BoxCollider>())
                    link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_ChatTextHeight, 0);

                if (null != link.GetComponent<ChatLinkLogic>())
                    link.GetComponent<ChatLinkLogic>().Init(history, linkindex);

                m_LinkList.Add(link);
            }

            linkindex += 1;
        }

        return fulltext;
    }
    /// <summary>
    /// 计算链接的空格数
    /// </summary>
    /// <param name="text">完整发言</param>
    /// <param name="linkstart">链接起始位置 string索引</param>
    /// <param name="linkend">链接结束位置 string索引</param>
    /// <param name="LeftSideSpace">左侧空格数 返回值</param>
    /// <param name="RightSideSpace">右侧空格数 返回值</param>
    /// <param name="nNextLineNum">换行数</param>
    void CalculateLinkSpace(ref string text, int linkstart_whole, int linkstart, int linkend, out Vector2 LeftSideSpace, out Vector2 RightSideSpace, out int nNextLineNum)
    {
        nNextLineNum = 0;
        LeftSideSpace = Vector2.zero;
        RightSideSpace = Vector2.zero;

        //拆分再合并字符串 防止把加了中括号的玩家名字当颜色代码解析了。。。只解析说话内容中的颜色代码
        //已修改StripSymbols代码 不会把名字当颜色代码解析
        //         int nChatStart = text.IndexOf("说：");
        //         string strPrefix = text.Substring(0, nChatStart);
        //         string strChat = text.Substring(nChatStart);
        //         string striptext = strPrefix + NGUITools.StripSymbols(strChat);
        string striptext = NGUITools.StripSymbols(text);

        LeftSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, linkstart), true, UIFont.SymbolStyle.Uncolored);
        RightSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, linkend), true, UIFont.SymbolStyle.Uncolored);
        float fLinkLength = RightSideSpace.x - LeftSideSpace.x;

        int nLeftNextLineNum = 0;
        int nRightNextLineNum = 0;

        int nLineStart = 0;
        int nWidth = m_GameChatInput.textList.textLabel.GetComponent<UIWidget>().width;
        for (int i = nLineStart + 1; i <= linkstart; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.Uncolored).x;
            if (fChatWidth > nWidth)
            {
                nLeftNextLineNum += 1;
                LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                nLineStart = i - 1;
            }
        }

        nLineStart = 0;
        for (int i = nLineStart + 1; i <= linkend; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.Uncolored).x;
            if (fChatWidth > nWidth)
            {
                nRightNextLineNum += 1;
                RightSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                nLineStart = i - 1;
            }
        }

        nNextLineNum = nRightNextLineNum;

        // 是否超出范围 需要让链接另起一行
        if (nLeftNextLineNum < nRightNextLineNum)
        {
            text = text.Substring(0, linkstart_whole) + Environment.NewLine + text.Substring(linkstart_whole);
            LeftSideSpace.x = 0;
            RightSideSpace.x = fLinkLength;
        }
    }
    void CalculateMyLinkSpace(ref string text, int linkstart_whole, int linkstart, int linkend, out Vector2 LeftSideSpace, out Vector2 RightSideSpace, out int nNextLineNum)
    {
        nNextLineNum = 0;
        LeftSideSpace = Vector2.zero;
        RightSideSpace = Vector2.zero;

        //拆分再合并字符串 防止把加了中括号的玩家名字当颜色代码解析了。。。只解析说话内容中的颜色代码
        //已修改StripSymbols代码 不会把名字当颜色代码解析
        //         int nChatStart = text.IndexOf("说：");
        //         string strPrefix = text.Substring(0, nChatStart);
        //         string strChat = text.Substring(nChatStart);
        //         string striptext = strPrefix + NGUITools.StripSymbols(strChat);
        string striptext = NGUITools.StripSymbols(text);

        LeftSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, linkstart), true, UIFont.SymbolStyle.Uncolored);
        RightSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, linkend), true, UIFont.SymbolStyle.Uncolored);
        float fLinkLength = RightSideSpace.x - LeftSideSpace.x;

        int nLeftNextLineNum = 0;
        int nRightNextLineNum = 0;

        int nLineStart = 0;
        int nWidth = chatTextInfo.GetComponent<UIWidget>().width;
        for (int i = nLineStart + 1; i <= linkstart; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.Uncolored).x;
            if (fChatWidth > nWidth)
            {
                nLeftNextLineNum += 1;
                LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                nLineStart = i - 1;
            }
        }

        nLineStart = 0;
        for (int i = nLineStart + 1; i <= linkend; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.Uncolored).x;
            if (fChatWidth > nWidth)
            {
                nRightNextLineNum += 1;
                RightSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                nLineStart = i - 1;
            }
        }

        nNextLineNum = nRightNextLineNum;

        // 是否超出范围 需要让链接另起一行
        if (nLeftNextLineNum < nRightNextLineNum)
        {
            text = text.Substring(0, linkstart_whole) + Environment.NewLine + text.Substring(linkstart_whole);
            LeftSideSpace.x = 0;
            RightSideSpace.x = fLinkLength;
        }
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="text"></param>
    /// <param name="linkstart"></param>
    /// <param name="LeftSideSpace"></param>
    /// <param name="nNextLineNum"></param>
    void CalculateEmotionSpace(ref string text, out Vector2 LeftSideSpace, out int nNextLineNum)
    {
        nNextLineNum = 0;
        LeftSideSpace = Vector2.zero;

        //拆分再合并字符串 防止把加了中括号的玩家名字当颜色代码解析了。。。只解析说话内容中的颜色代码
        //已修改StripSymbols代码 不会把名字当颜色代码解析
        //         int nChatStart = text.IndexOf("说：");
        //         string strPrefix = text.Substring(0, nChatStart);
        //         string strChat = text.Substring(nChatStart);
        //         string striptext = strPrefix + NGUITools.StripSymbols(strChat);
        string striptext = NGUITools.StripSymbols(text);

        int stripEmotionStart = striptext.IndexOf("[em=");
        LeftSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, stripEmotionStart), true, UIFont.SymbolStyle.Uncolored);

        int nLineStart = 0;
        int nWidth = m_GameChatInput.textList.textLabel.GetComponent<UIWidget>().width;
        for (int i = nLineStart + 1; i <= stripEmotionStart; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.Uncolored).x;
            if (i == stripEmotionStart)
            {
                if (fChatWidth > nWidth)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                    nLineStart = i - 1;
                }
                else if (fChatWidth + SPACE_WIDTH > nWidth)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x = 0;
                }
            }
            else
            {
                if (fChatWidth > nWidth)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                    nLineStart = i - 1;
                }
            }
        }
    }

    void CalculateMyEmotionSpace(ref string text, out Vector2 LeftSideSpace, out int nNextLineNum)
    {
        nNextLineNum = 0;
        LeftSideSpace = Vector2.zero;

        //拆分再合并字符串 防止把加了中括号的玩家名字当颜色代码解析了。。。只解析说话内容中的颜色代码
        //已修改StripSymbols代码 不会把名字当颜色代码解析
        //         int nChatStart = text.IndexOf("说：");
        //         string strPrefix = text.Substring(0, nChatStart);
        //         string strChat = text.Substring(nChatStart);
        //         string striptext = strPrefix + NGUITools.StripSymbols(strChat);
        string striptext = NGUITools.StripSymbols(text);

        int stripEmotionStart = striptext.IndexOf("[em=");
        LeftSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, stripEmotionStart), true, UIFont.SymbolStyle.Uncolored);

        int nLineStart = 0;
        int nWidth = chatTextInfo.GetComponent<UIWidget>().width;
        for (int i = nLineStart + 1; i <= stripEmotionStart; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.Uncolored).x;
            if (i == stripEmotionStart)
            {
                if (fChatWidth > nWidth)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                    nLineStart = i - 1;
                }
                else if (fChatWidth + SPACE_WIDTH > nWidth)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x = 0;
                }
            }
            else
            {
                if (fChatWidth > nWidth)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                    nLineStart = i - 1;
                }
            }
        }
    }
    /// <summary>
    /// 链接位移 链接每次移动一行
    /// </summary>
    /// <param name="direction">方向</param>
    /// <param name="times">倍数</param>
    public void MoveLinkPos(EMOTIONLINK_MOVE_DIRECTION direction, int times)
    {
        int nHeightMax = m_GameChatInput.textList.textLabel.GetComponent<UIWidget>().height;
        for (int i = 0; i < m_LinkList.Count; ++i)
        {
            if (m_LinkList[i] != null)
            {
                m_LinkList[i].transform.localPosition += new Vector3(0, m_ChatTextHeight * (int)direction * times, 0);
                if (m_LinkList[i].transform.localPosition.y >= nHeightMax || m_LinkList[i].transform.localPosition.y < 0)
                {
                    m_LinkList[i].SetActive(false);
                }
                else
                {
                    m_LinkList[i].SetActive(true);
                }
            }
        }
    }

    public void MoveEmotionPos(EMOTIONLINK_MOVE_DIRECTION direction, int times)
    {
        UISprite[] spriteArray = m_EmotionItemRoot.GetComponentsInChildren<UISprite>();
        for (int i = 0; i < spriteArray.Length; i++)
        {
            spriteArray[i].gameObject.transform.localPosition += new Vector3(0, m_ChatTextHeight * (int)direction * times, 0);
        }
    }

    //表情响应函数
   public void ShowOrCloseEmotionRoot()
    {
        m_EmotionRoot.SetActive(!m_EmotionRoot.activeSelf);

       //关闭的时候
        if (!m_EmotionItemRoot.activeSelf)
        {
            ChatInfoSelectLinkLogic.M_OPEN_TYPE = ChatInfoSelectLinkLogic.OPEN_TYPE.NORMAL;
        }
        // 如果打开表情 关闭设置
//         if (m_EmotionRoot.activeSelf)
//         {
//             if (m_ChatSetupRoot.activeSelf)
//             {
//                 m_ChatSetupRoot.SetActive(false);
//             }
//         }
    }

    //强制刷新表情打开界面为宠物繁殖服务
   public void ShowEmotionRoot()
   {
       m_EmotionRoot.SetActive(true);
   }
    public void InsertEmotion(GameObject value)
    {
        if (value == null || value.GetComponent<UISprite>() == null)
        {
            return;
        }

        string name = value.GetComponent<UISprite>().spriteName;
        string id = name.Replace("emotion (", "").Replace(")", "");
        string strEmotion = "[em=" + id + "]";
        if (Utils.GetStrTextNum(m_Input.value + strEmotion) <= MAX_TEXTNUM)
        {
          if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL && !m_Input.value.Contains("/" + TellChatReceiverName + " ")) {
            m_Input.value = "/" + TellChatReceiverName + " " + strEmotion;
          } else {
            m_Input.value += strEmotion;
          }
        }
    }

    void InputOnActive()
    {
        if (m_EmotionRoot.activeSelf)
        {
            m_EmotionRoot.SetActive(false);
        }
        //         if (m_ChatSetupRoot.activeSelf)
        //         {
        //             m_ChatSetupRoot.SetActive(false);
        //         }
#if !UNITY_EDITOR && (UNITY_IPHONE || UNITY_WP8)
        ChatInfoMove();
#endif
    }

    string MakeEmotionEnabled(string fulltext)
    {
        while (Utils.IsContainEmotion(fulltext))
        {
            Vector2 fLeftSideSpace;
            int nNextLineNum;

            CalculateEmotionSpace(ref fulltext, out fLeftSideSpace, out nNextLineNum);
            m_ChatTextHeight = fLeftSideSpace.y;

            int nEmotionStart = fulltext.IndexOf("[em=");
            int nEmotionEnd = fulltext.Substring(nEmotionStart).IndexOf("]") + nEmotionStart;

            string strEmotion = fulltext.Substring(nEmotionStart, nEmotionEnd - nEmotionStart + 1);
            string strSpriteID = strEmotion.Substring(4).Replace("]", "");

            GameObject emotion = ResourceManager.LoadEmotionItem(m_EmotionItemRoot);
            if (emotion != null)
            {
                emotion.GetComponent<UISprite>().spriteName = "emotion (" + strSpriteID + ")";

                emotion.transform.localPosition = new Vector3(fLeftSideSpace.x, -m_ChatTextHeight / 2, 0);
                emotion.transform.localPosition -= new Vector3(0, m_ChatTextHeight * nNextLineNum, 0);
                emotion.transform.localPosition -= new Vector3(0, m_ChatTextHeight * m_GameChatInput.textList.PlayerScroll, 0);

                string spaceEmotionItem = GetSpaceEmotionItem(emotion);
                fulltext = fulltext.Substring(0, nEmotionStart) + spaceEmotionItem + fulltext.Substring(nEmotionEnd + 1);
            }
        }
        return fulltext;
    }

    /// <summary>
    /// 根据频道获取当前的pop需要的空格个数
    /// </summary>
    /// <param name="channel"></param>
    string GetPopSpaceByChannel(int channel = 0)
    {
        return "";
    }
    //     string MakeMyEmotionEnabled(string fulltext)
    //     {
    //         while (Utils.IsContainEmotion(fulltext))
    //         {
    //             Vector2 fLeftSideSpace;
    //             int nNextLineNum;
    // 
    //             CalculateMyEmotionSpace(ref fulltext, out fLeftSideSpace, out nNextLineNum);
    //             m_ChatTextHeight = fLeftSideSpace.y;
    // 
    //             int nEmotionStart = fulltext.IndexOf("[em=");
    //             int nEmotionEnd = fulltext.Substring(nEmotionStart).IndexOf("]") + nEmotionStart;
    // 
    //             string strEmotion = fulltext.Substring(nEmotionStart, nEmotionEnd - nEmotionStart + 1);
    //             string strSpriteID = strEmotion.Substring(4).Replace("]", "");
    // 
    //          //   GameObject emotion = ResourceManager.LoadEmotionItem(chatItem);
    //             // emotion.GetComponent<UISprite>().GetComponent<UIWidget>().pivot = chatTextInfo.GetComponent<UIWidget>().pivot;
    //             emotion.GetComponent<UISprite>().GetComponent<UIWidget>().depth = chatTextInfo.GetComponent<UIWidget>().depth + 1;
    // 
    //             if (emotion != null)
    //             {
    //                 emotion.GetComponent<UISprite>().spriteName = "emotion (" + strSpriteID + ")";
    // 
    //                 emotion.transform.localPosition = new Vector3(fLeftSideSpace.x, -m_ChatTextHeight / 2, 0);
    //                 emotion.transform.localPosition -= new Vector3(0, m_ChatTextHeight * nNextLineNum, 0);
    //                 //emotion.transform.localPosition -= new Vector3(0, m_ChatTextHeight * m_GameChatInput.textList.PlayerScroll, 0);
    // 
    //                 string spaceEmotionItem = GetSpaceEmotionItem(emotion);
    //                 fulltext = fulltext.Substring(0, nEmotionStart) + spaceEmotionItem + fulltext.Substring(nEmotionEnd + 1);
    //             }
    //         }
    //         return fulltext;
    //     }
    void InitTouchKeyboardTween()
    {
        if (null != GameManager.gameManager.ActiveScene.UIRoot &&
            null != GameManager.gameManager.ActiveScene.UIRoot.GetComponent<UIRoot>())
            m_TouchKeyboardTween.to = new Vector3(0, GameManager.gameManager.ActiveScene.UIRoot.GetComponent<UIRoot>().manualHeight / 2 + 110, 0);
    }

    public void ChatInfoMove()
    {
        if (m_bKeyboardTweenOrigin)
        {
            m_TouchKeyboardTween.Play(true);
            m_bKeyboardTweenOrigin = false;
        }
    }

    public void ChatInfoGoBack()
    {
        if (!m_bKeyboardTweenOrigin)
        {
            m_TouchKeyboardTween.Play(false);
            m_bKeyboardTweenOrigin = true;
        }
    }

    public void HideKeyboard()
    {
        m_Input.HideKeyboard();
    }

    void InitEmotionButtons()
    {
        for (int i = 0; i < GlobeVar.EmotionTiger_Num; i++)
        {
            GameObject EmotionButton = ResourceManager.LoadEmotionButton(m_EmotionGrid, i);
            if (EmotionButton != null)
            {
                EmotionButton.GetComponent<UISprite>().spriteName = "emotion (" + (i + 1).ToString() + ")";
            }
        }
        m_EmotionGrid.GetComponent<UIGrid>().Reposition();
    }

    public void BeginChat(UInt64 nReceiverGUID, string strReceiverName)
    {
        if (m_eCurChannelType != CHANNEL_TYPE.CHAT_TYPE_TELL)
        {
            m_eCurChannelType = CHANNEL_TYPE.CHAT_TYPE_TELL;
            GameManager.gameManager.PlayerDataPool.ChooseChannel = m_eCurChannelType;
            UpdateChannelState();
            UpdateChannelHistory();
            UpdateChatFrameInformSprite();
            if (m_LastSpeakerChatLogic != null)
            {
                m_LastSpeakerChatLogic.UpdateSpeakers();
            }
        }
        else
        {
            GameManager.gameManager.PlayerDataPool.ChooseChannel = m_eCurChannelType;
        }

        m_OpButtons.SetActive(true);

        //         if (m_eCurChannelType != CHANNEL_TYPE.CHAT_TYPE_FRIEND)
        //         {
        m_TellChatReceiverGuid = nReceiverGUID;
        m_TellChatReceiverName = strReceiverName;
        GameManager.gameManager.PlayerDataPool.LastTellGUID = nReceiverGUID;
        GameManager.gameManager.PlayerDataPool.LastTellName = strReceiverName;
        //         }
        //         else
        //         {
        //             m_FriendChatReceiverGuid = nReceiverGUID;
        //             m_FriendChatReceiverName = strReceiverName;
        //         }

        m_Input.enabled = true;
        m_tellChatInputValue = "/" + strReceiverName + " "; 
        m_Input.value = "/" + strReceiverName + " ";
    }

    public void ClearLinkBuffer()
    {
        m_eChatLinkType = LINK_TYPE.LINK_TYPE_INVALID;
        m_LinkText = "";
        m_ItemBuffer = null;
        m_EquipBuffer = null;
        m_missionBuffer.CleanUp();
        m_guildIdBuffer = 0;
        m_guidFellow = 0;
    }

    // 获取适合表情宽度的空格数
    string GetSpaceEmotionItem(GameObject emotion)
    {
        //         float spaceWidth = m_Font.CalculatePrintedSize(" ", true, UIFont.SymbolStyle.Uncolored).x;
        //         int emotionWidth = emotion.GetComponent<UISprite>().width;
        //         int spaceNum = Mathf.CeilToInt((float)emotionWidth / spaceWidth);
        //         string strResult = "";
        //         for (int i = 0; i < spaceNum; i++ )
        //         {
        //             strResult += " ";
        //         }
        //         return strResult;
        // 暂时用中文全角模式下的空格取代
        return "　";
    }

    void HandleChatHistory(ChatHistoryItem history)
    {
        if (string.IsNullOrEmpty(history.ChatInfo))
        {
            return;
        }

        if (ChatInfoSetupLogic.IsChannelReceiveChat(m_eCurChannelType, history.EChannel) && IsAllChannelValid())
        {
            if (m_GameChatInput.textList.PlayerScroll > 0)
            {
                m_WaitRefresh = true;
                return;
            }

            string strChannelName = Utils.GetChannelName((int)history.EChannel);
            string strSenderName = "";
            string strHisChatInfo = history.ChatInfo;
            if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_FRIEND && history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
            {
                // 如果是好友频道 则只显示和该好友之间的对话
                if (history.SenderGuid != m_FriendChatReceiverGuid && history.ReceiverGuid != m_FriendChatReceiverGuid)
                {
                    return;
                }
            }
            if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL ||
                history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
            {
                //                 if (null != Singleton<ObjManager>.Instance.MainPlayer && history.SenderName == Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.RoleName)
                //                 {
                //                     //strSenderName = "你对[" + history.ReceiverName + "]说：";
                //                     strSenderName = StrDictionary.GetClientDictionaryString("#{2822}", history.ReceiverName);
                //                 }
                //                 else
                //                 {
                //                     //strSenderName = "[" + history.SenderName + "]对你说：";
                //                     strSenderName = StrDictionary.GetClientDictionaryString("#{2823}", history.SenderName);
                //                 }
                //                 if (strHisChatInfo[0] == '#')
                //                 {
                //                     strHisChatInfo = StrDictionary.GetServerDictionaryFormatString(strHisChatInfo);
                //                 }

                strSenderName = history.SenderName;//{0}
                if (strHisChatInfo[0] == '#')
                {
                    strHisChatInfo = StrDictionary.GetServerDictionaryFormatString(strHisChatInfo);
                }
            }
            else if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_SYSTEM
                || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_GUILD)
            {
                if (string.IsNullOrEmpty(strHisChatInfo))
                {
                    return;
                }
                // 系统频道可能无发送人
                if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
                {
                    //strSenderName = "[" + history.SenderName + "]说：";
                    strSenderName = history.SenderName;

                }
                // #解析
                if (strHisChatInfo[0] == '#')
                {
                    strHisChatInfo = StrDictionary.GetServerDictionaryFormatString(strHisChatInfo);
                }
            }
            else
            {
                //strSenderName = "[" + history.SenderName + "]说：";
                if (history.ELinkType.Count > 0 && history.GetLinkIntDataCountByIndex(0) == (int)GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE)
                {
                    strSenderName = "[" + StrDictionary.GetClientDictionaryString("#{3108}", "") + "]:";
                }
                else
                {
                    //strSenderName = StrDictionary.GetClientDictionaryString("#{2824}", history.SenderName);
                    strSenderName = history.SenderName;
                }
                // #解析
                if (strHisChatInfo[0] == '#')
                {
                    strHisChatInfo = StrDictionary.GetServerDictionaryFormatString(strHisChatInfo);
                }
            }
            //             string strChatInfo = strHisChatInfo;
            //             string strChatFull = strChannelName + strSenderName + strChatInfo;


            string strChatInfo = strHisChatInfo;
//            string strChatTitle = strChannelName + strSenderName;
//            string strChatDetail = strChatInfo;
            string strChatFull = strChannelName + strSenderName + strChatInfo;

            string strChannelColor = Utils.GetChannelColor(history);
            strChatFull = strChannelColor + strChatFull;

            // 创建聊天Item
            GameObject curItem = Utils.BindObjToParent(m_ChatInfoItem, m_ChatInfoItemGrid.gameObject, (m_CurChatInfoItemIndex).ToString());
            if (curItem == null)
            {
                LogModule.DebugLog("m_ChatInfoItem create error");
                return;
            }
            ChatInfoItemLogic AddCurChatItem = curItem.GetComponent<ChatInfoItemLogic>();
            if (AddCurChatItem == null)
            {
                return;
            }
            
            AddCurChatItem.Init(strChatFull, history);
            m_ChatInfoItemGrid.Reposition();
            //             strChatFull = ShowVIPIcon(strChatFull, ref strSenderName, history);
            // 
            //             if (history.ELinkType.Count > 0)
            //             {
            //                 strChatFull = MakeLinkEnabled(strChatFull, history);
            //             }
            //             strChatFull = MakeEmotionEnabled(strChatFull);
            // 
            //             if (!(history.ELinkType.Count > 0 && history.GetLinkIntDataCountByIndex(0) == (int)GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE))
            //             {
            //                 strChatFull = MakeNameLinkEnabled(strChatFull, history);
            //             }
            // 
            //             strChatFull = ShowPlayVoiceBtn(strChatFull, strSenderName, history);
            // 
            //             string strChannelColor = Utils.GetChannelColor(history);
            //             strChatFull = strChannelColor + strChatFull;
            // 
            //             m_GameChatInput.ShowNewChat(strChatFull);
        }
    }
    void SetData(ChatHistoryItem history)
    {


        if (string.IsNullOrEmpty(history.ChatInfo))
        {
            //    chatItem.SetActive(false);
            return;
        }



        if (ChatInfoSetupLogic.IsChannelReceiveChat(m_eCurChannelType, history.EChannel) && IsAllChannelValid())
        {
            if (m_GameChatInput.textList.PlayerScroll > 0)
            {
                m_WaitRefresh = true;
                return;
            }

            string strChannelName = Utils.GetChannelName((int)history.EChannel);
            string strSenderName = "";
            string strHisChatInfo = history.ChatInfo;
            if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_FRIEND && history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
            {
                // 如果是好友频道 则只显示和该好友之间的对话
                if (history.SenderGuid != m_FriendChatReceiverGuid && history.ReceiverGuid != m_FriendChatReceiverGuid)
                {
                    return;
                }
            }
            if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL ||
                history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
            {
                if (null != Singleton<ObjManager>.Instance.MainPlayer && history.SenderName == Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.RoleName)
                {
                    //strSenderName = "你对[" + history.ReceiverName + "]说：";
                    strSenderName = StrDictionary.GetClientDictionaryString("#{2822}", history.ReceiverName);
                }
                else
                {
                    //strSenderName = "[" + history.SenderName + "]对你说：";
                    strSenderName = StrDictionary.GetClientDictionaryString("#{2823}", history.SenderName);
                }
                if (strHisChatInfo[0] == '#')
                {
                    strHisChatInfo = StrDictionary.GetServerDictionaryFormatString(strHisChatInfo);
                }
            }
            else if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_SYSTEM
                || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_GUILD)
            {
                if (string.IsNullOrEmpty(strHisChatInfo))
                {
                    return;
                }
                // 系统频道可能无发送人
                if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
                {
                    //strSenderName = "[" + history.SenderName + "]说：";
                    strSenderName = StrDictionary.GetClientDictionaryString("#{2824}", history.SenderName);

                }
                // #解析
                if (strHisChatInfo[0] == '#')
                {
                    strHisChatInfo = StrDictionary.GetServerDictionaryFormatString(strHisChatInfo);
                }
            }
            else
            {
                //strSenderName = "[" + history.SenderName + "]说：";
                if (history.ELinkType.Count > 0 && history.GetLinkIntDataCountByIndex(0) == (int)GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE)
                {
                    strSenderName = "[" + StrDictionary.GetClientDictionaryString("#{3108}", "") + "]:";
                }
                else
                {
                    strSenderName = StrDictionary.GetClientDictionaryString("#{2824}", history.SenderName);
                }
                // #解析
                if (strHisChatInfo[0] == '#')
                {
                    strHisChatInfo = StrDictionary.GetServerDictionaryFormatString(strHisChatInfo);
                }
            }
            string strChatInfo = strHisChatInfo;
            string strChatFull = strChannelName + strSenderName + strChatInfo;

            strChatFull = ShowVIPIcon(strChatFull, ref strSenderName, history);

            if (history.ELinkType.Count > 0)
            {
                strChatFull = MakeMyLinkEnabled(strChatFull, history);
            }
            //  strChatFull = MakeMyEmotionEnabled(strChatFull);

            if (!(history.ELinkType.Count > 0 && history.GetLinkIntDataCountByIndex(0) == (int)GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE))
            {
                strChatFull = MakeMyNameLinkEnabled(strChatFull, history);
            }

            strChatFull = ShowPlayVoiceBtn(strChatFull, strSenderName, history);

            string strChannelColor = Utils.GetChannelColor(history);
            strChatFull = strChannelColor + strChatFull;

            //   m_GameChatInput.ShowNewChat(strChatFull);
            chatTextInfo.text = strChatFull;
            //     chatItemPop.height = Mathf.CeilToInt(chatTextInfo.printedSize.y + m_ChatTextHeight / 2 + chatItemPop.gameObject.transform.localPosition.y);
        }
    }
    string ShowVIPIcon(string fulltext, ref string sendertext, ChatHistoryItem history)
    {
        if (history.SenderGuid == GlobeVar.INVALID_GUID || history.SenderName == "")
        {
            return fulltext;
        }

        int nSenderVIPLevel = history.SenderVIPLevel;
        if (nSenderVIPLevel <= 0)
        {
            return fulltext;
        }

        int nIconIndex = GlobeVar.INVALID_ID;
        int nIconIndex_SenderText = 0;
        if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL ||
            history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
        {
            if (null != Singleton<ObjManager>.Instance.MainPlayer && history.SenderGuid == Singleton<ObjManager>.Instance.MainPlayer.GUID &&
                history.ReceiverGuid != GlobeVar.INVALID_GUID && history.ReceiverName != "")
            {
                nIconIndex = fulltext.IndexOf("【" + history.ReceiverName + "】");
                nIconIndex_SenderText = sendertext.IndexOf("【" + history.ReceiverName + "】");
            }
            else
            {
                nIconIndex = fulltext.IndexOf("【" + history.SenderName + "】");
                nIconIndex_SenderText = sendertext.IndexOf("【" + history.SenderName + "】");
            }
        }
        else
        {
            nIconIndex = fulltext.IndexOf("【" + history.SenderName + "】");
            nIconIndex_SenderText = sendertext.IndexOf("【" + history.SenderName + "】");
        }

        if (nIconIndex == GlobeVar.INVALID_ID)
        {
            return fulltext;
        }

        fulltext = fulltext.Substring(0, nIconIndex) + "　" + fulltext.Substring(nIconIndex);
        sendertext = sendertext.Substring(0, nIconIndex_SenderText) + "　" + sendertext.Substring(nIconIndex_SenderText);
        float fLeftSpace = m_Font.CalculatePrintedSize(fulltext.Substring(0, nIconIndex), true, UIFont.SymbolStyle.Uncolored).x;

        GameObject emotion = Utils.BindObjToParent(m_VIPIcon, m_EmotionItemRoot, "vipicon");
        if (emotion != null && emotion.GetComponent<UISprite>() != null)
        {
            emotion.GetComponent<UISprite>().spriteName = VipData.GetStarIconByLevel(nSenderVIPLevel);
            emotion.transform.localPosition = new Vector3(fLeftSpace - 2, -m_ChatTextHeight / 2, 0);
        }
        return fulltext;
    }

    string ShowPlayVoiceBtn(string fulltext, string sendertext, ChatHistoryItem history)
    {
        if (history.SenderGuid == GlobeVar.INVALID_GUID || history.VoiceChatIndex == GlobeVar.INVALID_ID)
        {
            return fulltext;
        }

        int nVoiceIndex = history.VoiceChatIndex;
        if (nVoiceIndex < 0)
        {
            return fulltext;
        }

        if (history.EChannel != GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND &&
            history.EChannel != GC_CHAT.CHATTYPE.CHAT_TYPE_TEAM &&
            history.EChannel != GC_CHAT.CHATTYPE.CHAT_TYPE_GUILD &&
            history.EChannel != GC_CHAT.CHATTYPE.CHAT_TYPE_MASTER && 
            history.EChannel != GC_CHAT.CHATTYPE.CHAT_TYPE_TELL)
        {
            return fulltext;
        }

        // 播放按钮显示改在最后 sendertext暂时用不到了 先不删
        fulltext = fulltext + "　　";

        int linkstart_whole = fulltext.IndexOf("　　");

        int linkstart = NGUITools.StripSymbols(fulltext).IndexOf("　　");
        int linkend = linkstart + 2;

        Vector2 LeftSideSpace, RightSideSpace;
        int nNextLineNum;
        CalculateLinkSpace(ref fulltext, linkstart_whole, linkstart, linkend, out LeftSideSpace, out RightSideSpace, out nNextLineNum);
        m_ChatTextHeight = RightSideSpace.y;

        GameObject emotion = Utils.BindObjToParent(m_PlayVoiceChatBtn, m_EmotionItemRoot, "playvoicechatbtn");
        if (emotion != null)
        {
            emotion.transform.localPosition = new Vector3(LeftSideSpace.x, -m_ChatTextHeight / 2, 0);
            emotion.transform.localPosition -= new Vector3(0, m_ChatTextHeight * nNextLineNum, 0);
            emotion.transform.localPosition -= new Vector3(0, m_ChatTextHeight * m_GameChatInput.textList.PlayerScroll, 0);

            if (emotion.GetComponent<PlayVoiceChatBtnLogic>() != null)
            {
                emotion.GetComponent<PlayVoiceChatBtnLogic>().Init(history.VoiceChatIndex, history.SenderGuid);
            }
        }

        /*int nIconIndex = fulltext.IndexOf(sendertext) + sendertext.Length;
        fulltext = fulltext.Substring(0, nIconIndex) + "　　" + fulltext.Substring(nIconIndex);

        GameObject emotion = Utils.BindObjToParent(m_PlayVoiceChatBtn, m_EmotionItemRoot, "playvoicechatbtn");
        if (emotion != null)
        {
            if (emotion.GetComponent<UISprite>() != null)
            {
                emotion.transform.localPosition = new Vector3(m_Font.CalculatePrintedSize(fulltext.Substring(0, nIconIndex), true, UIFont.SymbolStyle.Uncolored).x - 8, -m_ChatTextHeight / 2, 0);
            }
            if (emotion.GetComponent<PlayVoiceChatBtnLogic>() != null)
            {
                emotion.GetComponent<PlayVoiceChatBtnLogic>().Init(history.VoiceChatIndex, history.SenderGuid);
            }
        }*/

        return fulltext;
    }

    string MakeNameLinkEnabled(string fulltext, ChatHistoryItem history)
    {
        if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
        {
            GameObject link = null;
            link = ResourceManager.LoadChatLink(m_ChatInfoLinkRoot);
            if (link != null)
            {
                UInt64 linkguid = GlobeVar.INVALID_GUID;
                string linkname = "";
                if ((history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND) &&
                    null != Singleton<ObjManager>.GetInstance().MainPlayer &&
                    history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
                {
                    linkguid = history.ReceiverGuid;
                    linkname = history.ReceiverName;
                }
                else
                {
                    linkguid = history.SenderGuid;
                    linkname = history.SenderName;
                }
                string stripText = NGUITools.StripSymbols(fulltext);
                int linkstart = stripText.IndexOf(linkname) - 1;
                int linkend = stripText.IndexOf(linkname) + linkname.Length;
                Vector2 LeftSideSpace = m_Font.CalculatePrintedSize(stripText.Substring(0, linkstart), true, UIFont.SymbolStyle.Uncolored);
                Vector2 RightSideSpace = m_Font.CalculatePrintedSize(stripText.Substring(0, linkend + 1), true, UIFont.SymbolStyle.Uncolored);
                link.transform.localPosition = new Vector3((LeftSideSpace.x + RightSideSpace.x) / 2, -m_ChatTextHeight / 2, 0);
                if (null != link.GetComponent<BoxCollider>())
                    link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_ChatTextHeight, 0);

                if (null != link.GetComponent<ChatLinkLogic>())
                    link.GetComponent<ChatLinkLogic>().Init_NameLink(linkguid, linkname);

                fulltext = fulltext.Substring(0, linkstart) + "[FFFF10]" + fulltext.Substring(linkstart, linkname.Length + 2) + Utils.GetChannelColor(history) + fulltext.Substring(linkend + 1);
                m_LinkList.Add(link);
            }
        }
        return fulltext;
    }
    string MakeMyNameLinkEnabled(string fulltext, ChatHistoryItem history)
    {
        if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
        {
            GameObject link = null;
            //  link = ResourceManager.LoadChatLink(chatItem);
            if (link != null)
            {
                UInt64 linkguid = GlobeVar.INVALID_GUID;
                string linkname = "";
                if ((history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND) &&
                    null != Singleton<ObjManager>.GetInstance().MainPlayer &&
                    history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
                {
                    linkguid = history.ReceiverGuid;
                    linkname = history.ReceiverName;
                }
                else
                {
                    linkguid = history.SenderGuid;
                    linkname = history.SenderName;
                }
                string stripText = NGUITools.StripSymbols(fulltext);
                int linkstart = stripText.IndexOf(linkname) - 1;
                int linkend = stripText.IndexOf(linkname) + linkname.Length;
                Vector2 LeftSideSpace = m_Font.CalculatePrintedSize(stripText.Substring(0, linkstart), true, UIFont.SymbolStyle.Uncolored);
                Vector2 RightSideSpace = m_Font.CalculatePrintedSize(stripText.Substring(0, linkend + 1), true, UIFont.SymbolStyle.Uncolored);
                link.transform.localPosition = new Vector3((LeftSideSpace.x + RightSideSpace.x) / 2, -m_ChatTextHeight / 2, 0);
                if (null != link.GetComponent<BoxCollider>())
                    link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_ChatTextHeight, 0);

                if (null != link.GetComponent<ChatLinkLogic>())
                    link.GetComponent<ChatLinkLogic>().Init_NameLink(linkguid, linkname);

                fulltext = fulltext.Substring(0, linkstart) + "[FFFF10]" + fulltext.Substring(linkstart, linkname.Length + 2) + Utils.GetChannelColor(history) + fulltext.Substring(linkend + 1);
                m_LinkList.Add(link);
            }
        }
        return fulltext;
    }

    void ShowChatSetup()
    {
        m_setUpTween.Play(isOpenSetUp);
        m_setUpBtnTween.Play(isOpenBtnSetup);
       //  m_ChatSetupRoot.SetActive(!m_ChatSetupRoot.activeSelf);
         if (isOpenSetUp)
         {
             m_SetupObj.SetActive(true);
         }
        // 如果打开设置 关闭表情
        if (m_ChatSetupRoot.activeSelf)
        {
            if (m_EmotionRoot.activeSelf)
            {
                m_EmotionRoot.SetActive(false);
            }
        }
    }

    public void ClearCurInput()
    {
        m_Input.value = "";
        ClearLinkBuffer();
        GameManager.gameManager.PlayerDataPool.ChatEditInput = ""; // 发送后记录删除
    }

    public void RecoverFastReply()
    {
        UIPlayTween[] playArray = m_FastReplyButton.GetComponents<UIPlayTween>();
        for (int i = 0; i < playArray.Length; i++)
        {
            playArray[i].Play(false);
        }
    }

    public void FastReplyTweenOver()
    {
        //m_FastReplyButton.transform.Rotate(new Vector3(0, 0, 180));
        UIImageButton curImageButton = m_FastReplyButton.GetComponent<UIImageButton>();
        if (null == curImageButton)
        {
            return;
        }

        if (curImageButton.target.spriteName == "New_JianTou_Normal")
        {
            curImageButton.normalSprite = "New_JianTou_Up";
            curImageButton.hoverSprite = "New_JianTou_Up";
            curImageButton.pressedSprite = "New_JianTou_Up";
            curImageButton.disabledSprite = "New_JianTou_Up";
            curImageButton.target.spriteName = "New_JianTou_Up";
            curImageButton.target.MakePixelPerfect();
            return;
        }
        else
        {
            curImageButton.normalSprite = "New_JianTou_Normal";
            curImageButton.hoverSprite = "New_JianTou_Normal";
            curImageButton.pressedSprite = "New_JianTou_Normal";
            curImageButton.disabledSprite = "New_JianTou_Normal";
            curImageButton.target.spriteName = "New_JianTou_Normal";
            curImageButton.target.MakePixelPerfect();
            return;
        }

    }

    public void UpdateTeamChannel()
    {
        for (int i = 0; i < (int)CHANNEL_TYPE.CHAT_TYPE_NUM; i++)
        {
            if (m_Channels[i].name.Contains("Team"))
            {
                m_Channels[i].SetActive(GameManager.gameManager.PlayerDataPool.IsHaveTeam());
            }
        }
        m_ChannelGrid.Reposition();
    }

    public void UpdateGuildChannel()
    {
        for (int i = 0; i < (int)CHANNEL_TYPE.CHAT_TYPE_NUM; i++)
        {
            if (m_Channels[i].name.Contains("Guild"))
            {
                m_Channels[i].SetActive(GameManager.gameManager.PlayerDataPool.IsHaveGuild());
            }
        }
        m_ChannelGrid.Reposition();
    }

    public void UpdateMasterChannel()
    {
        for (int i = 0; i < (int)CHANNEL_TYPE.CHAT_TYPE_NUM; i++)
        {
            if (m_Channels[i].name.Contains("Master"))
            {
                m_Channels[i].SetActive(GameManager.gameManager.PlayerDataPool.IsHaveMaster());
            }
        }
        m_ChannelGrid.Reposition();
    }
    public void UpdateTeamGuildMasterChannel(string channel = "")
    {
        for (int i = 0; i < (int)CHANNEL_TYPE.CHAT_TYPE_NUM; i++)
        {
            if (m_Channels[i].name.Contains("Team"))
            {
                m_Channels[i].SetActive(GameManager.gameManager.PlayerDataPool.IsHaveTeam());
            }
            if (m_Channels[i].name.Contains("Guild"))
            {
                m_Channels[i].SetActive(GameManager.gameManager.PlayerDataPool.IsHaveGuild());
            }
            if (m_Channels[i].name.Contains("Master"))
            {
                m_Channels[i].SetActive(GameManager.gameManager.PlayerDataPool.IsHaveMaster());
            }
        }

        m_ChannelGrid.Reposition();
    }

    public void UpdateSpeakerList_Team()
    {
        if (m_eCurChannelType == ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TEAM)
        {
            if (m_LastSpeakerChatLogic != null)
            {
                m_LastSpeakerChatLogic.UpdateSpeakers();
            }
        }
    }

    public void UpdateSpeakerList_Guild()
    {
        if (m_eCurChannelType == ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_GUILD)
        {
            if (m_LastSpeakerChatLogic != null)
            {
                m_LastSpeakerChatLogic.UpdateSpeakers();
            }
        }
    }

    public void UpdateSpeakerList_Master()
    {
        if (m_eCurChannelType == ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_MASTER)
        {
            if (m_LastSpeakerChatLogic != null)
            {
                m_LastSpeakerChatLogic.UpdateSpeakers();
            }
        }
    }

    public void FilterFriendChat(UInt64 guid, string name)
    {
        if (m_FriendChatReceiverGuid == guid)
        {
            return;
        }

        m_FriendChatReceiverGuid = guid;
        m_FriendChatReceiverName = name;

        m_GameChatInput.ClearChatHistory();
        for (int i = 0; i < m_LinkList.Count; ++i)
        {
            if (null != m_LinkList[i])
            {
                Destroy(m_LinkList[i]);
            }
        }
        m_LinkList.Clear();
        Utils.CleanGrid(m_ChatInfoItemGrid.gameObject);
        //         UISprite[] spriteArray = m_EmotionItemRoot.GetComponentsInChildren<UISprite>();
        //         for (int i = 0; i < spriteArray.Length; i++)
        //         {
        //             Destroy(spriteArray[i].gameObject);
        //         }
        deletrans.Clear();

        for (int j = 0; j < GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList.Count; ++j)
        {
            ChatHistoryItem history = GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList[j];
            if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
            {
                HandleChatHistory(history);
            }
        }

        m_Input.value = "/" + name + " ";
    }

    void UpdateFriendInformSprite()
    {
        if (GameManager.gameManager.PlayerDataPool.ChatHistory.FriendSendList.Count > 0)
        {
            m_FriendInformSprite.SetActive(true);
        }
    }

    void UpdateTellInformSprite()
    {
        if (GameManager.gameManager.PlayerDataPool.ChatHistory.HasNewTellChat && m_eCurChannelType != CHANNEL_TYPE.CHAT_TYPE_TELL)
        {
            m_TellInformSprite.SetActive(true);
        }
    }

    void UpdateTeamInfoSprite()
    {
        if (GameManager.gameManager.PlayerDataPool.ChatHistory.HasTeamInfoChat && m_eCurChannelType != CHANNEL_TYPE.CHAT_TYPE_TEAM)
        {
            m_TeamInfoSprite.SetActive(true);
        }
    }

    void UpdateChatFrameInformSprite()
    {
        if (ChatFrameLogic.Instance() == null)
        {
            return;
        }

        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TELL)
        {
            if (GameManager.gameManager.PlayerDataPool.ChatHistory.HasNewTellChat)
            {
                ChatFrameLogic.Instance().m_InformSprite.SetActive(false);
                m_TellInformSprite.SetActive(false);
                GameManager.gameManager.PlayerDataPool.ChatHistory.HasNewTellChat = false;
            }
        }

        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_TEAM)
        {
            if (GameManager.gameManager.PlayerDataPool.ChatHistory.HasTeamInfoChat)
            {
                ChatFrameLogic.Instance().m_InformSprite.SetActive(false);
                m_TeamInfoSprite.SetActive(false);
                GameManager.gameManager.PlayerDataPool.ChatHistory.HasTeamInfoChat = false;
            }
        }
        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_FRIEND)
        {
            if (GameManager.gameManager.PlayerDataPool.ChatHistory.HasNewFriendChat)
            {
                ChatFrameLogic.Instance().m_InformSprite.SetActive(false);
                GameManager.gameManager.PlayerDataPool.ChatHistory.HasNewFriendChat = false;
            }
        }
    }

    void OnClickVoiceBtn()
    {
        m_VoiceTitle.SetActive(!m_VoiceTitle.activeSelf);
    }

    void RecordBegin()
    {
        if (false == m_CanSendVoice)
        {
            //当前已有语音未成功发送，待发送后可继续输入。	
            GUIData.AddNotifyData2Client(false, "#{5252}");
            return;
        }

        if (m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_FRIEND &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TEAM &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_GUILD &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_MASTER
          //&& m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TELL//密聊不支持语音
          )
        {
            GUIData.AddNotifyData2Client(false, "#{5090}");
            return;
        }

        // 录音开始的时候 把该关的都关了
        if (m_EmotionRoot.activeSelf)
        {
            m_EmotionRoot.SetActive(false);
        }
//         if (m_ChatSetupRoot.activeSelf)
//         {
//             m_ChatSetupRoot.SetActive(false);
//         }

        m_VoiceTitle.SetActive(true);
        m_ForceStopRecord = false;
        m_beginReordObj.SetActive(true);
        m_endRecordObj.SetActive(false);
#if !UNITY_EDITOR && (UNITY_IPHONE || UNITY_ANDROID || UNITY_WP8)
        m_TouchVoiceChatPos = Input.GetTouch(0).position;
#else
        m_TouchVoiceChatPos = Input.mousePosition;
#endif

        m_SpeeachLogic.StartSpeaking();
        GUIData.AddNotifyData2Client(false, StrDictionary.GetClientDictionaryString("#{3325}"));
        m_isSpeech = true;
        m_nSpeechTime = m_nStartTime;
        m_fUpdteTimes = 1;
        //StartVoiceChatCountDown();
    }

    void UpdateSpeechPressState()
    {
        if (m_isSpeech)
        {
            Vector3 vecReleasePos = new Vector3(0, 0, 0);
#if !UNITY_EDITOR && (UNITY_IPHONE || UNITY_ANDROID || UNITY_WP8)
        vecReleasePos = Input.GetTouch(0).position;
#else
            vecReleasePos = Input.mousePosition;
#endif
            if (vecReleasePos.y - m_TouchVoiceChatPos.y > 50)
            {
                m_endRecordObj.SetActive(true);
                m_beginReordObj.SetActive(false);
            }
            else
            {
                m_endRecordObj.SetActive(false);
                m_beginReordObj.SetActive(true);
            }
        }
    }
    void RecordOver()
    {
        /*byte[] buffer = Encoding.GetEncoding("utf-8").GetBytes("发送到asdf\0发送asdfasdf到\0发123");
        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_FRIEND)
        {
            m_GameChatInput.SubmitTextAndVoice("/" + m_FriendChatReceiverName + " " + "123", buffer);
        }
        else
        {
            m_GameChatInput.SubmitTextAndVoice("123阿斯蒂芬发生大发违法若违反23人23人23日前付清飞", buffer);
        }
        OnSpeechTaskOver("123", buffer);*/

        if (m_ForceStopRecord)
        {
            return;
        }

        if (m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_FRIEND &&
           m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TEAM &&
           m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_GUILD &&
           m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_MASTER 
           //&& m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TELL//密聊不支持语音
          )
        {
            return;
        }

        Vector3 vecReleasePos = new Vector3(0, 0, 0);
#if !UNITY_EDITOR && (UNITY_IPHONE || UNITY_ANDROID || UNITY_WP8)
        vecReleasePos = Input.GetTouch(0).position;
#else
        vecReleasePos = Input.mousePosition;
#endif

        m_VoiceTitle.SetActive(false);

        LogModule.DebugLog("PressRelease " + m_TouchVoiceChatPos + "=====" + vecReleasePos);

        if (vecReleasePos.y - m_TouchVoiceChatPos.y > 50)
        {
            m_SpeeachLogic.Cancel();
            GUIData.AddNotifyData2Client(false, StrDictionary.GetClientDictionaryString("#{5046}"));
        }
        else
        {
            m_SpeeachLogic.StopSpeaking();
            GUIData.AddNotifyData2Client(false, StrDictionary.GetClientDictionaryString("#{3326}"));
        }

        m_isSpeech = false;
    }

    // 收到语音识别后的解析文字结果 把文字和压缩后的语音同时发回 直接发送
    public void OnSpeechTaskOver(string Text, byte[] buffer)
    {
		if (m_isSpeech)//测试语音聊天功能，计时不足
			return;
        // 防一直按着录音说话超过6秒的
        if (m_VoiceTitle.activeInHierarchy)
        {
            m_VoiceTitle.SetActive(false);
            m_ForceStopRecord = true;
        }

        /*if (IsInVoiceChatCountDown())
        {
            ResetVoiceChatCountDown();
        }*/

        if (m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_FRIEND &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TEAM &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_GUILD &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_MASTER &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TELL)
        {
            return;
        }

        if (Utils.GetStrTextNum(Text) > MAX_TEXTNUM)
        {
            GUIData.AddNotifyData2Client(false, "#{4760}");
            return;
        }

        GameManager.gameManager.SoundManager.MusicRecover();

        if (m_eCurChannelType == CHANNEL_TYPE.CHAT_TYPE_FRIEND)
        {
            m_GameChatInput.SubmitTextAndVoice("/" + m_FriendChatReceiverName + " " + Text, buffer);
        }
        else
        {
            m_GameChatInput.SubmitTextAndVoice(Text, buffer);
        }
    }

    /*void StartVoiceChatCountDown()
    {
        InvokeRepeating("VoiceChatCountDown", 1.5f, 1.0f);
        m_ForceStopRecord = false;
        m_CanSendVoice = false;
    }

    void VoiceChatCountDown()
    {
        m_VoiceChatCountDown += 1;
        if (m_VoiceChatCountDown > 6)
        {
            // 防一直按着录音不说话超过6秒的
            if (m_VoiceTitle.activeInHierarchy)
            {
                m_VoiceTitle.SetActive(false);
                m_ForceStopRecord = true;
            }
            //请重新点击语音按钮输入。
            GUIData.AddNotifyData2Client(false, "#{5231}");

            ResetVoiceChatCountDown();
        }
    }

    void ResetVoiceChatCountDown()
    {
        CancelInvoke("VoiceChatCountDown");
        m_VoiceChatCountDown = 0;
        m_CanSendVoice = true;
    }

    bool IsInVoiceChatCountDown()
    {
        return !m_CanSendVoice;
    }*/

    public void RecordError()
    {
        if (m_VoiceTitle.activeInHierarchy)
        {
            m_VoiceTitle.SetActive(false);
            m_ForceStopRecord = true;
        }
        //请重新点击语音按钮输入。
        GUIData.AddNotifyData2Client(false, "#{5231}");
    }

    public void OnPlayVoiceChat()
    {
        //         PlayVoiceChatBtnLogic[] VoiceBtnArray = m_EmotionItemRoot.GetComponentsInChildren<PlayVoiceChatBtnLogic>();
        //         if (VoiceBtnArray == null)
        // {
        //     //             return;
        //}
        // 
        //         for (int i = 0; i < VoiceBtnArray.Length; i++)
        //         {
        //             if (VoiceBtnArray[i].VoiceChatIndex == GameManager.gameManager.PlayerDataPool.VoiceChatDownloadRecord.PlayingVoiceIndex)
        //  {
        //                 VoiceBtnArray[i].PlayVoice();
        // }
        //             else
        //             {
        //                 VoiceBtnArray[i].StopVoice();
        //             }
        //         }

        ChatInfoItemLogic[] aItem = m_ChatInfoItemGrid.gameObject.GetComponentsInChildren<ChatInfoItemLogic>();
        if (aItem == null)
        {
            return;
        }
        for (int i = 0; i < aItem.Length; i++)
        {
            aItem[i].OnPlayVoiceChatItem();
        }
    }

    public void OnPlayVoiceChatOver()
    {
        //         PlayVoiceChatBtnLogic[] VoiceBtnArray = m_EmotionItemRoot.GetComponentsInChildren<PlayVoiceChatBtnLogic>();
        //         for (int i = 0; i < VoiceBtnArray.Length; i++)
        //         {
        //             if (VoiceBtnArray[i].VoiceChatIndex == GameManager.gameManager.PlayerDataPool.VoiceChatDownloadRecord.PlayingVoiceIndex)
        //             {
        //                 VoiceBtnArray[i].StopVoice();
        //                 break;
        //             }
        //         }

        ChatInfoItemLogic[] aItem = m_ChatInfoItemGrid.gameObject.GetComponentsInChildren<ChatInfoItemLogic>();
        if (aItem == null)
        {
            return;
        }
        for (int i = 0; i < aItem.Length; i++)
        {
            aItem[i].OnPlayVoiceChatOverItem();
        }
    }

    //     public void SendFakeSystemChat(string strChatFull)
    //     {
    //         // 创建聊天Item
    //         GameObject curItem = Utils.BindObjToParent(m_ChatInfoItem, m_ChatInfoItemGrid.gameObject, (m_CurChatInfoItemIndex--).ToString());
    //         if (curItem == null)
    //         {
    //             LogModule.DebugLog("m_ChatInfoItem create error");
    //             return;
    //         }
    //         ChatInfoItemLogic AddCurChatItem = curItem.GetComponent<ChatInfoItemLogic>();
    //         if (AddCurChatItem == null)
    //         {
    //             return;
    //         }
    // 
    //         ChatHistoryItem history = new ChatHistoryItem();
    //         history.CleanUp();
    //         history.EChannel = GC_CHAT.CHATTYPE.CHAT_TYPE_SYSTEM;
    //         history.ChatInfo = strChatFull;
    // 
    //         AddCurChatItem.Init(strChatFull, history);
    //         m_ChatInfoItemGrid.Reposition();
    //    }

    public static CHANNEL_TYPE ConvertCGChannelToChatInfo(GC_CHAT.CHATTYPE chatChannel)
    {
        switch (chatChannel)
        {
            case GC_CHAT.CHATTYPE.CHAT_TYPE_VARIOUS:
                return CHANNEL_TYPE.CHAT_TYPE_VARIOUS;
            case GC_CHAT.CHATTYPE.CHAT_TYPE_SYSTEM:
                return CHANNEL_TYPE.CHAT_TYPE_SYSTEM;
            case GC_CHAT.CHATTYPE.CHAT_TYPE_WORLD:
                return CHANNEL_TYPE.CHAT_TYPE_WORLD;
            case GC_CHAT.CHATTYPE.CHAT_TYPE_GUILD:
                return CHANNEL_TYPE.CHAT_TYPE_GUILD;
            case GC_CHAT.CHATTYPE.CHAT_TYPE_TELL:
                return CHANNEL_TYPE.CHAT_TYPE_TELL;
            case GC_CHAT.CHATTYPE.CHAT_TYPE_NORMAL:
                return CHANNEL_TYPE.CHAT_TYPE_NORMAL;
            case GC_CHAT.CHATTYPE.CHAT_TYPE_MASTER:
                return CHANNEL_TYPE.CHAT_TYPE_MASTER;
            case GC_CHAT.CHATTYPE.CHAT_TYPE_PROPAGATE:
                return CHANNEL_TYPE.CHAT_TYPE_PROPAGATE;
            case GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND:
                return CHANNEL_TYPE.CHAT_TYPE_FRIEND;
            case GC_CHAT.CHATTYPE.CHAT_TYPE_TEAM:
                return CHANNEL_TYPE.CHAT_TYPE_TEAM;
            default:
                return CHANNEL_TYPE.CHANNEL_TYPE_INVALID;
        }
    }

    void SlowUpdate()
    {
      GameManager.gameManager.PlayerDataPool.ChatEditInput = m_Input.value;
    }
    public void OnActivityValueTipClick()
    {
      if (m_ActivityValueTip != null) {
        bool sign = !m_ActivityValueTip.activeSelf;
        m_ActivityValueTip.SetActive(sign);
        if (m_ChannelGrid != null) {
          BoxCollider[] bcs = m_ChannelGrid.GetComponentsInChildren<BoxCollider>();
          if (bcs != null && bcs.Length > 0) {
            for (int i = bcs.Length - 1; i > -1; --i) {
              if (bcs[i] != null) {
                bcs[i].enabled = !sign;
              }
            }
          }
        }
      }
    }
}
