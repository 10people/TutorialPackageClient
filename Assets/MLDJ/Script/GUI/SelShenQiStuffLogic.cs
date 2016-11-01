/********************************************************************
	创建时间:	2014/12/15 16:55
	全路径:		\Project\Client\Assets\MLDJ\Script\GUI\SelShenQiStuffLogic.cs
	创建人:		luoy
	功能说明:	    神器更换材料界面
	修改记录:
*********************************************************************/

using System.Collections.Generic;
using Games.Item;
using GCGame;
using GCGame.Table;
using Module.Log;
using UnityEngine;
using System.Collections;

public class SelShenQiStuffLogic : MonoBehaviour
{
    
	// Use this for initialization
    public GameObject m_BackPackItems;
    public GameObject m_BackPackItemGrid;
    public GameObject m_NoCanSelItemLable;
    public GameObject m_SelShenQiStuffItem;
    private List<UIToggle> m_ItemInfoSelectToggle= new List<UIToggle>();
    public const int ITEMOBJECT_COUNT = 5;     //实际创建多少个Itemobject
    public const int ITEMPACK_SIZE = 90;        //最多需要显示多少个Item
    public const int ITEMOBJECT_WIDTH = 110;     //每个ItemObject的宽度


    private int m_Cur_StartItem = 0;                   //存放当前存在的itemobject开始编号
    private int m_Cur_EndItem = 0 + ITEMOBJECT_COUNT;  //存放当前存在的itemobject结束编号
    private List<GameItem> m_CurItemList;              //当前需要显示的Item
    private GameItem m_SelItemInfo = null;
    public Games.Item.GameItem SelItemInfo
    {
        get { return m_SelItemInfo; }
        set { m_SelItemInfo = value; }
    }
    private LivingSkillShenQiStuffLogic m_curShenQiStuffLogic = null;
    private int m_nNeedItemDataId = -1;
    private bool m_bLoadItem =false ;
    public void InitNeedInf(LivingSkillShenQiStuffLogic stuffLogic,int nNeedId)
    {
        m_curShenQiStuffLogic = stuffLogic;
        m_nNeedItemDataId = nNeedId;
    }
    void OnEnable()
    {
        if (m_bLoadItem == false)
        {
            LoadSelShenQiItem();
        }
        else
        {
            UpdateBackPack();
        }
    }

    void LoadSelShenQiItem()
    {
        for (int nIndex = 0; nIndex < (ITEMOBJECT_COUNT + 1); ++nIndex)
        {
            GameObject _gameObject = Utils.BindObjToParent(m_SelShenQiStuffItem, m_BackPackItemGrid, (nIndex + 1000).ToString());
            if (null != _gameObject)
            {
                SelShenQiStuffItemLogic item = _gameObject.GetComponent<SelShenQiStuffItemLogic>();
                if (null != item)
                    m_ItemInfoSelectToggle.Add(item.m_SeleToggle);
            }
        }
        UIGrid backPackItemGrid = m_BackPackItemGrid.GetComponent<UIGrid>();
        if (null != backPackItemGrid)
        {
            backPackItemGrid.sorted = true;
            backPackItemGrid.repositionNow = true;
        }
        UIDraggablePanel itemPanel = m_BackPackItems.GetComponent<UIDraggablePanel>();
        if (null != itemPanel)
        {
            itemPanel.onDragFinished += OnItemDragFinished;
          //  itemPanel.repositionClipping = true;
        }
        m_bLoadItem = true;
        UpdateBackPack();
    }

    public void CleanAllBackItemHighLight()
    {
        for (int i = 0; i < m_ItemInfoSelectToggle.Count; i++)
        {
            if (null != m_ItemInfoSelectToggle[i])
            {
                m_ItemInfoSelectToggle[i].value = false;
            }
        }
    }
    /// <summary>
    /// 更新背包部分显示
    /// </summary>
    public void UpdateBackPack()
    {
        m_SelItemInfo = null;//清空选择物品
        ShowBackPack();
        gameObject.SetActive(true);
    }

