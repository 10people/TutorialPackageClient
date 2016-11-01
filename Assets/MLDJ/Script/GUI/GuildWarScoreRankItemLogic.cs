/********************************************************************
	创建时间:	2014/11/20 15:47
	全路径:		D:\Code\TLOL\Version\Main\Project\Client\Assets\MLDJ\Script\GUI\GuildWarScoreRankItemLogic.cs
	创建人:		luoy
	功能说明:	海选界面积分榜单信息Item
	修改记录:
*********************************************************************/
using GCGame.Table;
using UnityEngine;
using System.Collections;

public class GuildWarScoreRankItemLogic : MonoBehaviour
{

    public UILabel m_SortNumLable;
    public UILabel m_GuildNameLable;
    public UILabel m_GuildScoreLable;
    // Use this for initialization
	void Start () 
    {
	
	}
    public void CleanUp(int nSortIndex)
    {
        m_SortNumLable.text = StrDictionary.GetClientDictionaryString("#{2494}", nSortIndex + 1);
        m_GuildNameLable.text = StrDictionary.GetClientDictionaryString("#{3330}"); //"???";
        m_GuildScoreLable.text = StrDictionary.GetClientDictionaryString("#{3331}"); //"??";
        gameObject.SetActive(true);
    }

    public void InitInfo(GuildWarPreliminaryRank info)
    {
        m_SortNumLable.text = StrDictionary.GetClientDictionaryString("#{2494}", info.SortNum + 1); 
        m_GuildNameLable.text = info.GuildName;
        m_GuildScoreLable.text = info.Score.ToString();
        gameObject.SetActive(true);
    }
}
