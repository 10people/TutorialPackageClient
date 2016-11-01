//********************************************************************
// 文件名: MountItem.cs
// 全路径：	\Script\GUI\MountItem.cs
// 描述: 坐骑界面 坐骑选项
// 作者: hewenpeng
// 创建时间: 2013-01-07
//********************************************************************
using UnityEngine;
using System.Collections;
using GCGame;

public class MountItem : MonoBehaviour {

    public GameObject m_ItemActive;
    public GameObject m_ItemNormal;
    public UILabel m_ItemName;
	public Color normalColor;
	public Color highLightColor;
    public void SetName(string strName)
    {
        if (m_ItemName)
        {
            m_ItemName.text = strName;
			m_ItemName.color = normalColor;
        }

    }
    public UISprite m_Icon;
    public void SetIcon(string strSpritName)
    {
        m_Icon.spriteName = strSpritName;
    }

    public GameObject m_GetItemLabel;
    public GameObject m_NoGetItemLabel;
    public void SetCollectFlag(bool bFlag)
    {
        m_GetItemLabel.SetActive(bFlag);
        m_NoGetItemLabel.SetActive(!bFlag);
    }

    //added by mawenbin
    //获取新坐骑，红点提示，控件挂载
    public GameObject m_RemindPoint;
    public void SetRemindFlag(bool bFlag)
    {
        m_RemindPoint.SetActive(bFlag);
    }

    private int m_MountID = -1;
    public int MountID
    {
        get { return m_MountID; }
        set { m_MountID = value; }
    }

    private static MountItem m_Instance = null;
    public static MountItem Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
         m_Instance = this;
         m_ItemActive.SetActive(false);
		m_ItemName.color = normalColor;
         m_ItemNormal.SetActive(true);
         SetCollectFlag(false);
    }

	// Use this for initialization
	void Start () {
	}

    public void MountItemClick()
    {
		if (null == gameObject)
			return;

         m_ItemActive.SetActive(true);
         m_ItemNormal.SetActive(false);
		m_ItemName.color = highLightColor;

        if (null != MountAndFellowLogic.Instance())
        {
            MountAndFellowLogic.Instance().MountItemClick(m_MountID);            
        }

        //added by mawenbin
        //获取新坐骑，红点提示，点击隐藏红点
        m_RemindPoint.SetActive(false);
        if (null != GameManager.gameManager.PlayerDataPool)
        {
            GameManager.gameManager.PlayerDataPool.m_objMountParam.ClearMountRemindFlag(MountID);
        }
	}

    public void DisableItemUI()
    {
         m_ItemActive.SetActive(false);
         m_ItemNormal.SetActive(true);
		m_ItemName.color = normalColor;
    }

    void AutoFlagButton(GameObject value)
    {
        if (null == gameObject)
            return;
        
        MarkAutoMountFlag(m_MountID);
    }

    // 通知服务器修改标记
    void MarkAutoMountFlag(int nMountID)
    {
        CG_MOUNT_MARK packet = (CG_MOUNT_MARK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MOUNT_MARK);
        packet.SetMountID(nMountID);
        packet.SendPacket();
    }
}
