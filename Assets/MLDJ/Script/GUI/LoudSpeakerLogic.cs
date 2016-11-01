using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using Games.ChatHistory;
using GCGame.Table;
using Games.GlobeDefine;
using Games.Item;
using Module.Log;
using Games.Mission;
using Games.LogicObj;

public class LoudSpeakerLogic : MonoBehaviour
{

    private static LoudSpeakerLogic m_Instance = null;
    public static LoudSpeakerLogic Instance()
    {
        return m_Instance;
    }

    // 小喇叭滚动条label状态
    public enum TEXT_STATE
    {
        TEXT_STATE_1 = 1,
        TEXT_STATE_2 = 2,
    }

    public enum ANOYMOUS_STATE
    {
        NORMAL = 0,
        ANOYMOUS = 1,
    }
	private int WorldVoiceSysShopId = 4;
	private int WorldVoiceIndex = 10;//4031对应
    public GameObject m_LoudSpeakerWindow;                            // 小喇叭节点
    public GameUIInput m_LoudSpeakerInput;                          // 小喇叭输入
    public UILabel m_NumLabel;
    public GameObject m_EmotionWindow;
    public GameObject m_EmotionWindowGrid;
    public UILabel m_TitleLabel;                                    //输入文字的提示当前剩余个数
    public UILabel m_inputLabelNum;                                 //已经输入文字的个数

    public UILabel m_LoudSpeakerItemCount;                          //当前千里传音的道具个数
    public GameObject m_Text1;
    public UILabel labelChatText1;
    public GameObject m_LinkRoot1;
    public GameObject m_EmotionRoot1;

    public GameObject m_Text2;
    public UILabel labelChatText2;
    public GameObject m_LinkRoot2;
    public GameObject m_EmotionRoot2;

    public GameObject m_VIPIcon;

    private UILabel labelChatText;
    private GameObject m_LinkRoot;
    private GameObject m_EmotionRoot;
    private Vector3 m_TextReadyPos = new Vector3();
    private Vector3 m_TextShowPos = new Vector3();

    public UISprite m_anoymousButton;
    public UISprite m_normalButton;
    private int m_curSelect = 0;
    private const string NORMAL_STR = "labanormal";
    private const string PRESS_STR = "labalight";
    public GameObject m_anBtn;
    public GameObject m_norBtn;


    // 当前小喇叭label状态
    private TEXT_STATE m_eTextStateCur = TEXT_STATE.TEXT_STATE_2;
    private bool m_ChangeText = false;                          // 是否需要滚动切换小喇叭
    private Vector3 m_ChangeTextSpeed = new Vector3(0, 40, 0);       // 小喇叭移动速度

    private UIFont m_Font;
    private float m_ChatTextHeight = 0;
    private int MaxLines = 0;

    private int m_LoudSpeakerNum = 1;
    private const int PerSubmitMax = 10;

    private ChatInfoLogic.LINK_TYPE m_eChatLinkType = ChatInfoLogic.LINK_TYPE.LINK_TYPE_INVALID;
    public ChatInfoLogic.LINK_TYPE ChatLinkType
    {
        get { return m_eChatLinkType; }
    }

    private string m_LinkText = "";                                             // 链接文字内容

    private GameItem m_EquipBuffer = new GameItem();                            // 本次聊天链接装备缓存
    public GameItem EquipBuffer
    {
        get { return m_EquipBuffer; }
    }
    private GameItem m_ItemBuffer = new GameItem();                             // 本次聊天链接物品缓存
    public GameItem ItemBuffer
    {
        get { return m_ItemBuffer; }
    }

    private UInt64 m_guildIdBuffer = 0;                                        // 本次聊天帮会Id缓存
    public UInt64 GuildBuffer
    {
        get { return m_guildIdBuffer; }
    }

    private ChatLinkLogic.MissonLinkInfo m_missionBuffer = new ChatLinkLogic.MissonLinkInfo();
    public ChatLinkLogic.MissonLinkInfo MissionBuffer
    {
        get { return m_missionBuffer; }
    }
    // 清空最后一个小喇叭 最长显示10秒 防止延迟 11秒后清空
    private float m_fClearTimer = 0;
    const int MaxShowTime = 10;
    private const string TEXT_COLOR = "[FFCC00]";
    public static int MAX_TEXTNUM = 128;
    private const int EMOTIONITEM_WIDTH = 26;
    private float SPACE_WIDTH = 0;
    private bool m_bIsYaoHe = false;
    public bool IsYaoHe
    {
        get { return m_bIsYaoHe; }
        set { m_bIsYaoHe = value; }
    }
    void Awake()
    {
        m_Instance = this;
        if (m_Font == null)
        {
            m_Font = labelChatText2.font;
            m_ChatTextHeight = m_Font.CalculatePrintedSize(" ", true, UIFont.SymbolStyle.None).y;
            SPACE_WIDTH = m_Font.CalculatePrintedSize("　", true, UIFont.SymbolStyle.Uncolored).x;
            if (m_ChatTextHeight != 0)
            {
                MaxLines = (int)(labelChatText2.height / m_ChatTextHeight);
            }
            else
            {
                MaxLines = 1;
            }
        }

        m_curSelect = 0;
        InitTextPos();
        InitEmotionButtons();
        InitAnoymousTabBtn();
    }
    // Use this for initialization
    void Start()
    {

    }

