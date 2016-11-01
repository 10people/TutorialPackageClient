using UnityEngine;
using System.Collections;
using Games.Fellow;
using GCGame;
using System.Collections.Generic;
using System;
using Games.GlobeDefine;
using GCGame.Table;
using Games.Item;
public class PartnerFrameLogic_Star : MonoBehaviour {
    const int FELLOW_PACK_DEFAULT_NUM = 17;

    private static PartnerFrameLogic_Star m_Instance = null;
    public static PartnerFrameLogic_Star Instance()
    {
        return m_Instance;
    }

    public GameObject m_StarAttr;
    public GameObject m_Tips;
    public GameObject m_StarButton;
    public GameObject m_CloseBg;

    public UISprite[] m_CurStarPic;

    public GameObject m_MaterialPartnerGrid;
    public GameObject m_MaterialPartnerItem;
    public UILabel m_MaterialPartnerExpLabel;
    public UISprite m_MaterialPartnerExpSprite;
    public GameObject m_MaterialPartnerLabel;
    public UILabel m_MaterialPartnerExpCount;

    public GameObject m_ChooseMaterialAutoMenu;
    public GameObject m_ChooseMaterialWindow;
    public GameObject m_ChooseMaterialGrid;
    public UISprite m_ChooseMaterialExpSprite;
    public UILabel m_ChooseMaterialExpCount;
    public GameObject m_PartnerChooseItem;

    public UILabel m_AttackLabel;
    public UILabel m_HitLabel;
    public UILabel m_CriticalLabel;
    public UILabel m_GuardLabel;
    public UILabel m_BlessLabel;

    public UILabel m_AttackLabelNext;
    public UILabel m_HitLabelNext;
    public UILabel m_CriticalLabelNext;
    public UILabel m_GuardLabelNext;
    public UILabel m_BlessLabelNext;

    public GameObject m_ChooseMaterialTitle;
    public GameObject m_ChoosePanel;
    public UILabel m_AutoButtonLabel;
    public PartnerFrameLogic_FellowDetail m_FellowDetail;
    public GameObject starUpgradeEffect;

    private Fellow m_Fellow;
    private List<UInt64> m_ChoosePartnerGuid = new List<UInt64>();
    private int m_ChoosePartnerExp = 0;

    void OnEnable()
    {
        m_Instance = this;
    }

    void OnDisable()
    {
        m_Instance = null;

        m_Fellow = null;
        Utils.CleanGrid(m_ChooseMaterialGrid);
        Utils.CleanGrid(m_MaterialPartnerGrid);
        m_ChoosePartnerGuid.Clear();
        m_ChoosePartnerExp = 0;
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

        m_AttackLabel.text = fellow.GetAttackValue().ToString();
        m_HitLabel.text = fellow.GetHitValue().ToString();
        m_CriticalLabel.text = fellow.GetCriticalValue().ToString();
        m_GuardLabel.text = fellow.GetGuardValue().ToString();
        m_BlessLabel.text = fellow.GetBlessValue().ToString();

        m_AttackLabelNext.text = StrDictionary.GetClientDictionaryString("#{11202}", fellow.GetAttackValueByStar(fellow.StarLevel + 1) - fellow.GetAttackValue());
        m_HitLabelNext.text = StrDictionary.GetClientDictionaryString("#{11202}", fellow.GetHitValueByStar(fellow.StarLevel + 1) - fellow.GetHitValue());
        m_CriticalLabelNext.text = StrDictionary.GetClientDictionaryString("#{11202}", fellow.GetCriticalValueByStar(fellow.StarLevel + 1) - fellow.GetCriticalValue());
        m_GuardLabelNext.text = StrDictionary.GetClientDictionaryString("#{11202}", fellow.GetGuardValueByStar(fellow.StarLevel + 1) - fellow.GetGuardValue());
        m_BlessLabelNext.text = StrDictionary.GetClientDictionaryString("#{11202}", fellow.GetBlessValueByStar(fellow.StarLevel + 1) - fellow.GetBlessValue());

        if (fellow.GetFellowType() == (int)FELLOWTYPE.BABY)
        {
            m_StarAttr.SetActive(false);
            //m_BabyFellowNotice.SetActive(true);
        }
        else
        {
            UpdateFellowInfo_CurStar(fellow);
            //UpdateFellowInfo_NextStar(fellow, 0);
            UpdateFellowInfo_Material();

            m_StarAttr.SetActive(true);
            //m_BabyFellowNotice.SetActive(false);
        }

        m_Fellow = fellow;
    }

