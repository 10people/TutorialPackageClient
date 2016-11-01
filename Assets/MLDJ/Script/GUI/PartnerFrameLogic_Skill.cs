using UnityEngine;
using System.Collections;
using Games.Fellow;
using System.Collections.Generic;
using Games.GlobeDefine;
using GCGame.Table;
using GCGame;
using Games.Item;
using System;

public class PartnerFrameLogic_Skill : MonoBehaviour {

    private static PartnerFrameLogic_Skill m_Instance = null;
    public static PartnerFrameLogic_Skill Instance()
    {
        return m_Instance;
    }

    public enum LEVELUP_WINDOWTYPE
    {
        TYPE_INVALID,
        TYPE_TALENT,
        TYPE_ELEMENT,
    }

    public PartnerSkillItemNew[] m_TalentSkill;
    public PartnerSkillItemNew[] m_ElementSkill;

    public GameObject m_SkillInfo;
    public GameObject m_SkillLevelUpWindow;

    public PartnerSkillLevelUpItem m_SkillCurLevel;
    public PartnerSkillLevelUpItem m_SkillNextLevel;
    public ItemSlotLogic m_SkillBookSlot;
    public UILabel m_SkillLevelUpCostName;
    public UISlider m_SkillLevelUpCostSprite;
    public UILabel m_SkillLevelUpCostLabel;
    //public GameObject m_TalentSkillBookBtn;

    public GameObject m_SkillChooseWindow;
    public GameObject m_SkillChooseGrid;
    public GameObject m_SkillChooseItem;
    /// <summary>
    /// 学习技能界面
    /// </summary>
    public GameObject m_LearnSkillWindow;

    //public GameObject m_TalentSkillBookWindow;
    //public GameObject m_TalentSkillBookGrid;
    //public GameObject m_TalentSkillBookItem;

    public UISprite m_NewElementSkillIcon;
    public UILabel m_NewElementSkillName;
    public PartnerLearnElementSkillLogic[] m_OldElementSkill;
    public UIButton m_LearnSkillOpenButton;

    // widget new added in learn skill panel
    public GameObject m_LearnSkillCloseButton;
    public GameObject m_LearnSkillAddTips;
    public GameObject m_LearnSkillAddSkillBook;
    public GameObject m_UpgradeCloseButton;

    public GameObject m_GetInfoBtn;
    public GameObject m_GetInfoDialog;
    public GameObject m_GetInfoGrid;
    public GameObject m_GetInfoCloseBg;
    public GameObject m_GetInfoItemTemplate;

    // 技能升级特效
    public GameObject skillLvUpEffect;
    // 技能学习特效
    public GameObject skillLearnEffect;
    // 升级技能书显示区域
    public GameObject skillbookArea;

    private Fellow m_Fellow;
    private int m_LevelUpTalentSkillChooseBuffer = GlobeVar.INVALID_ID;
    private Dictionary<int, int> m_TalentSkillBookBuffer = new Dictionary<int, int>();
    private int m_LevelUpSkillChooseBuffer = GlobeVar.INVALID_ID;
    /// <summary>
    /// 选定的学习技能书Id
    /// </summary>
    private int m_LearnSkillChooseBuffer = GlobeVar.INVALID_ID;
    private LEVELUP_WINDOWTYPE m_LevelUpWindowType = LEVELUP_WINDOWTYPE.TYPE_INVALID;

    /// <summary>
    /// 发送消息回调
    /// </summary>
    Action sendPackageCallback = null;
    int[] oldSkillId = new int[3];

    void OnEnable()
    {
        m_Instance = this;
        UIEventListener.Get(m_LearnSkillOpenButton.gameObject).onClick = OnLearnSkillClick;
        UIEventListener.Get(m_LearnSkillCloseButton.gameObject).onClick = CloseLearnSkillDialog;
        UIEventListener.Get(m_LearnSkillAddSkillBook.gameObject).onClick = OpenChooseSkillBookDialog;
        UIEventListener.Get(m_UpgradeCloseButton.gameObject).onClick = CloseUpgradeSkillDialog;
        UIEventListener.Get(m_GetInfoBtn).onClick = ShowGetInfo;
        UIEventListener.Get(m_GetInfoCloseBg).onClick = HideGetInfo;
    }

