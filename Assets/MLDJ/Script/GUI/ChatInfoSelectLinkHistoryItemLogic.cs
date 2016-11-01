using UnityEngine;
using System.Collections;
using Games.ChatHistory;
using GCGame;

public class ChatInfoSelectLinkHistoryItemLogic : ChatInfoSelectLinkItemLogic
{

    public UILabel m_chatText;

    private ChatHistoryItem m_historyItem;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public override void Init(ChatInfoSelectLinkLogic.Data data, int index)
    {
        base.Init(data, index);

        this.name = string.Format("{0:D3}", index.ToString());

        m_chatText.text = data.historyItem.ChatInfo;

        m_historyItem = data.historyItem;
    }

    public void OnClickItem()
    {
        string text = "";
        if (ChatInfoLogic.Instance().CurChannelType == ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_TELL) {
          text = "/" + ChatInfoLogic.Instance().TellChatReceiverName + " " + m_chatText.text;
        } else {
          text = m_chatText.text;
        }
        if (!string.IsNullOrEmpty(text))
        {
            if (text.Length > 3 && PlatformHelper.IsEnableGM() && text.Substring(0, 2) == GameDefines.GMCMD_BEGINORDER)
            {
                Utils.SendGMCommand(text.Substring(2, text.Length - 2));
            }
            else
            {
                text = Utils.StrFilter_Chat(text);

                Utils.SendCGChatPak(text, m_historyItem);
            }
        }
    }
}
