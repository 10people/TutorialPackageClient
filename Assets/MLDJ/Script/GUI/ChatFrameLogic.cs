using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using Games.ChatHistory;
using GCGame.Table;
using Games.GlobeDefine;
using GCGame;
using Module.Log;
using Games.LogicObj;
public class ChatFrameLogic : MonoBehaviour
{

    private enum TEXT_STATE
    {
        TEXT_STATE_1 = 1,
        TEXT_STATE_2 = 2,
    }
    private TEXT_STATE m_eTextStateCur = TEXT_STATE.TEXT_STATE_2;

    public GameObject m_FirstChild;
    public Transform m_OffsetTrans;

    public GameObject m_Text1;
    public UILabel labelChatText1;
    public GameObject m_LinkRoot1;
    public GameObject m_EmotionRoot1;

    public GameObject m_Text2;
    public UILabel labelChatText2;
    public GameObject m_LinkRoot2;
    public GameObject m_EmotionRoot2;

    public GameObject m_InformSprite;
    public GameObject m_VIPIcon;
    public GameObject m_PlayVoiceChatBtn;

    //public List<TweenAlpha> m_FoldTween;

    private UILabel labelChatText;
    private GameObject m_LinkRoot;
    private GameObject m_EmotionRoot;

    private UIFont m_Font;
    private float m_ChatTextHeight = 0;

    private Vector3 m_TextReadyPos = new Vector3();
    private Vector3 m_TextShowPos = new Vector3();
    //private bool m_ChangeText = false;
    private Vector3 m_ChangeTextSpeed = new Vector3(0, 40, 0);

    private int MaxLines = 0;

    //     public UIPanel ClipPanel;
    //     private Transform m_ClipPanelTransform = null;
    private float m_updateCallTime = 0.5f;

    private Vector3 m_LocalPos;
    private List<GameObject> clearItemList = new List<GameObject>();
    private const int EMOTIONITEM_WIDTH = 26;
    private float SPACE_WIDTH = 0;

    //语音按钮的位置
    public GameObject[] m_playVoiceBtns;
    
    private static ChatFrameLogic m_Instance = null;
    public static ChatFrameLogic Instance()
    {
        return m_Instance;
    }

    private static bool isUpdateChannel = false;
    private static ChatInfoLogic.CHANNEL_TYPE m_eCurChannelType = ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_WORLD; // 当前频道
    public static ChatInfoLogic.CHANNEL_TYPE CurChannelType
    {
        get { return m_eCurChannelType; }
        set { m_eCurChannelType = value;
        isUpdateChannel = true;
        }
    }
    private bool m_ForceStopRecord = false;     // 是否因为超过6秒被强制打断
    private bool m_CanSendVoice = true;         // 是否可以发送语音 防止操作过快
    private int m_VoiceChatCountDown = 0;
    private const string TIME_STR = "00:0";
    private const int m_nStartTime = 6;
    public UILabel m_speechTime;
    private int m_nSpeechTime = 6;
    private float m_fUpdteTimes = 1;
    private bool m_isSpeech = false;
    public GameObject m_beginReordObj;
    public GameObject m_endRecordObj;
    public SpeechLogic m_SpeeachLogic;
    public GameObject m_VoiceTitle;
    private Vector3 m_TouchVoiceChatPos = new Vector3(0, 0, 0);
    private const int MAX_TEXTNUM = 128;
    void Awake()
    {
        m_Instance = this;
        m_Font = labelChatText2.font;
        InitPlayVoiceBtn();
    }

