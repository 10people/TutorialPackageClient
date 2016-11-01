using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;

public class PVPRecordListItem : MonoBehaviour {

	public UILabel m_TimeLabel;
    public UILabel m_NameLabel;
    public UILabel m_RankLabel;

    public GameObject m_SuccessObj;
    public GameObject m_LoseObj;

//	private PVPRecordWindow m_parent;

    public static PVPRecordListItem CreateItem(GameObject grid, GameObject resItem, string name, PVPRecordWindow parent, string timeText,string nameText, string rankText,bool isSuccess)
	{
        GameObject curItem = Utils.BindObjToParent(resItem, grid, name);
        if (null != curItem)
        {
            PVPRecordListItem curItemComponent = curItem.GetComponent<PVPRecordListItem>();
            if (null != curItemComponent)
            {
                if (isSuccess)
                {
                    nameText = StrDictionary.GetClientDictionaryString("#{11017}", nameText);
                    rankText = StrDictionary.GetClientDictionaryString("#{11019}", rankText);
                   
                    curItemComponent.SetData(parent, timeText, nameText, rankText,isSuccess);
                }

                else
                {
                    nameText = StrDictionary.GetClientDictionaryString("#{11018}", nameText);
                    rankText = StrDictionary.GetClientDictionaryString("#{11020}", rankText);

                    curItemComponent.SetData(parent, timeText, nameText, rankText,isSuccess);
                }
            }
            return curItemComponent;
        }
        return null;
	}
	
	void SetData(PVPRecordWindow parent, string timeText,string nameText, string rankText,bool isActive)
	{
        m_TimeLabel.text = timeText;
        m_NameLabel.text = nameText;
        m_RankLabel.text = rankText;
        //这个排名的标签显示的逻辑~ 混乱
        m_SuccessObj.SetActive(!isActive);
        m_LoseObj.SetActive(isActive);
	}
}
