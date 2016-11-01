using UnityEngine;
using System.Collections;
using Games.Fellow;
using Games.GlobeDefine;
using Games.FakeObject;
using GCGame;
using GCGame.Table;
using System;
using System.Collections.Generic;

public class PartnerFrameLogic_Breeding : MonoBehaviour {

    private static PartnerFrameLogic_Breeding m_Instance = null;
    public static PartnerFrameLogic_Breeding Instance()
    {
        return m_Instance;
    }

    public GameObject m_PartnerChooseWindow;
    public GameObject m_ChooseItemTemplate;
    public GameObject m_ChooseItemGrid;

    public GameObject m_OpButtons;
    public GameObject m_PushPartnerButton;
    public GameObject m_PlayerFellowModel;
    public GameObject m_FriendFellowModel;
	public GameObject m_LockBreedingButton;//锁定克隆
	public GameObject m_UnLockBreedingButton;//解除锁定
    public GameObject m_LookForBreedingButton;
    public GameObject m_BeginBreedingButton;
    //public GameObject m_SpeedBreednigButton;
    public GameObject m_PlayerTips;
    public GameObject m_FriendTips;
    public GameObject m_PlayerLockFlag;
    public GameObject m_FriendLockFlag;
    public UIViewport m_BreedingViewport;

    public GameObject m_BreedingReadyWindow;
    public GameObject m_BreedingGoingWindow;
    public GameObject m_BreedingOverWindow;
    public GameObject m_BreedingRuleWindow;
    public UILabel m_RemainTime;
    public UISprite m_RemainTimeSprite;
    public UILabel m_ReceiveRemainTime;

    public GameObject m_PartnerAttrWindow;
    public UISprite m_PartnerAttr_HeadIcon;
    public UISprite m_PartnerAttr_Quality;
    public UILabel m_PartnerAttr_Name;
    public UILabel m_PartnerAttr_Lucky;
    public UILabel m_PartnerAttr_Level;
    public UISprite m_PartnerAttr_TalentIcon;
    public UISprite m_PartnerAttr_TalentQuality;
    public UILabel m_PartnerAttr_TalentName;
    public UILabel m_PartnerAttr_TalentDesc;
    public UILabel m_WaitingTips;

    // 发布确认弹窗部分
    public PartnerFrameLogic_PublishConfirmDialog m_PublishConfirmDialog;

    private Fellow m_BabyFellow;
    private Fellow m_BabyFellowBuffer;
    private int m_FellowIndex = 0;
    private int m_FellowIndexBuffer = 0;

    private FakeObject m_ChoosePartnerFakeObj;
    private GameObject m_ChooseFakeObjGameObject;
    private FakeObject m_FriendPartnerFakeObj;
    private GameObject m_FriendFakeObjGameObject;

    private bool m_LockBreeding = false;
    public bool LockBreeding
    {
        get { return m_LockBreeding; }
        set { m_LockBreeding = value; }
    }

	void Start () 
    {
        UIEventListener.Get(m_BreedingRuleWindow.transform.FindChild("CloseBg").gameObject).onClick = HideRuleDialog;
        UIEventListener.Get(m_PublishConfirmDialog.btnOK).onClick = LookingForMatching;
        UIEventListener.Get(m_PublishConfirmDialog.btnCancel).onClick = CancelSearching;
	}
	
    void OnEnable()
    {
        m_Instance = this;

        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().HidePartnerList();
        }

        m_BreedingViewport.sourceCamera = UICamera.mainCamera;

        UpdateFellowInfo_Button();
        UpdateFellowInfo_Window();

