/********************************************************************************
 *	文件名：	GuildMemberListItemLogic.cs
 *	全路径：	\Script\GUI\GuildMemberListItemLogic.cs
 *	创建人：	李嘉
 *	创建时间：2014-04-24
 *
 *	功能说明：帮会成员列表项
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using System;
using Games.GlobeDefine;
using GCGame.Table;
using GCGame;

public class GuildMemberListItemLogic : MonoBehaviour
{
    public GameObject m_MemberWidgeRoot;        //帮会正式成员控件根节点
    public GameObject m_ReserveMemberWidgeRoot; //待审批成员控件根节点

    //帮会正式成员控件
    public UILabel m_MemberNameLable;           //帮会成员姓名
    public UILabel m_MemberLevelLable;          //帮会成员等级
    public UISprite m_MemberProfSprite;         //帮会成员职业
    public UILabel m_MemberStateLable;          //帮会成员状态(目前为最后登录时间)
    public UILabel m_MemberJobLable;            //帮会成员职位
    public UILabel m_MemberContriLable;         //帮会成员贡献度
    public UILabel m_MemberVIPLabel;            //帮会成员VIP等级标记
    public GameObject m_MemberLeaveBtn;         //离开公会按钮 只有自己的item显示

    //帮会预备役成员控件
    public UILabel m_ReserveMemberNameLable;        //帮会预备成员名字
    public UILabel m_ReserveMemberLevelLable;       //帮会预备成员等级
    public UISprite m_ReserveMemberProfSprite;      //帮会预备成员职业
    public UILabel m_ReserveMemberCombatvalLable;   //帮会预备成元战力
    public UILabel m_ReserveMemberVIPLabel;         //帮会预备成员VIP等级标记

    private UInt64 m_MemberGuid;                //成员GUID
    //private int m_MemberJob;                    //成员Job ID

    public void Init(GuildMember member, bool bIsReserveMember)
    {
        if (member.Guid == GlobeVar.INVALID_GUID)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        m_MemberGuid = member.Guid;

        if (bIsReserveMember)
        {
            m_MemberWidgeRoot.SetActive(false);
            m_ReserveMemberWidgeRoot.SetActive(true);

            m_ReserveMemberNameLable.text = member.MemberName;
            m_ReserveMemberLevelLable.text = "LV" + member.Level.ToString();

            // 玩家职业
            m_ReserveMemberProfSprite.spriteName = Utils.GetProfessionIcon(member.Profession);
            m_ReserveMemberCombatvalLable.text = member.ComBatVal.ToString();

            if (member.VIP > 0)
            {
                m_ReserveMemberVIPLabel.text = "VIP" + member.VIP.ToString();
                m_ReserveMemberVIPLabel.gameObject.SetActive(true);
            }
            else
            {
                m_ReserveMemberVIPLabel.gameObject.SetActive(false);
            }            
        }
        else
        {
            m_MemberWidgeRoot.SetActive(true);
            m_ReserveMemberWidgeRoot.SetActive(false);

            m_MemberNameLable.text = member.MemberName;
            m_MemberLevelLable.text = "LV" + member.Level.ToString();

            //判断职业是否合法
            if (member.Profession < 0 || member.Profession >= (int)CharacterDefine.PROFESSION.MAX)
            {
                //非法职业ID，则强制为0
                member.Profession = 0;
            }

            // 玩家职业
            m_MemberProfSprite.spriteName = Utils.GetProfessionIcon(member.Profession);

            if (member.Guid == Singleton<ObjManager>.Instance.MainPlayer.GUID)
            {
                m_MemberLeaveBtn.SetActive(true);
                m_MemberStateLable.gameObject.SetActive(false);
            }
            else
            {
                m_MemberLeaveBtn.SetActive(false);
                m_MemberStateLable.gameObject.SetActive(true);

                //最后登出时间,如果在线则显示在线
                //member.LastLogin为1970年1月1日至今的标准时间，需要转换为时分秒
                if (member.State == 1)
                {
                    //在线，显示在线
                    m_MemberStateLable.text = StrDictionary.GetClientDictionaryString("#{2866}");
                }
                else
                {
                    DateTime startTime = new DateTime(1970, 1, 1);
                    DateTime sendDate = new DateTime((long)member.LastLogout * 10000000L + startTime.Ticks, DateTimeKind.Unspecified);
                    sendDate = sendDate.ToLocalTime();

                    if (DateTime.Now.Subtract(sendDate).Days < 1)
                    {
                        m_MemberStateLable.text = sendDate.ToString("HH:mm");
                    }
                    else
                    {
                        m_MemberStateLable.text = sendDate.ToString("MM-dd");
                    }
                }
            }

            //帮贡
            m_MemberContriLable.text = member.Contribute.ToString();

            //职位
            if (member.Job < 0 || member.Job >= (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.MAX)
            {
                member.Job = (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.MEMBER;
            }

            string szJobName = GameManager.gameManager.PlayerDataPool.GuildInfo.GuildJobName[member.Job];
            if (szJobName == "")
            {
                m_MemberJobLable.text = StrDictionary.GetClientDictionaryString(GlobeVar.GUILD_JOB_NAME[member.Job]);
            }
            else
            {
                m_MemberJobLable.text = szJobName;
            }

            if (member.VIP > 0)
            {
                m_MemberVIPLabel.text = "VIP" + member.VIP.ToString();
                m_MemberVIPLabel.gameObject.SetActive(true);
            }
            else
            {
                m_MemberVIPLabel.gameObject.SetActive(false);
            }  
        }
    }

    void GuildListItemSelect()
    {
        if (m_ReserveMemberWidgeRoot.activeInHierarchy)
        {
            return;
        }

        //更新选择变化界面更新（如果未打开，则不处理）
        if (null != GUIData.delGuildMemberSelectChange)
        {
            GUIData.delGuildMemberSelectChange(m_MemberGuid);

            //如果点击的不是自己，则弹出菜单
            if (m_MemberGuid != Singleton<ObjManager>.Instance.MainPlayer.GUID)
            {
                PopMenuLogic.ShowMenu("GuildMemberPopMenu", this.gameObject);
            }
        }
    }

    void OnAgreeReserveClick()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer == null)
        {
            return;
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqApproveGuildMember(m_MemberGuid, 1);
    }

    void OnDisagreeReserveClick()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer == null)
        {
            return;
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqApproveGuildMember(m_MemberGuid, 0);
    }

    void OnLeaveGuildClick()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (m_MemberGuid != Singleton<ObjManager>.Instance.MainPlayer.GUID)
        {
            return;
        }

        Singleton<ObjManager>.Instance.MainPlayer.ReqLeavGuild();
    }
}
