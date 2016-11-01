//********************************************************************
// 文件名: EquipStrengthenLogic.cs
// 描述: 装备强化界面UI逻辑
// 作者: TangYi
// 创建时间: 2013-12-25
//
// 修改历史:
//********************************************************************
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.Item;
using Games.GlobeDefine;
using GCGame.Table;
using Module.Log;
using GCGame;

public class EquipStrengthenLogic : UIControllerBase<EquipStrengthenLogic>
{
    public UISprite[] m_GemsInEquips;
    public GameObject m_GemView;//宝石视图
    public GameObject IntensifyEffectGO;
    public GameObject StarEffectGO;
    public TabController m_TabController;         //分页控制器

    public GameObject m_Content_Enchance;
    public GameObject m_Content_Enchance_Grid;
    public GameObject m_Content_Star;


    public GameObject m_LeftView;

    private const int EquipNum = 10;
    public UISprite[] m_EquipBGSprite;
    public UISprite[] m_Equip_Sprite;
    public UISprite[] m_Equip_Choose;
    public UISprite[] m_Equip_QualityFrame;
    public UILabel[] m_Equip_Lable;
    public UILabel m_Equip_Lable_Buttom;

    public ItemSlotLogic m_Choose_Equip;

    public UILabel m_CurMoney_Label;                                //当前拥有金币数量
    public UILabel m_CurBindYuanBao_Label;                      //当前拥有的元宝数量

    public UISprite[] m_Star_StarLevelSprite;                       //打星 选中装备星级图标
    public TweenAlpha[] m_Star_StarLevelTween;                      //打星 选中装备星级图标tween
    public UILabel m_Star_Choose_Name;                              //打星 选中装备名字
    public UILabel m_Star_Choose_Level;                             //打星 选中装备等级需求
    public EquipStrengthenAttrStar m_Star_Choose_Attr;              //打星 选中装备属性
    public ItemSlotLogic m_Star_Choose_Slot;                        //打星 选中装备框
   // public UISprite m_Star_Choose_StarQuality;                      //打星 选中装备星级品阶
    public UILabel m_Star_Choose_StarLevel;                         //打星 选中装备星级等级
    public UISprite m_Star_Material_Sprite;                         //打星 材料图标
    public UILabel m_Star_Material_Label;                           //打星 材料数量
    public UISprite m_Star_Material_QualitySprite;                  //打星 材料品质框
    public UILabel m_Star_NeedCoin_Label;                           //打星 需要消耗金币
    public UILabel m_Star_StarLevelMaxNotice;                       //打星 星级已满提示
    public GameObject m_Star_ConsumInfo;                            //打星 消耗信息 星级已满时隐藏
    public GameObject m_Star_NextLevelInfo;                         //打星 下一级信息 星级已满时隐藏
    public UILabel m_Star_SuccessRate_Label;                        //打星 成功率
    public UILabel m_Star_CurMaterial_Label;                        //打星 当前拥有材料数量
    public UISprite[] m_Star_Mode_Choose_Sprite;                    //打星 模式选中图标
    public UILabel m_Star_Need_Times;                               //打星 剩余必定成功次数
    public GameObject m_Star_Confirm;
    public UILabel m_Star_Confirm_Title;
    public UILabel m_Star_Confirm_Desc;
    public ItemSlotLogic m_Star_Confirm_Consume1;
    public ItemSlotLogic m_Star_Confirm_Consume2;

    public UILabel m_Enchance_EquipName_Label;                      //强化 选中装备名字
    public UILabel m_Enchance_NextEncLevel_Label;                   //强化 下一强化等级
    public EquipStrengthenAttrEnchance m_Enchance_EquipAttr;        //强化 选中装备属性
    public UISlider m_Enchance_EncExp;                              //强化 强化经验条
    public UILabel m_Enchance_EncExpValue;                          //强化 强化经验值
    public UILabel m_Enchance_MaxLevelLabel;                        //强化 等级已满提示
    public GameObject m_Enchance_NextInfo;                          //强化 下一级信息 等级已满时隐藏
    public GameObject m_Enchance_ChooseList;                        //强化 智能选择
    public UILabel m_Enchance_LevelReq;                             //强化 等级需求

    public GameObject m_Enchance_AbsorbButton;                      // 吸收按钮
    public GameObject m_CloseButton;                                // 关闭按钮
    public GameObject m_GuidePoint;     

    public UIToggle m_ValuableToggle;                               //贵重材料勾选框

    public UIGrid m_TabGrid;

    public GameObject m_EnchanceChooseMenu;
	public ShowItemInfo selectedGameItemInfoObj;

    public GameObject m_StarExplainLabel;
    public GameObject m_StrengthExplainLabel;
    public GameObject m_StarMenuButtom;

    //public UISprite m_CurStarColor;
    //public UISprite m_NextStarColor;

    private GameItem m_CurSelectEquip = null;   //当前选择装备
    private GameObject m_FristMeterialEquip = null;   //第一个材料装备

    private int m_CurStarMaterialID = -1;

    private float m_Delay_Enchance_Time = 0f;
    private int m_Delay_Enchance_CurPackBack = 0;
    private ulong m_Delay_Enchance_EquipGuid = 0;
    private List<ulong> m_Delay_Enchance_MetarialList = new List<ulong>();
	private List<int> m_Delay_Enchance_MetairalCountList = new List<int>();

    private bool m_Delay_Star = false;
    private int m_Delay_Star_CurPackBack = 0;
    private ulong m_Delay_Star_EquipGuid = 0;
    private int m_Delay_Star_TargetLevel = 0;

    private const string EnchanceTabStr = "Button1-Strengthen";
    private const string StarTabStr = "Button2-Star";
    private const string ShenQiTabStr = "Button3-Shenqi";
    private const string TrainingTabStr = "Button4-Training";

    public bool m_AutoChooseEnchanceStone = false;                   //是否自动选中玄铁

    public GameObject m_MaterialChooseWindow;
    public GameObject m_Enchance_OpenButton;

    private bool m_bSetItemCount = false;

    public GameObject m_StrenthTips;

    // 新手指引
    private int m_NewPlayerGuideFlag_Step = -1;
    public GameObject m_StrengthEffect; //强化特效
    public int NewPlayerGuideFlag_Step
    {
        get { return m_NewPlayerGuideFlag_Step; }
        set { m_NewPlayerGuideFlag_Step = value; }
    }
    private bool m_IsNotFirstOpenFlag = false; // 新手指引用 强化材料多次刷新问题

    public enum StarMode
    {
        STAR_NORMAL = 0,        //单次打星
        STAR_CUR12 = 1,         //打星至当前12星
        STAR_MAX12 = 2,         //打星至橙色12星

        Mode_Num = 3,
    }
    private int m_Star_Mode = (int)StarMode.STAR_NORMAL;

    //打开默认分页
    public enum TabPage
    {
        TAB_ENCHANCE = 1,
        TAB_STAR = 2,
    }
    public static TabPage m_DefaultTab = TabPage.TAB_ENCHANCE;
    public static void ShowWindow(TabPage DefaultTab, UIManager.OnOpenUIDelegate delOpenUI = null)
    {
        m_DefaultTab = DefaultTab;
        UIManager.ShowUI(UIInfo.EquipStren, delOpenUI);
    }

    public static bool IsAutoEnchanceMaterial(GameItem item)
    {
        List<GameItem> templist = new List<GameItem>();
        templist.Add(item);
        templist = ItemTool.EnchanceMaterialFilter(templist, false,true);
        if (templist.Count >= 1)
        {
            return true;
        }
        return false;
    }

    void OnEnable()
    {
        SetInstance(this);
        if (m_TabController != null)
        {
            m_TabController.InitData();
            m_TabController.delTabChanged = OnTabChanged;
        }
        /*if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level < (int)ShenQiInfo.MINOPENLEVEL)
        {
            TabButton _ShenQiBtTab = m_TabController.GetTabButton(ShenQiTabStr);
            if (_ShenQiBtTab != null)
            {
                _ShenQiBtTab.gameObject.SetActive(false);
            }
        }
        else
        {
            TabButton _ShenQiBtTab = m_TabController.GetTabButton(ShenQiTabStr);
            if (_ShenQiBtTab != null)
            {
                _ShenQiBtTab.gameObject.SetActive(true);
            }
        }*/
        /*TabButton TrainingTab = m_TabController.GetTabButton(TrainingTabStr);
        if (TrainingTab != null)
        {
            bool isShow = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level >= GlobeVar.TRAINING_OPENLEVEL &&
                GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_TRAINING);
            TrainingTab.gameObject.SetActive(isShow);
        }*/
        m_TabGrid.Reposition();
        InvokeRepeating("SlowUpdate", 0f, 0.3f);
        if (m_DefaultTab == TabPage.TAB_ENCHANCE)
        {
            m_TabController.ChangeTab(EnchanceTabStr);
        }
        else
        {
            m_TabController.ChangeTab(StarTabStr);
        }
    }

