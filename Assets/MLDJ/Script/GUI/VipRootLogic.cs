using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Module.Log;
using Games.GlobeDefine;
using Games.Item;
using System.Collections.Generic;
using Games.LogicObj;

public class VipRootLogic : UIControllerBase<VipRootLogic>
{
    public UISprite     m_Image;
    public UILabel      m_LevelText;
    public UISprite     m_LevelSprite;
    public UILabel      m_ProgressTips;
    public UILabel      m_ProgressText;
    public GameObject   m_Progress;

    public GameObject   m_BonusEquip;
    public UILabel      m_BonusText;
    public UISprite     m_BonusImage;
    public UILabel      m_BonusNum;
    public UISprite     m_BonusQuality;

    public GameObject   m_AddItem;
    public UISprite     m_AddImage;
    public UILabel      m_AddNum;
    public UISprite     m_AddQuality;

    public UILabel      m_LevelIntro;
    public UISprite     m_NewVIP;
    public UISprite     m_NewVIPGold;
    public UILabel      m_Levelnow;
    public UILabel      m_Levelnew;
    public UILabel      m_LevelnewGold;
    public UICabalDraggablePanel m_Grid;
    public TabController m_Tab;
    public UISprite     m_VipTips;
    public UISprite     m_SentSprite;
    public UISprite     m_AddSprite;
    public GameObject  m_preVipButton;
    public GameObject m_nextVipButton;

    public UILabel m_ArrowLeftText;
    public UILabel m_ArrowRightText;

    //新增
    public GameObject[] m_NewAddItem;
    public UISprite[] m_NewAddImage;
    public UILabel[] m_NewAddNum;
    public UISprite[] m_NewAddQuality;
    public UISprite[] m_SendSprite;
    public UISprite m_GiveBounsBtn;
    public UIDraggablePanel m_DragPanel;

    //buffer data
    private int         m_SavedItem;
    private int         m_SavedAdd;
    private int[]       m_NewSavedAdd;
    private int         m_ShowLevel;
    

    void Awake()
    {
        SetInstance(this);
    }