    void OnDisable()
    {
        m_Instance = null;

        m_Fellow = null;
        m_LevelUpTalentSkillChooseBuffer = GlobeVar.INVALID_ID;
        m_TalentSkillBookBuffer.Clear();
        m_LevelUpSkillChooseBuffer = GlobeVar.INVALID_ID;
        m_LearnSkillChooseBuffer = GlobeVar.INVALID_ID;
    }

    public void UpdateFellowInfo(Fellow fellow)
    {
        if (fellow == null)
        {
            return;
        }

        if (fellow.IsValid() == false)
        {
            return;
        }
		m_LevelUpSkillChooseBuffer = GlobeVar.INVALID_ID;
        m_SkillInfo.SetActive(true);
        m_SkillChooseWindow.SetActive(false);
        m_LevelUpWindowType = LEVELUP_WINDOWTYPE.TYPE_INVALID;

        UpdateFellowInfo_TalentSkill(fellow);
        UpdateFellowInfo_ElementSkill(fellow);

        m_Fellow = fellow;
        if (sendPackageCallback != null)
        {
            sendPackageCallback();
            sendPackageCallback = null;
        }
    }

    /// <summary>
    /// 天赋技能
    /// </summary>
    /// <param name="fellow"></param>
    void UpdateFellowInfo_TalentSkill(Fellow fellow)
    {
        int i = 0;
        foreach (KeyValuePair<int, int> pair in fellow.TallentSkill)
        {
            if (pair.Key != GlobeVar.INVALID_ID)
            {
                if (i < m_TalentSkill.Length && i < Fellow.FELLOW_TALLENTSKILL_COUNT && i < Fellow.FELLOW_TALLENTSKILL_OPENCOUNT)
                {
                    m_TalentSkill[i].gameObject.SetActive(true);
                    m_TalentSkill[i].InitTallentSkill(pair.Key, pair.Value);
                    i++;
                }
                else
                {
                    break;
                }
            }            
        }
        for (; i < m_TalentSkill.Length; i ++ )
        {
            m_TalentSkill[i].gameObject.SetActive(false);
        }
        UIGrid grid = m_TalentSkill[0].GetComponentInParent<UIGrid>();
        if (grid != null)
        {
            grid.Reposition();
        }
    }

    void UpdateFellowInfo_ElementSkill(Fellow fellow)
    {
        for (int i = 0; i < m_ElementSkill.Length && i < Fellow.FELLOW_ELEMENTSKILL_COUNT && i < Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT; i++ )
        {
            m_ElementSkill[i].InitElementSkill_Hold(fellow.GetElementSkillId(i), i, fellow.Level);
        }
    }

    public void OnTalentUpClick(int skillid)
    {
        //Tab_CabalFellowTallentSkill tabCurSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
        //if (tabCurSkill == null)
        //{
        //    return;
        //}

        //if (false == m_Fellow.TallentSkill.ContainsKey(skillid))
        //{
        //    return;
        //}

        //m_SkillInfo.SetActive(false);
        //m_SkillLevelUpWindow.SetActive(true);
        //m_LevelUpWindowType = LEVELUP_WINDOWTYPE.TYPE_TALENT;

        //m_TalentSkillBookBtn.SetActive(true);

        //m_SkillCurLevel.InitTallentSkill(skillid);

        //m_SkillBookSlot.InitInfo_Item(tabCurSkill.SkillBook, ItemSlotLogic.OnClickOpenTips);
        //m_SkillLevelUpCostName.text = "EXP";
        //m_SkillLevelUpCostLabel.text = m_Fellow.TallentSkill[skillid].ToString() + "/" + tabCurSkill.LevelUpExp.ToString();
        //if (tabCurSkill.LevelUpExp > 0)
        //{
        //    m_SkillLevelUpCostSprite.fillAmount = (float)m_Fellow.TallentSkill[skillid] / (float)tabCurSkill.LevelUpExp;
        //}

        //// 先来个默认的下一级技能 和当期技能一样
        //m_SkillNextLevel.InitTallentSkill(skillid);

        //m_LevelUpTalentSkillChooseBuffer = skillid;

        //if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(tabCurSkill.SkillBook) > 0)
        //{
        //    m_TalentSkillBookBuffer.Add(tabCurSkill.SkillBook, 1);

        //    Tab_CabalFellowTallentSkillBook tabBook = TableManager.GetCabalFellowTallentSkillBookByID(tabCurSkill.SkillBook, 0);
        //    if (tabBook == null)
        //    {
        //        return;
        //    }

        //    m_SkillLevelUpCostLabel.text = (m_Fellow.TallentSkill[skillid] + tabBook.AddExp).ToString() + "/" + tabCurSkill.LevelUpExp;
        //    if (tabCurSkill.LevelUpExp > 0)
        //    {
        //        m_SkillLevelUpCostSprite.fillAmount = (float)(m_Fellow.TallentSkill[skillid] + tabBook.AddExp) / (float)tabCurSkill.LevelUpExp;
        //    }

        //    // 如果背包中有对应技能书 默认选一个 刷新下一级技能信息
        //    int nNewExp = m_Fellow.TallentSkill[skillid] + tabBook.AddExp;
        //    int nNextSkillId = FellowTool.GetFellowTalentSkillNewLevel(skillid, ref nNewExp);
        //    m_SkillNextLevel.InitTallentSkill(nNextSkillId);
        //}
    }

