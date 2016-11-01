using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using System.Text;
using GCGame;
using System.Collections.Generic;
using System;

public class GuildAuthorityWindowLogic : MonoBehaviour {

    private static GuildAuthorityWindowLogic m_Instance = null;
    public static GuildAuthorityWindowLogic Instance()
    {
        return m_Instance;
    }

    public GameObject m_GuildJobSelectMemberItem;
    public TabController m_TabController;
    public UILabel m_JobNameTitle;
    public UILabel m_GuildJobName;
    public GameObject m_ChangeJobNameWindow;
    public UIInput m_ChangeJobNameInput;
    public GameObject m_EditJobNameButton;
    public GameObject m_BaseAuthority;
    public GameObject m_SeniorAuthority;
    public UILabel m_BaseAuthority_RewardLabel;
    public GameObject m_BaseAuthority_ChangeJobBtn;
    public UILabel m_SeniorAuthority_AuthorityCount;
    public UIToggle m_SeniorAuthority_ToggleJoin;
    public UIToggle m_SeniorAuthority_ToggleJoinReq;
    public UIToggle m_SeniorAuthority_ToggleDeclaration;
    public UIToggle m_SeniorAuthority_ToggleKick;
    public UIToggle m_SeniorAuthority_ToggleActivity;
    public UIToggle m_SeniorAuthority_ToggleNotice;
    public UILabel m_SeniorAuthority_SaveBtnLabel;
    public UIImageButton m_SeniorAuthority_SaveImageBtn;
    public UILabel m_SeniorAuthority_SelectBtnLabel;
    public GameObject m_SeniorAuthority_SelectBtn;
    public GameObject m_SeniorAuthority_SaveBtn;
    public GameObject m_GuildJobSelectWindow;
    public GameObject m_GuildJobSelectGrid;
    public UILabel m_SelectMember_TitleLabel;
    public UILabel m_SelectMember_CountLabel;

    private int m_CurGuildJob = (int)GameDefine_Globe.GUILD_JOB.INVALID;
    private List<UInt64> m_SelectChooseGuid = new List<UInt64>();

