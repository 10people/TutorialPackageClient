using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using Games.ChatHistory;
using GCGame.Table;
using Games.GlobeDefine;
using GCGame;
using Module.Log;
using System.Text;

public class ChatInfoItemLogic : MonoBehaviour
{
    //别人讲话
    public GameObject FY_templateOther;
    public UISprite m_HeadOther;//头像
    public UILabel m_LevelOther;//等级
    public UISprite m_BackgroundOthers;//背景
    public UILabel m_LabelChatTitleOthers;//频道+名字
    public UILabel m_LabelChatDetailOthers;//聊天内容
    public int m_Profession;//职业
    public UISprite[] ProfessionSpritesOthers;//职业头像
    public GameObject m_LinkRootOthers;//链接管理
    public GameObject m_ChatEmotionRootOthers;//聊天内容表情管理
    public GameObject m_LabelEmotionRootOthers;//VIP图标管理

    //自己讲话
    public GameObject FY_templateMe;
    public UISprite m_HeadMe;//头像
    public UILabel m_LevelMe;//等级
    public UISprite m_BackgroundMe;//背景
    public UILabel m_LabelChatTitleMe;//频道+名字
    public UILabel m_LabelChatDetailMe;//聊天内容
    public UISprite[] ProfessionSpritesMe;//职业头像
    public GameObject m_LinkRootMe;//链接管理
    public GameObject m_ChatEmotionRootMe;//聊天内容表情管理
    public GameObject m_LabelEmotionRootMe;//VIP图标管理
    private string Str_Space = " ";
    private int SPACE_WIDTH = 0;
    private int m_ChatInfoItemWidth = 482;//默认ChatMe定宽
    private int m_ChatSpaceCount = 0;//ChatMe补空格个数
    //语音聊天
    public GameObject m_PlayVoiceChatBtn;
    private GameObject VoiceEmotion;
    //标准字体用来计算
    public UIFont m_Font;//默认字体
    public UILabel m_LabelChat;//默认标签模板
    private List<GameObject> clearItemList = new List<GameObject>();//所有表情、图片挂载点
    private float m_Space_Height = 0;//空格高度
    private float m_Space_Width = 0;//空格宽度
    public float m_ChatMaxHeight = 0;//聊天内容行数
   
    // 链接移动方向 注意链接移动方向是与拖动条滚动方向相反的 拖动条向上 链接向下
    public enum EMOTIONLINK_MOVE_DIRECTION
    {
        EMOTIONLINK_MOVE_DOWN = -1,
        EMOTIONLINK_MOVE_UP = 1,
    }
    private List<GameObject> m_LinkList = new List<GameObject>();               // 聊天栏中所有链接的list
    public List<GameObject> LinkList
    {
        get { return m_LinkList; }
    }
    //查看玩家信息
    private ChatInfoLogic m_ChatInfoLogic = null;
    public ChatInfoLogic ChatInfoLogic
    {
        get { return m_ChatInfoLogic; }
        set { m_ChatInfoLogic = value; }
    }
    private LastSpeakerChatLogic m_LastSpeakerChatLogic = null;
    public LastSpeakerChatLogic LastSpeakerChatLogic
    {
        get { return m_LastSpeakerChatLogic; }
        set { m_LastSpeakerChatLogic = value; }
    }
    private UInt64 m_SpeakerGuid = GlobeVar.INVALID_GUID;
    public UInt64 SpeakerGuid
    {
        get { return m_SpeakerGuid; }
        set { m_SpeakerGuid = value; }
    }

    private string m_SpeakerName = "";
    public string SpeakerName
    {
        get { return m_SpeakerName; }
        set { m_SpeakerName = value; }
    }
    private int m_SpeakerLevel = -1;
    public int SpeakerLevel
    {
        get { return m_SpeakerLevel; }
        set { m_SpeakerLevel = value; }
    }
    private int m_SpeakerProfession = -1;
    public int SpeakerProfession
    {
        get { return m_SpeakerProfession; }
        set { m_SpeakerProfession = value; }
    }

