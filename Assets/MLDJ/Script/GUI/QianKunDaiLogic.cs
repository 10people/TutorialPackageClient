using UnityEngine;
using System.Collections;
using GCGame.Table;
using System.Collections.Generic;
using Games.GlobeDefine;
using System;
using Games.Item;

public class QianKunDaiLogic : MonoBehaviour {

    public enum FORMULA_TYPE
    {
        TYPE_GEMLEVELUP = 1,
        TYPE_GEMREFRESH = 2,
        TYPE_NORMAL = 3,
    }

    private static QianKunDaiLogic m_Instance = null;
    public static QianKunDaiLogic Instance()
    {
        return m_Instance;

    }

    private static bool m_bOopenFromChristmas = false;
    public static bool IsOpenFromChristmas
    {
        get { return m_bOopenFromChristmas; }
        set { m_bOopenFromChristmas = value; }
    }
    const int StuffSlotMax = 6;
    public ItemSlotLogic[] m_StuffSlotArray;
    //public GameObject m_ChooseButton;
    //public GameObject m_CancelChooseButton;
    public GameObject m_FormulaRoot;
    public GameObject m_FormulaContent;
    public GameObject m_NumChoose;
    public UIInput m_NumChooseInput;
    public UILabel m_MaxCombineCountLabel;
    public UILabel m_TotalMoneyLabel;        //合成的总发费
    public GameObject m_NumChooseOK;
    public ItemSlotLogic m_ProductSlot;
    public TabController m_TabIntroduction;
    public UILabel m_IntroductionLabel;
    public GameObject m_FilterRoot;
    public GameObject m_FilterContent;
    public TabController m_TabFilter;
    public GameObject m_NullIntroduction;
    public GameObject m_ProductPanel;
    public ItemSlotLogic[] m_ProductSlotArray;

    private const int MAX_PRODUCT_SLOT_COUNT = 23;
    private const int MAX_FILTER_TYPE_COUNT = 8;
    private UILabel m_FilterContentLabel;
    private BoxCollider m_FilterContentBox;
    private UILabel m_FormulaContentLabel;
    private BoxCollider m_FormulaContentBox;
    private Dictionary<int, int> m_ChooseStuffKinds = new Dictionary<int, int>();
    private List<UInt64> m_ChooseStuffGuid = new List<UInt64>();
    private int m_CurCombineNum;
    private Tab_QianKunDaiFormula m_RightFormula = null;
    private int m_MaxCombineCount = 1;
    private bool m_CombineCD = false;
    private List<UInt64> deleGuid = new List<UInt64>();     // update_item包会调用 防止多次new 一开始new一个缓存住

    //由于要频繁修改m_ProductDictionary中ProductInfo的nProductCount，故使用class而没使用struct
    public class ProductInfo
    {
        public ProductInfo(int nIndex, int nCount)
        {
            ProductSlotArrayIndex = nIndex;
            ProductCount = nCount;
        }
        public int ProductSlotArrayIndex
        {
            get
            {
                return m_nProductSlotArrayIndex;
            }
            private set
            {
                m_nProductSlotArrayIndex = value;
            }
        }

        public int ProductCount
        {
            get
            {
                return m_nProductCount;
            }
            set
            {
                m_nProductCount = value;
            }
        }

        private int m_nProductSlotArrayIndex;      //在m_ProductSlotArray中对应的索引
        private int m_nProductCount;       //相同nProductDataID的物品数量
    }
    private Dictionary<int, ProductInfo> m_ProductDictionary = new Dictionary<int, ProductInfo>();          //缓存合成的物品 <nProductDataID, ProductInfo>

    void Awake()
    {
        m_Instance = this;
        if (null != m_TabIntroduction)
        {
            m_TabIntroduction.delTabChanged = OnTabIntroduction;
        }
        if (null != m_TabFilter)
        {
            m_TabFilter.delTabChanged = OnTabFilter;
        }
    }

	// Use this for initialization
	void Start () {
        
	}