    void OnEnable()
    {
        m_Instance = this;
        m_SelectChooseGuid.Clear();

        m_TabController.delTabChanged = OnTabChanged;
        m_TabController.ChangeTab("Tab1-Chief");
        m_ChangeJobNameInput.defaultText = StrDictionary.GetClientDictionaryString("#{10446}");

        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
        if (false == mainPlayerGuildInfo.IsValid())
        {
            return;
        }
        
        m_EditJobNameButton.SetActive(info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOBNAME));
    }

    void OnDisable()
    {
        m_Instance = null;

        OnChangeJobNameCancelClick();
        OnSelectMemberCloseClick();
    }

    void OnTabChanged(TabButton curButton)
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;
        string szDefaultJobName = "";

        switch (curButton.name)
        {
            case "Tab1-Chief":
                {
                    m_CurGuildJob = (int)GameDefine_Globe.GUILD_JOB.CHIEF;
                    ShowSeniorAuthority(m_CurGuildJob);
                }
                break;
            case "Tab2-Vice":
                {
                    m_CurGuildJob = (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF;
                    ShowSeniorAuthority(m_CurGuildJob);
                }
                break;
            case "Tab3-Elder":
                {
                    m_CurGuildJob = (int)GameDefine_Globe.GUILD_JOB.ELDER;
                    ShowSeniorAuthority(m_CurGuildJob);
                }
                break;
            case "Tab4-Elite":
                {
                    m_CurGuildJob = (int)GameDefine_Globe.GUILD_JOB.ELITE;
                    ShowBaseAuthority(m_CurGuildJob);
                }
                break;
            case "Tab5-Member":
                {
                    m_CurGuildJob = (int)GameDefine_Globe.GUILD_JOB.MEMBER;
                    ShowBaseAuthority(m_CurGuildJob);
                }
                break;
            default:
                break;
        }

        if (m_CurGuildJob <= (int)GameDefine_Globe.GUILD_JOB.INVALID ||
            m_CurGuildJob >= (int)GameDefine_Globe.GUILD_JOB.MAX)
        {
            return;
        }

        if (0 <= m_CurGuildJob && m_CurGuildJob < GlobeVar.GUILD_JOB_NAME.Length)
        {
            szDefaultJobName = StrDictionary.GetClientDictionaryString(GlobeVar.GUILD_JOB_NAME[m_CurGuildJob]);
        }

        if (szDefaultJobName == "")
        {
            return;
        }

        m_JobNameTitle.text = StrDictionary.GetClientDictionaryString("#{10392}", szDefaultJobName);    

        if (0 <= m_CurGuildJob && m_CurGuildJob < info.GuildJobName.Length)
        {
            if (string.IsNullOrEmpty(info.GuildJobName[m_CurGuildJob]))
            {
                m_GuildJobName.text = szDefaultJobName;
            }
            else
            {
                m_GuildJobName.text = info.GuildJobName[m_CurGuildJob];
            }            
        }            
    }

    void OnCloseClick()
    {
        gameObject.SetActive(false);
    }

    void OnEditJobNameClick()
    {
        m_ChangeJobNameWindow.SetActive(true);
    }

    void OnChangeJobNameOKClick()
    {
        string szJobName = m_ChangeJobNameInput.value;
        if (szJobName.Length <= 0)
        {
            GUIData.AddNotifyData("#{10447}");
            return;
        }

        if (Encoding.UTF8.GetBytes(szJobName).Length > GlobeVar.MAX_GUILD_JOBNAME)
        {
            GUIData.AddNotifyData("#{10448}");
            return;
        }

        CG_GUILD_CHANGE_JOBNAME pak = (CG_GUILD_CHANGE_JOBNAME)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_CHANGE_JOBNAME);
        pak.GuildJobId = m_CurGuildJob;
        pak.GuildJobName = szJobName;
        pak.SendPacket();

        OnChangeJobNameCancelClick();
    }

    void OnChangeJobNameCancelClick()
    {
        m_ChangeJobNameInput.value = "";
        m_ChangeJobNameWindow.SetActive(false);
    }

    void ShowBaseAuthority(int nGuildJob)
    {
        if (nGuildJob != (int)GameDefine_Globe.GUILD_JOB.ELITE &&
            nGuildJob != (int)GameDefine_Globe.GUILD_JOB.MEMBER)
        {
            return;
        }

        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
        if (false == mainPlayerGuildInfo.IsValid())
        {
            return;
        }

        m_BaseAuthority.SetActive(true);
        m_SeniorAuthority.SetActive(false);

        if (0 <= m_CurGuildJob && m_CurGuildJob < GlobeVar.GUILD_JOB_NAME.Length)
        {
            string szDefaultJobName = StrDictionary.GetClientDictionaryString(GlobeVar.GUILD_JOB_NAME[nGuildJob]);
            m_BaseAuthority_RewardLabel.text = StrDictionary.GetClientDictionaryString("#{10397}", szDefaultJobName);
        }

        if (info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOB))
        {
            m_BaseAuthority_ChangeJobBtn.SetActive(nGuildJob == (int)GameDefine_Globe.GUILD_JOB.ELITE);
        }
        else
        {
            m_BaseAuthority_ChangeJobBtn.SetActive(false);
        }        
    }

    void ShowSeniorAuthority(int nGuildJob)
    {
        if (nGuildJob != (int)GameDefine_Globe.GUILD_JOB.CHIEF &&
            nGuildJob != (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF &&
            nGuildJob != (int)GameDefine_Globe.GUILD_JOB.ELDER)
        {
            return;
        }

        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
        if (false == mainPlayerGuildInfo.IsValid())
        {
            return;
        }

        m_BaseAuthority.SetActive(false);
        m_SeniorAuthority.SetActive(true);

        // 和权限无关的部分
        if (nGuildJob == (int)GameDefine_Globe.GUILD_JOB.CHIEF)
        {
            m_SeniorAuthority_AuthorityCount.text = StrDictionary.GetClientDictionaryString("#{3392}");

            m_SeniorAuthority_ToggleJoin.value = true;
            m_SeniorAuthority_ToggleJoinReq.value = true;
            m_SeniorAuthority_ToggleDeclaration.value = true;
            m_SeniorAuthority_ToggleKick.value = true;
            m_SeniorAuthority_ToggleActivity.value = true;
            m_SeniorAuthority_ToggleNotice.value = true;

            // 会长的toggle谁都不能点击
            m_SeniorAuthority_ToggleJoin.isEnabled = false;
            m_SeniorAuthority_ToggleJoinReq.isEnabled = false;
            m_SeniorAuthority_ToggleDeclaration.isEnabled = false;
            m_SeniorAuthority_ToggleKick.isEnabled = false;
            m_SeniorAuthority_ToggleActivity.isEnabled = false;
            m_SeniorAuthority_ToggleNotice.isEnabled = false;
        }
        if (nGuildJob == (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
        {
            m_SeniorAuthority_AuthorityCount.text = StrDictionary.GetClientDictionaryString("#{10433}", GlobeVar.GUILD_VICECHIEF_AUTHCOUNT);

            m_SeniorAuthority_ToggleJoin.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_JOIN];
            m_SeniorAuthority_ToggleJoinReq.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOINREQ];
            m_SeniorAuthority_ToggleDeclaration.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_DECLARATION];
            m_SeniorAuthority_ToggleKick.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_KICK];
            m_SeniorAuthority_ToggleActivity.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_OPEN_ACTIVITY];
            m_SeniorAuthority_ToggleNotice.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_NOTICE];
        }
        if (nGuildJob == (int)GameDefine_Globe.GUILD_JOB.ELDER)
        {
            m_SeniorAuthority_AuthorityCount.text = StrDictionary.GetClientDictionaryString("#{10433}", GlobeVar.GUILD_ELDER_AUTHCOUNT);

            m_SeniorAuthority_ToggleJoin.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_JOIN];
            m_SeniorAuthority_ToggleJoinReq.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOINREQ];
            m_SeniorAuthority_ToggleDeclaration.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_DECLARATION];
            m_SeniorAuthority_ToggleKick.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_KICK];
            m_SeniorAuthority_ToggleActivity.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_OPEN_ACTIVITY];
            m_SeniorAuthority_ToggleNotice.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_NOTICE];
        }

        // 修改职位权限相关的部分
        if (info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOB))
        {
            m_SeniorAuthority_SelectBtn.SetActive(true);
            if (nGuildJob == (int)GameDefine_Globe.GUILD_JOB.CHIEF)
            {
                m_SeniorAuthority_SelectBtnLabel.text = StrDictionary.GetClientDictionaryString("#{10449}");
            }
            if (nGuildJob == (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF ||
                nGuildJob == (int)GameDefine_Globe.GUILD_JOB.ELDER)
            {
                m_SeniorAuthority_SelectBtnLabel.text = StrDictionary.GetClientDictionaryString("#{10399}");
            }
        }
        else
        {
            m_SeniorAuthority_SelectBtn.SetActive(false);
        }

        // 设置副会长和长老权限的部分
        if (info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_SET_AUTHORITY))
        {
            m_SeniorAuthority_SaveBtn.SetActive(true);
            if (nGuildJob == (int)GameDefine_Globe.GUILD_JOB.CHIEF)
            {
                m_SeniorAuthority_SaveImageBtn.isEnabled = false;
                m_SeniorAuthority_SaveBtnLabel.text = StrDictionary.GetClientDictionaryString("#{10398}");
            }
            if (nGuildJob == (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
            {
                m_SeniorAuthority_SaveImageBtn.isEnabled = true;
                m_SeniorAuthority_SaveBtnLabel.text = StrDictionary.GetClientDictionaryString("#{4099}");                

                UpdateAuthorityToggleEnable();
            }
            if (nGuildJob == (int)GameDefine_Globe.GUILD_JOB.ELDER)
            {
                m_SeniorAuthority_SaveImageBtn.isEnabled = true;
                m_SeniorAuthority_SaveBtnLabel.text = StrDictionary.GetClientDictionaryString("#{4099}");

                UpdateAuthorityToggleEnable();
            }
        }
        else
        {
            m_SeniorAuthority_SaveBtn.SetActive(false);

            // 没有权限 所有toggle无法点击
            m_SeniorAuthority_ToggleJoin.isEnabled = false;
            m_SeniorAuthority_ToggleJoinReq.isEnabled = false;
            m_SeniorAuthority_ToggleDeclaration.isEnabled = false;
            m_SeniorAuthority_ToggleKick.isEnabled = false;
            m_SeniorAuthority_ToggleActivity.isEnabled = false;
            m_SeniorAuthority_ToggleNotice.isEnabled = false;
        }
    }

    void UpdateAuthorityToggleEnable()
    {
        if (m_CurGuildJob != (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF &&
            m_CurGuildJob != (int)GameDefine_Globe.GUILD_JOB.ELDER)
        {
            return;
        }

        int nRoutineCountMax = GlobeVar.INVALID_ID;
        if (m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
        {
            nRoutineCountMax = GlobeVar.GUILD_VICECHIEF_AUTHCOUNT;
        }
        if (m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.ELDER)
        {
            nRoutineCountMax = GlobeVar.GUILD_ELDER_AUTHCOUNT;
        }

        if (nRoutineCountMax == GlobeVar.INVALID_ID)
        {
            return;
        }

        if (GetCurToggleChooseCount() >= nRoutineCountMax)
        {
            m_SeniorAuthority_ToggleJoin.isEnabled = m_SeniorAuthority_ToggleJoin.value;
            m_SeniorAuthority_ToggleJoinReq.isEnabled = m_SeniorAuthority_ToggleJoinReq.value;
            m_SeniorAuthority_ToggleDeclaration.isEnabled = m_SeniorAuthority_ToggleDeclaration.value;
            m_SeniorAuthority_ToggleKick.isEnabled = m_SeniorAuthority_ToggleKick.value;
            m_SeniorAuthority_ToggleActivity.isEnabled = m_SeniorAuthority_ToggleActivity.value;
            m_SeniorAuthority_ToggleNotice.isEnabled = m_SeniorAuthority_ToggleNotice.value;
        }
        else
        {
            m_SeniorAuthority_ToggleJoin.isEnabled = true;
            m_SeniorAuthority_ToggleJoinReq.isEnabled = true;
            m_SeniorAuthority_ToggleDeclaration.isEnabled = true;
            m_SeniorAuthority_ToggleKick.isEnabled = true;
            m_SeniorAuthority_ToggleActivity.isEnabled = true;
            m_SeniorAuthority_ToggleNotice.isEnabled = true;
        }
    }

    int GetCurToggleChooseCount()
    {
        int count = 0;
        count += m_SeniorAuthority_ToggleJoin.value ? 1 : 0;
        count += m_SeniorAuthority_ToggleJoinReq.value ? 1 : 0;
        count += m_SeniorAuthority_ToggleDeclaration.value ? 1 : 0;
        count += m_SeniorAuthority_ToggleKick.value ? 1 : 0;
        count += m_SeniorAuthority_ToggleActivity.value ? 1 : 0;
        count += m_SeniorAuthority_ToggleNotice.value ? 1 : 0;
        return count;
    }

    void OnSaveAuthorityClick()
    {
        if (m_CurGuildJob != (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF &&
            m_CurGuildJob != (int)GameDefine_Globe.GUILD_JOB.ELDER)
        {
            return;
        }

        CG_GUILD_SET_AUTHORITY pak = (CG_GUILD_SET_AUTHORITY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_SET_AUTHORITY);
        pak.SetGuildJobId = m_CurGuildJob;
        pak.GuildJoin = m_SeniorAuthority_ToggleJoin.value ? 1 : 0;
        pak.Declaration = m_SeniorAuthority_ToggleDeclaration.value ? 1 : 0;
        pak.ChangeNotice = m_SeniorAuthority_ToggleNotice.value ? 1 : 0;
        pak.ChangeJoinReq = m_SeniorAuthority_ToggleJoinReq.value ? 1 : 0;
        pak.GuildKick = m_SeniorAuthority_ToggleKick.value ? 1 : 0;
        pak.ShopLevelUp = 0;
        pak.OpenActivity = m_SeniorAuthority_ToggleActivity.value ? 1 : 0;
        pak.SendPacket();
    }

    void OnChangeJobClick()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        m_GuildJobSelectWindow.SetActive(true);

        m_SelectChooseGuid.Clear();

        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        Utils.CleanGrid(m_GuildJobSelectGrid);

        int index = 0;
        foreach (KeyValuePair<UInt64, GuildMember> memberPair in info.GuildMemberList)
        {
            GuildMember member = memberPair.Value;
            if (false == member.IsValid() || member.Job == (int)GameDefine_Globe.GUILD_JOB.RESERVE)
            {
                continue;
            }

            if (member.Guid == Singleton<ObjManager>.Instance.MainPlayer.GUID)
            {
                continue;
            }

            GameObject memberItem = Utils.BindObjToParent(m_GuildJobSelectMemberItem, m_GuildJobSelectGrid, index.ToString());
            if (memberItem == null || memberItem.GetComponent<GuildJobSelectMemberItemLogic>() == null)
            {
                continue;
            }

            memberItem.GetComponent<GuildJobSelectMemberItemLogic>().Init(member, m_CurGuildJob);

            if (member.Job == m_CurGuildJob)
            {
                m_SelectChooseGuid.Add(member.Guid);
            }
        }

        if (m_GuildJobSelectGrid.GetComponent<UIGrid>() != null)
        {
            m_GuildJobSelectGrid.GetComponent<UIGrid>().Reposition(true);
        }

        if (0 <= m_CurGuildJob && m_CurGuildJob < GlobeVar.GUILD_JOB_NAME.Length)
        {
            string szDefaultJobName = StrDictionary.GetClientDictionaryString(GlobeVar.GUILD_JOB_NAME[m_CurGuildJob]);
            m_SelectMember_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{10443}", szDefaultJobName);
        }

        int nMaxCount = GlobeVar.INVALID_ID;
        if (m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.CHIEF ||
            m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
        {
            nMaxCount = 1;
        }
        if (m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.ELDER)
        {
            nMaxCount = GlobeVar.GetGuildElderMax(info.GuildLevel);
        }

        if (nMaxCount == GlobeVar.INVALID_ID)
        {
            return;
        }

        m_SelectMember_CountLabel.text = StrDictionary.GetClientDictionaryString("#{10450}", m_SelectChooseGuid.Count, nMaxCount);
    }

    public void OnSelectMemberCloseClick()
    {
        Utils.CleanGrid(m_GuildJobSelectGrid);
        m_GuildJobSelectWindow.SetActive(false);
        m_SelectChooseGuid.Clear();
    }

    public void HandleSelecMemberChoose(GuildJobSelectMemberItemLogic item)
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        int nMaxCount = GlobeVar.INVALID_ID;
        if (m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.CHIEF ||
            m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
        {
            nMaxCount = 1;
        }
        if (m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.ELDER)
        {
            nMaxCount = GlobeVar.GetGuildElderMax(info.GuildLevel);
        }

        if (nMaxCount == GlobeVar.INVALID_ID)
        {
            return;
        }

        if (m_SelectChooseGuid.Contains(item.MemberGuid))
        {
            m_SelectChooseGuid.Remove(item.MemberGuid);
            item.HandleItemRemove();
        }
        else
        {
            if (m_SelectChooseGuid.Count < nMaxCount)
            {
                m_SelectChooseGuid.Add(item.MemberGuid);
                item.HandleItemAdd();
            }
        }

        m_SelectMember_CountLabel.text = StrDictionary.GetClientDictionaryString("#{10450}", m_SelectChooseGuid.Count, nMaxCount);
    }

    void OnSelectMemberOKClick()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.CHIEF)
        {
            if (m_SelectChooseGuid.Count == 1)
            {
                Singleton<ObjManager>.Instance.MainPlayer.ReqChangeGuildMaster(m_SelectChooseGuid[0]);
            }
        }
        else
        {
            Singleton<ObjManager>.Instance.MainPlayer.ReqChangeGuildMemberJob(m_SelectChooseGuid, m_CurGuildJob);
        }
    }

    public void HandleChangeJobName()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        string szDefaultJobName = "";
        if (0 <= m_CurGuildJob && m_CurGuildJob < GlobeVar.GUILD_JOB_NAME.Length)
        {
            szDefaultJobName = StrDictionary.GetClientDictionaryString(GlobeVar.GUILD_JOB_NAME[m_CurGuildJob]);
        }

        if (szDefaultJobName == "")
        {
            return;
        }

        if (0 <= m_CurGuildJob && m_CurGuildJob < info.GuildJobName.Length)
        {
            if (string.IsNullOrEmpty(info.GuildJobName[m_CurGuildJob]))
            {
                m_GuildJobName.text = szDefaultJobName;
            }
            else
            {
                m_GuildJobName.text = info.GuildJobName[m_CurGuildJob];
            }
        } 
    }

    public void HandleSetAuthority()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        if (m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
        {
            m_SeniorAuthority_ToggleJoin.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_JOIN];
            m_SeniorAuthority_ToggleJoinReq.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOINREQ];
            m_SeniorAuthority_ToggleDeclaration.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_DECLARATION];
            m_SeniorAuthority_ToggleKick.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_KICK];
            m_SeniorAuthority_ToggleActivity.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_OPEN_ACTIVITY];
            m_SeniorAuthority_ToggleNotice.value = info.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_NOTICE];
        }
        if (m_CurGuildJob == (int)GameDefine_Globe.GUILD_JOB.ELDER)
        {
            m_SeniorAuthority_ToggleJoin.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_JOIN];
            m_SeniorAuthority_ToggleJoinReq.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOINREQ];
            m_SeniorAuthority_ToggleDeclaration.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_DECLARATION];
            m_SeniorAuthority_ToggleKick.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_KICK];
            m_SeniorAuthority_ToggleActivity.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_OPEN_ACTIVITY];
            m_SeniorAuthority_ToggleNotice.value = info.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_NOTICE];
        }
    }
}
