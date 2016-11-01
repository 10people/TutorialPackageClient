using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.Item;
using GCGame.Table;
using Games.GlobeDefine;
using GCGame;
using Games.UserCommonData;

public class GemLogic : MonoBehaviour
{

    public enum CONSTVALUE
    {
        GEM_SLOT_NUM = 4,
        GEM_ITEM_NUM = 8,
    }

    public GameObject m_RuneAbsorb;
    //public GameObject m_Page_Help;      //帮助
    public GameObject m_Page_UnEquip;   //卸载
    public GameObject m_Page_Equip;     //镶嵌

    public UISprite[] m_GemSlotSprite;
    public UISprite[] m_GemSlotChooseSprite;
    public UISprite[] m_GemItemQualitySprite;
    public UISprite[] m_GemRemindPoint;
    public GameObject[] m_GemStrengthenButton;

    public UILabel[] m_SelectedGemName;
    public UILabel[] m_SelectedGemLevel;
    public UILabel[] m_SelectedGemAttr;

    public UISprite m_SelectedEquipChoose;
    public UISprite m_SelectedEquipIcon;
    public UISprite m_SelectedEquipQuality;

    public ItemSlotLogic m_ChooseGem;
    public UILabel m_ChooseGemNameLabel;
    public UILabel m_ChooseGemAttrLabel;

    public UILabel m_EquipGemNameLabel;
    public UILabel m_EquipGemAttrLable;
    public UILabel m_EquipGemLvLabel;
    public UILabel m_EquipGemCoinNum;
    public UISprite m_EquipProGress;

    private int[] m_GemSlotId = new int[(int)CONSTVALUE.GEM_SLOT_NUM] { -1, -1, -1, -1 };     //当前四个槽位宝石ID
    private int m_CurEquipSlot = -1;                         //当前选择装备部位
    private int m_CurGemSlot = -1;                           //当前选择宝石位
    private GameItem m_CurGemItem = null;                    //当前选择宝石
    private List<GameItem> m_GemItemList;                    //背包里面的宝石列表
    private int m_CurGemItemPage = 1;                        //背包宝石列表显示分页数
    //private ItemSlotLogic.OnClick[] deleOnClickGems = new ItemSlotLogic.OnClick[8];

    private float m_Delay_Time = 0f;
    private int m_Delay_CurEquipSlot = 0;
    private int m_Delay_CurGemSlot = 0;
    private ulong m_Delay_GemGuid = 0;

    private static GemLogic m_Instance = null;
    public static GemLogic Instance()
    {
        return m_Instance;
    }

    private int m_NewPlayerGuide_Step = -1;
    public GameObject m_SlotHole_1;
    public GameObject m_BtnMount;

    public UILabel m_CoinNum;
    public void UpdateMoneyInfo()
    {
        m_CoinNum.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
    }

    public GameObject m_GemListGrid;
    public GameObject m_GemListObj;
    public GameObject[] m_GemSlotMark;
    public GameObject m_GemHelpInfo;
    public GameObject m_GemPreView;

    void OnDisable()
    {
        m_Instance = null;
        m_NewPlayerGuide_Step = -1;
        //关闭界面时 如果有延迟发包 则直接发包
        if (m_Delay_Time > 0)
        {
            CG_PUT_GEM gemPacket = (CG_PUT_GEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PUT_GEM);
            gemPacket.SetEquipslot(m_Delay_CurEquipSlot);
            gemPacket.SetIndex(m_Delay_CurGemSlot);
            gemPacket.SetItemguid(m_Delay_GemGuid);
            gemPacket.SendPacket();

            m_Delay_CurEquipSlot = 0;
            m_Delay_CurGemSlot = 0;
            m_Delay_GemGuid = 0;
        }

        //关闭界面时 如果有UI特效播放 则关闭特效
        if (BackCamerControll.Instance())
        {
            BackCamerControll.Instance().StopSceneEffect(133, true);
        }

        CancelInvoke("SlowUpdate");
        if (m_RuneAbsorb != null) {
            m_RuneAbsorb.SetActive(false);
        }
        if (EquipStrengthenLogic.Instance() != null)
        {
            EquipStrengthenLogic.Instance().ClearGemsInEquips();
        }
        if (EquipStrengthenLogic.Instance() != null)
        {
            EquipStrengthenLogic.Instance().ReSelectEquip();
        }
    }
    // Use this for initialization