    void OnDisable()
    {
        //先设置特效为false
        m_StrengthEffect.SetActive(false);
        //关闭界面时 如果有延迟发包 则直接发包
        if (m_Delay_Enchance_Time > 0)
        {
            //发送消息包
            CG_EQUIP_ENCHANCE equipEnchance = (CG_EQUIP_ENCHANCE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_EQUIP_ENCHANCE);
            equipEnchance.SetPacktype(m_Delay_Enchance_CurPackBack);
            equipEnchance.SetEquipguid(m_Delay_Enchance_EquipGuid);
            for (int i = 0; i < m_Delay_Enchance_MetarialList.Count; ++i)
            {
                equipEnchance.AddMaterialguid(m_Delay_Enchance_MetarialList[i]);
            }
			for(int i = 0; i < m_Delay_Enchance_MetairalCountList.Count; ++i)
			{
                equipEnchance.AddMaterialcount(m_Delay_Enchance_MetairalCountList[i]);
			}

            equipEnchance.SendPacket();

            m_Delay_Enchance_CurPackBack = 0;
            m_Delay_Enchance_EquipGuid = 0;
            m_Delay_Enchance_MetarialList.Clear();
        }
        //if (m_Delay_Star_Time > 0)
        {
            //发送消息包
            CG_EQUIP_STAR equipStar = (CG_EQUIP_STAR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_EQUIP_STAR);
            equipStar.SetPacktype(m_Delay_Star_CurPackBack);
            equipStar.SetEquipguid(m_Delay_Star_EquipGuid);
            if (m_Delay_Star_TargetLevel > 0)
            {
                equipStar.SetStarlevel(m_Delay_Star_TargetLevel);
            }
            equipStar.SendPacket();

            m_Delay_Star_CurPackBack = 0;
            m_Delay_Star_EquipGuid = 0;
            m_Delay_Star_TargetLevel = 0;
        }

        //关闭界面时 如果有UI特效播放 则关闭特效
        if (BackCamerControll.Instance())
        {
            BackCamerControll.Instance().StopSceneEffect(130, true);
            BackCamerControll.Instance().StopSceneEffect(131, true);
        }

        CancelInvoke("SlowUpdate");
        SetInstance(null);

        m_AutoChooseEnchanceStone = false;
        m_ValuableToggle.value = false;
        //关闭界面时候，如果选择材料框开着，则隐藏
        NGUITools.SetActive(m_MaterialChooseWindow, false);
        NGUITools.SetActive(selectedGameItemInfoObj.gameObject, false);
        NGUITools.SetActive(m_Enchance_AbsorbButton, false);
        NGUITools.SetActive(m_Enchance_OpenButton, true);
        NGUITools.SetActive(m_StrenthTips, false);

    }

    void OnDestroy()
    {

    }

    void SlowUpdate()
    {
        if (m_Delay_Enchance_Time > 0)
        {
            //强化延迟发包
            m_Delay_Enchance_Time -= 0.3f;
            if (m_Delay_Enchance_Time <= 0)
            {
                // 新手指引
                if (m_NewPlayerGuideFlag_Step == 5)
                {
                    NewPlayerGuide(3);
                }
                //发送消息包
                CG_EQUIP_ENCHANCE equipEnchance = (CG_EQUIP_ENCHANCE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_EQUIP_ENCHANCE);
                equipEnchance.SetPacktype(m_Delay_Enchance_CurPackBack);
                equipEnchance.SetEquipguid(m_Delay_Enchance_EquipGuid);
                for (int i = 0; i < m_Delay_Enchance_MetarialList.Count; ++i)
                {
                    equipEnchance.AddMaterialguid(m_Delay_Enchance_MetarialList[i]);
                }
                for (int i = 0; i < m_Delay_Enchance_MetairalCountList.Count; ++i)
                {
                    equipEnchance.AddMaterialcount(m_Delay_Enchance_MetairalCountList[i]);
                }
                equipEnchance.SendPacket();

                m_Delay_Enchance_CurPackBack = 0;
                m_Delay_Enchance_EquipGuid = 0;
                m_Delay_Enchance_MetarialList.Clear();
            }
        }

        if (m_Delay_Star)
        {

            m_Delay_Star = false;
        //    if (m_Delay_Star_Time <= 0)
            {
                //发送消息包
                CG_EQUIP_STAR equipStar = (CG_EQUIP_STAR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_EQUIP_STAR);
                equipStar.SetPacktype(m_Delay_Star_CurPackBack);
                equipStar.SetEquipguid(m_Delay_Star_EquipGuid);
                if (m_Delay_Star_TargetLevel > 0)
                {
                    equipStar.SetStarlevel(m_Delay_Star_TargetLevel);
                }
                equipStar.SendPacket();

                m_Delay_Star_CurPackBack = 0;
                m_Delay_Star_EquipGuid = 0;
                m_Delay_Star_TargetLevel = 0;
            }
        }
    }

    public void OnTabChanged(TabButton tableButton)
    {
        UpdateTab();
        if (IntensifyEffectGO != null) {
          IntensifyEffectGO.SetActive(false);
        }
        if (StarEffectGO != null) {
          StarEffectGO.SetActive(false);
        }
    }

    public void UpdateTab()
    {
        if (m_TabController.GetHighlightTab() != null)
        {
            GameObject curTab = m_TabController.GetHighlightTab().gameObject;
            if (null != curTab)
            {
                if (m_LeftView.activeSelf == false)
                {
                    m_LeftView.SetActive(true);
                }
                if (curTab.name == EnchanceTabStr)
                {
                    UpdateTab_Enchance();
                }
                else if (curTab.name == StarTabStr)
                {
                    UpdateTab_Star();
                }
                else if (curTab.name == ShenQiTabStr)
                {
                    m_LeftView.SetActive(false);
                }
                else if (curTab.name == TrainingTabStr)
                {
                    m_LeftView.SetActive(false);
                }
            }
        }
        m_CurMoney_Label.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
        m_CurBindYuanBao_Label.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind().ToString();
    }
    public void EnchanceOK()
    {
      if (IntensifyEffectGO != null) {
        IntensifyEffectGO.SetActive(true);
      }
    }
    public void StarOK()
    {
      if (StarEffectGO != null) {
        StarEffectGO.SetActive(true);
      }
    }
    public void UpdateMoneyInfo()
    {
        m_CurBindYuanBao_Label.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind().ToString();
    }

    public bool IsCurEnchanceTab()
    {
        if (m_TabController.GetHighlightTab() == null)
        {
            return false;
        }
        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (null != curTab && curTab.name == EnchanceTabStr)
        {
            return true;
        }
        return false;
    }

    public bool IsCurStarTab()
    {
        if (m_TabController.GetHighlightTab() == null)
        {
            return false;
        }
        GameObject curTab = m_TabController.GetHighlightTab().gameObject;
        if (null != curTab && curTab.name == StarTabStr)
        {
            return true;
        }
        return false;
    }

    //刷新强化分页
    public void UpdateTab_Enchance()
    {
        //清空
        ClearTab_Enchance();
        UpdateTab_Enchance_Equip();
        UpdateTab_Enchance_Material();
        UpdateTab_Enchance_EquipInfo();
        UpdateItemStatus();
    }
    public void ReSelectEquip()
    {
        if (m_CurSelectEquip != null)
        {
            SetCurSelectEquip(m_CurSelectEquip);
        }
    }
    public void UpdateItemStatus()
    {
        NGUITools.SetActive(m_Enchance_AbsorbButton.gameObject, false);
        NGUITools.SetActive(m_Enchance_OpenButton.gameObject, true);
        NGUITools.SetActive(selectedGameItemInfoObj.gameObject, false);
        NGUITools.SetActive(m_MaterialChooseWindow, false);
    }  

    public void UpdateTab_Enchance_Equip()
    {
        GameItemContainer EquipPack = GameManager.gameManager.PlayerDataPool.EquipPack;
        for (int index = 0;
            index < EquipPack.ContainerSize &&
            index < m_Equip_Sprite.Length &&
            index < m_Equip_QualityFrame.Length &&
            index < m_Equip_Lable.Length;
            index++)
        {
            int slot = ItemTool.GetEquipSlotByUIIndex(index);
            GameItem equip = EquipPack.GetItem(slot);
            if (equip != null && equip.IsValid())
            {
                if (m_Equip_Sprite[index] != null)
                {
                    m_Equip_Sprite[index].gameObject.SetActive(true);
                    m_Equip_Sprite[index].spriteName = equip.GetIcon();
                }
                if (m_Equip_QualityFrame[index] != null)
                {
                    m_Equip_QualityFrame[index].gameObject.SetActive(true);
                    m_Equip_QualityFrame[index].spriteName = equip.GetQualityFrame();
                }
                if (m_Equip_Lable[index] != null)
                {
                    if (equip.IsBelt())
                    {
                        m_Equip_Lable[index].gameObject.SetActive(false);
                    }
                    else
                    {
                        m_Equip_Lable[index].gameObject.SetActive(true);
                        m_Equip_Lable[index].text = "+" + equip.EnchanceLevel;
                    }
                }
                if (GetCurSelectEquip() == null && equip.IsBelt() == false)
                {
                    SetCurSelectEquip(equip);
                    NGUITools.SetActive(m_Equip_Lable_Buttom.gameObject, true);
                    m_Equip_Lable_Buttom.text = "+" + equip.EnchanceLevel;
                }
            }
            else
            {
                if (m_Equip_Sprite[index] != null)
                {
                    m_Equip_Sprite[index].gameObject.SetActive(false);
                }
                if (m_Equip_QualityFrame[index] != null)
                {
                    m_Equip_QualityFrame[index].gameObject.SetActive(false);
                }
                if (m_Equip_Lable[index] != null)
                {
                    m_Equip_Lable[index].gameObject.SetActive(false);
                }
            }
        }
        NGUITools.SetActive(m_Equip_Lable_Buttom.gameObject, true);
        m_Equip_Lable_Buttom.text = "+" + GetCurSelectEquip().EnchanceLevel;
    }