    void UpdateFellowInfo_CurStar(Fellow fellow)
    {
        int nStarCount = fellow.StarLevel > 0 ? ((fellow.StarLevel - 1) % 12) + 1 : 0;
        for (int i = 0; i < m_CurStarPic.Length; i++)
        {
            if (i < nStarCount)
            {
                //m_CurStarPic[i].spriteName = FellowTool.GetChatFellowStarQualityPic(fellow.StarLevel);
                //m_CurStarPic[i].MakePixelPerfect();
               // m_CurStarPic[i].gameObject.SetActive(true);
				m_CurStarPic[i].color = ItemTool.GetStarColorRGB(fellow.StarLevel);
            }
            else
            {
               // m_CurStarPic[i].gameObject.SetActive(false);
				m_CurStarPic[i].color = ItemTool.GetStarColorRGB(fellow.StarLevel-12);
            }
        }
    }

    void UpdateFellowInfo_NextStar(Fellow fellow, int addExp)
    {
        int nNewStarExp = fellow.StarExp + addExp;
//        int nTotalStarExp = nNewStarExp;
        int addLevel = FellowTool.GetFellowAddStarLevel(fellow.StarLevel, nNewStarExp);

//        int nNewStarLevel = fellow.StarLevel + addLevel;

        if (fellow.GetCurStarExpMax() > 0)
        {
            //m_MaterialPartnerExpLabel.text = nNewStarExp.ToString() + "/" + fellow.GetCurStarExpMax();
            m_MaterialPartnerExpSprite.fillAmount = (float)nNewStarExp / (float)fellow.GetCurStarExpMax();
        }
        else
        {
            //m_MaterialPartnerExpLabel.text = "";
            m_MaterialPartnerExpSprite.fillAmount = 0;
        }

        if (addLevel > 0)
        {
            m_MaterialPartnerExpCount.gameObject.SetActive(true);
            m_MaterialPartnerExpCount.text = "x" + addLevel.ToString();
        }
        else
        {
            m_MaterialPartnerExpCount.gameObject.SetActive(false);
        }
    }

    void UpdateFellowInfo_Material()
    {
        // 只加载个加宠物按钮
        Utils.CleanGrid(m_MaterialPartnerGrid);

        if (false == CreateAddMaterialBtn())
        {
            return;
        }

        if (m_MaterialPartnerGrid.GetComponent<UIGrid>() != null)
        {
            m_MaterialPartnerGrid.GetComponent<UIGrid>().Reposition();
        }

        //m_MaterialPartnerLabel.SetActive(true);
    }

    /// <summary>
    /// 打开选择宠物窗口
    /// </summary>
    public void OnAddMaterialClick()
    {
        if (m_Fellow == null)
        {
            return;
        }
        m_AutoButtonLabel.text = StrDictionary.GetClientDictionaryString("#{10180}");//快速选择
        m_ChooseMaterialTitle.SetActive(false);
        m_ChoosePanel.SetActive(true);
        m_ChooseMaterialAutoMenu.SetActive(false);

        m_Tips.SetActive(false);
        m_StarButton.SetActive(false);
        UIEventListener.Get(m_CloseBg).onClick = OnChooseMaterialCancelClick;
        m_ChooseMaterialWindow.SetActive(true);
        InitMaterialPartnerGrid_Auto(-1);
        if (PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step == 16)
        {
            PartnerFrameLogic.Instance().NewPlayerGuide(17);
        }
    }

    /// <summary>
    /// 选择被吃的宝宝
    /// </summary>
    /// <param name="item"></param>
    public void OnChooseMaterialClick(MaterialPartnerItemLogic item)
    {
        if (item.Choose)
        {
            m_ChoosePartnerGuid.Add(item.GetGuid());
            m_ChoosePartnerExp += item.StarExp;
        }
        else
        {
            m_ChoosePartnerGuid.Remove(item.GetGuid());
            m_ChoosePartnerExp -= item.StarExp;
        }
        ShowFellowDetail(item.m_fellow);

        int nTotalStarExp = m_ChoosePartnerExp + m_Fellow.StarExp;
        m_ChooseMaterialExpSprite.fillAmount = (float)nTotalStarExp / (float)m_Fellow.GetCurStarExpMax();
        
        int addLevel = FellowTool.GetFellowAddStarLevel(m_Fellow.StarLevel, nTotalStarExp);

        if (addLevel > 0)
        {
            m_ChooseMaterialExpCount.gameObject.SetActive(true);
            m_ChooseMaterialExpCount.text = "x" + addLevel.ToString();
        }
        else
        {
            m_ChooseMaterialExpCount.gameObject.SetActive(false);
        }

        if (PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step == 17)
        {
            PartnerFrameLogic.Instance().NewPlayerGuide(18);
        }
    }