    void OnTalentSkillChooseBookClick()
    {
        //Utils.CleanGrid(m_TalentSkillBookGrid);

        //m_TalentSkillBookWindow.SetActive(true);

        //int index = 0;

        //// 如果背包里有当前技能适用的技能书 优先加载
        //Tab_CabalFellowTallentSkill tabSkill = TableManager.GetCabalFellowTallentSkillByID(m_LevelUpTalentSkillChooseBuffer, 0);
        //if (tabSkill == null)
        //{
        //    return;
        //}

        //if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(tabSkill.SkillBook) > 0)
        //{
        //    string itemName = "00";
        //    GameObject skillbookitem = Utils.BindObjToParent(m_TalentSkillBookItem, m_TalentSkillBookGrid, itemName);
        //    if (skillbookitem == null || skillbookitem.GetComponent<PartnerTalentSkilBookItemLogic>() == null)
        //    {
        //        return;
        //    }

        //    if (m_TalentSkillBookBuffer.ContainsKey(tabSkill.SkillBook))
        //    {
        //        skillbookitem.GetComponent<PartnerTalentSkilBookItemLogic>().Init(tabSkill.SkillBook, m_TalentSkillBookBuffer[tabSkill.SkillBook]);
        //    }
        //    else
        //    {
        //        skillbookitem.GetComponent<PartnerTalentSkilBookItemLogic>().Init(tabSkill.SkillBook);
        //    }

        //    index += 1;
        //}

        //for (int i = 0; i < GameManager.gameManager.PlayerDataPool.BackPack.GetItemCount(); i++ )
        //{
        //    GameItem item = GameManager.gameManager.PlayerDataPool.BackPack.GetItem(i);
        //    if (item == null || item.IsValid() || false == item.IsFellowTalentSkillBook())
        //    {
        //        continue;
        //    }

        //    string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
        //    GameObject skillbookitem = Utils.BindObjToParent(m_TalentSkillBookItem, m_TalentSkillBookGrid, itemName);
        //    if (skillbookitem == null || skillbookitem.GetComponent<PartnerTalentSkilBookItemLogic>() == null)
        //    {
        //        continue;
        //    }

        //    if (m_TalentSkillBookBuffer.ContainsKey(item.DataID))
        //    {
        //        skillbookitem.GetComponent<PartnerTalentSkilBookItemLogic>().Init(item.DataID, m_TalentSkillBookBuffer[item.DataID]);
        //    }
        //    else
        //    {
        //        skillbookitem.GetComponent<PartnerTalentSkilBookItemLogic>().Init(item.DataID);
        //    }

        //    index += 1;
        //}

        //if (m_TalentSkillBookGrid.GetComponent<UIGrid>() != null)
        //{
        //    m_TalentSkillBookGrid.GetComponent<UIGrid>().Reposition();
        //}
    }

