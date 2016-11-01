/********************************************************************************
 *	文件名：	MakeHongBaoWindow.cs
 *	创建人：	贺文鹏
 *	创建时间：2014-12-15
 *
 *	功能说明：发红包界面
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.UserCommonData;
using Games.GlobeDefine;

public class MakeHongBaoWindow : UIControllerBase<MakeHongBaoWindow> {

    const int YUANGBAO_LOW_VALUE = 100; // 元宝 下限值
    const int YUANGBAO_DIFF_VALUE = 10;  // 元宝 递增差值

    // 可选按钮 类型和频道
    public UIToggle[] m_TypeToggle = new UIToggle[(int)HONGBAO_TYPE.HONGBAO_TYPE_MAX_COUNT - 1];
    public UIToggle[] m_ChannelToggle = new UIToggle[(int)HONGBAO_CHANNEL.HONGBAO_CHANNEL_MAX_COUNT - 1];
	
    public UILabel m_ScoreLabel; // 累计积分

    // 元宝
    private int m_YuanBao;
    public int YuanBao
    {
        get { return m_YuanBao; }
        set { 
            m_YuanBao = value;
            if (m_InputNum)
            {
                m_InputNum.value = m_YuanBao.ToString();
            }
        }
    }

    // 积分
    private int m_Score;
    public int Score
    {
        get { return m_Score; }
        set { 
            m_Score = value; 
            if (m_ScoreLabel)
            {
                m_ScoreLabel.text = m_Score.ToString();
            }
        }
    }

    private bool m_isAdd = false;
    private bool m_isDel = false;

    public UIInput m_InputNum;
    private int m_maxValue = 999999999;        // 上限
    private int m_MinValue = 100;        // 上限

    void Awake()
    {
        SetInstance(this);
    }

    // Use this for initialization
	void Start () {
        InvokeRepeating("SlowUpdate", 0, 0.1f); 
        CleanUp();
        InitUI();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnDestroy()
    {
        CancelInvoke("SlowUpdate");
        SetInstance(null);
    }

    // 初始化
    void InitUI()
    {
        int nType = PlayerPreferenceData.HongBaoType;
        if (nType-1 >= 0 && nType - 1 < (int)HONGBAO_TYPE.HONGBAO_TYPE_MAX_COUNT)
        {
            m_TypeToggle[nType - 1].value = true;
        }

        int nChannel = PlayerPreferenceData.HongBaoChannel;
        if (nChannel - 1 >= 0 && nChannel -1 < (int)HONGBAO_CHANNEL.HONGBAO_CHANNEL_MAX_COUNT)
        {
            m_ChannelToggle[nChannel - 1].value = true;
        }
    }

    // 清理
    void CleanUp()
    {
        for (int i = 0; i < m_TypeToggle.Length; i++)
        {
            if (m_TypeToggle[i] != null)
            {
                m_TypeToggle[i].value = false;
            }
        }
        for (int i = 0; i < m_ChannelToggle.Length; i++)
        {
            if (m_ChannelToggle[i] != null)
            {
                m_ChannelToggle[i].value = false;
            }
        }

        if (m_InputNum)
        {
            m_InputNum.defaultText = "";
        }

        if (m_ScoreLabel)
        {
            YuanBao = YUANGBAO_LOW_VALUE;
            Score = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)USER_COMMONDATA.CD_HONGBAO_SCORE);
        }
    }

    // 类型选择
    public void OnType_FiveRobber()
    {
        PlayerPreferenceData.HongBaoType = (int)HONGBAO_TYPE.HONGBAO_TYPE_ROBBER_FIVE;
    }
    public void OnType_TenRobber()
    {
        PlayerPreferenceData.HongBaoType = (int)HONGBAO_TYPE.HONGBAO_TYPE_ROBBER_TEN;
    }
    public void OnType_CD()
    {
        PlayerPreferenceData.HongBaoType = (int)HONGBAO_TYPE.HONGBAO_TYPE_CD;
    }

    // 频道选择
    public void OnChannel_World()
    {
        PlayerPreferenceData.HongBaoChannel = (int)HONGBAO_CHANNEL.HONGBAO_CHANNEL_WORLD;
    }
    public void OnChannel_Guild()
    {
        PlayerPreferenceData.HongBaoChannel = (int)HONGBAO_CHANNEL.HONGBAO_CHANNEL_GUILD;
    }

    void SlowUpdate()
    {
        if (m_isAdd)
        {
            OnIncYuanBao();
        }
        if (m_isDel)
        {
            OnDesYuanBao();
        }
    }

    void AddOnPress()
    {
        m_isAdd = true;
    }

    void AddOnRelease()
    {
        m_isAdd = false;
    }

    void DelOnPress()
    {
        m_isDel = true;
    }

    void DelOnRelease()
    {
        m_isDel = false;
    }
	

    // 加元宝
    void OnIncYuanBao()
    {
        if (YuanBao < 99999999) // 有这么土豪的么
        {
            YuanBao += YUANGBAO_DIFF_VALUE; // 每次递增10
        }
    }

    // 减元宝
    void OnDesYuanBao()
    {
        if (YuanBao > YUANGBAO_LOW_VALUE)
        {
            YuanBao -= YUANGBAO_DIFF_VALUE;
        }
    }

    // 发红包
    void OnMakeHongBao()
    {
        OnInputSubmit();

        // 判断下钱够不
        if (YuanBao > GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao())
        {
            if (Singleton<ObjManager>.Instance.MainPlayer)
            {
                Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{5070}");
                return;
            }
        }
        string strText = StrDictionary.GetClientDictionaryString("#{5129}", YuanBao);
        MessageBoxLogic.OpenOKCancelBox(strText, "", OnMakeOk);
    }

    void OnMakeOk()
    {
        CG_ASK_HONGBAO_SEND HongBaoPak = (CG_ASK_HONGBAO_SEND)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_HONGBAO_SEND);
        HongBaoPak.SetType(GetChooseType());
        HongBaoPak.SetChannel(GetChooseChannel());
        HongBaoPak.SetYuanbao(YuanBao);
        HongBaoPak.SendPacket();
    }

    // 获取类型
    int GetChooseType()
    {
        for (int i = 0; i < m_TypeToggle.Length; i++ )
        {
            if (m_TypeToggle[i].value == true)
            {
                return i + 1;   // 索引 + 1 = 类型枚举
            }
        }
        return (int)HONGBAO_TYPE.HONGBAO_TYPE_NONE;
    }
    // 获取频道
    int GetChooseChannel()
    {
        for (int i = 0; i < m_ChannelToggle.Length; i++)
        {
            if (m_ChannelToggle[i].value == true)
            {
                return i + 1;
            }
        }
        return (int)HONGBAO_CHANNEL.HONGBAO_CHANNEL_NONE;
    }

    // 积分排行榜
    void OnScoreRank()
    {
        GameManager.gameManager.PlayerDataPool.HongBaoRankFlag = true;
        // 发包？
        //CG_ASK_RANK scoreRankPak = (CG_ASK_RANK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RANK);
        //scoreRankPak.NType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO;
        //scoreRankPak.NPage = 0;
        //scoreRankPak.SendPacket();

        RankWindow.ShowRankWindow((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO);
    }

    // 创建奖励界面
    void OnScoreAwardUI()
    {
        if (HongBaoWindow.Instance())
        {
            HongBaoWindow.Instance().ShowScoreWindow();
        }
    }


    // 回车时响应
    public void OnInputSubmit()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(m_InputNum.value, out curNum);
        if (bCanParse)
        {
            curNum = Mathf.Min(m_maxValue, Mathf.Max(m_MinValue, curNum));
            YuanBao = curNum;
        }
        else
        {
            YuanBao = m_MinValue;
        }

    }

    void OnClickInput()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(m_InputNum.value, out curNum);
        if (bCanParse)
        {
            curNum = Mathf.Min(m_maxValue, Mathf.Max(m_MinValue, curNum));
            YuanBao = curNum;
        }
        else
        {
            YuanBao = m_MinValue;
        }
    }
}