        InvokeRepeating("UpdateRemainTime", 0, 1);
    }

    void OnDisable()
    {
        m_Instance = null;

        if (false == GameManager.gameManager.PlayerDataPool.IsProcreateGoing() &&
            m_LockBreeding)
        {
            OnUnLockBreedingClick();
            HandleFellowBreedingUnLock();
        }

        m_BabyFellow = null;
        m_BabyFellowBuffer = null;
        m_FellowIndex = 0;
        m_FellowIndexBuffer = 0;
        DestroyPartnerFakeObj();
        DestroyFriendPartnerFakeObj();
        m_LockBreeding = false;

        CancelInvoke("UpdateRemainTime");
    }

    public void UpdateFellowInfo_Button()
    {
        if (GameManager.gameManager.PlayerDataPool.IsProcreateGoing())
        {
            m_PushPartnerButton.SetActive(false);
            m_PlayerTips.SetActive(false);
            //m_SpeedBreednigButton.SetActive(true);
            m_LookForBreedingButton.SetActive(false);
            m_OpButtons.SetActive(false);
        }
        else
        {
            m_PushPartnerButton.SetActive(true);
            m_PlayerTips.SetActive(true);
            //m_SpeedBreednigButton.SetActive(false);
            //m_OpButtons.SetActive(true);

            if (GameManager.gameManager.PlayerDataPool.IsHaveTeam() &&
            GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMemberCount() == 2)
            {
                m_LookForBreedingButton.SetActive(false);
            }
            else
            {
                m_LookForBreedingButton.SetActive(true);
                m_LookForBreedingButton.GetComponent<UIImageButton>().isEnabled = false;
            }
        }
        m_BeginBreedingButton.SetActive(false);
    }

    public void UpdateFellowInfo_Window(bool updatemodel = true)
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsProcreateGoing())
        {
            // 未在繁殖
            m_BreedingReadyWindow.SetActive(true);
            m_BreedingGoingWindow.SetActive(false);
            m_BreedingOverWindow.SetActive(false);

            DestroyPartnerFakeObj();
            UpdateFriendFellowModel();
        }
        else if (GameManager.gameManager.PlayerDataPool.IsProcreateWaitReceive())
        {
            // 繁殖完成 等领蛋
            m_BreedingReadyWindow.SetActive(false);
            m_BreedingGoingWindow.SetActive(false);
            m_BreedingOverWindow.SetActive(true);
        }
        else
        {
            // 繁殖中
            m_BreedingReadyWindow.SetActive(false);
            m_BreedingGoingWindow.SetActive(true);
            m_BreedingOverWindow.SetActive(false);
            m_ReceiveRemainTime.text = "";
            HandleFellowBreedingUnLock();
        }
        m_PlayerLockFlag.SetActive(false);
        m_FriendLockFlag.SetActive(false);
    }

    void UpdateRemainTime()
    {
        if (GameManager.gameManager.PlayerDataPool.IsProcreateGoing())
        {
            if (false == GameManager.gameManager.PlayerDataPool.IsProcreateWaitReceive())
            {
                // 繁殖中
                int nRemainSeconds = GameManager.gameManager.PlayerDataPool.GetProcreateRemainTime();
                string minutes = nRemainSeconds / 60 < 10 ? "0" + (nRemainSeconds / 60).ToString() : (nRemainSeconds / 60).ToString();
                string seconds = nRemainSeconds % 60 < 10 ? "0" + (nRemainSeconds % 60).ToString() : (nRemainSeconds % 60).ToString();
                m_RemainTime.text = StrDictionary.GetClientDictionaryString("#{10342}", minutes, seconds);
                m_RemainTimeSprite.fillAmount = (float)nRemainSeconds / (float)GlobeVar.PARTNER_BREEDING_TIME;
            }
            else
            {
                // 繁殖结束等接收
                // 等接收暂不限时
                /*int nRemainSeconds = GameManager.gameManager.PlayerDataPool.GetProcreateReceiveRemainTime();
                string minutes = nRemainSeconds / 60 < 10 ? "0" + (nRemainSeconds / 60).ToString() : (nRemainSeconds / 60).ToString();
                string seconds = nRemainSeconds % 60 < 10 ? "0" + (nRemainSeconds % 60).ToString() : (nRemainSeconds % 60).ToString();
                m_ReceiveRemainTime.text = StrDictionary.GetClientDictionaryString("#{10342}", minutes, seconds);*/
                m_ReceiveRemainTime.text = "";
            }
        }
    }

    /// <summary>
    /// 点击添加宝宝
    /// </summary>
    void OnChoosePartnerClick()
    {
        NewPlayerGuidLogic.CloseWindow();
        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container == null)
        {
            return;
        }

        List<Fellow> babylist = FellowTool.FellowCanBreedingFilter(container);
        //List<Fellow> babylist = FellowTool.FellowBabyFilter(container);

        if (babylist.Count <= 0)
        {
            GUIData.AddNotifyData("#{10330}");
            return;
        }

        m_FellowIndexBuffer = m_FellowIndex;

        m_PartnerChooseWindow.SetActive(true);
        ShowChooseBabyFellow(babylist);
    }

    /// <summary>
    /// 显示可供选择的宠物宝宝
    /// </summary>
    void ShowChooseBabyFellow(List<Fellow> babylist)
    {
        Utils.CleanGrid(m_ChooseItemGrid);

        for (int i = 0; i < babylist.Count; i++)
        {
            string objectName = i + 1 < 10 ? "0" + (i + 1).ToString() : (i + 1).ToString();
            GameObject item = Utils.BindObjToParent(m_ChooseItemTemplate, m_ChooseItemGrid, objectName);
            if (item == null || item.GetComponent<PartnerChooseItemLogic>() == null)
            {
                break;
            }
            item.GetComponent<PartnerChooseItemLogic>().Init(babylist[i]);
        }

        m_ChooseItemGrid.GetComponent<UIGrid>().Reposition();
    }

    void UpdateChooseFellowInfo(bool forward)
    {
        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container == null)
        {
            return;
        }

        List<Fellow> babylist = FellowTool.FellowCanBreedingFilter(container);

        if (babylist.Count <= 0)
        {
            return;
        }

        Fellow updatefellow = null;
        if (forward)
        {
            for (int i = (m_FellowIndexBuffer + 1) % babylist.Count; i < babylist.Count; i++)
            {
                Fellow fellow = babylist[i];
                if (false == fellow.IsValid())
                {
                    continue;
                }

                if (m_BabyFellowBuffer == null)
                {
                    updatefellow = fellow;
                    m_FellowIndexBuffer = i;
                    break;
                }
                else
                {
                    if (fellow.Guid != m_BabyFellowBuffer.Guid)
                    {
                        updatefellow = fellow;
                        m_FellowIndexBuffer = i;
                        break;
                    }
                }
            }            
        }
        else
        {
            for (int i = (m_FellowIndexBuffer + babylist.Count - 1) % babylist.Count; i >= 0; i--)
            {
                Fellow fellow = babylist[i];
                if (false == fellow.IsValid())
                {
                    continue;
                }

                if (m_BabyFellowBuffer == null)
                {
                    updatefellow = fellow;
                    m_FellowIndexBuffer = i;
                    break;
                }
                else
                {
                    if (fellow.Guid != m_BabyFellowBuffer.Guid)
                    {
                        updatefellow = fellow;
                        m_FellowIndexBuffer = i;
                        break;
                    }
                }
            }
        }

        if (updatefellow == null || false == updatefellow.IsValid() || false == updatefellow.IsBabyFellow())
        {
            return;
        }