    void OnSelOk()
    {
        if (m_curShenQiStuffLogic != null && m_SelItemInfo!=null)
        {
            m_curShenQiStuffLogic.InitInfoAfterSel(m_SelItemInfo);
            gameObject.SetActive(false);
        }
        else
        {
            GUIData.AddNotifyData2Client(false, "#{5278}");
        }
    }
    //过滤上架物品
    private List<GameItem> FilterSelShenQiStuff(GameItemContainer Container)
    {
        List<GameItem> resultlist = new List<GameItem>();
        for (int nIndex = 0; nIndex < Container.ContainerSize; ++nIndex)
        {
            GameItem item = Container.GetItem(nIndex);
            if (null != item && item.IsValid() && item.DataID == m_nNeedItemDataId)
            {
                resultlist.Add(item);
            }
        }
        return ItemTool.ItemSort(resultlist);
    }
    private void ShowBackPack()
    {
        // 过滤物品
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        List<GameItem> itemlist = FilterSelShenQiStuff(BackPack);
        m_CurItemList = itemlist;
        // 显示物品
        ShowBackPackItemList(itemlist);
    }
   

    /// <summary>
    /// 将传入的物品现在在背包界面
    /// </summary>
    /// <param name="itemlist"></param>
    private void ShowBackPackItemList(List<GameItem> itemlist)
    {
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        bool isHaveCanSelItem = false;
        for (int nIndex = m_Cur_StartItem; nIndex < (m_Cur_EndItem + 1); ++nIndex)
        {
            if (nIndex < BackPack.ContainerSize)
            {
                if (nIndex < itemlist.Count)
                {
                    GameItem item = itemlist[nIndex];
                    Transform itemTranform = m_BackPackItemGrid.transform.FindChild((nIndex + 1000).ToString());
                    if (null != itemTranform)
                    {
                        GameObject ItemObject = itemTranform.gameObject;
                        if (ItemObject != null)
                        {
                            ItemObject.gameObject.SetActive(true);
                            SelShenQiStuffItemLogic bagItem = ItemObject.GetComponent<SelShenQiStuffItemLogic>();
                            if (null != bagItem)
                                bagItem.UpdateBackPackItem(item);
                            isHaveCanSelItem = true;
                        }
                    }
                }
                else
                {
                    GameObject ItemObject = m_BackPackItemGrid.transform.FindChild((nIndex + 1000).ToString()).gameObject;
                    if (ItemObject != null)
                    {
                        ItemObject.gameObject.SetActive(false);
                    }
                }
            }
        }
        //是否显示无可上架物品
        if (isHaveCanSelItem)
        {
            m_NoCanSelItemLable.SetActive(false);
        }
        else
        {
            m_NoCanSelItemLable.SetActive(true);
        }
    }
    /// <summary>
    /// 关闭背包
    /// </summary>
    public void CloseWindow()
    {
        gameObject.SetActive(false);
    }
    
