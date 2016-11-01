using UnityEngine;
using System.Collections;
using Games.Item;
using Games.GlobeDefine;
using System.Collections.Generic;

public class ChatInfoSelectLinkCommonItemLogic : ChatInfoSelectLinkItemLogic
{
    public UISprite m_itemIcon;
    public UISprite m_itemQuality;
    public UILabel m_itemCount;

    private GameItem m_item;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public override void Init(ChatInfoSelectLinkLogic.Data data, int index)
    {
        base.Init(data, index);
        this.name = string.Format("{0:D6}", index);

        GameItem item = data.item;
        m_item = item;
        if (null == item)
        {
            return;
        }

        m_itemIcon.spriteName = item.GetIcon();
        m_itemQuality.spriteName = GlobeVar.QualityColorGrid[(int)item.GetQuality() - 1 < 0 ? 0 : (int)item.GetQuality() - 1];
        m_itemCount.text = "X " + item.StackCount.ToString();
        //         List<ChatInfoSelectLinkLogic.Data> res = new List<ChatInfoSelectLinkLogic.Data>();
        // 
        //         GameItemContainer EquipPack = GameManager.gameManager.PlayerDataPool.EquipPack;
        //         for (int nIndex = 0; nIndex < EquipPack.ContainerSize; ++nIndex)
        //         {
        //             GameItem equip = EquipPack.GetItem(BackPackLogic.GetEquipSlotByIndex(nIndex));
        //             if (equip != null && equip.IsValid())
        //             {
        //                 ChatInfoSelectLinkLogic.Data tempdata = new ChatInfoSelectLinkLogic.Data();
        //                 tempdata.item = equip;
        //                 res.Add(tempdata);
        //             }
        //         }



        //         GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        //         List<GameItem> itemall = ItemTool.ItemFilter(BackPack, 0, 0, false);
        //         for (int nIndex = 0; nIndex < GameItemContainer.MAXSIZE_BACKPACK; ++nIndex)
        //         {
        //             if (nIndex < BackPack.ContainerSize && nIndex < itemall.Count)
        //             {
        //                 ChatInfoSelectLinkLogic.Data tempdata = new ChatInfoSelectLinkLogic.Data();
        //                 tempdata.item = itemall[nIndex];
        //                 res.Add(tempdata);
        //             }
        //         }

        //         //每页显示数量
        //         int itemPageCount = ChatInfoSelectLinkLogic.MAX_COMMONITEM_COUNT;
        // 
        //         //当前页起始下标
        //         int startIndex = itemPageCount * (index);
        // 
        //         //当前页结束下标
        //         int endIndex = startIndex + itemPageCount - 1;
        // 
        //          showData = new List<ChatInfoSelectLinkLogic.Data>();
        //          for (int nIndex = startIndex; nIndex <= endIndex && nIndex < res.Count; nIndex++)
        //         {
        //             showData.Add(res[nIndex]);
        //         }
        // 
        //         showDataCount = showData.Count;
        // 
        //         for (int i = 0; i < itemPageCount; i++)
        //         {
        //             itemObj[i].SetActive(i < showDataCount);
        //             m_itemIcon[i].gameObject.name = i.ToString();
        //             if (i < showDataCount)
        //             {
        //                 GameItem item = showData[i].item;
        //                 m_item = item;
        //                 if (null == item)
        //                 {
        //                     continue;
        //                 }
        // 
        // 
        //                 m_itemIcon[i].spriteName = item.GetIcon();
        //                 m_itemQuality[i].spriteName = GlobeVar.QualityColorGrid[(int)item.GetQuality() - 1 < 0 ? 0 : (int)item.GetQuality() - 1];
        //                 m_itemCount[i].text = "X " +item.StackCount.ToString();
        //             }
        //         }

    }

    public void OnClickItem(GameObject obj)
    {
        if (ChatInfoLogic.Instance() != null)
        {
            ShareTargetChooseLogic.AdditionShareMsg = "";
            ShareTargetChooseLogic.IsYaoHe = false;

//             int index = -1;
// 
//             if (int.TryParse(obj.name, out index))
//             {
// 
//             }
// 
//             if (index < 0 || index >= showDataCount)
//             {
//                 return;
//             }
// 
//             m_item = showData[index].item;

            if (null == m_item)
            {
                return;
            }
            if (m_item.IsEquipMent())
            {
                ChatInfoLogic.Instance().InsertEquipLinkText(m_item);
            }
            else
            {
                ChatInfoLogic.Instance().InsertItemLinkText(m_item);
            }
        }
    }
}