    void Awake()
    {
#if UNITY_IPHONE || UNITY_WP8 || UNITY_BLACKBERRY   //|| UNITY_ANDROID
        //TouchScreenKeyboard.hideInput = true;
		TouchScreenKeyboard.hideInput = false;
#endif
    }

    // Use this for initialization
    void Start()
    {
        clearItemList.Add(m_LinkRootOthers);
        clearItemList.Add(m_ChatEmotionRootOthers);
        clearItemList.Add(m_LabelEmotionRootOthers);
        clearItemList.Add(m_LinkRootMe);
        clearItemList.Add(m_ChatEmotionRootMe);
        clearItemList.Add(m_LabelEmotionRootMe);
    }
    void OnEnable()
    {
        m_Space_Height = m_Font.CalculatePrintedSize(" 　", true, UIFont.SymbolStyle.None).y;
    }
    
    void OnDestroy()
    {
#if UNITY_IPHONE || UNITY_WP8 || UNITY_BLACKBERRY //|| UNITY_ANDROID
        TouchScreenKeyboard.hideInput = false;
#endif
    }
    public void Init(string strChatFull, ChatHistoryItem history)
    {
        m_SpeakerGuid = history.SenderGuid;
        m_SpeakerName = history.SenderName;
        m_SpeakerLevel = history.SenderLevel;
        m_SpeakerProfession = history.SenderPro;
        MakeTitleEnable(strChatFull, history);//初始化聊天
        MakeHeadEnabled(strChatFull, history);
        gameObject.name = ChatInfoLogic.CurChatInfoItemIndex.ToString();
        ChatInfoLogic.CurChatInfoItemIndex--;
    }