//         m_PartnerChooseIcon.spriteName = updatefellow.GetIcon();
//         m_PartnerChooseNameLabel.text = updatefellow.Name;
//         m_PartnerChooseLevelLabel.text = "LV" + updatefellow.Level.ToString();
//         m_PartnerChooseCombatValueLabel.text = updatefellow.GetCombatValue().ToString();
//         m_PartnerChooseProcreateLabel.text = updatefellow.ProcreateCount.ToString();
//         m_PartnerChooseLuckyLabel.text = updatefellow.Lucky.ToString();

        m_BabyFellowBuffer = updatefellow;
    }

    void OnPartnerChooseMinusClick()
    {
        UpdateChooseFellowInfo(false);
    }

    void OnPartnerChooseAddClick()
    {
        UpdateChooseFellowInfo(true);
    }

    /// <summary>
    /// 选择好宝宝
    /// </summary>
    public void OnPartnerChooseOKClick(Fellow fellow)
    {
        m_BabyFellowBuffer = fellow;
        if (m_BabyFellowBuffer.ProcreateCount <= 0)
        {
            GUIData.AddNotifyData("#{10337}");
            return;
        }

        if (m_BabyFellowBuffer.Called)
        {
            GUIData.AddNotifyData("#{10344}");
            return;
        }

        m_BabyFellow = m_BabyFellowBuffer;
        m_FellowIndex = m_FellowIndexBuffer;

        UpdateChooseFellowModel();

        m_PartnerChooseWindow.SetActive(false);
        m_PushPartnerButton.SetActive(false);
        m_PlayerTips.SetActive(false);
        m_OpButtons.SetActive(true);
        m_LookForBreedingButton.GetComponent<UIImageButton>().isEnabled = true;
    }

    void OnPartnerChooseCancelClick()
    {
        m_BabyFellowBuffer = null;
        m_FellowIndexBuffer = 0;

        m_PartnerChooseWindow.SetActive(false);
    }

    void UpdateChooseFellowModel(int nChooseDataId = GlobeVar.INVALID_ID)
    {
        // 用于加载玩家所选伙伴模型
        // 在未开始繁殖时 nChooseDataId = GlobeVar.INVALID_ID 使用脚本中m_BabyFellow的dataid
        // 在繁殖中时 因为会将所选伙伴从伙伴槽中删除 所以需要传参nChooseDataId 来加载对应模型

        int nFellowDataId = GlobeVar.INVALID_ID;

        if (nChooseDataId == GlobeVar.INVALID_ID)
        {
            if (m_BabyFellow == null)
            {
                return;
            }
            nFellowDataId = m_BabyFellow.DataId;
        }
        else
        {
            nFellowDataId = nChooseDataId;
        }

        if (nFellowDataId == GlobeVar.INVALID_ID)
        {
            return;
        }

        if (m_ChooseFakeObjGameObject == null || m_ChoosePartnerFakeObj == null)
        {
            if (m_ChoosePartnerFakeObj != null)
            {
                DestroyPartnerFakeObj();
            }

            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(nFellowDataId, 0);
            if (line == null)
            {
                return;
            }
            int fakeObjId = line.FakeObjId;

            m_ChoosePartnerFakeObj = new FakeObject();
            if (m_ChoosePartnerFakeObj == null)
            {
                return;
            }

            m_ChoosePartnerFakeObj.initFakeObject(fakeObjId, m_PlayerFellowModel, out m_ChooseFakeObjGameObject);
        }
        else
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(nFellowDataId, 0);
            if (line == null)
            {
                return;
            }
            int fakeObjId = line.FakeObjId;

            Tab_FakeObject FakeObjTable = TableManager.GetFakeObjectByID(fakeObjId, 0);
            if (FakeObjTable == null)
            {
                return;
            }

            Singleton<ObjManager>.GetInstance().ReloadModel(m_ChooseFakeObjGameObject,
                FakeObjTable.FakeObjModel,
                Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver,
                FakeObjTable,
                m_ChoosePartnerFakeObj);
        }
    }

    private void DestroyPartnerFakeObj()
    {
        if (m_ChoosePartnerFakeObj != null)
        {
            m_ChoosePartnerFakeObj.Destroy();
            m_ChoosePartnerFakeObj = null;
        }
    }

    void OnLockBreedingClick()
    {
        if (m_BabyFellow == null)
        {
            GUIData.AddNotifyData("#{10331}");
            return;
        }

        if (false == GameManager.gameManager.PlayerDataPool.IsHaveTeam() ||
            GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMemberCount() != 2)
        {
            GUIData.AddNotifyData("#{10333}");
            return;
        }

        if (m_LockBreeding)
        {
            return;
        }

        //发包同步
        CG_FELLOW_BREEDING_LOCK pak = (CG_FELLOW_BREEDING_LOCK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_BREEDING_LOCK);
        pak.SetGuid(m_BabyFellow.Guid);
        pak.SendPacket();
    }

    void OnUnLockBreedingClick()
    {
        if (m_BabyFellow == null)
        {
            GUIData.AddNotifyData("#{10331}");
            return;
        }

        if (m_LockBreeding == false)
        {
            return;
        }

        //发包同步
        CG_FELLOW_BREEDING_UNLOCK pak = (CG_FELLOW_BREEDING_UNLOCK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_BREEDING_UNLOCK);
        pak.SetGuid(m_BabyFellow.Guid);
        pak.SendPacket();
    }

    void OnCancelBreedingClick()
    {
        if (m_BabyFellow == null)
        {
            GUIData.AddNotifyData("#{10331}");
            return;
        }

        if (m_LockBreeding)
        {
            //发包同步
            CG_FELLOW_BREEDING_UNLOCK pak = (CG_FELLOW_BREEDING_UNLOCK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_BREEDING_UNLOCK);
            pak.SetGuid(m_BabyFellow.Guid);
            pak.SendPacket();
        }

        m_BabyFellow = null;
        m_BabyFellowBuffer = null;
        m_FellowIndex = 0;
        m_FellowIndexBuffer = 0;
        DestroyPartnerFakeObj();
        m_PushPartnerButton.SetActive(true);
        m_PlayerTips.SetActive(true);
    }

    /// <summary>
    /// 打开规则提示窗口
    /// </summary>
    void OnBreedingRuleClick()
    {
        m_BreedingRuleWindow.SetActive(true);
    }

    /// <summary>
    /// 关闭规则提示窗口
    /// </summary>
    void HideRuleDialog(GameObject go)
    {
        m_BreedingRuleWindow.SetActive(false);
    }

    public void HandleFellowBreedingLock()
    {
        m_LockBreeding = true;

        m_LockBreedingButton.SetActive(false);
        m_UnLockBreedingButton.SetActive(true);
        m_PlayerLockFlag.SetActive(true);

        UpdateBeginBreedingButtonShow();
    }

    void UpdateBeginBreedingButtonShow()
    {
        m_BeginBreedingButton.SetActive(false);
        m_WaitingTips.gameObject.SetActive(false);
        if(false == m_LockBreeding)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (false == GameManager.gameManager.PlayerDataPool.IsHaveTeam())
        {
            return;
        }

        if (GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMemberCount() != 2)
        {
            return;
        }

        if (false == GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.IsValid())
        {
            return;
        }

        m_BeginBreedingButton.SetActive(true);
        m_BeginBreedingButton.GetComponent<UIImageButton>().isEnabled = true;
        m_WaitingTips.gameObject.SetActive(false);
    }

    public void HandleFellowBreedingUnLock()
    {
        m_LockBreeding = false;

        m_LockBreedingButton.SetActive(true);
        m_UnLockBreedingButton.SetActive(false);
        m_BeginBreedingButton.SetActive(false);
        m_WaitingTips.gameObject.SetActive(false);
        m_PlayerLockFlag.SetActive(false);
    }

    /// <summary>
    /// 得到对方配对信息
    /// </summary>
    public void HandleFellowFriendBreeding()
    {
        UpdateFriendFellowModel();
        UpdateBeginBreedingButtonShow();
    }

    void UpdateFriendFellowModel()
    {
        if (false == GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.IsValid())
        {
            DestroyFriendPartnerFakeObj();
            return;
        }

        int nFriendFellowDataId = GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.DataId;
        m_FriendLockFlag.SetActive(nFriendFellowDataId == GlobeVar.INVALID_ID);
        m_FriendTips.SetActive(nFriendFellowDataId == GlobeVar.INVALID_ID);
        if (nFriendFellowDataId == GlobeVar.INVALID_ID)
        {
            DestroyFriendPartnerFakeObj();
            return;
        }
        if (m_FriendFakeObjGameObject == null || m_FriendPartnerFakeObj == null)
        {
            if (m_FriendPartnerFakeObj != null)
            {
                DestroyFriendPartnerFakeObj();
            }

            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(nFriendFellowDataId, 0);
            if (line == null)
            {
                return;
            }
            int fakeObjId = line.FakeObjId;

            m_FriendPartnerFakeObj = new FakeObject();
            if (m_FriendPartnerFakeObj == null)
            {
                return;
            }

            m_FriendPartnerFakeObj.initFakeObject(fakeObjId, m_FriendFellowModel, out m_FriendFakeObjGameObject);
        }
        else
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(nFriendFellowDataId, 0);
            if (line == null)
            {
                return;
            }
            int fakeObjId = line.FakeObjId;

            Tab_FakeObject FakeObjTable = TableManager.GetFakeObjectByID(fakeObjId, 0);
            if (FakeObjTable == null)
            {
                return;
            }

            Singleton<ObjManager>.GetInstance().ReloadModel(m_FriendFakeObjGameObject,
                FakeObjTable.FakeObjModel,
                Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver,
                FakeObjTable,
                m_FriendPartnerFakeObj);
        }
    }

    private void DestroyFriendPartnerFakeObj()
    {
        if (m_FriendPartnerFakeObj != null)
        {
            m_FriendPartnerFakeObj.Destroy();
            m_FriendPartnerFakeObj = null;
            m_FriendFakeObjGameObject = null;
        }
    }

    /// <summary>
    /// 寻找配对
    /// </summary>
    void OnLookForFriendClick()
    {
        if (m_BabyFellow == null)
        {
            GUIData.AddNotifyData("#{10331}");
            return;
        }

        m_PublishConfirmDialog.SetDate(m_BabyFellow);
        m_PublishConfirmDialog.gameObject.SetActive(true);
    }

    /// <summary>
    /// 确定寻找
    /// </summary>
    /// <param name="go"></param>
    void LookingForMatching(GameObject go)
    {
        CG_CHAT packet = (CG_CHAT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHAT);
        packet.Chattype = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_WORLD;
        packet.Chatinfo = StrDictionary.GetClientDictionaryString("#{10274}", m_BabyFellow.Name);
        packet.Linktype = (int)GC_CHAT.LINKTYPE.LINK_TYPE_SUB_PROPAGATE;
        packet.Fellowguid = m_BabyFellow.Guid;
        packet.SendPacket();

        CG_CHAT packetPro = (CG_CHAT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHAT);
        packetPro.Chattype = (int)CG_CHAT.CHATTYPE.CHAT_TYPE_PROPAGATE;
        packetPro.Chatinfo = StrDictionary.GetClientDictionaryString("#{10274}", m_BabyFellow.Name);
        packetPro.Linktype = (int)GC_CHAT.LINKTYPE.LINK_TYPE_SUB_PROPAGATE;
        packetPro.Fellowguid = m_BabyFellow.Guid;
        packetPro.SendPacket();

        m_PublishConfirmDialog.gameObject.SetActive(false);
    }

    /// <summary>
    /// 放弃寻找
    /// </summary>
    /// <param name="go"></param>
    void CancelSearching(GameObject go)
    {
        m_PublishConfirmDialog.gameObject.SetActive(false);
    }

    void OnPlayerFellowPress()
    {
        if (m_BabyFellow == null)
        {
            return;
        }

        Tab_CabalFellowTallentSkill tabTalent = null;
        foreach(KeyValuePair<int, int> pair in m_BabyFellow.TallentSkill)
        {
            int skillid = pair.Key;
            if (skillid <= 0)
            {
                return;
            }

            Tab_CabalFellowTallentSkill tabTallentSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
            if (tabTallentSkill == null)
            {
                return;
            }

            tabTalent = tabTallentSkill;
            break;
        }

        if (tabTalent == null)
        {
            return;
        }

        m_PartnerAttrWindow.SetActive(true);
        m_PartnerAttrWindow.transform.localPosition = new Vector3(-200, 0, 0);

        m_PartnerAttr_HeadIcon.spriteName = m_BabyFellow.GetIcon();
        m_PartnerAttr_Quality.spriteName = FellowTool.GetFellowQualityFrame(m_BabyFellow.Quality);
        m_PartnerAttr_Name.text = m_BabyFellow.Name;
        m_PartnerAttr_Lucky.text = m_BabyFellow.Lucky.ToString();
        m_PartnerAttr_Level.text = m_BabyFellow.Level.ToString();
        m_PartnerAttr_TalentIcon.spriteName = tabTalent.Icon;
        m_PartnerAttr_TalentQuality.spriteName = FellowTool.GetFellowTallentSkillQualityPic(tabTalent.Id);
        m_PartnerAttr_TalentName.text = tabTalent.Name;
        m_PartnerAttr_TalentDesc.text = tabTalent.SkillDesc;
    }

    void OnPlayerFellowRelease()
    {
        m_PartnerAttrWindow.SetActive(false);
    }

    void OnFriendFellowPress()
    {
        if (false == GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.IsValid())
        {
            return;
        }

        Tab_CabalFellowAttr tabFellow = TableManager.GetCabalFellowAttrByID(GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.DataId, 0);
        if (tabFellow == null)
        {
            return;
        }

        Tab_CabalFellowTallentSkill tabTalent = TableManager.GetCabalFellowTallentSkillByID(GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.TalentSkill, 0);
        if (tabTalent == null)
        {
            return;
        }

        m_PartnerAttrWindow.SetActive(true);
        m_PartnerAttrWindow.transform.localPosition = new Vector3(200, 0, 0);

        m_PartnerAttr_HeadIcon.spriteName = tabFellow.Icon;
        m_PartnerAttr_Quality.spriteName = FellowTool.GetFellowQualityFrame(GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.Quality);
        m_PartnerAttr_Name.text = GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.Name;
        m_PartnerAttr_Lucky.text = GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.Lucky.ToString();
        m_PartnerAttr_Level.text = GameManager.gameManager.PlayerDataPool.FriendBreedingFellowInfo.Level.ToString();
        m_PartnerAttr_TalentIcon.spriteName = tabTalent.Icon;
        m_PartnerAttr_TalentQuality.spriteName = FellowTool.GetFellowTallentSkillQualityPic(tabTalent.Id);
        m_PartnerAttr_TalentName.text = tabTalent.Name;
        m_PartnerAttr_TalentDesc.text = tabTalent.SkillDesc;
    }

    void OnFriendFellowRelease()
    {
        m_PartnerAttrWindow.SetActive(false);
    }