	void Start () 
    {
        //m_Tab.delTabChanged = OnClickedList;
        UpdateVipInfo();
        RefreshVIPTips();
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.VIP_UI);
#endif
        Messenger.AddListener(MessengerConst.OnUserVIPDataLogicInfo, UpdateVipInfo);
	}

    void OnDestroy()
    {
        SetInstance(null);
        Messenger.RemoveListener(MessengerConst.OnUserVIPDataLogicInfo, UpdateVipInfo);
    }

    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.VipRoot);
    }   

    void OnClickItem()
    {
        if ( m_SavedItem > 0 )
        {
            GameItem item = new GameItem();
            item.DataID = m_SavedItem;
            if (item.IsEquipMent())
            {
                EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
            }
            else
            {
                ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
            }
        }
    }

    void OnClickAdd()
    {
        if (m_SavedAdd > 0)
        {
            GameItem item = new GameItem();
            item.DataID = m_SavedAdd;
            if (item.IsEquipMent())
            {
                EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
            }
            else
            {
                ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
            }
        }
    }
    void OnNewClickAdd(GameObject go)
    {
        if (m_NewSavedAdd[int.Parse(go.name)] > 0)
        {
            GameItem item = new GameItem();
            item.DataID = m_NewSavedAdd[int.Parse(go.name)];
            if (item.IsEquipMent())
            {
                EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
            }
            else
            {
                ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
            }
        }
    }

    public void RefreshVIPTips()
    {
        m_VipTips.gameObject.SetActive(GameManager.gameManager.PlayerDataPool.IsShowVipTip);

        if (GameManager.gameManager.PlayerDataPool.IsShowVipTip)
        {
            GameManager.gameManager.PlayerDataPool.IsShowVipTip = false;

            if (RechargeBarLogic.Instance() != null)
            {
                RechargeBarLogic.Instance().RefreshVIPTips();
            }
        }
    }

    void UpdateVipInfo()
    {
        int nCost = 0;
        m_SavedItem = 0;
        m_ShowLevel = 0;
        m_SavedAdd = 0;
        m_NewSavedAdd = new int[4] { 0,0,0,0 };
        Obj_MainPlayer obj = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (obj != null)
        {
            nCost = obj.VipCost;
        }
        if (  nCost >= 0  )
        {
            int nLevel = 0; //当前的vip等级
            int nLeft = 0; //消耗的元宝在结算成vip等级后还剩下多少
            int nMax = 0;
            VipData.GetVipLevel(nCost, ref nLevel, ref nLeft);            

            if (nLevel >= VipData.m_MaxShowLevel)
            {
                nMax = GetMaxCostByLevel(nLevel);
                nLeft = nMax;
                m_ShowLevel = VipData.m_MaxShowLevel;
            }
            else
            {
                nMax = GetMaxCostByLevel(nLevel + 1);
                m_ShowLevel = nLevel;
            }
            //等级名称
            if ( nLevel != 0 )
            {
                //m_LevelText.text = nLevel.ToString() + "级特权";
                m_LevelText.text = StrDictionary.GetClientDictionaryString("#{2882}", nLevel);
                m_LevelSprite.gameObject.SetActive(true);
            }
            else
            {
                m_LevelText.text = StrDictionary.GetClientDictionaryString("#{2882}", 1); 
                m_LevelSprite.gameObject.SetActive(false);
            }
            //等级星标
            m_Image.spriteName = VipData.GetStarIconByLevel(nLevel);

            if ( nMax >= 0 )
            {
                float nPercent = (float)nLeft / nMax;    
                //进度条
                m_Progress.transform.localScale = new Vector3(nPercent, 1, 1);
                //进度条数字
                m_ProgressText.text = nLeft*10 + "/" + nMax*10;
                //进度条提示
                if (nLevel < VipData.m_MaxShowLevel)
                {                   
                    //m_ProgressTips.text = "再充值" + (nMax - nLeft).ToString() + "升级为VIP" + (nLevel + 1).ToString();

                    //modified by zhang dongai [tt12776] 2015-1-17
                    //各个渠道版本不应该区分字典号，直接使用一个字典号，对内容本地化即可
                    //因为已经区分了字典号，那么大陆使用2880字典号。其他渠道全部使用4717字典号，不能再新增字典号了。
                    //string dicTip = "#{2880}";
                    ////如果不是大陆版本，使用4717字典号
                    //if (!PlatformHelper.IsChannelMainland())
                    //{
                    //    dicTip = "#{4717}";
                    //}
                    m_ProgressTips.text = StrDictionary.GetClientDictionaryString("#{4717}", (nMax - nLeft)*10, nLevel + 1);
                    
                }
                else
                {
                    m_ProgressTips.text = "";
                }
                if (nLeft == nMax)
                {
                    m_NewVIPGold.gameObject.SetActive(true);
                    m_NewVIP.gameObject.SetActive(false);
                    m_Levelnew.gameObject.SetActive(false);
                    m_LevelnewGold.gameObject.SetActive(true);
                }
                else
                {
                    m_NewVIPGold.gameObject.SetActive(false);
                    m_NewVIP.gameObject.SetActive(true);
                    m_Levelnew.gameObject.SetActive(true);
                    m_LevelnewGold.gameObject.SetActive(false);
                }
             }
            //滚动
            if (m_ShowLevel == 0)
            {
                m_ShowLevel = 1;
            }
            //m_Grid.MoveRelative(new Vector3(0,75*(m_ShowLevel-1),0));
            //m_Tab.ChangeTab(System.String.Format("ImageButton{0:D2}", m_ShowLevel));
            //默认显示详细信息
            RefreshVIPIntro(m_ShowLevel);

            //等级跨度显示
            if ( nLevel >= VipData.m_MaxShowLevel )
            {
                m_Levelnow.text = (nLevel-1).ToString();
                m_Levelnew.text = nLevel.ToString();
                m_LevelnewGold.text = nLevel.ToString();
            }
            else
            {
                m_Levelnow.text = nLevel.ToString();
                m_Levelnew.text = (nLevel + 1).ToString();
                m_LevelnewGold.text = (nLevel + 1).ToString();
            }
        }
        else
        {
            //no show 
            m_Image.spriteName = "";
            m_ProgressText.text = "";
            m_ProgressTips.text = "";
            m_LevelText.text = "";
            m_LevelSprite.gameObject.SetActive(false);
            m_Progress.transform.localScale = new Vector3(0, 1, 1);
            m_BonusText.text = "";
            m_BonusImage.spriteName = "";
            m_SentSprite.spriteName = "";
            m_LevelIntro.text = "";            
            m_Levelnow.text = "";
            m_Levelnew.text = "";
            m_LevelnewGold.text = "";
            m_BonusNum.text = "";
            m_AddImage.spriteName = "";
            m_AddSprite.spriteName = "";
            m_AddNum.text = "";
            m_BonusQuality.spriteName = "";
            m_AddQuality.spriteName = "";
        }
    }

    

    int GetMaxCostByLevel(int nLevel)
    {
        Tab_VipBook tBook = TableManager.GetVipBookByID(nLevel, 0);
        if (tBook != null)
        {
            return tBook.VipCost;
        }
        return 99999999;
    }

    int GetBonusItemByLevel(int nLevel, int nProfession)
    {
        Tab_VipBook tBook = TableManager.GetVipBookByID(nLevel, 0);
        if (tBook != null && nProfession >= 0 && nProfession < tBook.getVipItemCount() )
        {
            return tBook.GetVipItembyIndex(nProfession);
        }
        return 0;
    }

    int GetBonusAddItemByLevel(int nLevel, int nProfession)
    {
        Tab_VipBook tBook = TableManager.GetVipBookByID(nLevel, 0);
        if (tBook != null && nProfession >= 0 && nProfession < tBook.getVipAddCount())
        {
            return tBook.GetVipAddbyIndex(nProfession);
        }
        return 0;
    }

    int GetNewBonusAddItemByLevel(int nLevel, int nProfession, int index)
    {
        Tab_VipBook tBook = TableManager.GetVipBookByID(nLevel, 0);
        if (tBook != null && nProfession >= 0 && nProfession < tBook.getVipAddCount())
        {
            if (0 == index)
            {
                return tBook.GetNew1VipAddbyIndex(nProfession);
            }
            else if (1 == index)
            {
                return tBook.GetNew2VipAddbyIndex(nProfession);
            }
            else if (2 == index)
            {
                return tBook.GetNew3VipAddbyIndex(nProfession);
            }
            else if (3 == index)
            {
                return tBook.GetNew4VipAddbyIndex(nProfession);
            }
        }
        return 0;
    }

    int GetNewAddCount(int nLevel, int nProfession,int index)
    {
        Tab_VipBook tBook = TableManager.GetVipBookByID(nLevel, 0);
        if (tBook != null && nProfession >= 0 && nProfession < tBook.getVipAddCount())
        {
            if (0 == index)
            {
                return tBook.New1AddCount;
            }
            else if (1 == index)
            {
                return tBook.New2AddCount;
            }
            else if (2 == index)
            {
                return tBook.New3AddCount;
            }
            else if (3 == index)
            {
                return tBook.New4AddCount;
            }
        }
        return 0;
    }

    string GetItemNameById(int nItemId)
    {
        Tab_CommonItem tBook = TableManager.GetCommonItemByID(nItemId, 0);
        if (tBook != null)
        {
            return tBook.Name;
        }
        return "";
    }

    string GetItemIconById(int nItemId)
    {
        Tab_CommonItem tBook = TableManager.GetCommonItemByID(nItemId, 0);
        if (tBook != null)
        {
            return tBook.Icon;
        }
        return "";
    }

    string GetItemQualityById(int nItemId)
    {
        Tab_CommonItem tBook = TableManager.GetCommonItemByID(nItemId, 0);
        if (tBook != null)
        {
            int nQualiltyIndex = tBook.Quality - 1;
            if (nQualiltyIndex >= 0 && nQualiltyIndex < GlobeVar.QualityColorGrid.Length)
            {
                return GlobeVar.QualityColorGrid[nQualiltyIndex];
            }
        }
        return "";
    } 

    void SetArrowLabel(int nLevel)
    {
        m_ArrowLeftText.text = "VIP" + (nLevel - 1).ToString();
        m_ArrowRightText.text = "VIP" + (nLevel + 1).ToString();
    }

    void RefreshVIPIntro( int nLevel )
    {
        m_LevelIntro.text = "";
        Tab_VipBook tBook = TableManager.GetVipBookByID(nLevel, 0);
        m_DragPanel.SetDragAmount(0, 0, false);
        if (tBook != null && nLevel > 0)
        {
            int nCost = 0;
            int curLevel = 0;
            int nLeft = 0;
             Obj_MainPlayer obj = Singleton<ObjManager>.GetInstance().MainPlayer;
             if (obj != null)
             {
                nCost = obj.VipCost;
             }
             VipData.GetVipLevel(nCost, ref curLevel, ref nLeft); 
            if (curLevel < nLevel)
            {
                m_GiveBounsBtn.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
                m_GiveBounsBtn.transform.parent.GetComponent<UIButtonMessage>().enabled = false;
            }
            else
            {
                int nVipCommonDataAward = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_VIP_AWARD_COMMONDATA);

                if ((nVipCommonDataAward & (1 << nLevel)) > 0) {
                    m_GiveBounsBtn.gameObject.GetComponent<UIWidget>().color = new Color(0, 0, 0, 1);
                    m_GiveBounsBtn.transform.parent.GetComponent<UIButtonMessage>().enabled = false;
                }else {
                    m_GiveBounsBtn.gameObject.GetComponent<UIWidget>().color = new Color(1, 1, 1, 1);
                    m_GiveBounsBtn.transform.parent.GetComponent<UIButtonMessage>().enabled = true;
                }
            }
            
            //m_LevelIntro.text += "升级到VIP" + nLevel.ToString() + "级后，您将享有以下特权：\n";
            m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{2883}", nLevel);

            m_LevelText.text = StrDictionary.GetClientDictionaryString("#{2882}", nLevel);

            //m_LevelIntro.text += "1 每天购买体力次数最多为" + VipData.GetVipStamina(nLevel).ToString() + "次\n";
            m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{2884}", VipData.GetVipStamina(nLevel));

			// 开启科技苑第{0}个实验室#r
            int deskindex = VipData.GetDeskIndex(nLevel);
            if ( deskindex >= 0 )
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3243}", deskindex);
            }

			// 开启自动强化功能#r
            if ( nLevel >= GlobeVar.USE_AUTOFIGHT_VIPLEVEL )
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3244}");
            }

			// 每日摇钱树付费摇钱次数增加{0}次#r
            if (tBook.VipMoneyTree > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4012}", tBook.VipMoneyTree);
            }

            //m_LevelIntro.text += "4 每日各副本免费进入次数增加" + tBook.VipCopyScene.ToString() + "次\n";
            int nTotal = 0;
            for( int i = 0; i < tBook.getSceneIdCount(); ++i ) {
                nTotal += tBook.GetBuyCountbyIndex(i);
            }
            if (nTotal > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{2887}"); 
            }

			// 机械研究所：{0}次#r
            if (tBook.GetBuyCountbyIndex(0) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3139}", tBook.GetBuyCountbyIndex(0));
            }

			// 雷纳堡：{0}次#r
            if (tBook.GetBuyCountbyIndex(1) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3141}", tBook.GetBuyCountbyIndex(1));
            }

			// 冰冻地下墓地：{0}次#r
            if (tBook.GetBuyCountbyIndex(2) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3142}", tBook.GetBuyCountbyIndex(2));
            }

			// 废弃都市：{0}次#r
            if (tBook.GetBuyCountbyIndex(3) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3143}", tBook.GetBuyCountbyIndex(3));
            }

			// 黄昏要塞：{0}次#r
            if (tBook.GetBuyCountbyIndex(4) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3144}", tBook.GetBuyCountbyIndex(4));
            }

			// 每日可购买剧情副本挑战次数{0}次#r
            if( tBook.BuyStorySceneCount > 0 ) {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{11358}", tBook.BuyStorySceneCount);
            }
            //if ( tBook.VipJXZ > 0 )
            //{
            //    m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3140}", tBook.VipJXZ);
           // }

            //开启扫荡功能的副本如下——#r
            int nOpen = 0;
            for( int i = 0; i < tBook.getSceneIdCount(); ++i ) {
                nOpen += tBook.GetSweepCountbyIndex(i);
            }
            if (nOpen > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4834}"); 
            }
			// 机械研究所#r
            if (tBook.GetSweepCountbyIndex(0) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4884}"); 
            }

			// 雷纳堡#r
            if (tBook.GetSweepCountbyIndex(1) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4887}");
            }

			// 冰冻地下墓地#r
            if (tBook.GetSweepCountbyIndex(2) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4885}");
            }

			// 废弃都市#r
            if (tBook.GetSweepCountbyIndex(3) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4883}");
            }

			// 黄昏要塞#r
            if (tBook.GetSweepCountbyIndex(4) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4886}");
            }

            //各副本每日组队次数增加——#r
            if (tBook.GetBuyTeamSceneCountbyIndex(0) + tBook.GetBuyTeamSceneCountbyIndex(1) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4832}"); 
            }

			// 机械研究所：{0}次#r
            if (tBook.GetBuyTeamSceneCountbyIndex(0) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3139}", tBook.GetBuyTeamSceneCountbyIndex(0));
            }

			// 冰冻地下墓地：{0}次#r
            if (tBook.GetBuyTeamSceneCountbyIndex(1) > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{3142}", tBook.GetBuyTeamSceneCountbyIndex(1));
            }

			// 空
            if (tBook.GetBuyTeamSceneCountbyIndex(2)  > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4833}");
            }
            //您可以在江湖名人录直接挑战排名前200的玩家
            if (tBook.HiChallenge > 0)
            {
                m_LevelIntro.text += StrDictionary.GetClientDictionaryString("#{4835}");
            }

            string strText = m_LevelIntro.text;
            m_LevelIntro.text = strText.Substring(0, strText.Length - 1);

            //m_LevelIntro.text += " 清杀气" + tBook.VipPKValue.ToString();
           // m_LevelIntro.text += "6 每日免费摇奖次数增加" + tBook.VipBonusBox.ToString()+"次";

            /*Tab_CommonItem tItemBook = TableManager.GetCommonItemByID(tBook.VipItem.ToString(), 0);
            if (tItemBook != null)
            {
                m_LevelIntro.text += " 升级奖励物品" + tItemBook.Name;
            } */

            int nProfession = GameManager.gameManager.PlayerDataPool.Profession;
            int nItem = GetBonusItemByLevel(nLevel, nProfession);
            //0级不应该有物品领取，直接不显示。
            if (nItem > 0 && nLevel > 0)
            {
                m_BonusEquip.SetActive(true);
                //奖励物品提示
                //m_BonusText.text = nLevel.ToString() + "级会员可以领取";// +GetItemNameById(nItem);
                //m_BonusText.text = StrDictionary.GetClientDictionaryString("#{2881}", nLevel);

                //奖励物品图标
                m_BonusImage.spriteName = GetItemIconById(nItem);
                m_SavedItem = nItem;
                if (tBook.ItemCount > 1)
                {
                    m_BonusNum.text = tBook.ItemCount.ToString();
                }
                else
                {
                    m_BonusNum.text = "";
                }

                int nMyLv = VipData.GetVipLv();
                if ( nMyLv >= nLevel )
                {
                    m_SentSprite.spriteName = "";
                }
                else
                {
                    m_SentSprite.spriteName = "";
                }

                m_BonusQuality.spriteName = GetItemQualityById(nItem);
            }
            else
            {
                m_BonusEquip.SetActive(false);
                m_BonusText.text = "";
                m_BonusImage.spriteName = "";
                m_SentSprite.spriteName = "";
                m_BonusNum.text = "";
                m_BonusQuality.spriteName = "";                
            }

            int nAddItem = GetBonusAddItemByLevel(nLevel, nProfession);
            //0级不应该有物品领取，直接不显示。
            if (nAddItem > 0 && nLevel > 0)
            {
                m_AddItem.SetActive(true);

                //奖励物品图标
                m_AddImage.spriteName = GetItemIconById(nAddItem);
                m_SavedAdd = nAddItem;
                if (tBook.AddCount > 1)
                {
                    m_AddNum.text = tBook.AddCount.ToString();
                }
                else
                {
                    m_AddNum.text = "";
                }

                int nMyLv = VipData.GetVipLv();
                if (nMyLv >= nLevel)
                {
                    m_AddSprite.spriteName = "";
                }
                else
                {
                    m_AddSprite.spriteName = "";
                }

                m_AddQuality.spriteName = GetItemQualityById(nAddItem);
            }
            else
            {
                m_AddItem.SetActive(false);
                m_AddImage.spriteName = "";
                m_AddSprite.spriteName = "";
                m_AddNum.text = "";
                m_AddQuality.spriteName = "";
            }

            //新增的四个物品
            for (int i = 0; i < m_NewAddItem.Length; i++)
            {
                int nNewAddItem = GetNewBonusAddItemByLevel(nLevel, nProfession, i);
                //0级不应该有物品领取，直接不显示。
                if (nNewAddItem > 0 && nLevel > 0)
                {
                    m_NewAddItem[i].SetActive(true);

                    //奖励物品图标
                    m_NewAddImage[i].spriteName = GetItemIconById(nNewAddItem);
                    m_NewSavedAdd[i] = nNewAddItem;
                    if (GetNewAddCount(nLevel, nProfession, i) > 1)
                    {
                        m_NewAddNum[i].text = GetNewAddCount(nLevel, nProfession, i).ToString();
                    }
                    else
                    {
                        m_NewAddNum[i].text = "";
                    }

                    int nMyLv = VipData.GetVipLv();
                    if (nMyLv >= nLevel)
                    {
                        m_SendSprite[i].spriteName = "";
                    }
                    else
                    {
                        m_SendSprite[i].spriteName = "";
                    }

                    m_NewAddQuality[i].spriteName = GetItemQualityById(nNewAddItem);
                }
                else
                {
                    m_NewAddItem[i].SetActive(false);
                    m_NewAddImage[i].spriteName = "";
                    m_SendSprite[i].spriteName = "";
                    m_NewAddNum[i].text = "";
                    m_NewAddQuality[i].spriteName = "";
                }
            }
            //新增的四个物品
        }

		NGUITools.SetActive (m_preVipButton, m_ShowLevel > 1);
		NGUITools.SetActive (m_nextVipButton, m_ShowLevel < VipData.m_MaxShowLevel);
        SetArrowLabel(m_ShowLevel);
        
    }

//    void OnClickedList(TabButton value)
//    {
//        for (int n = 1; n <= VipData.m_MaxShowLevel; ++n)
//        {
//            if (value.name.EndsWith(System.String.Format("{0:D2}", n)))
//            {
//                RefreshVIPIntro(n);
//                return;
//            }
//        }
//    }

    void OnClickCharge()
    {
        RechargeData.PayUI();
    }

	//修改的部分：
	//滑动列表不需要，所以和m_Grid，m_Tab这两个变量相关的代码都注释掉
	void OnShowPreVipInfo()
	{
		m_ShowLevel -= 1;

		if (m_ShowLevel < 1) {
				m_ShowLevel = 1;
		}
		RefreshVIPIntro (m_ShowLevel);
	}

	void OnShowNextVipInfo()
	{
		m_ShowLevel += 1;
		
		if (m_ShowLevel > VipData.m_MaxShowLevel) {
			m_ShowLevel = VipData.m_MaxShowLevel;
		}
		RefreshVIPIntro (m_ShowLevel);
	}

    void GetShowLevelVipAward()
    {
        CG_GETVIPREWARD packet = (CG_GETVIPREWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GETVIPREWARD);
        packet.NLevel = m_ShowLevel;
        packet.SendPacket();
    }
}
