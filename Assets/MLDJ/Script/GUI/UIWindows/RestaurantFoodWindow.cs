using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using System.Collections.Generic;
using Module.Log;
using Games.LogicObj;
using Games.GlobeDefine;
using System;
public class RestaurantFoodWindow : MonoBehaviour {

    public UIGrid       m_FoodListGrid;
    public GameObject   m_FoodFilterPanel;
    public RestaurantFoodItem[] m_FoodItemWindow;
    public GameObject[] m_FoodItemSelectBG;
    public GameObject[] m_FoodItemBG;
    public UILabel      m_PageLable;

    public const int    PageFoodMax = 3;     //每一页的最大食材数量 

    public const int DragPageMaxNum = 15;
    public UIDraggablePanel FoodListDraggablePanel;
    public TestDragPanel testDragPanel;
    public int addItemCount;

    //筛选规则重新定义
    public enum FILTERMETHOD
    {
        ALL = 0,
        LEVEL1 = 1,
        LEVEL2 = 2,
        LEVEL3 = 3,
        LEVEL4 = 4,
        LEVEL5 = 5,
        EXP = 6,
        COIN = 7,
        MATERIAL = 8,
    }
    public FILTERMETHOD curFilterMethod = FILTERMETHOD.ALL;


    private const int m_nMaxFilterLevel = 5;
    private bool[] m_nFilterLevel = new bool[m_nMaxFilterLevel];
    public GameObject  m_RestaurantFoodItem;
    public GameObject m_RestaurantFoodListGrid;

    public enum FOOD_REWARD_TYPE
    {
        REWARD_TYPE_INVALID = -1,
        REWARD_TYPE_EXP,
        REWARD_TYPE_COIN,
        REWARD_TYPE_MATERIAL,
        REWARD_TYPE_NUM,
    }

    private bool m_bFilterRewardExp;
    private bool m_bFilterRewardCoin;
    private bool m_bFilterRewardMeterial;

    private List<Tab_RestaurantFood> m_FoodList = new List<Tab_RestaurantFood>();
    
    public List<RestaurantFoodItem> m_gridFoodItemList = new List<RestaurantFoodItem>();
    private int startIndex = 1;
    private int endIndex = DragPageMaxNum;
    private int m_nCurPage = 0;
    private int m_nMaxPageNum;

    private RestaurantFoodItem curSelectFoodItem = null;

    // 新手指引
    private int m_NewPlayerGuide_Step = -1;
    public int NewPlayerGuide_Step
    {
        get { return m_NewPlayerGuide_Step; }
        set { m_NewPlayerGuide_Step = value; }
    }
    public GameObject m_BtnMarkFood;

    void OnEnable()
    {
        for (int i = 0; i < m_nMaxFilterLevel; i++)
        {
            m_nFilterLevel[i] = false;
        }
        if (RestaurantData.m_PlayerRestaurantInfo != null)
        {
            int nMyRestLevel = RestaurantData.m_PlayerRestaurantInfo.m_RestaurantLevel - 1;
            if (nMyRestLevel >= 0 && nMyRestLevel < m_nMaxFilterLevel)
            {
                m_nFilterLevel[nMyRestLevel] = true;
            }
        }
        m_bFilterRewardExp = true;
        m_bFilterRewardCoin = true;
        m_bFilterRewardMeterial = true;
        //for (int i = 0; i < m_nMaxFilterLevel; i++)
        //{
        //    m_nFilterLevel[i] = PlayerPreferenceData.GetRestaurantFilterLv(i + 1);
        //}

        //m_bFilterRewardExp = PlayerPreferenceData.RestaurantFilterExp;
        //m_bFilterRewardCoin = PlayerPreferenceData.RestaurantFilterCoin;
        //m_bFilterRewardMeterial = PlayerPreferenceData.RestaurantFilterMeterial;

         Dictionary<string, RestaurantConfigData> curRestaurantList = UserConfigData.GetRestaurantConfigList();
        if (curRestaurantList != null)
        {
            //UInt64 PlayerGuid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
            UInt64 PlayerGuid = PlayerPreferenceData.LastRoleGUID;
            if (curRestaurantList.ContainsKey(PlayerGuid.ToString()))
            {
                RestaurantConfigData oRestaurantConfig = curRestaurantList[PlayerGuid.ToString()];
                if (oRestaurantConfig != null)
                {
                    for (int i = 0; i < m_nMaxFilterLevel; i++)
                    {
                        m_nFilterLevel[i] = oRestaurantConfig.GetRestaurantFilterLv(i + 1) != 0 ? true : false;
                    }
                    m_bFilterRewardExp = oRestaurantConfig.RestaurantFilterExp != 0 ? true : false;
                    m_bFilterRewardCoin = oRestaurantConfig.RestaurantFilterCoin != 0 ? true : false;
                    m_bFilterRewardMeterial = oRestaurantConfig.RestaurantFilterMeterial != 0 ? true : false;
                }
            }
        }

        //FilterFood();
        //LoadFoodItem();
    }