#region ui handlers
    /// <summary>
    /// 加速繁殖
    /// </summary>
    void OnSpeedBreedingClick()
    {
        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{10345}"), "", SpeedBreedingOK);
    }

#endregion

#region requests
    /// <summary>
    /// 开始繁殖
    /// </summary>
    void OnBeginBreedingClick()
    {
        if (!m_WaitingTips.gameObject.activeSelf)
        {
            m_WaitingTips.text = Utils.GetDicByID(11269);
            m_WaitingTips.gameObject.SetActive(true);
            m_BeginBreedingButton.GetComponent<UIImageButton>().isEnabled = false;
        }
        m_OpButtons.SetActive(false);
        CG_FELLOW_BREEDING_BEGIN pak = (CG_FELLOW_BREEDING_BEGIN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_BREEDING_BEGIN);
        pak.SetNoparam(1);
        pak.SendPacket();
    }

    void SpeedBreedingOK()
    {
        CG_FELLOW_BREEDING_SPEED pak = (CG_FELLOW_BREEDING_SPEED)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_BREEDING_SPEED);
        pak.SetNoparam(1);
        pak.SendPacket();
    }

    void OnReceiveBreedingClick()
    {
        CG_FELLOW_BREEDING_RECEIVE pak = (CG_FELLOW_BREEDING_RECEIVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FELLOW_BREEDING_RECEIVE);
        pak.SetNoparam(1);
        pak.SendPacket();
    }
#endregion

#region callback
    /// <summary>
    /// 显示对方已确认提示
    /// </summary>
    public void ShowBeginTips()
    {
        m_WaitingTips.text = Utils.GetDicByID(11270);
        m_WaitingTips.gameObject.SetActive(true);
        m_OpButtons.SetActive(false);
    }
#endregion

}
