using UnityEngine;
using System.Collections;
using GCGame.Table;
using Module.Log;
using System.Collections.Generic;
using Games.LogicObj;

public class RechargeController : UIControllerBase<RechargeController> {

    public GameObject m_ObjRechargeItem;
    public Transform m_TransRechargeGrid;

    public UILabel m_LabelYuanbao;
    public UILabel m_LabelBindYuanbao;

    public UILabel m_LabelYBPrizeRate;
    public UILabel m_Levelnew;
    public UISprite m_Progress;
    public UILabel m_BonusText;
    public UILabel m_ProgressText;

    private float m_lastPayTime = 0;
    void Awake()
    {
        SetInstance(this);
    }
	// Use this for initialization
	void Start () {
        UpdateMoney();
        UpdateYBPrizeRate();
        if (RechargeData.m_dicGoodInfos.Count == 0)
        {
            PlatformHelper.ReqPaymentGoodInfoList();
        }
        else
        {
            UpdateRechargeList();
        }

        GUIData.delMoneyChanged += UpdateMoney;

#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.RECHARGE_UI);
#endif
        
	}
	
	// Update is called once per frame
	void OnDestroy ()
    {
        GUIData.delMoneyChanged -= UpdateMoney;
        SetInstance(null);
	}

    void OnCancelClick()
    {
        UIManager.CloseUI(UIInfo.Recharge);
    }

    void OnRechargeRecord()
    {
        PlatformHelper.ShowRechargeRecord();
    }

    void OnRechargeError()
    {
        PlatformListener.SendCYPay(2);
    }

    public void UpdateMoney()
    {
        m_LabelYuanbao.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao().ToString();
        m_LabelBindYuanbao.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind().ToString();
        UpdateVipInfo();
    }

    public void UpdateYBPrizeRate()
    {
        if (GameManager.gameManager.PlayerDataPool != null)
        {
            float nRate = GameManager.gameManager.PlayerDataPool.PayActivity.GetYBPrizeRate();
            if (nRate > 0)
            {
                m_LabelYBPrizeRate.text = StrDictionary.GetClientDictionaryString("#{3061}", nRate.ToString());
            }
            else
            {
                m_LabelYBPrizeRate.text = StrDictionary.GetClientDictionaryString("#{4591}");
            }
        }
    }

    public void UpdateRechargeList()
    {
        GCGame.Utils.CleanGrid(m_TransRechargeGrid.gameObject);

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPlayer)
        {
            LogModule.ErrorLog("main player is not init");
            return;
        }

        for (int i = 0; i < TableManager.GetRecharge().Count; i++)
        {
            Tab_Recharge curTabRecharge = TableManager.GetRechargeByID(i, 0);
            if (null == curTabRecharge)
            {
                continue;
            }

            if (!RechargeData.m_dicGoodInfos.ContainsKey(curTabRecharge.RegisterID))
            {
                continue;
            }

            RechargeData.GoodInfo curGoodInfo = RechargeData.m_dicGoodInfos[curTabRecharge.RegisterID];

            string iconName = "";
            string goodName = curGoodInfo.goods_number + "#y";
            bool bEnableTimes = false;
            PayActivityData payData = GameManager.gameManager.PlayerDataPool.PayActivity;
            if (curTabRecharge.Type == 1 && payData.IsMonthCardFlag())
            {
                // 月卡并且已经生效
                // TT9809 月卡也显示
                //continue;
            }
            if (curTabRecharge.Type == 2 && (payData.IsGrowUpFlag() || mainPlayer.BaseAttr.Level >= payData.GrowUpLevel))
            {
                // 成长基金并且已经生效或者玩家已经大于50级
                continue;
            }
            else if (curTabRecharge.Type == 3)
            {
                bEnableTimes = true;
            }
            iconName = curTabRecharge.IconName;
            goodName = curTabRecharge.GoodName;

            RechargeItem.CreateItem(m_ObjRechargeItem, m_TransRechargeGrid, curGoodInfo.goods_register_id, iconName, curGoodInfo.goods_price, goodName, curTabRecharge.HotLabelTip, bEnableTimes);
        }

