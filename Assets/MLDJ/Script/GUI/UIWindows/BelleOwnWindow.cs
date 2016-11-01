/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleOwnWindow.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows\BelleOwnWindow.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows

    *  @author   : fanzhipeng
    *  @date     : 2015/7/1 17:34:47
*****************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Module.Log;
using GCGame;
public class BelleOwnWindow : MonoBehaviour
{

    private static BelleOwnWindow m_Instance = null;
    public static BelleOwnWindow Instance()
    {
        return m_Instance;
    }

    //tabBtb
    public GameObject ForeordinationTips;
    public UISprite BelleFragmentUS;
    public GameObject[] ForeordinationHead;
    public GameObject HeadTone;
    public GameObject EffectRoot = null;
    public UISprite m_belleAttrTab;
    public UISprite m_relationshipTab;
    public UILabel m_belleAttrTabName;
    public UILabel m_relationshipTabName;
    private  Color hightTabColor = new Color(152.0f/255.0f,223.0f/255.0f,181.0f/255.0f,1.0f);
    private  Color normalTabColor = new Color(64.0f/255.0f,180.0f/255.0f,190.0f/255.0f,1.0f);
    private const string TAB_NORMAL_NAME = "Triangle-2";
    private const string TAB_PRESSED_NAME = "Triangle-1";

    private string curtabStr;
    private const string ATTR_TAB_BTN_STR = "attBtnTab";
    private const string RELATIONSHIP_STR = "relationshipBtnTab";

    //window
    public GameObject m_belleAttrWin;                 //美人属性界面
    public GameObject m_relationshipWin;              //情缘界面

    //rightInfo
    public UILabel m_belleName;                      //美人名字
    public UILabel m_battleValue;                     //战力值
    public UITexture m_bellePic;                      //美人大图

    //closeInfo
    public UILabel m_curCloseLevel;                   //亲密等级  
    public UILabel m_curFavorValue;                   //亲密好感度
    public UILabel m_nextAddAttrValue;                //下一等级加成属性值

    //close process bar
    public UISprite m_processBar;

    //title Info
    public UILabel m_curBelleMainColor;
    public UISprite m_curBelleMainColorPic;
    public UILabel m_curBelleSubColor;
    //     public UILabel m_curBelleItemCount;
    //     public UILabel m_curBelleItemTotalCount;
    public UILabel m_curBelleItemCount;
    public UISprite m_curBelleItemIcon;
    public UILabel m_curBelleEvaluteLab;
    public UIButtonMessage messageBtn;

    public UILabel m_labelAlreadyCloseCount;
    private static int m_freeCloseTime = -1;        // 变量在Start时根据表格赋值。
    private static int m_maxCloseTime = -1;

    //获取碎片的界面
    public GameObject m_getBelleItemWin;

    //进化按钮节点
    public GameObject m_EvaluBtnObj;

    //进化达到最大等级的文字描述
    public UILabel m_EvaluMaxLabel;

    //进化确认界面
    public GameObject m_EvaluWin;

    //进化确认界面详细控件
    public UILabel m_EvaCurMianColor;
    public UISprite m_EvaCurMianColorPic;
    public UILabel m_EvaCurSubColor;
    public UILabel m_EvaNextMainColor;
    public UISprite m_EvaNextMainColorPic;
    public UILabel m_EvaNextSubColor;
    public UILabel m_EvaCostItem_1_Count;
    public UILabel m_EvaCostItem_2_Count;
    public UISprite m_EvaCostItem_1_Icon;
    public UISprite m_EvaCostItem_2_Icon;

    //详细信息
    public GameObject m_belleDescObj;
    public UILabel m_belleDescText;
    public UIImageButton m_btnClose;
    public UILabel m_btnCLoseLable;
    private float m_curTimer = -1;
    private const string TIME_FORMAT = "00:00:00";

    private bool m_isNeedUpdate = false;

    //亲密小红点提示
    public UISprite objBelleCloseTip;

    //进化小红点提示
    public UISprite evoRedTipObj;
    void Awake()
    {
        m_Instance = this;
        if (m_freeCloseTime < 0)
        {
            m_freeCloseTime = 0;
            m_maxCloseTime = TableManager.GetBelleCloseCost().Count;
            for (int i = 0; i < m_maxCloseTime; i++)
            {
                Tab_BelleCloseCost cost = TableManager.GetBelleCloseCostByID(i, 0);
                if (cost != null && cost.YuanBaoCost > 0)
                {
                    break;
                }
                m_freeCloseTime++;
            }
        }
    }

    void Start()
    {
        m_isNeedUpdate = false;
        if (BelleController.Instance() != null &&
            BelleController.Instance().NewPlayerGuide_Step == 4 || BelleController.Instance().NewPlayerGuide_Step == 5)
        {
            NewPlayerGuide(1);
        }
    }