    void SlowUpdate()
    {
        if (m_Delay_Time > 0)
        {
            m_Delay_Time -= 0.3f;
            if (m_Delay_Time <= 0)
            {
                CG_PUT_GEM gemPacket = (CG_PUT_GEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PUT_GEM);
                gemPacket.SetEquipslot(m_Delay_CurEquipSlot);
                gemPacket.SetIndex(m_Delay_CurGemSlot);
                gemPacket.SetItemguid(m_Delay_GemGuid);
                gemPacket.SendPacket();

                m_Delay_CurEquipSlot = 0;
                m_Delay_CurGemSlot = 0;
                m_Delay_GemGuid = 0;
            }
        }

    }



    void OnEnable()
    {
        m_Instance = this;
        /*deleOnClickGems[0] = OnClickGemItem1;
        deleOnClickGems[1] = OnClickGemItem2;
        deleOnClickGems[2] = OnClickGemItem3;
        deleOnClickGems[3] = OnClickGemItem4;
        deleOnClickGems[4] = OnClickGemItem5;
        deleOnClickGems[5] = OnClickGemItem6;
        deleOnClickGems[6] = OnClickGemItem7;
        deleOnClickGems[7] = OnClickGemItem8;*/
        InvokeRepeating("SlowUpdate", 0f, 0.3f);
        InitEmpty();
        updateGemRemindPoint();
        if (EquipStrengthenLogic.Instance() != null)
        {
            if (EquipStrengthenLogic.Instance().NewPlayerGuideFlag_Step == 15)
            {
                NewPlayerGuide(0);
                EquipStrengthenLogic.Instance().NewPlayerGuideFlag_Step = -1;
            }
        }
    }

    public void updateGemRemindPoint()
    {
        for (int i = 1; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)//跳过第一个先
        {
            if (m_GemRemindPoint[i] == null)
            {
                return;
            }
            if (null == PlayerFrameLogic.Instance())
            {
                return;
            }
            if (PlayerFrameLogic.Instance().GetGemHoleCanOpenCount(i) > 0)
            {
                m_GemRemindPoint[i].gameObject.SetActive(true);
            }
            else
            {
                m_GemRemindPoint[i].gameObject.SetActive(false);
            }
        }
    }