    void OnDisable()
    {
        SaveRestaurantConfig();
    }

    public int FilterFood(Boolean bState=true)
    {
        if (m_FoodList == null)
        {
            LogModule.ErrorLog("m_FoodList == null");
            return 0;
        }
        m_FoodList.Clear();
		if(!bState)
			curFilterMethod = FILTERMETHOD.ALL;
        //重写排序的规则
        foreach (KeyValuePair<int, List<Tab_RestaurantFood>> curPair in TableManager.GetRestaurantFood())
        {
            switch (curFilterMethod)
            {
                case FILTERMETHOD.ALL:
                    m_FoodList.Add(curPair.Value[0]);
                    break;
                case FILTERMETHOD.LEVEL1:
                    if (curPair.Value[0].OpenLevel == 1)
                    {
                        m_FoodList.Add(curPair.Value[0]);
                    }
                    break;
                case FILTERMETHOD.LEVEL2:
                    if (curPair.Value[0].OpenLevel == 2)
                    {
                        m_FoodList.Add(curPair.Value[0]);
                    }
                    break;
                case FILTERMETHOD.LEVEL3:
                    if (curPair.Value[0].OpenLevel == 3)
                    {
                        m_FoodList.Add(curPair.Value[0]);
                    }
                    break;
                case FILTERMETHOD.LEVEL4:
                    if (curPair.Value[0].OpenLevel == 4)
                    {
                        m_FoodList.Add(curPair.Value[0]);
                    }
                    break;
                case FILTERMETHOD.LEVEL5:
                    if (curPair.Value[0].OpenLevel == 5)
                    {
                        m_FoodList.Add(curPair.Value[0]);
                    }
                    break;
                case FILTERMETHOD.EXP:
                    if (curPair.Value[0].PlayerExp > 0)
                    {
                        m_FoodList.Add(curPair.Value[0]);
                    }
                    break;
                case FILTERMETHOD.COIN:
                    if (curPair.Value[0].Money > 0)
                    {
                        m_FoodList.Add(curPair.Value[0]);
                    }
                    break;
                case FILTERMETHOD.MATERIAL:
                    bool bRewardItem = false;
                    for (int i = 0; i < curPair.Value[0].getRewardItemNumCount(); i++)
                    {
                         if (curPair.Value[0].GetRewardItemNumbyIndex(i) > 0)
                         {
                              bRewardItem = true;
                              break;
                         }
                    }
                    if (bRewardItem)
                    {
                        m_FoodList.Add(curPair.Value[0]);
                    }
                    break;
                default:
                    break;
            }
        }
//         foreach (KeyValuePair<int, List<Tab_RestaurantFood>> curPair in TableManager.GetRestaurantFood())
//         {
//             if (curPair.Value[0].OpenLevel <= m_nMaxFilterLevel && curPair.Value[0].OpenLevel > 0)
//             {
//                 if (!m_nFilterLevel[curPair.Value[0].OpenLevel - 1])
//                 {
//                     continue;
//                 }
//             }
//             bool bRewardSuit = false;
//             if (m_bFilterRewardExp)
//             {
//                 if (curPair.Value[0].PlayerExp > 0)
//                 {
//                     bRewardSuit = true;
//                 }
//             }
//             if ( false == bRewardSuit && m_bFilterRewardCoin)
//             {
//                 if (curPair.Value[0].Money > 0)
//                 {
//                     bRewardSuit = true;
//                 }
//             }
//             if (false == bRewardSuit && m_bFilterRewardMeterial)
//             {
//                 bool bRewardItem = false;
//                 for (int i = 0; i < curPair.Value[0].getRewardItemNumCount(); i++)
//                 {
//                     if (curPair.Value[0].GetRewardItemNumbyIndex(i) > 0)
//                     {
//                         bRewardItem = true;
//                         break;
//                     }
//                 }
//                 if (bRewardItem)
//                 {
//                     bRewardSuit=true;
//                 }
//             }
//             if (false == bRewardSuit)
            {
//                 continue;
            }
//             m_FoodList.Add(curPair.Value[0]);
//         }
        return m_FoodList.Count;
    }

