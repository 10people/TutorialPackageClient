using UnityEngine;
using System.Collections;
using GCGame.Table;

public class ScoreAwardItem : MonoBehaviour {

    const int MAX_NUM_ITEM = 6;

    public UILabel m_RankPosLabel;
    public ItemSlotLogic[] m_AwardList = new ItemSlotLogic[MAX_NUM_ITEM];
    public UIGrid m_ItemGrid;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    // 初始化
    public void Init(Tab_HongBaoRankAwardInfo tab)
    {
        if (tab == null)
        {
            return;
        }

        for (int i = 0; i < tab.getItemDataIDCount(); i++ )
        {
            if (i >= MAX_NUM_ITEM || i >= m_AwardList.Length)
            {
                return;
            }

            m_RankPosLabel.text = tab.RankPosHigh.ToString();
            if (tab.RankPosHigh < tab.RankPosLow)
            {
                m_RankPosLabel.text += "-" + tab.RankPosLow;
            }

            int nItemID =tab.GetItemDataIDbyIndex(i);
            int nItemCount = tab.GetItemCountbyIndex(i);
            Tab_CommonItem item = TableManager.GetCommonItemByID(nItemID,0);
            if (nItemCount > 0 && item != null)
            {
                m_AwardList[i].InitInfo_Item(nItemID, ItemSlotLogic.OnClickOpenTips, nItemCount.ToString(), true);
            }
            else
            {
                m_AwardList[i].gameObject.SetActive(false);
            }
			m_AwardList[i].gameObject.name = i.ToString();
        }
		m_ItemGrid.sorted = true;
        m_ItemGrid.Reposition(true);
    }
	public void Init(Tab_SongHuaAwardInfo tab)
	{
		if (tab == null)
		{
			return;
		}
		
		for (int i = 0; i < tab.getItemDataIDCount(); i++ )
		{
            if (i >= MAX_NUM_ITEM || i >= m_AwardList.Length)
			{
				return;
			}
			
			m_RankPosLabel.text = tab.RankPosHigh.ToString();
			if (tab.RankPosHigh < tab.RankPosLow)
			{
				m_RankPosLabel.text += "-" + tab.RankPosLow;
			}
			
			int nItemID =tab.GetItemDataIDbyIndex(i);
			int nItemCount = tab.GetItemCountbyIndex(i);
			Tab_CommonItem item = TableManager.GetCommonItemByID(nItemID,0);
			if (nItemCount > 0 && item != null)
			{
				m_AwardList[i].InitInfo_Item(nItemID, ItemSlotLogic.OnClickOpenTips, nItemCount.ToString(), true);
			}
			else
			{
				m_AwardList[i].gameObject.SetActive(false);
			}
			m_AwardList[i].gameObject.name = i.ToString();
		}
		m_ItemGrid.sorted = true;
		m_ItemGrid.Reposition(true);
	}
	public void Init(Tab_ShouHuaAwardInfo tab)
	{
		if (tab == null)
		{
			return;
		}
		
		for (int i = 0; i < tab.getItemDataIDCount(); i++ )
		{
			if (i >= MAX_NUM_ITEM || i >= m_AwardList.Length)
			{
				return;
			}
			
			m_RankPosLabel.text = tab.RankPosHigh.ToString();
			if (tab.RankPosHigh < tab.RankPosLow)
			{
				m_RankPosLabel.text += "-" + tab.RankPosLow;
			}
			
			int nItemID =tab.GetItemDataIDbyIndex(i);
			int nItemCount = tab.GetItemCountbyIndex(i);
			Tab_CommonItem item = TableManager.GetCommonItemByID(nItemID,0);
			if (nItemCount > 0 && item != null)
			{
				m_AwardList[i].InitInfo_Item(nItemID, ItemSlotLogic.OnClickOpenTips, nItemCount.ToString(), true);
			}
			else
			{
				m_AwardList[i].gameObject.SetActive(false);
			}
			m_AwardList[i].gameObject.name = i.ToString();
		}
		m_ItemGrid.sorted = true;
		m_ItemGrid.Reposition(true);
	}
}