    void OnTalentSkillBookOKClick()
    {
        //m_TalentSkillBookBuffer.Clear();

        //PartnerTalentSkilBookItemLogic[] aItem = m_TalentSkillBookGrid.GetComponentsInChildren<PartnerTalentSkilBookItemLogic>();
        //for (int i = 0; i < aItem.Length; i++ )
        //{
        //    if (aItem[i].UseCount > 0)
        //    {
        //        m_TalentSkillBookBuffer.Add(aItem[i].SkillBookId, aItem[i].UseCount);
        //    }
        //}

        //Tab_CabalFellowTallentSkill tabSkill = TableManager.GetCabalFellowTallentSkillByID(m_LevelUpTalentSkillChooseBuffer, 0);
        //if (tabSkill == null)
        //{
        //    return;
        //}

        //if (false == m_Fellow.TallentSkill.ContainsKey(m_LevelUpTalentSkillChooseBuffer))
        //{
        //    return;
        //}

        //int nTotalExp = m_Fellow.TallentSkill[m_LevelUpTalentSkillChooseBuffer];
        //foreach (KeyValuePair<int, int> pair in m_TalentSkillBookBuffer)
        //{
        //    Tab_CabalFellowTallentSkillBook tabBook = TableManager.GetCabalFellowTallentSkillBookByID(pair.Key, 0);
        //    if (tabBook == null)
        //    {
        //        break;
        //    }

        //    if (pair.Key == tabSkill.SkillBook)
        //    {
        //        nTotalExp += tabBook.AddExp * pair.Value;
        //    }
        //    else
        //    {
        //        nTotalExp += tabBook.AddExp / 2 * pair.Value;
        //    }
        //}

        //m_SkillLevelUpCostLabel.text = nTotalExp.ToString() + "/" + tabSkill.LevelUpExp;
        //if (tabSkill.LevelUpExp > 0)
        //{
        //    m_SkillLevelUpCostSprite.fillAmount = (float)nTotalExp / (float)tabSkill.LevelUpExp;
        //}

        //// 已选择OK技能书 用技能书总经验 刷新下一级技能预览 可能跳级
        //int nNewExp = nTotalExp;
        //int nNextSkillId = FellowTool.GetFellowTalentSkillNewLevel(m_LevelUpTalentSkillChooseBuffer, ref nNewExp);
        //m_SkillNextLevel.InitTallentSkill(nNextSkillId);

        //m_TalentSkillBookWindow.SetActive(false);
    }

    void OnTalentSkillBookCancelClick()
    {
        //m_TalentSkillBookWindow.SetActive(false);
    }

    void OnTalentSkillLevelUpOKClick()
    {
        //if (m_TalentSkillBookBuffer.Count <= 0)
        //{
        //    if (NewPlayerGuidLogic.Instance())
        //    {
        //        NewPlayerGuidLogic.CloseWindow();
        //    }
        //    GUIData.AddNotifyData("#{10343}");
        //    return;
        //}

        //CG_FELLOW_TALENTSKILL_LEVELUP pak = (CG_FELLOW_TALENTSKILL_LEVELUP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_TALENTSKILL_LEVELUP);
        //pak.SetGuid(m_Fellow.Guid);
        //pak.SetSkillid(m_LevelUpTalentSkillChooseBuffer);
        //foreach(KeyValuePair<int, int> pair in m_TalentSkillBookBuffer)
        //{
        //    pak.AddSkillbookid(pair.Key);
        //    pak.AddSkillbookcount(pair.Value);
        //}
        //pak.SendPacket();

        //m_LevelUpTalentSkillChooseBuffer = GlobeVar.INVALID_ID;
        //m_TalentSkillBookBuffer.Clear();

        //if (PartnerFrameLogic_Develop.Instance() && PartnerFrameLogic_Develop.Instance().NewPlayerGuideFlag_Step == 2)
        //{
        //    PartnerFrameLogic_Develop.Instance().NewPlayerGuideFlag_Step = -1;
        //    PartnerFrameLogic.Instance().NewPlayerGuide(1);
        //}
    }

