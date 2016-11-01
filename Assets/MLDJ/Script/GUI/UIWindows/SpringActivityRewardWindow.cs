using System;
using System.Collections.Generic;
using Games.AwardActivity;
using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;

public class SpringActivityRewardWindow : MonoBehaviour
{
    static private SpringActivityRewardWindow m_Instance = null;

    public GameObject ShowListGrid;
    public GameObject ActivityRewardItem;
    public UISprite m_CommonBarGreenSprite;
    public GameObject[] m_ArrowList;
    public UISprite m_RedInfo;
    public UILabel m_ButtonInfo;
    public int CurrentReceiveIndex = -1;
    public UILabel m_JoinNumLab;
    public UILabel m_ActivityRewardLab;

    private Dictionary<int, GameObject> m_ItemList;
    private float[] m_TagArray = new[] { 0.15f, 0.4f, 0.6f, 1f };
    private int m_AllJoinNum = 20;
    private float m_BarLength = 582f;
    private DateTime m_CurrentDateTime;
    private float m_ForTime = 0;
    private float m_UpdateNum = 30;

    public static SpringActivityRewardWindow Instance()
    {
        return m_Instance;
    }

    void OnEnable()
    {
        m_Instance = this;

        //服务器当前时间
        m_CurrentDateTime = GetCurrentTime();
        m_ForTime = 0;
        m_RedInfo.gameObject.SetActive(false);
        GameManager.gameManager.PlayerDataPool.m_IsActivityReward = false;

        ShowActivityRewardList();
        ShowJoinNumInfo();
        ShowDateInfo();
    }

    void OnDisable()
    {
        m_Instance = null;
    }

	// Use this for initializations
	void Start ()
	{

	}

    /// <summary>
    /// 获取当前时间- 服务器
    /// </summary>
    /// <returns></returns>
    private DateTime GetCurrentTime()
    {
        //服务器当前时间
        //DateTime startTime = new DateTime(1970, 1, 1);
        //DateTime NowData = new DateTime(startTime.Ticks + (long)GlobalData.ServerAnsiTime * 10000000L, DateTimeKind.Unspecified);

        return Utils.GetServerDateTime().ToLocalTime();
    }

    public void OnRewardRoot()
    {
        UIManager.CloseUI(UIInfo.FestivalController);
        UIManager.ShowUI(UIInfo.AwardRoot);
    }

    /// <summary>
    /// 服务器当前时间
    /// </summary>
    public DateTime CurrentDateTime
    {
        get { return m_CurrentDateTime; }
    }

    /// <summary>
    /// 顽疾领取奖励次数显示
    /// </summary>
    public void SetShowBar()
    {
        float joinNum = GameManager.gameManager.PlayerDataPool.ActivityRewardJoinNum;

        if (joinNum < 0) joinNum = 0;
        if (joinNum > m_AllJoinNum) joinNum = m_AllJoinNum;

        int tagIndex = 0;
        bool isSet = false;

        if (joinNum == 3)
        {
            tagIndex = 0;
            isSet = true;
        }
        else if (joinNum == 8)
        {
            tagIndex = 1;
            isSet = true;
        }
        else if (joinNum == 12)
        {
            tagIndex = 2;
            isSet = true;
        }
        else if (joinNum == 20)
        {
            tagIndex = 3;
            isSet = true;
        }

        if (isSet && tagIndex < m_TagArray.Length)
        {
            m_CommonBarGreenSprite.fillAmount = m_TagArray[tagIndex];
        }
        else
        {
            m_CommonBarGreenSprite.fillAmount = (float)(joinNum / m_AllJoinNum);
        }
    }

    private void ShowDateInfo()
    {
        //参加次数领取时间
        string strDate = GameManager.gameManager.PlayerDataPool.m_ActivityRewardJoinNumSarteTime.ToString();
        if (strDate.Length > 6)
        {
            if (strDate.Substring(2, 1) == "0")
            {
                m_JoinNumLab.text = StrDictionary.GetClientDictionaryString("#{5093}",
                strDate.Substring(3, 1), strDate.Substring(4, 2));
            }
            else
            {
                m_JoinNumLab.text = StrDictionary.GetClientDictionaryString("#{5093}",
                strDate.Substring(2, 2), strDate.Substring(4, 2));
            }
        }

        //活动时间
        strDate = GameManager.gameManager.PlayerDataPool.m_ActivityRewardSrateTime.ToString();
        string strEndDate = GameManager.gameManager.PlayerDataPool.m_ActivityRewardEndTime.ToString();
        if (strDate.Length > 6 && strEndDate.Length > 6)
        {
            string strYear = "20" + strDate.Substring(0, 2);
            m_ActivityRewardLab.text = StrDictionary.GetClientDictionaryString("#{5095}", 
                strYear, strDate.Substring(2, 2), strDate.Substring(4, 2),
                strYear, strEndDate.Substring(2, 2), strEndDate.Substring(4, 2));
        }
    }

