using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using GCGame;

public class JuYiRewardItemLogic : MonoBehaviour {

    public UILabel m_TitleLabel;
    public BoxCollider m_JuYiLingAward_Box;
    public GameObject m_JuYiLingAward;
    public GameObject m_JuYiLingAward_HaveGot;
    public GameObject m_JuYiLingAward_CanGet;
    public GameObject m_JuYiLingAward_Dis;

    private int m_JuYiRewardID = GlobeVar.INVALID_ID;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void Init(int id)
    {
        Tab_JuYiReward tabReward = TableManager.GetJuYiRewardByID(id, 0);
        if (tabReward == null)
        {
            return;
        }

        m_JuYiRewardID = id;

        m_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{5354}", tabReward.JuYiCount);

        m_JuYiLingAward_Box.enabled = false;
        m_JuYiLingAward.SetActive(false);
        m_JuYiLingAward_HaveGot.SetActive(false);
        m_JuYiLingAward_CanGet.SetActive(false);
        m_JuYiLingAward_Dis.SetActive(true);

        int nPlayerJuYiGetAward = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_JUYIYITANG_GETAWARD);

        if (Utils.GetIntNumber(nPlayerJuYiGetAward, m_JuYiRewardID, 1) == 0)
        {
            m_JuYiLingAward_Box.enabled = true;

            int nJuYiCount = GameManager.gameManager.PlayerDataPool.JuYiCount;
            if (nJuYiCount >= tabReward.JuYiCount)
            {
                //可以领取
                m_JuYiLingAward.SetActive(true);
                m_JuYiLingAward_CanGet.SetActive(true);
            }
            else
            {
                //不可领取
                m_JuYiLingAward_Dis.SetActive(true);
            }
        }
        else
        {
            // 已领取
            m_JuYiLingAward_Dis.SetActive(true);
            m_JuYiLingAward_HaveGot.SetActive(true);
        }
    }

    void RewardOnClick()
    {
        if (m_JuYiLingAward_CanGet.activeInHierarchy)
        {
            CG_ASK_JUYI_AWARD packet = (CG_ASK_JUYI_AWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_JUYI_AWARD);
            packet.AwardIndex = m_JuYiRewardID;
            packet.SendPacket();
        }
        else if (m_JuYiLingAward_Dis.activeInHierarchy && !m_JuYiLingAward_HaveGot.activeInHierarchy)
        {
            Tab_JuYiReward tabReward = TableManager.GetJuYiRewardByID(m_JuYiRewardID, 0);
            if (tabReward == null)
            {
                return;
            }

            ItemTooltipsLogic.ShowItemTooltip(tabReward.ItemId, ItemTooltipsLogic.ShowType.Info);
        }
    }
}