    void OnEnable()
    {
        m_Instance = this;
        //m_ChooseButton.SetActive(true);
        //m_CancelChooseButton.SetActive(false);
        m_FormulaRoot.SetActive(false);
        m_NumChoose.SetActive(false);

        m_FormulaContentLabel = m_FormulaContent.GetComponent<UILabel>();
        m_FormulaContentBox = m_FormulaContent.GetComponent<BoxCollider>();

        for (int i = 0; i < StuffSlotMax; i++)
        {
            m_StuffSlotArray[i].ClearInfo();
        }

        ClearNumChoose();
        ClearProductSlot();

        m_FilterRoot.SetActive(false);
        m_FilterContentLabel = m_FilterContent.GetComponent<UILabel>();
        m_FilterContentBox = m_FilterContent.GetComponent<BoxCollider>();
        m_NullIntroduction.SetActive(false);
        m_ProductPanel.SetActive(false);
        for (int ii = 0; ii < MAX_PRODUCT_SLOT_COUNT; ++ii)
        {
            m_ProductSlotArray[ii].ClearInfo();
        }
        m_ProductDictionary.Clear();
    }

    void OnDisable()
    {
        bool bIsOpenFromChristmas = IsOpenFromChristmas;
        m_Instance = null;
        ClearData();
        CancelInvoke("CombineCDWait");
        if (bIsOpenFromChristmas)
        {
            if (GlobalData.IsChristmasOpen())
            {
                UIManager.ShowUI(UIInfo.ChristmasController);
            }
        }
    }

    void ClearData()
    {
        m_ChooseStuffKinds.Clear();
        m_ChooseStuffGuid.Clear();
        m_CurCombineNum = 0;
        m_RightFormula = null;
        m_MaxCombineCount = 1;
        m_CombineCD = false;
        m_bOopenFromChristmas = false;
    }

    void ClearProductSlot()
    {
        m_ProductSlot.ClearInfo();
        m_ProductSlot.SetIconDirect("QianKunDaiDefault");
        m_ProductSlot.SetOnClickDirect(ProductSlotOnClick);
    }