    public void UpdateTab_Enchance_Material()
    {
        UIManager.LoadItem(UIInfo.EquipStrengthenItem, OnLoadItemEnchance_Material);
    }

    void OnLoadItemEnchance_Material(GameObject resItem, object param)
    {
        if (m_ValuableToggle == null) return;
        m_ValuableToggle.transform.FindChild("Label2").gameObject.SetActive(!m_ValuableToggle.value);
        if (null == resItem)
        {
            LogModule.ErrorLog("load EquipStrengthenItem fail");
            return;
        }

        Utils.CleanGrid(m_Content_Enchance_Grid);

        //显示材料选择
        List<GameItem> backpackitem = GameManager.gameManager.PlayerDataPool.BackPack.GetList();
        List<GameItem> materiallist = ItemTool.EnchanceMaterialFilter(backpackitem, m_ValuableToggle.value);
        Set_m_bSetItemCount(true);
        for (int i = 0; i < materiallist.Count; i++)
        {
            GameItem item = materiallist[i];
            //非神器 不能吸收神器
            if (m_CurSelectEquip != null && m_CurSelectEquip.IsShenQiEquipMent() == false)
            {
                if (item.IsShenQiEquipMent())
                {
                    continue;
                }
            }
            GameObject itemobject = Utils.BindObjToParent(resItem, m_Content_Enchance_Grid, (i + 1000).ToString());
            if (itemobject != null && itemobject.GetComponent<EquipStrengthenItemLogic>() != null)
            {
                if (item.GetClass() == (int)ItemClass.EQUIP)
                {
                    itemobject.GetComponent<EquipStrengthenItemLogic>().UpdateItemInfo(item, EquipStrengthenItemLogic.Type.TYPE_ENC_EQUIP_BACKPACK);
                }
                else
                {
                    itemobject.GetComponent<EquipStrengthenItemLogic>().UpdateItemInfo(item, EquipStrengthenItemLogic.Type.TYPE_ENC_METARIAL_BACKPACK);
                }
                
                if (item.IsEnchanceExpItem() && m_AutoChooseEnchanceStone)
                {
                    itemobject.GetComponent<EquipStrengthenItemLogic>().ClearSTATUS();
                }
                if (m_FristMeterialEquip == null)
                {
                    StrDictionary.GetClientDictionaryString("#{5221}");
                    m_FristMeterialEquip = itemobject;
                }
            }
        }
        Set_m_bSetItemCount(false);
        Check_NewPlayerGuide();
        if (m_Content_Enchance_Grid.GetComponent<UIHexagonGrid>() != null)
        {
            m_Content_Enchance_Grid.GetComponent<UIHexagonGrid>().Reposition();
        }
        if (m_Content_Enchance_Grid.GetComponent<UITopGrid>() != null)
        {
            m_Content_Enchance_Grid.GetComponent<UITopGrid>().Recenter(true);
        }
    }

    public void UpdateTab_Enchance_EquipInfo()
    {
        if (GetCurSelectEquip() == null)
        {
            m_Enchance_EquipName_Label.text = "";
            m_Enchance_NextEncLevel_Label.text = "";
            m_Enchance_EquipAttr.ClearInfo();
            m_Enchance_EncExp.value = 0;
            m_Enchance_EncExpValue.text = "0/0";
            m_Enchance_MaxLevelLabel.gameObject.SetActive(false);
            m_Enchance_NextInfo.gameObject.SetActive(false);
            m_Enchance_LevelReq.text = "";
        }
        else
        {
            GameItem equipItem = GetCurSelectEquip();
            if (equipItem != null && equipItem.IsValid())
            {
                m_Enchance_EquipName_Label.text = Utils.GetEquipAttrFactorName(equipItem) + equipItem.GetName();
                if (TableManager.GetEquipEnchanceByID(equipItem.EnchanceLevel + 1, 0) != null)
                {
                    m_Enchance_MaxLevelLabel.gameObject.SetActive(false);
                    m_Enchance_NextInfo.gameObject.SetActive(true);

                    m_Enchance_NextEncLevel_Label.text = StrDictionary.GetClientDictionaryString("#{3321}", (equipItem.EnchanceLevel + 1));
                    m_Enchance_EquipAttr.ShowAttr(equipItem);
                    m_Enchance_LevelReq.text = StrDictionary.GetClientDictionaryString("#{2832}", equipItem.GetEquipLevel());
                    int nEnchanceExpMax = equipItem.GetEnchanceExpMax();
                    if (nEnchanceExpMax > 0)
                    {
                        m_Enchance_EncExp.value = (float)(equipItem.EnchanceExp) / (float)nEnchanceExpMax;
                        m_Enchance_EncExpValue.text = equipItem.EnchanceExp.ToString() + "/" + nEnchanceExpMax.ToString();
                    }
                    else
                    {
                        m_Enchance_EncExp.value = 0;
                        m_Enchance_EncExpValue.text = "0/0";
                    }
                }
                else
                {
                    //已经最高等级
                    m_Enchance_MaxLevelLabel.gameObject.SetActive(true);
                    m_Enchance_NextInfo.gameObject.SetActive(false);
                }

                m_Choose_Equip.InitInfo_Item(equipItem.DataID, OnCurSelectEquipClick);
            }
        }
    }

    //刷新打星分页
    public void UpdateTab_Star()
    {
        //清空
        ClearTab_Star();
        UpdateTab_Star_Equip();
        UpdateTab_Star_EquipInfo();
        if (m_NewPlayerGuideFlag_Step == 10)
        {
            NewPlayerGuide(11);
        }
    }

    public void UpdateTab_Star_Equip()
    {
        //紫色以下不能打星
        if (GetCurSelectEquip() != null && GetCurSelectEquip().IsValid())
        {
            if (GetCurSelectEquip().GetQuality() < ItemQuality.QUALITY_PURPLE)
            {
                ClearCurSelectEquip();
            }
        }
        GameItemContainer EquipPack = GameManager.gameManager.PlayerDataPool.EquipPack;
        for (int index = 0; index < EquipPack.ContainerSize; index++)
        {
            int slot = ItemTool.GetEquipSlotByUIIndex(index);
            GameItem equip = EquipPack.GetItem(slot);
            if (equip != null && equip.IsValid())
            {
                if (m_Equip_Sprite[index] != null)
                {
                    m_Equip_Sprite[index].gameObject.SetActive(true);
                    m_Equip_Sprite[index].spriteName = equip.GetIcon();
                }
                if (m_Equip_QualityFrame[index] != null)
                {
                    m_Equip_QualityFrame[index].gameObject.SetActive(true);
                    m_Equip_QualityFrame[index].spriteName = equip.GetQualityFrame();
                }
                if (m_Equip_Lable[index] != null)
                {
                    if (equip.IsBelt())
                    {
                        m_Equip_Lable[index].gameObject.SetActive(false);
                    }
                    else
                    {
                        m_Equip_Lable[index].gameObject.SetActive(true);
//                        int showLevel = 0;
//                        if (equip.StarLevel >= 1)
//                        {
//                            showLevel = (equip.StarLevel - 1) % 12 + 1;
//                        }
                        //m_Equip_Lable[index].text = ItemTool.GetStarColor(equip.StarLevel);
                        //m_Equip_Lable[index].text += "+" + showLevel;
                    }
                }
                if (GetCurSelectEquip() == null && equip.IsBelt() == false)
                {
                    //紫色以下不能打星
                    if (equip.GetQuality() >= ItemQuality.QUALITY_PURPLE)
                    {
                        SetCurSelectEquip(equip);
                    }
                }
            }
            else
            {
                if (m_Equip_Sprite[index] != null)
                {
                    m_Equip_Sprite[index].gameObject.SetActive(false);
                }
                if (m_Equip_QualityFrame[index] != null)
                {
                    m_Equip_QualityFrame[index].gameObject.SetActive(false);
                }
                if (m_Equip_Lable[index] != null)
                {
                    m_Equip_Lable[index].gameObject.SetActive(false);
                }
            }
        }
    }