    public void LoadFoodItem()
    {
        if ( m_FoodList.Count <= 0 )
        {
            foreach (KeyValuePair<int, List<Tab_RestaurantFood>> curPair in TableManager.GetRestaurantFood())
            {
                m_FoodList.Add(curPair.Value[0]);
            }
        }
        //m_nCurPage = 0;
        m_nMaxPageNum = m_FoodList.Count / PageFoodMax;
        int nFoodNum = m_FoodList.Count % PageFoodMax;
        if (nFoodNum > 0)
        {
            m_nMaxPageNum++;
        }
        //UpdateFood();
        FirstRefreshInfo();
    }

    public void FirstRefreshInfo()
    {
        startIndex = 1;
        endIndex = Mathf.Min(15, m_FoodList.Count);
        RefreshFoodItemInfo();
        //FoodListDraggablePanel.SetDragAmount(0, 0, false);
    }

    void OnCloseClick()
    {
        if ( m_FoodList != null )
        {
            m_FoodList.Clear();
        }
        curSelectFoodItem = null;
        for (int i = 0; i < m_FoodItemSelectBG.Length; i++)
        {
            m_FoodItemSelectBG[i].SetActive(false);
        }
        RestaurantController.Instance().CloseFoodWindow();
    }

    public void OnFoodItemClick(RestaurantFoodItem curItem)
    {
        curSelectFoodItem = curItem;
        for (int i = 0; i < m_FoodItemSelectBG.Length; i++)
        {
            m_FoodItemSelectBG[i].SetActive(false);
        }
        if (curItem.Index < m_FoodItemSelectBG.Length)
        {
            m_FoodItemSelectBG[curItem.Index].SetActive(true);
        }
        OnChooseSelectFood();
    }

    void OnChooseSelectFood()
    {
        if (RestaurantController.Instance() == null)
        {
            return;
        }
        if ( curSelectFoodItem == null )
        {
            MessageBoxLogic.OpenOKBox(3049,1000);
            return;
        }

        Tab_RestaurantFood curTabFood = TableManager.GetRestaurantFoodByID(curSelectFoodItem.FoodID, 0);
        if (null == curTabFood)
        {
            LogModule.ErrorLog("cur food id is not defined in table");
            return;
        }

        if (curTabFood.OpenLevel > RestaurantController.Instance().CurRestaurant().m_RestaurantLevel)
        {
            // 此菜品将在等级{0}开启
            MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{1989}", curTabFood.OpenLevel));
            return;
        }
        RestaurantController.Instance().OnChooseFoodFinish(curSelectFoodItem.FoodID);
        curSelectFoodItem = null;
    }

    //void OnClickAll()
    //{
    //    m_nFilterLevel = -1;
    //    m_nFilterRewardType = FOOD_REWARD_TYPE.REWARD_TYPE_INVALID;
    //    LoadFoodItem();
    //}

	void OnClickFilter()
    {
        if (m_FoodFilterPanel != null )
        {
            //for (int i = 0; i < m_nMaxFilterLevel; i++)
            //{
            //    m_nFilterLevel[i] = true;
            //}
            //m_bFilterRewardMeterial = true;
            //m_bFilterRewardExp = true;
            //m_bFilterRewardCoin = true;
            m_FoodFilterPanel.SetActive(true);
        }
    }

    public void SetFilterLevel( int nFilterLevel )
    {
        if ( nFilterLevel <= m_nFilterLevel.Length && nFilterLevel > 0 )
        {
            m_nFilterLevel[nFilterLevel-1] = !m_nFilterLevel[nFilterLevel-1];
            //PlayerPreferenceData.SetRestaurantFilterLv(nFilterLevel, m_nFilterLevel[nFilterLevel - 1]);
            
        }
        else
        {
            LogModule.ErrorLog("food filter level invalid");
        }
    }

    public bool IsLastLevelFilter( int nLevel )
    {
        int nCount = 0;
        for (int i = 0; i < m_nFilterLevel.Length; i++)
        {
            if (m_nFilterLevel[i])
            {
                nCount++;
            }
        }
        if ( nCount > 1 )
        {
            return false;
        }
        if (nLevel > 0 && nLevel <= m_nFilterLevel.Length)
        {
            if (m_nFilterLevel[nLevel-1])
            {
                return true;
            }
        }
        return false;
    }
    public bool IsLevelFilter( int nLevel )
    {
        if (nLevel > 0 && nLevel <= m_nFilterLevel.Length)
        {
            if (m_nFilterLevel[nLevel - 1])
            {
                return true;
            }
        }
        return false;
    }