    private void ShowJoinNumInfo()
    {
        Dictionary<int, JoinNumRewardData> joinList = GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable;
        SpringArrowItem springArrow;
        for (int i = 0; i < joinList.Count; i++)
        {
            if (joinList.ContainsKey(i + 1))
            {
                if (i < m_ArrowList.Length)
                {
                    springArrow = m_ArrowList[i].gameObject.GetComponent<SpringArrowItem>();
                    if (springArrow != null)
                    {
                        springArrow.SetRewardInfo(joinList[i+1]);
                    }
                }
            }
        }
    }

    /// <summary>
    /// 显示奖励列表信息
    /// </summary>
    private void ShowActivityRewardList()
    {
        if (ActivityRewardItem == null)
        {
            //Item Prefab 错误问题
            return;
        }
        if (m_ItemList == null)
        {
            m_ItemList = new Dictionary<int, GameObject>();
        }

        Dictionary<int, ActivityRewardData> rewardList = GameManager.gameManager.PlayerDataPool.OnActivityRewardTable;
        if (rewardList == null) return;

        int showLowNum = 6;
        for (int i = 0; i < rewardList.Count; i++)
        {
            int tagX = i % showLowNum;
            tagX *= 95;
            int tagY = i / showLowNum;
            tagY *= 100;

            if (rewardList.ContainsKey(i + 1))
            {
                ShowActivityReward(rewardList[i + 1], tagX, tagY);
            }
        }

        SetShowBar();
    }

    /// <summary>
    /// 显示物品信息
    /// </summary>
    /// <param name="reward"></param>
    /// <param name="posX"></param>
    /// <param name="posY"></param>
    private void ShowActivityReward(ActivityRewardData reward, int posX, int posY)
    {
        if (m_ItemList.ContainsKey(reward.Index)) return;

        //设置位置
        GameObject curItem = Utils.BindObjToParent(ActivityRewardItem, ShowListGrid);

        if (curItem == null) return;

        curItem.name = "Item" + reward.Index;
        curItem.transform.localPosition = new Vector3(posX, posY, 0);

        m_ItemList.Add(reward.Index, curItem);

        //对应的显示物品详细信息
        SpringRewardItem rewardItem = curItem.GetComponent<SpringRewardItem>();
        if (rewardItem != null)
        {
            rewardItem.SetRewardInfo(reward);

            //根据当时时间 进行对不，看有选中状态的物品没
            DateTime rewarDateTime = rewardItem.CurDateTime;
            TimeSpan timeSpan = CurrentDateTime.Subtract(rewardItem.CurDateTime);
            if (timeSpan.Days == 0)
            {
                if (CurrentDateTime.ToString("yyyy-MM-dd") == rewarDateTime.ToString("yyyy-MM-dd")
                  && reward.State == AcitivityRewardState.RECEIVE)
                {
                    rewardItem.IsChoose = true;
                    CurrentReceiveIndex = reward.Index;
                    GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex = reward.Index;
                    GameManager.gameManager.PlayerDataPool.m_IsActivityReward = true;

                    if (FestivalController.Instance() != null)
                    {
                        FestivalController.Instance().UpdateBaiNianTip();
                    }
                }
            }
        }
    }

    /// <summary>
    /// 请求获取物品
    /// </summary>
    public void OnReceiveClick()
    {
        if (GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex <= 0)
        {
            //
            GUIData.AddNotifyData("#{5137}");
            return;
        }

        int curIndex = GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex;
        if (!GameManager.gameManager.PlayerDataPool.OnActivityRewardTable.ContainsKey(curIndex)) return;
        ActivityRewardData rewardData = GameManager.gameManager.PlayerDataPool.OnActivityRewardTable[curIndex];

        //获取当前物品状态
        if(rewardData.State == AcitivityRewardState.EXPIRED) //已过期状态
        {
            string fortip = StrDictionary.GetClientDictionaryString("#{4703}", rewardData.BindYuanbao);
            MessageBoxLogic.OpenOKCancelBox(fortip, "", SendRewardClick, null);
        }
        else if (rewardData.State == AcitivityRewardState.RECEIVE)
        {
            CG_RECEIVE_ACTIVITYREWARD msg = (CG_RECEIVE_ACTIVITYREWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_RECEIVE_ACTIVITYREWARD);
            msg.SetRewardIndex(curIndex);
            msg.SetIsreplacement(0);
            msg.SendPacket();
        }
    }