    void ShowChatInfo()
    {
        UIManager.ShowUI(UIInfo.ChatInfoRoot);
    }
    //头像、等级信息
    public string MakeHeadEnabled(string fulltext, ChatHistoryItem history)
    {
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer &&
            history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            m_Profession = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
            if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
            {
                if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
                {
                    FY_templateOther.SetActive(false);
                    m_LevelMe.text = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level.ToString();
                    //m_Profession = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
                    for (int i = 0; i < 4 && i < ProfessionSpritesMe.Length; i++)
                    {
                        ProfessionSpritesMe[i].gameObject.SetActive(m_Profession == i);
                        //m_HeadMe.gameObject.SetActive(false);
                    }
                }
                else
                {
                    FY_templateOther.SetActive(false);
//                     m_LevelMe.text = history.SenderLevel.ToString();
//                     m_Profession = (int)history.SenderPro;
                    for (int i = 0; i < 4 && i < ProfessionSpritesMe.Length; i++)
                    {
                        ProfessionSpritesMe[i].gameObject.SetActive(m_Profession == i);
                        //m_HeadMe.gameObject.SetActive(false);
                    }
                }
            }
            else
            {
                FY_templateOther.SetActive(false);
                m_LevelMe.text = null;
                //m_HeadMe.gameObject.SetActive(false);
            }
        }
        else
        {
            if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
            {
                FY_templateMe.SetActive(false);
                 m_LevelOther.text = history.SenderLevel.ToString();
                 m_Profession = (int)history.SenderPro;
                for (int i = 0; i < 4 && i < ProfessionSpritesOthers.Length; i++)
                {
                    ProfessionSpritesOthers[i].gameObject.SetActive(m_Profession == i);
                    //m_HeadOther.gameObject.SetActive(false);
                }
            }
            else
            {
                FY_templateMe.SetActive(false);
                m_LevelOther.text = null;
                //m_HeadOther.gameObject.SetActive(false);
            }
        }
        return fulltext;
    }
    //初始化聊天title和内容
    public void MakeTitleEnable(string fulltext, ChatHistoryItem history)
    {
        if (string.IsNullOrEmpty(history.ChatInfo))
        {
            return;
        }
        string strChannelName = "";
//         if (history.EChannel != GC_CHAT.CHATTYPE.CHAT_TYPE_PROVINCE)
//         {
            strChannelName = Utils.GetChannelName((int)history.EChannel);
    //    }
//         else
//         {
//             strChannelName = Utils.GetProvinceName(history.ProvinceID);
//             strChannelName = StrDictionary.GetClientDictionaryString("#{5680}", strChannelName);
//         }
        string strSenderName = "";
        string strChatInfo = history.ChatInfo;
        if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND
            || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_SYSTEM || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_GUILD)
        {
            // 系统频道可能无发送人
            if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
            {
                //strSenderName = StrDictionary.GetClientDictionaryString("#{5548}", history.SenderName);//{0}
                strSenderName = history.SenderName;//{0}
            }
            
            if (strChatInfo.Length > 0 && strChatInfo[0] == '#')
            {
                strChatInfo = StrDictionary.GetServerDictionaryFormatString(strChatInfo);
            }

            if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_SYSTEM)
            {
                strSenderName = StrDictionary.GetClientDictionaryString("#{4336}");
            }
        }
        else if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_LOUDSPEAKER)
        {
            //strSenderName = StrDictionary.GetClientDictionaryString("#{5548}", history.SenderName);//{0}：
            strSenderName = history.SenderName;
            if (strChatInfo.Length > 0 && strChatInfo[0] == '#')
            {
                strChatInfo = StrDictionary.GetServerDictionaryFormatString(strChatInfo);
            }
        }
        else
        {
            if (history.ELinkType.Count > 0 && history.GetLinkIntDataCountByIndex(0) == (int)GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE)
            {
                strSenderName = "[" + StrDictionary.GetClientDictionaryString("#{3108}", "") + "]:";//招募
            }
            else
            {
                //strSenderName = StrDictionary.GetClientDictionaryString("#{5548}", history.SenderName);//{0}
                strSenderName = history.SenderName;
            }
        }
        string strChatTitle = strChannelName + strSenderName;//频道+名字
        string strChannelColor = Utils.GetChannelColor(history);
        strChatTitle = strChannelColor + strChatTitle;
        strChatTitle = ShowVIPIcon(strChatTitle, history);
        string strChatDetail = null;
        if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
        {
            strChatDetail = strChatInfo;
            strChannelColor = "[FFFFFF]";
        }
        else
        {
            if (history.EChannel != GC_CHAT.CHATTYPE.CHAT_TYPE_SYSTEM)
            {
                strChatDetail = strChatTitle + strChatInfo;
                strChatTitle = null;
                strChannelColor = Utils.GetChannelColor(history);

            }
            else // 系统消息特殊处理，有其他需要也在这里进行处理
            {
                strChatDetail = strChatInfo;
                strChannelColor = Utils.GetChannelColor(history);
            }
        }
        m_Space_Width = m_Font.CalculatePrintedSize(" 　", true, UIFont.SymbolStyle.Uncolored).x;
        
        SelectTextNumber();
        // 显示聊天信息
        if (history.ELinkType.Count > 0)
        {
            strChatDetail = MakeLinkEnabled(strChatDetail, history);
        }
        strChatDetail = MakeEmotionEnabled(strChatDetail,history);
        strChatDetail = ShowPlayVoiceBtn(strChatDetail, history);
        
        strChatDetail = strChannelColor + strChatDetail;
        StringBuilder bd = new StringBuilder(512);
        if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            SPACE_WIDTH = (int)m_Font.CalculatePrintedSize(" ", true, UIFont.SymbolStyle.Uncolored).x;
            Vector2 space = m_Font.CalculatePrintedSize(strChatDetail, true, UIFont.SymbolStyle.Uncolored);
			//如果没有换行 前面塞点空格，把文字往右边推下 （什么玩意破代码，写的都什么啊。。。。。rubbish）
			if(!strChatDetail.Contains(Environment.NewLine))
			{
				if (space.x < m_ChatInfoItemWidth && SPACE_WIDTH != 0)
				{
					m_ChatSpaceCount = (int)((m_ChatInfoItemWidth - space.x) / SPACE_WIDTH);
					for (int i = 0; i < m_ChatSpaceCount; i++)
					{
						bd.Append(Str_Space);
					}
					strChatDetail = bd.ToString() + strChatDetail;
				}
			}
            
        }
        UpdateEmotionLinkPos(history, strChatDetail);
             
        //调整背景框大小
        if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL)
            {
                m_LabelChatTitleMe.text = StrDictionary.GetClientDictionaryString("#{11440}", history.ReceiverName);
            }
            else
            {
                m_LabelChatTitleMe.text = strChatTitle;
            }
            m_LabelChatDetailMe.text = strChatDetail;
            int m_LableChatDetailMeWidth = m_ChatInfoItemWidth - m_ChatSpaceCount * SPACE_WIDTH;
            Vector2 m_ChatInfoSpace = m_Font.CalculatePrintedSize(strChatDetail, true, UIFont.SymbolStyle.Uncolored);
            if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
            {
                if (m_LableChatDetailMeWidth < m_ChatInfoItemWidth)
                {
                    m_BackgroundMe.width = Math.Min((int)(m_ChatInfoSpace.x + m_Space_Width * 2), (int)(m_LableChatDetailMeWidth + m_Space_Width * 2));
                    m_ChatMaxHeight = m_LabelChatDetailMe.printedSize.y;
                    m_BackgroundMe.height = (int)(m_Space_Height);
                }
                else
                {
                    m_BackgroundMe.width = (int)(m_LableChatDetailMeWidth + m_Space_Width * 2);
                    m_ChatMaxHeight = m_LabelChatDetailMe.printedSize.y;
                    m_BackgroundMe.height = (int)((m_ChatMaxHeight + m_Space_Height));
                }
               
            }
            else
            {
                m_BackgroundOthers.gameObject.SetActive(false);
            }
        }
        else
        {
            if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL)
            {
                m_LabelChatTitleOthers.text = StrDictionary.GetClientDictionaryString("#{11441}", history.SenderName);
            }
            else
            {
                m_LabelChatTitleOthers.text = strChatTitle;
            }
            m_LabelChatDetailOthers.text = strChatDetail;
            int m_LableChatDetailOtherWidth = m_LabelChatDetailOthers.width;
            Vector2 m_ChatInfoSpace = m_Font.CalculatePrintedSize(strChatDetail, true, UIFont.SymbolStyle.Uncolored);
            if ((history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "") || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_SYSTEM)
            {
                if (m_ChatInfoSpace.x < m_LableChatDetailOtherWidth && !strChatDetail.Contains(Environment.NewLine))
                {
                    m_BackgroundOthers.width = Math.Min((int)(m_ChatInfoSpace.x + m_Space_Width * 2), (int)(m_LableChatDetailOtherWidth + m_Space_Width * 2));
                    m_ChatMaxHeight = m_LabelChatDetailOthers.printedSize.y;
                    m_BackgroundOthers.height = (int)(m_Space_Height);
                }
                else
                {
                    m_BackgroundOthers.width = (int)(m_LableChatDetailOtherWidth + m_Space_Width * 2);
                    m_ChatMaxHeight = m_LabelChatDetailOthers.printedSize.y;
                    m_BackgroundOthers.height = (int)(m_ChatMaxHeight + m_Space_Height);
                }

            }
            else
            {
                m_BackgroundOthers.gameObject.SetActive(false);
            }
        }
    }

    
    string ShowVIPIcon(string ChatTitle, ChatHistoryItem history)
    {
        if (history.SenderGuid == GlobeVar.INVALID_GUID || history.SenderName == "" || null == m_Font)
        {
            return ChatTitle;
        }
        int nSenderVIPLevel = 0;
        if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
        {
            if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
            {
                nSenderVIPLevel = VipData.GetVipLv();
            }
            else
            {
                nSenderVIPLevel = history.SenderVIPLevel;
            }
        }
        else
        {
            nSenderVIPLevel = history.SenderVIPLevel;
        }
        if (nSenderVIPLevel <= 0)
        {
            return ChatTitle;
        }

        int nSenderName = ChatTitle.IndexOf(history.SenderName);
        if (nSenderName < 0 || nSenderName >= ChatTitle.Length)
        {
            return ChatTitle;
        }

        ChatTitle = ChatTitle.Substring(0, nSenderName) + " 　" + ChatTitle.Substring(nSenderName);
        float fLeftSpace = m_Font.CalculatePrintedSize(ChatTitle.Substring(0, nSenderName), true, UIFont.SymbolStyle.Uncolored).x;
        float fRightSpace = m_Font.CalculatePrintedSize(ChatTitle.Substring(nSenderName), true, UIFont.SymbolStyle.Uncolored).x;
        GameObject emotion = null;
        if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            emotion = ResourceManager.LoadChatVIPIcon(m_LabelEmotionRootMe);
            if (emotion != null)
            {
                emotion.GetComponent<UISprite>().spriteName = VipData.GetStarIconByLevel(nSenderVIPLevel);
                emotion.transform.localPosition = new Vector3(-fRightSpace, m_Space_Height / 2, 0);
            }
        }
        else
        {
            emotion = ResourceManager.LoadChatVIPIcon(m_LabelEmotionRootOthers);
            if (emotion != null)
            {
                emotion.GetComponent<UISprite>().spriteName = VipData.GetStarIconByLevel(nSenderVIPLevel);
                emotion.transform.localPosition = new Vector3(fLeftSpace, m_Space_Height / 2, 0);
            }
        }
        return ChatTitle;

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
            string strChannelColor = null;
            if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
            {
                strChannelColor = "[-]";
            }
            else
            {
                strChannelColor = Utils.GetChannelColor(history);
            }
            fulltext = fulltext.Substring(0, fulltext.IndexOf("</a>")) + strChannelColor + fulltext.Substring(fulltext.IndexOf("</a>") + 4);

            Vector2 LeftSideSpace, RightSideSpace;
            int nNextLineNum;
            CalculateLinkSpace(ref fulltext, linkstart_whole, linkstart, linkend, out LeftSideSpace, out RightSideSpace, out nNextLineNum);
            //m_ChatTextHeight = RightSideSpace.y;

            GameObject link = null;
            if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
            {
                link = ResourceManager.LoadChatLink(m_LinkRootMe);
                if (link != null)
                {
                    link.transform.localPosition = new Vector3(((LeftSideSpace.x + RightSideSpace.x)/2), -m_Space_Height / 2, 0);
                    link.transform.localPosition -= new Vector3(25, m_Space_Height * nNextLineNum, 0);
                    if (null != link.GetComponent<BoxCollider>())
                        link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_Space_Height, 0);

                    if (null != link.GetComponent<ChatLinkLogic>())
                        link.GetComponent<ChatLinkLogic>().Init(history, linkindex);
                    gameObject.name = linkindex.ToString();
                    m_LinkList.Add(link);
                }

                linkindex += 1;
            }
            else
            {
                link = ResourceManager.LoadChatLink(m_LinkRootOthers);
                if (link != null)
                {
                    link.transform.localPosition = new Vector3((LeftSideSpace.x + RightSideSpace.x) / 2, -m_Space_Height / 2, 0);
                    link.transform.localPosition -= new Vector3(-25, m_Space_Height * nNextLineNum, 0);
                    if (null != link.GetComponent<BoxCollider>())
                        link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_Space_Height, 0);

                    if (null != link.GetComponent<ChatLinkLogic>())
                        link.GetComponent<ChatLinkLogic>().Init(history, linkindex);
                    gameObject.name = linkindex.ToString();
                    m_LinkList.Add(link);
                }

                linkindex += 1;
            }
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
        for (int i = nLineStart + 1; i <= linkstart; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.Uncolored).x;
            if (fChatWidth > m_LabelChatDetailOthers.width)
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
            if (fChatWidth > m_LabelChatDetailOthers.width)
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

    string MakeEmotionEnabled(string fulltext,ChatHistoryItem history)
    {
        while (Utils.IsContainEmotion(fulltext))
        {
            Vector2 fLeftSideSpace;
            int nNextLineNum;

            CalculateEmotionSpace(ref fulltext, out fLeftSideSpace, out nNextLineNum);
            //m_ChatTextHeight = fLeftSideSpace.y;

            int nEmotionStart = fulltext.IndexOf("[em=");
            int nEmotionEnd = fulltext.Substring(nEmotionStart).IndexOf("]") + nEmotionStart;

            string strEmotion = fulltext.Substring(nEmotionStart, nEmotionEnd - nEmotionStart + 1);
            string strSpriteID = strEmotion.Substring(4).Replace("]", "");
            GameObject ChatEmotion = null;
            if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
            {
                ChatEmotion = ResourceManager.LoadEmotionItem(m_ChatEmotionRootMe);
                if (ChatEmotion != null && ChatEmotion.GetComponent<UISprite>() != null)
                {
                    ChatEmotion.GetComponent<UISprite>().spriteName = "emotion (" + strSpriteID + ")";
                    ChatEmotion.transform.localPosition = new Vector3(fLeftSideSpace.x, -(m_Space_Height/2)+5, 0);
                    ChatEmotion.transform.localPosition -= new Vector3(28, m_Space_Height * nNextLineNum, 0);
                    string spaceEmotionItem = GetSpaceEmotionItem(ChatEmotion);
                    fulltext = fulltext.Substring(0, nEmotionStart) + spaceEmotionItem + fulltext.Substring(nEmotionEnd + 1);
                }
            }
            else
            {
                ChatEmotion = ResourceManager.LoadEmotionItem(m_ChatEmotionRootOthers);
                if (ChatEmotion != null && ChatEmotion.GetComponent<UISprite>() != null)
                {
                    ChatEmotion.GetComponent<UISprite>().spriteName = "emotion (" + strSpriteID + ")";

                    ChatEmotion.transform.localPosition = new Vector3(fLeftSideSpace.x, -10, 0);
                    ChatEmotion.transform.localPosition -= new Vector3(-26, m_Space_Height * nNextLineNum, 0);

                    string spaceEmotionItem = GetSpaceEmotionItem(ChatEmotion);
                    fulltext = fulltext.Substring(0, nEmotionStart) + spaceEmotionItem + fulltext.Substring(nEmotionEnd + 1);
                }
            }
            
        }
        return fulltext;
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
        LeftSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, stripEmotionStart), true, UIFont.SymbolStyle.None);

