/*
 * 登陆好礼
 */
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.AwardActivity;
using Module.Log;
using Games.LogicObj;
using Games.Item;
using Games.FakeObject;
using Games.GlobeDefine;
public class SignReward_LoginController : UIControllerBase<SignReward_LoginController>,IChooseItem
{

    public UIGrid m_Grid;
    public UILabel m_lblTime;
    public UILabel m_lblCurDay;
    public UILabel m_lblNotice;
    private int m_NewServerDays;
    public SignRewardGrid[] m_AwardItem; // 7个
    //private const int ITEMNUM = 7;

    public GameObject m_FakeObjLeft;//骑乘、宠物
    public GameObject m_FakeObjRight;
    public UITexture m_bgTexture;

    public GameObject m_FakeObjLeft_Character;//角色,装备，翅膀
    public GameObject m_FakeObjRight_Character;

    public FakeObject m_FakeObj;
    public FakeObject m_PlayerFakeObj;
    private GameObject m_FakeObjGameObject;
    public GameObject m_Drag;
    public ModelDragLogic m_ModelDrag;

    public GameObject m_GetExtraAward;

    private Color m_disAbleBelleTextTure = new Color(0, 0, 0, 1);
    private Color m_ColorDisable = new Color(64 / 255.0f, 64 / 255.0f, 64 / 255.0f, 1.0f);
    private int m_PlayerFakeObjID = 0;
    private ModelLoadExtraData m_FakeObjExtraData;
    private int m_NextGridItemName = 7;
    public ModelLoadExtraData FakeObjExtraData
    {
        get { return m_FakeObjExtraData; }
        set { m_FakeObjExtraData = value; }
    }

    void Awake()
    {
        SetInstance(this);
        FakeObjExtraData = new ModelLoadExtraData();
       // InitData();
        m_AwardItem = new SignRewardGrid[AwardActivityData.MaxNewServerDays];
        for (int i = 0; i < AwardActivityData.MaxNewServerDays; i++)
        {
            Transform t = m_Grid.transform.GetChild(i);
            if (t && t.GetComponent<SignRewardGrid>() != null)
            {
                m_AwardItem[i] = t.GetComponent<SignRewardGrid>();
            }
        }
    }
    void OnEnable()
    {
        SetInstance(this);
        InitData();
    }
    void OnDisable()
    {
        DestroyFakeObj();
        SetInstance(null);
    }


