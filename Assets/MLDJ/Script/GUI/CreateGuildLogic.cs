using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using Games.LogicObj;
using GCGame;
using Games;
using System.Text;
using GCGame.Table;

public class CreateGuildLogic : MonoBehaviour
{
    public GameUIInput m_GuildNameInput;
    public GameUIInput m_GuildDeclarationInput;
    public UILabel m_TextCountLabel;

    void OnEnable()
    {
        m_GuildNameInput.value = "";
        m_GuildDeclarationInput.value = "";

        m_GuildNameInput.defaultText = StrDictionary.GetClientDictionaryString("#{10353}");
        m_GuildDeclarationInput.defaultText = StrDictionary.GetClientDictionaryString("#{10364}");
    }

    void Update()
    {
        if (m_TextCountLabel != null)
        {
            m_TextCountLabel.text = (Encoding.UTF8.GetBytes(m_GuildDeclarationInput.value).Length / 3).ToString() + "/" + (GlobeVar.MAX_GUILD_DECLARATION / 3).ToString();
        }
    }

    void OnCreateGuild()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;

        //判断帮会名称控件是否存在
        if (null == m_GuildNameInput || null == m_GuildDeclarationInput)
        {
            return;
        }

        //判断帮会名称是否合法
        string szGuildName = m_GuildNameInput.value;
        string szGuildDeclaration = m_GuildDeclarationInput.value;

        //公会名过短
        if (szGuildName.Length <= 0)
        {
            GUIData.AddNotifyData("#{1761}"); //请输入帮会名称 
            return;
        }

        //公会宣言可以不填写 不判断过短

        if (Encoding.UTF8.GetBytes(szGuildName).Length > GlobeVar.MAX_GUILD_NAME)
        {
            GUIData.AddNotifyData("#{10365}"); //公会名过长
            return;
        }

        if (Encoding.UTF8.GetBytes(szGuildDeclaration).Length > GlobeVar.MAX_GUILD_DECLARATION)
        {
            GUIData.AddNotifyData("#{10366}"); //公会宣言过长
            return;
        }

        //玩家等级判断
        if (mainPlayer.BaseAttr.Level < GlobeVar.CREATE_GUILD_LEVEL)
        {
            GUIData.AddNotifyData("#{1771}");    //你的人物等级不足40级，无法创建帮会
            return;
        }

        //有帮会无法申请
        if (GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            GUIData.AddNotifyData("#{1772}");        //你已属于一个帮会，不能创建帮会
            return;
        }
        
        if (null != Utils.GetStrFilter(szGuildName, (int)Games.GlobeDefine.GameDefine_Globe.STRFILTER_TYPE.STRFILTER_NAME))
        {
            GUIData.AddNotifyData("#{1278}");        // 包含非法字符
            return;
        }

        mainPlayer.ReqCreateGuild(szGuildName, szGuildDeclaration);
        gameObject.SetActive(false);
    }

    void OnClose()
    {
        gameObject.SetActive(false);
    }
}
