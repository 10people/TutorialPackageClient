using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Games.Item;

public enum ActivityRewardType { None = -1, Level, Fight, Cost, TimeLimit };
public class ActivityRewardsController : UIControllerBase<ActivityRewardsController>
{
    private enum BackState { Normal = 0, Light, Gray };
    void Awake()
    {
        SetInstance(this);
        Dictionary<int, List<Tab_LevelAwardPacket>> allDataDic = TableManager.GetLevelAwardPacket();
        if (allDataDic != null)
        {
            int levelindex = 0;
            int fightindex = 0;
            int costindex = 0;
            foreach (KeyValuePair<int, List<Tab_LevelAwardPacket>> pair in allDataDic)
            {
                if (pair.Value != null && pair.Value.Count > 0)
                {
                    if (pair.Value[0] != null)
                    {
                        switch (pair.Value[0].Type)
                        {
                            case 0:
                                levelData.Add(new Tab_LevelAwardSimulate(pair.Value[0], levelindex++));
                                break;
                            case 1:
                                fightData.Add(new Tab_LevelAwardSimulate(pair.Value[0], fightindex++));
                                break;
                            case 2:
                                //costData.Add(pair.Value[0]);
                                costData = GameManager.gameManager.PlayerDataPool.CostRebate.CostRebateDataList;
                                break; ;
                            case 3:
                                timeLimitData.Add(new Tab_LevelAwardSimulate(pair.Value[0], costindex++));
                                break;
                            default:
                                Module.Log.LogModule.ErrorLog("ActivityRewardItem table type error");
                                break;
                        }
                    }
                }
            }
        }
        UIManager.LoadItem(UIInfo.ActivityRewardItem, LoadSingleItemOver);
    }
    // Use this for initialization
    void Start()
    {
        if (XiaofeiXianshiWindow == null
          || XianshiWindow == null
          || XiaofeiWindow == null
          || DengjiZhanliWindow == null
          || DengjiWindow == null
          || ZhanliWindow == null)
        {
            Module.Log.LogModule.ErrorLog("ActivityRewardItem preset error");
        }
        RefreshCostRebate();
    }