    public void UpdateTab_Star_EquipInfo()
    {
        OnClickStarMode_Normal();
        if (GetCurSelectEquip() == null)
        {
            ShowNextStarLevel(GlobeVar.INVALID_ID);
            m_Star_Choose_Name.text = "";
            m_Star_Choose_Level.text = "";
            m_Star_Choose_Attr.ClearInfo();
            m_Star_Material_Sprite.spriteName = "";
            m_Star_Material_Label.text = "";
            m_Star_Material_QualitySprite.spriteName = "";
            m_Star_NeedCoin_Label.text = "";
            m_Star_StarLevelMaxNotice.gameObject.SetActive(false);
            m_Star_ConsumInfo.gameObject.SetActive(false);
            m_Star_NextLevelInfo.gameObject.SetActive(false);
            m_Star_CurMaterial_Label.text = "";
            m_Star_SuccessRate_Label.text = "";
            m_CurStarMaterialID = -1;
            m_Star_Need_Times.text = "";
            m_Star_Choose_Slot.ClearInfo();
         //   m_Star_Choose_StarQuality.spriteName = "white-kuang";
            m_Star_Choose_StarLevel.text = "";
            m_Star_Choose_Level.text = "";
        }
        else
        {
            GameItem curEquip = GetCurSelectEquip();
            if (curEquip != null && curEquip.IsValid())
            {
                m_Star_Choose_Name.text = Utils.GetEquipAttrFactorName(curEquip) + curEquip.GetName();
                m_Star_Choose_Attr.ShowAttr(curEquip);
                m_Star_Choose_Slot.InitInfo_Item(curEquip.DataID, OnCurSelectEquipClick);

                Tab_CommonItem tabEquip = TableManager.GetCommonItemByID(curEquip.DataID, 0);
                if (tabEquip != null)
                {
                    m_Star_Choose_Level.text = StrDictionary.GetClientDictionaryString("#{2832}", tabEquip.MinLevelRequire);
                }

                Tab_EquipStar starline = TableManager.GetEquipStarByID(curEquip.StarLevel + 1, 0);
                if (starline != null)
                {
                    ShowNextStarLevel(curEquip.StarLevel);
                    m_Star_StarLevelMaxNotice.gameObject.SetActive(false);
                    m_Star_ConsumInfo.gameObject.SetActive(true);
                    m_Star_NextLevelInfo.gameObject.SetActive(true);
                    Tab_CommonItem materialine = TableManager.GetCommonItemByID(starline.ConsumeSubType, 0);
                    if (materialine != null)
                    {
                        m_Star_Material_Sprite.spriteName = materialine.Icon;
                        m_Star_Material_Label.text = string.Format("{0}/{1}", GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(starline.ConsumeSubType), starline.ConsumeNum);
                        m_Star_Material_QualitySprite.spriteName = GlobeVar.QualityColorGrid[materialine.Quality - 1];
                        m_Star_NeedCoin_Label.text = starline.NeedCoin.ToString();
                    }
                    //m_Star_CurMaterial_Label.text = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(starline.ConsumeSubType).ToString();
                    m_Star_SuccessRate_Label.text = string.Format("{0}%", (int)(curEquip.GetStarShowRate() * 100));
                    m_CurStarMaterialID = starline.ConsumeSubType;
                    if (curEquip.GetStarSuccessLeftTime() > 0)
                    {
                        m_Star_Need_Times.text = StrDictionary.GetClientDictionaryString("#{5335}", curEquip.GetStarSuccessLeftTime());
                    }
                    else
                    {
                        m_Star_Need_Times.text = "";
                    }
                }
                else
                {
                    //星级已满
                    ShowNextStarLevel(curEquip.GetMaxStarLevel(), true);
                    m_Star_StarLevelMaxNotice.gameObject.SetActive(true);
                    m_Star_ConsumInfo.gameObject.SetActive(false);
                    m_Star_NextLevelInfo.gameObject.SetActive(false);
                    m_CurStarMaterialID = -1;

                    //m_CurStarColor.spriteName = "OrangeStar";
                    //m_NextStarColor.spriteName = "OrangeStar";
                }

                m_Star_Choose_Slot.InitInfo_Item(curEquip.DataID, OnCurSelectEquipClick);
            }
        }
    }

    //清空强化分页
    public void ClearTab_Enchance()
    {
        Utils.CleanGrid(m_Content_Enchance_Grid);

        m_Enchance_EquipName_Label.text = "";
        m_Enchance_NextEncLevel_Label.text = "";
        m_Enchance_EquipAttr.ClearInfo();
        m_Enchance_EncExpValue.text = "";
        m_Enchance_NextInfo.gameObject.SetActive(false);
        m_Enchance_MaxLevelLabel.gameObject.SetActive(false);
        m_EnchanceChooseMenu.SetActive(false);
        m_Choose_Equip.ClearInfo();
        m_StrengthEffect.SetActive(false);
        m_Enchance_LevelReq.text = "";
    }

