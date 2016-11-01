using UnityEngine;
using System.Collections;
using GCGame.Table;
using System.Text;
using Games.GlobeDefine;
using GCGame;

public class GuildChangeNoticeWindowLogic : MonoBehaviour {

    public GameUIInput m_NoticeInput;
    public UILabel m_TextCountLabel;

    void OnEnable()
    {
        m_NoticeInput.value = "";
        m_NoticeInput.defaultText = StrDictionary.GetClientDictionaryString("#{10453}");
    }
	
	// Update is called once per frame
	void Update () 
    {
        if (m_TextCountLabel != null)
        {
            m_TextCountLabel.text = (Encoding.UTF8.GetBytes(m_NoticeInput.value).Length / 3).ToString() + "/" + (GlobeVar.MAX_GUILD_NOTICE / 3).ToString();
        }
	}

    void OnChangeOKClick()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        if (m_NoticeInput == null)
        {
            return;
        }

        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
        if (false == mainPlayerGuildInfo.IsValid())
        {
            return;
        }

        if (false == info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_NOTICE))
        {
            GUIData.AddNotifyData("#{2513}");
            return;
        }

        string szNoticeContent = m_NoticeInput.value;

        if (szNoticeContent.Length <= 0)
        {
            GUIData.AddNotifyData("#{10455}");
            return;
        }

        if (Encoding.UTF8.GetBytes(szNoticeContent).Length > GlobeVar.MAX_GUILD_NOTICE)
        {
            GUIData.AddNotifyData("#{2798}");
            return;
        }

        if (null != Utils.GetStrFilter(szNoticeContent, (int)GameDefine_Globe.STRFILTER_TYPE.STRFILTER_NAME))
        {
            GUIData.AddNotifyData("#{1278}");
            return;
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqChangeGuildNotice(szNoticeContent);

        gameObject.SetActive(false);
    }

    void OnCancelClick()
    {
        gameObject.SetActive(false);
    }
}
