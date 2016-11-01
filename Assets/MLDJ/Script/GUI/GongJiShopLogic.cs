using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;
using Games.LogicObj;

public class GongJiShopLogic : UIControllerBase<GongJiShopLogic>
{

    public GongJiShopItem m_GongJiItem;
    public UIGrid m_ListGrid;
    public UILabel m_GongJiLabel;

    public const int ConsumItem_DataID = 59374;

    private int m_GongJiCount;
    public int GongJiCount
    {
        get { return m_GongJiCount; }
        set { 
            m_GongJiCount = value;
            
            if (m_GongJiLabel)
            {
                m_GongJiLabel.text = m_GongJiCount.ToString();
            }
        }
    }
    void Awake()
    {
        SetInstance(this);
    }

	// Use this for initialization
	void Start () {
        UpDateGongJi();
        UpdateShopList();
	}

    void OnDestroy()
    {
        SetInstance(null);
    }

    void OnClose()
    {
        UIManager.CloseUI(UIInfo.GongJiShopRoot);
    }
    
    // 更新列表
    public void UpdateShopList()
    {
        Utils.CleanGrid(m_ListGrid.gameObject);

        Obj_MainPlayer MainPlayer =  Singleton<ObjManager>.Instance.MainPlayer;
        if (MainPlayer == null)
        {
            return;
        }

        foreach (KeyValuePair<int, List<Tab_GongJiShop>> pair in TableManager.GetGongJiShop())
        {
            Tab_GongJiShop tabShopItem = pair.Value[0];
            
            // 空的
            if (tabShopItem == null)
            {
                continue;
            }

            // 职业是否
            if (tabShopItem.ProfessID != GlobeVar.INVALID_ID && tabShopItem.ProfessID != MainPlayer.Profession)
            {
                continue;
            }
            
            // 创建 红包
            GameObject gShopItem = Utils.BindObjToParent(m_GongJiItem.gameObject, m_ListGrid.gameObject, tabShopItem.Id.ToString());
            if (null != gShopItem)
            {
                GongJiShopItem ShopItem = gShopItem.GetComponent<GongJiShopItem>();
                if (null != ShopItem)
                {
                    ShopItem.Init(tabShopItem.Id);
                }
            }
        }

        m_ListGrid.Reposition(true);
    }

    public void UpDateGongJi()
    {
        GongJiCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(ConsumItem_DataID); ;
    }
}
