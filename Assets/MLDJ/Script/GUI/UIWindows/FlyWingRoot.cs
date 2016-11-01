using UnityEngine;
using System.Collections;
using System.Linq;
using System.Text;
using System;
using Games.GlobeDefine;
using Module.Log;
using Games.LogicObj;
using System.Collections.Generic;
using Games.FlyWing;
using GCGame.Table;
using Games.Item;
using Games.FakeObject;
using Engine;
using GCGame;

public class FlyWingRoot : MonoBehaviour {

    private static FlyWingRoot m_Instance = null;
    public static FlyWingRoot Instance()
    {
        return m_Instance;
    }
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		
        if (m_isAutoAbsort == true)
        {
            m_LevelupBtn.gameObject.SetActive(false);
            m_LevelupBtn2.gameObject.SetActive(false);
            m_AutoAbsortTime += Time.deltaTime;
            if (m_AutoAbsortTime >= AUTO_ABSORT_TIME)
            {
                if (_IsEnoughMoney() && !_IsAdvance())
                {
                    m_AutoAbsortTime = 0.0f;
                    OnClickAbsortFlyWing();
                }
                else
                {
                    m_LevelupBtn.gameObject.SetActive(true);
                    m_LevelupBtn2.gameObject.SetActive(true);
                    m_isAutoAbsort = false;
                }
            }
        }
	}
    void OnEnable()
    {
        ShowFakeObjDream = false;
        m_Instance = this;
		_init ();
        m_isAutoAbsort = false;
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 19)
        {
            DoFTE(1);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }
    void OnDisable()
    {
        DestroyPartnerFakeObj();
        m_Instance = null;
    }
    //=============================
    private int m_CurWantEquipFlyWingId = GlobeVar.INVALID_ID;
    private int m_CurClickLevelFlyWingId = GlobeVar.INVALID_ID; 
    private const int FlyWingTypeOne = 1;
    private const int FlyWingTypeSecond = 2;
    private int m_PlayerFakeObjID = GlobeVar.INVALID_ID;
    private FakeObject m_PlayerFakeObj = null;
    private GameObject m_FakeObjGameObject = null;
    private float m_AutoAbsortTime = 0.0f;
    private bool m_isAutoAbsort = false;

    private const int MAX_WING_LV = 10;
    private const int MAX_ABSORB_TIMES= 23;
    private const float AUTO_ABSORT_TIME = 1.0f;
    private const int ABSORT_MONEY = 10000;
    private const int ABSORT_ITEM = 71001 ; //羽毛

  
    //====================================
    public UISlider m_UISlider;
    public ModelDragLogic m_ModelDrag;
    public GameObject m_DreamFlyWing ;
    public GameObject m_FakeObjTopLeft;
    public GameObject m_FakeObjBottomRight;
    public GameObject m_AbsortFlyWingBtn;

    public GameObject m_ChooseFlyWingKindOneLight;
    public GameObject m_ChooseFlyWingKindSecondLight;

    public GameObject m_ChooseFlyWingKindArrowOne;
    public GameObject m_ChooseFlyWingKindArrowTwo;

    public GameObject m_EquipFlyWingBtn;
    public GameObject m_UnEquipFlyWingBtn;
    public GameObject m_NoEnoughMoneyPrompt;

    public UIToggle m_ChooseShowHide;

    public UILabel m_FlyWingKindOneName;
    public UILabel m_FlyWingKindSecondName;
    public UILabel m_PropertyName1;
    public UILabel m_PropertyName2;
    public UILabel m_PropertyName3;
    public UILabel m_PropertyName4;
    public UILabel m_PropertyName5;
    public UILabel m_PropertyName6;

    public UILabel m_PropertyVlue1;
    public UILabel m_PropertyVlue2;
    public UILabel m_PropertyVlue3;
    public UILabel m_PropertyVlue4;
    public UILabel m_PropertyVlue5;
    public UILabel m_PropertyVlue6;

    public UILabel m_PropertyVlue_EX1;
    public UILabel m_PropertyVlue_EX2;
    public UILabel m_PropertyVlue_EX3;
    public UILabel m_PropertyVlue_EX4;
    public UILabel m_PropertyVlue_EX5;
    public UILabel m_PropertyVlue_EX6;

    public UILabel m_PropertyNameNow;
    public UILabel m_PropertyVlueNow;

    public UISprite[] m_CurFlyWingLevelIcon;
    public UISprite[] m_CurFlyWingLevelClickIcon;
    public UILabel[]  m_CurFlyWingLevelLabel;

    public UIImageButton m_FlyWingDreamBtn;

    public UILabel m_FightVlue; // 战力的 。。

    public UILabel m_IsWingEquipLabel; //显示已装备

    public UIImageButton m_LevelupBtn;
    public UIImageButton m_LevelupBtn2;
    public GameObject m_CloseBtn;

    // 当前是否显示在 幻化翅膀的界面 （true）,主界面
    private bool m_IsShowFakeObjDream = false;
    public bool ShowFakeObjDream
    {
        get { return m_IsShowFakeObjDream; }
        set { m_IsShowFakeObjDream = value; }

    }
    public void SetFlightVlue(int flghtVlue)
    {
        m_FightVlue.text = flghtVlue.ToString();
    }
    public int GetFlyWingFakeObjIdForShow()
    {
        if (m_IsShowFakeObjDream)
        {
            return m_DreamFlyWing.GetComponent<FlyWingDream>().CurClickItem;
             
        }
        else
        {
            if (m_CurClickLevelFlyWingId != GlobeVar.INVALID_ID)
                return m_CurClickLevelFlyWingId;

            return m_CurWantEquipFlyWingId;
        }
    }

    public GameObject GetFlyWingDreamWin()
    {
        return m_DreamFlyWing;
    }
    public void UpdataFlyWingDataById(int olbId ,int newId)
    {
        if (olbId != m_CurWantEquipFlyWingId || m_CurWantEquipFlyWingId == GlobeVar.INVALID_ID || olbId == GlobeVar.INVALID_ID)
            return;
        //m_CurWantEquipFlyWingId = newId;
        _init();
        //UpdateInit();
   
    }
    // 提升
    public void OnClickUpataFlyWingBtn()
    {
        // 进阶
        if (_IsAdvance())
        {
            CG_ASK_EQUIPFLYWING packet = (CG_ASK_EQUIPFLYWING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_EQUIPFLYWING);
            packet.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_ADVANCE);
            packet.SetFlyWingId1(m_CurWantEquipFlyWingId);
            packet.SendPacket();
        }

        else
        {
            if (_IsEnoughMoney())
            {
                m_AbsortFlyWingBtn.SetActive(true);
                if (mFTEIndex == 2)
                {
                    DoFTE(3);
                }
            }
            else
            {
                m_NoEnoughMoneyPrompt.SetActive(true);
            }
        }
    }

    // 吸收
    public void OnClickAbsortFlyWing()
    {
        m_AbsortFlyWingBtn.SetActive(false);

        CG_ASK_EQUIPFLYWING packet = (CG_ASK_EQUIPFLYWING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_EQUIPFLYWING);
        packet.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_ABSORT);
        packet.SetFlyWingId1(m_CurWantEquipFlyWingId);
        packet.SendPacket();

       if (mFTEIndex == 3)
       {
           DoFTE(4);
       }
    }

    // 自动吸收
    public void OnAutoAbsortFlyWing()
    {
        m_AbsortFlyWingBtn.SetActive(false);
        m_isAutoAbsort = true;
        m_AutoAbsortTime = 0.0f;
    }

    public void onUnEquipFlyWing()
    {
        CG_ASK_EQUIPFLYWING pack = (CG_ASK_EQUIPFLYWING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_EQUIPFLYWING);
        pack.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_UNEQUIP);
        pack.SendPacket();

       // _onCombatChange();
    }

    public void onEquipFlyWing()
    {
        if (m_CurWantEquipFlyWingId != GlobeVar.INVALID_ID)
        {
            CG_ASK_EQUIPFLYWING pack = (CG_ASK_EQUIPFLYWING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_EQUIPFLYWING);
            pack.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_EQUIP);
            pack.SetFlyWingId1(m_CurWantEquipFlyWingId);
            pack.SendPacket();

           if (mFTEIndex == 1)
           {
               DoFTE(2);
           }
        }
    }
    public void onChooseFirst()
    {
        Dictionary<int, FlyWingData> temFlyWingDataDic = GameManager.gameManager.FlyWingMananger.GetFlyWingDataDictionary();
        if (temFlyWingDataDic.Count <= 0)
            return;

        foreach (KeyValuePair<int, FlyWingData> kvp in temFlyWingDataDic)
        {
          Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(kvp.Key, 0);
          if (flyWingTab != null && flyWingTab.ID == FlyWingTypeOne)
           {
               m_CurWantEquipFlyWingId = flyWingTab.INDEX;
               m_ChooseFlyWingKindOneLight.SetActive(true);
               m_ChooseFlyWingKindSecondLight.SetActive(false);

               m_FlyWingKindOneName.text = flyWingTab.Name;
               showEquipBtn(m_CurWantEquipFlyWingId);

               // 默认点击当前属性
               Tab_FlyWing curEquipFlyWingTab = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId, 0);
               if (curEquipFlyWingTab != null)
                   _OnClickPropertyBtn(curEquipFlyWingTab.LEVEL);

              //重新加载次模型
               CreatePartnerFakeObj();
               _updateFlyWingLable();
               return;
           }
         }
        m_CurWantEquipFlyWingId = GlobeVar.INVALID_ID;
    }

    public void onChooseSecond()
    {
        Dictionary<int, FlyWingData> temFlyWingDataDic = GameManager.gameManager.FlyWingMananger.GetFlyWingDataDictionary();
        if (temFlyWingDataDic.Count <= 0)
            return;

        foreach (KeyValuePair<int, FlyWingData> kvp in temFlyWingDataDic)
        {
            Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(kvp.Key, 0);
            if (flyWingTab != null && flyWingTab.ID == FlyWingTypeSecond)
            {
                m_CurWantEquipFlyWingId = flyWingTab.INDEX;
                m_ChooseFlyWingKindOneLight.SetActive(false);
                m_ChooseFlyWingKindSecondLight.SetActive(true);

                m_FlyWingKindSecondName.text = flyWingTab.Name;
                showEquipBtn(m_CurWantEquipFlyWingId);

                // 默认点击当前属性
                Tab_FlyWing curEquipFlyWingTab = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId, 0);
                if (curEquipFlyWingTab != null)
                    _OnClickPropertyBtn(curEquipFlyWingTab.LEVEL);

                //重新加载次模型
                CreatePartnerFakeObj();
                _updateFlyWingLable();
                return;
            }
        }
        m_CurWantEquipFlyWingId = GlobeVar.INVALID_ID;
    }
    public void OnChangeShowHide()
    {
		CG_ASK_EQUIPFLYWING packet = (CG_ASK_EQUIPFLYWING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_EQUIPFLYWING);
        if (m_ChooseShowHide.value == true)
        {
			packet.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_SHOWHIDE);
			packet.SetFlyWingId1(0);
			packet.SendPacket();
        }
        else
        {
			packet.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_SHOWHIDE);
			packet.SetFlyWingId1(1);
			packet.SendPacket();
        }
    }
    public void ShowAllPropertyByEquipFlyWingId()
    {
        if (m_CurWantEquipFlyWingId != GlobeVar.INVALID_ID)
        {
            ShowAllProperty(m_CurWantEquipFlyWingId);
        }
    }
    public void ShowAllProperty(int id)
    {
        _showBasePropertyByEquipFlyWingId(id);
        _showExtraPropertyByEquipFlyWingId(id);
        _setFlyWingSlider();  // 百分比
        showNowFlyWingProperty();
    }
    public void OnClickPropertyBtn1()
    {
        _OnClickPropertyBtn(1);
    }
    public void OnClickPropertyBtn2()
    {
        _OnClickPropertyBtn(2);
    }
    public void OnClickPropertyBtn3()
    {
        _OnClickPropertyBtn(3);
    }
    public void OnClickPropertyBtn4()
    {
        _OnClickPropertyBtn(4);
    }
    public void OnClickPropertyBtn5()
    {
        _OnClickPropertyBtn(5);
    }
    public void OnClickPropertyBtn6()
    {
        _OnClickPropertyBtn(6);
    }
    public void OnClickPropertyBtn7()
    {
        _OnClickPropertyBtn(7);
    }
    public void OnClickPropertyBtn8()
    {
        _OnClickPropertyBtn(8);
    }
    public void OnClickPropertyBtn9()
    {
        _OnClickPropertyBtn(9);
    }
    public void OnClickPropertyBtn10()
    {
        _OnClickPropertyBtn(10);
    }
    public void OnCloseFlyWingRoot()
    {
        mFTEIndex = -1;
        onCloseDreamWin();
		DestroyPartnerFakeObj ();
        UIManager.CloseUI(UIInfo.FlyWingRoot);
    }
    public void OnDreamFlyWing()
    {
        m_DreamFlyWing.SetActive(true);
        DestroyPartnerFakeObj();
    }
    public void onCloseDreamWin()
    {
        if (m_DreamFlyWing.GetComponent<FlyWingDream>())
            m_DreamFlyWing.GetComponent<FlyWingDream>().DestroyPartnerFakeObj();

        //所有界面只能同时存在一个obj。。。 再重新生成一个
        ShowFakeObjDream = false;
        CreatePartnerFakeObj();
        m_DreamFlyWing.SetActive(false);
        ShowFakeObjDream = false;
    }
    public void onClosePrompt()
    {
        m_NoEnoughMoneyPrompt.SetActive(false);
    }
    public void showEquipBtn( int curClickId)
    {
        if (GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId != GlobeVar.INVALID_ID && curClickId == GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId)
        {
            m_EquipFlyWingBtn.SetActive(false);
            m_UnEquipFlyWingBtn.SetActive(true);
            m_IsWingEquipLabel.gameObject.SetActive(true);
            Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId, 0);
            if (flyWingTab.ID == FlyWingTypeOne)
            {
                m_ChooseFlyWingKindArrowOne.SetActive(true);
                m_ChooseFlyWingKindArrowTwo.SetActive(false);
            }
            else
            {
                m_ChooseFlyWingKindArrowOne.SetActive(false);
                m_ChooseFlyWingKindArrowTwo.SetActive(true);
            }
        }
        else if (GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId != GlobeVar.INVALID_ID)
        {
            m_EquipFlyWingBtn.SetActive(true);
            m_UnEquipFlyWingBtn.SetActive(false);
            m_IsWingEquipLabel.gameObject.SetActive(false);
            Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId, 0);
            if (flyWingTab.ID == FlyWingTypeOne)
            {
                m_ChooseFlyWingKindArrowOne.SetActive(true);
                m_ChooseFlyWingKindArrowTwo.SetActive(false);
            }
            else
            {
                m_ChooseFlyWingKindArrowOne.SetActive(false);
                m_ChooseFlyWingKindArrowTwo.SetActive(true);
            }
        }
        else
        {
            m_EquipFlyWingBtn.SetActive(true);
            m_UnEquipFlyWingBtn.SetActive(false);
            m_IsWingEquipLabel.gameObject.SetActive(false);
            m_ChooseFlyWingKindArrowOne.SetActive(false);
            m_ChooseFlyWingKindArrowTwo.SetActive(false);
        }
    }

    public void showDreamBtn()
    {
        m_DreamFlyWing.GetComponent<FlyWingDream>().showDreamBtn();
    }
    //======================================
    private void showNowFlyWingProperty()
    {
        if (m_CurWantEquipFlyWingId == GlobeVar.INVALID_ID)
        {
            m_PropertyNameNow.text = "";
            m_PropertyVlueNow.text = "";
            return;
        }

        Tab_FlyWing curEquipFlyWingTab = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId, 0);
        if (curEquipFlyWingTab == null)
            return;

        if (curEquipFlyWingTab.ABSORBID <= (int)COMBATATTE.INVALID || curEquipFlyWingTab.ABSORBID >= (int)COMBATATTE.COMBATATTE_MAXNUM)
            return;

        string propertyName = ItemTool.ConvertAttrToString((COMBATATTE)curEquipFlyWingTab.ABSORBID);
        m_PropertyNameNow.text = propertyName;
        m_PropertyVlueNow.text = string.Format("+{0}", curEquipFlyWingTab.ABSORBVLUE);

    }
    private int _OnClickPropertyBtn(int advanceLevel)
    {
        if ( m_CurWantEquipFlyWingId== GlobeVar.INVALID_ID)
             return GlobeVar.INVALID_ID;
         
        Tab_FlyWing curEquipFlyWingTab = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId,0);
        if(curEquipFlyWingTab == null)
             return GlobeVar.INVALID_ID;

        if (advanceLevel < curEquipFlyWingTab.LEVEL || advanceLevel > curEquipFlyWingTab.LEVEL + 1)
             return GlobeVar.INVALID_ID; 

        _showClickAbsortFlyWingIcon(advanceLevel);

        for (int i = 0; i < m_CurFlyWingLevelLabel.Length; ++i)
        {
            m_CurFlyWingLevelLabel[i].gameObject.SetActive(true);
            m_CurFlyWingLevelLabel[i].text = "";
        }

        if (advanceLevel - 1 < 0 || advanceLevel - 1 >= m_CurFlyWingLevelLabel.Length)
            return GlobeVar.INVALID_ID;

        m_CurFlyWingLevelLabel[advanceLevel - 1].text = advanceLevel.ToString();

        if (curEquipFlyWingTab.LEVEL == advanceLevel)
		{
			ShowAllProperty(curEquipFlyWingTab.INDEX);
            m_CurClickLevelFlyWingId = curEquipFlyWingTab.INDEX;
            CreatePartnerFakeObj();
            return curEquipFlyWingTab.INDEX;
		}
        else if (advanceLevel == curEquipFlyWingTab.LEVEL + 1)
        {
            Tab_FlyWing tar = null;
            int minAbsorbNum = -1;
            for (int i = 0; i < TableManager.GetFlyWing().Count; ++i)
            {
                Tab_FlyWing temFlyWingTab = TableManager.GetFlyWingByID(i, 0);
                if (temFlyWingTab == null)
                    continue;

                if (curEquipFlyWingTab.ID == temFlyWingTab.ID && curEquipFlyWingTab.LEVEL + 1 == temFlyWingTab.LEVEL)
                {
                    if (minAbsorbNum == -1 || temFlyWingTab.ABSORBNUM < minAbsorbNum)
                    {
                        tar = temFlyWingTab;
                        minAbsorbNum = temFlyWingTab.ABSORBNUM;
                    }
                }

                if (tar != null)
                {
                    ShowAllProperty(temFlyWingTab.INDEX);
                    m_CurClickLevelFlyWingId = temFlyWingTab.INDEX;
                    CreatePartnerFakeObj();
                    return temFlyWingTab.INDEX;
                }
            }
        }
        return GlobeVar.INVALID_ID;
    }
    private void _showBasePropertyByEquipFlyWingId(int id)
    {
        // if (GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId != GlobeVar.INVALID_ID)
        {
            Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(id, 0);
            if (flyWingTab != null)
            {
                if(flyWingTab.BASE1ID != GlobeVar.INVALID_ID &&  flyWingTab.BASE1VLUE != GlobeVar.INVALID_ID )
                {
                    if (flyWingTab.BASE1ID > (int)COMBATATTE.INVALID && flyWingTab.BASE1ID < (int)COMBATATTE.COMBATATTE_MAXNUM)
                    {
                        string propertyName = ItemTool.ConvertAttrToString((COMBATATTE)flyWingTab.BASE1ID);
                        m_PropertyName1.text = propertyName;
                        m_PropertyVlue1.text = string.Format("+{0}", flyWingTab.BASE1VLUE);
                    }
                    else
                    {
                        m_PropertyName1.text = "";
                        m_PropertyVlue1.text = "";
                    }
                }

                if (flyWingTab.BASE2ID != GlobeVar.INVALID_ID && flyWingTab.BASE2VLUE != GlobeVar.INVALID_ID)
                {
                    if (flyWingTab.BASE2ID > (int)COMBATATTE.INVALID && flyWingTab.BASE2ID < (int)COMBATATTE.COMBATATTE_MAXNUM)
                    {
                        string propertyName = ItemTool.ConvertAttrToString((COMBATATTE)flyWingTab.BASE2ID);
                        m_PropertyName2.text = propertyName;
                        m_PropertyVlue2.text = string.Format("+{0}", flyWingTab.BASE2VLUE);
                    }

                    else
                    {
                        m_PropertyName2.text = "";
                        m_PropertyName2.text = "";
                    }
                }

                if (flyWingTab.BASE3ID != GlobeVar.INVALID_ID && flyWingTab.BASE3VLUE != GlobeVar.INVALID_ID)
                {
                    if (flyWingTab.BASE3ID > (int)COMBATATTE.INVALID && flyWingTab.BASE3ID < (int)COMBATATTE.COMBATATTE_MAXNUM)
                    {
                        string propertyName = ItemTool.ConvertAttrToString((COMBATATTE)flyWingTab.BASE3ID);
                        m_PropertyName3.text = propertyName;
                        m_PropertyVlue3.text = string.Format("+{0}", flyWingTab.BASE3VLUE);
                    }

                    else
                    {
                        m_PropertyName3.text = "";
                        m_PropertyVlue3.text = "";
                    }
                }

                if (flyWingTab.BASE4ID != GlobeVar.INVALID_ID && flyWingTab.BASE4VLUE != GlobeVar.INVALID_ID)
                {
                    if (flyWingTab.BASE4ID > (int)COMBATATTE.INVALID && flyWingTab.BASE4ID < (int)COMBATATTE.COMBATATTE_MAXNUM)
                    {
                        string propertyName = ItemTool.ConvertAttrToString((COMBATATTE)flyWingTab.BASE4ID);
                        m_PropertyName4.text = propertyName;
                        m_PropertyVlue4.text = string.Format("+{0}", flyWingTab.BASE4VLUE);
                    }

                    else
                    {
                        m_PropertyName4.text = "";
                        m_PropertyVlue4.text = "";
                    }
                }

                if (flyWingTab.BASE5ID != GlobeVar.INVALID_ID && flyWingTab.BASE5VLUE != GlobeVar.INVALID_ID)
                {
                    if (flyWingTab.BASE5ID > (int)COMBATATTE.INVALID && flyWingTab.BASE5ID < (int)COMBATATTE.COMBATATTE_MAXNUM)
                    {
                        string propertyName = ItemTool.ConvertAttrToString((COMBATATTE)flyWingTab.BASE5ID);
                        m_PropertyName5.text = propertyName;
                        m_PropertyVlue5.text = string.Format("+{0}", flyWingTab.BASE5VLUE);
                    }
                    else
                    {
                        m_PropertyName5.text = "";
                        m_PropertyVlue5.text = "";
                    }
                }

                if (flyWingTab.BASE6ID != GlobeVar.INVALID_ID && flyWingTab.BASE6VLUE != GlobeVar.INVALID_ID)
                {
                    if (flyWingTab.BASE6ID > (int)COMBATATTE.INVALID && flyWingTab.BASE6ID < (int)COMBATATTE.COMBATATTE_MAXNUM)
                    {
                        string propertyName = ItemTool.ConvertAttrToString((COMBATATTE)flyWingTab.BASE6ID);
                        m_PropertyName6.text = propertyName;
                        m_PropertyVlue6.text = string.Format("+{0}", flyWingTab.BASE6VLUE);
                    }
                    else
                    {
                        m_PropertyName6.text = "";
                        m_PropertyVlue6.text = "";
                    }
                }    
            }
        }
    }

    private void _showExtraPropertyByEquipFlyWingId(int id)
    {
        Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(id,0);
        if (flyWingTab != null)
        {
            int property1 = 0;
            int property2 = 0;
            int property3 = 0;
            int property4 = 0;
            int property5 = 0;
            int property6 = 0;
            int property1_ex = 0;
            int property2_ex = 0;
            int property3_ex = 0;
            int property4_ex = 0;
            int property5_ex = 0;
            int property6_ex = 0;

            for (int i = 0; i < TableManager.GetFlyWing().Count; ++i)
            {
                Tab_FlyWing temFlyWing = TableManager.GetFlyWingByID(i,0);
                if(temFlyWing == null)
                    continue;

//                 if (flyWingTab.ID != temFlyWing.ID || flyWingTab.LEVEL != temFlyWing.LEVEL || (flyWingTab.LEVEL == temFlyWing.LEVEL && flyWingTab.ABSORBNUM != temFlyWing.ABSORBNUM ))
//                     continue;
                if ((flyWingTab.INDEX + 1) != temFlyWing.INDEX)
                    continue;

                if (flyWingTab.BASE1ID == flyWingTab.ABSORBID)
                {
                    property1_ex += flyWingTab.ABSORBVLUE;
                }
                else if (flyWingTab.BASE2ID == flyWingTab.ABSORBID)
                {
                    property2_ex += flyWingTab.ABSORBVLUE;
                }
                else if (flyWingTab.BASE3ID == flyWingTab.ABSORBID)
                {
                    property3_ex += flyWingTab.ABSORBVLUE;
                }
                else if (flyWingTab.BASE4ID == flyWingTab.ABSORBID)
                {
                    property4_ex += flyWingTab.ABSORBVLUE;
                }
                else if (flyWingTab.BASE5ID == flyWingTab.ABSORBID)
                {
                    property5_ex += flyWingTab.ABSORBVLUE;
                }
                else if (flyWingTab.BASE6ID == flyWingTab.ABSORBID)
                {
                    property6_ex += flyWingTab.ABSORBVLUE;
                }
                property1 = temFlyWing.BASE1VLUE - flyWingTab.BASE1VLUE;
                property2 = temFlyWing.BASE2VLUE - flyWingTab.BASE2VLUE;
                property3 = temFlyWing.BASE3VLUE - flyWingTab.BASE3VLUE;
                property4 = temFlyWing.BASE4VLUE - flyWingTab.BASE4VLUE;
                property5 = temFlyWing.BASE5VLUE - flyWingTab.BASE5VLUE;
                property6 = temFlyWing.BASE6VLUE - flyWingTab.BASE6VLUE;
            }

            if (property1 > 0)
                m_PropertyVlue_EX1.text = string.Format("+{0}", property1);
            else
                m_PropertyVlue_EX1.text = "";

            if (property2 > 0)
                m_PropertyVlue_EX2.text = string.Format("+{0}", property2);
            else
                m_PropertyVlue_EX2.text = "";

            if (property3 > 0)
                m_PropertyVlue_EX3.text = string.Format("+{0}", property3);
            else
                m_PropertyVlue_EX3.text = "";

            if (property4 > 0)
                m_PropertyVlue_EX4.text = string.Format("+{0}", property4);
            else
                m_PropertyVlue_EX4.text = "";

            if (property5 > 0)
                m_PropertyVlue_EX5.text = string.Format("+{0}", property5);
            else
                m_PropertyVlue_EX5.text = "";

            if (property6 > 0)
                m_PropertyVlue_EX6.text = string.Format("+{0}", property6);
            else
                m_PropertyVlue_EX6.text = "";

        }
    }

    private void DestroyPartnerFakeObj()
    {
        if (m_PlayerFakeObj != null)
        {
            m_PlayerFakeObj.Destroy();
            m_PlayerFakeObj = null;
        }
    }
    private void CreatePartnerFakeObj()
    {
        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjTopLeft, m_FakeObjBottomRight);
        GameManager.gameManager.ActiveScene.ShowFakeObj();

        int pro = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
        if (m_PlayerFakeObj != null)
        {
            DestroyPartnerFakeObj();
        }
        CharacterDefine.PROFESSION profession = (CharacterDefine.PROFESSION)pro;
        //对应FakeObject.txt配置
        int fakeObjId = -1;
        switch (profession)
        {
            case CharacterDefine.PROFESSION.SHAOLIN:
                fakeObjId = 114;
                break;
            case CharacterDefine.PROFESSION.TIANSHAN:
                fakeObjId = 115;
                break;
            case CharacterDefine.PROFESSION.DALI:
                fakeObjId = 117;
                break;
            case CharacterDefine.PROFESSION.XIAOYAO:
                fakeObjId = 116;
                break;
            case CharacterDefine.PROFESSION.GAIBANG:
                fakeObjId = 62;
                break;
            default:
                fakeObjId = 114;
                break;
        }

        m_PlayerFakeObj = new FakeObject();
        if (m_PlayerFakeObj == null)
        {
            m_CurClickLevelFlyWingId = GlobeVar.INVALID_ID;
            return;
        }

        m_PlayerFakeObjID = fakeObjId;
        m_PlayerFakeObj.initFakeObject(fakeObjId,GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FakeObjGameObject);
        if (null != m_PlayerFakeObj.ObjAnim)
            m_ModelDrag.ModelTrans = m_PlayerFakeObj.ObjAnim.transform;

        m_CurClickLevelFlyWingId = GlobeVar.INVALID_ID;
    }
    private void _setFlyWingSlider()
    {
        if (m_CurWantEquipFlyWingId == GlobeVar.INVALID_ID)
            return;

        Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId, 0);
        if (flyWingTab == null)
            return;

        int AbsortMax = _GetAbsortMax(m_CurWantEquipFlyWingId);
        //if (AbsortMax == GlobeVar.INVALID_ID || AbsortMax == 0)
		if( AbsortMax <= 1 || flyWingTab.ABSORBNUM  < 0 )
            return;

		//m_UISlider.sliderValue = ( (float)flyWingTab.ABSORBNUM - 1 ) / ( AbsortMax - 1);
        if (flyWingTab.ABSORBID == 0)
            m_UISlider.sliderValue = 0;
        else if (flyWingTab.ABSORBID == 3 || flyWingTab.ABSORBID == 5)
            m_UISlider.sliderValue = (float)1 / 4;
        else if (flyWingTab.ABSORBID == 4 || flyWingTab.ABSORBID == 6)
            m_UISlider.sliderValue = (float)2 / 4;
        else if (flyWingTab.ABSORBID == 7 || flyWingTab.ABSORBID == 8)
            m_UISlider.sliderValue = (float)3 / 4;
        else if (flyWingTab.ABSORBID == 9 || flyWingTab.ABSORBID == 10)
            m_UISlider.sliderValue = (float)4 / 4;
    }
    private int _GetAbsortMax( int id)
    {
        Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId,0);
        if (flyWingTab == null)
            return GlobeVar.INVALID_ID;

        int maxAbsorbMax = GlobeVar.INVALID_ID;
        for (int i = 0; i < TableManager.GetFlyWing().Count; ++i)
        {
            Tab_FlyWing temFlyWing = TableManager.GetFlyWingByID(i, 0);
            if (temFlyWing != null)
            {
                if (flyWingTab.ID == temFlyWing.ID && flyWingTab.LEVEL == temFlyWing.LEVEL)
                {
                    if (maxAbsorbMax < temFlyWing.ABSORBNUM)
                        maxAbsorbMax = temFlyWing.ABSORBNUM;
                }
            }
        }
        return maxAbsorbMax;
    }
    private bool _IsEnoughMoney()
    {
        if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(ABSORT_ITEM) < 5 )
            return false;

        if (GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin() <= ABSORT_MONEY)
            return false ;

        return true;
    }
    private bool _IsAdvance()
    {
        if (m_CurWantEquipFlyWingId == GlobeVar.INVALID_ID)
            return false;

        Tab_FlyWing temFlyWing = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId,0);
        if (temFlyWing == null)
            return false;

        // 该是 升阶了
        if( _GetAbsortMax(m_CurWantEquipFlyWingId) <= temFlyWing.ABSORBNUM)
            return true;

        return false;
    }

    private bool _IsMaxAdvance()
    {
        Tab_FlyWing temFlyWing = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId, 0);
        if (temFlyWing == null)
        {
            return false;
        }
        if (MAX_ABSORB_TIMES == temFlyWing.ABSORBNUM && MAX_WING_LV == temFlyWing.LEVEL)
        {
            return true;
        }

        return false;
    }
    private void _showAbsortFlyWingIcon()
    {
        if (m_CurWantEquipFlyWingId == GlobeVar.INVALID_ID)
            return ;

        Tab_FlyWing temFlyWing = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId,0);
        if (temFlyWing == null)
            return ;

        for (int i = 0; i < m_CurFlyWingLevelIcon.Length; ++i)
        {
            // 已经获得的等级
            m_CurFlyWingLevelIcon[i].gameObject.SetActive(true);
            if (temFlyWing.LEVEL >= i + 1)
            {
                 m_CurFlyWingLevelIcon[i].spriteName = "pinjie2";
            }

            else
            {
                m_CurFlyWingLevelIcon[i].spriteName = "pinjie3";
            }
        }
    }
    private void _showClickAbsortFlyWingIcon( int absortId )
    {
        for (int i = 0; i < m_CurFlyWingLevelClickIcon.Length; ++i)
        {
            m_CurFlyWingLevelClickIcon[i].spriteName = "";
            m_CurFlyWingLevelClickIcon[i].gameObject.SetActive(false);
        }

        if (m_CurWantEquipFlyWingId == GlobeVar.INVALID_ID)
            return;

        Tab_FlyWing temFlyWing = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId, 0);
        if (temFlyWing == null)
            return;

        if (absortId - 1 < 0 || absortId - 1 >= m_CurFlyWingLevelClickIcon.Length)
            return;

        // 已经获得的等级
        if (absortId <= temFlyWing.LEVEL)
        {
            m_CurFlyWingLevelClickIcon[absortId -1].spriteName = "pinjie1";
            m_CurFlyWingLevelClickIcon[absortId - 1].gameObject.SetActive(true);
        }

        else
        {
            m_CurFlyWingLevelClickIcon[absortId -1].spriteName = "pinjie3";
            m_CurFlyWingLevelClickIcon[absortId - 1].gameObject.SetActive(true);
        }
    }

    private void _init()
    {
        if (GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId  == GlobeVar.INVALID_ID)
        {
            onChooseFirst();
            NGUITools.SetActive(m_ChooseFlyWingKindArrowOne, false);
            NGUITools.SetActive(m_ChooseFlyWingKindArrowTwo, false);
        }
        else
        {
            Tab_FlyWing flyWingTab;

            // update tab
            if (m_CurWantEquipFlyWingId != -1)
            {
                flyWingTab = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId, 0);
            }
            else
            {
                flyWingTab = TableManager.GetFlyWingByID(GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId, 0);
            }

            if (flyWingTab.ID == FlyWingTypeOne)
            {
                onChooseFirst();
            }
            else if (flyWingTab.ID == FlyWingTypeSecond)
            {
                onChooseSecond();
            }
        }

        // 关闭幻化界面
        onCloseDreamWin();

        // 提示界面
        m_NoEnoughMoneyPrompt.SetActive(false);

        //加载模型
        m_CurClickLevelFlyWingId = GlobeVar.INVALID_ID;
        CreatePartnerFakeObj();
        ShowAllPropertyByEquipFlyWingId();
        //showNowFlyWingProperty();

        // 百分比属性
        _showAbsortFlyWingIcon();

        // 申请战力
        _onCombatChange();

        showDreamBtn();

        //是否显示隐藏翅膀
        m_ChooseShowHide.value = !GameManager.gameManager.FlyWingMananger.IsShowFlyWing;

        //更新金钱
        UpdateMoneyInfo();

        // 更新按钮显示文字
        _updateFlyWingLable();

    }
    public UILabel m_ButtonLable1;
    public UILabel m_ButtonLable2;
    private void _updateFlyWingLable()
    {
        Tab_FlyWing temFlyWing = TableManager.GetFlyWingByID(m_CurWantEquipFlyWingId, 0);
        if (temFlyWing.LEVEL == MAX_WING_LV && temFlyWing.ABSORBNUM == MAX_ABSORB_TIMES && temFlyWing != null)
        {
            m_ButtonLable1.transform.parent.parent.gameObject.SetActive(false);
        }
        else if (temFlyWing != null)
        {
            m_ButtonLable1.transform.parent.parent.gameObject.SetActive(true);
        }
        if (!_IsAdvance())
        {
            m_ButtonLable1.transform.parent.gameObject.SetActive(true);
            m_ButtonLable1.gameObject.SetActive(true);
            m_ButtonLable2.gameObject.SetActive(false);
        }
        else
        {
            if (_IsMaxAdvance())
            {
                m_ButtonLable1.transform.parent.gameObject.SetActive(false);
            }
            else
            {
                m_ButtonLable1.transform.parent.gameObject.SetActive(true);
                m_ButtonLable1.gameObject.SetActive(false);
                m_ButtonLable2.gameObject.SetActive(true);
            }
        }
    }
    private void _onCombatChange()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer != null)
        {
            CG_ASK_ROLE_DATA askPak = (CG_ASK_ROLE_DATA)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_ROLE_DATA);
            askPak.SetUserguid(_mainPlayer.GUID);
            askPak.SendPacket();
        } 
    }

    // 更新金钱
    public UILabel m_MoneyLab;
    public void UpdateMoneyInfo()
    {
        m_MoneyLab.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
    }

    void OnCloseFlyWingMenu(GameObject go)
    {
        NGUITools.SetActive(go, false);
    }
    public void updateShowHide(bool state)
    {
        m_ChooseShowHide.value = !state;
    }

    int mFTEIndex = -1;
    public void DoFTE(int index)
    {
        mFTEIndex = index;
        switch (mFTEIndex)
        {
            case 1:
                // 点击装备
                NewPlayerGuidLogic.OpenWindow(m_EquipFlyWingBtn, 160, 50, Utils.GetDicByID(11403), "right", 0, true, true);
                break;
            case 2:
                // 强制点击升级按钮
                NewPlayerGuidLogic.OpenWindow(m_LevelupBtn.gameObject, 160, 60, "", "left", 0, true, true);
                break;
            case 3:
                // 强制点击升一级
                NewPlayerGuidLogic.OpenWindow(m_AbsortFlyWingBtn.transform.FindChild("tishengBtn").gameObject, 200, 55, "", "left", 0, true, true);
                break;
            case 4:
                // 关闭按钮（字典号11404）
                NewPlayerGuidLogic.OpenWindow(m_CloseBtn, 100, 80, Utils.GetDicByID(11404), "left", 0, true, true);
                break;
        }
    }
}
//10876 进阶 