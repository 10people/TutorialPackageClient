using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.AwardActivity;
using Games.UserCommonData;
using GCGame.Table;
using Module.Log;

public class DaySignAwardLogic : MonoBehaviour, IChooseItem
{
    public Object ItemObj;
    public List<RewardAwardItem> m_AwardItem = new List<RewardAwardItem>();
    public UIGrid m_grid;
    //public RewardAwardItem[] m_AwardItem;

	//public UILabel ButtonRewardTipsDetail;

	public UIImageButton ButtonGetAward;

	public UILabel DrawOrSupplyButton;            // 如果今日未签到则先显示领取，如果今日领取过了，并且还有可以补领的，则显示补领

	//public UIImageButton ButtonReadDetial;

	public UILabel CurMounthIndex;

    public GameObject m_HelpInfo;

	//public UILabel AllSignedCountsMounth;

	//public UISprite RewardDescribe;

	//public UILabel RewardDescribeLb;

	//private RewardAwardItem m_pointedItem;

	private Dictionary<int, DaySignInItem> DataSignInInfoList = new Dictionary<int, DaySignInItem>();

	private int m_currentSelectedIndex = 0;
	
	private DaySignInItem currentSelectedItem;

    //底部累计奖励的箱子部分
    public MonthRewardItem[] m_MonthItemAry;//累计奖励箱子数组
    public UISlider m_MonthSlider;//累计奖励的进度条
    private int m_nAlreadySignedCount = -1;//累计签到的天数
    private int m_CurMonthBoxIndex = -1;//当前点击的箱子序号
    private bool m_bMonthBoxMessageBlocked = false;//请求打开箱子的阻塞状态
    public int NAlreadySignedCount
    {
        get { return m_nAlreadySignedCount; }
        set 
        { 
            m_nAlreadySignedCount = value;
            UpdateMonthSlider();
        }
    }
	public void   Awake()
	{
		InitAllItems ();
	}
    void Start()
    {
        AwardLogic.Instance().m_AccSignPopUpBox.UpdateBackGroundSignCount();
    }
	public void InitAllItems()
	{
        m_AwardItem.Clear();
        int begin = m_grid.transform.childCount;
        int end = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList.Count;
        if (ItemObj != null && m_grid != null)
        {
            for (int m = begin; m < end; ++m)
            {
                GameObject go = GameObject.Instantiate(ItemObj) as GameObject;
                if (go != null)
                {
                    go.transform.parent = m_grid.transform;
                    go.transform.localScale = Vector3.one;
                }
            }
            m_grid.repositionNow = true;
        }
        for (int i = 0; i < m_grid.transform.childCount; i++)
        {
            Transform t = m_grid.transform.GetChild(i);
            if (t != null)
            {
                if (t.GetComponent<RewardAwardItem>() != null)
                {
                    m_AwardItem.Add(t.GetComponent<RewardAwardItem>());
                    t.name = i.ToString();
                    t.gameObject.SetActive(false);
                }
            }
        }
        PlayerData.DaySignInInfoData DataSignInInfo = GameManager.gameManager.PlayerDataPool.DaySignInfo;

		DataSignInInfoList = DataSignInInfo.m_DaySignInfoList;
        NAlreadySignedCount = DataSignInInfo.m_nAlreadSignedCount;
        //UpdateMonthSlider();
//        int curDay = DataSignInInfo.m_nowDayIndex;

		if(DataSignInInfoList.Count == 0)
		{
			return;
		}

		//ButtonRewardTipsDetail.text = StrDictionary.GetClientDictionaryString ("#{4639}");

		CurMounthIndex.text = StrDictionary.GetClientDictionaryString("#{4640}",GameManager.gameManager.PlayerDataPool.CurMounthId);

//		int totalCounts = GameManager.gameManager.PlayerDataPool.GetTotalSignedCountThisMounth ();

		//AllSignedCountsMounth.text = StrDictionary.GetClientDictionaryString("#{4641}",totalCounts,GameManager.gameManager.PlayerDataPool.NowDayIndex);

//		int itemsCount = DataSignInInfoList.Count;

		DaySignInItem item;

		int count = 0;
		foreach(var itemPair in DataSignInInfoList)
		{
			if(count >= m_AwardItem.Count)
				continue;

			item = itemPair.Value;

			m_AwardItem[count].CleanUp();
			if (item.Exp > 0)
			{
				m_AwardItem[count].AddItem(RewardAwardItem.ItemType.ITEM_EXP, -1, item.Exp,item.ItemIndex,item.ItemStatus,item.vipLimit,this,false);
			}
			
			if (item.Money > 0)
			{
				m_AwardItem[count].AddItem(RewardAwardItem.ItemType.ITEM_MONEY, -1, item.Money,item.ItemIndex,item.ItemStatus,item.vipLimit,this,false);
			}
			
			if (item.BindYuanbao > 0)
			{
				m_AwardItem[count].AddItem(RewardAwardItem.ItemType.ITEM_YUANBAO, -1, item.BindYuanbao,item.ItemIndex,item.ItemStatus,item.vipLimit,this,false);
			}

			// 物品
			int nItem1DataID = item.Item1DataID;
			int nItem1Count = item.Item1Count;
			if (nItem1DataID >= 0 && nItem1Count > 0)
			{
				m_AwardItem[count].AddItem(RewardAwardItem.ItemType.ITEM_ITEM, nItem1DataID, nItem1Count,item.ItemIndex,item.ItemStatus,item.vipLimit,this,false);
			}
			int nItem2DataID = item.Item2DataID;
			int nItem2Count = item.Item2count;
			if (nItem2DataID >= 0 && nItem2Count > 0)
			{
				m_AwardItem[count].AddItem(RewardAwardItem.ItemType.ITEM_ITEM, nItem2DataID, nItem2Count,item.ItemIndex,item.ItemStatus,item.vipLimit,this,false);
			}
            m_AwardItem[count].gameObject.SetActive(true);
			count++;
		}

		// 默认显示服务器给定的可领元素  
		m_currentSelectedIndex = GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex;
		
		if (m_currentSelectedIndex >= 1 && m_currentSelectedIndex <= m_AwardItem.Count) 
		{
			m_AwardItem [m_currentSelectedIndex - 1].SetChooseState (true);
			DaySignInItem Signitem ;
			DataSignInInfoList.TryGetValue(m_currentSelectedIndex,out Signitem);
			currentSelectedItem = Signitem;
        }
        int nowdayindex = GameManager.gameManager.PlayerDataPool.NowDayIndex;
        if (nowdayindex >= 1 && nowdayindex <= m_AwardItem.Count && DataSignInInfoList.ContainsKey(nowdayindex) && DataSignInInfoList[nowdayindex].ItemStatus == (int)DaySignInStates.NOTSIGNEN)
        {
            m_AwardItem[GameManager.gameManager.PlayerDataPool.NowDayIndex - 1].PlayEffect();
        }
		DealWithButtonStates ();
        InitBox();
		//setMonthBelle ();
	}
    #region 
    void InitBox()
    {
        for (int i = 0; i < m_MonthItemAry.Length; i++)
        {
            m_MonthItemAry[i].name = 5 * (i+1) + "";
            m_MonthItemAry[i].OnClickBoxWithIndex = OnClickBoxWithIndex;
            m_MonthItemAry[i].SetIndex(i);
            m_MonthItemAry[i].SetOpen(IsMonthBoxOpen(i));
        }
        RefreshMonthItemState();
    }
    /// <summary>
    /// 判断累计奖励宝箱的状态
    /// </summary>
    /// <param name="boxIndex"></param>
    /// <returns></returns>
    bool IsMonthBoxOpen(int boxIndex)
    {
        bool res = false;
        boxIndex += 1;
        PlayerData.DaySignInInfoData DataSignInInfo = GameManager.gameManager.PlayerDataPool.DaySignInfo;
        if (DataSignInInfo != null && DataSignInInfo.m_AccumateSignDic != null)
        {
            if (DataSignInInfo.m_AccumateSignDic.ContainsKey(boxIndex))
            {
                AccumulateSignInfo info = DataSignInInfo.m_AccumateSignDic[boxIndex];
                if (info.ItemStatus == 0)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
        }
        return res;
    }
    /// <summary>
    /// 根据累计登陆天数判断是否能打开箱子
    /// </summary>
    /// <param name="boxIndex"></param>
    /// <returns></returns>
    bool CanOpenBoxDueToDay(int boxIndex)
    {
        bool res = false;
        int curDay = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_nAlreadSignedCount;
        if (curDay >= (boxIndex+1) * 5)
        {
            res = true;
        }
        return res;
    }
   
    public void OnClickBoxWithIndex(int boxIndex)
    {
        if (!IsMonthBoxOpen(boxIndex) && CanOpenBoxDueToDay(boxIndex))
        {
            if (m_bMonthBoxMessageBlocked)
            {
                return;//阻塞状态返回
            }
            m_CurMonthBoxIndex = boxIndex;
            m_bMonthBoxMessageBlocked = true;
            GameManager.gameManager.PlayerDataPool.AwardActivityData.SendReqOpenMonthBox(boxIndex);
        }
    }

    public void OpenBoxResult(bool result)
    {
        m_bMonthBoxMessageBlocked = false;
        m_MonthItemAry[m_CurMonthBoxIndex].SetOpen(result);
    }

    public void UpdateMonthSlider()
    {
        float desireValue = (float)m_nAlreadySignedCount / 25;
        m_MonthSlider.value = desireValue;
    }
    #endregion

    void DealWithButtonStates()
	{
		if (GameManager.gameManager.PlayerDataPool.DefaultFirstSignIndex == GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex) 
		{
			bool bIsSignedToday = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_SIGNIN_EVERYDAY_FALG);
			if(bIsSignedToday)
			{
				//DrawOrSupplyButton.text = "4722";
                if (ButtonGetAward!=null)
				ButtonGetAward.isEnabled  = true;
			}
			else
			{
				//DrawOrSupplyButton.text = "4642"; 
                if (ButtonGetAward != null)
				ButtonGetAward.isEnabled  = true;
			}
		} 
		else if(GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex <= GameManager.gameManager.PlayerDataPool.NowDayIndex)
		{ 
			//DrawOrSupplyButton.text = "4722";
			if(GameManager.gameManager.PlayerDataPool.IsFirstCanSupply(GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex))
			{
				//IsFirstCanSupply
                if (ButtonGetAward != null)
				ButtonGetAward.isEnabled  = true;
			}
			else
			{
                if (ButtonGetAward != null)
                ButtonGetAward.isEnabled  = false;
			}

		}
		else
		{
			//DrawOrSupplyButton.text = "4642"; 
			// 按钮变灰 disable
            if (ButtonGetAward != null)
			ButtonGetAward.isEnabled  = false;
		}

		if(currentSelectedItem.ItemStatus == (int)DaySignInStates.NORMALSIGNED || currentSelectedItem.ItemStatus == (int)DaySignInStates.INVALID)
		{
            if (ButtonGetAward != null)
            ButtonGetAward.isEnabled = false;
		}

		if(currentSelectedItem.ItemStatus == (int)DaySignInStates.NORMALSIGNED)
		{
			//DrawOrSupplyButton.text = "4642"; 
			// 按钮变灰 disable
            if (ButtonGetAward != null)
			ButtonGetAward.isEnabled  = false;
		}

		if(currentSelectedItem.ItemStatus == (int)DaySignInStates.VIPSIGNEDHALF && GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP))
		{
            if (ButtonGetAward != null)
            ButtonGetAward.isEnabled = true;
		}

	}


	void SureToSupply()
	{
		// 弹出提示元宝足或不足
		int nYuanBaoCount = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao() + GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
		if(nYuanBaoCount < currentSelectedItem.SupplyCost)
		{
            // 临时屏蔽充值
			// 钱不够，弹，充值
			//MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1848}"), "", DoPay, CancelPay);  
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1817}"), "", DoPay, CancelPay);  
		}
		else
		{
			DealWithVipLimit();
		}
	}
	

	void OnClickGetReWard()
	{
		if(GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex > GameManager.gameManager.PlayerDataPool.NowDayIndex)
		{
			return;
		}
		DaySignInItem Signitem;
		DataSignInInfoList.TryGetValue(m_currentSelectedIndex,out Signitem);
		if (m_currentSelectedIndex == GameManager.gameManager.PlayerDataPool.NowDayIndex && Signitem.ItemStatus == (int)DaySignInStates.NORMALSIGNED) 
		{
			return;
		}
		if(Signitem.ItemStatus == (int)DaySignInStates.VIPSIGNEDHALF)
		{
			DealWithVipLimit(false);
			return;
		}
		// 如果是补签，需要提示   4703
        if (GameManager.gameManager.PlayerDataPool.NowDayIndex > GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex)
		{
			// 如果是vip补签
			if(currentSelectedItem.SupplyCost > 0)
			{
				string fortip = StrDictionary.GetClientDictionaryString("#{4703}",currentSelectedItem.SupplyCost);
				MessageBoxLogic.OpenOKCancelBox(fortip, "", SureToSupply, CancelPay); 
			}
			else
			{
				SureToSupply();
			}

		}
		else if(GameManager.gameManager.PlayerDataPool.NowDayIndex == GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex)
		{
			// 如果是vip双倍的奖励，不足者弹出充值提示，不去充值的话，直接领取单倍奖励
			bool bIsSignedToday = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_SIGNIN_EVERYDAY_FALG);
			if(bIsSignedToday)
			{
				// 如果是vip补签
				if(currentSelectedItem.SupplyCost > 0)
				{
					string fortip = StrDictionary.GetClientDictionaryString("#{4703}",currentSelectedItem.SupplyCost);
					MessageBoxLogic.OpenOKCancelBox(fortip, "", SureToSupply, CancelPay); 
				}
				else
				{
					SureToSupply();
				}
			}
			else
			{
				DealWithVipLimit();
			}

		}
		else 
		{
			DealWithVipLimit(true);
		}
	}


	void DoPay()
	{
        //暂时屏蔽付费

        return;        
		//RechargeData.PayUI();
	}

	void CancelPay()
	{

	}


	void DealWithVipLimit(bool isVipSupplyBeforeDays = false)
	{
		if (!isVipSupplyBeforeDays)
		{
			if(currentSelectedItem.vipLimit > 0)
			{
				if(VipData.GetVipLv() >= currentSelectedItem.vipLimit)
				{
					// 弹提示，您的VIP等级满足要求，会获得双倍奖励，然后让签
					MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{4702}"), "", SendGetAwardMessage);  
				}
				else   // vip 等级不满足，不让签
				{
					if(currentSelectedItem.ItemStatus == (int)DaySignInStates.NOTSIGNEN)
					{
						// 弹是否提升vip等级的提示，点确定只领取单倍奖励
						MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{4644}"), "", SendGetAwardMessage);  
					}
					else if(currentSelectedItem.ItemStatus == (int)DaySignInStates.VIPSIGNEDHALF)
					{
                        // 临时屏蔽充值
						//MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{4656}"), "", DoPay, CancelPay);
                        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{4656}"), "", DoPay, CancelPay); 
					}
				}
			}
			else
			{
				SendGetAwardMessage();
			}
		} 
		else 
		{
			// 弹提示，您的vip等级不足,点击充值，可以提升vip等级,点击确定没有奖励
			//4656
            // 临时屏蔽充值
			//MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{4656}"), "", DoPay, CancelPay); 
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1817}"), "", DoPay, CancelPay); 
		}

	}

	void SendGetAwardMessage()
	{
		// 发领奖消息
		int curSelectedIndex = GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex;
		CG_ASK_GETREWARDFORSIGNIN msg = (CG_ASK_GETREWARDFORSIGNIN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_GETREWARDFORSIGNIN);
		msg.SignInIndex = curSelectedIndex;
		msg.SendPacket();
        isNowWaitingforRewardResult = true;
		// 这三个函数应该在服务器回复了领取成功标记之后执行
//		dealWithCurrentItem ();
//		TryMoveToNextDay (m_currentSelectedIndex + 1);
//		RefreshTotalCounts ();
	}

    private bool isNowWaitingforRewardResult = false;
	public void GainRewardSucessfully(bool sucsess)
	{
		// 这三个函数应该在服务器回复了领取成功标记之后执行
        if (sucsess)
        {
            dealWithCurrentItem();
            TryMoveToNextDay(m_currentSelectedIndex + 1);
            RefreshTotalCounts();
        }
        RefreshMonthItemState();
        NAlreadySignedCount = GameManager.gameManager.PlayerDataPool.AlreadySingedCount;
        isNowWaitingforRewardResult = false;
	}

    void RefreshMonthItemState()
    {
        for (int i = 0; i < m_MonthItemAry.Length; i++)
        {
            if (GameManager.gameManager.PlayerDataPool.AlreadySingedCount >= (i + 1) * 5)
            {
                m_MonthItemAry[i].SetCanGet();
            }
        }
    }

	void RefreshTotalCounts()
	{
//		int totalCounts = GameManager.gameManager.PlayerDataPool.GetTotalSignedCountThisMounth ();
		//AllSignedCountsMounth.text = StrDictionary.GetClientDictionaryString("#{4641}",totalCounts,GameManager.gameManager.PlayerDataPool.NowDayIndex);
		// 更新脑壳上的tips
		if(FunctionButtonLogic.Instance() != null)
		{
			FunctionButtonLogic.Instance().UpdateButtonAwardTips();
		}
		if (null != AwardLogic.Instance ()) 
		{
			AwardLogic.Instance ().UpdateTip ();
		}
	}

	void dealWithCurrentItem ()
	{
		DaySignInItem Signitem ;
		DataSignInInfoList.TryGetValue(m_currentSelectedIndex,out Signitem);

		if(Signitem.ItemStatus == (int)DaySignInStates.NORMALSIGNED)
		{
			return;
		}

        int awardItemIndex = m_currentSelectedIndex - 1;
        if (awardItemIndex < 0 || awardItemIndex >= m_AwardItem.Count)
        {
            LogModule.ErrorLog("out of index");
            return;
        }
		if (VipData.GetVipLv () >= Signitem.vipLimit 
            ||!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP)) 
		{
            //m_AwardItem[awardItemIndex].StopEffect();
            m_AwardItem[awardItemIndex].SetSignInItemRewarded(true);
            m_AwardItem[awardItemIndex].ActiveChangeState(DaySignInStates.NORMALSIGNED);
			GameManager.gameManager.PlayerDataPool.SetSignInItemStatus (Signitem.ItemIndex,(int)DaySignInStates.NORMALSIGNED);
            m_AwardItem[awardItemIndex].SetSignInItemHalfVipRewarded(false);
			// 关闭本条目选中状态
            m_AwardItem[awardItemIndex].SetChooseState(false);
		}
		else
		{
            //m_AwardItem[awardItemIndex].StopEffect();
			// 此时不显示已经领取
            m_AwardItem[awardItemIndex].SetSignInItemRewarded(false);
            m_AwardItem[awardItemIndex].ActiveChangeState(DaySignInStates.VIPSIGNEDHALF);
			GameManager.gameManager.PlayerDataPool.SetSignInItemStatus (Signitem.ItemIndex,(int)DaySignInStates.VIPSIGNEDHALF);

            m_AwardItem[awardItemIndex].SetSignInItemHalfVipRewarded(true);
			// 关闭本条目选中状态
            m_AwardItem[awardItemIndex].SetChooseState(false);
		}
        if (m_currentSelectedIndex > -1 && m_currentSelectedIndex < m_AwardItem.Count && GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList.ContainsKey(m_currentSelectedIndex + 1))
        {
            m_AwardItem[m_currentSelectedIndex].ActiveChangeState((DaySignInStates)GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList[m_currentSelectedIndex + 1].ItemStatus);
        }
	}

	// 收到回复消息后
	public void TryMoveToNextDay(int destIndex)
	{
//		if(destIndex > GameManager.gameManager.PlayerDataPool.NowDayIndex)
//		{
//			return;
//		}
		// 签到完之后如果后面有可以补的，光标后移，并且，上一个奖励播放已领取动画
		if (destIndex < 1 || destIndex > m_AwardItem.Count)
			return;
		// 下一个改为选中状态
		// 如果下一个可领或者可以补签，就让其变为选中状态
		if(DataSignInInfoList.ContainsKey (destIndex))
		{
			DaySignInItem Signitem;
			DataSignInInfoList.TryGetValue(destIndex,out Signitem);
			//if(Signitem.ItemStatus == (int)DaySignInStates.NOTSIGNEN || Signitem.ItemStatus == (int)DaySignInStates.VIPSIGNEDHALF)
			{
				m_AwardItem [destIndex - 1].SetChooseState (true);
				currentSelectedItem = Signitem;
				m_currentSelectedIndex = destIndex;
				GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex = m_currentSelectedIndex;
				DealWithButtonStates ();
			}
		}
	}
	
	void OnClickReadDetail()
	{
		// 弹出说明
		//RewardDescribe.gameObject.SetActive (true);

		//RewardDescribeLb.text = StrDictionary.GetClientDictionaryString ("#{4643}");
	}

	void OnClickCloseDetail()
	{
		//RewardDescribe.gameObject.SetActive (false);
	}

	public void ButtonShowSignInAward()
	{
		InitAllItems ();
	}

	public void ChangeChooseItem(int index)
	{
        if (isNowWaitingforRewardResult)
        {
            return;
        }

		if(index < 1)
		{
			return;
		}
		if (index > GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList.Count) 
		{
			return;
		}
		//TryMoveToNextDay (index);
		if(DataSignInInfoList.ContainsKey (index))
		{
			DaySignInItem Signitem ;
			DataSignInInfoList.TryGetValue(index,out Signitem);
			//if(Signitem.ItemStatus == (int)DaySignInStates.VIPSIGNEDHALF || GameManager.gameManager.PlayerDataPool.DefaultFirstSignIndex == Signitem.ItemIndex)
			{
				if(m_currentSelectedIndex >= 1)
				{
					m_AwardItem [m_currentSelectedIndex - 1].SetChooseState (false);
				}
				m_AwardItem [index - 1].SetChooseState (true);
				currentSelectedItem = Signitem;
				m_currentSelectedIndex = index;
				GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex = m_currentSelectedIndex;
				DealWithButtonStates ();
                OnClickGetReWard();
			}
			//else
			//{
				// 是否要弹出不能选择的提示
			//}
		}
	}

	public void ClearCurChooseState()
	{
		if(m_currentSelectedIndex >= 1 && m_currentSelectedIndex <= GameManager.gameManager.PlayerDataPool.DaySignInfo.m_DaySignInfoList.Count)
		{
			m_AwardItem [m_currentSelectedIndex - 1].SetChooseState (false);
		}
	}
    #region UnUsed
    //========================================================\
    /*public UITexture m_BellePic ;
    public UILabel    m_BelleName ;
    public UILabel    m_BelleDesc ;

    public void setMonthBelle()
    {
        int curMouth = System.DateTime.Now.Month;
        Tab_BelleAward belle = TableManager.GetBelleAwardByID(curMouth,0);
        if (belle == null)
            return;
	
        string path = belle.Pic;
        m_BellePic.mainTexture = ResourceManager.LoadResource("Texture/MissionRole/" + path, typeof(Texture)) as Texture;
			
        string name  = belle.Name;
        m_BelleName.text = name;

        string desc  = belle.Desc;
        m_BelleDesc.text = desc;
    }*/
    #endregion
    public void onCloseDes()
	{
		//RewardDescribe.gameObject.SetActive (false);
	}
    public DaySignInItem GetDaySignInItemWithIndex(int index)
    {
        DaySignInItem Signitem;
        DataSignInInfoList.TryGetValue(index, out Signitem);
        return Signitem;
    }

    public void OnInfoButton()
    {
        if (!m_HelpInfo.activeSelf)
        {
            m_HelpInfo.SetActive(true);
        }
        else
        {
            m_HelpInfo.SetActive(false);
        }
    }

}
public interface IChooseItem
{
    void ChangeChooseItem(int index);
}