    void OnEnable()
    {
        m_Instance = this;
        m_LoudSpeakerInput.defaultText = StrDictionary.GetClientDictionaryString("#{4350}");
        labelChatText = labelChatText2;
        m_LinkRoot = m_LinkRoot2;
        m_EmotionRoot = m_EmotionRoot2;
        InitCurLoudSpeaker();
        UpdateRemainText();
        InitAnoymousTabBtn();
        UpdateLouderSpeakerCount();
    }

    void UpdateLouderSpeakerCount()
    {
        m_LoudSpeakerItemCount.text = "X0";
        if (GameManager.gameManager.PlayerDataPool.BackPack != null)
        {
            m_LoudSpeakerItemCount.text = StrDictionary.GetClientDictionaryString("#{10831}", GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(GlobeVar.QianLiChuanYinDataID));
        }
    }
    // Update is called once per frame
    void Update()
    {
        if (m_ChangeText)
        {
            ChangeText();
        }
        UpdateLouderSpeakerCount();
    }

    void OnDisable()
    {
        ClearData();
        m_Instance = null;
    }

    void InitAnoymousTabBtn()
    {
        m_curSelect = 0;
        m_anoymousButton.spriteName = NORMAL_STR;
        m_normalButton.spriteName = PRESS_STR;
        m_anBtn.name = "1";
        m_norBtn.name = "0";
    }

    void OnClickTab(GameObject obj)
    {
        int curSelect;
        if (int.TryParse(obj.name, out curSelect))
        {
            if (curSelect != m_curSelect)
            {
                m_curSelect = curSelect;
                if (m_curSelect == 0)
                {
                    m_anoymousButton.spriteName = NORMAL_STR;
                    m_normalButton.spriteName = PRESS_STR;
                    
                }
                else if (m_curSelect == 1)
                {
                    m_anoymousButton.spriteName = PRESS_STR;
                    m_normalButton.spriteName = NORMAL_STR;
                }
            }
        }
    }
    void ClearData()
    {
        if (m_LoudSpeakerWindow != null)
        {
            m_LoudSpeakerWindow.SetActive(false);
        }
        if (m_LoudSpeakerInput != null)
        {
            m_LoudSpeakerInput.value = "";
        }
        if (m_NumLabel != null)
        {
            m_NumLabel.text = "1";
        }
        if (m_EmotionWindow != null)
        {
            m_EmotionWindow.SetActive(false);
        }
        if (m_TitleLabel != null)
        {
            m_TitleLabel.text = "";
        }
        if (m_Text1 != null)
        {
            m_Text1.gameObject.transform.localPosition = m_TextReadyPos;
        }
        if (labelChatText1 != null)
        {
            labelChatText1.text = "";
        }
        if (m_LinkRoot1 != null)
        {
            Utils.CleanGrid(m_LinkRoot1);
        }
        if (m_EmotionRoot1 != null)
        {
            Utils.CleanGrid(m_EmotionRoot1);
        }
        if (m_EmotionRoot1 != null)
        {
            m_EmotionRoot1.transform.localPosition = Vector3.zero;
        }
        if (m_LinkRoot1 != null)
        {
            m_LinkRoot1.transform.localPosition = Vector3.zero;
        }
        if (m_Text2 != null)
        {
            m_Text2.gameObject.transform.localPosition = m_TextShowPos;
        }
        if (labelChatText2 != null)
        {
            labelChatText2.text = "";
        }
        if (m_LinkRoot2 != null)
        {
            Utils.CleanGrid(m_LinkRoot2);
        }
        if (m_EmotionRoot2 != null)
        {
            Utils.CleanGrid(m_EmotionRoot2);
        }
        if (m_EmotionRoot2 != null)
        {
            m_EmotionRoot2.transform.localPosition = Vector3.zero;
        }
        if (m_LinkRoot2 != null)
        {
            m_LinkRoot2.transform.localPosition = Vector3.zero;
        }

        m_eTextStateCur = TEXT_STATE.TEXT_STATE_2;
        m_ChangeText = false;
        m_LoudSpeakerNum = 1;
        ClearLinkBuffer();
    }

