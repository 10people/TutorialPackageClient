/********************************************************************
	创建时间:	2014/11/20 15:45
	全路径:		\Main\Project\Client\Assets\MLDJ\Script\GUI\GuildWarRankItemLogic.cs
	创建人:		luoy
	功能说明:	帮战海选结束16强信息Item
	修改记录:
*********************************************************************/
using GCGame.Table;
using UnityEngine;
using System.Collections;

public class GuildWarRankItemLogic : MonoBehaviour
{
    public UILabel m_WinGuildName;
    public UILabel m_WinGuildScore;

    public void CleanUp()
    {
        m_WinGuildName.text = StrDictionary.GetClientDictionaryString("#{3332}"); //"??????";
        m_WinGuildScore.text = StrDictionary.GetClientDictionaryString("#{3333}"); //"???";
        gameObject.SetActive(true);
    }
    public void InitInfo(string WinName,int nScore)
    {
        m_WinGuildName.text = WinName;
        m_WinGuildScore.text = nScore.ToString();
    }
}