    void InitData()
    {
        m_NewServerDays = GameManager.gameManager.PlayerDataPool.AwardActivityData.NewServerDays;
        m_lblCurDay.text = StrDictionary.GetClientDictionaryString("#{11221}", m_NewServerDays + 1);
        int nStTime = GameManager.gameManager.PlayerDataPool.NStartTime;
        int nStarDay = (nStTime / 10000) % 100;
        int nStarMonth = (nStTime / 1000000) % 100;
        int nStarYear = 2000 + (nStTime / 100000000);
//        string sStTime = nStarMonth.ToString() + "." + nStarDay.ToString();
        int nEndTime = GameManager.gameManager.PlayerDataPool.NEndTime;
        int nEndDay = (nEndTime / 10000) % 100;
        int nEndMonth = (nEndTime / 1000000) % 100;
        int nEndYear = 2000 + (nStTime / 100000000);
//        string sEndTime = nEndMonth.ToString() + "." + nEndDay.ToString();
        m_lblTime.text = StrDictionary.GetClientDictionaryString("#{" + m_lblTime.curDicID + "}", 
            nStarYear,nStarMonth,nStarDay,nEndYear,nEndMonth,nEndDay);
        Tab_CommonItem item = TableManager.GetCommonItemByID(GameDefine_Globe.NEWSERVER_ACTIVITY_EXTRA_AWARD,0);
        if (item != null)
        {
            m_lblNotice.text = StrDictionary.GetClientDictionaryString("#{" + m_lblNotice.curDicID + "}", item.Name);
        }
      
        UpDateWindow();
    }
    #region UI事件
    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.SignReward);
    }
    #endregion

    bool GetNewServerAwardFlag(int nDay)
    {
        return GameManager.gameManager.PlayerDataPool.AwardActivityData.GetNewServerAwardFlag(nDay);
    }

    public bool YellowDotVisibal()
    {
        for (int i = 0; i < AwardActivityData.MaxNewServerDays; i++)
        {
            if (!GetNewServerAwardFlag(i) && m_NewServerDays >= i)
            {
                return true;
            }
        }
        return false;
    }

    void UpDateWindow()
    {
        // 设置选中界面
        int nMaxRecordCount = AwardActivityData.MaxNewServerDays;
        for (int i = 0; i < nMaxRecordCount && i < m_AwardItem.Length; i++)
        {
            Tab_NewServerAward pAward = TableManager.GetNewServerAwardByID(i, 0);
            if (pAward == null)
            {
                continue;
            }
            if (i >= m_AwardItem.Length)
            {
                continue;
            }
            //if (i == m_NewServerDays)//显示今天的奖励展示
            //{
            //    ShowFakeObj(pAward);
            //}
            m_AwardItem[i].UpdateData(pAward, i, this, "#{11220}");
            // 选中状态  --不需要
//             if (m_NewServerDays == i && false == m_AwardItem[i].m_ChooseSprit.gameObject.activeInHierarchy)
//             {
//                 m_AwardItem[i].SetChooseState(true);
//             }
//             else if (true == m_AwardItem[i].m_ChooseSprit.gameObject.activeInHierarchy)
//             {
//                 m_AwardItem[i].SetChooseState(false);
//             }

            UpDateAwardState(i);


        }// end for

        //额外奖励
        if (!GameManager.gameManager.PlayerDataPool.AwardActivityData.GotExtraFlag)
        {
            bool bExtraAward = true;
            for (int i = 0; i < AwardActivityData.MaxNewServerDays; i++)
            {
                if (!GetNewServerAwardFlag(i))
                {
                    bExtraAward = false;
                    break;
                }
            }
            if (!bExtraAward)
            {
                m_GetExtraAward.GetComponent<UIImageButton>().isEnabled = false;
            }
            else
            {
                m_GetExtraAward.GetComponent<UIImageButton>().isEnabled = true; ;
            }
        }
        else
        {
            m_GetExtraAward.SetActive(false);
        }

    }

    void OnGetExtraReward()
    {
        ChangeChooseItem(7);
    }

    void ShowFakeObj(Tab_NewServerAward pAward)
    {
        int showId = pAward.GetShowIdbyIndex(0);
        FakeObjExtraData.Clear();
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
         int profession=1;
        if (mainPlayer)
        {
            profession = (int)mainPlayer.Profession;
            int tmpShowId=pAward.GetShowIdbyIndex(profession);
            if(tmpShowId>0)
            {
                showId = tmpShowId;
            }
        }
//        bool showResult = true;
        int showType = pAward.ShowType;

        //暂时写死 showType == 2 的时候为翅膀.此时翅膀的ID就是showId
        if (showType == 2)
        {
            ShowWings(showId, profession);
            return;
        }
        if (showId > 0)
        {
            Tab_CommonItem cItem = TableManager.GetCommonItemByID(showId, 0);
            if (cItem != null)
            {
                ItemClass itemClass = (ItemClass)cItem.ClassID;
                int subId = 0;
               
                if (itemClass == ItemClass.MOUNT)
                {
                    subId = cItem.SubClassID;
                    ShowMount(subId);
                    m_bgTexture.gameObject.SetActive(false);
                }
                else if (itemClass == ItemClass.FELLOW)
                {
                    subId = cItem.SubClassID;
                    ShowPet(subId);
                    m_bgTexture.gameObject.SetActive(false);
                }
                else if (itemClass == ItemClass.BELLE)
                {
                    subId = cItem.SubClassID;
                    ShowBelle(subId);
                }
                else if(itemClass == ItemClass.EQUIP)
                {
                    //subId = cItem.SubClassID;
                    subId = cItem.Id;
                    ShowEquip(subId, profession);
                    
                }
                else if (itemClass == ItemClass.FASHION)
                {
                    subId = cItem.SubClassID;
                    ShowFashion(subId, profession);
                }
            }
        }

    }

    bool ShowMount(int mountId)
    {
        if (null != m_FakeObj)
        {
            DestroyFakeObj();
        }
        Tab_MountBase MountBase = TableManager.GetMountBaseByID(mountId, 0);
        if (MountBase == null)
        {
            return false;
        }

        Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
        if (MountTable == null)
        {
            return false;
        }

        m_FakeObj = new FakeObject();
        if (m_FakeObj == null)
        {
            return false;
        }

        if (false == m_FakeObj.initFakeObject(MountTable.FakeObjID, GameManager.gameManager.ActiveScene.FakeObjTrans))
        {
            return false;
        }
        m_ModelDrag.ModelTrans = m_FakeObj.ObjAnim.transform;

        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjLeft, m_FakeObjRight);
        GameManager.gameManager.ActiveScene.ShowFakeObj();
        return true;
    }
    bool ShowPet(int petId)
    {
        Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(petId, 0);
        if (line == null)
        {
            return false;
        }
        int fakeObjId = line.FakeObjId;

        Tab_FakeObject FakeObjTable = TableManager.GetFakeObjectByID(fakeObjId, 0);
        if (FakeObjTable == null)
        {
            return false;
        }

        m_FakeObj = new FakeObject();
        if (m_FakeObj == null)
        {
            return false;
        }

        if (false == m_FakeObj.initFakeObject(fakeObjId, GameManager.gameManager.ActiveScene.FakeObjTrans))
        {
            return false;
        }
        m_ModelDrag.ModelTrans = m_FakeObj.ObjAnim.transform;

        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjLeft, m_FakeObjRight);
        GameManager.gameManager.ActiveScene.ShowFakeObj();
        return true;

