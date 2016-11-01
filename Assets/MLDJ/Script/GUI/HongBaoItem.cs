using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;

public class HongBaoItem : MonoBehaviour {

    public UILabel m_SenderNameLabel; // 发送者姓名
    public UILabel m_YuanBaoLabel; // 元宝值

    private ulong m_Guid;   // 红包Guid
    private string m_SenderName;  // 发送者名字
    private ulong m_SenderGuid; // 发送者Guid
    public string SenderName
    {
        get { return m_SenderName; }
        set {
            m_SenderName = value;
            if (m_SenderNameLabel)
            {
                m_SenderNameLabel.text = m_SenderName;
            }
        }
    }
    private int m_nYuanBao; // 元宝
    public int YuanBao
    {
        get { return m_nYuanBao; }
        set { 
            m_nYuanBao = value;
            if (m_YuanBaoLabel)
            {
                m_YuanBaoLabel.text = m_nYuanBao.ToString();
            }
        }
    }

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

    // 清理
    void CleanUp()
    {
        m_Guid = GlobeVar.INVALID_GUID;
        m_SenderGuid = GlobeVar.INVALID_GUID;
        SenderName = "";
        YuanBao = 0;
    }

    // 初始化
    public void Init(ulong guid, ulong SenderGuid,string senderName, int nYuanBao)
    {
        CleanUp();
        m_Guid = guid;
        m_SenderGuid = SenderGuid;
        SenderName = senderName;
        YuanBao = nYuanBao;
    }

    void RobHongBao()
    {
        CG_ASK_HONGBAO_ROB Pak = (CG_ASK_HONGBAO_ROB)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_HONGBAO_ROB);
        Pak.SetHongbaoguid(m_Guid);
        Pak.SetSenderguid(m_SenderGuid);
        Pak.SendPacket();
    }
}
