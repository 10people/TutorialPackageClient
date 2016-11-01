/********************************************************************
	创建时间:	2014/11/20 15:48
	全路径:		\Main\Project\Client\Assets\MLDJ\Script\GUI\GuildWarWinGroupItemLogic.cs
	创建人:		luoy
	功能说明:	帮战晋级赛胜出信息Item
	修改记录:
*********************************************************************/
using GCGame.Table;
using UnityEngine;
using System.Collections;

public class GuildWarWinGroupItemLogic : MonoBehaviour
{
    public UILabel m_WinGuildName;

    public void CleanUp()
    {
        m_WinGuildName.text = StrDictionary.GetClientDictionaryString("#{3335}"); //"??????";
        gameObject.SetActive(false);
    }
    public void InitInfo(string WinName)
    {
        m_WinGuildName.text = WinName;
        gameObject.SetActive(true);
    }
}