    // Use this for initialization
    void Start()
    {
        m_FirstChild.SetActive(true);
        //InvokeRepeating("CheckNotifyData", 1, 1);

        m_ChatTextHeight = m_Font.CalculatePrintedSize(" ", true, UIFont.SymbolStyle.None).y;
        SPACE_WIDTH = m_Font.CalculatePrintedSize("　", true, UIFont.SymbolStyle.Uncolored).x;
        if (m_ChatTextHeight != 0)
        {
            MaxLines = (int)(labelChatText2.height / m_ChatTextHeight);
        }
        else
        {
            MaxLines = 2;
        }
        InitTextPos();

        labelChatText = labelChatText2;
        m_LinkRoot = m_LinkRoot2;
        m_EmotionRoot = m_EmotionRoot2;

        //         if (null != ClipPanel)
        //         {
        //             m_ClipPanelTransform = ClipPanel.transform;
        //         }

        m_LocalPos = m_OffsetTrans.localPosition;
        clearItemList.Add(m_LinkRoot1);
        clearItemList.Add(m_EmotionRoot1);
        clearItemList.Add(m_LinkRoot2);
        clearItemList.Add(m_EmotionRoot2);

      //  InitPlayVoiceBtn();
    }

    // Update is called once per frame
    void Update()
    {
        UpdateSpeechTime();
        UpdateSpeechPressState();
        if (m_updateCallTime > 0)
        {
            m_updateCallTime -= Time.deltaTime;
            return;
        }

        m_updateCallTime = 0.5f;

        if(isUpdateChannel)
        UpdatePlayVoiceBtnByIndex(Utils.GetChannelIndex((int)CurChannelType));

        
      //  if (ChatInfoLogic.Instance() != null)
        //{
          //  UpdatePlayVoiceBtnByIndex(Utils.GetChannelIndex((int)ChatInfoLogic.Instance().CurChannelType));
        //}
        //else
       // {
         //   UpdatePlayVoiceBtnByIndex(Utils.GetChannelIndex((int)ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_WORLD));
        //}


        // 解决剪裁区域不更新的问题
        //         if (null != m_ClipPanelTransform)
        //         {
        //             m_ClipPanelTransform.localPosition = m_ClipPanelTransform.localPosition;
        //         }
        //         else
        //         {
        //             m_ClipPanelTransform = ClipPanel.transform;
        //         }

        //if (m_ChangeText)
        //{
        // 暂时取消滚动切换 防止接收聊天消息过快导致显示问题 所以调用不到此函数
        //ChangeText();
        //}
    }

    void OnEnable()
    {
        InitPlayVoiceBtn();
        UpdatePlayVoiceBtnByIndex(Utils.GetChannelIndex((int)CurChannelType));
        m_nSpeechTime = m_nStartTime;
        m_isSpeech = false;
    }
    void OnDestroy()
    {
        m_Instance = null;
    }

    private string curData;
    void CheckNotifyData()
    {
        //         curData = GUIData.GetNotifyData();
        //         if (null != curData)
        //         {
        //             labelChatText.text = curData;
        //         }
    }

    void ShowChatInfo()
    {
        UIManager.ShowUI(UIInfo.ChatInfoRoot);
    }