    void Update()
    {
        UpdateTickBand();
        if (m_isNeedUpdate)
        {
            UpdateEvalutionInfo();
            if (BelleInfoWindow.Instance() != null)
            {
                BelleInfoWindow.Instance().UpdateScrollViewList();
            }
            m_isNeedUpdate = false;
        }
    }
    void OnEnable()
    {
        SetData();
        BelleData.delClose += UpdateCloseState;
        m_belleDescObj.SetActive(false);
        m_isNeedUpdate = false;
        objBelleCloseTip.gameObject.SetActive(false);
    }
    void OnDisable()
    {
        BelleData.delClose -= UpdateCloseState;
        AdvanceOnDisable();
    }
    private void InitTab()
    {
        curtabStr = ATTR_TAB_BTN_STR;
        m_belleAttrTab.spriteName = TAB_PRESSED_NAME;
        m_relationshipTab.spriteName = TAB_NORMAL_NAME;
        m_belleAttrTabName.color = hightTabColor;
        m_relationshipTabName.color = normalTabColor;
        //  m_relationshipTab.transform.localRotation = Quaternion.Euler(new Vector3(0, 180, 0));
        m_belleAttrWin.SetActive(true);
        m_relationshipWin.SetActive(false);
    }

    public void OnChangeTab(GameObject btn)
    {
        if (btn.name != curtabStr)
        {
            curtabStr = btn.name;
            m_belleAttrWin.SetActive(curtabStr == ATTR_TAB_BTN_STR);
            m_relationshipWin.SetActive(curtabStr == RELATIONSHIP_STR);
            //             if (curtabStr == RELATIONSHIP_STR)
            //                 m_relationshipTab.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
            //             else
            //                 m_relationshipTab.transform.localRotation = Quaternion.Euler(new Vector3(0, 180, 0));
            m_belleAttrTab.spriteName = curtabStr == ATTR_TAB_BTN_STR ? TAB_PRESSED_NAME : TAB_NORMAL_NAME;
            m_relationshipTab.spriteName = curtabStr == RELATIONSHIP_STR ? TAB_PRESSED_NAME : TAB_NORMAL_NAME;
            m_belleAttrTabName.color = curtabStr == ATTR_TAB_BTN_STR ? hightTabColor : normalTabColor;
            m_relationshipTabName.color = curtabStr == RELATIONSHIP_STR ? hightTabColor : normalTabColor;
            m_belleAttrWin.SetActive(curtabStr == ATTR_TAB_BTN_STR);
            m_relationshipWin.SetActive(curtabStr == RELATIONSHIP_STR);
        }
    }
    public void UpdateBelleFragmentInfo()
    {
        InitTab();
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

            if (null == belleTab)
            {
                //LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
                return;
            }

            Belle curBelleData = null;
            if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
            {
                curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
            }

            if (null == curBelleData)
            {
                return;
            }
            
            //碎片信息
            UpdateEvalutionInfo();
            {
                m_curTimer = 1;
                //小红点更新
                objBelleCloseTip.gameObject.SetActive(BelleData.IsCanCloseFree());
                UpdateTickBand();
                UpdateCloseTimeLabel();
                UpdateCloseProcessBar();
                //单个条目红点的更新
                if (BelleInfoWindow.Instance() != null)
                {
                    BelleInfoWindow.Instance().UpdateCloseRedTipState();
                }
            }
            SetCombatValue();
            //最大等级的一个判断
            m_EvaluBtnObj.SetActive(!curBelleData.IsMaxLevel());
            m_EvaluMaxLabel.gameObject.SetActive(curBelleData.IsMaxLevel());

            m_belleDescText.text = belleTab.Introduction;
            if (HeadTone != null)
            {
                Tab_CommonItem cItem = TableManager.GetCommonItemByID(belleTab.BelleItemID, 0);
                if (cItem != null)
                {
                    UISprite us = HeadTone.GetComponent<UISprite>();
                    if (us != null)
                    {
                        us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[belleTab.Quality - 1];
                    }
                    Transform tf = HeadTone.transform.Find("Head");
                    if (tf != null)
                    {
                        UISprite us1 = tf.GetComponent<UISprite>();
                        if (us1 != null)
                        {
                            us1.spriteName = cItem.Icon;
                        }
                    }
                    tf = HeadTone.transform.Find("tone");
                    if (tf != null)
                    {
                        UISprite us2 = tf.GetComponent<UISprite>();
                        if (us2 != null)
                        {
                            us2.spriteName = BelleData.GetBelleColorPicByColorLevel(BelleData.OwnedBelleMap[belleTab.Id].colorLevel);
                        }
                    }
                }
            }
        }
    }
    public void SetData()
    {
        InitTab();
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

            if (null == belleTab)
            {
                //LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
                return;
            }

            Belle curBelleData = null;
            if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
            {
                curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
            }

            if (null == curBelleData)
            {
                return;
            }
            //名字
            m_belleName.text = belleTab.Name;
            m_belleName.color = BelleData.GetBelleColorByColorLevel(curBelleData.colorLevel);
            //战力
            curBelleData.UpdateAttrMap();
            m_battleValue.text = BelleData.GetPowerNum(curBelleData.attrMap).ToString();

            //品阶
            m_curBelleMainColor.text = BelleData.GetBelleDescByColorLevel(curBelleData.colorLevel);
            m_curBelleMainColorPic.spriteName = BelleData.GetBelleColorPicByColorLevel(curBelleData.colorLevel);
            m_curBelleSubColor.text = StrDictionary.GetClientDictionaryString("#{10811}", curBelleData.subLevel);
            m_curBelleMainColor.color = BelleData.GetBelleColorByColorLevel(curBelleData.colorLevel);
            m_curBelleSubColor.color = BelleData.GetBelleColorByColorLevel(curBelleData.colorLevel);

            //碎片信息
            UpdateEvalutionInfo();
            //半身像
            UnityEngine.Object belleTextureObj = ResourceManager.LoadResource(BelleData.GetBelleBigTextureName(belleTab), typeof(Texture)) as Texture;
            if (null != belleTextureObj)
            {
                m_bellePic.mainTexture = belleTextureObj as Texture;
            }

            //属性界面
            BelleAttrInfoWindow belleAttrInfoWindow = m_belleAttrWin.GetComponent<BelleAttrInfoWindow>();
            if (belleAttrInfoWindow != null)
            {
                belleAttrInfoWindow.SetBelleAttrData();
            }
            UpdateCloseState();

            SetCombatValue();

            //最大等级的一个判断
            m_EvaluBtnObj.SetActive(!curBelleData.IsMaxLevel());
            m_EvaluMaxLabel.gameObject.SetActive(curBelleData.IsMaxLevel());

            m_belleDescText.text = belleTab.Introduction;
            int count = ForeordinationHead.Length;
            for (int i = 0; i < count; ++i) {
              if (ForeordinationHead[i] != null) {
                if (i < belleTab.getAffectionConditonValueCount()) {
                  int id = belleTab.GetAffectionConditonValuebyIndex(i);
                  ForeordinationHead[i].SetActive(true);
                  bool isHas = BelleData.OwnedBelleMap.ContainsKey(id);
                  Tab_Belle affectionbelle = TableManager.GetBelleByID(id, 0);
                  if(affectionbelle!=null){
                    Tab_CommonItem cItem = TableManager.GetCommonItemByID(affectionbelle.BelleItemID, 0);
                    if (cItem != null) {
                      UISprite us = ForeordinationHead[i].GetComponent<UISprite>();
                      if (us != null) {
                        us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[cItem.Quality - 1];
                        if (isHas) {
                          us.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
                        } else {
                          us.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
                        }
                      }
                      Transform tf = ForeordinationHead[i].transform.Find("Head");
                      if (tf != null) {
                        UISprite usc = tf.GetComponent<UISprite>();
                        if (usc != null) {
                          usc.spriteName = cItem.Icon;
                          if (isHas) {
                            usc.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
                          } else {
                            usc.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
                          }
                        }
                      }
                    }
                  }
                } else {
                  ForeordinationHead[i].SetActive(false);
                }
              }
            }
            if (HeadTone != null) {
              Tab_CommonItem cItem = TableManager.GetCommonItemByID(belleTab.BelleItemID, 0);
              if (cItem != null) {
                UISprite us = HeadTone.GetComponent<UISprite>();
                if (us != null) {
                  us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[belleTab.Quality - 1];
                }
                Transform tf = HeadTone.transform.Find("Head");
                if (tf != null) {
                  UISprite us1 = tf.GetComponent<UISprite>();
                  if (us1 != null) {
                    us1.spriteName = cItem.Icon;
                  }
                }
                tf = HeadTone.transform.Find("tone");
                if (tf != null) {
                  UISprite us2 = tf.GetComponent<UISprite>();
                  if (us2 != null) {
                    us2.spriteName = BelleData.GetBelleColorPicByColorLevel(BelleData.OwnedBelleMap[belleTab.Id].colorLevel);
                  }
                }
              }
            }
        }
    }
    public void ForeordinationClickPress(GameObject go)
    {
      int index;
      if (go!=null&&int.TryParse(go.name, out index)&&ForeordinationTips!=null) {
        Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
        if (null != belleTab) {
          --index;
          if (index > -1 && index < belleTab.getAffectionConditonValueCount()) {
            int id = belleTab.GetAffectionConditonValuebyIndex(index);
            
            bool isHas = BelleData.OwnedBelleMap.ContainsKey(id);
            Tab_Belle affectionbelle = TableManager.GetBelleByID(id, 0);
            if (affectionbelle != null) {
              Tab_CommonItem cItem = TableManager.GetCommonItemByID(affectionbelle.BelleItemID, 0);
              if (cItem != null) {
                Transform tf = ForeordinationTips.transform.Find("Item");
                if (tf != null) {
                  UISprite us = tf.GetComponent<UISprite>();
                  if (us != null) {
                    us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[cItem.Quality - 1];
                    if (isHas) {
                      us.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
                    } else {
                      us.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
                    }
                  }
                }
                tf = ForeordinationTips.transform.Find("Item/Head");
                if (tf != null) {
                  UISprite usc = tf.GetComponent<UISprite>();
                  if (usc != null) {
                    usc.spriteName = cItem.Icon;
                    if (isHas) {
                      usc.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
                    } else {
                      usc.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
                    }
                  }
                }
                tf = ForeordinationTips.transform.Find("belleName");
                if (tf != null) {
                  UILabel ul = tf.GetComponent<UILabel>();
                  if (ul != null) {
                    ul.text = affectionbelle.Name;
                  }
                }
                tf = ForeordinationTips.transform.Find("ForeordinationName");
                if (tf != null) {
                  UILabel ul = tf.GetComponent<UILabel>();
                  if (ul != null) {
                    ul.text = belleTab.GetAffectionNamebyIndex(index);
                  }
                }
                tf = ForeordinationTips.transform.Find("Property");
                if (tf != null) {
                  UILabel ul = tf.GetComponent<UILabel>();
                  if (ul != null) {
                    ul.text = belleTab.GetAffectionDescbyIndex(index);
                  }
                }
              }
              
            }
          }
        }
      }
      if (ForeordinationTips != null) {
        ForeordinationTips.SetActive(true);
      }
    }
    public void ForeordinationClickRelease(GameObject go)
    {
      if (ForeordinationTips != null) {
        ForeordinationTips.SetActive(false);
      }
    }
    public void SetUpdateEva(bool state)
    {
        m_isNeedUpdate = state;
    }
    public void UpdateEvalutionInfo()
    {
        if (null == BelleInfoWindow.Instance())
        {
            return;
        }

        Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
        if (null == belleTab)
        {
            return;
        }

        Belle curBelleData = null;

        if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
        {
            curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
        }
        if (null == curBelleData)
        {
            return;
        }
        int belleSubItemId = belleTab.BelleItemID;
        int belleTotalSubCount = 0;
        int belleCoinCount = 0;
        Tab_BelleLevelup curTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel, 0);
        if (null != curTabBelleLevelup && curTabBelleLevelup.getConsumeTypeCount() > 0)
        {
            belleTotalSubCount = curTabBelleLevelup.GetConsumeNumbyIndex(0);
            belleCoinCount = curTabBelleLevelup.GetConsumeNumbyIndex(1);
        }

        if (GameManager.gameManager.PlayerDataPool == null)
        {
            return;
        }
        Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (backPack == null)
        {
            return;
        }
        int belleSubItemCount = backPack.GetItemCountByDataId(belleSubItemId);
        int have = 0;int need = 0;
        GetBelleFragmentNum(out have, out need);
        m_curBelleItemCount.text = have.ToString() + "/" + need.ToString();
        if (need > 0) {
          BelleFragmentUS.transform.localScale = new Vector3((float)have / need, 1f, 1f);
        }
        Tab_CommonItem commItem = TableManager.GetCommonItemByID(belleTab.BelleItemID, 0);
        if (commItem != null)
            m_curBelleItemIcon.spriteName = commItem.Icon;
        if (belleSubItemCount < belleTotalSubCount)
        {
            m_curBelleEvaluteLab.text = StrDictionary.GetClientDictionaryString("#{10812}");
            messageBtn.functionName = "OnGetItem";
            evoRedTipObj.gameObject.SetActive(false);
            if (BelleConfig.GetBelleEvoBitByIndex(belleTab.Id))
            {
                BelleConfig.SetBelleEvoCountByBit(belleTab.Id, '0');
            }
        }
        else
        {
            m_curBelleEvaluteLab.text = StrDictionary.GetClientDictionaryString("#{10813}");
            messageBtn.functionName = "OnEvolutionClick";
            evoRedTipObj.gameObject.SetActive(!curBelleData.IsMaxLevel());
        }

        BelleData.m_belleEvoCount = BelleConfig.GetBelleEvoCount();
        //最大等级的一个判断


        m_EvaluBtnObj.SetActive(!curBelleData.IsMaxLevel());
        m_EvaluMaxLabel.gameObject.SetActive(curBelleData.IsMaxLevel());
    }

    /// <summary>
    /// 获得碎片的按钮
    /// </summary>
    public void OnGetItem()
    {
        if (m_getBelleItemWin != null)
        {
            m_getBelleItemWin.SetActive(true);
        }
    }
    public void OnCloseGetItem()
    {
        if (m_getBelleItemWin != null)
        {
            m_getBelleItemWin.SetActive(false);
        }
    }
    /// <summary>
    /// 亲密进度条更新
    /// </summary>
    public void UpdateCloseProcessBar()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

            if (null == belleTab)
            {
                LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
                return;
            }

            Belle curBelleData = null;
            if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id)) ;
            {
                curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
            }
            //亲密等级
            m_curCloseLevel.text = curBelleData.closeLevel.ToString();
            m_nextAddAttrValue.text = Utils.GetAttrTypeString(belleTab.CloseAddAttrType) + curBelleData.nextCloseAttrValue.ToString();
            m_curFavorValue.text = curBelleData.favourValue.ToString() + "/" + curBelleData.maxFavourValue.ToString();

            m_processBar.fillAmount = curBelleData.maxFavourValue == 0 ? 0f : curBelleData.favourValue * 1.0f / curBelleData.maxFavourValue;
        }
    }

    // 这貌似是共鸣。。。
    public void OnClickClose()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
            if (belleTab == null)
                return;
        }

        Tab_BelleCloseCost curCost = TableManager.GetBelleCloseCostByID(BelleData.dayCloseTime, 0);
        if (null == curCost)
        {
            return;
        }

        if (curCost.YuanBaoCost > 0)
        {
            string tip = StrDictionary.GetClientDictionaryString("#{5292}", curCost.YuanBaoCost);
            MessageBoxLogic.OpenOKCancelBox(tip, "", DoBelleClose);
        }
        else
        {
            DoBelleClose();
        }
    }

    void DoBelleClose()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
            if (belleTab == null)
                return;
            CG_BELLE_CLOSE closeRequest = (CG_BELLE_CLOSE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_CLOSE);
            closeRequest.SetBelleID(belleTab.Id);
            closeRequest.SendPacket();
        }

    }
    void UpdateCloseTimeLabel()
    {
        if (BelleData.dayCloseTime < m_freeCloseTime)
        {
            m_labelAlreadyCloseCount.text = StrDictionary.GetClientDictionaryString("#{1306}", BelleData.dayCloseTime, m_freeCloseTime);
        }
        else
        {
            m_labelAlreadyCloseCount.text = StrDictionary.GetClientDictionaryString("#{2493}", BelleData.dayCloseTime - m_freeCloseTime, m_maxCloseTime - m_freeCloseTime);
        }
    }

    public void UpdateCloseState()
    {
        m_curTimer = 1;
        //小红点更新
        objBelleCloseTip.gameObject.SetActive(BelleData.IsCanCloseFree());
        UpdateTickBand();
        UpdateCloseTimeLabel();
        UpdateCloseProcessBar();
        BelleAttrInfoWindow belleAttrInfoWindow = m_belleAttrWin.GetComponent<BelleAttrInfoWindow>();
        if (belleAttrInfoWindow != null)
        {
            belleAttrInfoWindow.SetBelleAttrData();
        }

        //单个条目红点的更新
        if (BelleInfoWindow.Instance() != null)
        {
            BelleInfoWindow.Instance().UpdateCloseRedTipState();
        }
    }
    void UpdateTickBand()
    {
        m_curTimer += Time.deltaTime;
        if (m_curTimer < 1)
        {
            return;
        }

        m_curTimer = 0;
        // 背包物品同步无法做到进化后立即获取，所以在Update里更新。
        if (GameManager.gameManager.PlayerDataPool == null)
        {
            return;
        }
        Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (backPack == null)
        {
            return;
        }
        //         int evoItemCount = backPack.GetItemCountByDataId(28);
        //         labelEvoItemCount.text = StrDictionary.GetClientDictionaryString("#{3231}", evoItemCount);
		UpdateButtonState();
        if (!m_btnClose.isEnabled)
        {
            Utils.SetTimeDiffToLabel(m_btnCLoseLable, BelleData.GetBelleCloseTimeDiff());
        }
        
        //Utils.SetTimeDiffToLabel(labelNextEvolutionTimeValue, EvolutionTimeDiff());
    }

    void UpdateButtonState()
    {
        m_btnClose.isEnabled = BelleData.GetBelleCloseTimeDiff() <= 0 && BelleData.dayCloseTime < m_maxCloseTime;
        if (m_btnClose.isEnabled)
        {
            m_btnCLoseLable.text = StrDictionary.GetClientDictionaryString("#{3404}");
        }
        else
        {
            m_btnCLoseLable.text = TIME_FORMAT;
        }

        if (BelleData.GetBelleCloseTimeDiff() <= 0 && BelleData.dayCloseTime >= m_maxCloseTime)
        {
            m_btnCLoseLable.text = StrDictionary.GetClientDictionaryString("#{3404}"); 
        }

        //         if (null != m_curBelleData)
        //         {
        //             Tab_BelleLevelup curTabBelleLevel = TableManager.GetBelleLevelupByID(m_curBelleData.orgLevel, 0);
        //             btnEvolution.isEnabled = curTabBelleLevel != null;
        //         }
    }

    public void SetCombatValue()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

            if (null == belleTab)
            {
                LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
                return;
            }

            Belle curBelleData = null;
            if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
            {
                curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
            }

            if (null == curBelleData)
            {
                return;
            }
            curBelleData.UpdateAttrMap();
            m_battleValue.text = BelleData.GetPowerNum(curBelleData.attrMap).ToString();
        }
    }

    /// <summary>
    /// 进化按钮响应函数
    /// </summary>
    void OnEvolutionClick()
    {
        // Debug.Log("OnEvolution .........................");


        if (null == BelleInfoWindow.Instance())
        {
            return;
        }

        Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
        if (null == belleTab)
        {
            return;
        }

        Belle curBelleData = null;
        if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
        {
            curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
        }
        if (null == curBelleData)
        {
            return;
        }
        SetEvaWinData(curBelleData);

        //         Tab_BelleLevelup curTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel, 0);
        //         Tab_BelleLevelup nextTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel + 1, 0);
        //         string strTip = "";
        // 
        //         if (null != curTabBelleLevelup && nextTabBelleLevelup != null)
        //         {
        //             string attrTypeName = BelleData.GetBelleDescByColorLevel(nextTabBelleLevelup.MainLevel);
        //             strTip = StrDictionary.GetClientDictionaryString("#{1404}", attrTypeName, nextTabBelleLevelup.SubLevel, curTabBelleLevelup.GetConsumeNumbyIndex(0), curTabBelleLevelup.GetConsumeNumbyIndex(1));
        //         }
        // 
        // 
        //         MessageBoxLogic.OpenOKCancelBox(strTip, "", DoEvlolution);

        m_EvaluWin.SetActive(true);

    }

    #region 进化确认界面相关
    /// <summary>
    /// 取消确认响应
    /// </summary>
    public void OnCancelEva()
    {
        if (m_EvaluWin != null)
        {
            m_EvaluWin.SetActive(false);
        }
    }

    /// <summary>
    /// 确认进化响应函数
    /// </summary>
    public void OnSubmitEva()
    {
        DoEvlolution();
        if (m_EvaluWin != null)
        {
            m_EvaluWin.SetActive(false);
        }
    }

    /// <summary>
    /// 进化确认界面数据填充
    /// </summary>
    /// <param name="belle"></param>
    public void SetEvaWinData(Belle curBelleData)
    {
        if (null == curBelleData)
            return;

        m_EvaCurMianColor.text = BelleData.GetBelleDescByColorLevel(curBelleData.colorLevel);
        m_EvaCurMianColorPic.spriteName = BelleData.GetBelleColorPicByColorLevel(curBelleData.colorLevel);
        m_EvaCurSubColor.text = StrDictionary.GetClientDictionaryString("#{10811}", curBelleData.subLevel);
       // m_EvaCurMianColor.color = BelleData.GetBelleColorByColorLevel(curBelleData.colorLevel);
       // m_EvaCurSubColor.color = m_EvaCurMianColor.color;

        Tab_BelleLevelup curTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel, 0);
        Tab_BelleLevelup nextTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel + 1, 0);

        if (null != curTabBelleLevelup && nextTabBelleLevelup != null)
        {
            m_EvaNextMainColor.text = BelleData.GetBelleDescByColorLevel(nextTabBelleLevelup.MainLevel);

            m_EvaNextMainColorPic.spriteName = BelleData.GetBelleColorPicByColorLevel(curBelleData.colorLevel);
            m_EvaNextSubColor.text = StrDictionary.GetClientDictionaryString("#{10811}", nextTabBelleLevelup.SubLevel);
          //  m_EvaNextMainColor.color = BelleData.GetBelleColorByColorLevel(nextTabBelleLevelup.MainLevel);
            //m_EvaNextSubColor.color = m_EvaNextMainColor.color;

            //消耗类型图片 理论上应该消耗的统一接口，这里先这么着吧，改动不会经常改

            Tab_CommonItem item1 = TableManager.GetCommonItemByID(curTabBelleLevelup.GetConsumeSubTypebyIndex(0), 0);
            if (item1 != null)
            {
                m_EvaCostItem_1_Icon.spriteName = item1.Icon;
            }

            m_EvaCostItem_1_Count.text = curTabBelleLevelup.GetConsumeNumbyIndex(0).ToString();
            m_EvaCostItem_2_Count.text = curTabBelleLevelup.GetConsumeNumbyIndex(1).ToString();
            // 
            //             string attrTypeName = BelleData.GetBelleDescByColorLevel(nextTabBelleLevelup.MainLevel);
            //             strTip = StrDictionary.GetClientDictionaryString("#{1404}", attrTypeName, nextTabBelleLevelup.SubLevel, curTabBelleLevelup.GetConsumeNumbyIndex(0), curTabBelleLevelup.GetConsumeNumbyIndex(1));
        }
        // MessageBoxLogic.OpenOKCancelBox(strTip, "", DoEvlolution);
    }


    #endregion
    public void DoEvlolution()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
            if (belleTab == null)
                return;
            BelleData.delEvolution = UpdateAttrInfo;
            BelleData.delEvolutionRapid = UpdateAttrInfo;
            CG_BELLE_EVOLUTION evolutionRequest = (CG_BELLE_EVOLUTION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_EVOLUTION);
            evolutionRequest.SetBelleID(belleTab.Id);
            evolutionRequest.SendPacket();
        }
    }

    public void UpdateAttrInfo()
    {
        m_isNeedUpdate = true;
        if (BelleAttrInfoWindow.Instance() != null)
        {
            BelleAttrInfoWindow.Instance().SetBelleAttrData();
        }
        SetCombatValue();
        //碎片信息
        UpdateEvalutionInfo();

        //品阶信息
        updateBelleColor();

        if (BelleInfoWindow.Instance() != null)
        {
            BelleInfoWindow.Instance().UpdateScrollViewList();
        }

    }


    public void updateBelleColor()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

            if (null == belleTab)
            {
                LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
                return;
            }

            Belle curBelleData = null;
            if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
            {
                curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
            }

            if (null == curBelleData)
            {
                return;
            }
            //品阶
            m_curBelleMainColor.text = BelleData.GetBelleDescByColorLevel(curBelleData.colorLevel);
            m_curBelleMainColorPic.spriteName = BelleData.GetBelleColorPicByColorLevel(curBelleData.colorLevel);
            m_curBelleSubColor.text = StrDictionary.GetClientDictionaryString("#{10811}", curBelleData.subLevel);
            m_curBelleMainColor.color = BelleData.GetBelleColorByColorLevel(curBelleData.colorLevel);
            m_curBelleSubColor.color = BelleData.GetBelleColorByColorLevel(curBelleData.colorLevel);

            m_belleName.color = BelleData.GetBelleColorByColorLevel(curBelleData.colorLevel);
        }
    }

    public void OnClickBelleDesc()
    {
        m_belleDescObj.SetActive(!m_belleDescObj.activeSelf);
    }
    private int m_NewPlayerGuide_Step = -1;
    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        switch (nIndex)
        {
            case 1:
                // 指向角色属性（字典号11400）-187, 50
                NewPlayerGuidLogic.OpenWindow(m_belleAttrWin, 508, 318,
                    GCGame.Utils.GetDicByID(11400), "right", -1, true, true, false, null, null, -0.584f, 0.156f, true, false, () =>
                {
                    NewPlayerGuide(2);
                });
                
                break;
            case 2:
                // 指向宿命魔灵（字典号11401）-200, -218
                NewPlayerGuidLogic.OpenWindow(transform.FindChild("Foreordination").gameObject, 446, 124,
                    GCGame.Utils.GetDicByID(11401), "top", -1, true, true, false, null, null, -0.625f, -0.681f, true, false, () =>
                    {
                        NewPlayerGuide(3);
                    });

                break;
            case 3:
                // 关闭（字典号11402）
                NewPlayerGuidLogic.OpenWindow(transform.FindChild("Close").gameObject, 60, 60, Utils.GetDicByID(11402), "left", 0, true, true);
                break;
        }
    }
    public void OnClose(GameObject go)
    {
      gameObject.SetActive(false);
      if (EffectRoot != null) {
          EffectRoot.SetActive(true);
      }
      if (BelleController.Instance() != null)
      {
          if (BelleController.Instance().FTEIndex == 7)
          {
              NewPlayerGuidLogic.CloseWindow();
          }
      }
		ReFreshBelleState ();
    }
	private void ReFreshBelleState()//刷新魔灵的拥有状态
	{
		BelleShowWindow bsw = gameObject.GetComponentInParent<BelleShowWindow>();
		if (bsw != null) {
			bsw.UpdateNowClickGO();
		}
	}
    private void AdvanceOnDisable()
    {
      if (AdvancePlane != null) {
        AdvancePlane.SetActive(false);
      }
    }
    public void UpdateAdvanceBelleFragment()
    {
      int have = 0;
      int need = 0;
      GetBelleFragmentNum(out have, out need);
      if (have >= need) {
        if (AdvancePlane != null) {
          AdvancePlane.SetActive(false);
        }
      }
      m_curBelleItemCount.text = have.ToString() + "/" + need.ToString();
      if (need > 0) {
        BelleFragmentUS.transform.localScale = new Vector3((float)have / need, 1f, 1f);
      }
      SetData();
		ReFreshBelleState ();
    }
    public void UpdateAdvanceBelleFragmentInfo()
    {
        int have = 0;
        int need = 0;
        GetBelleFragmentNum(out have, out need);
        if (have >= need)
        {
            if (AdvancePlane != null)
            {
                AdvancePlane.SetActive(false);
            }
        }
        m_curBelleItemCount.text = have.ToString() + "/" + need.ToString();
        if (need > 0)
        {
            BelleFragmentUS.transform.localScale = new Vector3((float)have / need, 1f, 1f);
        }
        UpdateBelleFragmentInfo();
        ReFreshBelleState();
    }
    public void Advanced()
    {
        Tab_Belle belleTabC = BelleInfoWindow.Instance().CurSellectedBelleData;
        if (belleTabC != null && BelleData.OwnedBelleMap.ContainsKey(belleTabC.Id))
        {
            if (BelleData.OwnedBelleMap[belleTabC.Id].colorLevel == 5 && BelleData.OwnedBelleMap[belleTabC.Id].subLevel == 9)
            {
                GUIData.AddNotifyData2Client(false, "#{11321}");
                return;
            }
        }
      int have = 0;
      int need = 0;
      GetBelleFragmentNum(out have, out need);
      if (have >= need) {
          Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
          if (belleTab == null||!BelleData.OwnedBelleMap.ContainsKey(belleTab.Id)) { return; }

          Tab_BelleLevelup belleLevL = TableManager.GetBelleLevelupByID(belleTab.Id * Belle.ID_FACTOR + BelleData.OwnedBelleMap[belleTab.Id].orgLevel, 0);
          if (belleLevL.GetConsumeTypebyIndex(1) == 2)
          {
				MessageBoxLogic.OpenCostBox(StrDictionary.GetClientDictionaryString("#{11467}"), "", StrDictionary.GetClientDictionaryString("#{11466}"), StrDictionary.GetClientDictionaryString("#{11312}"), "qian1", "X" + belleLevL.GetConsumeNumbyIndex(1), AdvanceOK, null);
          }
      } else {
        if (AdvancePlane != null) {
          AdvancePlane.SetActive(!AdvancePlane.activeInHierarchy);
        }
      }
      if (BelleController.Instance() != null)
      {
          if (BelleController.Instance().FTEIndex == 3)
          {
              BelleController.Instance().DoFTE(4);
          }
          else if (BelleController.Instance().FTEIndex == 5)
          {
              BelleController.Instance().DoFTE(6);
          }
      }
    }
    private void AdvanceOK()
    {
        Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
        if (belleTab == null) { return; }
        CG_BELLE_EVOLUTION evolutionRequest = (CG_BELLE_EVOLUTION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_EVOLUTION);
        evolutionRequest.SetBelleID(belleTab.Id);
        evolutionRequest.SendPacket();
    }
    public void AdvancedOnce()
    {
      Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
      if (null == belleTab) { return; }
      CG_ASK_ABSORB_BELLEPIECE belleAbsorb = (CG_ASK_ABSORB_BELLEPIECE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_ABSORB_BELLEPIECE);
      belleAbsorb.SetIndex(belleTab.Id);
      belleAbsorb.SetAbsorbAll(0);
      belleAbsorb.SendPacket();
      if (BelleController.Instance() != null)
      {
          if (BelleController.Instance().FTEIndex == 4)
          {
              BelleController.Instance().DoFTE(5);
          }
      }
    }
    public void AdvanceFull()
    {
      Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
      if (null == belleTab) { return; }
      CG_ASK_ABSORB_BELLEPIECE belleAbsorb = (CG_ASK_ABSORB_BELLEPIECE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_ABSORB_BELLEPIECE);
      belleAbsorb.SetIndex(belleTab.Id);
      belleAbsorb.SetAbsorbAll(1);
      belleAbsorb.SendPacket();
    }
    private void GetBelleFragmentNum(out int have,out int need)
    {
      have = 0;
      need = 0;
      if (null == BelleInfoWindow.Instance()) {
        return;
      }
      Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
      if (null == belleTab) {
        return;
      }
      Belle curBelleData = null;
      if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id)) {
        curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
      }
      if (null == curBelleData) {
        return;
      }
      Tab_BelleLevelup curTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel, 0);
      if (null != curTabBelleLevelup && curTabBelleLevelup.getConsumeTypeCount() > 0) {
        need = curTabBelleLevelup.GetConsumeNumbyIndex(0);
      }
      BelleData.OwnedBelleAbsorbNum.TryGetValue(belleTab.Id, out have);
    }
    public GameObject AdvancePlane;
}
