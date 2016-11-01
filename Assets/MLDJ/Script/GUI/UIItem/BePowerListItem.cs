using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;

public class BePowerListItem : MonoBehaviour
{
    private BePowerData.BePowerListItemData m_data;

    public UILabel m_labelTitle;
    public UILabel m_labelDesc;
    public UILabel m_labelFuncBtn1;
    public GameObject m_FunctionButton1;
    public UILabel m_labelFuncBtn2;
    public GameObject m_FunctionButton2;
    
    public static BePowerListItem CreateItem(GameObject grid, GameObject resItem, string name, BePowerWindow parent, BePowerData.BePowerListItemData data)
    {
        GameObject curItem = Utils.BindObjToParent(resItem, grid, name);
        if (null != curItem)
        {
            BePowerListItem curItemComponent = curItem.GetComponent<BePowerListItem>();
            if (null != curItemComponent)
                curItemComponent.SetData(parent, data);

            return curItemComponent;
        }

        return null;
    }

    void SetFunctionBtn(int idx)
    {
        if (idx == 1)
        {
            if (m_data.btnDict > 0 && null != m_labelFuncBtn1)
            {
                m_labelFuncBtn1.text = Utils.GetDicByID(m_data.btnDict);
            }
            else if (null != m_labelFuncBtn1)
            {
                m_labelFuncBtn1.text = "";
            }


            if (null != m_FunctionButton1)
            {
                m_FunctionButton1.SetActive((bool)(m_data.btnDict > 0));
            }

        }

        if (idx == 2)
        {
            if (m_data.btnDict2 > 0 && null != m_labelFuncBtn2)
            {
                m_labelFuncBtn2.text = Utils.GetDicByID(m_data.btnDict2);
            }

            if (null != m_FunctionButton2)
            {
                m_FunctionButton2.SetActive((bool)(m_data.btnDict2 > 0));
            }

        }
        
    }