    public void OnJoinNumReceiveResult(int index, int reusltTag)
    {
        if (reusltTag != 1) return;

        //修改本地数据
        if (GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable.ContainsKey(index))
        {
            JoinNumRewardData rewardData = GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable[index];
            rewardData.State = JoinNumRewardState.NORECEIVE;
            GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable[index] = rewardData;

            int tag = index - 1;
            if (tag < m_ArrowList.Length && tag >= 0)
            {
                SpringArrowItem springArrow = m_ArrowList[tag].gameObject.GetComponent<SpringArrowItem>();
                if (springArrow != null)
                {
                    springArrow.SetRewardInfo(GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable[index]);
                }
            }
        }
    }

    /// <summary>
    /// 请求获取奖励物品返回值
    /// </summary>
    /// <param name="index"></param>
    /// <param name="resultTag"></param>
    public void OnReceiveResult(int index, int resultTag)
    {
        if (resultTag == 1)
        {
            //同时修改客户端本地数据
            GameManager.gameManager.PlayerDataPool.ActivityRewardJoinNum++;
            SetShowBar(); //修改参与进度

            SetJoinNumState();//参加次数状态显示

            if (GameManager.gameManager.PlayerDataPool.OnActivityRewardTable.ContainsKey(index))
            {
                ActivityRewardData rewardData = GameManager.gameManager.PlayerDataPool.OnActivityRewardTable[index];
                rewardData.State = AcitivityRewardState.NORECEIVE;
                GameManager.gameManager.PlayerDataPool.OnActivityRewardTable[index] = rewardData;
            }

            //将状态设置成 已领取状态
            if (m_ItemList != null && m_ItemList.ContainsKey(index))
            {
                GameObject curObject = m_ItemList[index];
                if (curObject == null) return;

                SpringRewardItem rewardItem = curObject.GetComponent<SpringRewardItem>();
                if (rewardItem != null)
                {
                    rewardItem.m_RewardData.State = AcitivityRewardState.NORECEIVE;
                    rewardItem.SetShowState(rewardItem.m_RewardData.State);
                    rewardItem.IsChoose = false;
                }
            }

            GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex = -1;
            if (CurrentReceiveIndex == index)
            {
                CurrentReceiveIndex = -1;
                GameManager.gameManager.PlayerDataPool.m_IsActivityReward = false;

                if (FestivalController.Instance() != null)
                {
                    FestivalController.Instance().UpdateBaiNianTip();
                }
            }
        }
    }

    private void IsShowRedInfo()
    {
        if (GameManager.gameManager.PlayerDataPool.AwardActivityData.NewOnlineAwardID > -1
            && GameManager.gameManager.PlayerDataPool.AwardActivityData.NewLeftTime <= 0
            && GameManager.gameManager.PlayerDataPool.AwardActivityData.NewOnlineAwardStart
            && !GameManager.gameManager.PlayerDataPool.m_IsOpenBaiNian)
        {
            m_RedInfo.gameObject.SetActive(true);
            GameManager.gameManager.PlayerDataPool.m_IsOpenBaiNian = true;
        }
    }

    void Update()
    {
        IsShowRedInfo();

        if (Time.time - m_ForTime < m_UpdateNum) return;

        UpdatePerMinute();
        m_ForTime = Time.time;
    }

    //开始每分钟一次循环
    void UpdatePerMinute()
    {
        m_UpdateNum = 30;
        //判断日期是否发生改变
        DateTime curentTime = GetCurrentTime();
        if (curentTime.Hour != 0 && curentTime.Minute != 0) return;
        m_UpdateNum = 1;

        if (CurrentDateTime.ToString("yyyy-MM-dd") != curentTime.ToString("yyyy-MM-dd"))
        {
            //进行客户端状态修改

            //取消对应的状态
            if (CurrentReceiveIndex > 0)
            {
                SetRewardState(CurrentReceiveIndex, AcitivityRewardState.EXPIRED);
            }

            //获取对应的天数 index
            DateTime oldTime = Convert.ToDateTime(GameManager.gameManager.PlayerDataPool.ActivityRewardBeginTime);
            TimeSpan timeSpan = curentTime.Subtract(oldTime);
            int newIndex = timeSpan.Days + 1;
            SetRewardState(newIndex, AcitivityRewardState.RECEIVE);
            CurrentReceiveIndex = newIndex;
            GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex = CurrentReceiveIndex;
            GameManager.gameManager.PlayerDataPool.m_IsActivityReward = true;
            m_CurrentDateTime = curentTime;

            if (FestivalController.Instance() != null)
            {
                FestivalController.Instance().UpdateBaiNianTip();
            }
        }
    }