    // Update is called once per frame
    void Update()
    {
        timecount += Time.deltaTime;
        if (timecount > 1f)
        {
            timecount = 0f;
            int nowyuanbao = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
            if (nowyuanbao != lastyuanbao && nowlabel != null)
            {
                lastyuanbao = nowyuanbao;
                nowlabel.text = nowyuanbao.ToString();
            }
        }
    }
    public void CloseUI()
    {
        UIManager.CloseUI(UIInfo.HuoDongJiangLi);
    }
    public void ButtonClickCost()//xiaofei
    {
        if (nowtype == ActivityRewardType.Cost) return;
        nowtype = ActivityRewardType.Cost;
        nowlabel = yuanbaoLabel0;
        if (SelectSprite != null)
        {
            SelectSprite.spriteName = UnSelectName;
        }
        SelectSprite = ButtonUISprite[(int)ActivityRewardType.Cost];
        if (SelectSprite != null)
        {
            SelectSprite.spriteName = SelectName;
        }
        lastyuanbao = int.MaxValue;
        NGUITools.SetActive(XiaofeiXianshiWindow, true);
        NGUITools.SetActive(XiaofeiWindow, true);
        NGUITools.SetActive(XianshiWindow, false);
        NGUITools.SetActive(DengjiZhanliWindow, false);
        CostRebateData crd = GameManager.gameManager.PlayerDataPool.CostRebate;
        if (CostTimeLimitLabel != null)
        {
            CostTimeLimitLabel.text = crd.GetCostDescString();/*StrDictionary.GetClientDictionaryString("#{11252}", 1, 2, 3, 4, 5, 6);*/
        }
        if (CostTimeLimitDecLabel != null)
        {
            CostTimeLimitDecLabel.text = crd.GetStartEndTineString();
        }
//        int num = costData.Count;
        Transform tf = XiaofeiWindow.transform.Find("TabWindow/Grid");
        if (tf != null)
        {
            AdjustmentAllItem(costData, tf);
        }
    }
    public void ButtonClickTimeLimit()//xianshi
    {
        if (nowtype == ActivityRewardType.TimeLimit) return;
        nowtype = ActivityRewardType.TimeLimit;
        nowlabel = yuanbaoLabel0;
        if (SelectSprite != null)
        {
            SelectSprite.spriteName = UnSelectName;
        }
        SelectSprite = ButtonUISprite[(int)ActivityRewardType.TimeLimit];
        if (SelectSprite != null)
        {
            SelectSprite.spriteName = SelectName;
        }
        lastyuanbao = int.MaxValue;
        NGUITools.SetActive(XiaofeiXianshiWindow, true);
        NGUITools.SetActive(XianshiWindow, true);
        NGUITools.SetActive(XiaofeiWindow, false);
        NGUITools.SetActive(DengjiZhanliWindow, false);
//        int num = timeLimitData.Count;
        Transform tf = XianshiWindow.transform.Find("TabWindow/Grid");
        if (tf != null)
        {
            AdjustmentAllItem(timeLimitData, tf);
        }
    }
    public void ButtonClickLevel()//dengji
    {
        if (nowtype == ActivityRewardType.Level) return;
        nowtype = ActivityRewardType.Level;
        nowlabel = yuanbaoLabel1;
        if (SelectSprite != null)
        {
            SelectSprite.spriteName = UnSelectName;
        }
        SelectSprite = ButtonUISprite[(int)ActivityRewardType.Level];
        if (SelectSprite != null)
        {
            SelectSprite.spriteName = SelectName;
        }
        lastyuanbao = int.MaxValue;
        NGUITools.SetActive(DengjiZhanliWindow, true);
        NGUITools.SetActive(DengjiWindow, true);
        NGUITools.SetActive(ZhanliWindow, false);
        NGUITools.SetActive(XiaofeiXianshiWindow, false);
        if (LevelFightLabel != null)
        {
            LevelFightLabel.text = StrDictionary.GetClientDictionaryString("#{11246}");
        }
//        int num = levelData.Count;
        Transform tf = DengjiWindow.transform.Find("Label1");
        if (tf != null)
        {
            UILabel ul = tf.GetComponent<UILabel>();
            if (ul != null)
            {
                ul.text = StrDictionary.GetClientDictionaryString("#{" + ul.curDicID + "}",
                Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level);
            }
        }
        tf = DengjiWindow.transform.Find("TabWindow/Grid");
        if (tf != null)
        {
            AdjustmentAllItem(levelData, tf);
        }
    }
    public void ButtonClickFight()//zhanli
    {
        if (nowtype == ActivityRewardType.Fight) return;
        nowtype = ActivityRewardType.Fight;
        nowlabel = yuanbaoLabel1;
        if (SelectSprite != null)
        {
            SelectSprite.spriteName = UnSelectName;
        }
        SelectSprite = ButtonUISprite[(int)ActivityRewardType.Fight];
        if (SelectSprite != null)
        {
            SelectSprite.spriteName = SelectName;
        }
        lastyuanbao = int.MaxValue;
        NGUITools.SetActive(DengjiZhanliWindow, true);
        NGUITools.SetActive(ZhanliWindow, true);
        NGUITools.SetActive(DengjiWindow, false);
        NGUITools.SetActive(XiaofeiXianshiWindow, false);
        if (LevelFightLabel != null)
        {
            LevelFightLabel.text = StrDictionary.GetClientDictionaryString("#{11249}");
        }
//        int num = fightData.Count;
        Transform tf = ZhanliWindow.transform.Find("Label1");
        if (tf != null)
        {
            UILabel ul = tf.GetComponent<UILabel>();
            if (ul != null)
            {
                ul.text = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.CombatValue.ToString();
            }
        }
        tf = ZhanliWindow.transform.Find("TabWindow/Grid");
        if (tf != null)
        {
            AdjustmentAllItem(fightData, tf);
        }
    }
    //Just Load Once
    private void LoadSingleItemOver(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            Module.Log.LogModule.ErrorLog("load ActivityRewardItem error");
            return;
        }
        ItemPerObj = resItem;
        ButtonClickLevel();
    }
    private void AdjustmentAllItem(List<Tab_LevelAwardSimulate> celllist, Transform par)
    {
        if (par != null && celllist != null && GameManager.gameManager.ActivityRewardGetDic != null)
        {
            int num = celllist.Count;
            UIDraggablePanel udp = par.GetComponentInParent<UIDraggablePanel>();
            int count = commonGo.Count;
            if (num > count)
            {
                for (int i = num - count; i > 0; --i)
                {
                    GameObject go = GameObject.Instantiate(ItemPerObj) as GameObject;
                    if (go != null)
                    {
                        go.transform.localPosition = Vector3.zero;
                        commonGo.Add(go);
                        Transform tf = go.transform.Find("LingquButton");
                        if (tf != null)
                        {
                            UIEventListener.Get(tf.gameObject).onClick = ItemClick;
                        }
                        for (int j = 1; j < 5; ++j)
                        {
                            tf = go.transform.Find("IconItem/Grid/Icon_" + j);
                            if (tf != null)
                            {
                                UIEventListener.Get(tf.gameObject).onClick = TipClick;
                            }
                        }
                    }
                }
            }
            clickDic.Clear();
            count = commonGo.Count;
            for (int i = 0; i < count; ++i)
            {
                GameObject go = commonGo[i];
                if (go != null)
                {
                    if (i < num)
                    {
                        //NGUITools.SetActive(go, true);
                        go.transform.name = i.ToString();
                        go.transform.parent = par;
                        go.transform.localPosition = Vector3.zero;
                        go.transform.localScale = Vector3.one;
                        clickDic.Add(go, celllist[i]);
                        SetItemInfo(go.transform, celllist[i], i);
                        UIDragPanelContents udpc = go.GetComponentInChildren<UIDragPanelContents>();
                        if (udpc != null)
                        {
                            udpc.draggablePanel = udp;
                        }
                    }
                    else
                    {
                        //NGUITools.SetActive(go, false);
                    }
                }
            }
            UIGrid ug = par.GetComponent<UIGrid>();
            if (ug != null)
            {
                ug.repositionNow = true;
            }
        }
    }
    private void ItemClick(GameObject go)
    {
        if (go != null && go.transform.parent != null)
        {
            Tab_LevelAwardSimulate data;
            if (clickDic.TryGetValue(go.transform.parent.gameObject, out data))
            {
                int left = 0;
                int right = data.Condition;
                int index = -1;
                switch (NowType)
                {
                    case ActivityRewardType.Level:
                        left = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
                        index = levelData.FindIndex(cell => cell.Id == data.Id);
                        if (index != -1)
                        {
                            index = levelData[index].Index;
                        }
                        break;
                    case ActivityRewardType.Fight:
                        left = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.CombatValue;
                        index = fightData.FindIndex(cell => cell.Id == data.Id);
                        if (index != -1)
                        {
                            index = fightData[index].Index;
                        }
                        break;
                    case ActivityRewardType.Cost:
                        left = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COSTREBATE_VALUE);
                        index = fightData.FindIndex(cell => cell.Id == data.Id);
                        if (index != -1)
                        {
                            index = costData[index].Index;
                        }
                        break;
                    case ActivityRewardType.TimeLimit:
                        break;
                    default:
                        return;
                }
                if (index > -1 && left >= right)
                {
                    //可以领取
                    if (NowType == ActivityRewardType.Level)
                    {
                        CG_ASK_LEVELAWARD msg = (CG_ASK_LEVELAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_LEVELAWARD);
                        msg.SetIndex(index);
                        msg.SendPacket();
                    }
                    if (NowType == ActivityRewardType.Fight)
                    {
                        CG_ASK_COMBATVALUEAWARD msg = (CG_ASK_COMBATVALUEAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_COMBATVALUEAWARD);
                        msg.SetIndex(index);
                        msg.SendPacket();
                    }
                    if (NowType == ActivityRewardType.Cost)
                    {
                        CG_ASK_COST_REBATE_PRIZE msg = (CG_ASK_COST_REBATE_PRIZE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_COST_REBATE_PRIZE);
                        msg.SetPrizeindex(index);
                        msg.SendPacket();
                    }
                    //GUIData.AddNotifyData2Client(false, "Already send to server!");
                }
                else
                {
                    //不可以领取，提示
                    GUIData.AddNotifyData2Client(false, "#{11260}");
                }
            }
        }
    }
    private void TipClick(GameObject go)
    {
        int id = 0;
        if (go != null && go.transform.parent != null && go.transform.parent.parent != null
            && go.transform.parent.parent.parent != null)
        {
            Tab_LevelAwardSimulate data;
            if (clickDic.TryGetValue(go.transform.parent.parent.parent.gameObject, out data))
            {
                string strname = go.name;
                if (!string.IsNullOrEmpty(strname))
                {
                    bool signItem = false;
                    int awardNum = 0;
                    int length = strname.Length;
                    if (length > 0)
                    {
                        int index = 0;
                        if (int.TryParse(strname[length - 1].ToString(), out index))
                        {
                            int counter = 0;
                            if (data.Money > 0)
                            {
                                ++counter;
                            }
                            if (counter == index)
                            {
                                id = GoldCoinId;
                                awardNum = data.Money;
                            }
                            else
                            {
                                if (data.BindYuanbao > 0)
                                {
                                    ++counter;
                                }
                                if (counter == index)
                                {
                                    id = YuanBaoId;
                                    awardNum = data.BindYuanbao;
                                }
                                else
                                {
                                    int dataIdCount = data.getItemDataIDCount();
                                    int dataCount = data.getItemCountCount();
                                    if (dataIdCount == dataCount)
                                    {
                                        for (int i = 0; i < dataIdCount; ++i)
                                        {
                                            if (data.GetItemDataIDbyIndex(i) > -1 && data.GetItemCountbyIndex(i) > -1)
                                            {
                                                ++counter;
                                                if (counter == index)
                                                {
                                                    id = data.GetItemDataIDbyIndex(i);
                                                    signItem = true;
                                                    awardNum = data.GetItemCountbyIndex(i);
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if (id != 0)
                            {
                                Tab_CommonItem cItem = TableManager.GetCommonItemByID(id, 0);
                                if (cItem != null)
                                {
                                    //////////////////////////////////////////////////////////////////////////
                                    //显示Tip
                                    if (signItem)
                                    {
                                        if (id <= -1)
                                        {
                                            return;
                                        }
                                        GameItem item = new GameItem();
                                        item.DataID = id;
                                        if (item.IsEquipMent())
                                        {
                                            EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
                                        }
                                        else
                                        {
                                            ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
                                        }
                                    }
                                    else
                                    {
                                        MoneyTipsLogic.MoneyType type = MoneyTipsLogic.MoneyType.ITEM_NONE;
                                        if (id == GoldCoinId)
                                        {
                                            type = MoneyTipsLogic.MoneyType.ITEM_MONEY;
                                        }
                                        else if (id == YuanBaoId)
                                        {
                                            type = MoneyTipsLogic.MoneyType.ITEM_YUANBAO;
                                        }
                                        else
                                        {

                                        }
                                        MoneyTipsLogic.ShowMoneyTip(type, awardNum);
                                    }
                                    //////////////////////////////////////////////////////////////////////////
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    public ActivityRewardType NowType
    {
        get { return nowtype; }
    }
    void OnDestroy()
    {
        int count = commonGo.Count;
        for (int i = 0; i < count; ++i)
        {
            if (commonGo[i] != null)
            {
                Transform tf = commonGo[i].transform.Find("LingquButton");
                if (tf != null)
                {
                    UIEventListener.Get(tf.gameObject).onClick = null;
                }
                for (int j = 1; j < 5; ++j)
                {
                    tf = commonGo[i].transform.Find("IconItem/Grid/Icon_" + j);
                    if (tf != null)
                    {
                        UIEventListener.Get(tf.gameObject).onClick = null;
                    }
                }
            }
        }
    }
    private void SetBackStatu(Transform tf, BackState state)
    {
        if (tf != null)
        {
            Transform normal = tf.Find("BackGround/BG_1");
            Transform light = tf.Find("BackGround/BG_2");
            Transform gray = tf.Find("BackGround/BG_3");
            if (normal != null && light != null && gray != null)
            {
                switch (state)
                {
                    case BackState.Normal:
                        normal.gameObject.SetActive(true);
                        light.gameObject.SetActive(false);
                        gray.gameObject.SetActive(false);
                        break;
                    case BackState.Light:
                        normal.gameObject.SetActive(false);
                        light.gameObject.SetActive(true);
                        gray.gameObject.SetActive(false);
                        break;
                    case BackState.Gray:
                        normal.gameObject.SetActive(false);
                        light.gameObject.SetActive(false);
                        gray.gameObject.SetActive(true);
                        break;
                }
            }
        }
    }
    private void SetItemInfo(Transform itemtf, Tab_LevelAwardSimulate data, int index)
    {
        if (itemtf != null && data != null)
        {
            bool isgray = false;
            Transform buttontfbc = itemtf.Find("LingquButton");
            Transform buttontfbg = itemtf.Find("LingquButton/Background");
            Transform buttontflabel = itemtf.Find("LingquButton/Label0");
            if (buttontfbc != null && buttontfbg != null && buttontflabel != null)
            {
                UIImageButton us = buttontfbc.GetComponent<UIImageButton>();
                UILabel ul = buttontflabel.GetComponent<UILabel>();
                if (us != null && ul != null)
                {
                    List<int> alreadygetlist;
                    if (GameManager.gameManager.ActivityRewardGetDic.TryGetValue(NowType, out alreadygetlist))
                    {
                        if (alreadygetlist.Count > index && alreadygetlist[index] > 0)
                        {
                            us.isEnabled = false;
                            ul.text = StrDictionary.GetClientDictionaryString("#{1380}");
                            NGUITools.SetActive(buttontfbg.gameObject, false);
                            isgray = true;
                            SetBackStatu(itemtf, BackState.Gray);
                            itemtf.name = "z" + itemtf.name;
                        }
                        else
                        {
                            us.isEnabled = true;
                            ul.text = StrDictionary.GetClientDictionaryString("#{1378}");
                            NGUITools.SetActive(buttontfbg.gameObject, true);
                        }
                    }
                    else
                    {
                        us.isEnabled = true;
                        ul.text = StrDictionary.GetClientDictionaryString("#{1378}");
                        NGUITools.SetActive(buttontfbg.gameObject, true);
                    }
                }
            }
            int counter = 0;
            if (data.Money > 0)
            {
                ++counter;
                Tab_CommonItem cItem = TableManager.GetCommonItemByID(GoldCoinId, 0);
                if (cItem != null)
                {
                    Transform tf = itemtf.Find("IconItem/Grid/Icon_" + counter + "/sprite");
                    if (tf != null)
                    {
                        UISprite us = tf.GetComponent<UISprite>();
                        if (us != null)
                        {
                            us.spriteName = cItem.Icon;
                        }
                    }
                    tf = itemtf.Find("IconItem/Grid/Icon_" + counter + "/BG_2");
                    if (tf != null)
                    {
                        UISprite us = tf.GetComponent<UISprite>();
                        if (us != null)
                        {
                            us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[cItem.Quality - 1];
                        }
                    }
                    tf = itemtf.Find("IconItem/Grid/Icon_" + counter + "/Label");
                    if (tf != null)
                    {
                        UILabel ul = tf.GetComponent<UILabel>();
                        if (ul != null)
                        {
                            ul.text = "X" + data.Money;
                        }
                    }
                }
            }
            if (data.BindYuanbao > 0)
            {
                ++counter;
                Tab_CommonItem cItem = TableManager.GetCommonItemByID(YuanBaoId, 0);
                if (cItem != null)
                {
                    Transform tf = itemtf.Find("IconItem/Grid/Icon_" + counter + "/sprite");
                    if (tf != null)
                    {
                        UISprite us = tf.GetComponent<UISprite>();
                        if (us != null)
                        {
                            us.spriteName = cItem.Icon;
                        }
                    }
                    tf = itemtf.Find("IconItem/Grid/Icon_" + counter + "/BG_2");
                    if (tf != null)
                    {
                        UISprite us = tf.GetComponent<UISprite>();
                        if (us != null)
                        {
                            us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[cItem.Quality - 1];
                        }
                    }
                    tf = itemtf.Find("IconItem/Grid/Icon_" + counter + "/Label");
                    if (tf != null)
                    {
                        UILabel ul = tf.GetComponent<UILabel>();
                        if (ul != null)
                        {
                            ul.text = "X" + data.BindYuanbao;
                        }
                    }
                }
            }
            int dataIdCount = data.getItemDataIDCount();
            int dataCount = data.getItemCountCount();
            if (dataIdCount == dataCount)
            {
                for (int i = 0; i < dataIdCount; ++i)
                {
                    if (data.GetItemDataIDbyIndex(i) > -1 && data.GetItemCountbyIndex(i) > -1)
                    {
                        ++counter;
                        if (counter == 5)
                        {
                            break;
                        }
                        Tab_CommonItem cItem = TableManager.GetCommonItemByID(data.GetItemDataIDbyIndex(i), 0);
                        if (cItem != null)
                        {
                            Transform tf = itemtf.Find("IconItem/Grid/Icon_" + counter + "/sprite");
                            if (tf != null)
                            {
                                UISprite us = tf.GetComponent<UISprite>();
                                if (us != null)
                                {
                                    us.spriteName = cItem.Icon;
                                }
                            }
                            tf = itemtf.Find("IconItem/Grid/Icon_" + counter + "/BG_2");
                            if (tf != null)
                            {
                                UISprite us = tf.GetComponent<UISprite>();
                                if (us != null)
                                {
                                    us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[cItem.Quality - 1];
                                }
                            }
                            tf = itemtf.Find("IconItem/Grid/Icon_" + counter + "/Label");
                            if (tf != null)
                            {
                                UILabel ul = tf.GetComponent<UILabel>();
                                if (ul != null)
                                {
                                    ul.text = "X" + data.GetItemCountbyIndex(i);
                                }
                            }
                        }
                    }
                }
            }
            for (int i = 1; i < 5; ++i)
            {
                Transform tf = itemtf.Find("IconItem/Grid/Icon_" + i);
                if (tf != null)
                {
                    if (i > counter)
                    {
                        NGUITools.SetActive(tf.gameObject, false);
                    }
                    else
                    {
                        NGUITools.SetActive(tf.gameObject, true);
                    }
                }
            }
            int left = 0;
            int right = data.Condition;
            string strdicidCondition = "";
            string strdicidPB = "";
            string path = "";
            switch ((ActivityRewardType)data.Type)
            {
                case ActivityRewardType.Level:
                    strdicidCondition = "#{11333}";
                    strdicidPB = "#{11248}";
                    path = "Leijixiaofei/Label_level";
                    left = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
                    break;
                case ActivityRewardType.Fight:
                    strdicidCondition = "#{11250}";
                    strdicidPB = "#{11251}";
                    path = "Leijixiaofei/Label";
                    left = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.CombatValue;
                    break;
                case ActivityRewardType.Cost:
                    strdicidCondition = "#{11253}";
                    strdicidPB = "#{11254}";
                    path = "Leijixiaofei/Label_battlecount";
                    left = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COSTREBATE_VALUE);
                    break;
                case ActivityRewardType.TimeLimit:
                    break;
                default:
                    break;
            }
            Transform tful = itemtf.Find("LingquButton/Label1");
            if (tful != null)
            {
                UILabel ul = tful.GetComponent<UILabel>();
                if (ul != null)
                {
                    ul.text = "" + (left > right ? right : left) + "/" + right;
                    ul.text = StrDictionary.GetClientDictionaryString(strdicidPB, (left > right ? right : left), right);
                }
            }
            tful = itemtf.Find("LingquButton");
            if (tful != null)
            {
                UIImageButton uib = tful.GetComponent<UIImageButton>();
                if (uib != null)
                {
                    if (left < right)
                    {
                        uib.isEnabled = false;
                        SetBackStatu(itemtf, BackState.Normal);
                    }
                    else
                    {
                        uib.isEnabled = true;
                        if (!isgray)
                        {
                            SetBackStatu(itemtf, BackState.Light);
                        }
                    }
                }
            }
            tful = itemtf.Find("Leijixiaofei");
            if (tful != null)
            {
                int count = tful.childCount;
                for (int i = 0; i < count; ++i)
                {
                    Transform tf = tful.GetChild(i);
                    if (tf != null)
                    {
                        tf.gameObject.SetActive(false);
                    }
                }
            }
            tful = itemtf.Find(path);
            if (tful != null)
            {
                tful.gameObject.SetActive(true);
                UILabel ul = tful.GetComponent<UILabel>();
                if (ul != null)
                {
                    ul.text = StrDictionary.GetClientDictionaryString(strdicidCondition, right);
                }
            }
        }
    }
    public void RefreshAllInfo()
    {
        ActivityRewardType type = NowType;
        nowtype = ActivityRewardType.None;
        switch (type)
        {
            case ActivityRewardType.Level:
                ButtonClickLevel();
                break;
            case ActivityRewardType.Fight:
                ButtonClickFight();
                break;
            case ActivityRewardType.Cost:
                ButtonClickCost();
                break;
            case ActivityRewardType.TimeLimit:
                ButtonClickTimeLimit();
                break;
            default:
                break;
        }
    }
    public void ShowGetItemTip(ActivityRewardType type, int index)
    {
        GUIData.AddNotifyData2Client(false, "#{11255}");
        return;

//        List<Tab_LevelAwardSimulate> datalist = null;
//        switch (type)
//        {
//            case ActivityRewardType.Level:
//                datalist = levelData;
//                break;
//            case ActivityRewardType.Fight:
//                datalist = fightData;
//                break;
//            case ActivityRewardType.Cost:
//                datalist = costData;
//                break;
//            case ActivityRewardType.TimeLimit:
//                datalist = timeLimitData;
//                break;
//            default:
//                return;
//        }
//        if (datalist[index].Money > -1)
//        {
//            Tab_CommonItem cItem = TableManager.GetCommonItemByID(GoldCoinId, 0);
//            if (cItem != null)
//            {
//                GUIData.AddNotifyData2Client(false, cItem.Name + " X" + datalist[index].Money);
//            }
//        }
//        if (datalist[index].BindYuanbao > -1)
//        {
//            Tab_CommonItem cItem = TableManager.GetCommonItemByID(YuanBaoId, 0);
//            if (cItem != null)
//            {
//                GUIData.AddNotifyData2Client(false, cItem.Name + " X" + datalist[index].BindYuanbao);
//            }
//        }
//        if (datalist != null && datalist.Count > index && datalist[index] != null)
//        {
//            int count = datalist[index].getItemDataIDCount();
//            if (count == datalist[index].getItemCountCount())
//            {
//                for (int i = 0; i < count; ++i)
//                {
//                    Tab_CommonItem cItem = TableManager.GetCommonItemByID(datalist[index].GetItemDataIDbyIndex(i), 0);
//                    if (cItem != null)
//                    {
//                        GUIData.AddNotifyData2Client(false, cItem.Name + " X" + datalist[index].GetItemCountbyIndex(i));
//                    }
//                }
//            }
//        }
    }
    public void RefreshCostRebate()
    {
        CostRebateData crd = GameManager.gameManager.PlayerDataPool.CostRebate;
        if (CostRebateGo != null)
        {
            NGUITools.SetActive(CostRebateGo, crd.CostRebateOpen);
        }
        if (crd.CostRebateOpen && NowType == ActivityRewardType.Cost)
        {
            costData = crd.CostRebateDataList;
            RefreshAllInfo();
        }
    }
    void OnEnable()
    {
        CancelInvoke("CalculateRedPoint");
        InvokeRepeating("CalculateRedPoint", 1f, 1f);
    }
    public void CalculateRedPoint()
    {
        bool level, fight;
        CalculateRedPoint(out level, out fight);
        if (LevelRedPoint != null && FightRedPoint != null)
        {
            LevelRedPoint.SetActive(level);
            FightRedPoint.SetActive(fight);
        }
    }
    public static void CalculateRedPoint(out bool levelaward, out bool fightaward)
    {
        int levelnum = 0;
        int fightnum = 0;
        levelaward = false;
        fightaward = false;
        List<int> levelalreadygetlist;
        List<int> fightalreadygetlist;
        GameManager.gameManager.ActivityRewardGetDic.TryGetValue(ActivityRewardType.Level, out levelalreadygetlist);
        GameManager.gameManager.ActivityRewardGetDic.TryGetValue(ActivityRewardType.Fight, out fightalreadygetlist);
        if (Singleton<ObjManager>.GetInstance() == null || Singleton<ObjManager>.GetInstance().MainPlayer == null) return;
        int level = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
        int combatvalue = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.CombatValue;
        Dictionary<int, List<Tab_LevelAwardPacket>> allDataDic = TableManager.GetLevelAwardPacket();
        if (allDataDic != null)
        {
            foreach (KeyValuePair<int, List<Tab_LevelAwardPacket>> pair in allDataDic)
            {
                if (pair.Value != null && pair.Value.Count > 0)
                {
                    if (pair.Value[0] != null)
                    {
                        switch (pair.Value[0].Type)
                        {
                            case 0:
                                if (pair.Value[0].Condition <= level && levelalreadygetlist.Count > levelnum && levelalreadygetlist[levelnum] == 0)
                                {
                                    levelaward = true;
                                }
                                ++levelnum;
                                break;
                            case 1:

                                if (pair.Value[0].Condition <= combatvalue && fightalreadygetlist.Count > fightnum && fightalreadygetlist[fightnum] == 0)
                                {
                                    fightaward = true;
                                }
                                ++fightnum;
                                break;
                        }
                    }
                }
            }
        }
    }
    private UISprite SelectSprite = null;
    private float timecount = 1f;
    private int lastyuanbao = int.MaxValue;
    private UILabel nowlabel = null;
    private GameObject ItemPerObj = null;
    private List<GameObject> commonGo = new List<GameObject>();
    private Dictionary<GameObject, Tab_LevelAwardSimulate> clickDic = new Dictionary<GameObject, Tab_LevelAwardSimulate>();
    private ActivityRewardType nowtype = ActivityRewardType.None;
    public GameObject XiaofeiXianshiWindow = null;
    public GameObject DengjiZhanliWindow = null;
    public GameObject XianshiWindow = null;
    public GameObject XiaofeiWindow = null;
    public GameObject ZhanliWindow = null;
    public GameObject DengjiWindow = null;
    private List<Tab_LevelAwardSimulate> timeLimitData = new List<Tab_LevelAwardSimulate>();
    private List<Tab_LevelAwardSimulate> costData = new List<Tab_LevelAwardSimulate>();
    private List<Tab_LevelAwardSimulate> levelData = new List<Tab_LevelAwardSimulate>();
    private List<Tab_LevelAwardSimulate> fightData = new List<Tab_LevelAwardSimulate>();
    public int GoldCoinId = 30;
    public int YuanBaoId = 31;
    public UILabel yuanbaoLabel0 = null;
    public UILabel yuanbaoLabel1 = null;
    public string SelectName = "";
    public string UnSelectName = "";
    public UISprite[] ButtonUISprite = null;
    public GameObject CostRebateGo = null;
    public UILabel LevelFightLabel = null;
    public UILabel CostTimeLimitLabel = null;
    public UILabel CostTimeLimitDecLabel = null;
    public GameObject LevelRedPoint;
    public GameObject FightRedPoint;
}
public class Tab_LevelAwardSimulate
{
    public Tab_LevelAwardSimulate(Tab_LevelAwardPacket tlap, int index)
    {
        Tab_LevelAwardPacketObj = tlap;
        m_Index = index;
    }
    public Tab_LevelAwardSimulate(int id, int type, int money, int yuanbao, int condition, int[] idarray, int[] numarray)
    {
        m_Id = id;
        m_Type = type;
        m_Money = money;
        m_BindYuanbao = yuanbao;
        m_Condition = condition;
        m_ItemCount = numarray;
        m_ItemDataID = idarray;
        Tab_LevelAwardPacketObj = null;
    }
    public void SetInfo(int id, int type, int money, int yuanbao, int condition, int[] idarray, int[] numarray)
    {
        m_Id = id;
        m_Type = type;
        m_Money = money;
        m_BindYuanbao = yuanbao;
        m_Condition = condition;
        m_ItemCount = numarray;
        m_ItemDataID = idarray;
        Tab_LevelAwardPacketObj = null;
    }
    public int Index
    {
        get { return m_Index; }
    }
    private int m_Index;
    private Tab_LevelAwardPacket Tab_LevelAwardPacketObj = null;
    private int m_BindYuanbao;
    public int BindYuanbao
    {
        get
        {
            if (Tab_LevelAwardPacketObj == null)
            {
                return m_BindYuanbao;
            }
            else
            {
                return Tab_LevelAwardPacketObj.BindYuanbao;
            }
        }
    }

    private int m_Condition;
    public int Condition
    {
        get
        {
            if (Tab_LevelAwardPacketObj == null)
            {
                return m_Condition;
            }
            else
            {
                return Tab_LevelAwardPacketObj.Condition;
            }
        }
    }

    private int m_Id;
    public int Id
    {
        get
        {
            if (Tab_LevelAwardPacketObj == null)
            {
                return m_Id;
            }
            else
            {
                return Tab_LevelAwardPacketObj.Id;
            }
        }
    }

    private int m_Money;
    public int Money
    {
        get
        {
            if (Tab_LevelAwardPacketObj == null)
            {
                return m_Money;
            }
            else
            {
                return Tab_LevelAwardPacketObj.Money;
            }
        }
    }

    private int m_Type;
    public int Type
    {
        get
        {
            if (Tab_LevelAwardPacketObj == null)
            {
                return m_Type;
            }
            else
            {
                return Tab_LevelAwardPacketObj.Type;
            }
        }
    }

    public int getItemCountCount()
    {
        if (Tab_LevelAwardPacketObj == null)
        {
            return m_ItemCount.Length;
        }
        else
        {
            return Tab_LevelAwardPacketObj.getItemCountCount();
        }
    }
    private int[] m_ItemCount = null;
    public int GetItemCountbyIndex(int idx)
    {
        if (Tab_LevelAwardPacketObj == null)
        {
            if (m_ItemCount != null && idx >= 0 && idx < m_ItemCount.Length) return m_ItemCount[idx];
            return -1;
        }
        else
        {
            return Tab_LevelAwardPacketObj.GetItemCountbyIndex(idx);
        }
    }

    public int getItemDataIDCount()
    {
        if (Tab_LevelAwardPacketObj == null)
        {
            return m_ItemDataID.Length;
        }
        else
        {
            return Tab_LevelAwardPacketObj.getItemDataIDCount();
        }
    }
    private int[] m_ItemDataID = null;
    public int GetItemDataIDbyIndex(int idx)
    {
        if (Tab_LevelAwardPacketObj == null)
        {
            if (m_ItemDataID != null && idx >= 0 && idx < m_ItemDataID.Length) return m_ItemDataID[idx];
            return -1;
        }
        else
        {
            return Tab_LevelAwardPacketObj.GetItemDataIDbyIndex(idx);
        }
    }
}