    /// <summary>
    /// 打开元素技能升级界面
    /// </summary>
    /// <param name="skillid"></param>
    public void OnElementSkillLevelUpClick(int skillid)
    {
        Tab_CabalFellowElementSkill tabCurSkill = TableManager.GetCabalFellowElementSkillByID(skillid, 0);
        if (tabCurSkill == null)
        {
            return;
        }

        m_SkillLevelUpWindow.SetActive(true);
        m_LevelUpWindowType = LEVELUP_WINDOWTYPE.TYPE_ELEMENT;

        //m_TalentSkillBookBtn.SetActive(false);

        m_SkillCurLevel.InitElementSkill(skillid);

        m_SkillLevelUpCostName.text = StrDictionary.GetClientDictionaryString("#{10193}");

        int nNextSkillId = tabCurSkill.NextSkillId;
        UIImageButton upgradeBtn = skillbookArea.transform.parent.FindChild("OKButton").GetComponent<UIImageButton>();
        if (nNextSkillId == GlobeVar.INVALID_ID)
        {
            // 满级
            m_SkillNextLevel.InitElementSkill(skillid);
            skillbookArea.SetActive(false);
            upgradeBtn.isEnabled = false;
        }
        else
        {
            // 非满级
            skillbookArea.SetActive(true);
            upgradeBtn.isEnabled = true;
            m_SkillBookSlot.InitInfo_Item(tabCurSkill.NeedBookId, ItemSlotLogic.OnClickOpenTips);
            if (tabCurSkill.NeedBookCount > 0)
            {
                m_SkillLevelUpCostSprite.value = (float)GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(tabCurSkill.NeedBookId) / (float)tabCurSkill.NeedBookCount;
            }
            m_SkillLevelUpCostLabel.text = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(tabCurSkill.NeedBookId).ToString() + "/" + tabCurSkill.NeedBookCount.ToString();

            m_SkillNextLevel.InitElementSkill(tabCurSkill.NextSkillId);
            InitGetInfoDialog(tabCurSkill.NeedBookId);
        }

        m_LevelUpSkillChooseBuffer = skillid;
    }

    /// <summary>
    /// 初始化获取方式
    /// </summary>
    /// <param name="bookId"></param>
    void InitGetInfoDialog(int bookId)
    {
        Utils.CleanGrid(m_GetInfoGrid);
        Tab_UsableItem book = TableManager.GetUsableItemByID(bookId, 0);
        if (book == null) return;

        List<int> wayIdList = Utils.GetWayIdByWayIds(book.UseParamE.ToString());
        if (wayIdList.Count == 0)
        {
            Debug.LogWarning("No get info skill book, id = " + bookId);
            m_GetInfoBtn.SetActive(false);
            return;
        }
        for (int i = 0; i < wayIdList.Count; i++)
        {
            Tab_ItemGetWay way = TableManager.GetItemGetWayByID(wayIdList[i], 0);
            if (way == null)
            {
                Debug.LogWarning("Error ItemGetWay, item id = " + bookId + ", ItemGetWay id = " + wayIdList[i]);
                continue;
            }
            GameObject obj = Utils.BindObjToParent(m_GetInfoItemTemplate, m_GetInfoGrid);
            GetInfoItem item = obj.GetComponent<GetInfoItem>();
            item.SetData(way);
        }
        m_GetInfoGrid.GetComponent<UIGrid>().Reposition();
    }

    void OnElementSkillLevelUpOKClick()
    {
        if (m_Fellow == null)
        {
            return;
        }

        if (m_LevelUpSkillChooseBuffer == GlobeVar.INVALID_ID)
        {
            return;
        }

        sendPackageCallback = OnLvUpSkillOK;

        CG_FELLOW_ELEMENTSKILL_LEVELUP pak = (CG_FELLOW_ELEMENTSKILL_LEVELUP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_ELEMENTSKILL_LEVELUP);
        pak.SetGuid(m_Fellow.Guid);
        pak.SetSkillid(m_LevelUpSkillChooseBuffer);
        pak.SendPacket();

        // get the next skill id
        int nNextSkillId = TableManager.GetCabalFellowElementSkillByID(m_LevelUpSkillChooseBuffer, 0).NextSkillId;
        m_LevelUpSkillChooseBuffer = nNextSkillId;
    }

    /// <summary>
    /// 成功升级技能
    /// </summary>
    void OnLvUpSkillOK()
    {
        // 刷新界面
        OnElementSkillLevelUpClick(m_LevelUpSkillChooseBuffer);
        // 播放技能升级特效
        skillLvUpEffect.SetActive(true);
        StartCoroutine(HideEffect());
    }