    public void SetFilterRewardType( FOOD_REWARD_TYPE rewardType )
    {
        switch ( rewardType )
        {
            case FOOD_REWARD_TYPE.REWARD_TYPE_EXP:
                {
                    m_bFilterRewardExp = !m_bFilterRewardExp;
                    //PlayerPreferenceData.RestaurantFilterExp = m_bFilterRewardExp;
                   
                }
        	    break;
            case FOOD_REWARD_TYPE.REWARD_TYPE_COIN:
                {
                    m_bFilterRewardCoin = !m_bFilterRewardCoin;
                    //PlayerPreferenceData.RestaurantFilterCoin = m_bFilterRewardCoin;
                   
                }
                break;
            case FOOD_REWARD_TYPE.REWARD_TYPE_MATERIAL:
                {
                    m_bFilterRewardMeterial = !m_bFilterRewardMeterial;
                    //.RestaurantFilterMeterial = m_bFilterRewardMeterial;
                   
                }
                break;
        }
    }

    public bool IsLastRewardTypeFilter( FOOD_REWARD_TYPE rewardtype )
    {
        int nCount = 0;
        if ( m_bFilterRewardExp )
        {
            nCount++;
        }
        if ( m_bFilterRewardCoin)
        {
            nCount++;
        }
        if ( m_bFilterRewardMeterial)
        {
            nCount++;
        }
        if (nCount > 1)
        {
            return false;
        }
        if (rewardtype == FOOD_REWARD_TYPE.REWARD_TYPE_EXP)
        {
            if (m_bFilterRewardExp)
            {
                return true;
            }
        }
        if (rewardtype == FOOD_REWARD_TYPE.REWARD_TYPE_COIN)
        {
            if (m_bFilterRewardCoin)
            {
                return true;
            }            
        }
        if (rewardtype == FOOD_REWARD_TYPE.REWARD_TYPE_MATERIAL)
        {
            if ( m_bFilterRewardMeterial)
            {
                return true;
            }            
        }
        return false;
    }

    public bool IsRewardTypeFilter( FOOD_REWARD_TYPE rewardtype )
    {
        if (rewardtype == FOOD_REWARD_TYPE.REWARD_TYPE_EXP)
        {
            if (m_bFilterRewardExp)
            {
                return true;
            }
        }
        if (rewardtype == FOOD_REWARD_TYPE.REWARD_TYPE_COIN)
        {
            if (m_bFilterRewardCoin)
            {
                return true;
            }
        }
        if (rewardtype == FOOD_REWARD_TYPE.REWARD_TYPE_MATERIAL)
        {
            if (m_bFilterRewardMeterial)
            {
                return true;
            }
        }
        return false;
    }

