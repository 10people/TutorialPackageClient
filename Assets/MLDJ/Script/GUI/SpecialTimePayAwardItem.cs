using UnityEngine;
using System.Collections;
using GCGame.Table;

public class SpecialTimePayAwardItem : MonoBehaviour
{

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

    public void SetPos(int posMin, int posMax)
    {
        if (posMin < posMax)
        {
            m_RankPosLabel.text = StrDictionary.GetClientDictionaryString("#{5487}", posMin, posMax);
        }
        else
        {
            m_RankPosLabel.text = posMin.ToString();
        }
        
    }

    public void SetItem(int idx, int id, int num)
    {
        if (idx >= MAX_NUM_ITEM || idx >= m_AwardList.Length)
        {
            return;
        }

        m_AwardList[idx].gameObject.SetActive(true);
        if (id < 0)
        {
            m_AwardList[idx].gameObject.SetActive(false);
        }
        else if (id == 0)
        {
            //金币
            m_AwardList[idx].InitInfo_Coin(null, num.ToString(), true);
        }
        else if (id == 1)
        {
            //元宝
            m_AwardList[idx].InitInfo_Yuanbao(null, num.ToString(), true);
        }
        else if (id == 2)
        {
            //绑定元宝
            m_AwardList[idx].InitInfo_YuanbaoBind(null, num.ToString(), true);
        }
        else
        {
            //物品
            m_AwardList[idx].InitInfo_Item(id, ItemSlotLogic.OnClickOpenTips, num.ToString(), true);
        }

        m_AwardList[idx].gameObject.name = idx.ToString();

        m_ItemGrid.sorted = true;
        m_ItemGrid.Reposition(true);
    }
}