    /// <summary>
    /// 点击学习技能按钮，打开学习技能UI
    /// </summary>
    void OnLearnSkillClick(GameObject go)
    {
        for (int i = 0; i < m_OldElementSkill.Length && i < Fellow.FELLOW_ELEMENTSKILL_COUNT && i < Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT; i++)
        {
            int skillId = m_Fellow.GetElementSkillId(i);
            oldSkillId[i] = skillId;
            m_OldElementSkill[i].Init(skillId, i, m_Fellow.Level);
        }
        m_LearnSkillWindow.SetActive(true);
        ClearSkillLearnDialog();
        if (PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step == 13)
        {
            PartnerFrameLogic.Instance().NewPlayerGuide(4);
        }
        return;
    }

    void CloseLearnSkillDialog(GameObject go)
    {
        m_LearnSkillWindow.SetActive(false);
    }

    void CloseUpgradeSkillDialog(GameObject go)
    {
        m_SkillLevelUpWindow.SetActive(false);
    }

    /// <summary>
    /// 打开选择学习技能书界面
    /// </summary>
    /// <param name="go"></param>
    void OpenChooseSkillBookDialog(GameObject go)
    {
        Utils.CleanGrid(m_SkillChooseGrid);

		List<Tab_CabalFellowElementSkillBook> FellowSkillBookList = GameManager.gameManager.PlayerDataPool.BackPack.GetSkillLearnBooksByElementType (m_Fellow.ElementAttr);
		if (FellowSkillBookList.Count <= 0) 
		{
			GUIData.AddNotifyData("#{11500}");
			return;
		}
		//选择技能书界面
        m_SkillChooseWindow.SetActive(true);

        int index = 0;
        //foreach (Tab_CabalFellowElementSkillBook book in GameManager.gameManager.PlayerDataPool.BackPack.GetSkillLearnBooksByElementType(m_Fellow.ElementAttr))
		foreach (Tab_CabalFellowElementSkillBook book in FellowSkillBookList)
        {
            if (m_Fellow.IsHaveSkillId(book.SkillId))
            {
                continue;
            }
            Tab_CabalFellowElementSkill tabSkill = TableManager.GetCabalFellowElementSkillByID(book.SkillId, 0);
            if (tabSkill == null)
            {
                continue;
            }

            Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(book.SkillId, 0);
            if (tabSkillEx == null)
            {
                continue;
            }

            Tab_SkillBase tabBase = TableManager.GetSkillBaseByID(tabSkillEx.BaseId, 0);
            if (tabBase == null)
            {
                continue;
            }
            string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
            GameObject SkillItem = Utils.BindObjToParent(m_SkillChooseItem, m_SkillChooseGrid, itemName);
            if (SkillItem != null && SkillItem.GetComponent<PartnerSkillChooseItemLogic>() != null)
            {
                SkillItem.GetComponent<PartnerSkillChooseItemLogic>().Init(book);
            }
            index += 1;
        }

        if (m_SkillChooseGrid.GetComponent<UIGrid>() != null)
        {
            m_SkillChooseGrid.GetComponent<UIGrid>().Reposition();
        }

        if (PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step == 4)
        {
            PartnerFrameLogic.Instance().NewPlayerGuide(5);
        }
    }

    /// <summary>
    /// 完成选择技能书
    /// </summary>
    /// <param name="book"></param>
    public void OnSkillChooseOKClick(Tab_CommonItem book)
    {
        m_SkillChooseWindow.SetActive(false);
        m_NewElementSkillIcon.spriteName = book.Icon;
        m_NewElementSkillIcon.gameObject.SetActive(true);
        m_NewElementSkillName.text = book.Name;
        m_NewElementSkillName.gameObject.SetActive(true);
        m_LearnSkillAddTips.SetActive(false);
        m_LearnSkillChooseBuffer = book.Id;
        if (PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step == 5)
        {
            PartnerFrameLogic.Instance().NewPlayerGuide(6);
        }
    }

