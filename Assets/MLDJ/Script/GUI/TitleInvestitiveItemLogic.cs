//********************************************************************
// 文件名: TitleInevstitiveItemLogic.cs
// 描述: 称号界面中称号条目
// 作者: WangZhe
//********************************************************************

using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.GlobeDefine;

public class TitleInvestitiveItemLogic : MonoBehaviour {

    public enum TITLE_CLASS
    {
        SYSTEM,
        USERDEF,
        NOHOLD,
    }

    private int m_TitleID = GlobeVar.INVALID_ID;
    public int TitleID
    {
        get { return m_TitleID; }
        set { m_TitleID = value; }
    }
    private string m_strUserDefFullName = "";
    private int m_Index = -1;
    public int Index
    {
        get { return m_Index; }
        set { m_Index = value; }
    }
    private TITLE_CLASS m_TitleClass = TITLE_CLASS.NOHOLD;

    private int m_GainTime;

    public UILabel m_TitleNameLabel;

    public void InitSystemTitleInfo(int nTitleID, int i, int nGainTime)
    {
        m_TitleID = nTitleID;
        m_Index = i;
        m_TitleClass = TITLE_CLASS.SYSTEM;
        m_GainTime = nGainTime;

        Tab_TitleData tabTitleData = TableManager.GetTitleDataByID(nTitleID, 0);
        if (tabTitleData != null)
        {
            string strTitleName = Utils.GetTitleColor(tabTitleData.ColorLevel);
            strTitleName += tabTitleData.InvestitiveName;
            m_TitleNameLabel.text = strTitleName;
        }
        // m_TitleNameLabel.color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
    }

    public void InitUserDefTitleInfo(int nTitleID, string strUserDefFull, int i, int nGainTime)
    {
        m_TitleID = nTitleID;
        m_strUserDefFullName = strUserDefFull;
        m_Index = i;
        m_TitleClass = TITLE_CLASS.USERDEF;
        m_GainTime = nGainTime;

        Tab_TitleData tabTitleData = TableManager.GetTitleDataByID(nTitleID, 0);
        if (tabTitleData != null)
        {
            string strTitleName = Utils.GetTitleColor(tabTitleData.ColorLevel);
            strTitleName += m_strUserDefFullName;
            m_TitleNameLabel.text = strTitleName;
        }
        // m_TitleNameLabel.color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
    }

    public void InitNoHoldTitleInfo(int nTitleID)
    {
        m_TitleID = nTitleID;
        m_Index = GlobeVar.INVALID_ID;
        m_TitleClass = TITLE_CLASS.NOHOLD;

        Tab_TitleData tabTitleData = TableManager.GetTitleDataByID(nTitleID, 0);
        if (tabTitleData != null)
        {
            string strTitleName = "[61bcb8]";
            Tab_TitleType tabTitleType = TableManager.GetTitleTypeByID(tabTitleData.Type, 0);
            if (tabTitleType != null)
            {
                strTitleName += tabTitleType.TypeName;
                m_TitleNameLabel.text = strTitleName;
            }
        }
        // m_TitleNameLabel.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
    }

    public void ChooseTitleInvestitive()
    {
        if (null != TitleInvestitiveLogic.Instance())
            TitleInvestitiveLogic.Instance().ChooseTitleInvestitive(m_Index, m_TitleID, m_TitleClass, m_GainTime);
    }
}