        UIGrid curGrid = m_TransRechargeGrid.GetComponent<UIGrid>();

        if (null != curGrid)
        {
            curGrid.repositionNow = true;
        }
    }

    public void OnMakePay(string id, int times)
    {
        float timeDiff = Time.time - m_lastPayTime;
        if (timeDiff < 3)
        {
            Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
            if (null != mainPlayer)
            {
                mainPlayer.SendNoticMsg(false, "#{1076}");
            }
            return;
        }

        m_lastPayTime = Time.time;

        RechargeData.GoodInfo curGoodInfo = RechargeData.GetGoodInfo(id);
        if (null == curGoodInfo)
        {
            LogModule.ErrorLog(" can not find cur good info:" + id.ToString());
            return;
        }

        // 遍历充值表，判断是否为月卡
        for (int i = 0; i < TableManager.GetRecharge().Count; i++)
        {
            Tab_Recharge curTabRecharge = TableManager.GetRechargeByID(i, 0);
            if (null == curTabRecharge)
            {
                continue;
            }

            if (curTabRecharge.RegisterID == id)
            {
                if(curTabRecharge.Type == 1 &&
                   GameManager.gameManager.PlayerDataPool.PayActivity.IsMonthCardFlag())
                {
                    // 如果是月卡并且正在生效，提示不能购买
                    MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{4636}", 
                        GameManager.gameManager.PlayerDataPool.PayActivity.GetMonthCardLeftDay()));
                    return;
                }
                else
                {
                    break;
                }
                
            }
        }

        if (times > 1)
        {
            curGoodInfo = curGoodInfo.GetGoodInfoWithTimes(times);
        }

        if (null == curGoodInfo)
        {
            LogModule.ErrorLog("pay stop:good info error");
            return;
        }

        PlatformHelper.MakePayWithGoodInfo(curGoodInfo);
    }

    Tab_Recharge GetRechargeData(string registerID)
    {
        foreach(KeyValuePair<int, List<Tab_Recharge>> curPair in TableManager.GetRecharge())
        {
            if(curPair.Value[0].RegisterID == registerID)
            {
                return curPair.Value[0];
            }
        }

        return null;
    }

    void OnVipClick()
    {
        Obj_MainPlayer obj = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (obj != null)
        {
            if (obj.VipCost >= 0 && GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP))
            {
                UIManager.ShowUI(UIInfo.VipRoot);
            }
        }
    }

    void UpdateVipInfo()
    {
        int nCost = 0;
        Obj_MainPlayer obj = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (obj != null)
        {
            nCost = obj.VipCost;
        }
        if (nCost >= 0)
        {
            int nLevel = 0; //当前的vip等级
            int nLeft = 0; //消耗的元宝在结算成vip等级后还剩下多少
            int nMax = 0;
            VipData.GetVipLevel(nCost, ref nLevel, ref nLeft);
            m_Levelnew.text = nLevel + "";
            if (nLevel >= VipData.m_MaxShowLevel)
            {
                nMax = GetMaxCostByLevel(nLevel);
                nLeft = nMax;
            }
            else
            {
                nMax = GetMaxCostByLevel(nLevel + 1);
            }


            if (nMax >= 0)
            {
                float nPercent = (float)nLeft / nMax;
                //进度条
                m_Progress.width =  (int)(4 + nPercent*110);
                //进度条数字
                m_BonusText.text = nLeft*10 + "/" + nMax*10;
                //进度条提示
                if (nLevel < VipData.m_MaxShowLevel)
                {
                    m_ProgressText.text = StrDictionary.GetClientDictionaryString("#{11535}", (nMax - nLeft)*10,"\n", nLevel + 1);
                }
                else
                {
                    m_ProgressText.text = "";
                }
            }
           
        }

    }

    int GetMaxCostByLevel(int nLevel)
    {
        Tab_VipBook tBook = TableManager.GetVipBookByID(nLevel, 0);
        if (tBook != null)
        {
            return tBook.VipCost;
        }
        return 99999999;
    }
}
