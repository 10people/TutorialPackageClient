using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;

public class PvPRankListItem : MonoBehaviour {
    public UILabel m_Label1;
    public UILabel m_Label2;
    public UILabel m_Label3;
    public UILabel m_Label4;
    public UILabel m_Label5;
    public UILabel m_Label6;
    public UISprite m_proIcon;

    PvPRankWindow m_Parent;
    PVPData.PvPRankListItemInfo m_data;

    public static PvPRankListItem CreateItem(GameObject grid, GameObject resItem, PvPRankWindow parent, string name, PVPData.PvPRankListItemInfo data)
    {
        GameObject curItem = Utils.BindObjToParent(resItem, grid, name);
        if (null != curItem)
        {
            PvPRankListItem curItemComponent = curItem.GetComponent<PvPRankListItem>();
            if (null != curItemComponent)
                curItemComponent.SendData(parent, data);
            return curItemComponent;
        }

        return null;
    }

    public PVPData.PvPRankListItemInfo GetData()
    {
        return m_data;
    }

    public void SendData(PvPRankWindow parent, PVPData.PvPRankListItemInfo data)
    {
        Cleanup();
        m_Parent = parent;
        m_data = data;

        if (data.pos <= 3)
        {
            if (data.pos == 1)
            {
                m_RankIcon.spriteName = "Icon-Rank01";
            }

            else if (data.pos == 2)
            {
                m_RankIcon.spriteName = "Icon-Rank02";
            }

            else if (data.pos == 3)
            {
                m_RankIcon.spriteName = "Icon-Rank03";
            }

            m_RankPlayerName.text = data.name;
            m_RankPlayerIcon.gameObject.SetActive(true);
            m_RankPlayerLevel.text = data.level.ToString();
        }
        else
        {
            m_Label1.text = data.pos.ToString();
            m_Label2.text = data.name;
            m_Label4.text = data.level.ToString();
        }
        m_Label5.text = data.com.ToString();
        m_Label6.text = TableManager.GetPvpRankByID(data.pos, 0).Vlue.ToString();
        m_RankPlayerIcon.spriteName = Utils.GetHeadPicByProfession((int)data.profession);
        m_proIcon.spriteName = Utils.GetProfessionIcon((int)data.profession);
    }

    public void Cleanup()
    {
        m_Label1.text = "";
        m_Label2.text = "";
        m_Label3.text = "";
        m_Label4.text = "";
        m_Label5.text = "";
        m_Label6.text = "";

        m_RankIcon.spriteName = "";
        m_RankPlayerName.text = "" ;
        m_RankPlayerIcon.spriteName = "";
        m_RankPlayerLevel.text = "";
    }
    //================================================
    public UISprite m_RankIcon ;
    public UILabel  m_RankPlayerName ;
    public UISprite m_RankPlayerIcon;
    public UILabel  m_RankPlayerLevel ;

}