    void ShowFellowDetail(Fellow fellow)
    {
        m_FellowDetail.gameObject.SetActive(true);
        m_FellowDetail.SetData(fellow);
    }
    /// <summary>
    /// 弃用
    /// </summary>
    void OnChooseMaterialOKClick()
    {        
        InitMaterialPartnerGrid();

        OnChooseMaterialCancelClick(null);
    }

    void OnChooseMaterialCancelClick(GameObject go)
    {
        Utils.CleanGrid(m_ChooseMaterialGrid);
        m_ChooseMaterialWindow.SetActive(false);
        m_Tips.SetActive(true);
        m_StarButton.SetActive(true);
        m_FellowDetail.gameObject.SetActive(false);
    }

    void InitMaterialPartnerGrid()
    {
        Utils.CleanGrid(m_MaterialPartnerGrid);

        // 先加载个加宠物按钮 靠前显示      
        if (false == CreateAddMaterialBtn())
        {
            return;
        }

        //m_MaterialPartnerLabel.SetActive(m_ChoosePartnerGuid.Count <= 0);

        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container == null)
        {
            return;
        }

        for (int i = 0; i < m_ChoosePartnerGuid.Count; i++)
        {
            if (m_ChoosePartnerGuid[i] == GlobeVar.INVALID_GUID)
            {
                break;
            }

            Fellow fellow = container.GetFellowByGuid(m_ChoosePartnerGuid[i]);
            if (fellow == null || false == fellow.IsValid() || fellow.Guid == m_Fellow.Guid || fellow.Locked)
            {
                break;
            }

            string objectName = i + 1 < 10 ? "0" + (i + 1).ToString() : (i + 1).ToString();
            GameObject fellowobject = Utils.BindObjToParent(m_MaterialPartnerItem, m_MaterialPartnerGrid, objectName);
            if (fellowobject == null || fellowobject.GetComponent<MaterialPartnerItemLogic>() == null)
            {
                break;
            }

            fellowobject.GetComponent<MaterialPartnerItemLogic>().Init(fellow);
        }

        if (m_MaterialPartnerGrid.GetComponent<UIGrid>() != null)
        {
            m_MaterialPartnerGrid.GetComponent<UIGrid>().Reposition();
        }