//        float fEllipsisWidth = m_Font.CalculatePrintedSize("...", true, UIFont.SymbolStyle.None).x;
        int nLineStart = 0;
        for (int i = nLineStart + 1; i <= stripEmotionStart; i++)
        {
            float fChatWidth = m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart), true, UIFont.SymbolStyle.None).x;
            if (i == stripEmotionStart)
            {
                if (fChatWidth > m_LabelChatDetailOthers.width)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x -= m_Font.CalculatePrintedSize(striptext.Substring(nLineStart, i - nLineStart - 1), true, UIFont.SymbolStyle.Uncolored).x;
                    nLineStart = i - 1;
                }
                else if (fChatWidth + m_Space_Width > m_LabelChatDetailOthers.width)
                {
                    nNextLineNum += 1;
                    LeftSideSpace.x = 0;
                }
            }
            else
            {
                if (fChatWidth > m_LabelChatDetailOthers.width)
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
        return "　";
    }

    void SelectTextNumber()
    {
//         m_LabelEmotionRootOthers.transform.localPosition = Vector3.zero;
//         m_ChatEmotionRootOthers.transform.localPosition = Vector3.zero;
//         m_LinkRootOthers.transform.localPosition = Vector3.zero;
//         m_LabelEmotionRootMe.transform.localPosition = Vector3.zero;
//         m_ChatEmotionRootMe.transform.localPosition = Vector3.zero;
//         m_LinkRootMe.transform.localPosition = Vector3.zero;
        ClearCurChat();
    }

    void ClearCurChat()
    {
        for (int i = 0; i < m_LinkList.Count; ++i)
        {
            if (null != m_LinkList[i])
            {
                Destroy(m_LinkList[i]);
            }
        }
        m_LinkList.Clear();
        m_LabelChatDetailOthers.text = "";

        for (int i = 0; i < clearItemList.Count; i++)
        {
            Utils.CleanGrid(clearItemList[i]);
        }
        m_LinkRootOthers.transform.DetachChildren();
        m_ChatEmotionRootOthers.transform.DetachChildren();
        m_LinkRootMe.transform.DetachChildren();
        m_ChatEmotionRootMe.transform.DetachChildren();
    }
    void UpdateEmotionLinkPos(ChatHistoryItem history,string strChatFull)
    {
        if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            float fChatMeWidth = m_ChatInfoItemWidth - m_ChatSpaceCount * SPACE_WIDTH;
            m_ChatEmotionRootMe.transform.localPosition -= new Vector3(fChatMeWidth, 0, 0);
            m_LinkRootMe.transform.localPosition -= new Vector3(fChatMeWidth, 0, 0);
        }        
    }

    void ShowNewChat(ChatHistoryItem history,float ChatMaxHeight )
    {
        if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
        {
            MoveLinkPos(history, EMOTIONLINK_MOVE_DIRECTION.EMOTIONLINK_MOVE_UP, (int)(ChatMaxHeight / m_Space_Height) - 1);
        }
        else
        {
            MoveLinkPos(history, EMOTIONLINK_MOVE_DIRECTION.EMOTIONLINK_MOVE_UP, (int)(ChatMaxHeight / m_Space_Height) + 1);
        }
        MoveChatEmotionPos(history, EMOTIONLINK_MOVE_DIRECTION.EMOTIONLINK_MOVE_UP, (int)(ChatMaxHeight/ m_Space_Height));
        MoveLableEmotionPos(history, EMOTIONLINK_MOVE_DIRECTION.EMOTIONLINK_MOVE_UP, (int)(ChatMaxHeight / m_Space_Height)-1);
    }

    /// <summary>
    /// 链接位移 链接每次移动一行
    /// </summary>
    /// <param name="direction">方向</param>
    /// <param name="times">倍数</param>
    void MoveLinkPos(ChatHistoryItem history, EMOTIONLINK_MOVE_DIRECTION direction, float times)
    {
//        int nHeightMax = m_LabelChatDetailOthers.GetComponent<UIWidget>().height;
        for (int i = 0; i < m_LinkList.Count; ++i)
        {
            if (m_LinkList[i] != null)
            {
                m_LinkList[i].transform.localPosition += new Vector3(0, m_Space_Height * (int)direction * times, 0);
                m_LinkList[i].SetActive(true);
            }
        }
    }
    void MoveChatEmotionPos(ChatHistoryItem history, EMOTIONLINK_MOVE_DIRECTION direction, float times)
    {
        UISprite[] spriteArray = null;
        if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            spriteArray = m_ChatEmotionRootMe.GetComponentsInChildren<UISprite>();
        }
        else
        {
            spriteArray = m_ChatEmotionRootOthers.GetComponentsInChildren<UISprite>();
        }
        for (int i = 0; i < spriteArray.Length; i++)
        {
            spriteArray[i].gameObject.transform.localPosition += new Vector3(0, m_Space_Height * (int)direction * times, 0);
        }
    }

    void MoveLableEmotionPos(ChatHistoryItem history, EMOTIONLINK_MOVE_DIRECTION direction, float times)
    {
        UISprite[] spriteArray = null;
        if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            spriteArray = m_LabelEmotionRootMe.GetComponentsInChildren<UISprite>();
        }
        else
        {
            spriteArray = m_LabelEmotionRootOthers.GetComponentsInChildren<UISprite>();
        }
        for (int i = 0; i < spriteArray.Length; i++)
        {
            spriteArray[i].gameObject.transform.localPosition += new Vector3(0, m_Space_Height * (int)direction * times, 0);
        }
    }

    //点击头像响应函数
    void ChatInfoItemOnClick()
    {
        //匿名的头像点击没反应也在此处理了，直接比较字典里的“匿名”二字。
        if (Singleton<ObjManager>.Instance.MainPlayer == null || m_SpeakerName.Equals(StrDictionary.GetClientDictionaryString("#{10566}")))
        {
            return;
        }
        //自己不能查看自己的
        if (Singleton<ObjManager>.Instance.MainPlayer.GUID == m_SpeakerGuid || m_SpeakerGuid == GlobeVar.INVALID_GUID)
        {
            return;
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        if (ChatInfoLogic.Instance() != null )
        {
            ChatInfoLogic.Instance().m_LastSpeakerChatLogic.gameObject.SetActive(true);
           // ChatInfoLogic.Instance().ShowSpeakerMenu();
            if (LastSpeakerChatLogic.Instance() != null)
            {
                 LastSpeakerChatLogic.Instance().ShowButtonMenu(m_SpeakerGuid, m_SpeakerName);
                 LastSpeakerChatLogic.Instance().SetOtherPlayerInfo(m_Profession, m_SpeakerLevel, m_SpeakerName);
            }
           
           // LastSpeakerChatLogic.Instance().ShowButtonMenu(m_SpeakerGuid, m_SpeakerName, m_SpeakerLevel, m_SpeakerProfession);
        }
    }

    string ShowPlayVoiceBtn(string fulltext,ChatHistoryItem history)
    {
        if (history.SenderGuid == GlobeVar.INVALID_GUID || 
            history.VoiceChatIndex == GlobeVar.INVALID_ID ||
            null == Singleton<ObjManager>.GetInstance().MainPlayer)
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
            history.EChannel != GC_CHAT.CHATTYPE.CHAT_TYPE_GUILD)
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
        if (history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
        {
            VoiceEmotion = Utils.BindObjToParent(m_PlayVoiceChatBtn, m_ChatEmotionRootMe, "playvoicechatbtn");
            if (VoiceEmotion != null)
            {
                VoiceEmotion.transform.localPosition = new Vector3(LeftSideSpace.x, -m_Space_Height / 2, 0);
                VoiceEmotion.transform.localPosition -= new Vector3(18, m_Space_Height * nNextLineNum, 0);
            }
        }
        else
        {
            VoiceEmotion = Utils.BindObjToParent(m_PlayVoiceChatBtn, m_ChatEmotionRootOthers, "playvoicechatbtn");
            if (VoiceEmotion != null)
            {
                VoiceEmotion.transform.localPosition = new Vector3(LeftSideSpace.x, -m_Space_Height / 2, 0);
                VoiceEmotion.transform.localPosition -= new Vector3(-30, m_Space_Height * nNextLineNum, 0);
            }
        }

        if (VoiceEmotion != null &&
            VoiceEmotion.GetComponent<PlayVoiceChatBtnLogic>() != null)
        {
            VoiceEmotion.GetComponent<PlayVoiceChatBtnLogic>().Init(history.VoiceChatIndex, history.SenderGuid);
        }
        return fulltext;
    }
    public void OnPlayVoiceChatItem()
    {
        if (null == VoiceEmotion)
            return;

        PlayVoiceChatBtnLogic playVoiceBtn = VoiceEmotion.GetComponent<PlayVoiceChatBtnLogic>();
        if (playVoiceBtn == null)
            return;

        if (playVoiceBtn.VoiceChatIndex == GameManager.gameManager.PlayerDataPool.VoiceChatDownloadRecord.PlayingVoiceIndex)
        {
            playVoiceBtn.PlayVoice();
        }
        else
        {
            playVoiceBtn.StopVoice();
        }
    }
    
    
    public void OnPlayVoiceChatOverItem()
    {
        if (null == VoiceEmotion)
            return;

        PlayVoiceChatBtnLogic voiceBtnLogic = VoiceEmotion.GetComponent<PlayVoiceChatBtnLogic>();
        if (null != voiceBtnLogic &&
            null != GameManager.gameManager.PlayerDataPool.VoiceChatDownloadRecord &&
            voiceBtnLogic.VoiceChatIndex == GameManager.gameManager.PlayerDataPool.VoiceChatDownloadRecord.PlayingVoiceIndex)
        {
            voiceBtnLogic.StopVoice();
        }
    }
}
