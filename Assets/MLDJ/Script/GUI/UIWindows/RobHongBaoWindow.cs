using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.GlobeDefine;

public class RobHongBaoWindow : UIControllerBase<RobHongBaoWindow>{

    const int MAX_NUM_HONGBAOLIST = 20;
    public HongBaoItem m_HongBaoItemCache;
    public HongBaoItem m_HongBaoItemCache_CD;
    public UIGrid m_ListGrid;

    void Awake()
    {
        SetInstance(this);
    }

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnDestroy()
    {
        SetInstance(null);
    }

    void OnEnable()
    {
        AskHongBaoList();
    }
    
    // 请求更新红包列表
    void AskHongBaoList()
    {
        CG_ASK_HONGBAO_UPDATEROBLIST Pak = (CG_ASK_HONGBAO_UPDATEROBLIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_HONGBAO_UPDATEROBLIST);
        Pak.SetNoparam(0);
        Pak.SendPacket();
    }

    // 更新列表
    public void UpdateHongBaoList(GC_RET_HONGBAO_UPDATEROBLIST packet)
    {
        Utils.CleanGrid(m_ListGrid.gameObject);

        for (int i = 0; i < packet.hongbaoguidList.Count; i++)
        {
            // 空的
            if (packet.hongbaoguidList[i] == GlobeVar.INVALID_GUID)
            {
                continue;
            }

            GameObject resItem;
            if (packet.typeList[i] == (int)HONGBAO_TYPE.HONGBAO_TYPE_CD)
            {
                resItem = m_HongBaoItemCache_CD.gameObject;
            }
            else
            {
                resItem = m_HongBaoItemCache.gameObject;
            }

            if (resItem == null)
            {
                return;
            }

            // 创建 红包
            GameObject gHongBaoItem = Utils.BindObjToParent(resItem, m_ListGrid.gameObject, i.ToString());
            if (null != gHongBaoItem)
            {
                HongBaoItem HongBao = gHongBaoItem.GetComponent<HongBaoItem>();
                if (null != HongBao)
                {
                    HongBao.Init(packet.hongbaoguidList[i],packet.SenderguidList[i], packet.sendernameList[i], packet.yuanbaoList[i]);
                }
            }
        }

        m_ListGrid.Reposition(true);
    }
}