    private void SetRewardState(int index, AcitivityRewardState tagData)
    {
        if (GameManager.gameManager.PlayerDataPool.OnActivityRewardTable.ContainsKey(index))
        {
            ActivityRewardData rewardData = GameManager.gameManager.PlayerDataPool.OnActivityRewardTable[index];
            rewardData.State = AcitivityRewardState.RECEIVE;
            GameManager.gameManager.PlayerDataPool.OnActivityRewardTable[index] = rewardData;
        }

        if (m_ItemList.ContainsKey(index))
        {
            if (m_ItemList[index])
            {
                //对应的显示物品详细信息
                SpringRewardItem rewardItem = m_ItemList[index].GetComponent<SpringRewardItem>();
                if (rewardItem != null)
                {
                    rewardItem.SetShowState(tagData);

                    if (tagData == AcitivityRewardState.RECEIVE)
                    {
                        rewardItem.IsChoose = true;
                    }
                    else
                    {
                        rewardItem.IsChoose = false;
                    }
                }
            }
        }
    }

    
    public void SetSelectedState(int rewardIndex)
    {
        if (rewardIndex <= 0) return;

        //设置为选中状态
        SetRewardItemChooseState(rewardIndex, true);

        //取消原有的选中状态
        if (GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex > 0)
        {
            SetRewardItemChooseState(GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex, false);
        }

        //更改选中索引
        GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex = rewardIndex;
        //设置 按钮文本显示
        if (GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex == CurrentReceiveIndex)
        {
            m_ButtonInfo.text = StrDictionary.GetClientDictionaryString("#{5096}");
        }
        else
        {
            m_ButtonInfo.text = StrDictionary.GetClientDictionaryString("#{5228}");
        }
    }

    private void SetRewardItemChooseState(int index, bool isChoose)
    {
        if (m_ItemList == null || !m_ItemList.ContainsKey(index)) 
			return;

        SpringRewardItem rewardItem;

        //设置为选中状态
        if (m_ItemList[index] == null) return;
        //对应的显示物品详细信息
        rewardItem = m_ItemList[index].GetComponent<SpringRewardItem>();
        if (rewardItem == null) return;

        rewardItem.IsChoose = isChoose;
        rewardItem = null;
    }

    /// <summary>
    /// 发送元宝领取
    /// </summary>
    public void SendRewardClick()
    {
        int curIndex = GameManager.gameManager.PlayerDataPool.m_ActivityRewardIndex;
        if (!GameManager.gameManager.PlayerDataPool.OnActivityRewardTable.ContainsKey(curIndex)) return;
        ActivityRewardData rewardData = GameManager.gameManager.PlayerDataPool.OnActivityRewardTable[curIndex];

        // 弹出提示元宝足或不足
        int nYuanBaoCount = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao() + GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
        if (nYuanBaoCount < rewardData.BindYuanbao)
        {
            // 钱不够，弹，充值
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1848}"), "", DoPay, null);
        }
        else
        {
            //发送消息给服务器要求不领
            CG_RECEIVE_ACTIVITYREWARD msg = (CG_RECEIVE_ACTIVITYREWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_RECEIVE_ACTIVITYREWARD);
            msg.SetRewardIndex(rewardData.Index);
            msg.SetIsreplacement(1);
            msg.SendPacket();
        }
    }

    void DoPay()
    {
        RechargeData.PayUI();
    }

    /// <summary>
    /// 设置参加次数物品状态
    /// </summary>
    public void SetJoinNumState()
    {
        if (GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable == null) return;

        int tagNum = GameManager.gameManager.PlayerDataPool.ActivityRewardJoinNum;
        Dictionary<int, JoinNumRewardData> rewardDatas = GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable;

        JoinNumRewardData data;
        foreach (KeyValuePair<int, JoinNumRewardData> rewardData in rewardDatas)
        {
            data = rewardData.Value;
            if (data.Number == tagNum && data.State == JoinNumRewardState.INVALLD)
            {
                data.State = JoinNumRewardState.RECEIVE;

                if (GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable.ContainsKey(rewardData.Key))
                {
                    GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable[rewardData.Key] = data;
                }

                int tagIndex = data.Index - 1;
                if (tagIndex >= 0 && tagIndex < m_ArrowList.Length)
                {
                    SpringArrowItem springArrow = m_ArrowList[tagIndex].gameObject.GetComponent<SpringArrowItem>();
                    if (springArrow != null)
                    {
                        springArrow.SetRewardInfo(data);
                        springArrow = null;
                    }
                }

                break;
            }
        }
    }
}

public enum AcitivityRewardState
{
    INVALLD = 0, //不可领取
    RECEIVE = 1,// 可领取
    NORECEIVE = 2, //已领取
    EXPIRED = 3, //已过期
    REPLACEMENT = 4, //过期， 补领
}

public enum JoinNumRewardState
{
    INVALLD = 0, //不可领取
    RECEIVE = 1,// 可领取
    NORECEIVE = 2, //已领取
}