    public void SetData(BePowerWindow parent, BePowerData.BePowerListItemData data)
    {
        m_data = data;
        m_labelDesc.text = Utils.GetDicByID(m_data.descDict);
        m_labelTitle.text = Utils.GetDicByID(m_data.titleDict);
		
        SetFunctionBtn(1);
        SetFunctionBtn(2);

// 		if (m_data.function == 8) 
// 		{
// 			if (null != m_FunctionButton1)
// 			{
// 				m_FunctionButton1.SetActive(false);
// 			}
// 		}
// 
// 		if (m_data.function2 == 8) 
// 		{
// 			if (null != m_FunctionButton2)
// 			{
// 				m_FunctionButton2.SetActive(false);
// 			}
// 		}
        
        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            if (Singleton<ObjManager>.Instance.MainPlayer.IsDie())
            {
                if (null != m_FunctionButton1)
                {
                    m_FunctionButton1.SetActive(false);
                }

                if (null != m_FunctionButton2)
                {
                    m_FunctionButton2.SetActive(false);
                }
            }
        }
    }

    void OnFunctionButton1Click()
    {
        OnFunctionButtonClick(m_data.type, m_data.function);
    }

     void OnFunctionButton2Click()
    {
        OnFunctionButtonClick(m_data.type, m_data.function2);
    }
    

    void OnFunctionButtonClick(int type, int function)
    {
        if (type > (int)BePowerData.BePowerWayDefine.EBPWD_Null &&
            type < (int)BePowerData.BePowerWayDefine.EBPWD_WAY_MAX)
        {
            BePowerData.BePowerWayDefine wayDefine = (BePowerData.BePowerWayDefine)function;
            switch (wayDefine)
            {
                case BePowerData.BePowerWayDefine.EBPWD_COPYSCENE_JUXIANZHUANG:
                    UIManager.ShowUI(UIInfo.Activity, ChangeToCopyScene, (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JUXIANZHUANG);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_COPYSCENE_CANGJINGE:
                    UIManager.ShowUI(UIInfo.Activity, ChangeToCopyScene, (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_COPYSCENE_SHAOSHISHAN:
                    UIManager.ShowUI(UIInfo.Activity, ChangeToCopyScene, (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WULIANGSHAN);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_COPYSCENE_ZHENLONGQIJU:
                    UIManager.ShowUI(UIInfo.Activity, ChangeToCopyScene, (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ZHENLONGQIJU);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_COPYSCENE_NUHAICHUJIAN:
                    UIManager.ShowUI(UIInfo.Activity, ChangeToCopyScene, (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUTOUZHANCHUAN);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_COPYSCENE_YANZIWU:
                    UIManager.ShowUI(UIInfo.Activity, ChangeToCopyScene, (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_COPYSCENE_YANWANGGUMU:
                    UIManager.ShowUI(UIInfo.Activity, ChangeToCopyScene, (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU);
                    break;  
                case BePowerData.BePowerWayDefine.EBPWD_EQUIP_UPGRADE:
                    UIManager.ShowUI(UIInfo.EquipStren, LoadEquipStrength, 1);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_EQUIP_STAR:
                    UIManager.ShowUI(UIInfo.EquipStren, LoadEquipStrength, 2);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_BELLE_TUJIAN:
                    UIManager.ShowUI(UIInfo.Belle, LoadBelleUI, 1);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_BELLE_ZHENFA:
                    UIManager.ShowUI(UIInfo.Belle, LoadBelleUI, 2);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_SHOP_QIANGHUA:
//                     CG_ASK_YUANBAOSHOP_OPEN packet = (CG_ASK_YUANBAOSHOP_OPEN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_YUANBAOSHOP_OPEN);
//                     packet.NoParam = (int)YuanBaoShopLogic.OPEN_TYPE.OPEN_BEPOWER;
//                     packet.SendPacket();
                        UIManager.ShowUI(UIInfo.SysShop);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_SKILL_LEVELUP:
                    UIManager.ShowUI(UIInfo.SkillInfo, OnLoadSkillRoot, 0);
                    break;
                case BePowerData.BePowerWayDefine.EDPWD_BIANSHEN_SKILLUP:
                    UIManager.ShowUI(UIInfo.SkillInfo, OnLoadSkillRoot, 1);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_FELLOW_GET:
                    //UIManager.ShowUI(UIInfo.PartnerFrameRoot, LoadPartnerAndMountRoot, 1);
                    UIManager.ShowUI(UIInfo.RoleView, OnLoadRoleView);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_FELLOW_UPGRADE:
                    UIManager.ShowUI(UIInfo.PartnerFrameRoot, LoadPartnerAndMountRoot, 4);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_FELLOW_STAR:
                    UIManager.ShowUI(UIInfo.PartnerFrameRoot, LoadPartnerAndMountRoot, 2);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_FELLOW_SKILL:
                    UIManager.ShowUI(UIInfo.PartnerFrameRoot, LoadPartnerAndMountRoot, 3);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_XIAKE:
                    UIManager.ShowUI(UIInfo.FlyWingRoot);
                    break;
                case BePowerData.BePowerWayDefine.EBPWD_MISSION_DAY: 
                    {
                        UIManager.ShowUI(UIInfo.MissionLogRoot, OnLoadMissionAndMissionDayRoot);
                        break;
                    }
            }
        }
    }

    void ChangeToCopyScene(bool bSuccess, object param)
    {
        if (ActivityController.Instance())
        {
            int sceneID = (int)param;
            switch (sceneID)
            {
                case (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JUXIANZHUANG:
                    ActivityController.Instance().m_TabDungeon.ChangeTab("Tab3");
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI:
                    ActivityController.Instance().m_TabDungeon.ChangeTab("Tab5");
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WULIANGSHAN:
                    ActivityController.Instance().m_TabDungeon.ChangeTab("Tab10");
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ZHENLONGQIJU:
                    ActivityController.Instance().m_TabDungeon.ChangeTab("Tab7");
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUTOUZHANCHUAN:
                    ActivityController.Instance().m_TabDungeon.ChangeTab("Tab13");
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU:
                    ActivityController.Instance().m_TabDungeon.ChangeTab("Tab6");
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU:
                    ActivityController.Instance().m_TabDungeon.ChangeTab("Tab8");
                    break;
            }
        }
    }
    //RoleView加截后回调，参数暂时不使用。
    void OnLoadRoleView( bool bSuccess, object param )
    {
    }

    void OnLoadSkillRoot( bool bSuccess, object param )
    {
        if( SkillLevelUpRoot.Instance() != null ) 
        {
            int nTab = (int)param;
            SkillLevelUpRoot.Instance().CurHighIndex = nTab;
        }
    }

    void OnLoadMissionAndMissionDayRoot( bool bSuccess, object param )
    {
        if( MissionLogLogic.Instance() != null ) 
        {
            MissionLogLogic.Instance().tabController.ChangeTab("Btn2-Daily");
        }
    }

    void LoadEquipStrength(bool bSuccess, object param)
    {
        if (EquipStrengthenLogic.Instance() != null)
        {
            int type = (int)param;
            //EquipStrengthenLogic.Instance().SetAfterDeldegate(type);
            switch (type)
            {
                case 1:
                    EquipStrengthenLogic.Instance().m_TabController.ChangeTab("Button1-Strengthen");
                    break;
                case 2:
                    EquipStrengthenLogic.Instance().m_TabController.ChangeTab("Button2-Star");
                    break;
            }
        }
    }

    void LoadPartnerAndMountRoot(bool bSuccess, object param)
    {
        if (PartnerFrameLogic.Instance() == null)
            return;
        int type = (int)param;
        switch (type)
        {
            case 1:
                PartnerFrameLogic.Instance().ChangeTabClick("Button1-Info");
                break;
            case 2:
                PartnerFrameLogic.Instance().ChangeTabClick("Button2-Develop");
                break;
            case 3:
                PartnerFrameLogic.Instance().ChangeTabClick("Button3-Skill");
                break;
            case 4:
                PartnerFrameLogic.Instance().ChangeTabClick("Button3-Bleeding");
                break;
        }
    }

    void LoadBelleUI(bool bSuccess, object param)
    {
         if (BelleController.Instance() == null)
         {
             return;
         }

        int type = (int)param;
         switch (type)
         {
             case 1:
                 BelleController.Instance().OnChangeTab("belleshowtab");
                 break;
             case 2:
                 BelleController.Instance().OnChangeTab("matrixtab");
                 break;
             case 3:
                 break;
         }
    }

    public BePowerData.BePowerListItemData GetData()
    {
        return m_data;
    }

}