    public void OnReceiveChat(GC_CHAT pak)
    {
        if (pak.Chattype == (int)GC_CHAT.CHATTYPE.CHAT_TYPE_LOUDSPEAKER)
        {
            if (null != LoudSpeakerFrameLogic.Instance())
                LoudSpeakerFrameLogic.Instance().OnReceiveLoudSpeaker();
        }
        else
        {
            InitCurChat();
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

        int nIconIndex = 0;
        int nIconIndex_SenderText = 0;
        if (history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL ||
            history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
        {
            if (history.SenderGuid == Singleton<ObjManager>.Instance.MainPlayer.GUID &&
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

        GameObject emotion = Utils.BindObjToParent(m_VIPIcon, m_EmotionRoot, "vipicon");
        if (emotion != null && emotion.GetComponent<UISprite>() != null)
        {
            emotion.GetComponent<UISprite>().spriteName = VipData.GetStarIconByLevel(nSenderVIPLevel);
            emotion.transform.localPosition = new Vector3(fLeftSpace - 2, m_ChatTextHeight / 2, 0);
        }
        return fulltext;
    }

    string ShowPlayVoiceBtn(string fulltext, string sendertext, ChatHistoryItem history)
    {
      if (history.SenderGuid == GlobeVar.INVALID_GUID || history.VoiceChatIndex == GlobeVar.INVALID_ID || history.VoiceChatIndex == 0)
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

        int nIconIndex = fulltext.IndexOf(sendertext) + sendertext.Length;
        fulltext = fulltext.Substring(0, nIconIndex) + "　　" + fulltext.Substring(nIconIndex);

        GameObject emotion = Utils.BindObjToParent(m_PlayVoiceChatBtn, m_EmotionRoot, "playvoicechatbtn");
        if (emotion != null)
        {
            if (emotion.GetComponent<UISprite>() != null)
            {
                emotion.transform.localPosition = new Vector3(m_Font.CalculatePrintedSize(fulltext.Substring(0, nIconIndex), true, UIFont.SymbolStyle.Uncolored).x - 8, m_ChatTextHeight / 2, 0);
            }
            if (emotion.GetComponent<PlayVoiceChatBtnLogic>() != null)
            {
                emotion.GetComponent<PlayVoiceChatBtnLogic>().Init(history.VoiceChatIndex, history.SenderGuid);
            }
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
            string strChannelColor = Utils.GetChannelColor(history);
            fulltext = fulltext.Substring(0, fulltext.IndexOf("</a>")) + strChannelColor + fulltext.Substring(fulltext.IndexOf("</a>") + 4);

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
                    if (null != link.GetComponent<BoxCollider>())
                        link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_ChatTextHeight, 0);

                    if (null != link.GetComponent<ChatLinkLogic>())
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
                if (emotion != null && emotion.GetComponent<UISprite>() != null)
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

        //拆分再合并字符串 防止把加了中括号的玩家名字当颜色代码解析了。。。只解析说话内容中的颜色代码
        //已修改StripSymbols代码 不会把名字当颜色代码解析
        //         int nChatStart = text.IndexOf("说：");
        //         string strPrefix = text.Substring(0, nChatStart);
        //         string strChat = text.Substring(nChatStart);
        //         string striptext = strPrefix + NGUITools.StripSymbols(strChat);
        string striptext = NGUITools.StripSymbols(text);

        int stripEmotionStart = striptext.IndexOf("[em=");
        LeftSideSpace = m_Font.CalculatePrintedSize(striptext.Substring(0, stripEmotionStart), true, UIFont.SymbolStyle.None);
        Debug.Log("leftSideSpace is ====  " + LeftSideSpace.x);
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
        //         float spaceWidth = m_Font.CalculatePrintedSize(" ", true, UIFont.SymbolStyle.None).x;
        //         int emotionWidth = emotion.GetComponent<UISprite>().width;
        //         int spaceNum = Mathf.CeilToInt((float)emotionWidth / spaceWidth);
        //          string strResult = "";
        //         for (int i = 0; i < spaceNum; i++)
        //         {
        //             strResult += "　";
        //         }
        //         return strResult;
        return "　";
    }

    void InitTextPos()
    {
        m_TextReadyPos = m_Text1.gameObject.transform.localPosition;
        m_TextShowPos = m_Text2.gameObject.transform.localPosition;
    }

    void SelectTextNumber()
    {
        labelChatText = labelChatText2;
        m_EmotionRoot = m_EmotionRoot2;
        m_LinkRoot = m_LinkRoot2;
        m_EmotionRoot.transform.localPosition = Vector3.zero;
        m_LinkRoot.transform.localPosition = Vector3.zero;
        ClearCurChat();

        /*if (m_eTextStateCur == TEXT_STATE.TEXT_STATE_1)
        {
            m_eTextStateCur = TEXT_STATE.TEXT_STATE_2;

            labelChatText = labelChatText2;
            m_EmotionRoot = m_EmotionRoot2;
            m_LinkRoot = m_LinkRoot2;

            if (m_Text2.gameObject.transform.localPosition == m_TextReadyPos)
            {
                //m_ChangeText = true;

                m_Text2.gameObject.transform.localPosition = m_TextShowPos;

                m_Text1.gameObject.transform.localPosition = m_TextReadyPos;

                ClearCurChat();
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
                //m_ChangeText = true;

                m_Text1.gameObject.transform.localPosition = m_TextShowPos;

                m_Text2.gameObject.transform.localPosition = m_TextReadyPos;

                ClearCurChat();
            }
            m_EmotionRoot1.transform.localPosition = Vector3.zero;
            m_LinkRoot1.transform.localPosition = Vector3.zero;
            return;
        }*/
    }

    // 不再滚动切换
    /*void ChangeText()
    {
        m_Text1.gameObject.transform.localPosition += Time.deltaTime * m_ChangeTextSpeed;
        m_Text2.gameObject.transform.localPosition += Time.deltaTime * m_ChangeTextSpeed;

        if (m_eTextStateCur == TEXT_STATE.TEXT_STATE_1)
        {
            if (m_Text1.gameObject.transform.localPosition.y >= m_TextShowPos.y)
            {
                m_Text1.gameObject.transform.localPosition = m_TextShowPos;
                m_Text2.gameObject.transform.localPosition = m_TextReadyPos;

                Transform[] linkTransArray = m_LinkRoot2.GetComponentsInChildren<Transform>();
                for (int i = 0; i < linkTransArray.Length; i++)
                {
                    if (linkTransArray[i].gameObject != m_LinkRoot2)
                    {
                        Destroy(linkTransArray[i].gameObject);
                    }
                }

                Transform[] emotionTransArray = m_EmotionRoot2.GetComponentsInChildren<Transform>();
                for (int i = 0; i < emotionTransArray.Length; i++)
                {
                    if (emotionTransArray[i].gameObject != m_LinkRoot2)
                    {
                        Destroy(emotionTransArray[i].gameObject);
                    }
                }

                //m_ChangeText = false;
            }
        }

        if (m_eTextStateCur == TEXT_STATE.TEXT_STATE_2)
        {
            if (m_Text2.gameObject.transform.localPosition.y >= m_TextShowPos.y)
            {
                m_Text2.gameObject.transform.localPosition = m_TextShowPos;
                m_Text1.gameObject.transform.localPosition = m_TextReadyPos;

                Transform[] linkTransArray = m_LinkRoot1.GetComponentsInChildren<Transform>();
                for (int i = 0; i < linkTransArray.Length; i++)
                {
                    if (linkTransArray[i].gameObject != m_LinkRoot2)
                    {
                        Destroy(linkTransArray[i].gameObject);
                    }
                }

                Transform[] emotionTransArray = m_EmotionRoot1.GetComponentsInChildren<Transform>();
                for (int i = 0; i < emotionTransArray.Length; i++)
                {
                    if (emotionTransArray[i].gameObject != m_LinkRoot2)
                    {
                        Destroy(emotionTransArray[i].gameObject);
                    }
                }

                //m_ChangeText = false;
            }
        }
    }*/

    void UpdateEmotionLinkPos(string strChatFull)
    {
        int moveHeight = 0;
        int start = 0;
        for (int i = 1; i <= strChatFull.Length; i++)
        {
            string str = strChatFull.Substring(start, i - start);
            if (str.Contains(Environment.NewLine))
            {
                moveHeight += 1;
                start = i;
                continue;
            }

            if ((int)m_Font.CalculatePrintedSize(str, true, UIFont.SymbolStyle.None).x / labelChatText.width > moveHeight)
            {
                moveHeight += 1;
            }
        }

        m_EmotionRoot.transform.localPosition += new Vector3(-25, moveHeight * m_ChatTextHeight, 0);
        m_LinkRoot.transform.localPosition += new Vector3(0, moveHeight * m_ChatTextHeight, 0);
    }

    void ConfirmEllipsis(ref string strChatFull)
    {
        float fChatWidth = m_Font.CalculatePrintedSize(strChatFull, true, UIFont.SymbolStyle.None).x;
        float fEllipsisWidth = m_Font.CalculatePrintedSize("...", true, UIFont.SymbolStyle.None).x;
        if (fChatWidth > labelChatText.width * MaxLines - fEllipsisWidth)
        {
            string strCurChat = strChatFull;
            float fCurChatWidth;
            do
            {
                strCurChat = strCurChat.Substring(0, strCurChat.Length / 2);
                fCurChatWidth = m_Font.CalculatePrintedSize(strCurChat, true, UIFont.SymbolStyle.None).x;
            } while (fCurChatWidth > labelChatText.width * MaxLines - fEllipsisWidth);

            for (int i = strCurChat.Length; i < strChatFull.Length; i++)
            {
                if (m_Font.CalculatePrintedSize(strChatFull.Substring(0, i), true, UIFont.SymbolStyle.None).x >= labelChatText.width * MaxLines - fEllipsisWidth)
                {
                    strChatFull = strChatFull.Substring(0, i - 2) + "...";
                    break;
                }
            }
        }
    }

    public void InitCurChat()
    {
        int HistoryCount = GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList.Count;
        if (HistoryCount > 0)
        {
            int nLastLoudSpeakerIndex = -1;
            List<ChatHistoryItem> listChatHistory = GameManager.gameManager.PlayerDataPool.ChatHistory.ChatHistoryList;
            for (int i = listChatHistory.Count - 1; i >= 0; i--)
            {
                if (listChatHistory[i].EChannel != GC_CHAT.CHATTYPE.CHAT_TYPE_LOUDSPEAKER &&
                    listChatHistory[i].ChatInfo != null &&
                    (listChatHistory[i].ChatInfo != "" || (!PlatformHelper.IsChannelMainland() && listChatHistory[i].VoiceChatIndex != GlobeVar.INVALID_ID)) &&
                    ChatInfoSetupLogic.IsChannelReceiveChat(GameManager.gameManager.PlayerDataPool.ChooseChannel, listChatHistory[i].EChannel))
                {
                    nLastLoudSpeakerIndex = i;
                    break;
                }
            }

            if (nLastLoudSpeakerIndex != -1)
            {
                // 显示聊天信息
                ChatHistoryItem LastHistory = listChatHistory[nLastLoudSpeakerIndex];

                string strChannelName = Utils.GetChannelName((int)LastHistory.EChannel);
                string strSenderName = "";
                string strLastChatInfo = LastHistory.ChatInfo;
                if (LastHistory.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL ||
                    LastHistory.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND)
                {
                    if (LastHistory.SenderName == Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.RoleName)
                    {
                        //strSenderName = "你对[" + LastHistory.ReceiverName + "]说：";
                        strSenderName = StrDictionary.GetClientDictionaryString("#{2822}", LastHistory.ReceiverName);
                    }
                    else
                    {
                        //strSenderName = "[" + LastHistory.SenderName + "]对你说：";
                        strSenderName = StrDictionary.GetClientDictionaryString("#{2823}", LastHistory.SenderName);
                    }
                    if (strLastChatInfo.Length > 0 && strLastChatInfo[0] == '#')
                    {
                        strLastChatInfo = StrDictionary.GetServerDictionaryFormatString(strLastChatInfo);
                    }
                }
                else if (LastHistory.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_SYSTEM
                    || LastHistory.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_GUILD)
                {
                    if (strLastChatInfo == null)
                    {
                        return;
                    }
                    // 台湾版本需要发送纯语音
                    if (strLastChatInfo == "" && (PlatformHelper.IsChannelMainland() || LastHistory.VoiceChatIndex == GlobeVar.INVALID_ID))
                    {
                        return;
                    }

                    // 系统频道可能无发送人
                    if (LastHistory.SenderGuid != GlobeVar.INVALID_GUID && LastHistory.SenderName != "")
                    {
                        //strSenderName = "[" + LastHistory.SenderName + "]说：";
                        strSenderName = StrDictionary.GetClientDictionaryString("#{2824}", LastHistory.SenderName);
                    }
                    // 解析# 字典
                    if (strLastChatInfo.Length > 0 && strLastChatInfo[0] == '#')
                    {
                        strLastChatInfo = StrDictionary.GetServerDictionaryFormatString(strLastChatInfo);
                    }
                }
                else
                {
                    //strSenderName = "[" + LastHistory.SenderName + "]说：";
                    if (LastHistory.ELinkType.Count > 0 && LastHistory.GetLinkIntDataCountByIndex(0) == (int)GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE)
                    {
                        strSenderName = "[" + StrDictionary.GetClientDictionaryString("#{3108}", "") + "]:";
                    }
                    else
                    {
                        strSenderName = StrDictionary.GetClientDictionaryString("#{2824}", LastHistory.SenderName);
                    }

                    // 解析# 字典
                    if (strLastChatInfo.Length > 0 && strLastChatInfo[0] == '#')
                    {
                        strLastChatInfo = StrDictionary.GetServerDictionaryFormatString(strLastChatInfo);
                    }
                }

                SelectTextNumber();

                string strChatInfo = strLastChatInfo;
                string strChatFull = strChannelName + strSenderName + strChatInfo;

                strChatFull = ShowVIPIcon(strChatFull, ref strSenderName, LastHistory);
                strChatFull = ShowPlayVoiceBtn(strChatFull, strSenderName, LastHistory);

                if (LastHistory.ELinkType.Count > 0)
                {
                    strChatFull = MakeLinkEnabled(strChatFull, LastHistory);
                }

                strChatFull = MakeEmotionEnabled(strChatFull);

                if (!(LastHistory.ELinkType.Count > 0 && LastHistory.GetLinkIntDataCountByIndex(0) == (int)GC_CHAT.LINKTYPE.LINK_TYPE_GUILDCRUITE))
                {
                    strChatFull = MakeNameLinkEnabled(strChatFull, LastHistory);
                }

                string strChannelColor = Utils.GetChannelColor(LastHistory);
                strChatFull = strChannelColor + strChatFull;

                ConfirmEllipsis(ref strChatFull);
                labelChatText.text = strChatFull;

                UpdateEmotionLinkPos(NGUITools.StripSymbols(strChatFull));
			}
		}
    }

    string MakeNameLinkEnabled(string fulltext, ChatHistoryItem history)
    {
        if (history.SenderGuid != GlobeVar.INVALID_GUID && history.SenderName != "")
        {
            GameObject link = null;
            link = ResourceManager.LoadChatLink(m_LinkRoot);
            if (link != null)
            {
                UInt64 linkguid = GlobeVar.INVALID_GUID;
                string linkname = "";
                if ((history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_TELL || history.EChannel == GC_CHAT.CHATTYPE.CHAT_TYPE_FRIEND) &&
                    history.SenderGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
                {
                    linkguid = history.ReceiverGuid;
                    linkname = StrDictionary.GetClientDictionaryString("#{6411}", history.ReceiverName);
                }
                else
                {
                    linkguid = history.SenderGuid;
                    linkname = StrDictionary.GetClientDictionaryString("#{6411}", history.SenderName);
                }
                string stripText = NGUITools.StripSymbols(fulltext);
                int linkstart = stripText.IndexOf(linkname);
                int linkstart_full = fulltext.IndexOf(linkname);
                int linkend = stripText.IndexOf(linkname) + linkname.Length;
                int linkend_full = fulltext.IndexOf(linkname) + linkname.Length;
                Vector2 LeftSideSpace = m_Font.CalculatePrintedSize(stripText.Substring(0, linkstart), true, UIFont.SymbolStyle.Uncolored);
                Vector2 RightSideSpace = m_Font.CalculatePrintedSize(stripText.Substring(0, linkend), true, UIFont.SymbolStyle.Uncolored);
                link.transform.localPosition = new Vector3((LeftSideSpace.x + RightSideSpace.x) / 2, m_ChatTextHeight / 2, 0);
                if (null != link.GetComponent<BoxCollider>())
                    link.GetComponent<BoxCollider>().size = new Vector3(RightSideSpace.x - LeftSideSpace.x, m_ChatTextHeight, 0);

                if (null != link.GetComponent<ChatLinkLogic>())
                    link.GetComponent<ChatLinkLogic>().Init_NameLink(linkguid, linkname);

                fulltext = fulltext.Substring(0, linkstart_full) + "[FFFF10]" + fulltext.Substring(linkstart_full, linkname.Length) + Utils.GetChannelColor(history) + fulltext.Substring(linkend_full);
            }
        }
        return fulltext;
    }

    public void PlayTween(bool nDirection)
    {
        //foreach (TweenAlpha tween in m_FoldTween)
        //{
        //    tween.Play(nDirection);
        //}
        //foreach (BoxCollider box in gameObject.GetComponentsInChildren<BoxCollider>())
        //{
        //    box.enabled = !nDirection;
        //}

        //gameObject.SetActive(!nDirection);
        if (nDirection)
        {
            m_OffsetTrans.localPosition = GlobeVar.INFINITY_FAR;
        }
        else
        {
            m_OffsetTrans.localPosition = m_LocalPos;
        }
    }

    void ClearCurChat()
    {
        labelChatText1.text = "";
        labelChatText2.text = "";

        for (int i = 0; i < clearItemList.Count; i++)
        {
            Utils.CleanGrid(clearItemList[i]);
        }

        m_LinkRoot1.transform.DetachChildren();
        m_EmotionRoot1.transform.DetachChildren();
        m_LinkRoot2.transform.DetachChildren();
        m_EmotionRoot2.transform.DetachChildren();
    }

    /// <summary>
    /// 初始化语音按钮信息
    /// </summary>
    void InitPlayVoiceBtn()
    {
        for (int i = 0; i < m_playVoiceBtns.Length; i++)
        {
            m_playVoiceBtns[i].SetActive(false);
        }
    }

    /// <summary>
    /// 更新当前语音按钮信息
    /// </summary>
    /// <param name="nIndex"></param>
    void UpdatePlayVoiceBtnByIndex(int nIndex)
    {
        for (int i = 0; i < m_playVoiceBtns.Length; i++)
        {
            m_playVoiceBtns[i].SetActive(i == nIndex);
        }

        isUpdateChannel = false;
    }

    /// <summary>
    /// 检查是否可以在密聊频道发送消息
    /// </summary>
    bool CheckIsCanSendTell()
    {
        //密聊频道检测一下当前是否有密聊对象 
        if (CurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TELL)
        {
            return true;
        }
            UInt64 tellGuid = GameManager.gameManager.PlayerDataPool.LastTellGUID;
            String tellName = GameManager.gameManager.PlayerDataPool.LastTellName;
          if (tellGuid == GlobeVar.INVALID_GUID || tellName == "")
          {
              Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
              if (_mainPlayer == null)
              {
                  LogModule.DebugLog("_mainPlayer is Null");
                  return false;
              }

              _mainPlayer.SendNoticMsg(false, "#{11166}");
              return false;
          }

          return true;
    }

    void RecordBegin()
    {
        if (false == m_CanSendVoice)
        {
            //当前已有语音未成功发送，待发送后可继续输入。	
            GUIData.AddNotifyData2Client(false, "#{5252}");
            return;
        }

        //密聊频道检查是否有密聊的人
        if (!CheckIsCanSendTell())
        {
            return;
        }
       if (m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_FRIEND &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TEAM &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_GUILD &&
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_MASTER && 
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TELL)
        {
            GUIData.AddNotifyData2Client(false, "#{5090}");
            return;
        }

        // 录音开始的时候 把该关的都关了
      //  if (m_EmotionRoot.activeSelf)
        //{
         //   m_EmotionRoot.SetActive(false);
        //}
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
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_MASTER && 
            m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TELL)
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
        // 防一直按着录音说话超过6秒的
        if (m_VoiceTitle.activeInHierarchy)
        {
            m_VoiceTitle.SetActive(false);
            m_ForceStopRecord = true;
        }



        //if (m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_FRIEND &&
        //    m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TEAM &&
        //    m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_GUILD &&
        //    m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_MASTER &&
        //    m_eCurChannelType != ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TELL )
        //{
        //    return;
        //}

        //if (Utils.GetStrTextNum(Text) > MAX_TEXTNUM)
        //{
        //    GUIData.AddNotifyData2Client(false, "#{4760}");
        //    return;
        //}

        //GameManager.gameManager.SoundManager.MusicRecover();

        //if (m_eCurChannelType == ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_FRIEND)
        //{
        //    GameChatInput.SubmitVoice("/" + GameManager.gameManager.PlayerDataPool.LastTellName + " " + Text, buffer);
        //}
        //else
        //{
        //    GameChatInput.SubmitVoice(Text, buffer);
        //}
    }
}
