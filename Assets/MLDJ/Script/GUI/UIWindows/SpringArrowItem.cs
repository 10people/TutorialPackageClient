using Games.AwardActivity;
using Games.GlobeDefine;
using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.Item;

public class SpringArrowItem : MonoBehaviour
{
    public UISprite m_LiBao;
    public UISprite m_LingQu;
    public UISprite m_KeLinQu;
    public GameObject m_Button;
    public UILabel m_Lable;
    public UISprite m_NoLingQu;

    private JoinNumRewardData m_ArrowData;
    private bool m_IsGetState = false;

	// Use this for initialization
	void Start () {
	
	}

    public void SetRewardInfo(JoinNumRewardData rewardData)
    {
        m_ArrowData = rewardData;
        m_Lable.text = StrDictionary.GetClientDictionaryString("#{5094}", rewardData.Number.ToString());
        SetArrowState(rewardData.State);
    }

    /// <summary>
    /// 设置领取状态
    /// </summary>
    /// <param name="tag"></param>
    public void SetArrowState(JoinNumRewardState tag)
    {
        m_LingQu.gameObject.SetActive(false);
        m_KeLinQu.gameObject.SetActive(false);
        m_NoLingQu.gameObject.SetActive(false);
        m_LiBao.gameObject.SetActive(false);

        switch (tag)
        {
            case JoinNumRewardState.RECEIVE:
                m_KeLinQu.gameObject.SetActive(true);
                m_LiBao.gameObject.SetActive(true);
                break;
            case  JoinNumRewardState.NORECEIVE:
                m_LingQu.gameObject.SetActive(true);
                m_LiBao.gameObject.SetActive(true);
                break;
            case  JoinNumRewardState.INVALLD:

                if (GameManager.gameManager.PlayerDataPool.ActivityRewardJoinNum > m_ArrowData.Number)
                {
                    m_KeLinQu.gameObject.SetActive(true);
                    m_LiBao.gameObject.SetActive(true);
                }
                else
                {
                    m_NoLingQu.gameObject.SetActive(true);
                }

                break;
        }
    }

    private void SetDisableButton(bool  isDis = true)
    {
        UIImageButton imageButton = m_Button.GetComponent<UIImageButton>();
        if (imageButton != null)
        {
            imageButton.isEnabled = isDis;
            imageButton = null;
        }
    }

    /// <summary>
    /// 领取状态
    /// </summary>
    public bool IsGetState
    {
        get { return m_IsGetState; }
        set
        {
            m_IsGetState = value;
            m_LingQu.gameObject.SetActive(m_IsGetState);
        }
    }

    /// <summary>
    /// 弹出 物品信息
    /// </summary>
    /// <param name="value"></param>
    public void OnArrowItemClick(GameObject value)
    {
        //判断是否可领取奖励
        if (m_ArrowData.State == JoinNumRewardState.NORECEIVE)
        {
            ItemTooltipsLogic.ShowItemTooltip(m_ArrowData.Item1DataID, ItemTooltipsLogic.ShowType.Info);
            return;
        }
       
        if (m_ArrowData.State == JoinNumRewardState.INVALLD
            && GameManager.gameManager.PlayerDataPool.ActivityRewardJoinNum < m_ArrowData.Number)
        {
            ItemTooltipsLogic.ShowItemTooltip(m_ArrowData.Item1DataID, ItemTooltipsLogic.ShowType.Info);
            return;
        }

        //领取物品
        CG_RECEIVE_JOINNUMREWARD msg = (CG_RECEIVE_JOINNUMREWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_RECEIVE_JOINNUMREWARD);
        msg.SetRewardIndex(m_ArrowData.Index);
        msg.SendPacket();

        //ItemTooltipsLogic.ShowItemTooltip(m_ArrowItemId, ItemTooltipsLogic.ShowType.Info);
    }
}
