/********************************************************************
	创建时间:	2014/11/20 15:43
	全路径:		\Main\Project\Client\Assets\MLDJ\Script\GUI\GuildWarKillRankItemLogic.cs
	创建人:		luoy
	功能说明:	帮战击杀榜显示信息Item
	修改记录:
*********************************************************************/
using System;
using GCGame.Table;
using UnityEngine;
using System.Collections;

public class GuildWarKillRankItemLogic : MonoBehaviour
{

    public UILabel m_SortNumLable;
    public UILabel m_KillerNameLable;
    public UILabel m_KillNumLable;

    public void CleanUp(int nSortIndex)
    {
        m_SortNumLable.text = StrDictionary.GetClientDictionaryString("#{2494}", nSortIndex + 1);
        m_KillerNameLable.text = StrDictionary.GetClientDictionaryString("#{3328}");// "???";
        m_KillNumLable.text = StrDictionary.GetClientDictionaryString("#{3329}"); //"??";
        gameObject.SetActive(true);
    }
    public void InitInfo(GuildWarKillRank info)
    {
        m_SortNumLable.text = StrDictionary.GetClientDictionaryString("#{2494}", info.SortNum + 1); 
        m_KillerNameLable.text = info.KillerName;
        m_KillNumLable.text = info.KillerNum.ToString();
        gameObject.SetActive(true);
    }
}