    /// <summary>
    /// 每次滑动结束后调用
    /// 根据此次滑动是向上还是向下：1或2
    /// 1.把上面的gameobject移动到下面 并填充新的item信息
    /// 2.把下面的gameobject移动到上面 并填充新的item信息
    /// 
    /// 总共只有26个object 通过不断的上下移动和改变信息来实现完整显示
    /// </summary>
    public void OnItemDragFinished()
    {
        //根据DragPanel坐标 和 ItemObject宽度  计算出此时应该显示的Item的开始编号和结束编号
        int panelPosY = (int)m_BackPackItems.transform.localPosition.y + 35;
        int Target_StartItem = (int)(panelPosY / ITEMOBJECT_WIDTH);
        int Target_EndItem = (int)(panelPosY / ITEMOBJECT_WIDTH) + 5;

        //开始编号和结束编号的取值范围： [0, ITEMPACK_SIZE) 前开后闭
        if (Target_StartItem < 0)
        {
            Target_StartItem = 0;
        }
        if (Target_EndItem > ITEMPACK_SIZE - 1)
        {
            Target_EndItem = ITEMPACK_SIZE - 1;
        }
        if (Target_StartItem > m_Cur_StartItem && Target_EndItem > m_Cur_EndItem)
        {
            //手指向上滑   顶端的ItemObject移动到尾端 显示较大编号Item
            for (int nIndex = m_Cur_StartItem; nIndex < Target_StartItem; ++nIndex)
            {
                int TargetPos = m_Cur_EndItem + 1 + (nIndex - m_Cur_StartItem);
                if (TargetPos < 0 || TargetPos > ITEMPACK_SIZE - 1)
                {
                    continue;
                }
                Transform ItemTransform = m_BackPackItemGrid.transform.FindChild((nIndex + 1000).ToString());
                if (ItemTransform != null)
                {
                    GameObject ItemObject = ItemTransform.gameObject;
                    //移动到目标位置
                    int y = (-1) * (TargetPos * ITEMOBJECT_WIDTH);
                    ItemObject.transform.localPosition = new Vector3(0, y, 0);
                    //改为目标名称
                    ItemObject.gameObject.name = (TargetPos + 1000).ToString();
                    //填充要显示的Item内容
                    GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
                    if (TargetPos < BackPack.ContainerSize)
                    {
                        if (null != m_CurItemList && TargetPos < m_CurItemList.Count)
                        {
                            //有物品的格子
                            GameItem Item = m_CurItemList[TargetPos];
                            ItemObject.gameObject.SetActive(true);
                            SelShenQiStuffItemLogic bagItem = ItemObject.GetComponent<SelShenQiStuffItemLogic>();
                            if (null != bagItem)
                                bagItem.UpdateBackPackItem(Item);
                        }
                        else
                        {
                            ItemObject.gameObject.SetActive(false);
                        }
                    }
                }
            }
        }
        if (Target_StartItem < m_Cur_StartItem && Target_EndItem < m_Cur_EndItem)
        {
            //手指向下滑   尾端的ItemObject移动到顶端 显示较小编号Item
            for (int nIndex = m_Cur_EndItem; nIndex > Target_EndItem; --nIndex)
            {
                int TargetPos = m_Cur_StartItem - 1 - (m_Cur_EndItem - nIndex);
                if (TargetPos < 0 || TargetPos > ITEMPACK_SIZE - 1)
                {
                    continue;
                }
                Transform ItemTransform = m_BackPackItemGrid.transform.FindChild((nIndex + 1000).ToString());
                if (ItemTransform != null)
                {
                    GameObject ItemObject = ItemTransform.gameObject;
                    //移动到目标位置
                    int y = (-1) * (TargetPos * ITEMOBJECT_WIDTH);
                    ItemObject.transform.localPosition = new Vector3(0, y, 0);
                    //改为目标名称
                    ItemObject.gameObject.name = (TargetPos + 1000).ToString();
                    //填充要显示的Item内容
                    GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
                    if (TargetPos < BackPack.ContainerSize)
                    {
                        if (null != m_CurItemList && TargetPos < m_CurItemList.Count)
                        {
                            //有物品的格子
                            GameItem Item = m_CurItemList[TargetPos];
                            ItemObject.gameObject.SetActive(true);

                            ConsignSaleBagItem bagItem = ItemObject.GetComponent<ConsignSaleBagItem>();
                            if (null != bagItem)
                                bagItem.UpdateBackPackItem(Item);
                        }
                        else
                        {
                            ItemObject.gameObject.SetActive(false);
                        }
                    }
                }
            }
        }
        //更新当前开始编号 和 结束编号
        if (Target_StartItem >= 0 && Target_EndItem < ITEMPACK_SIZE)
        {
            if ((Target_EndItem - Target_StartItem) == ITEMOBJECT_COUNT)
            {
                m_Cur_StartItem = Target_StartItem;
                m_Cur_EndItem = Target_EndItem;
            }
            else if (Target_StartItem == 0)
            {
                m_Cur_StartItem = 0;
                m_Cur_EndItem = 0 + ITEMOBJECT_COUNT;
            }
            else if (Target_EndItem == (ITEMPACK_SIZE - 1))
            {
                m_Cur_StartItem = ITEMPACK_SIZE - 1 - ITEMOBJECT_COUNT;
                m_Cur_EndItem = ITEMPACK_SIZE - 1;
            }
        }
    }
}
