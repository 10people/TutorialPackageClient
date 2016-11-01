using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Module.Log;
using Games.GlobeDefine;
using Games.Item;
using Games.UserCommonData;
using System.Collections.Generic;
using Games.LogicObj;
using System;

public class OptionDialogLogic : UIControllerBase<OptionDialogLogic>
{
    public enum DialogEventType
    {
        EVENT_BLACKMARKET =1,   // 黑市商人
        EVENT_CANGKU = 2,       // 仓库
        EVENT_AWARD = 3,        // 奖励NPC
        EVENT_RECOVER = 4,      // 回血
        EVENT_CHANGENAME = 5,   // 改名
        EVENT_PAOSHANG = 6,     // 跑商
        EVENT_MARRYRING = 7,    // 结婚戒指补刻
        EVENT_NORMALVILLAIN = 8,    //普通引导恶人
        EVENT_SUPERVILLAIN = 9,     //精英引导恶人
        EVENT_NIANSHOU = 10,         // 年兽npc
        EVENT_GONGJISHOP = 11,         // 功绩shop npc
    }
    private const int AWARD_DIALOGID = 4;
    public UITexture    m_NPCHead;
	public UILabel      m_NPCTalk;
    public UILabel      m_NPCName;

    public GameObject   m_Button1;
    public GameObject   m_Button2;
    public UILabel      m_Button1Text;
	public UILabel      m_Button2Text;

    private Tab_NpcDialog m_NpcDialogInfo;
    private int m_curOptionDialogId;

    public static bool isNewPlayerGuide = false;

    void CleanUp()
    {
        m_NpcDialogInfo = null;
        m_NPCHead.gameObject.SetActive(false);
        m_NPCName.text = "";
        m_NPCTalk.text = "";
        m_Button1.SetActive(false);
        m_Button2.SetActive(false);
        m_Button1Text.text = "";
        m_Button2Text.text = "";
        m_curOptionDialogId = -1;
    }
    void Awake()
    {
        SetInstance(this);
    }