    /// <summary>
    /// 打开小喇叭窗口
    /// </summary>
    public void ShowLoudSpeaker()
    {
        m_LoudSpeakerWindow.SetActive(true);
        //Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2218}");
        //         if (m_EmotionRoot.activeSelf)
        //         {
        //             m_EmotionRoot.SetActive(false);
        //         }
        //         if (m_ChatSetupRoot.activeSelf)
        //         {
        //             m_ChatSetupRoot.SetActive(false);
        //         }
    }

    /// <summary>
    /// 关闭小喇叭窗口
    /// </summary>
    void CloseLoudSpeaker()
    {
        m_EmotionWindow.SetActive(false);
        m_LoudSpeakerWindow.SetActive(false);
    }

    /// <summary>
    /// 发送小喇叭
    /// </summary>
    void LoudSpeakerOnSubmit()
    {
        if (Utils.GetStrTextNum(m_LoudSpeakerInput.value) > MAX_TEXTNUM)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{4760}");
            return;
        }

        if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(GlobeVar.QianLiChuanYinDataID) < m_LoudSpeakerNum)
        {
            if (Singleton<ObjManager>.Instance.MainPlayer != null)
            {
                Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{1603}");
                return;
            }
        }

        string str = StrDictionary.GetClientDictionaryString("#{1602}", m_LoudSpeakerNum);
        MessageBoxLogic.OpenOKCancelBox(str, "", LoudSpeakerOnSubmitOK, LoudSpeakerOnSubmitCancel);
    }

    //确认发送
    public void LoudSpeakerOnSubmitOK()
    {
        CG_ASK_LOUDSPEAKER_POOL packet = (CG_ASK_LOUDSPEAKER_POOL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_LOUDSPEAKER_POOL);
        packet.SpeakerNum = m_LoudSpeakerNum;
        packet.SendPacket();
    }
    //取消发送
    public void LoudSpeakerOnSubmitCancel()
    {

    }

    void InitTextPos()
    {
        m_TextReadyPos = m_Text1.gameObject.transform.localPosition;
        m_TextShowPos = m_Text2.gameObject.transform.localPosition;
    }

    public void OnReceiveLoudSpeaker()
    {
        SelectTextNumber();
        InitCurLoudSpeaker();
        UpdateLouderSpeakerCount();
    }

    void SelectTextNumber()
    {
        if (m_eTextStateCur == TEXT_STATE.TEXT_STATE_1)
        {
            m_eTextStateCur = TEXT_STATE.TEXT_STATE_2;

            labelChatText = labelChatText2;
            m_EmotionRoot = m_EmotionRoot2;
            m_LinkRoot = m_LinkRoot2;

            if (m_Text2.gameObject.transform.localPosition == m_TextReadyPos)
            {
                m_ChangeText = true;
            }
            m_EmotionRoot2.transform.localPosition = Vector3.zero;
            m_LinkRoot2.transform.localPosition = Vector3.zero;
            return;
        }
        else if (m_eTextStateCur == TEXT_STATE.TEXT_STATE_2)
        {
            m_eTextStateCur = TEXT_STATE.TEXT_STATE_1;

            labelChatText = labelChatText1;
            m_EmotionRoot = m_EmotionRoot1;
            m_LinkRoot = m_LinkRoot1;

            if (m_Text1.gameObject.transform.localPosition == m_TextReadyPos)
            {
                m_ChangeText = true;
            }
            m_EmotionRoot1.transform.localPosition = Vector3.zero;
            m_LinkRoot1.transform.localPosition = Vector3.zero;
            return;
        }
    }

    void InitCurLoudSpeaker()
    {
        int HistoryCount = GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList.Count;
        if (HistoryCount > 0)
        {
            int nLastLoudSpeakerIndex = -1;
            List<ChatHistoryItem> listChatHistory = GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList;
            for (int i = listChatHistory.Count - 1; i >= 0; i--)
            {
                if (listChatHistory[i].EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_LOUDSPEAKER &&
                    !string.IsNullOrEmpty(listChatHistory[i].ChatInfo))
                {
                    nLastLoudSpeakerIndex = i;
                    break;
                }
            }
            if (nLastLoudSpeakerIndex != -1)
            {
                // 显示聊天信息
                ChatHistoryItem LastLoudSpeaker = listChatHistory[nLastLoudSpeakerIndex];
                string strSenderName = "";
                if (LastLoudSpeaker.ELinkType.Count > 0 && LastLoudSpeaker.GetLinkIntDataCountByIndex(0) == (int)GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE)
                {
                    strSenderName = "[" + StrDictionary.GetClientDictionaryString("#{3108}", "") + "]:";
                }
                else
                {
                    strSenderName = StrDictionary.GetClientDictionaryString("#{2824}", LastLoudSpeaker.SenderName);
                }

                string strChatInfo = LastLoudSpeaker.ChatInfo;
                string strChatFull = strSenderName + strChatInfo;

                strChatFull = ShowVIPIcon(strChatFull, LastLoudSpeaker);

                if (LastLoudSpeaker.ELinkType.Count > 0)
                {
                    strChatFull = MakeLinkEnabled(strChatFull, LastLoudSpeaker);
                }

                strChatFull = MakeEmotionEnabled(strChatFull);

                if (!(LastLoudSpeaker.ELinkType.Count > 0 && LastLoudSpeaker.GetLinkIntDataCountByIndex(0) == (int)GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE))
                {
                    strChatFull = MakeNameLinkEnabled(strChatFull, LastLoudSpeaker);
                }

                ConfirmEllipsis(ref strChatFull);
                strChatFull = TEXT_COLOR + strChatFull;
                labelChatText.text = strChatFull;

                UpdateEmotionLinkPos(strChatFull);

                m_fClearTimer = Time.fixedTime;
            }
        }
    }

    string MakeNameLinkEnabled(string fulltext, ChatHistoryItem history)
    {
        if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
        {
            GameObject link = null;
            link = ResourceManager.LoadChatLink(m_LinkRoot);
            if (link != null && m_Font != null)
            {
                UInt64 linkguid = history.SenderGuid;
                string linkname = history.SenderName;
                string stripText = NGUITools.StripSymbols(fulltext);
                int linkstart = stripText.IndexOf(linkname) - 1;
                int linkend = stripText.IndexOf(linkname) + linkname.Length;
                Vector2 LeftSideSpace = m_Font.CalculatePrintedSize(stripText.Substring(0, linkstart), true, UIFont.SymbolStyle.Uncolored);
                Vector2 RightSideSpace = m_Font.CalculatePrintedSize(stripText.Substring(0, linkend + 1), true, UIFont.SymbolStyle.Uncolored);
                link.transform.localPosition = new Vector3((LeftSideSpace.x + RightSideSpace.x) / 2, m_ChatTextHeight / 2, 0);
                link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_ChatTextHeight, 0);
                link.GetComponent<ChatLinkLogic>().Init_NameLink(linkguid, linkname);
                fulltext = fulltext.Substring(0, linkstart) + "[FFFF10]" + fulltext.Substring(linkstart, linkname.Length + 2) + TEXT_COLOR + fulltext.Substring(linkend + 1);
            }
        }
        return fulltext;
    }

    string ShowVIPIcon(string fulltext, ChatHistoryItem history)
    {
        if (history.SenderGuid == GlobeVar.INVALID_GUID || history.SenderName == "" || null == m_Font)
        {
            return fulltext;
        }

        int nSenderVIPLevel = history.SenderVIPLevel;
        if (nSenderVIPLevel <= 0)
        {
            return fulltext;
        }

        int nSenderNameIndex = fulltext.IndexOf("【" + history.SenderName + "】");
        if (nSenderNameIndex < 0)
        {
            return fulltext;
        }

        fulltext = fulltext.Substring(0, nSenderNameIndex) + "　" + fulltext.Substring(nSenderNameIndex);
        float fLeftSpace = m_Font.CalculatePrintedSize(fulltext.Substring(0, nSenderNameIndex), true, UIFont.SymbolStyle.Uncolored).x;

        GameObject emotion = Utils.BindObjToParent(m_VIPIcon, m_EmotionRoot, "vipicon");
        if (emotion != null)
        {
            emotion.GetComponent<UISprite>().spriteName = VipData.GetStarIconByLevel(nSenderVIPLevel);
            emotion.transform.localPosition = new Vector3(fLeftSpace - 2, m_ChatTextHeight / 2, 0);
        }
        return fulltext;
    }

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
            fulltext = fulltext.Substring(0, fulltext.IndexOf("</a>")) + TEXT_COLOR + fulltext.Substring(fulltext.IndexOf("</a>") + 4);

            Vector2 LeftSideSpace, RightSideSpace;
            int nNextLineNum;
            bool bNeedShow;
            CalculateLinkSpace(ref fulltext, linkstart_whole, linkstart, linkend, out LeftSideSpace, out RightSideSpace, out nNextLineNum, out bNeedShow);
            m_ChatTextHeight = RightSideSpace.y;

            if (bNeedShow)
            {
                GameObject link = null;
                link = ResourceManager.LoadChatLink(m_LinkRoot);
                if (link != null)
                {
                    link.transform.localPosition = new Vector3((LeftSideSpace.x + RightSideSpace.x) / 2, m_ChatTextHeight / 2, 0);
                    link.transform.localPosition -= new Vector3(0, m_ChatTextHeight * nNextLineNum, 0);
                    link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_ChatTextHeight, 0);
                    link.GetComponent<ChatLinkLogic>().Init(history, linkindex);
                }
            }
            else
            {
                fulltext = fulltext.Replace("<a>", "");
                fulltext = fulltext.Replace("</a>", "");
            }

            linkindex += 1;
        }

        return fulltext;
    }

    void CalculateLinkSpace(ref string text, int linkstart_whole, int linkstart, int linkend, out Vector2 LeftSideSpace, out Vector2 RightSideSpace, out int nNextLineNum, out bool needShow)
    {
        nNextLineNum = 0;
        LeftSideSpace = Vector2.zero;
        RightSideSpace = Vector2.zero;
        needShow = true;

        if (null == m_Font)
            return;

        //拆分再合并字符串 防止把加了中括号的玩家名字当颜色代码解析了。。。只解析说话内容中的颜色代码
        //已修改StripSymbols代码 不会把名字当颜色代码解析
        //         int nChatStart = text.IndexOf("说：");
        //         string strPrefix = text.Substring(0, nChatStart);
        //         string strChat = text.Substring(nChatStart);
        //         string striptext = strPrefix + NGUITools.StripSymbols(strChat);
        string striptext = NGUITools.StripSymbols(text);

        LeftSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, linkstart), true, UIFont.SymbolStyle.None);
        RightSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, linkend), true, UIFont.SymbolStyle.None);
        float fLinkLength = RightSideSpace.x - LeftSideSpace.x;
        float fEllipsisWidth = m_Font.CalculatePrintedSize("...", true, UIFont.SymbolStyle.None).x;

        int nLeftNextLineNum = 0;
        int nRightNextLineNum = 0;
        if (LeftSideSpace.x > labelChatText.GetComponent<UIWidget>().width * MaxLines - fEllipsisWidth ||
            RightSideSpace.x > labelChatText.GetComponent<UIWidget>().width * MaxLines - fEllipsisWidth)
        {
            needShow = false;
            return;
        }

        int nLineStart = 0;
        for (int i = nLineStart + 1; i <= linkstart; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.None).x;
            if (fChatWidth > labelChatText.width)
            {
                nLeftNextLineNum += 1;
                LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.None).x;
                nLineStart = i - 1;
            }
        }

        nLineStart = 0;
        for (int i = nLineStart + 1; i <= linkend; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.None).x;
            if (fChatWidth > labelChatText.width)
            {
                nRightNextLineNum += 1;
                RightSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.None).x;
                nLineStart = i - 1;
            }
        }

        nNextLineNum = nRightNextLineNum;

        // 是否超出范围 需要让链接另起一行
        if (nLeftNextLineNum < nRightNextLineNum)
        {
            text = text.Substring(0, linkstart_whole) + Environment.NewLine + text.Substring(linkstart_whole);
            //RightSideSpace.x = RightSideSpace.x - LeftSideSpace.x;
            LeftSideSpace.x = 0;
            RightSideSpace.x = fLinkLength;
        }
    }

    string MakeEmotionEnabled(string fulltext)
    {
        while (Utils.IsContainEmotion(fulltext))
        {
            Vector2 fLeftSideSpace;
            int nNextLineNum;
            bool bNeedShow;

            CalculateEmotionSpace(ref fulltext, out fLeftSideSpace, out nNextLineNum, out bNeedShow);
            m_ChatTextHeight = fLeftSideSpace.y;

            int nEmotionStart = fulltext.IndexOf("[em=");
            int nEmotionEnd = fulltext.Substring(nEmotionStart).IndexOf("]") + nEmotionStart;

            string strEmotion = fulltext.Substring(nEmotionStart, nEmotionEnd - nEmotionStart + 1);
            string strSpriteID = strEmotion.Substring(4).Replace("]", "");

            if (bNeedShow)
            {
                GameObject emotion = ResourceManager.LoadEmotionItem(m_EmotionRoot);
                if (emotion != null)
                {
                    emotion.GetComponent<UISprite>().spriteName = "emotion (" + strSpriteID + ")";

                    emotion.transform.localPosition = new Vector3(fLeftSideSpace.x, m_ChatTextHeight / 2, 0);
                    emotion.transform.localPosition -= new Vector3(0, m_ChatTextHeight * nNextLineNum, 0);

                    string spaceEmotionItem = GetSpaceEmotionItem(emotion);
                    fulltext = fulltext.Substring(0, nEmotionStart) + spaceEmotionItem + fulltext.Substring(nEmotionEnd + 1);
                }
            }
            else
            {
                fulltext = fulltext.Substring(0, nEmotionStart) + fulltext.Substring(nEmotionEnd + 1);
                break;
            }
        }
        return fulltext;
    }

    void CalculateEmotionSpace(ref string text, out Vector2 LeftSideSpace, out int nNextLineNum, out bool needShow)
    {
        nNextLineNum = 0;
        LeftSideSpace = Vector2.zero;
        needShow = true;

        if (null == m_Font)
            return;

        //拆分再合并字符串 防止把加了中括号的玩家名字当颜色代码解析了。。。只解析说话内容中的颜色代码
        //已修改StripSymbols代码 不会把名字当颜色代码解析
        //         int nChatStart = text.IndexOf("说：");
        //         string strPrefix = text.Substring(0, nChatStart);
        //         string strChat = text.Substring(nChatStart);
        //         string striptext = strPrefix + NGUITools.StripSymbols(strChat);
        string striptext = NGUITools.StripSymbols(text);

        int stripEmotionStart = striptext.IndexOf("[em=");
        LeftSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, stripEmotionStart), true, UIFont.SymbolStyle.Uncolored);
        float fEllipsisWidth = m_Font.CalculatePrintedSize("...", true, UIFont.SymbolStyle.None).x;
        if (LeftSideSpace.x + EMOTIONITEM_WIDTH > labelChatText.GetComponent<UIWidget>().width * MaxLines - fEllipsisWidth)
        {
            needShow = false;
            return;
        }

        int nLineStart = 0;
        for (int i = nLineStart + 1; i <= stripEmotionStart; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.None).x;
            if (i == stripEmotionStart)
            {
                if (fChatWidth > labelChatText.width)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                    nLineStart = i - 1;
                }
                else if (fChatWidth + SPACE_WIDTH > labelChatText.width)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x = 0;
                }
            }
            else
            {
                if (fChatWidth > labelChatText.width)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                    nLineStart = i - 1;
                }
            }
        }
    }

    string GetSpaceEmotionItem(GameObject emotion)
    {
        //         float spaceWidth = m_Font.CalculatePrintedSize(" ", true, UIFont.SymbolStyle.Uncolored).x;
        //         int emotionWidth = emotion.GetComponent<UISprite>().width;
        //         int spaceNum = Mathf.CeilToInt((float)emotionWidth / spaceWidth);
        //         string strResult = "";
        //         for (int i = 0; i < spaceNum; i++)
        //         {
        //             strResult += " ";
        //         }
        //         return strResult;
        return "　";
    }

    void ConfirmEllipsis(ref string strChatFull)
    {
        if (null == m_Font)
            return;

        float fChatWidth = m_Font.CalculatePrintedSize(strChatFull, true, UIFont.SymbolStyle.None).x;
        if (fChatWidth > labelChatText.width * MaxLines)
        {
            string strCurChat = strChatFull;
            float fCurChatWidth;
            do
            {
                strCurChat = strCurChat.Substring(0, strCurChat.Length / 2);
                fCurChatWidth = m_Font.CalculatePrintedSize(strCurChat, true, UIFont.SymbolStyle.None).x;
            } while (fCurChatWidth > labelChatText.width * MaxLines);

            for (int i = strCurChat.Length; i < strChatFull.Length; i++)
            {
                if (m_Font.CalculatePrintedSize(strChatFull.Substring(0, i), true, UIFont.SymbolStyle.None).x >= labelChatText.width * MaxLines)
                {
                    strChatFull = strChatFull.Substring(0, i - 2) + "...";
                    break;
                }
            }
        }
    }

    void UpdateEmotionLinkPos(string strChatFull)
    {
        if (null == m_Font)
            return;

        float fChatWidth = m_Font.CalculatePrintedSize(strChatFull.Replace(Environment.NewLine, ""), true, UIFont.SymbolStyle.None).x;
        int moveHeight = Mathf.CeilToInt(fChatWidth / labelChatText.width) - 1;
        if (moveHeight > MaxLines - 1)
        {
            moveHeight = MaxLines - 1;
        }

        m_EmotionRoot.transform.localPosition += new Vector3(0, moveHeight * m_ChatTextHeight, 0);
        m_LinkRoot.transform.localPosition += new Vector3(0, moveHeight * m_ChatTextHeight, 0);
    }

    void AddLoudSpeakerNum()
    {
        if (m_LoudSpeakerNum + 1 > PerSubmitMax)
        {
            return;
        }
        m_LoudSpeakerNum += 1;
        m_NumLabel.text = m_LoudSpeakerNum.ToString();
    }

    void SubtractLoudSpeakerNum()
    {
        if (m_LoudSpeakerNum - 1 <= 0)
        {
            return;
        }
        m_LoudSpeakerNum -= 1;
        m_NumLabel.text = m_LoudSpeakerNum.ToString();
    }

    public void SendLoudSpeakerInfo()
    {
        string text = m_LoudSpeakerInput.value;
        if (!string.IsNullOrEmpty(text))
        {
            text = Utils.StrFilter_Chat(text);
            text = NGUITools.StripSymbols(text);
            int anoymousState = m_curSelect != 0 ? (int)ANOYMOUS_STATE.ANOYMOUS:(int) ANOYMOUS_STATE.NORMAL;
            Utils.SendLoudSpeaker(text, m_LoudSpeakerNum,anoymousState);
            m_LoudSpeakerInput.value = "";
            m_LoudSpeakerWindow.SetActive(false);
        }
        else
        {
            if (Singleton<ObjManager>.Instance.MainPlayer != null)
            {
                Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, StrDictionary.GetClientDictionaryString("#{1601}"));
            }
        }
    }

    void ChangeText()
    {
        m_Text1.gameObject.transform.localPosition += Time.deltaTime * m_ChangeTextSpeed;
        m_Text2.gameObject.transform.localPosition += Time.deltaTime * m_ChangeTextSpeed;

        if (m_eTextStateCur == TEXT_STATE.TEXT_STATE_1)
        {
            if (m_Text1.gameObject.transform.localPosition.y >= m_TextShowPos.y)
            {
                m_Text1.gameObject.transform.localPosition = m_TextShowPos;
                m_Text2.gameObject.transform.localPosition = m_TextReadyPos;

                Utils.CleanGrid(m_LinkRoot2);
                Utils.CleanGrid(m_EmotionRoot2);

                labelChatText2.text = "";
                m_ChangeText = false;
            }
        }

        if (m_eTextStateCur == TEXT_STATE.TEXT_STATE_2)
        {
            if (m_Text2.gameObject.transform.localPosition.y >= m_TextShowPos.y)
            {
                m_Text2.gameObject.transform.localPosition = m_TextShowPos;
                m_Text1.gameObject.transform.localPosition = m_TextReadyPos;

                Utils.CleanGrid(m_LinkRoot1);
                Utils.CleanGrid(m_EmotionRoot1);

                labelChatText1.text = "";
                m_ChangeText = false;
            }
        }
    }

    void ShowOrCloseEmotionRoot()
    {
        m_EmotionWindow.SetActive(!m_EmotionWindow.activeSelf);
    }

    public void CloseEmotionRoot()
    {
        m_EmotionWindow.SetActive(false);
    }

    void InitEmotionButtons()
    {
        for (int i = 0; i < GlobeVar.EmotionTiger_Num; i++)
        {
            GameObject EmotionButton = ResourceManager.LoadEmotionButton(m_EmotionWindowGrid, i);
            if (EmotionButton != null)
            {
                EmotionButton.GetComponent<UISprite>().spriteName = "emotion (" + (i + 1).ToString() + ")";
            }
        }
        m_EmotionWindowGrid.GetComponent<UIGrid>().Reposition();
    }

    public bool IsLoudSpeakerWindowShow()
    {
        return m_LoudSpeakerWindow.activeSelf;
    }

    public void InsertEmotion(GameObject value)
    {
        string name = value.GetComponent<UISprite>().spriteName;
        string id = name.Replace("emotion (", "").Replace(")", "");
        string strEmotion = "[em=" + id + "]";
        if (Utils.GetStrTextNum(m_LoudSpeakerInput.value + strEmotion) <= MAX_TEXTNUM)
        {
            m_LoudSpeakerInput.value += strEmotion;
            UpdateRemainText();
        }
    }

    public string InsertLinkSymbols(string text)
    {
        if (m_eChatLinkType != ChatInfoLogic.LINK_TYPE.LINK_TYPE_INVALID && m_eChatLinkType != ChatInfoLogic.LINK_TYPE.LINK_TYPE_INVALID1)
        {
            text = text.Replace(m_LinkText, "<a>" + m_LinkText + "</a>");
            if (m_eChatLinkType == ChatInfoLogic.LINK_TYPE.LINK_TYPE_GUILD)
            {
                text = StrDictionary.GetClientDictionaryString("#{3111}", GameManager.gameManager.PlayerDataPool.GuildInfo.GuildName) + text;
            }
        }
        return text;
    }

    public void InsertEquipLinkText(GameItem equip)
    {
        ClearLinkBuffer();
        m_EquipBuffer = equip;
        m_eChatLinkType = ChatInfoLogic.LINK_TYPE.LINK_TYPE_EQUIP;
        m_LinkText = "[" + TableManager.GetCommonItemByID(m_EquipBuffer.DataID, 0).Name + "]";
        m_LoudSpeakerInput.value = string.Format("{0}{1}", m_LinkText, ShareTargetChooseLogic.AdditionShareMsg);
        m_bIsYaoHe = ShareTargetChooseLogic.IsYaoHe;
    }

    public void InsertItemLinkText(GameItem item)
    {
        ClearLinkBuffer();
        m_ItemBuffer = item;
        m_eChatLinkType = ChatInfoLogic.LINK_TYPE.LINK_TYPE_ITEM;
        m_LinkText = "[" + TableManager.GetCommonItemByID(m_ItemBuffer.DataID, 0).Name + "]";
        m_LoudSpeakerInput.value = string.Format("{0}{1}", m_LinkText, ShareTargetChooseLogic.AdditionShareMsg);
        m_bIsYaoHe = ShareTargetChooseLogic.IsYaoHe;
    }

    public void InsertGuildLinkText(UInt64 guild)
    {
        ClearLinkBuffer();
        m_eChatLinkType = ChatInfoLogic.LINK_TYPE.LINK_TYPE_GUILD;
        m_guildIdBuffer = guild;

        m_LinkText = "[" + StrDictionary.GetClientDictionaryString("#{3294}") + "]";
        m_LoudSpeakerInput.value = string.Format("{0}{1}", m_LinkText, ShareTargetChooseLogic.AdditionShareMsg);
    }

    public void ClearLinkBuffer()
    {
        m_eChatLinkType = ChatInfoLogic.LINK_TYPE.LINK_TYPE_INVALID;
        m_LinkText = "";
        m_ItemBuffer = null;
        m_EquipBuffer = null;
        m_guildIdBuffer = 0;
        m_missionBuffer.CleanUp();
    }

    public void UpdateRemainText()
    {
        int nTextNum = Utils.GetStrTextNum(m_LoudSpeakerInput.value);
        m_inputLabelNum.text = nTextNum.ToString();
        if (nTextNum >= MAX_TEXTNUM)
        {
            m_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{2720}", 0);
        }
        else
        {
            m_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{2720}", MAX_TEXTNUM - nTextNum);
        }
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

        //发送给服务器的链接携带的数据
        m_missionBuffer.missionId = nMissionID;
        m_missionBuffer.missionDesc = "";
        m_missionBuffer.missionAwardId = -1;
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


        m_eChatLinkType = ChatInfoLogic.LINK_TYPE.LINK_TYPE_MISSION;
        m_LinkText = "[" + m_missionBuffer.missionName + "]";
        m_LoudSpeakerInput.value = string.Format("{0}{1}", m_LinkText, StrDictionary.GetClientDictionaryString("#{10676}"));

    }

    public void OnClickBuy(GameObject obj)
    {
      Tab_SystemShop sysShopTable = TableManager.GetSystemShopByID(WorldVoiceSysShopId, 0);
      if (sysShopTable != null && sysShopTable.CanBuyMulty > 0) {
        int ciid = sysShopTable.GetPidbyIndex(WorldVoiceIndex);
        string medicalName = "World Voice";
        Tab_CommonItem tcitem = TableManager.GetCommonItemByID(ciid, 0);
        if (tcitem == null)
          return;
        else 
          medicalName = tcitem.Name;
       
//		Tab_CommonItem buyItem = TableManager.GetCommonItemByID(WorldVoiceIndex, 0);
//		medicalName = buyItem.Name;
        string goldMoneyShopTitle = StrDictionary.GetClientDictionaryString("#{10955}", medicalName);
        string goldMoneyShopTotalTitle = StrDictionary.GetClientDictionaryString("#{2837}");
        string oktitle = StrDictionary.GetClientDictionaryString("#{2837}");
        string currencyIcon = string.Empty;
        int moneyType = sysShopTable.GetMoneyTypebyIndex(WorldVoiceIndex);
        int moneySubType = sysShopTable.GetMoneySubTypebyIndex(WorldVoiceIndex);
		int price = sysShopTable.GetPricebyIndex(WorldVoiceIndex);
//		int moneyType = 1;
//		int moneySubType = buyItem.SellMoneyType;
//		int price = buyItem.SellPrice;
        int stepPerClick = 1;
        if (moneyType == (int)Consume_Type.COIN) {
          currencyIcon = "qian5";
          stepPerClick = 10;
        } else if (moneyType == (int)Consume_Type.YUANBAO) {
          if (moneySubType == (int)Consume_SubType.YUANBAO_NORMAL) {
            currencyIcon = "qian2";
          } else if (moneySubType == (int)Consume_SubType.YUANBAO_BIND) {
            currencyIcon = "qian3";
          }
        }
        NumChooseController.OpenWindow(1, 999, goldMoneyShopTitle, OnNumChoose, stepPerClick, goldMoneyShopTotalTitle, oktitle,
			                               true, "", currencyIcon, price);
      } else {
        MessageBoxLogic.OpenOKBox(1004, 1000);
      }
    }
    void OnNumChoose(int curNum)
    {
      SysShopController.SetShopId = 4;
      SysShopController.BuyItem(WorldVoiceIndex.ToString(), curNum);
    }
}
