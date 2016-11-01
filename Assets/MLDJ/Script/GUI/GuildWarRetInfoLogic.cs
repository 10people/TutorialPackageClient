/********************************************************************
	创建时间:	2014/11/20 15:47
	全路径:		\Main\Project\Client\Assets\MLDJ\Script\GUI\GuildWarRetInfoLogic.cs
	创建人:		luoy
	功能说明:	帮战副本结算界面
	修改记录:
*********************************************************************/
using System.Security.Cryptography.X509Certificates;
using UnityEngine;
using System.Collections;

public class GuildWarRetInfoLogic : MonoBehaviour {

	// Use this for initialization
    public UISprite m_RetShow;
    public GameObject m_AwardInfo;
    public UILabel m_CoinLable;
    public UILabel m_ExpLable;
    public UILabel m_ContributeLable;
    private static GuildWarRetInfoLogic m_Instance = null;
    public static GuildWarRetInfoLogic Instance()
    {
        return m_Instance;
    }
    void Awake()
    {
        m_Instance = this;
    }
	void Start () 
    {
	
	}

    void OnDestroy()
    {
        m_Instance = null;
    }
	
    public void UpdateInfo(int isWin,int nWarType,int exp, int contribute,int nCoin)
    {
        if (isWin ==1)//胜
        {
            m_RetShow.spriteName = "sheng";
            m_RetShow.MakePixelPerfect();
        }
        else if (isWin == 2)//败
        {
            m_RetShow.spriteName = "bai";
            m_RetShow.MakePixelPerfect();
        }
        else if (isWin == 3)//平
        {
            m_RetShow.spriteName = "ping";
            m_RetShow.MakePixelPerfect();
        }
        if (nWarType == (int)GUILDWARTYPE.CHALLENGE || nWarType == (int)GUILDWARTYPE.FINALS)
        {
            m_AwardInfo.SetActive(false);   
        }
        else
        {
            m_AwardInfo.SetActive(true);
        }
        m_ExpLable.text = exp.ToString();
        m_ContributeLable.text = contribute.ToString();
        m_CoinLable.text = nCoin.ToString();
    }

    void OnCliclLevel()
    {
        CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
        packet.NoParam = -1;
        packet.SendPacket();
    }
}