    void InitEmpty()
    {
        m_CurEquipSlot = -1;
        m_CurGemSlot = -1;
        m_CurGemItem = null;
        //m_Page_Help.gameObject.SetActive(true);
        m_Page_UnEquip.gameObject.SetActive(false);
        m_Page_Equip.gameObject.SetActive(false);
        m_GemHelpInfo.SetActive(false);
        for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)
        {
            m_GemSlotSprite[i].gameObject.SetActive(false);
        }
        for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)
        {
            m_GemSlotChooseSprite[i].gameObject.SetActive(false);
        }        
        for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)
        {
            m_GemItemQualitySprite[i].gameObject.SetActive(false);
        }
        for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)
        {
            m_GemSlotMark[i].gameObject.SetActive(false);
        }

        UpdateMoneyInfo();
    }

    /// <summary>
    /// 点击某个装备部位
    /// </summary>
    /// <param name="equipslot"></param>
    public void OnClickEquiSlot(int equipslot)
    {
        //m_Page_Help.gameObject.SetActive(true);
        m_Page_UnEquip.gameObject.SetActive(false);
        m_Page_Equip.gameObject.SetActive(false);
        m_GemHelpInfo.SetActive(false);
        m_CurEquipSlot = equipslot;
        m_CurGemSlot = -1;
        UpdateGemSlot();
    }

    void CloseEquip()
    {
        m_GemListObj.SetActive(false);
        m_GemPreView.SetActive(false);
        if (RoleViewLogic.Instance() != null)
        {
            RoleViewLogic.Instance().TempShowFakeObj();
        }
    }

    public void UpdateSelectedEquip(string choose, string icon, string quality,int index)
    {
        m_SelectedEquipChoose.gameObject.SetActive(true);
        m_SelectedEquipIcon.gameObject.SetActive(true);
        m_SelectedEquipQuality.gameObject.SetActive(EquipStrengthenLogic.Instance().m_Equip_QualityFrame[index].gameObject.activeSelf);

        m_SelectedEquipChoose.spriteName = choose;
        m_SelectedEquipIcon.spriteName = icon;
        m_SelectedEquipQuality.spriteName = quality;
    }

    string GetGemLevelString(int nValue)
    {
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        sb.Append("Lv.");
        sb.Append(nValue);
        return sb.ToString();
    }

    int GetSlotLockedLevel(int slot)
    {
        Tab_GemOpenLimit line = TableManager.GetGemOpenLimitByID(slot + 1, 0);
        if (line != null)
        {
            return line.OpenLevel;
        }
        return 0;
    }
    bool IsSlotLocked(int slot)
    {
        Tab_GemOpenLimit line = TableManager.GetGemOpenLimitByID(slot + 1, 0);
        if (line == null)
        {
            return true;
        }
        if (Singleton<ObjManager>.Instance.MainPlayer != null )
        {
            if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level < line.OpenLevel)
            {
                return true;
            }
        }
        return false;
    }
    /// <summary>
    /// 更新宝石槽位
    /// </summary>
    public void UpdateGemSlot()
    {
        int GemNum = 0;
        GemData gemdata = GameManager.gameManager.PlayerDataPool.GemData;
        for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)
        {
            m_GemSlotId[i] = gemdata.GetGemId(m_CurEquipSlot, i);
            if (m_GemSlotId[i] >= 0)
            {
                GemNum++;
            }
        }
        m_EquipProGress.fillAmount = (float)GemNum / (int)CONSTVALUE.GEM_SLOT_NUM;

        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
         List<GameItem> GemItemList = ItemTool.ItemFilter(BackPack, (int)ItemClass.STRENGTHEN, (int)StrengthenSubClass.GEM);

        for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)
        {
            m_GemStrengthenButton[i].SetActive(false);
            if (m_GemSlotId[i] >= 0)
            {
                Tab_CommonItem line = TableManager.GetCommonItemByID(m_GemSlotId[i], 0);
                if (line != null)
                {
                    m_GemSlotSprite[i].gameObject.SetActive(true);
                    m_GemSlotSprite[i].spriteName = line.Icon;
                    m_GemItemQualitySprite[i].gameObject.SetActive(true);
                    m_GemItemQualitySprite[i].spriteName = GlobeVar.QualityColorGrid[line.Quality - 1];
                    m_SelectedGemName[i].text = line.Name.ToString();
                    m_SelectedGemLevel[i].text = GetGemLevelString(line.MinLevelRequire);
                    m_SelectedGemAttr[i].text = Games.Item.ItemTool.GetGemAttr(m_GemSlotId[i]);
                }
                int num = 0;
                for(int j = 0;j<GemItemList.Count;j++)
                {
                    if (m_GemSlotId[i] == GemItemList[j].DataID)
                        num += GemItemList[j].StackCount;
                }
                if (num >= 2)
                {
                    m_GemStrengthenButton[i].SetActive(true);
                }
            }
            else if (IsSlotLocked(i))
            {
                m_GemSlotSprite[i].gameObject.SetActive(true);
                m_GemSlotSprite[i].spriteName = "jiesuo";
                m_GemItemQualitySprite[i].gameObject.SetActive(false);
                m_SelectedGemName[i].text = StrDictionary.GetClientDictionaryString("#{10015}", GetSlotLockedLevel(i)); ;
                m_SelectedGemLevel[i].text = "";
                m_SelectedGemAttr[i].text = "";
            }
            else
            {
                m_GemSlotSprite[i].gameObject.SetActive(true);
                m_GemSlotSprite[i].spriteName = "jiahao";
                m_GemItemQualitySprite[i].gameObject.SetActive(false);
                m_SelectedGemName[i].text = StrDictionary.GetClientDictionaryString("#{10016}");
                m_SelectedGemLevel[i].text = "";
                m_SelectedGemAttr[i].text = "";
            }
        }
        ClearGemSlotChoose();
        ClearGemItemChoose();
        ClearGemSlotMark();
        if (m_CurGemSlot >= 0)
        {
            ClickGemSlot(m_CurGemSlot);
        }
    }
    public void PutGemOK()
    {
      if (m_RuneAbsorb != null) {
        m_RuneAbsorb.SetActive(true);
      }
    }
    void ClickGemSlot(int slot)
    {
        ClearGemSlotMark();
        if (m_CurEquipSlot < 0 || m_CurEquipSlot >= (int)EquipPackSlot.Slot_NUM)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2108}");
            return;
        }
        Tab_GemOpenLimit line = TableManager.GetGemOpenLimitByID(slot + 1, 0);
        if (line == null)
        {
            return;
        }
        //自身等级小于开放等级
        if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level < line.OpenLevel)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2165}", line.OpenLevel);
            return;
        }
        m_CurGemSlot = slot;
        //m_GemSlotMark[m_CurGemSlot].gameObject.SetActive(true);

        if (m_GemSlotId[m_CurGemSlot] >= 0)
        {
            ShowUnEquipPage();
        }
        else
        {
            ShowEquipPage();
        }
        ClearGemSlotChoose();
        ClearGemItemChoose();
        m_GemSlotChooseSprite[slot].gameObject.SetActive(true);
        if (slot == 1)
        {
            GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag((int)USER_COMMONFLAG.CF_GEMHOLE_OPENFLAG1, true);
        }
        else if (slot == 2)
        {
            GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag((int)USER_COMMONFLAG.CF_GEMHOLE_OPENFLAG2, true);
        }
        else if (slot == 3)
        {
            GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag((int)USER_COMMONFLAG.CF_GEMHOLE_OPENFLAG3, true);
        }
    }

    public void OnClickGemSlot1()
    {
        if (m_NewPlayerGuide_Step == 0)
        {
            NewPlayerGuide(1);
        }
        ClickGemSlot(0);
    }

    public void OnClickGemSlot2()
    {
        ClickGemSlot(1);
    }

    public void OnClickGemSlot3()
    {
        ClickGemSlot(2);
    }

    public void OnClickGemSlot4()
    {
        ClickGemSlot(3);
    }

    void ClearGemSlotChoose()
    {
        for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)
        {
            m_GemSlotChooseSprite[i].gameObject.SetActive(false);
        }
    }

    void ClearGemSlotMark()
    {
        for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)
        {
            m_GemSlotMark[i].gameObject.SetActive(false);
        }
    }

    void ShowUnEquipPage()
    {
        //m_Page_Help.gameObject.SetActive(false);
        m_Page_Equip.gameObject.SetActive(false);
        CloseEquip();
        m_Page_UnEquip.gameObject.SetActive(true);
        m_GemHelpInfo.SetActive(false);
        if (m_CurGemSlot >= 0 && m_CurGemSlot < (int)CONSTVALUE.GEM_SLOT_NUM)
        {
            int gemId = m_GemSlotId[m_CurGemSlot];
            if (gemId >= 0)
            {
                Tab_CommonItem line = TableManager.GetCommonItemByID(gemId, 0);
                if (line != null)
                {
                    m_ChooseGem.InitInfo(ItemSlotLogic.SLOT_TYPE.TYPE_ITEM, gemId);
                    m_ChooseGemNameLabel.text = line.Name;
                    m_ChooseGemAttrLabel.text = ItemTool.GetGemAttr(gemId);
                }
            }
        }
    }

    void ShowEquipPage()
    {
        //m_Page_Help.gameObject.SetActive(false);
        m_Page_Equip.gameObject.SetActive(true);
        m_GemPreView.SetActive(true);
        m_Page_UnEquip.gameObject.SetActive(false);
        m_GemHelpInfo.SetActive(false);
        UpdateGemItemList();

        m_GemListObj.SetActive(true);
        if (RoleViewLogic.Instance() != null)
        {
            RoleViewLogic.Instance().TempHideFakeObj();
        }
    }

    public void ClickGemInList(GameObject obj)
    {
        if (m_NewPlayerGuide_Step == 1)
        {
            NewPlayerGuide(2);
        }
        if (m_NewPlayerGuide_Step == 4)
        {
            NewPlayerGuide(5);
        }
        int ItemIndex = System.Convert.ToInt32(obj.name) - 1000;
        if (ItemIndex >= 0 && ItemIndex < m_GemItemList.Count)
        {
            ClearGemItemChoose();
            m_CurGemItem = m_GemItemList[ItemIndex];

            Transform transform = obj.transform.FindChild("ItemSlot");
            if (transform != null)
            {
                ItemSlotLogic tempIS = transform.gameObject.GetComponent<ItemSlotLogic>();
                if (tempIS != null)
                {
                    tempIS.ItemSlotChoose();
                }
            }
            ShowChooseGemInfo(m_CurGemItem);
        }
    }
    /// <summary>
    /// 更新宝石物品
    /// </summary>
    public void UpdateGemItemList()
    {
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        m_GemItemList = ItemTool.ItemFilter(BackPack, (int)ItemClass.STRENGTHEN, (int)StrengthenSubClass.GEM);
        m_GemItemList = GemFilter(m_GemItemList);

        for (int nIndex = 0; nIndex < GameItemContainer.MAXSIZE_BACKPACK; ++nIndex)
        {
            Transform ItemTrans = m_GemListGrid.transform.FindChild((nIndex + 1000).ToString());
            if (ItemTrans != null)
            {
                if (nIndex < m_GemItemList.Count)
                {
                    ItemTrans.gameObject.SetActive(true);
                    Transform child = ItemTrans.FindChild("ItemSlot");
                    if (child != null)
                    {
                        ItemSlotLogic tempIS = child.gameObject.GetComponent<ItemSlotLogic>();
                        if (null != tempIS)
                        {
                            tempIS.InitInfo(ItemSlotLogic.SLOT_TYPE.TYPE_ITEM,
                                m_GemItemList[nIndex].DataID,
                                null,
                                m_GemItemList[nIndex].StackCount.ToString(),
                                true);
                        }
                    }                    
                }
                else
                {
                    ItemTrans.gameObject.SetActive(false);                        
                }
            }
        }      
        ClearGemItemChoose();
    }

    List<GameItem> GemFilter(List<GameItem> gemList)
    {
        List<GameItem> resultList = new List<GameItem>();
        for (int n = 0; n < gemList.Count; ++n)
        {
            Tab_GemAttr line = TableManager.GetGemAttrByID(gemList[n].DataID, 0);
            if (line != null)
            {
                //部位是否符合
                if (ItemTool.GetEquipSlotType(m_CurEquipSlot) != line.BaseClass)
                {
                    continue;
                }
                //是否已有同类宝石
                for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++)
                {
                    if (m_GemSlotId[i] >= 0)
                    {
                        Tab_GemAttr lineOther = TableManager.GetGemAttrByID(m_GemSlotId[i], 0);
                        if (lineOther == null)
                        {
                            continue;
                        }
                        if (lineOther.AttrClass == line.AttrClass)
                        {
                            continue;
                        }
                    }
                }
                //添加
                resultList.Add(gemList[n]);
            }
        }
        //foreach (GameItem item in gemList)
        //{
        //    Tab_GemAttr line = TableManager.GetGemAttrByID(item.DataID.ToString(), 0);
        //    if (line != null)
        //    {
        //        //部位是否符合
        //        if (ItemTool.GetEquipSlotType(m_CurEquipSlot) != line.BaseClass)
        //        {
        //            continue;
        //        }
        //        //是否已有同类宝石
        //        for (int i = 0; i < (int)CONSTVALUE.GEM_SLOT_NUM; i++ )
        //        {
        //            if (m_GemSlotId[i] >= 0)
        //            {
        //                Tab_GemAttr lineOther = TableManager.GetGemAttrByID(m_GemSlotId[i].ToString(), 0);
        //                if (lineOther == null)
        //                {
        //                    continue;
        //                }
        //                if (lineOther.AttrClass == line.AttrClass)
        //                {
        //                    continue;
        //                }
        //            }
        //        }
        //        //添加
        //        resultList.Add(item);
        //    }
        //}
        return resultList;
    }

    /*
    public void OnClickPrePage()
    {
        if (m_CurGemItemPage > 1)
        {
            m_CurGemItemPage--;
        }
        else
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2105}");
        }
        UpdateGemItemList();
        m_CurGemItem = null;
    }

    public void OnClickNextPage()
    {
        int TotalPage = (int)(m_GemItemList.Count / (int)CONSTVALUE.GEM_ITEM_NUM) + 1;
        if (m_CurGemItemPage < TotalPage)
        {
            m_CurGemItemPage++;
        }
        else
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2105}");
        }
        UpdateGemItemList();
        m_CurGemItem = null;
    }*/

    public void OnClickUnEquipGem()
    {
        if (m_CurEquipSlot < 0 || m_CurEquipSlot >= (int)EquipPackSlot.Slot_NUM)
        {
            return;
        }
        if (m_CurGemSlot < 0 || m_CurGemSlot >= (int)CONSTVALUE.GEM_SLOT_NUM)
        {
            return;
        }
        if (m_GemSlotId[m_CurGemSlot] < 0)
        {
            return;
        }
        CG_TAKE_GEM gemPacket = (CG_TAKE_GEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_TAKE_GEM);
        gemPacket.SetEquipslot(m_CurEquipSlot);
        gemPacket.SetIndex(m_CurGemSlot);
        gemPacket.SendPacket();
    }

    public void OnClickEquipGem()
    {
        if (m_NewPlayerGuide_Step == 2)
        {
            NewPlayerGuide(3);
        }
        if (m_NewPlayerGuide_Step == 5)
        {
            NewPlayerGuide(3);
        }

        if (m_Delay_Time > 0)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2215}");
            return;
        }

        if (m_CurEquipSlot < 0 || m_CurEquipSlot >= (int)EquipPackSlot.Slot_NUM)
        {
            return;
        }
        if (m_CurGemSlot < 0 || m_CurGemSlot >= (int)CONSTVALUE.GEM_SLOT_NUM)
        {
            return;
        }
        if (m_CurGemItem == null)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2101}");
            return;
        }
        if (m_CurGemItem.IsValid() == false)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2101}");
            return;
        }
        Tab_GemMount line = TableManager.GetGemMountByID((m_CurGemSlot + 1), 0);
        if (line != null)
        {
            int CoinNum = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
            if (CoinNum < line.ConsumeNum)
            {
                //金币不足
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1830}");
                return;
            }
        }

        //是否满足宝石孔位级别需求
        if (Singleton<ObjManager>.GetInstance().MainPlayer.CheckLevelForGemSlot(m_CurGemSlot) == false)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2104}");
            return;
        }

        //同一部位是否有相同属性宝石
        if (Singleton<ObjManager>.GetInstance().MainPlayer.IsSameGemForEquipSlot(m_CurGemItem.DataID, m_CurEquipSlot))
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2103}");
            return;
        }

        if (null != GameManager.gameManager)
        {
            GameManager.gameManager.SoundManager.PlaySoundEffect(28);
        }

        //播放特效 延迟发包
        if (BackCamerControll.Instance() != null)
        {
            BackCamerControll.Instance().PlaySceneEffect(133);
        }
        m_Delay_Time = 0.1f;
        m_Delay_CurEquipSlot = m_CurEquipSlot;
        m_Delay_CurGemSlot = m_CurGemSlot;
        m_Delay_GemGuid = m_CurGemItem.Guid;

        //清空选择的宝石
        ClearGemItemChoose();
      }

    void ShowChooseGemInfo(GameItem item)
    {
        if (item.IsValid())
        {
            m_EquipGemNameLabel.text = item.GetName();
            m_EquipGemAttrLable.text = ItemTool.GetGemAttr(item.DataID);            
            m_EquipGemLvLabel.text = GetGemLevelString(item.GetMinLevelRequire());
            Tab_GemMount line = TableManager.GetGemMountByID((m_CurGemSlot + 1), 0);
            if (line != null)
            {
                //m_EquipGemCoinNum.text = string.Format("消耗金币:{0}", line.ConsumeNum);
                m_EquipGemCoinNum.text = StrDictionary.GetClientDictionaryString("#{2836}", line.ConsumeNum);
            }
        }
    }

    void ClearChooseGemInfo()
    {
        m_EquipGemNameLabel.text = "";
        m_EquipGemAttrLable.text = "";
        m_EquipGemLvLabel.text = "";
        m_EquipGemCoinNum.text = "";
    }

    /*void OnClickGemItem1(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        if (m_NewPlayerGuide_Step == 1)
        {
            NewPlayerGuide(2);
        }
        if (m_NewPlayerGuide_Step == 4)
        {
            NewPlayerGuide(5);
        }
        int ItemIndex = (m_CurGemItemPage - 1) * (int)CONSTVALUE.GEM_ITEM_NUM + 0;
        if (ItemIndex >= 0 && ItemIndex < m_GemItemList.Count)
        {
            ClearGemItemChoose();
            m_CurGemItem = m_GemItemList[ItemIndex];
            m_GemItem[0].ItemSlotChoose();
            ShowChooseGemInfo(m_CurGemItem);
        }
    }

    void OnClickGemItem2(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        int ItemIndex = (m_CurGemItemPage - 1) * (int)CONSTVALUE.GEM_ITEM_NUM + 1;
        if (ItemIndex >= 0 && ItemIndex < m_GemItemList.Count)
        {
            ClearGemItemChoose();
            m_CurGemItem = m_GemItemList[ItemIndex];
            m_GemItem[1].ItemSlotChoose();
            ShowChooseGemInfo(m_CurGemItem);
        }
    }

    void OnClickGemItem3(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        int ItemIndex = (m_CurGemItemPage - 1) * (int)CONSTVALUE.GEM_ITEM_NUM + 2;
        if (ItemIndex >= 0 && ItemIndex < m_GemItemList.Count)
        {
            ClearGemItemChoose();
            m_CurGemItem = m_GemItemList[ItemIndex];
            m_GemItem[2].ItemSlotChoose();
            ShowChooseGemInfo(m_CurGemItem);
        }
    }

    void OnClickGemItem4(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        int ItemIndex = (m_CurGemItemPage - 1) * (int)CONSTVALUE.GEM_ITEM_NUM + 3;
        if (ItemIndex >= 0 && ItemIndex < m_GemItemList.Count)
        {
            ClearGemItemChoose();
            m_CurGemItem = m_GemItemList[ItemIndex];
            m_GemItem[3].ItemSlotChoose();
            ShowChooseGemInfo(m_CurGemItem);
        }
    }

    void OnClickGemItem5(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        int ItemIndex = (m_CurGemItemPage - 1) * (int)CONSTVALUE.GEM_ITEM_NUM + 4;
        if (ItemIndex >= 0 && ItemIndex < m_GemItemList.Count)
        {
            ClearGemItemChoose();
            m_CurGemItem = m_GemItemList[ItemIndex];
            m_GemItem[4].ItemSlotChoose();
            ShowChooseGemInfo(m_CurGemItem);
        }
    }

    void OnClickGemItem6(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        int ItemIndex = (m_CurGemItemPage - 1) * (int)CONSTVALUE.GEM_ITEM_NUM + 5;
        if (ItemIndex >= 0 && ItemIndex < m_GemItemList.Count)
        {
            ClearGemItemChoose();
            m_CurGemItem = m_GemItemList[ItemIndex];
            m_GemItem[5].ItemSlotChoose();
            ShowChooseGemInfo(m_CurGemItem);
        }
    }

    void OnClickGemItem7(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        int ItemIndex = (m_CurGemItemPage - 1) * (int)CONSTVALUE.GEM_ITEM_NUM + 6;
        if (ItemIndex >= 0 && ItemIndex < m_GemItemList.Count)
        {
            ClearGemItemChoose();
            m_CurGemItem = m_GemItemList[ItemIndex];
            m_GemItem[6].ItemSlotChoose();
            ShowChooseGemInfo(m_CurGemItem);
        }
    }

    void OnClickGemItem8(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        int ItemIndex = (m_CurGemItemPage - 1) * (int)CONSTVALUE.GEM_ITEM_NUM + 7;
        if (ItemIndex >= 0 && ItemIndex < m_GemItemList.Count)
        {
            ClearGemItemChoose();
            m_CurGemItem = m_GemItemList[ItemIndex];
            m_GemItem[7].ItemSlotChoose();
            ShowChooseGemInfo(m_CurGemItem);
        }
    }
    */
    void ClearGemItemChoose()
    {
        /*for (int i = 0; i < (int)CONSTVALUE.GEM_ITEM_NUM; i++)
        {
            m_GemItem[i].ItemSlotChooseCancel();
        }*/
        for (int nIndex = 0; nIndex < GameItemContainer.MAXSIZE_BACKPACK; ++nIndex)
        {
            Transform ItemTrans = m_GemListGrid.transform.FindChild((nIndex + 1000).ToString());
            if (ItemTrans != null && ItemTrans.gameObject && ItemTrans.gameObject.activeInHierarchy)
            {
                Transform child = ItemTrans.FindChild("ItemSlot");
                if (child != null)
                {
                    ItemSlotLogic tempIS = child.gameObject.GetComponent<ItemSlotLogic>();
                    if (null != tempIS)
                    {
                        tempIS.ItemSlotChooseCancel();
                    }
                }
            }
        }
        ClearChooseGemInfo();
        m_CurGemItem = null;
    }

    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        switch (nIndex)
        {
            case 0:
                NewPlayerGuidLogic.OpenWindow(m_SlotHole_1, 100, 100, Utils.GetDicByID(10414), "bottom", 0, true, true);
                break;
            case 1:
                Transform ItemTrans = m_GemListGrid.transform.FindChild("1000");
                if (ItemTrans != null && ItemTrans.gameObject != null)
                {
                    NewPlayerGuidLogic.OpenWindow(ItemTrans.gameObject, 100, 100, Utils.GetDicByID(10415), "right", 0, true, true);
                }
                break;
            case 2:
                NewPlayerGuidLogic.OpenWindow(m_BtnMount, 180, 70, "", "bottom", 0, true, true);
                break;
            case 3:
                if (RoleViewLogic.Instance())
                {
                    RoleViewLogic.Instance().NewPlayerGuide(3);
                }
                m_NewPlayerGuide_Step = -1;
                break;
            case 4:
                RoleViewLogic.Instance().OnClick_Equip_WEAPON();
                OnClickGemSlot1();
                Transform ItemTrans1 = m_GemListGrid.transform.FindChild("1000");
                if (ItemTrans1 != null && ItemTrans1.gameObject != null)
                {
                    NewPlayerGuidLogic.OpenWindow(ItemTrans1.gameObject, 100, 100, "", "bottom", 0, true, true);
                }
                break;
            case 5:
                NewPlayerGuidLogic.OpenWindow(m_BtnMount, 180, 70, "", "bottom", 0, true, true);
                break;
        }
    }

    public void OnOpenHelpTips()
    {
        NGUITools.SetActive(m_GemHelpInfo, true);
    }
    public void OnCloseHelpTips()
    {
        NGUITools.SetActive(m_GemHelpInfo, false);
    }

    public void OnClickGemStrengthen1()
    {
        ClickGemStrengthen(0);
    }

    public void OnClickGemStrengthen2()
    {
        ClickGemStrengthen(1);
    }

    public void OnClickGemStrengthen3()
    {
        ClickGemStrengthen(2);
    }

    public void OnClickGemStrengthen4()
    {
        ClickGemStrengthen(3);
    }

    public void ClickGemStrengthen(int slot)
    {
        m_CurGemSlot = slot;
        CG_EQUIPBACK_GEM_COMBINE gemPacket = (CG_EQUIPBACK_GEM_COMBINE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_EQUIPBACK_GEM_COMBINE);
        gemPacket.SetEquipSlotIndex(m_CurEquipSlot);
        gemPacket.SetGemIndex(m_CurGemSlot);
        gemPacket.SetStuffguid(0);
        gemPacket.SendPacket();
    }

}