    void ProductSlotOnClick(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        if (nItemID == GlobeVar.INVALID_ID)
        {
            ShowFormula();
        }
        else
        {
            GameItem item = new GameItem();
            item.DataID = nItemID;
            if (item.IsValid())
            {
                if (item.IsEquipMent())
                {
                    EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.UnEquiped);
                }
                else
                {
                    ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Normal);
                }            
            }
        }
    }

    /*void BeginChoose()
    {
        m_ChooseButton.SetActive(false);
        m_CancelChooseButton.SetActive(true);
    }

    void CancelChoose()
    {
        m_ChooseButton.SetActive(true);
        m_CancelChooseButton.SetActive(false);
    }*/

    void CombineFormula()
    {
        if (m_ChooseStuffGuid.Count <= 0)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2079}");
            return;
        }

        bool bAllGem = IsAllGem();

        foreach (KeyValuePair<int, List<Tab_QianKunDaiFormula>> pair in TableManager.GetQianKunDaiFormula())
        {
            Tab_QianKunDaiFormula tabFormula = pair.Value[0];
            if (tabFormula == null)
            {
                continue;
            }

            if (IsAllStuffRight(tabFormula, bAllGem))
            {
                m_RightFormula = tabFormula;
                break;
            }
        }

        if (m_RightFormula == null)
        {
            // 不满足任何配方
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2083}");
        }
        else
        {
            for (int i = 0; i < m_ChooseStuffGuid.Count; i++ )
            {
                GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
                if (item != null && item.IsValid())
                {
                    if (item.BindFlag)
                    {
                        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{2070}"), "", CombineFormulaOK, CombineFormulaCancel);
                        break;
                    }
                    if (i == m_ChooseStuffGuid.Count - 1)
                    {
                        CombineFormulaOK();
                    }
                }
            }           
        }
    }

    bool IsAllGem()
    {
        for (int i = 0; i < m_ChooseStuffGuid.Count; i++ )
        {
            GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
            if (item != null && item.IsValid())
            {
                if (!item.IsGem())
                {
                    return false;
                }
            }
        }
        return true;
    }

    void CombineFormulaOK()
    {
        if (m_RightFormula == null)
        {
            return;
        }

        // 确认可合成最大数量 若大于1 则弹出数量确认框
        // 最大合成数量 即为各种素材的最小组数
        int nMinHoldGroup = 999;

        if (m_RightFormula.Type == (int)FORMULA_TYPE.TYPE_GEMLEVELUP)
        {
            if (m_ChooseStuffGuid.Count > 0)
            {
                GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[0]);
                if (item != null && item.IsValid())
                {
                    if (m_ChooseStuffKinds.ContainsKey(item.DataID))
                    {
                        if (m_RightFormula.GetStuffCountbyIndex(0) > 0)
                        {
                            nMinHoldGroup = m_ChooseStuffKinds[item.DataID] / m_RightFormula.GetStuffCountbyIndex(0);
                        }
                        else
                        {
                            nMinHoldGroup = m_ChooseStuffKinds[item.DataID] / 3;
                        }
                    }
                }
            }            
        }
        else if (m_RightFormula.Type == (int)FORMULA_TYPE.TYPE_GEMREFRESH)
        {
            foreach(KeyValuePair<int, int> pair in m_ChooseStuffKinds)
            {
                if (nMinHoldGroup > pair.Value)
                {
                    nMinHoldGroup = pair.Value;
                }                
            }
        }
        else
        {
            // 查找配方时已经确定 玩家选择的材料种类数和配方中的种类数必须相等
            for (int i = 0; i < m_RightFormula.getStuffIDCount(); i++)
            {
                int nStuffID = m_RightFormula.GetStuffIDbyIndex(i);
                int nStuffCount = m_RightFormula.GetStuffCountbyIndex(i);
                if (nStuffID != GlobeVar.INVALID_ID && m_ChooseStuffKinds.ContainsKey(nStuffID))
                {
                    int nPlayerHoldCount = m_ChooseStuffKinds[nStuffID];
                    int nPlayerHoldGroup = nPlayerHoldCount / nStuffCount;
                    if (nMinHoldGroup > nPlayerHoldGroup)
                    {
                        nMinHoldGroup = nPlayerHoldGroup;
                    }
                }
            }
        }

        m_MaxCombineCount = nMinHoldGroup;
        m_NumChoose.SetActive(true);
        m_CurCombineNum = 1;
        m_NumChooseInput.value = "1";
        m_MaxCombineCountLabel.text = StrDictionary.GetClientDictionaryString("#{2098}", nMinHoldGroup);
        SetCombineTotalMoney();
    }

    void CombineFormulaCancel()
    {
        m_RightFormula = null;
    }

    void ShowFormula()
    {
        m_FormulaRoot.SetActive(true);

        /*m_FormulaContentLabel.text = "";
        foreach (KeyValuePair<string, List<Tab_QianKunDaiFormula>> pair in TableManager.GetQianKunDaiFormula())
        {
            Tab_QianKunDaiFormula tabFormula = pair.Value[0];
            if (tabFormula == null)
            {
                continue;
            }

            m_FormulaContentLabel.text += tabFormula.Name;
            m_FormulaContentLabel.text += "\n";
        }*/
        m_FormulaContentLabel.text = StrDictionary.GetClientDictionaryString("#{2118}").Replace("#r", "\n");

        m_FormulaContentBox.size = new Vector3(m_FormulaContentBox.size.x, m_FormulaContentLabel.printedSize.y, 0);
        m_FormulaContentBox.center = new Vector3(m_FormulaContentBox.center.x, -m_FormulaContentLabel.printedSize.y / 2, 0);

        m_TabIntroduction.ChangeTab("Tab1");
    }

    void CloseFormulaRoot()
    {
        m_FormulaRoot.SetActive(false);
    }

    public void ChooseStuff(GameItem chooseitem, ItemSlotLogic slot)
    {
        if (chooseitem == null || !chooseitem.IsValid())
        {
            return;
        }
        // 格子数量上限6
        int nCurStuffNum = m_ChooseStuffGuid.Count;
        if (nCurStuffNum >= StuffSlotMax)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2076}");
            return;
        }

        // 不可重复放入物品
        for (int i = 0; i < m_ChooseStuffGuid.Count; i++)
        {
            GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
            if (item != null && item.IsValid())
            {
                if (item.Guid == chooseitem.Guid)
                {
                    Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2173}");
                    return;
                }
            }
        }

        if (m_ChooseStuffKinds.ContainsKey(chooseitem.DataID))
        {
            m_ChooseStuffKinds[chooseitem.DataID] += chooseitem.StackCount;
        }
        else
        {
            m_ChooseStuffKinds.Add(chooseitem.DataID, chooseitem.StackCount);
        }

        m_StuffSlotArray[nCurStuffNum].InitInfo_Item(chooseitem.DataID, StuffSlotOnClick, chooseitem.StackCount.ToString());
        m_StuffSlotArray[nCurStuffNum].ItemSlotEnable();
        m_ChooseStuffGuid.Add(chooseitem.Guid);

        slot.SetItemSlotChoose(true);

        ClearProductSlot();

        //显示合成说明过滤界面
        ShowFilter();
    }

    void StuffSlotOnClick(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        int nDeleteIndex = GlobeVar.INVALID_ID;
        for (int i = 0; i < StuffSlotMax; i++ )
        {
            if (i < m_ChooseStuffGuid.Count && i <m_StuffSlotArray.Length)
            {
                if (m_StuffSlotArray[i].gameObject.name == strSlotName)
                {
                    GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
                    if (item != null && item.IsValid())
                    {
                        if (m_ChooseStuffKinds.ContainsKey(item.DataID))
                        {
                            m_ChooseStuffKinds[item.DataID] -= item.StackCount;
                            if (m_ChooseStuffKinds[item.DataID] == 0)
                            {
                                m_ChooseStuffKinds.Remove(item.DataID);
                            }
                            if (BackPackLogic.Instance() != null)
                            {
                                BackPackLogic.Instance().CancelItemSlotChoose(item.Guid);
                            }
                            m_ChooseStuffGuid.Remove(item.Guid);
                            nDeleteIndex = i;
                            break;
                        }
                    }
                }               
            }
        }

        if (nDeleteIndex != GlobeVar.INVALID_ID)
        {
            for (int i = nDeleteIndex; i < StuffSlotMax; i++ )
            {
                if (i < m_ChooseStuffGuid.Count)
                {
                    GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
                    if (item != null && item.IsValid())
                    {
                        m_StuffSlotArray[i].InitInfo_Item(item.DataID, StuffSlotOnClick, item.StackCount.ToString());
                        m_StuffSlotArray[i].ItemSlotEnable();
                    }                    
                }
                else
                {
                    m_StuffSlotArray[i].ClearInfo();
                }
            }            
        }

        ClearProductSlot();

        //更新合成说明过滤界面
        UpdateFilter();
    }

    void OnClickDelNum()
    {
        if (m_CurCombineNum > 1)
        {
            m_CurCombineNum -= 1;
            m_NumChooseInput.value = m_CurCombineNum.ToString();
        }
        else if (m_CurCombineNum == 1)
        {
            m_CurCombineNum = m_MaxCombineCount;
            m_NumChooseInput.value = m_CurCombineNum.ToString();
        }

        SetCombineTotalMoney();
    }

    void OnClickAddNum()
    {
        if (m_CurCombineNum < m_MaxCombineCount)
        {
            m_CurCombineNum += 1;
            m_NumChooseInput.value = m_CurCombineNum.ToString();
        }
        else if (m_CurCombineNum == m_MaxCombineCount)
        {
            m_CurCombineNum = 1;
            m_NumChooseInput.value = m_CurCombineNum.ToString();
        }

        SetCombineTotalMoney();
    }

    public void NumChooseInput()
    {
        bool bCanParse = int.TryParse(m_NumChooseInput.value, out m_CurCombineNum);
        if (bCanParse)
        {
            if (m_CurCombineNum > m_MaxCombineCount)
            {
                m_CurCombineNum = m_MaxCombineCount;
                m_NumChooseInput.value = m_CurCombineNum.ToString();
            }            
        }
    }

    void NumChooseCancel()
    {
        m_RightFormula = null;
        ClearNumChoose();
    }

    void NumChooseOK()
    {
        bool bCanParse = int.TryParse(m_NumChooseInput.value, out m_CurCombineNum);
        if (bCanParse)
        {
            if (m_CurCombineNum > m_MaxCombineCount)
            {
                Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2082}");
            }  
            else
            {
                MakeCombinePacket();
            }
        }
    }

    bool IsGemFormulaSameLevel(Tab_QianKunDaiFormula tabFormula)
    {
        if (tabFormula == null)
        {
            return false;
        }

        int nStuffLevel = tabFormula.GetStuffIDbyIndex(0);
        if (nStuffLevel == GlobeVar.INVALID_ID)
        {
            return false;
        }

        if (GetChooseGemLevelCount() != 1)
        {
            return false;
        }

        if (m_ChooseStuffGuid.Count <= 0)
        {
            return false;
        }

        GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[0]);
        if (item == null || !item.IsValid())
        {
            return false;
        }

        Tab_GemAttr tabGem = TableManager.GetGemAttrByID(item.DataID, 0);
        if (tabGem == null)
        {
            return false;
        }

        if (nStuffLevel != tabGem.Level)
        {
            return false;
        }

        return true;
    }

    bool IsAllStuffRight(Tab_QianKunDaiFormula tabFormula, bool bAllGem)
    {

        // 暂时宝石参与的乾坤袋配方 只有升级和洗宝石两种 全宝石不考虑普通合成
        if (tabFormula.Type == (int)FORMULA_TYPE.TYPE_GEMLEVELUP)
        {
            // 只可能3个同级 同属性宝石
            if (!bAllGem)
            {
                return false;
            }

            // 先判断同等级 选择宝石等级数量为1 且需要等于配方填的等级
            if (false == IsGemFormulaSameLevel(tabFormula))
            {
                return false;
            }

            // 判断同属性
            if (GetChooseGemClassCount() != 1)
            {
                return false;
            }

            return true;
        }
        else if (tabFormula.Type == (int)FORMULA_TYPE.TYPE_GEMREFRESH)
        {
            // 只可能3个同级 属性互不相同宝石
            if (!bAllGem)
            {
                return false;
            }

            // 先判断同等级 选择宝石等级数量为1 且需要等于配方填的等级
            if (false == IsGemFormulaSameLevel(tabFormula))
            {
                return false;
            }

            // 判断属性互不相同
            if (GetChooseGemClassCount() != tabFormula.GetStuffCountbyIndex(0))
            {
                return false;
            }

            return true;
        }
        else
        {
            int nStuffKinds = 0;
            for (int i = 0; i < tabFormula.getStuffIDCount(); i++)
            {
                if (tabFormula.GetStuffIDbyIndex(i) != GlobeVar.INVALID_ID)
                {
                    nStuffKinds += 1;
                }
            }

            if (nStuffKinds != m_ChooseStuffKinds.Count || nStuffKinds <= 0)
            {
                return false;
            }

            for (int i = 0; i < tabFormula.getStuffIDCount(); i++)
            {
                if (!m_ChooseStuffKinds.ContainsKey(tabFormula.GetStuffIDbyIndex(i)) &&
                    tabFormula.GetStuffIDbyIndex(i) != GlobeVar.INVALID_ID)
                {
                    return false;
                }
            }

            return true;
        }
    }

    int GetChooseGemLevelCount()
    {
        List<int> levelkinds = new List<int>();
        foreach(KeyValuePair<int, int> pair in m_ChooseStuffKinds)
        {
            int nGemDataID = pair.Key;
            Tab_GemAttr tabGem = TableManager.GetGemAttrByID(nGemDataID, 0);
            if (tabGem != null)
            {
                if (!levelkinds.Contains(tabGem.Level))
                {
                    levelkinds.Add(tabGem.Level);
                } 
            }
        }
        return levelkinds.Count;
    }

    int GetChooseGemClassCount()
    {
        List<int> classkinds = new List<int>();
        foreach (KeyValuePair<int, int> pair in m_ChooseStuffKinds)
        {
            int nGemDataID = pair.Key;
            Tab_GemAttr tabGem = TableManager.GetGemAttrByID(nGemDataID, 0);
            if (tabGem != null)
            {
                if (!classkinds.Contains(tabGem.AttrClass))
                {
                    classkinds.Add(tabGem.AttrClass);
                }
            }
        }
        return classkinds.Count;
    }

    void ClearNumChoose()
    {
        m_CurCombineNum = 1;
        m_NumChooseInput.value = "";
        m_NumChoose.SetActive(false);
    }

    void MakeCombinePacket()
    {
        if (m_CombineCD)
        {
            return;
        }

        CG_QIANKUNDAI_COMBINE packet = (CG_QIANKUNDAI_COMBINE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_QIANKUNDAI_COMBINE);
        for (int i = 0; i < m_ChooseStuffGuid.Count; i++)
        {
            GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
            if (item != null && item.IsValid())
            {
                packet.AddStuffGUID(item.Guid);
            }
        }

        if (m_CurCombineNum > 1)
        {
            packet.MakeCount = m_CurCombineNum;
        }        
        packet.SendPacket();

        m_RightFormula = null;
        ClearNumChoose();

        m_CombineCD = true;
        InvokeRepeating("CombineCDWait", 1, 999);

        m_ProductPanel.SetActive(true);
    }

    void CombineCDWait()
    {
        m_CombineCD = false;
        CancelInvoke("CombineCDWait");
    }

    public void HandleUpdateItemPacket()
    {
        deleGuid.Clear();

        for (int i = 0; i < m_ChooseStuffGuid.Count; i++)
        {
            GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
            if (item == null || !item.IsValid())
            {
                deleGuid.Add(m_ChooseStuffGuid[i]);
            }
        }

        for (int i = 0; i < deleGuid.Count; i++ )
        {
            m_ChooseStuffGuid.Remove(deleGuid[i]);
        }

        for (int i = 0; i < StuffSlotMax; i++ )
        {
            if (i < m_ChooseStuffGuid.Count)
            {
                GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
                if (item != null && item.IsValid())
                {
                    m_StuffSlotArray[i].InitInfo_Item(item.DataID, StuffSlotOnClick, item.StackCount.ToString());
                    m_StuffSlotArray[i].ItemSlotEnable();
                }
            }
            else
            {
                m_StuffSlotArray[i].ClearInfo();
            }
        }

        ResetChooseStuffKinds();
        
        //更新合成说明过滤界面
        UpdateFilter();
    }

    void ResetChooseStuffKinds()
    {
        m_ChooseStuffKinds.Clear();
        for (int i = 0; i < m_ChooseStuffGuid.Count; i++)
        {
            GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
            if (item != null && item.IsValid())
            {
                if (m_ChooseStuffKinds.ContainsKey(item.DataID))
                {
                    m_ChooseStuffKinds[item.DataID] += item.StackCount;
                }
                else
                {
                    m_ChooseStuffKinds.Add(item.DataID, item.StackCount);
                }
            }
        }
    }

    public bool IsInStuffChoose(GameItem chooseitem)
    {
        if (chooseitem == null || !chooseitem.IsValid())
        {
            return false;
        }

        if (chooseitem.Guid == GlobeVar.INVALID_GUID)
        {
            return false;
        }

        for (int i = 0; i < m_ChooseStuffGuid.Count; ++i)
        {
            GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(m_ChooseStuffGuid[i]);
            if (item != null && item.IsValid())
            {
                if (chooseitem.Guid == item.Guid)
                {
                    return true;
                }
            }
        }

        return false;
    }

    public void HandleQianKunDaiProduct(int nProductDataID)
    {
        if (m_ProductDictionary.ContainsKey(nProductDataID))
        {
            int nProductSlotArrayIndex = m_ProductDictionary[nProductDataID].ProductSlotArrayIndex;
            if (GlobeVar.INVALID_ID < nProductSlotArrayIndex
                && MAX_PRODUCT_SLOT_COUNT > nProductSlotArrayIndex
                && m_ProductSlotArray[nProductSlotArrayIndex].IsInit())
            {
                ++m_ProductDictionary[nProductDataID].ProductCount;
                m_ProductSlotArray[nProductSlotArrayIndex].ClearInfo();
                m_ProductSlotArray[nProductSlotArrayIndex].InitInfo_Item(nProductDataID, OnProductItemClick, m_ProductDictionary[nProductDataID].ProductCount.ToString(), true);
            }
            else
            {
                m_ProductDictionary.Remove(nProductDataID);
            }
        }
        else
        {
            for (int ii = 0; ii < MAX_PRODUCT_SLOT_COUNT; ++ii)
            {
                if (!m_ProductSlotArray[ii].IsInit())
                {
                    m_ProductSlotArray[ii].InitInfo_Item(nProductDataID, OnProductItemClick, "1", true);
                    m_ProductDictionary.Add(nProductDataID, new ProductInfo(ii, 1));
                    break;
                }
            }
        }
    }

    private void OnTabIntroduction(TabButton button)
    {
        if ("Tab1" == button.name)
        {
            m_IntroductionLabel.text = StrDictionary.GetClientDictionaryString("#{2118}");
        }
        else if ("Tab2" == button.name)
        {
            m_IntroductionLabel.text = StrDictionary.GetClientDictionaryString("#{10600}");
        }
        else if ("Tab3" == button.name)
        {
            m_IntroductionLabel.text = StrDictionary.GetClientDictionaryString("#{10601}");
        }
        else if ("Tab4" == button.name)
        {
            m_IntroductionLabel.text = StrDictionary.GetClientDictionaryString("#{10602}");
        }
        else if ("Tab5" == button.name)
        {
            m_IntroductionLabel.text = StrDictionary.GetClientDictionaryString("#{10603}");
        }
        else if ("Tab6" == button.name)
        {
            m_IntroductionLabel.text = StrDictionary.GetClientDictionaryString("#{10604}");
        }
        else if ("Tab7" == button.name)
        {
            m_IntroductionLabel.text = StrDictionary.GetClientDictionaryString("#{10605}");
        }
        else if ("Tab8" == button.name)
        {
            m_IntroductionLabel.text = StrDictionary.GetClientDictionaryString("#{10606}");
        }
    }

    private void OnTabFilter(TabButton button)
    {
        if ("1" == button.name)
        {
            m_FilterContentLabel.text = StrDictionary.GetClientDictionaryString("#{2118}");
        }
        else if ("2" == button.name)
        {
            m_FilterContentLabel.text = StrDictionary.GetClientDictionaryString("#{10600}");
        }
        else if ("3" == button.name)
        {
            m_FilterContentLabel.text = StrDictionary.GetClientDictionaryString("#{10601}");
        }
        else if ("4" == button.name)
        {
            m_FilterContentLabel.text = StrDictionary.GetClientDictionaryString("#{10602}");
        }
        else if ("5" == button.name)
        {
            m_FilterContentLabel.text = StrDictionary.GetClientDictionaryString("#{10603}");
        }
        else if ("6" == button.name)
        {
            m_FilterContentLabel.text = StrDictionary.GetClientDictionaryString("#{10604}");
        }
        else if ("7" == button.name)
        {
            m_FilterContentLabel.text = StrDictionary.GetClientDictionaryString("#{10605}");
        }
        else if ("8" == button.name)
        {
            m_FilterContentLabel.text = StrDictionary.GetClientDictionaryString("#{10606}");
        }

        m_FilterContentBox.size = new Vector3(m_FilterContentBox.size.x, m_FilterContentLabel.printedSize.y, 0);
        m_FilterContentBox.center = new Vector3(m_FilterContentBox.center.x, -m_FilterContentLabel.printedSize.y / 2, 0);
    }

    private void SetCombineTotalMoney()
    {
        if (null != m_RightFormula
            && null != m_NumChooseOK.GetComponent<UIImageButton>()
            && null != Singleton<ObjManager>.Instance.MainPlayer)
        {
            int nTotalMoney = m_RightFormula.Money * m_CurCombineNum;
            if (GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin() >= nTotalMoney)
            {
                m_TotalMoneyLabel.text = nTotalMoney.ToString();
                m_NumChooseOK.GetComponent<UIImageButton>().isEnabled = true;
            }
            else
            {
                m_TotalMoneyLabel.text = "[ff0000]" + nTotalMoney.ToString();
                m_NumChooseOK.GetComponent<UIImageButton>().isEnabled = false;
            }
        }
    }

    //显示合成说明过滤界面
    private void ShowFilter()
    {
        CloseFormulaRoot();
        m_FilterRoot.SetActive(true);
        ShowTabFilter();
    }

    /// <summary>
    /// 配方列中是否包含物品
    /// </summary>
    /// <param name="tabFormula">配方列</param>
    /// <param name="nItemDataID">物品</param>
    /// <returns>是否包含</returns>
    /// 1、配方为空，则不包含；
    /// 2、物品ID无效，则包含；
    private bool IsStuffInFormula(Tab_QianKunDaiFormula tabFormula, int nItemDataID)
    {
        if (null == tabFormula)
        {
            return false;
        }

        if (GlobeVar.INVALID_ID == nItemDataID)
        {
            return true;
        }

        for (int ii = 0; ii < tabFormula.getStuffIDCount(); ++ii)
        {
            int nStuffID = tabFormula.GetStuffIDbyIndex(ii);
            if (GlobeVar.INVALID_ID == nStuffID)
            {
                return false;
            }
            if (nStuffID == nItemDataID)
            {
                return true;
            }
        }
        return false;
    }

    /// <summary>
    /// 配方列中是否包含全部选取的物品
    /// </summary>
    /// <param name="tabFormula">配方列</param>
    /// <returns>是否包含</returns>
    private bool IsAllStuffInFormula(Tab_QianKunDaiFormula tabFormula)
    {
        if (null == tabFormula)
        {
            return false;
        }

        if ((int)FORMULA_TYPE.TYPE_GEMLEVELUP == tabFormula.Type)
        {
            // 只可能3个同级 同属性宝石
            if (!IsAllGem())
            {
                return false;
            }

            // 先判断同等级 选择宝石等级数量为1 且需要等于配方填的等级
            if (false == IsGemFormulaSameLevel(tabFormula))
            {
                return false;
            }

            // 判断同属性
            if (GetChooseGemClassCount() != 1)
            {
                return false;
            }

            return true;
        }
        else
        {
            foreach (KeyValuePair<int, int> pair in m_ChooseStuffKinds)
            {
                if (!IsStuffInFormula(tabFormula, pair.Key))
                {
                    return false;
                }
            }
            return true;
        }
    }

    //根据当前选取的合成材料，显示说明过滤标签页
    //标签页显示规则类似搜索引擎，逐步添加关键字，定位配方
    private void ShowTabFilter()
    {
        List<int> matchFilterTypeList = new List<int>();
        foreach (KeyValuePair<int, List<Tab_QianKunDaiFormula>> pair in TableManager.GetQianKunDaiFormula())
        {
            Tab_QianKunDaiFormula tabFormula = pair.Value[0];
            if (tabFormula == null)
            {
                continue;
            }

            if (IsAllStuffInFormula(tabFormula))
            {
                if (!matchFilterTypeList.Contains(tabFormula.FilterType))
                {
                    matchFilterTypeList.Add(tabFormula.FilterType);
                }
            }
        }

        int nShowTab = GlobeVar.INVALID_ID;
        for (int ii = 1; ii <= MAX_FILTER_TYPE_COUNT; ++ii)
        {
            Transform filterTransform = m_TabFilter.transform.FindChild(ii.ToString());
            if (null != filterTransform)
            {
                if (matchFilterTypeList.Contains(ii))
                {
                    filterTransform.gameObject.SetActive(true);
                    if (GlobeVar.INVALID_ID == nShowTab)
                    {
                        nShowTab = ii;
                    }
                }
                else
                {
                    filterTransform.gameObject.SetActive(false);
                }
            }
        }
        m_TabFilter.GetComponent<UIGrid>().sorted = true;
        m_TabFilter.GetComponent<UIGrid>().repositionNow = true;
        if (GlobeVar.INVALID_ID == nShowTab)
        {
            m_NullIntroduction.SetActive(true);
            CloseFilter();
        }
        else
        {
            if (null != m_RightFormula && matchFilterTypeList.Contains(m_RightFormula.FilterType))
            {
                nShowTab = m_RightFormula.FilterType;
            }
            m_TabFilter.ChangeTab(nShowTab.ToString());
            m_NullIntroduction.SetActive(false);
        }
        matchFilterTypeList.Clear();
    }

    //关闭合成说明过滤界面
    private void CloseFilter()
    {
        m_FilterRoot.SetActive(false);
    }

    //更新合成说明过滤界面
    //适用于以下情况：
    //1、玩家从配方界面取出材料；
    //2、合成完成
    private void UpdateFilter()
    {
        if (0 == m_ChooseStuffGuid.Count)
        {
            CloseFilter();
            if (m_NullIntroduction.activeSelf)
            {
                m_NullIntroduction.SetActive(false);
            }
        }
        else
        {
            ShowFilter();
        }
    }

    public void OnClickProductOK()
    {
        m_ProductPanel.SetActive(false);
        for (int ii = 0; ii < MAX_PRODUCT_SLOT_COUNT; ++ii)
        {
            m_ProductSlotArray[ii].ClearInfo();
        }
        m_ProductDictionary.Clear();
    }

    private void OnProductItemClick(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        if (GlobeVar.INVALID_ID != nItemID)
        {
            GameItem item = new GameItem();
            item.DataID = nItemID;
            if (item.IsValid())
            {
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
    }
}