    //清空打星分页
    public void ClearTab_Star()
    {
        //打星预览信息
        ShowNextStarLevel(GlobeVar.INVALID_ID);
        m_Star_Choose_Attr.ClearInfo();
        m_Star_Material_Sprite.spriteName = "";
        m_Star_Material_Label.text = "";
      //  m_Star_Choose_StarQuality.spriteName = "white-kuang";
        m_Star_Choose_StarLevel.text = "";
        m_Star_Choose_Slot.ClearInfo();
        m_Star_Choose_Level.text = "";
        m_Star_Material_QualitySprite.spriteName = "";
        m_Star_NeedCoin_Label.text = "";
        m_Star_SuccessRate_Label.text = "";
        m_Star_StarLevelMaxNotice.gameObject.SetActive(false);
        m_Star_Need_Times.text = "";
        for (int i = 0; i < 3 && i < m_Star_Mode_Choose_Sprite.Length; i++)
        {
            m_Star_Mode_Choose_Sprite[i].gameObject.SetActive(false);
        }
        m_Star_Confirm.SetActive(false);
    }
    public void GemBtClick()
    {
        RefreshGemsInEquips();
        OnClickEquip0();
    }
    public void ClearGemsInEquips()
    {
        for (int nIndex = 0; nIndex < m_GemsInEquips.Length; ++nIndex)
        {
            m_GemsInEquips[nIndex].gameObject.SetActive(false);
        }
    }  
    public void RefreshGemsInEquips()
    {
        ClearGemsInEquips();
        int nEquipMax = (int)EquipPackSlot.Slot_NUM;
        int nGemMax = (int)GemLogic.CONSTVALUE.GEM_SLOT_NUM;

        GemData gemdata = GameManager.gameManager.PlayerDataPool.GemData;

        for (int eIndex = 0; eIndex < nEquipMax; ++eIndex)
        {
            for (int gIndex = 0; gIndex < nGemMax; ++gIndex)
            {
                int nListIndex = GetIndexByEquipSlot(eIndex) * nGemMax + gIndex;
                int nGemID = gemdata.GetGemId(eIndex, gIndex);
                if (nGemID >= 0)
                {
                    Tab_CommonItem line = TableManager.GetCommonItemByID(nGemID, 0);
                    if (line != null && nListIndex >= 0 && nListIndex < m_GemsInEquips.Length)
                    {
                        m_GemsInEquips[nListIndex].gameObject.SetActive(true);
                    }
                }
            }
        }
    }
    void ClearAllSlotChoose()
    {
        for (int i = 0; i < (int)EquipPackSlot.Slot_NUM; i++)
        {
            m_Equip_Choose[i].gameObject.SetActive(false);
        }
    }
    public void OnClickEquip(int clickindex)
    {
        if (m_GemView.activeSelf && GemLogic.Instance() != null)
        {
            GemLogic.Instance().OnClickEquiSlot(ItemTool.GetEquipSlotByUIIndex(clickindex));
            ClearAllSlotChoose();
            int index = /*GetIndexByEquipSlot*/(clickindex);
            m_Equip_Choose[index].gameObject.SetActive(true);
            GemLogic.Instance().UpdateSelectedEquip(m_Equip_Choose[index].spriteName,
            m_Equip_Sprite[index].gameObject.activeSelf ? m_Equip_Sprite[index].spriteName : m_EquipBGSprite[index].spriteName, m_Equip_QualityFrame[index].spriteName, index);
        }
        else
        {
            int slot = ItemTool.GetEquipSlotByUIIndex(clickindex);
            GameItem equip = GameManager.gameManager.PlayerDataPool.EquipPack.GetItem(slot);
            //NGUITools.SetActive(m_Equip_Lable_Buttom.gameObject, false);
            if (equip != null && equip.IsValid())
            {
                NGUITools.SetActive(m_Equip_Lable_Buttom.gameObject, true);
                m_Equip_Lable_Buttom.text = "+" + equip.EnchanceLevel;
                if (IsCurEnchanceTab())
                {
                    if (equip.IsBelt())
                    {
                        Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2634}");
                    }
                    else
                    {
                        SetCurSelectEquip(equip);
                        UpdateTab();
                    }
                }
                else
                {
                    if (equip.IsBelt())
                    {
                        Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2634}");
                    }
                    else if (equip.GetQuality() < ItemQuality.QUALITY_PURPLE)
                    {
                        Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2640}");
                    }
                    else
                    {
                        SetCurSelectEquip(equip);
                        UpdateTab();
                    }
                }
            }
            if (m_NewPlayerGuideFlag_Step == 11)
            {
                NewPlayerGuide(12);
            }
        }
    }

    int GetIndexByEquipSlot(int slot)
    {
        switch (slot)
        {
            case (int)EquipPackSlot.Slot_WEAPON: return 0;
            case (int)EquipPackSlot.Slot_HEAD: return 1;
            case (int)EquipPackSlot.Slot_RING: return 2;
            case (int)EquipPackSlot.Slot_ARMOR: return 3;
            case (int)EquipPackSlot.Slot_NECK: return 4;
            case (int)EquipPackSlot.Slot_CUFF: return 5;
            case (int)EquipPackSlot.Slot_AMULET: return 6;
            case (int)EquipPackSlot.Slot_LEG_GUARD: return 7;
            case (int)EquipPackSlot.Slot_BELT: return 8;
            case (int)EquipPackSlot.Slot_SHOES: return 9;
            default:
                break;
        }
        return 0;
    }
    void OnClickEquip0()
    {
        OnClickEquip(0);
    }

    void OnClickEquip1()
    {
        OnClickEquip(1);
    }

    void OnClickEquip2()
    {
        OnClickEquip(2);
    }

    void OnClickEquip3()
    {
        OnClickEquip(3);
    }

    void OnClickEquip4()
    {
        OnClickEquip(4);
    }

    void OnClickEquip5()
    {
        OnClickEquip(5);
    }

    void OnClickEquip6()
    {
        OnClickEquip(6);
    }

    void OnClickEquip7()
    {
        OnClickEquip(7);
    }

    void OnClickEquip8()
    {
        OnClickEquip(8);
    }

    void OnClickEquip9()
    {
        OnClickEquip(9);
    }

    //装备强化 点击选择材料之后
    public void ItemAfterChoose_Enchance_Metarial(GameItem clickitem)
    {
        int totalexp = CalcTotalExpAfterEnchance();
        GameItem equipItem = GetCurSelectEquip();
        if (equipItem != null)
        {
            if (equipItem.IsValid() && totalexp > 0)
            {
                int nEnchanceExpMax = equipItem.GetEnchanceExpMax();
                m_Enchance_EncExpValue.text = equipItem.EnchanceExp.ToString() + "[00A0FF]+" + totalexp.ToString() + "[FFFF69]/" + nEnchanceExpMax.ToString();
            }
            if (m_NewPlayerGuideFlag_Step == 0)
            {
                NewPlayerGuide(2);
            }
        }
    }

	public void ShowItemInfoObj(EquipStrengthenItemLogic itemLogic)
	{
		if (selectedGameItemInfoObj != null)
        {
			NGUITools.SetActive (selectedGameItemInfoObj.gameObject, true);
			selectedGameItemInfoObj.UpdateItemInfo (itemLogic);
		}
	}

    public void CloseItemInfoObj()
    {
        if (selectedGameItemInfoObj != null)
        {
            NGUITools.SetActive(selectedGameItemInfoObj.gameObject, false);
        }
    }

    //装备强化 取消选择材料之后
    public void ItemAfterCancel_Enchance_Metarial(GameItem clickitem)
    {
        int totalexp = CalcTotalExpAfterEnchance();
        GameItem equipItem = GetCurSelectEquip();
        if (equipItem != null)
        {
            if (equipItem.IsValid())
            {
                int nEnchanceExpMax = equipItem.GetEnchanceExpMax();
                if (totalexp > 0)
                {
                    m_Enchance_EncExpValue.text = equipItem.EnchanceExp.ToString() + "[00A0FF]+" + totalexp.ToString() + "[FFFF69]/" + nEnchanceExpMax.ToString();
                }
                else
                {
                    m_Enchance_EncExpValue.text = equipItem.EnchanceExp.ToString() + "/" + nEnchanceExpMax.ToString();
                }
            }
        }
    }

    void OnCloseButtonClick()
    {
        if (m_NewPlayerGuideFlag_Step == 3)
        {
            NewPlayerGuide(4);
        }
        ClearCurSelectEquip();
        UIManager.CloseUI(UIInfo.EquipStren);
    }

    void ShowEnchanceChoose()
    {
        m_EnchanceChooseMenu.SetActive(!m_EnchanceChooseMenu.activeSelf);
    }

    void EnchanceChoose_Clear()
    {
        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
        Set_m_bSetItemCount(true);
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED)
            {
                item.OnClickChooseItem();
            }
        }
        Set_m_bSetItemCount(false);
        m_EnchanceChooseMenu.SetActive(false);
    }

    void EnchanceChoose_DoNothing()
    {
        m_EnchanceChooseMenu.SetActive(false);
    }

    void EnchanceChoose_Green()
    {
        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
        Set_m_bSetItemCount(true);
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_item.GetClass() != (int)ItemClass.EQUIP)
                continue;
            //选中白色
            if (item.m_item.GetQuality() == ItemQuality.QUALITY_WHITE)
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_ENABLE)
                {
                    item.OnClickChooseItem();
                }
            }
            else
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED)
                {
                    item.OnClickChooseItem();
                }
            }
        }
        Set_m_bSetItemCount(false);
        m_EnchanceChooseMenu.SetActive(false);
    }

    void EnchanceChoose_Blue()
    {
        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
        Set_m_bSetItemCount(true);
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_item.GetClass() != (int)ItemClass.EQUIP)
                continue;
            //选中绿色 白色
            if (item.m_item.GetQuality() == ItemQuality.QUALITY_GREEN ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_WHITE)
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_ENABLE)
                {
                    item.OnClickChooseItem();
                }
            }
            else
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED)
                {
                    item.OnClickChooseItem();
                }
            }
        }
        Set_m_bSetItemCount(false);
        m_EnchanceChooseMenu.SetActive(false);
    }

    void EnchanceChoose_Purple()
    {
        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
        Set_m_bSetItemCount(true);
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_item.GetClass() != (int)ItemClass.EQUIP)
                continue;
            //选中蓝色 绿色 白色
            if (item.m_item.GetQuality() == ItemQuality.QUALITY_BLUE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_GREEN ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_WHITE)
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_ENABLE)
                {
                    item.OnClickChooseItem();
                }
            }
            else
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED)
                {
                    item.OnClickChooseItem();
                }
            }
        }
        Set_m_bSetItemCount(false);
        m_EnchanceChooseMenu.SetActive(false);
    }

    void EnchanceChoose_Orange()
    {
        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
        Set_m_bSetItemCount(true);
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_item.GetClass() != (int)ItemClass.EQUIP)
                continue;
            //选中紫色 蓝色 绿色 白色
            if (item.m_item.GetQuality() == ItemQuality.QUALITY_PURPLE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_BLUE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_GREEN ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_WHITE)
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_ENABLE)
                {
                    item.OnClickChooseItem();
                }
            }
            else
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED)
                {
                    item.OnClickChooseItem();
                }
            }
        }
        Set_m_bSetItemCount(false);
        m_EnchanceChooseMenu.SetActive(false);
    }

    void EnchanceChoose_Red()
    {
        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
        Set_m_bSetItemCount(true);
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_item.GetClass() != (int)ItemClass.EQUIP)
                continue;
            //选中橙色 紫色 蓝色 绿色 白色
            if (item.m_item.GetQuality() == ItemQuality.QUALITY_ORANGE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_PURPLE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_BLUE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_GREEN ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_WHITE)
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_ENABLE)
                {
                    item.OnClickChooseItem();
                }
            }
            else
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED)
                {
                    item.OnClickChooseItem();
                }
            }
        }
        Set_m_bSetItemCount(false);
        m_EnchanceChooseMenu.SetActive(false);
    }

    void EnchanceChoose_Gold()
    {
        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
        Set_m_bSetItemCount(true);
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_item.GetClass() != (int)ItemClass.EQUIP)
                continue;
            //选中红色 橙色 紫色 蓝色 绿色 白色
            if (item.m_item.GetQuality() == ItemQuality.QUALITY_ORANGE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_PURPLE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_BLUE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_GREEN ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_WHITE ||
                item.m_item.GetQuality() == ItemQuality.QUALITY_GOLD)
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_ENABLE)
                {
                    item.OnClickChooseItem();
                }
            }
            else
            {
                if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED)
                {
                    item.OnClickChooseItem();
                }
            }
        }
        Set_m_bSetItemCount(false);
        m_EnchanceChooseMenu.SetActive(false);
    }

    void EnchanceChoose_All()
    {
        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
        Set_m_bSetItemCount(true);
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_item.GetClass() != (int)ItemClass.EQUIP)
                continue;
            if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_ENABLE)
            {
                item.OnClickChooseItem();
            }
        }
        Set_m_bSetItemCount(false);
        m_EnchanceChooseMenu.SetActive(false);
    }

    //点击强化按钮
    void OnEnchanceButtonClick()
    {
        // 新手指引
        if (m_NewPlayerGuideFlag_Step == 2)
        {
            NewPlayerGuide(5);
        }

        if (m_Delay_Enchance_Time > 0)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2215}");
            return;
        }

        if (GetCurSelectEquip() == null)
        {
            //未选择装备
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1224}");
            return;
        }
        if (GetCurSelectEquip().IsValid() == false)
        {
            //未选择装备
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1224}");
            return;
        }

        ulong equipguid = GetCurSelectEquip().Guid;
        //TT1703 蓝色及以下装备吸收有星级装备时 需要提示
        int noticeStep = 0;
        if (GetCurSelectEquip().GetQuality() <= ItemQuality.QUALITY_BLUE)
        {
            noticeStep = 1;
        }
        List<ulong> metariallist = new List<ulong>();
		List<int> matCountList = new List<int> ();

        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