//         Singleton<ObjManager>.GetInstance().ReloadModel(m_FakeObjGameObject,
//             FakeObjTable.FakeObjModel,
//             Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver,
//             FakeObjTable,
//             m_PartnerFakeObj);
    }
    bool ShowBelle(int belleId)
    {
        //背景半身像
        Tab_Belle belle = TableManager.GetBelleByID(belleId, 0);
        if (belle == null)
        {
            return false;
        }
        Texture belleTextureObj = ResourceManager.LoadResource(BelleData.GetBelleBigTextureName(belle), typeof(Texture)) as Texture;
        if (null != belleTextureObj)
        {
            m_bgTexture.mainTexture = belleTextureObj;
            //m_bgTexture.color = m_disAbleBelleTextTure;
            m_bgTexture.gameObject.SetActive(false);
            //刷新一下，否则这个m_bgTexture不显示
            StartCoroutine(DelayRefreshTexture());
        }
        return false;
    }
    bool ShowEquip(int equipId,int profession)
    {
        bool res = false;
        if (null != m_FakeObj)
        {
            DestroyFakeObj();
        }
        Tab_EquipAttr eqTab = TableManager.GetEquipAttrByID(equipId, 0);
        if (eqTab == null)
        {
            return false;
        }
//        EquipSubClass equipSubClass = (EquipSubClass)eqTab.Component;
        CreatePartnerFakeObj(profession,eqTab);
        UpdateFakeObj(eqTab);
        return res;
    }
    private void CreatePartnerFakeObj(int pro, Tab_EquipAttr eqTab=null)
    {
        if (m_FakeObj != null)
        {
            DestroyFakeObj();
        }
        CharacterDefine.PROFESSION profession = (CharacterDefine.PROFESSION)pro;
        //对应FakeObject.txt配置
        switch (profession)
        {
            case CharacterDefine.PROFESSION.SHAOLIN:
                m_PlayerFakeObjID = 3;
                break;
            case CharacterDefine.PROFESSION.TIANSHAN:
                m_PlayerFakeObjID = 4;
                break;
            case CharacterDefine.PROFESSION.DALI:
                m_PlayerFakeObjID = 6;
                break;
            case CharacterDefine.PROFESSION.XIAOYAO:
                m_PlayerFakeObjID = 5;
                break;
            case CharacterDefine.PROFESSION.GAIBANG:
                m_PlayerFakeObjID = 62;
                break;
            default:
                m_PlayerFakeObjID = 4;
                break;
        }

        m_FakeObj = new FakeObject();
        if (m_FakeObj == null)
        {
            return;
        }
        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjLeft_Character, m_FakeObjRight_Character);
      //  m_PlayerFakeObjID = fakeObjId;
        m_FakeObj.initFakeObject(m_PlayerFakeObjID, GameManager.gameManager.ActiveScene.FakeObjTrans,out m_FakeObjGameObject);
        m_ModelDrag.ModelTrans = m_FakeObj.ObjAnim.transform;
       
    }
    void UpdateFakeObj(Tab_EquipAttr eqTab=null)
    {
        int weaponId = -1;
        int modelId = -1;
        if (eqTab != null)
        {
            EquipSubClass equipSubClass = (EquipSubClass)eqTab.Component;
            if (equipSubClass == EquipSubClass.WEAPON)
            {
                weaponId = eqTab.Id;
                FakeObjExtraData.weaponId = weaponId;
            }
            modelId = eqTab.ModelId;
        }
        //Debug.LogError("EQTab:"+eqTab.Id+","+modelId);
        int nModelVisualID = Singleton<ObjManager>.Instance.MainPlayer.ModelVisualID;
        //Debug.LogError("nModelVisualID is:" + nModelVisualID);

        bool isDefaultVisual = false;
        Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(nModelVisualID, 0);
        if (tabItemVisual == null)
        {
            isDefaultVisual = true;
        }
        else
        {
            isDefaultVisual = false;
        }

        if (isDefaultVisual)
        {
            tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
            if (tabItemVisual == null)
            {
                return;
            }
        }
        //武器不影响外观
        if (weaponId == -1 && modelId!=-1)
        {
            tabItemVisual = TableManager.GetItemVisualByID(modelId, 0);
        }

        int nCharModelID = Singleton<ObjManager>.Instance.MainPlayer.GetCharModelID(tabItemVisual);
        //Debug.LogError("nCharModelID is:" + nCharModelID);
        Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
        if (tabCharModel == null)
        {
            return;
        }
        Tab_FakeObject tabFakeObject = TableManager.GetFakeObjectByID(m_PlayerFakeObjID, 0);
        if (tabFakeObject == null)
        {
            return;
        }
        //m_PlayerFakeObj = new FakeObject();
        Singleton<ObjManager>.GetInstance().ReloadModel(m_FakeObjGameObject,
            tabCharModel.ResPath,
            Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver,
            tabFakeObject,
            m_FakeObj
           // weaponId:
            );
        GameManager.gameManager.ActiveScene.ShowFakeObj();
    }
    bool ShowFashion(int fashionId, int profession)
    {
        bool res = false;
        CreateFashionPartnerFakeObj(profession);
        FitOnFashion(fashionId);
        return res;
    }
    bool ShowWings(int wingsId, int profession)
    {
        bool res = false;
        if (m_FakeObj != null)
        {
            DestroyFakeObj();
        }
        m_FakeObjExtraData.wingId = wingsId;
        CreatePartnerFakeObj(profession);
        m_FakeObj.InitFakeObjFlyWing(wingsId, m_FakeObjGameObject);
        GameManager.gameManager.ActiveScene.ShowFakeObj();
        return res;
    }
    /// <summary>
    /// 创建FakeObj
    /// </summary>
    /// <param name="pro"></param>
    private void CreateFashionPartnerFakeObj(int pro)
    {
        if (m_FakeObj != null)
        {
            DestroyFakeObj();
        }
        CharacterDefine.PROFESSION profession = (CharacterDefine.PROFESSION)pro;
        //对应FakeObject.txt配置
        int fakeObjId = -1;
        switch (profession)
        {
            case CharacterDefine.PROFESSION.SHAOLIN:
                fakeObjId = (int)FashionLogic.FashionFakeObjectID.FakeObjectID_SHAOLIN;
                break;
            case CharacterDefine.PROFESSION.TIANSHAN:
                fakeObjId = (int)FashionLogic.FashionFakeObjectID.FakeObjectID_TIANSHAN;
                break;
            case CharacterDefine.PROFESSION.DALI:
                fakeObjId = (int)FashionLogic.FashionFakeObjectID.FakeObjectID_DALI;
                break;
            case CharacterDefine.PROFESSION.XIAOYAO:
                fakeObjId = (int)FashionLogic.FashionFakeObjectID.FakeObjectID_XIAOYAO;
                break;
            default:
                fakeObjId = (int)FashionLogic.FashionFakeObjectID.FakeObjectID_TIANSHAN;
                break;
        }

        m_PlayerFakeObj = new FakeObject();
        if (m_PlayerFakeObj == null)
        {
            return;
        }

        m_PlayerFakeObjID = fakeObjId;
        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjLeft_Character, m_FakeObjRight_Character);
        m_PlayerFakeObj.initFakeObject(fakeObjId, GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FakeObjGameObject);
        if (null != m_PlayerFakeObj.ObjAnim)
        {
            m_ModelDrag.ModelTrans = m_PlayerFakeObj.ObjAnim.transform;
        }
    }

    public void FitOnFashion(int nFashionID)
    {
        Tab_FashionData tabFashionData = TableManager.GetFashionDataByID(nFashionID, 0);
        if (tabFashionData == null)
        {
            return;
        }

        Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(tabFashionData.ItemVisualID, 0);
        if (tabItemVisual == null)
        {
            return;
        }

        int nCharModelID = Singleton<ObjManager>.Instance.MainPlayer.GetCharModelID(tabItemVisual);
        Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
        if (tabCharModel == null)
        {
            return;
        }

        Tab_FakeObject tabFakeObject = TableManager.GetFakeObjectByID(m_PlayerFakeObjID, 0);
        if (tabFakeObject == null)
        {
            return;
        }

        List<object> param = new List<object>();
        param.Add(tabFakeObject);
        param.Add(m_PlayerFakeObj);

        Singleton<ObjManager>.GetInstance().ReloadModel(m_FakeObjGameObject,
            tabCharModel.ResPath,
            Singleton<ObjManager>.GetInstance().AsycLoadRoleViewFitOnObjOver,
            param);
        GameManager.gameManager.ActiveScene.ShowFakeObj();
    }

    IEnumerator DelayRefreshTexture()
    {
        yield return new WaitForSeconds(0.02f);
        m_bgTexture.gameObject.SetActive(true);
    }

    private void DestroyFakeObj()
    {
        if (m_FakeObj != null)
        {
            m_FakeObj.Destroy();
            m_FakeObj = null;
        }
        if (m_PlayerFakeObj != null)
        {
            m_PlayerFakeObj.Destroy();
            m_PlayerFakeObj = null;
        }
        GameManager.gameManager.ActiveScene.HideFakeObj();
    }

    void UpDateAwardState(int nDay)
    {
        if (nDay < 0 || nDay >= AwardActivityData.MaxNewServerDays)
        {
            return;
        }
        if (nDay >= m_AwardItem.Length)
        {
            return;
        }
        if (GetNewServerAwardFlag(nDay) == true)
        {
            m_AwardItem[nDay].UpdateItemState(RewardAwardItem.AwardState.AWARD_HAVEDONE);
            if (m_AwardItem[nDay].gameObject.name.CompareTo("6") <= 0)
            {
                m_AwardItem[nDay].gameObject.name = "z" + m_NextGridItemName.ToString();
                m_Grid.repositionNow = true;
                ++m_NextGridItemName;
            }

          
            //置灰
            UIWidget[] widgets = m_AwardItem[nDay].gameObject.GetComponentsInChildren<UIWidget>(true);
            foreach (UIWidget wd in widgets)
            {
                wd.color = GlobeVar.BUTTONGRAY;
            }
            UITexture texture = gameObject.GetComponentInChildren<UITexture>();
            if (texture != null)
            {
                texture.color = GlobeVar.BUTTONGRAY;
            }
        }
        else
        {
            if (m_NewServerDays >= nDay)
            {
                m_AwardItem[nDay].UpdateItemState(RewardAwardItem.AwardState.AWARD_CANHAVE);
               // m_ButtonAward.isEnabled = true;
            }
            else
            {
                m_AwardItem[nDay].UpdateItemState(RewardAwardItem.AwardState.AWARD_CANNNTHAVE);
            }
        }
    }
    public void ChangeChooseItem(int index)
    {
        if (GetNewServerAwardFlag(index) == true)
        {
            // 提示
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2175}");
            return;
        }

        GameManager.gameManager.PlayerDataPool.AwardActivityData.SendAwardPacket(AwardActivityType.AWARD_NEWSERVER,index);
    }
    // 在线奖励按钮
    public void ButtonNewServerAward()
    {
        CleanUp();
        InitData();
        UpDateWindow();
    }
    void CleanUp()
    {
        m_NewServerDays = -1;
        FakeObjExtraData.Clear();

//         if (m_ItemGrid != null)
//         {
//             //    Utils.CleanGrid(m_ItemGrid.gameObject);
//             m_ItemGrid.repositionNow = true;
//             m_ItemGrid.sorted = true;
//         }
// 
//         for (int i = 0; i < m_AwardItem.Length; i++)
//         {
//             if (m_AwardItem[i])
//             {
//                 m_AwardItem[i].CleanUp();
//             }
//         }
// 
//         if (m_ButtonAward)
//         {
//             m_ButtonAward.isEnabled = false;
//         }
    }
    public void PlayEffect(int nNewServerDay)
    {
 
    }
}
public class ModelLoadExtraData
{
    public int weaponId=-1;
    public int wingId=-1;
    public int fashionId = -1;
    public void Clear()
    {
        weaponId = -1;
        wingId = -1;
        fashionId = -1;
    }
}

