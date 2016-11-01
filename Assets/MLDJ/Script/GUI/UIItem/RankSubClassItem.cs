using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame;
public class RankSubClassItem : MonoBehaviour
{
    public UILabel m_NameLabel;
    public GameObject m_ClickSprite;
    public GameObject m_NornalSprite;
	public Color normalColor;
	public Color clickColor;
    private int m_nClass = (int)PVPData.Rank_Class.INVAILD_TYPE;

   
    private int m_nRanType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_INVALID;
    public int RanType
    {
        get { return m_nRanType; }
        set { m_nRanType = value; }
    }

    public static RankSubClassItem CreateItem(GameObject resItem, GameObject grid, string name)
    {
        GameObject curItem = Utils.BindObjToParent(resItem, grid, name);
        if (null == curItem)
        {
            return null;
        }
        RankSubClassItem curItemComponent = curItem.GetComponent<RankSubClassItem>();
        if (null == curItemComponent)
        {
            return null;
        }
        curItem.SetActive(true);
        return curItemComponent;
    }

    void Start()
    {
    }

    public void SetData(string strName, int nClass, int rankType)
    {
        m_NameLabel.text = strName;
        m_nClass = nClass;
        m_nRanType = rankType;
        m_ClickSprite.SetActive(false);
    }

    //点击筛选查询
    public void ClickSubClassBt()
    {
        if (RankWindow.Instance() != null)
        {
            RankWindow.Instance().OnClickRankClassBt(m_nClass, m_nRanType);
            m_ClickSprite.SetActive(true);
            m_NornalSprite.SetActive(false);
			m_NameLabel.color = clickColor;
        }
    }

    public void EnabledNormalSprit()
    {
        m_NornalSprite.SetActive(true);
		m_NameLabel.color = normalColor;
    }
}