//        Games.LogicObj.Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED )
            {
                metariallist.Add(item.m_item.Guid);
				matCountList.Add(item.GetSelectedCount());
                //TT1703 蓝色及以下装备吸收有星级装备时 需要提示
                if (noticeStep == 1)
                {
                    if (item.m_item.StarLevel > 0)
                    {
                        noticeStep = 2;
                    }
                }
            }
        }
        if (equipguid == GlobeVar.INVALID_GUID)
        {
            //TODO 未选择装备
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1224}");
            return;
        }
        if (metariallist.Count == 0)
        {
            //TODO 未选择材料
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1225}");
            return;
        }

        //if (GetCurSelectEquip().EnchanceLevel >= GlobeVar.EQUIP_ENCHANCE_MAX_LEVEL)
        //{
        //    //装备强化等级已满
        //    Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1273}");
        //    return;
        //}

        m_Delay_Enchance_CurPackBack = (int)GameItemContainer.Type.TYPE_EQUIPPACK;
        m_Delay_Enchance_EquipGuid = equipguid;
        m_Delay_Enchance_MetarialList.Clear();
        m_Delay_Enchance_MetarialList.AddRange(metariallist);

		m_Delay_Enchance_MetairalCountList.Clear ();
		m_Delay_Enchance_MetairalCountList.AddRange (matCountList);

        //TT1703 蓝色及以下装备吸收有星级装备时 需要提示
        if (noticeStep == 2)
        {
            MessageBoxLogic.OpenOKCancelBox(2514, 1000, EnchanceEquip_ChekCombatValue, EnchanceEquipCance);
        }
        else
        {
          EnchanceEquip_ChekCombatValue();
        }
        if (IntensifyEffectGO != null) {
          IntensifyEffectGO.SetActive(false);
        }
    }

    void EnchanceEquip_ChekCombatValue()
    {
        bool bindFlag = false;
        List<GameItem> itemList = new List<GameItem>();
        for (int i = 0; i < m_Delay_Enchance_MetarialList.Count; i++)
        {
            ulong metarialguid = m_Delay_Enchance_MetarialList[i];
            GameItemContainer backpack = GameManager.gameManager.PlayerDataPool.BackPack;
            if (backpack != null)
            {
                GameItem item = backpack.GetItemByGuid(metarialguid);
                if (item != null && item.IsValid())
                {
                    if (item.IsEquipMent() && item.IsBetterThanCurEquip())
                    {
                        itemList.Add(item);
                    }
                    //可交易装备
                    if (item.IsEquipMent() && !item.BindFlag)
                    {
                        bindFlag = true;
                    }
                }
            }
        }
        if (itemList.Count > 0)
        {
            if (itemList.Count == 1)
            {
                string strTip = StrDictionary.GetClientDictionaryString("#{4712}", itemList[0].GetName());
                MessageBoxLogic.OpenOKCancelBox(strTip, "", EnchanceEquip_CheckConsignSale, EnchanceEquipCance);
            }
            else
            {
                string strTip = StrDictionary.GetClientDictionaryString("#{4713}", itemList[0].GetName(), itemList.Count);
                MessageBoxLogic.OpenOKCancelBox(strTip, "", EnchanceEquip_CheckConsignSale, EnchanceEquipCance);
            }
        }
        else if (bindFlag)
        {
            MessageBoxLogic.OpenOKCancelBox(11529, 1000, EnchanceEquip_CheckConsignSale, EnchanceEquipCance);
        }
        else
        {
            EnchanceEquip_CheckConsignSale();
        }
    }

    void EnchanceEquip_CheckConsignSale()
    {
        List<GameItem> itemList = new List<GameItem>();
        for (int i = 0; i < m_Delay_Enchance_MetarialList.Count; i++)
        {
            ulong metarialguid = m_Delay_Enchance_MetarialList[i];
            GameItemContainer backpack = GameManager.gameManager.PlayerDataPool.BackPack;
            if (backpack != null)
            {
                GameItem item = backpack.GetItemByGuid(metarialguid);
                if (item != null && item.IsValid())
                {
                    if (item.IsEquipMent() && ConsignSaleBag.isCanConsignSale(item))
                    {
                        itemList.Add(item);
                    }
                }
            }
        }
        if (itemList.Count > 0)
        {
            if (itemList.Count == 1)
            {
                string strTip = StrDictionary.GetClientDictionaryString("#{4714}", itemList[0].GetName());
                MessageBoxLogic.OpenOKCancelBox(strTip, "", EnchanceEquipOk, EnchanceEquipCance);
            }
            else
            {
                string strTip = StrDictionary.GetClientDictionaryString("#{4715}", itemList[0].GetName(), itemList.Count);
                MessageBoxLogic.OpenOKCancelBox(strTip, "", EnchanceEquipOk, EnchanceEquipCance);
            }
        }
        else
        {
            EnchanceEquipOk();
        }
    }

    void EnchanceEquipOk()
    {
        if (null != GameManager.gameManager)
        {
            GameManager.gameManager.SoundManager.PlaySoundEffect(28);
        }

        //播放特效 延迟发包
        //if (BackCamerControll.Instance() != null)
        //{
            //BackCamerControll.Instance().StopSceneEffect(476, false);
            //BackCamerControll.Instance().PlaySceneEffect(476);
        //}

        m_StrengthEffect.SetActive(false);
        m_StrengthEffect.SetActive(true);
            
        m_Delay_Enchance_Time = 0.5f;
    }

    void EnchanceEquipCance()
    {
        m_Delay_Enchance_CurPackBack = 0;
        m_Delay_Enchance_EquipGuid = 0;
        m_Delay_Enchance_MetarialList.Clear();
    }

    //选择普通打星模式
    void OnClickStarMode_Normal()
    {
//         if (m_Delay_Star_Time > 0)
//         {
//             Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2215}");
//             return;
//         }
//         m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_NORMAL].gameObject.SetActive(true);
        //m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_CUR12].gameObject.SetActive(false);
        //m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_MAX12].gameObject.SetActive(false);
        m_Star_Mode = (int)StarMode.STAR_NORMAL;
    }

    //选择打星至当前12星
    void OnClickStarMode_Cur12()
    {
        /*if (m_Delay_Star_Time > 0)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2215}");
            return;
        }
        //m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_NORMAL].gameObject.SetActive(false);

        m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_CUR12].gameObject.SetActive(!m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_CUR12].gameObject.activeSelf);
        if (m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_CUR12].gameObject.activeSelf)
        {
            m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_MAX12].gameObject.SetActive(false);
        }
        m_Star_Mode = m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_CUR12].gameObject.activeSelf ? (int)StarMode.STAR_CUR12 : (int)StarMode.STAR_NORMAL;*/

        GameItem curEquip = GetCurSelectEquip();
        if (curEquip == null || false == curEquip.IsValid())
        {
            return;
        }

        Tab_EquipStar starline = TableManager.GetEquipStarByID(curEquip.StarLevel + 1, 0);
        if (starline == null)
        {
            return;
        }

        Tab_CommonItem materialine = TableManager.GetCommonItemByID(starline.ConsumeSubType, 0);
        if (materialine == null)
        {
            return;
        }

        m_Star_Mode = (int)StarMode.STAR_CUR12;

        m_Star_Confirm.SetActive(true);

        m_Star_Confirm_Title.text = StrDictionary.GetClientDictionaryString("#{10121}");
        m_Star_Confirm_Desc.text = StrDictionary.GetClientDictionaryString("#{10123}");
        m_Star_Confirm_Consume1.InitInfo_Item(materialine.Id, ItemSlotLogic.OnClickOpenTips);
        m_Star_Confirm_Consume2.InitInfo_Coin();

        //BeginEquipStar();
    }

    //选择打星至橙色12星
    void OnClickStarMode_Max12()
    {
        /*if (m_Delay_Star_Time > 0)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2215}");
            return;
        }
        //m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_NORMAL].gameObject.SetActive(false);
        
        m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_MAX12].gameObject.SetActive(!m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_MAX12].gameObject.activeSelf);
        if (m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_MAX12].gameObject.activeSelf)
        {
            m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_CUR12].gameObject.SetActive(false);
        }
        m_Star_Mode = m_Star_Mode_Choose_Sprite[(int)StarMode.STAR_MAX12].gameObject.activeSelf ? (int)StarMode.STAR_MAX12 : (int)StarMode.STAR_NORMAL;*/

        GameItem curEquip = GetCurSelectEquip();
        if (curEquip == null || false == curEquip.IsValid())
        {
            return;
        }

        Tab_EquipStar starline = TableManager.GetEquipStarByID(curEquip.StarLevel + 1, 0);
        if (starline == null)
        {
            return;
        }

        Tab_CommonItem materialine = TableManager.GetCommonItemByID(starline.ConsumeSubType, 0);
        if (materialine == null)
        {
            return;
        }

        m_Star_Mode = (int)StarMode.STAR_MAX12;

        m_Star_Confirm.SetActive(true);

        m_Star_Confirm_Title.text = StrDictionary.GetClientDictionaryString("#{10122}");
        m_Star_Confirm_Desc.text = StrDictionary.GetClientDictionaryString("#{10537}");
        m_Star_Confirm_Consume1.InitInfo_Item(materialine.Id, ItemSlotLogic.OnClickOpenTips);
        m_Star_Confirm_Consume2.InitInfo_Coin();
    }

    void OnStarConfirmOKClick()
    {
        BeginEquipStar();
        m_Star_Confirm.SetActive(false);
    }

    void OnStarConfirmCancelClick()
    {
        m_Star_Mode = (int)StarMode.STAR_NORMAL;
        m_Star_Confirm.SetActive(false);
    }

    void OnStarButtonClick()
    {
        if (m_NewPlayerGuideFlag_Step == 13)
        {
            NewPlayerGuide(14);
        }
      m_Star_Mode = (int)StarMode.STAR_NORMAL;
      BeginEquipStar();
      if (StarEffectGO != null) {
        StarEffectGO.SetActive(false);
      }
     
    }

    //点击打星按钮
    void BeginEquipStar()
    {
        //if (m_Delay_Star_Time > 0)
        //{
        //    Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2215}");
        //    return;
        //}

        GameItem curEquip = GetCurSelectEquip();
        if (curEquip == null)
        {
            //未选择装备
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1224}");
            return;
        }
        if (curEquip.IsValid() == false)
        {
            //未选择装备
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1224}");
            return;
        }

        if (curEquip.StarLevel >= curEquip.GetMaxStarLevel())
        {
            //装备打星星级已满
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1274}");
            return;
        }

        int starTargetLevel = 0;
        if (m_Star_Mode == (int)StarMode.STAR_NORMAL)
        {
            starTargetLevel = 0;
        }
        else if (m_Star_Mode == (int)StarMode.STAR_CUR12)
        {
            starTargetLevel = ((curEquip.StarLevel / 12) + 1) * 12;
        }
        else if (m_Star_Mode == (int)StarMode.STAR_MAX12)
        {
            starTargetLevel = curEquip.GetMaxStarLevel();
        }

        Tab_EquipStar line = TableManager.GetEquipStarByID(curEquip.StarLevel + 1, 0);
        if (line != null)
        {
            int ItemNum = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(line.ConsumeSubType);
            if (ItemNum < line.ConsumeNum)
            {
                //打星石数量不足
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1275}");
                return;
            }

            //金币数量
            int CoinNum = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
            if (CoinNum < line.NeedCoin)
            {
                //金币数量不足
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1830}");
                return;
            }
        }

        if (null != GameManager.gameManager)
        {
            GameManager.gameManager.SoundManager.PlaySoundEffect(28);
        }

        //播放特效 延迟发包
        if (BackCamerControll.Instance() != null)
        {
            BackCamerControll.Instance().StopSceneEffect(131, false);
            BackCamerControll.Instance().PlaySceneEffect(131);
        }
        m_Delay_Star = true;
        m_Delay_Star_CurPackBack = (int)GameItemContainer.Type.TYPE_EQUIPPACK;
        m_Delay_Star_EquipGuid = curEquip.Guid;
        m_Delay_Star_TargetLevel = starTargetLevel;
    }

    void OnClickStarMaterial()
    {
        if (m_CurStarMaterialID >= 0)
        {
            GameItem item = new GameItem();
            item.DataID = m_CurStarMaterialID;
            ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
        }
    }

    public void OnChangeValuableToggle()
    {
        // 新手指引相关
        if (m_IsNotFirstOpenFlag == false)
        {
            m_IsNotFirstOpenFlag = true;
            return;
        }
        //刷新下强化材料
        UpdateTab_Enchance_Material();

       
        
    }

    //更新可增加经验值
    int CalcTotalExpAfterEnchance()
    {
        GameItem equip = GetCurSelectEquip();
        if (equip == null)
        {
            LogModule.DebugLog(StrDictionary.GetClientDictionaryString("#{1224}"));
            return 0;
        }
        if (equip.IsValid() == false)
        {
            LogModule.DebugLog(StrDictionary.GetClientDictionaryString("#{1224}"));
            return 0;
        }

        //计算当前的总经验 （原有经验+ 材料经验）
        int totalexp = 0;
        EquipStrengthenItemLogic[] ItemArry = m_Content_Enchance_Grid.GetComponentsInChildren<EquipStrengthenItemLogic>();
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED)
            {
                totalexp += item.m_item.GetFullEnchanceExp() * item.GetSelectedCount();
            }
        }

        return totalexp;
    }

    public GameItem GetCurSelectEquip()
    {
        return m_CurSelectEquip;
    }
    public void SetCurSelectEquip(GameItem item)
    {
        if (item.IsBelt())
        {
            return;
        }
        ClearCurSelectEquip();
        m_CurSelectEquip = item;
        int index = ItemTool.GetUIIndexByEquipSlot(item.GetSubClass() - 1);
        if (m_Equip_Choose[index] != null)
        {
            m_Equip_Choose[index].gameObject.SetActive(true);
        }
    }
    private void ClearCurSelectEquip()
    {
        m_CurSelectEquip = null;
        for (int i = 0; i < EquipNum; i++)
        {
            m_Equip_Choose[i].gameObject.SetActive(false);
        }
    }
    void OnCurSelectEquipClick(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        if (m_CurSelectEquip != null)
        {
            EquipTooltipsLogic.ShowEquipTooltip(m_CurSelectEquip, EquipTooltipsLogic.ShowType.Info);
        }
    }

    //显示选择装备的打星等级
    private void ShowNextStarLevel(int curlevel, bool isMax = false)
    {
        int starnum = 0;
//        int starcolour = 0;

        if (curlevel < 0)
        {
            starnum = 0;
//            starcolour = 0;
        }
        else
        {
            starnum = isMax ? 12 : (curlevel-1) % 12 + 1;
//            starcolour = isMax ? (curlevel - 1) / 12 : curlevel / 12;
        }

       // m_Star_Choose_StarQuality.spriteName = ItemTool.GetEquipStarQuality(starcolour);
        m_Star_Choose_StarLevel.text = starnum.ToString();

        for (int i = 0; i < m_Star_StarLevelSprite.Length && i < m_Star_StarLevelTween.Length; i++)
        {
            if (i < starnum)
            {
				m_Star_StarLevelSprite[i].color = ItemTool.GetStarColorRGB(curlevel);
//                m_Star_StarLevelSprite[i].MakePixelPerfect();
//                m_Star_StarLevelSprite[i].gameObject.SetActive(true);
//                if (i == starnum - 1)
//                {
//                    m_Star_StarLevelTween[i].Play();
//                }
//                else
//                {
//                    m_Star_StarLevelTween[i].Reset();
//                    m_Star_StarLevelTween[i].alpha = 1.0f;
//                    m_Star_StarLevelTween[i].enabled = false;
//                }
            }
            else
            {
				m_Star_StarLevelSprite[i].color = ItemTool.GetStarColorRGB(curlevel-12);
//                m_Star_StarLevelSprite[i].gameObject.SetActive(false);
//                m_Star_StarLevelTween[i].Reset();
            }
        }
    }

    //滚动到第一个被选中的格子
    public void ScrollToFirstChooseItem(GameObject gridObject)
    {
        if (gridObject == null)
        {
            return;
        }
        GameObject draggablePanel = gridObject.transform.parent.gameObject;
        if (draggablePanel == null)
        {
            return;
        }
        float itemHeight = gridObject.GetComponent<UIGrid>().cellHeight;
        //计算当前格子位置
        int curPos = (int)(draggablePanel.transform.localPosition.y / itemHeight) + 1;
        //计算目标格子位置(第一个被选中的格子)
        int targetPos = 0;
        int count = 0;
        EquipStrengthenItemLogic[] ItemArry = gridObject.GetComponentsInChildren<EquipStrengthenItemLogic>();
        for (int i = 0; i < ItemArry.Length; i++)
        {
            EquipStrengthenItemLogic item = ItemArry[i];
            count++;
            //记录第一个选中格子
            if (item.m_Status == EquipStrengthenItemLogic.Status.STATUS_CHOOSED && targetPos == 0)
            {
                targetPos = count;
            }
        }
        //滚动
        if (targetPos > 0 && count > 3)
        {
            //如果目标格子在最后四个 那么只滚动到倒数第四个(同时只能显示四个格子)
            if (targetPos >= (count - 3))
            {
                targetPos = count - 3;
            }
            float moveOffest = (targetPos - curPos) * itemHeight;
            Vector3 target = new Vector3(0, moveOffest, 0);
            draggablePanel.GetComponent<UIDraggablePanel>().MoveRelative(target);
        }
    }

    void Check_NewPlayerGuide()
    {
        if (MenuBarLogic.Instance() == null)
        {
            return;
        }
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 0)
        {
            NewPlayerGuide(6);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
        if (nIndex == 18)//装备打星
        {
            NewPlayerGuide(10);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
        if (nIndex == 9)
        {
            NewPlayerGuide(15);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        if (nIndex < 0)
        {
            return;
        }
        m_NewPlayerGuideFlag_Step = nIndex;
        switch (nIndex)
        {
            case 0:
                //NewPlayerGuidLogic.OpenWindow(m_Enchance_StrenButton, 180, 70, "", "right", 0, true, true);
                //                 if (m_FristMeterialEquip != null)
                //                 {
                //                     NewPlayerGuidLogic.OpenWindow(m_FristMeterialEquip, 120, 120, "", "right", 0, true, true);
                //                 }
                {
                    GameObject EnchanceItem = null;
                    // 找一下呗 3个
                    for (int i = 1000; i < 1000 + 3; i++)
                    {
                        Transform ItemObjTrans = m_Content_Enchance_Grid.transform.FindChild(i.ToString());
                        if (ItemObjTrans)
                        {

                            if (i == 1000)
                            {
                                EnchanceItem = ItemObjTrans.gameObject;
                            }

                            EquipStrengthenItemLogic EquipStrengItem = ItemObjTrans.GetComponent<EquipStrengthenItemLogic>();
                            if (EquipStrengItem)
                            {
                                if (EquipStrengItem.m_item != null && EquipStrengItem.m_item.IsEquipMent())
                                {
                                    EnchanceItem = ItemObjTrans.gameObject;
                                    break;
                                }
                            }
                        }
                    }
                    if (EnchanceItem != null)
                    {
                        NewPlayerGuidLogic.OpenWindow(EnchanceItem, 120, 120, Utils.GetDicByID(11491), "right", 0, true, true);
                    }
                }
                break;
            case 1:
                break;
            case 2:
                {
                    NewPlayerGuidLogic.OpenWindow(m_Enchance_AbsorbButton, 200, 80, "", "right", 0, true, true);
                }
                break;
            case 3:
                {
                    NewPlayerGuidLogic.OpenWindow_Circle(m_GuidePoint, 100, Utils.GetDicByID(11492), "left", 0, true, true);
                }
                break;
            case 4:
                if (MenuBarLogic.Instance())
                {
                    MenuBarLogic.Instance().NewPlayerGuide(101);
                }
                m_NewPlayerGuideFlag_Step = -1;
                break;
            case 5:
                break;
            case 6:
                {
                    NewPlayerGuidLogic.OpenWindow(m_Enchance_OpenButton, 200, 80, Utils.GetDicByID(11490), "left", 0, true, true);
                }
                break;
            case 10://装备打星
                {
                    NewPlayerGuidLogic.OpenWindow(m_TabController.transform.FindChild("Button2-Star").gameObject, 200, 80, "", "right", 0, true, true);
                }
                break;
            case 11://选择紫装
                {
                    GameObject PurpleEquip = getPurpleEquip();
                    if (PurpleEquip != null)
                    {
                        NewPlayerGuidLogic.OpenWindow(PurpleEquip, 150, 150, Utils.GetDicByID(11427), "right", 0, true, true);
                    }
                    else
                    {
                        NewPlayerGuidLogic.CloseWindow();
                        m_NewPlayerGuideFlag_Step = -1;
                    }
                }
                break;
            case 12:
                {
                    NewPlayerGuidLogic.OpenWindow(m_StarMenuButtom.transform.parent.transform.FindChild("OpenStarButton").gameObject, 200, 80, "", "right", 0, true, true);
                }
                break;
            case 13:
                {
                    NewPlayerGuidLogic.OpenWindow(m_StarMenuButtom.transform.FindChild("StarButton").gameObject, 200, 80, "", "right", 0, true, true);
                }
                break;
            case 14:
                {
                    m_NewPlayerGuideFlag_Step = -1;
                    NewPlayerGuidLogic.CloseWindow();
                   
                }
                break;
            case 15://符文
                {
                    NewPlayerGuidLogic.OpenWindow(transform.Find("EquipStrengthenOffset/TabButtons/Button4-Gem").gameObject, 200, 80, "", "right", 0, true, true);
                }
                break;
        }
    }

    GameObject getPurpleEquip()
    {
        GameItemContainer EquipPack = GameManager.gameManager.PlayerDataPool.EquipPack;
        for (int index = 0; index < EquipPack.ContainerSize; index++)
        {
            int slot = ItemTool.GetEquipSlotByUIIndex(index);
            GameItem equip = EquipPack.GetItem(slot);
            if (equip != null && equip.IsValid())
            {
                if (equip.GetQuality() < ItemQuality.QUALITY_PURPLE)
                {
                  continue;
                }
                return m_Equip_Sprite[index].transform.parent.gameObject;
            }
        }
           return null;
    }


    void OpenStrengthMaterialChooseWindow()
    {
        //判断背包是否有材料//显示材料选择
        List<GameItem> backpackitem = GameManager.gameManager.PlayerDataPool.BackPack.GetList();
        List<GameItem> materiallist = ItemTool.EnchanceMaterialFilter(backpackitem, false);
        if (materiallist.Count <= 0)
        {
            NGUITools.SetActive(m_StrenthTips, true);
            return;
        }
        if (m_MaterialChooseWindow != null)
        {
            NGUITools.SetActive(m_MaterialChooseWindow, true);
            if (m_Content_Enchance_Grid.GetComponent<UIHexagonGrid>() != null)
            {
                m_Content_Enchance_Grid.GetComponent<UIHexagonGrid>().Reposition();
            }
            if (m_Content_Enchance_Grid.GetComponent<UITopGrid>() != null)
            {
                m_Content_Enchance_Grid.GetComponent<UITopGrid>().Recenter(true);
            }
        }
        if (m_Enchance_OpenButton != null)
        {
            NGUITools.SetActive(m_Enchance_OpenButton, false);
        }
        if (m_Enchance_AbsorbButton != null)
        {
            NGUITools.SetActive(m_Enchance_AbsorbButton, true);
        }
        if (m_NewPlayerGuideFlag_Step == 6)
        {
            NewPlayerGuide(0);
        }
    }


    public void Set_m_bSetItemCount(bool bSet)
    {
        m_bSetItemCount = bSet;
     }

    public bool Get_m_bSetItemCount()
    {
        return m_bSetItemCount;
    }

    void OnCloseChoosePanel()
    {
        //m_EnchanceChooseMenu.SetActive(false);
        //关闭界面时候，如果选择材料框开着，则隐藏
        NGUITools.SetActive(m_MaterialChooseWindow, false);
        NGUITools.SetActive(selectedGameItemInfoObj.gameObject, false);
        NGUITools.SetActive(m_Enchance_AbsorbButton, false);
        NGUITools.SetActive(m_Enchance_OpenButton, true);
    }
    void OnCloseEntrenthTips(GameObject go)
    {
        NGUITools.SetActive(go, false);
    }

    void OnCloseStarExplainTips(GameObject go)
    {
        NGUITools.SetActive(go, false);
    }

    void OnOpenStarExplainTips()
    {
        NGUITools.SetActive(m_StarExplainLabel, true);
    }

    void OnCloseStrenExplainTips(GameObject go)
    {
        NGUITools.SetActive(go, false);
    }

    void OnOpenStrenExplainTips()
    {
        NGUITools.SetActive(m_StrengthExplainLabel, true);
    }

    void OnCloseStarMenu(GameObject go)
    {
        NGUITools.SetActive(go, false);
    }

    void OnOpenStarMenu()
    {
        NGUITools.SetActive(m_StarMenuButtom, true);
        if (m_NewPlayerGuideFlag_Step == 12)
        {
            NewPlayerGuide(13);
        }
    }
}