    void Start()
    {
        if (isNewPlayerGuide)
        {
            isNewPlayerGuide = false;
            Check_NewPlayerGuide();
        }
    }
    void OnDestroy()
    {
        SetInstance(null);
    }

    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.OptionDialogRoot);
    }

    public static void ShowOptionDialogUI(int nDialogId)
    {
        UIManager.ShowUI(UIInfo.OptionDialogRoot, OnShowOptionDialog, nDialogId);
    }
    static void OnShowOptionDialog(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            LogModule.ErrorLog("load OptionDialog fail");
            return;
        }
        int _DialogId = (int)param;
        if (null != OptionDialogLogic.Instance())
        {
            OptionDialogLogic.Instance().DoShowOptionDialog(_DialogId);
        }
    }

    void UpdateNPCInfo()
    {
        Obj_NPC TargetNpc = Singleton<DialogCore>.GetInstance().CareNPC;
        if (TargetNpc != null)
        {
            if (TargetNpc.ModelID >= 0)
            {
                Tab_RoleBaseAttr roleBase = TableManager.GetRoleBaseAttrByID(TargetNpc.BaseAttr.RoleBaseID, 0);
                if (roleBase != null)
                {
                    Tab_CharModel charModel = TableManager.GetCharModelByID(TargetNpc.ModelID, 0);
                    if (charModel != null && m_NPCHead && m_NPCName)
                    {
                        m_NPCName.text = roleBase.Name;
                        
                        Texture curTexture = ResourceManager.LoadResource("Texture/MissionRole/" + charModel.NPCSpriteName, typeof(Texture)) as Texture;
                        if (null != curTexture)
                        {
                            m_NPCHead.gameObject.SetActive(true);
                            m_NPCHead.mainTexture = curTexture;
                        }
                        else
                        {
                            m_NPCHead.gameObject.SetActive(false);
                        }
                    }
                }
            }
            if (m_curOptionDialogId != -1)
            {
                Tab_NpcOptionDialog _npcOptionInfo = TableManager.GetNpcOptionDialogByID(m_curOptionDialogId, 0);
                if (_npcOptionInfo != null)
                {
                    m_NPCTalk.text = StrDictionary.GetClientString_WithNameSex(_npcOptionInfo.CenterText);
                }
                //RESET AWARD TEXT FOR TW
                if (m_curOptionDialogId == AWARD_DIALOGID && PlatformHelper.IsChannelTW())
                {
                    m_NPCTalk.text = StrDictionary.GetClientDictionaryString("#{5248}");
                }
            }
        }
    }
    void DoShowOptionDialog(int nDialogId)
    {
        CleanUp();
        m_NpcDialogInfo = TableManager.GetNpcDialogByID(nDialogId,0);
        if (m_NpcDialogInfo !=null)
        {
            m_curOptionDialogId = m_NpcDialogInfo.OptionDialogId;
            UpdateNPCInfo();
            UpdateButtons();
        }
    }

    private void UpdateButtons()
    {
        m_Button1.SetActive(true);
        m_Button2.SetActive(true);
        if (m_curOptionDialogId != -1)
        {
            Tab_NpcOptionDialog _npcOptionInfo = TableManager.GetNpcOptionDialogByID(m_curOptionDialogId, 0);
            if (_npcOptionInfo !=null)
            {
                m_Button1Text.text = _npcOptionInfo.Option1Text;
                m_Button2Text.text = _npcOptionInfo.Option2Text;
            }
            //RESET AWARD TEXT FOR TW
            if (m_curOptionDialogId == AWARD_DIALOGID && PlatformHelper.IsChannelTW())
            {
                m_Button1Text.text = StrDictionary.GetClientDictionaryString("#{5249}");
            }
        }
       
    }

    void OnButton1(GameObject obj)
    {
        if (m_curOptionDialogId != -1)
        {
            Tab_NpcOptionDialog _npcOptionInfo = TableManager.GetNpcOptionDialogByID(m_curOptionDialogId, 0);
            if (_npcOptionInfo != null)
            {
                //有下一个对话的显示下一个对话
                if (_npcOptionInfo.Option1NextDialog !=-1)
                {
                    m_curOptionDialogId = _npcOptionInfo.Option1NextDialog;
                    UpdateButtons();
                    UpdateNPCInfo();
                }
                else
                {
                    //没有对话  做对应的处理
                    OnProcessEvent(1);
                }
            }
        }
    }

    void OnButton2(GameObject obj)
    {
        if (m_curOptionDialogId != -1)
        {
            Tab_NpcOptionDialog _npcOptionInfo = TableManager.GetNpcOptionDialogByID(m_curOptionDialogId, 0);
            if (_npcOptionInfo != null)
            {
                //有下一个对话的显示下一个对话
                if (_npcOptionInfo.Option1NextDialog != -1)
                {
                    m_curOptionDialogId = _npcOptionInfo.Option1NextDialog;
                    UpdateButtons();
                    UpdateNPCInfo();
                }
                else
                {
                    //没有对话  做对应的处理
                    OnProcessEvent(2);
                }
            }
        }
    }

    void OnProcessEvent(int OptionIndex)
    {
        if (m_NpcDialogInfo != null)
        {
            DialogEventType _EventType = (DialogEventType)m_NpcDialogInfo.OptionDialogType;
            switch (_EventType)
            {
                case DialogEventType.EVENT_BLACKMARKET:
                    if (OptionIndex == 1)
                    {
                        //选项一
                        UIManager.ShowUI(UIInfo.BlackMarket);
                    }
                    break;
                case DialogEventType.EVENT_CANGKU:
                    if (OptionIndex == 1)
                    {
                        //选项一
                        UIManager.ShowUI(UIInfo.CangKu);
                    }
                    break;
                case DialogEventType.EVENT_AWARD:
                    if (OptionIndex == 1)
                    {
                        bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_CYFANS_AWARD_FLAG);
                        if (!bRet)
                        {
                            CG_ASK_SPECIALAWARD Pack = (CG_ASK_SPECIALAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_SPECIALAWARD);
                            Pack.Awardid = (int)USER_COMMONFLAG.CF_CYFANS_AWARD_FLAG;
                            Pack.SendPacket();
                        }
                        else if ( Singleton<ObjManager>.GetInstance().MainPlayer )
                        {
                            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3271}");
                        }
                    }
                    break;
                case DialogEventType.EVENT_RECOVER:
                    if (OptionIndex == 1)
                    {
                        DoRecover();
                    }
                    break;
                case DialogEventType.EVENT_CHANGENAME:
                    if (OptionIndex == 1)
                    {
                        OnChangeNameForCombineServer();
                    }
                    break;
                case DialogEventType.EVENT_PAOSHANG:
                    {
                        DoAcceptPaoShang(OptionIndex);
                    }
                    break;
                case DialogEventType.EVENT_MARRYRING:
                    {
                        MarryRootLogic.RepairMarryRing(); 
                    }
                    break;
                case DialogEventType.EVENT_NORMALVILLAIN:
                    {
                        if (OptionIndex == 1)
                        {
                            OpenVillainCopyScene(1);
                        }
                    }
                    break;
                case DialogEventType.EVENT_SUPERVILLAIN:
                    {
                        if (OptionIndex == 1)
                        {
                            OpenVillainCopyScene(2);
                        }
                    }
					break;
				case DialogEventType.EVENT_NIANSHOU:
					{
						if (OptionIndex == 1)
						{
							OpenNianShouCopyScene();
						}
					}
                    break;
                case DialogEventType.EVENT_GONGJISHOP:
					{
						if (OptionIndex == 1)
						{
							// 显示 UI
                            UIManager.ShowUI(UIInfo.GongJiShopRoot);
						}
					}
                    break;
                default:
                    break;
            }
            OnCloseClick();
        }
    }

    void OpenVillainCopyScene(int nVillainType)
    {
         Obj_NPC TargetNpc = Singleton<DialogCore>.GetInstance().CareNPC;
         if (TargetNpc != null)
         {
             CG_OPEN_VILLAINCOPYSCENE packet = (CG_OPEN_VILLAINCOPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_OPEN_VILLAINCOPYSCENE);
             packet.SetVillaintype(nVillainType);
             packet.SetObjid(TargetNpc.ServerID);
             packet.SendPacket();
         }
    }

	void OpenNianShouCopyScene()
	{
		Obj_NPC TargetNpc = Singleton<DialogCore>.GetInstance().CareNPC;
		if (TargetNpc != null)
		{
			CG_OPEN_NIANSHOUCOPYSCENE packet = (CG_OPEN_NIANSHOUCOPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_OPEN_NIANSHOUCOPYSCENE);
			packet.SetVillaintype(1);
			packet.SetObjid(TargetNpc.ServerID);
			packet.SendPacket();
		}
	}

    // 回血NPC对话相关
    void DoRecover()
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (mainPlayer == null)
        {
            return;
        }
        int nCurHP = mainPlayer.BaseAttr.HP;
        int nMaxHp = mainPlayer.BaseAttr.MaxHP;
        int nCurMP = mainPlayer.BaseAttr.MP;
        int nMaxMP = mainPlayer.BaseAttr.MaxMP;

        if (nCurHP >= nMaxHp &&  nCurMP >= nMaxMP)
        {
            mainPlayer.SendNoticMsg(false,"#{3291}");
            return;
        }
        else
        {
            int nTempNeedMoney = ((nMaxHp - nCurHP)*7 + (nMaxMP - nCurMP)*77) * 115;
            int nNeedMoney = nTempNeedMoney / 100000 + (nTempNeedMoney > 0 ? 1 : 0);
            if (nNeedMoney < 0)
            {
                return;
            }

            string strTip = StrDictionary.GetClientDictionaryString("#{3292}", nNeedMoney);
            MessageBoxLogic.OpenOKCancelBox(strTip, null, OnRecoverOk, OnCloseClick);
        }
    }

    void OnRecoverOk()
    {
        Obj_NPC TargetNpc = Singleton<DialogCore>.GetInstance().CareNPC;
        if (TargetNpc == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            CG_ASK_RECOVER Pack = (CG_ASK_RECOVER)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RECOVER);
            Pack.ObjID = TargetNpc.ServerID;
            Pack.SendPacket();
        }
    }

    //改名对话相关
    void OnChangeNameForCombineServer()
    {
        if (!Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        if (Singleton<ObjManager>.GetInstance().MainPlayer.IsNameWithCombineServerSign())
        {
            ChangeNameLogic.ShowChangeName(ChangeNameLogic.ChangeNameType.ChangeNameType_PlayerName_CombineServer);
        }
        else
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3341}");
        }

    }

    // 跑商选项相关 1:低级跑商，2：高级跑商
    void DoAcceptPaoShang(int nOptIndex)
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        bool bRetMissionPaoshangH = GameManager.gameManager.MissionManager.IsHaveMission(GlobeVar.PAOSHANG_MISSIONID_H);
        bool bRetMissionPaoshangL = GameManager.gameManager.MissionManager.IsHaveMission(GlobeVar.PAOSHANG_MISSIONID_L);
        if (bRetMissionPaoshangH || bRetMissionPaoshangL)
        {
            // 不让接 给个提示吧
            _mainPlayer.SendNoticMsg(false, "#{3926}");
            return;
        }
        // 条件都去服务器检测吧
        CG_ASK_PAOSHANG_ACCEPT Pack = (CG_ASK_PAOSHANG_ACCEPT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_PAOSHANG_ACCEPT);
        Pack.Type = nOptIndex;
        Pack.SendPacket();

    }

    public void Check_NewPlayerGuide()
    {
        CangKuLogic.isNewPlayerGuide = true;
        NewPlayerGuidLogic.OpenWindow(m_Button1, 800, 150, StrDictionary.GetClientDictionaryString("#{11544}"), "top", 0, true, true);
    }
}