    void SaveRestaurantConfig()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }
        RestaurantConfigData RestaurantConfigData = new RestaurantConfigData();
        for (int i = 0; i < m_nMaxFilterLevel; i++)
        {
            RestaurantConfigData.SetRestaurantFilterLv(i + 1, m_nFilterLevel[i]? 1:0);
        }
        RestaurantConfigData.RestaurantFilterExp = m_bFilterRewardExp? 1:0;
        RestaurantConfigData.RestaurantFilterCoin = m_bFilterRewardCoin ? 1:0;
        RestaurantConfigData.RestaurantFilterMeterial = m_bFilterRewardMeterial ? 1:0;
        UserConfigData.AddRestaurantConfig(Singleton<ObjManager>.GetInstance().MainPlayer.GUID.ToString(), RestaurantConfigData);
    }

    public void OnCloseFliterWindow()
    {
        int nFoodNum = FilterFood();
        if (nFoodNum <= 0)
        {
            MessageBoxLogic.OpenOKBox(2350, 1000);
            return;
        }
        if ( m_FoodFilterPanel != null )
        {
            m_FoodFilterPanel.SetActive(false);
        }
        m_nCurPage = 0;
        LoadFoodItem();
    }

     public void OnClickNextPage()
    {
//          if ( m_nCurPage < m_nMaxPageNum -1 )
//          {
//              m_nCurPage++;
//              UpdateFood();
//          }
        addItemCount = Mathf.Min(5, m_FoodList.Count - endIndex);

        if (addItemCount < 0)
        {
            addItemCount = 0;
        }
        if (addItemCount > 0)
        {
            startIndex += addItemCount;
            endIndex += addItemCount;

            RefreshFoodItemInfo();
         }
    }

    public void OnClickPrePage()
    {
//         if ( m_nCurPage > 0 )
//         {
//             m_nCurPage--;
//             UpdateFood();
//         }
        addItemCount = Mathf.Min(5, startIndex - 1);
        if (addItemCount < 0)
        {
            addItemCount = 0;
        }
        if (addItemCount > 0)
        {
            startIndex -= addItemCount;
            endIndex -= addItemCount;
            RefreshFoodItemInfo();
        }
    }

    public void BindFoodItem()
    {
        for (int i = 0; i < DragPageMaxNum; i++)
        {
            GameObject restaurantFoodItem = Utils.BindObjToParent(m_RestaurantFoodItem, m_RestaurantFoodListGrid, (i+1).ToString());
            if (restaurantFoodItem == null || restaurantFoodItem.GetComponent<RestaurantFoodItem>() == null)
            {
                continue;
            }
            m_gridFoodItemList.Add(restaurantFoodItem.GetComponent<RestaurantFoodItem>());
        }
        m_FoodListGrid.onReposition += RepositionOver;
        m_FoodListGrid.repositionNow = true;
    }

    void RepositionOver()
    {
        testDragPanel.SetTopCheckItem(m_gridFoodItemList[5].gameObject);//第6个item
        testDragPanel.SetBottomCheckItem(m_gridFoodItemList[9].gameObject); //第10个item
        FilterFood();
        LoadFoodItem();
    }


    public void RefreshFoodItemInfo()
    {
        for (int i = 0; i < DragPageMaxNum; ++i)
        {
            int itemIndex = i + startIndex;
            if (itemIndex <= m_FoodList.Count)
            {
                NGUITools.SetActive(m_gridFoodItemList[i].gameObject, true);
                Tab_RestaurantFood oFood = m_FoodList[itemIndex - 1];
                m_gridFoodItemList[i].SetData(this, oFood);
                m_gridFoodItemList[i].Index = i;
            }
            else
            {
               // NGUITools.SetActive(m_gridFoodItemList[i].gameObject, false);
            }
        }
        //m_FoodListGrid.Reposition();
    }


    void OpenTarget()
    {
        m_FoodListGrid.Reposition();
    }

    void UpdateFood()
    {
        if (null == m_FoodListGrid)
        {
            LogModule.ErrorLog("m_FoodListGrid is null");
            return;
        }
        for (int i = 0; i < PageFoodMax && i < m_FoodItemWindow.Length; i++)
        {         
            m_FoodItemWindow[i].Clear();
        }
       int nBeginIndex = m_nCurPage * PageFoodMax;
       for (int i = 0; i < PageFoodMax && i < m_FoodItemWindow.Length; i++)
       {
           int nIndex = nBeginIndex + i;
           if ( nIndex < m_FoodList.Count )
           {
               Tab_RestaurantFood oFood = m_FoodList[nIndex];
               m_FoodItemWindow[i].SetData(this, oFood);
               m_FoodItemWindow[i].Index = i;
           }
       }
       m_FoodListGrid.Reposition();
       if (m_PageLable != null)
        {
            m_PageLable.text = (m_nCurPage + 1).ToString() + "/" + m_nMaxPageNum.ToString();
        }
       curSelectFoodItem = null;
       for (int i = 0; i < m_FoodItemSelectBG.Length; i++)
        {
            m_FoodItemSelectBG[i].SetActive(false);
        }
       for (int i = 0; i < m_FoodItemBG.Length; i++)
       {
           m_FoodItemBG[i].SetActive(true);
       }
       for (int i = 0; i < m_FoodItemWindow.Length && i < m_FoodList.Count; i++)
       {
           Tab_RestaurantFood oFood = m_FoodList[i];
           if (oFood != null && RestaurantData.m_PlayerRestaurantInfo != null)
           {
               if (oFood.OpenLevel <= RestaurantData.m_PlayerRestaurantInfo.m_RestaurantLevel)
               {
                   m_FoodItemWindow[i].OnItemClick();
                   break;
               }
           }
       }     
    }



    void OnCloseFilterPanel(GameObject go)
    {
        NGUITools.SetActive(go, false);
    }
    
}