        //UpdateFellowInfo_NextStar(m_Fellow, m_ChoosePartnerExp);
    }

    /// <summary>
    /// 快速选择
    /// </summary>
    void OnAutoChooseMaterialClick()
    {
        m_FellowDetail.gameObject.SetActive(false);
        m_ChooseMaterialTitle.SetActive(!m_ChooseMaterialTitle.activeSelf);
        m_ChoosePanel.SetActive(!m_ChoosePanel.activeSelf);
        m_ChooseMaterialAutoMenu.SetActive(!m_ChooseMaterialAutoMenu.activeSelf);
        if (m_ChooseMaterialAutoMenu.activeSelf)
        {
            m_AutoButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1865}");//返回
        }
        else
        {
            m_AutoButtonLabel.text = StrDictionary.GetClientDictionaryString("#{10180}");//快速选择
        }
    }

    /// <summary>
    /// 自动筛选宠物
    /// </summary>
    /// <param name="quality"></param>
    void InitMaterialPartnerGrid_Auto(int quality)
    {
        Utils.CleanGrid(m_ChooseMaterialGrid);
        m_ChoosePartnerGuid.Clear();
        m_ChoosePartnerExp = 0;
        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container == null)
        {
            return;
        }

        //遍历伙伴容器
        List<Fellow> fellowList = FellowTool.FellowSort(container);
        bool gotFTEFellow = false;
        for (int i = 0; i < fellowList.Count; ++i)
        {
            //有效槽位
            Fellow fellow = fellowList[i];
            if (false == fellow.IsValid() || fellow.Guid == m_Fellow.Guid || fellow.Locked)
            {
                continue;
            }

            string objectName = string.Empty;
            if (!gotFTEFellow && PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step == 16 && fellow.DataId == 41)// 宠物升星引导狗粮宠
            {
                gotFTEFellow = true;
                objectName = "a" + fellow.DataId;
            }
            else
            {
                objectName = "b" + i;
            }
            
            GameObject fellowobject = Utils.BindObjToParent(m_MaterialPartnerItem, m_ChooseMaterialGrid, objectName);
            var logic = fellowobject.GetComponent<MaterialPartnerItemLogic>();
            if (fellowobject == null || logic == null)
            {
                continue;
            }

            logic.Init(fellow);
            if (fellow.Quality < quality)
            {
                logic.Choose = true;
                m_ChoosePartnerGuid.Add(fellow.Guid);
                m_ChoosePartnerExp += logic.StarExp;
            }
        }

        if (fellowList.Count < FELLOW_PACK_DEFAULT_NUM)
        {
            for (int i = fellowList.Count; i <= FELLOW_PACK_DEFAULT_NUM; i++)
            {
                string objectName = "c" + i;
                Utils.BindObjToParent(m_MaterialPartnerItem, m_ChooseMaterialGrid, objectName);
            }
        }

        UIHexagonGrid grid = m_ChooseMaterialGrid.GetComponent<UIHexagonGrid>();
        if (grid != null)
        {
            grid.sorted = true;
            grid.Reposition();
        }

        int nTotalStarExp = m_ChoosePartnerExp + m_Fellow.StarExp;
        m_ChooseMaterialExpSprite.fillAmount = (float)nTotalStarExp / (float)m_Fellow.GetCurStarExpMax();
        
        int addLevel = FellowTool.GetFellowAddStarLevel(m_Fellow.StarLevel, nTotalStarExp);

        if (addLevel > 0)
        {
            m_ChooseMaterialExpCount.gameObject.SetActive(true);
            m_ChooseMaterialExpCount.text = "x" + addLevel.ToString();
        }
        else
        {
            m_ChooseMaterialExpCount.gameObject.SetActive(false);
        }
    }

    void AutoChooseMaterialPartner_Clear()
    {
        OnAutoChooseMaterialClick();
        InitMaterialPartnerGrid_Auto(-1);
    }

    void AutoChooseMaterialPartner_Green()
    {
        OnAutoChooseMaterialClick();
        InitMaterialPartnerGrid_Auto((int)FELLOWQUALITY.GREEN);
    }

    void AutoChooseMaterialPartner_Blue()
    {
        OnAutoChooseMaterialClick();
        InitMaterialPartnerGrid_Auto((int)FELLOWQUALITY.BLUE);
    }

    void AutoChooseMaterialPartner_Purple()
    {
        OnAutoChooseMaterialClick();
        InitMaterialPartnerGrid_Auto((int)FELLOWQUALITY.PURPLE);
    }

    void AutoChooseMaterialPartner_Orange()
    {
        OnAutoChooseMaterialClick();
        InitMaterialPartnerGrid_Auto((int)FELLOWQUALITY.ORANGE);
    }

    void AutoChooseMaterialPartner_Red()
    {
        OnAutoChooseMaterialClick();
        InitMaterialPartnerGrid_Auto((int)FELLOWQUALITY.RED);
    }

    void AutoChooseMaterialPartner_All()
    {
        OnAutoChooseMaterialClick();
        InitMaterialPartnerGrid_Auto((int)FELLOWQUALITY.MAX);
    }

    void OnStarButtonClick()
    {
        if (m_ChoosePartnerGuid.Count <= 0)
        {
            GUIData.AddNotifyData("#{10305}");
            return;
        }

        if (m_Fellow.Called)
        {
            GUIData.AddNotifyData("#{10344}");
            return;
        }

        CG_FELLOW_ENCHANCE pak = (CG_FELLOW_ENCHANCE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_ENCHANCE);
        pak.SetFellowguid(m_Fellow.Guid);
        for (int i = 0; i < m_ChoosePartnerGuid.Count; i++ )
        {
            pak.AddMaterialguid(m_ChoosePartnerGuid[i]);
        }
        pak.SendPacket();
    }

    public void HandleFellowStarRet()
    {
        Utils.CleanGrid(m_ChooseMaterialGrid);
        Utils.CleanGrid(m_MaterialPartnerGrid);
        m_ChoosePartnerGuid.Clear();
        m_ChoosePartnerExp = 0;
        CloseChooseWindow();
    }

    void CloseChooseWindow()
    {
        m_Tips.SetActive(true);
        m_StarButton.SetActive(true);
        m_ChooseMaterialWindow.SetActive(false);
    }

    bool CreateAddMaterialBtn()
    {
        GameObject AddMaterialButton = Utils.BindObjToParent(m_MaterialPartnerItem, m_MaterialPartnerGrid, "00");
        if (AddMaterialButton == null || AddMaterialButton.GetComponent<MaterialPartnerItemLogic>() == null)
        {
            return false;
        }

        //AddMaterialButton.GetComponent<MaterialPartnerItemLogic>().InitAddMaterialButton();

        return true;
    }

    public void PlayStarUpgradeEffect()
    {
        int nStarCount = m_Fellow.StarLevel > 0 ? ((m_Fellow.StarLevel - 1) % 12) + 1 : 0;
        starUpgradeEffect.transform.localPosition = m_CurStarPic[nStarCount - 1].transform.localPosition;
        starUpgradeEffect.SetActive(true);
        StartCoroutine(HideEffect());
    }

    IEnumerator HideEffect()
    {
        yield return new WaitForSeconds(1.5f);
        starUpgradeEffect.SetActive(false);
        yield break;
    }
}