    void ClearSkillLearnDialog()
    {
        m_NewElementSkillIcon.gameObject.SetActive(false);
        m_NewElementSkillName.gameObject.SetActive(false);
        m_LearnSkillAddTips.SetActive(true);
        m_LearnSkillChooseBuffer = GlobeVar.INVALID_ID;
        for (int i = 0; i < m_OldElementSkill.Length && i < Fellow.FELLOW_ELEMENTSKILL_COUNT && i < Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT; i++)
        {
            int skillId = m_Fellow.GetElementSkillId(i);
            oldSkillId[i] = skillId;
            m_OldElementSkill[i].Init(m_Fellow.GetElementSkillId(i), i, m_Fellow.Level);
        }
    }

    void OnSkillChooseCancelClick()
    {
        m_SkillChooseWindow.SetActive(false);
    }

    /// <summary>
    /// 学习新技能
    /// </summary>
    void OnLearSkillOKClick()
    {
        if (m_Fellow == null)
        {
            return;
        }

        if (m_LearnSkillChooseBuffer == GlobeVar.INVALID_ID)
        {
            GUIData.AddNotifyData("#{11471}");
            return;
        }

        int nValidCount = 0;
        int nLockCount = 0;
        for (int i = 0; i < m_OldElementSkill.Length; i++ )
        {
            if (m_OldElementSkill[i].ValidSlot)
            {
                if (m_OldElementSkill[i].Locked)
                {
                    nLockCount += 1;
                }
                else
                {
                    nValidCount += 1;
                }
            }
        }

        if (nValidCount <= 0)
        {
            GUIData.AddNotifyData("#{10528}");
            return;
        }

        if (nLockCount > 0)
        {
            string szContent = StrDictionary.GetClientDictionaryString("#{10529}", nLockCount, nLockCount * Fellow.FELLOW_ELEMENTSKILL_LOCKCOST);
            MessageBoxLogic.OpenOKCancelBox(szContent, "", ConfirmLearnElementSkill);
        }
        else
        {
            ConfirmLearnElementSkill();
        }
    }

    void ConfirmLearnElementSkill()
    {
        sendPackageCallback = OnLearnSkillOK;

        CG_FELLOW_ELEMENTSKILL_LEARN pak = (CG_FELLOW_ELEMENTSKILL_LEARN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_ELEMENTSKILL_LEARN);
        pak.SetGuid(m_Fellow.Guid);
        pak.SetSkillid(m_LearnSkillChooseBuffer);// 改成学习技能书Id
        for (int i = 0; i < m_OldElementSkill.Length; i++)
        {
            pak.AddLocked(m_OldElementSkill[i].Locked ? 1 : 0);
        }
        pak.SendPacket();
    }

    PartnerLearnElementSkillLogic playItem = null;
    /// <summary>
    /// 成功学习技能
    /// </summary>
    void OnLearnSkillOK()
    {
        skillLearnEffect.SetActive(true);
        for (int i = 0; i < m_OldElementSkill.Length && i < Fellow.FELLOW_ELEMENTSKILL_COUNT && i < Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT; i++)
        {
            int skillId = m_Fellow.GetElementSkillId(i);
            if (skillId != oldSkillId[i])
            {
                playItem = m_OldElementSkill[i];
                playItem.skillLeardEffect.SetActive(true);
                break;
            }
        }
        if (PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step == 6)
        {
            PartnerFrameLogic.Instance().NewPlayerGuide(7);
        }
        StartCoroutine(HideEffect());
    }

    IEnumerator HideEffect()
    {
        yield return new WaitForSeconds(1.5f);
        if (playItem != null)
        {
            // 是学习技能
            skillLearnEffect.SetActive(false);
            playItem.skillLeardEffect.SetActive(false);
            playItem = null;
            ClearSkillLearnDialog();
        }
        else
        {
            // 是升级技能
            skillLvUpEffect.SetActive(false);
        }
        yield break;
    }

    void OnSkillLevelUpOKClick()
    {
       // 天赋技能改成随宠物等级提升而自动提升了
       if (m_LevelUpWindowType == LEVELUP_WINDOWTYPE.TYPE_ELEMENT)
        {
            OnElementSkillLevelUpOKClick();
        }
    }

    void ShowGetInfo(GameObject go)
    {
        // get info

        m_GetInfoDialog.SetActive(true);
    }

    void HideGetInfo(GameObject go)
    {
        m_GetInfoDialog.SetActive(false);
    }
}
