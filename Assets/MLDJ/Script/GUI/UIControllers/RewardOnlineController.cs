using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.AwardActivity;

public class RewardOnlineController : UIControllerBase<RewardOnlineController>
{

    void Awake()
    {
        SetInstance(this);
        UIManager.LoadItem(UIInfo.RewardOnlineItem, LoadSingleItemOver);
    }

    // Use this for initialization
    void Start()
    {
        InvokeRepeating("UpdateCountdown", 1f, 1f);
    }
    void OnDestroy()
    {
        SetInstance(null);
        foreach (KeyValuePair<int, LabelData> pair in LabelTimeDic)
        {
            if (pair.Value != null)
            {
                pair.Value.Clear();
            }
        }
    }
    public void CloseUI()
    {
        UIManager.CloseUI(UIInfo.RewardOnline);
    }
    // Update is called once per frame
    void Update()
    {

    }
    private void LoadSingleItemOver(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            Module.Log.LogModule.ErrorLog("load RewardOnlineItem error");
            return;
        }
        ItemPerObj = resItem;
        Init();
    }
    public void Init()
    {
        Dictionary<int, OnlineAwardLine> DataTab = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardTable;
        List<int> GetList = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayGetList;
        if (DataTab != null && ItemPerObj != null && GetList != null)
        {
            if (childWindows.Length < 3 || childWindows[2] == null)
            {
                return;
            }
            Transform par = childWindows[2].transform;
            UIGrid ug = childWindows[2].GetComponent<UIGrid>();
            if (ug != null)
            {
                ug.repositionNow = true;
            }
            foreach (KeyValuePair<int, OnlineAwardLine> pair in DataTab)
            {
                if (pair.Value.ID < 0)
                {
                    return;
                }
                GameObject go;
                if (!AwardKeyFindGoDic.TryGetValue(pair.Value.ID, out go))
                {
                    go = GameObject.Instantiate(ItemPerObj) as GameObject;
                    //}
                    if (go != null)
                    {
                        if (GetList[pair.Value.ID] == 1)
                        {
                            go.transform.name = "z" + pair.Value.ID;
                        }
                        else
                        {
                            go.transform.name = pair.Value.ID.ToString();
                        }
                        go.transform.parent = par;
                        go.transform.localPosition = Vector3.zero;
                        go.transform.localScale = Vector3.one;
                        //OnlineAwardLine直接操作
                        AwardKeyFindGoDic.Add(pair.Value.ID, go);
                        int sign = 0;
                        if (pair.Value.Exp > 0)
                        {
                            ++sign;
                            Transform tf = go.transform.Find("Item0" + sign + "/ItemSlot");
                            if (tf != null)
                            {
                                ItemSlotLogic isl = tf.GetComponent<ItemSlotLogic>();
                                if (isl != null)
                                {
                                    isl.InitInfo_PlayerExp("x" + pair.Value.Exp, ItemSlotLogic.OnClickOpenTips);
                                }
                            }
                        }
                        if (pair.Value.Money > 0)
                        {
                            ++sign;
                            Transform tf = go.transform.Find("Item0" + sign + "/ItemSlot");
                            if (tf != null)
                            {
                                ItemSlotLogic isl = tf.GetComponent<ItemSlotLogic>();
                                if (isl != null)
                                {
                                    isl.InitInfo_Coin(ItemSlotLogic.OnClickOpenTips, "x" + pair.Value.Money, true);
                                }
                            }
                        }
                        if (pair.Value.BindYuanbao > 0)
                        {
                            ++sign;
                            Transform tf = go.transform.Find("Item0" + sign + "/ItemSlot");
                            if (tf != null)
                            {
                                ItemSlotLogic isl = tf.GetComponent<ItemSlotLogic>();
                                if (isl != null)
                                {
                                    isl.InitInfo_YuanbaoBind(ItemSlotLogic.OnClickOpenTips, "x" + pair.Value.BindYuanbao, true);
                                }
                            }
                        }
                        if (pair.Value.Item1DataID > -1)
                        {
                            if (sign > 2)
                            {
                                return;
                            }
                            ++sign;
                            Transform tf = go.transform.Find("Item0" + sign + "/ItemSlot");
                            if (tf != null)
                            {
                                ItemSlotLogic isl = tf.GetComponent<ItemSlotLogic>();
                                if (isl != null)
                                {
                                    isl.InitInfo_Item(pair.Value.Item1DataID, ItemSlotLogic.OnClickOpenTips, "x" + pair.Value.Item1Count, true);
                                }
                            }
                        }
                        if (pair.Value.Item2DataID > -1)
                        {
                            if (sign > 2)
                            {
                                return;
                            }
                            ++sign;
                            Transform tf = go.transform.Find("Item0" + sign + "/ItemSlot");
                            if (tf != null)
                            {
                                ItemSlotLogic isl = tf.GetComponent<ItemSlotLogic>();
                                if (isl != null)
                                {
                                    isl.InitInfo_Item(pair.Value.Item2DataID, ItemSlotLogic.OnClickOpenTips, "x" + pair.Value.Item2count, true);
                                }
                            }
                        }
                        for (int i = 1; i < 4; ++i)
                        {
                            Transform tf = go.transform.Find("Item0" + i);
                            if (tf != null)
                            {
                                if (i > sign)
                                {
                                    tf.gameObject.SetActive(false);
                                }
                                else
                                {
                                    tf.gameObject.SetActive(true);
                                }
                            }
                        }
                        {
                            Transform tf = go.transform.Find("Reward-Des");
                            if (tf != null)
                            {
                                UILabel ul = tf.GetComponent<UILabel>();
                                if (ul != null)
                                {
                                    ul.text = GCGame.Table.StrDictionary.GetClientDictionaryString(string.Format("#{{{0}}}", ul.curDicID), pair.Value.LeftTime / 60);
                                }
                            }
                        }
                        LabelData labelData;
                        if (!LabelTimeDic.TryGetValue(pair.Value.ID, out labelData))
                        {
                            UILabel UILabelCounting = null;
                            UILabel UILabelAvailable = null;
                            UILabel UIFinish = null;
                            Transform tftime = go.transform.Find("Time");
                            if (tftime != null)
                            {
                                Transform tf0 = tftime.Find("Time-Counting");
                                if (tf0 != null)
                                {
                                    UILabelCounting = tf0.GetComponent<UILabel>();
                                }
                                Transform tf1 = tftime.Find("Time-Available");
                                if (tf1 != null)
                                {
                                    UILabelAvailable = tf1.GetComponent<UILabel>();
                                }
                                Transform tf2 = tftime.Find("Time-Finished");
                                if (tf2 != null)
                                {
                                    UIFinish = tf1.GetComponent<UILabel>();
                                }
                                //buttonPar = go.transform.Find("Reward01-Btn");
                                LabelTimeDic.Add(pair.Value.ID, new LabelData(pair.Value.ID, UILabelCounting, UILabelAvailable, UIFinish, go));
                            }
                        }
                    }
                }
                else if (go != null)
                {
                    if (GetList[pair.Value.ID] == 1)
                    {
                        go.transform.name = "z" + pair.Value.ID;
                    }
                    else
                    {
                        go.transform.name = pair.Value.ID.ToString();
                    }
                }
            }
            if (childWindows.Length > 1)
            {
                UILabel ul = childWindows[1].GetComponent<UILabel>();
                if (ul != null)
                {
                    ul.text = GCGame.Table.StrDictionary.GetClientDictionaryString(string.Format("#{{{0}}}", ul.curDicID), DataTab.Count);
                }
            }
        }
        int nowCountId = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardID;
        int time = 0;
        Dictionary<int, OnlineAwardLine> dataDic = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardTable;
        OnlineAwardLine data;
        if (!dataDic.TryGetValue(nowCountId, out data))
        {
            if (nowCountId > dataDic.Count - 1)
            {
                time = dataDic[dataDic.Count - 1].LeftTime + (nowCountId - dataDic.Count) * 600;
            }
            else
            {
                return;
            }
        }
        else
        {
            time = data.LeftTime;
        }
        int datalefttime = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayLeftTime;
        lastTime = Time.realtimeSinceStartup;
        int livetime = Mathf.RoundToInt(lastTime - GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayBeginTime);
        pastTime = time - datalefttime + livetime - 1;
        UpdateCountdown();
    }
    public void UpdateCountdown()
    {
        float time = Time.realtimeSinceStartup;
        pastTime += Mathf.RoundToInt(time - lastTime);
        lastTime = time;
        if (childWindows.Length > 0)
        {
            UILabel ul = childWindows[0].GetComponent<UILabel>();
            if (ul != null)
            {
                ul.text = GCGame.Table.StrDictionary.GetClientDictionaryString(string.Format("#{{{0}}}", ul.curDicID), pastTime / 60);
            }
        }
        Dictionary<int, OnlineAwardLine> dataDic = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardTable;
        OnlineAwardLine data;
        if (dataDic != null)
        {
            foreach (KeyValuePair<int, LabelData> pair in LabelTimeDic)
            {
                if (pair.Key > -1 && dataDic.TryGetValue(pair.Key, out data))
                {
                    int id = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardID;
                    List<int> GetList = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayGetList;
                    if (pair.Value != null)
                    {
                        pair.Value.UpdateCountdownShow(id > pair.Key && data.LeftTime <= pastTime, GetList.Count > pair.Key ? (GetList[pair.Key] == 1) : false);
                        pair.Value.UpdateCountdownTime(pastTime);
                    }
                }
            }
        }
    }
    private float lastTime = 0f;
    private int pastTime = 0;
    private GameObject ItemPerObj = null;
    private Dictionary<int, GameObject> AwardKeyFindGoDic = new Dictionary<int, GameObject>();
    private Dictionary<int, LabelData> LabelTimeDic = new Dictionary<int, LabelData>();
    private enum GetStatusType { None = -1, CannotGet = 0, CanGet, AlreadyGet };
    class LabelData
    {
        public LabelData(int id, UILabel uiLabelCounting, UILabel uiLabelAvailable, UILabel uiFinish, GameObject go)
        {
            Id = id;
            UILabelCounting = uiLabelCounting;
            UILabelAvailable = uiLabelAvailable;
            UIFinish = uiFinish;
            if (go != null)
            {
                tfAvailable = go.transform.Find("Reward01-Btn/Btn-Available");
                if (tfAvailable != null)
                {
                    UIEventListener.Get(tfAvailable.gameObject).onClick = AvaiableClick;
                }
                tfUnAvailable = go.transform.Find("Reward01-Btn/Btn-Unavailable");
                if (tfUnAvailable != null)
                {
                    UIEventListener.Get(tfUnAvailable.gameObject).onClick = UnAvaiableClick;
                }
                tfFinish = go.transform.Find("Reward01-Btn/Btn-Finished");
                if (tfFinish != null)
                {
                    UIEventListener.Get(tfFinish.gameObject).onClick = FinishClick;
                }
                m_GO = go;
            }
        }
        public void UpdateCountdownShow(bool canGet, bool alreadyGet)
        {
            if (alreadyGet)
            {
                if (type != GetStatusType.AlreadyGet)
                {
                    type = GetStatusType.AlreadyGet;
                    UpdateGameActive(false, false, true);
                }
            }
            else
            {
                if (canGet)
                {
                    if (type != GetStatusType.CanGet)
                    {
                        type = GetStatusType.CanGet;
                        UpdateGameActive(true, false, false);
                    }
                }
                else
                {
                    if (type != GetStatusType.CannotGet)
                    {
                        type = GetStatusType.CannotGet;
                        UpdateGameActive(false, true, false);
                    }
                }
            }
        }
        public void UpdateCountdownTime(int pasttime)
        {
            Dictionary<int, OnlineAwardLine> dataDic = GameManager.gameManager.PlayerDataPool.AwardActivityData.New7DayOnlineAwardTable;
            OnlineAwardLine data;
            if (type == GetStatusType.CannotGet && UILabelCounting != null)
            {
                if (dataDic.TryGetValue(Id, out data))
                {
                    int minus = data.LeftTime - pasttime;
                    if (minus < 0)
                    {
                        minus = 0;
                        //UpdateCountdownShow(true, false);
                    }
                    int h = minus / 3600;
                    int m = (minus % 3600) / 60;
                    int s = minus % 60;
                    UILabelCounting.text = string.Format("{0:d2}:{1:d2}:{2:d2}", h, m, s);
                }
            }
        }
        private void AvaiableClick(GameObject go)
        {
            //Send messagge to server.
            CG_ASK_NEW7DAYONLINEAWARD msg = (CG_ASK_NEW7DAYONLINEAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_NEW7DAYONLINEAWARD);
            msg.SetNewOnlineAwardID(Id);
            msg.SendPacket();
        }
        private void UnAvaiableClick(GameObject go)
        {
            GUIData.AddNotifyData2Client(false, "#{5276}");
        }
        private void FinishClick(GameObject go)
        {
            GUIData.AddNotifyData2Client(false, "#{11288}");
        }
        private void UpdateGameActive(bool isavaliable, bool isunavailble, bool isfinish)
        {
            if (tfAvailable != null)
            {
                tfAvailable.gameObject.SetActive(isavaliable);
            }
            if (tfUnAvailable != null)
            {
                tfUnAvailable.gameObject.SetActive(isunavailble);
            }
            if (tfFinish != null)
            {
                tfFinish.gameObject.SetActive(isfinish);
            }
            if (UILabelAvailable != null)
            {
                UILabelAvailable.gameObject.SetActive(isavaliable);
            }
            if (UILabelCounting != null)
            {
                UILabelCounting.gameObject.SetActive(isunavailble);
            }
            if (UIFinish != null)
            {
                UIFinish.gameObject.SetActive(isfinish);
            }
            if (m_GO != null)
            {
                Transform tf = m_GO.transform.Find("Reward01-BG/BG-Middle_canget");
                if (tf != null)
                {
                    tf.gameObject.SetActive(isavaliable);
                }
                tf = m_GO.transform.Find("Reward01-BG/BG-Middle_ing");
                if (tf != null)
                {
                    tf.gameObject.SetActive(isunavailble);
                }
                tf = m_GO.transform.Find("Reward01-BG/BG-Middle_finish");
                if (tf != null)
                {
                    tf.gameObject.SetActive(isfinish);
                }
                tf = m_GO.transform.Find("Clock/Clock-Available");
                if (tf != null)
                {
                    tf.gameObject.SetActive(isavaliable);
                }
                tf = m_GO.transform.Find("Clock/Clock-Counting");
                if (tf != null)
                {
                    tf.gameObject.SetActive(isunavailble);
                }
                tf = m_GO.transform.Find("Clock/Clock-Finished");
                if (tf != null)
                {
                    tf.gameObject.SetActive(isfinish);
                }
                tf = m_GO.transform.Find("Time/Time-Available");
                if (tf != null)
                {
                    tf.gameObject.SetActive(isavaliable);
                }
                tf = m_GO.transform.Find("Time/Time-Counting");
                if (tf != null)
                {
                    tf.gameObject.SetActive(isunavailble);
                }
                tf = m_GO.transform.Find("Time/Time-Finished");
                if (tf != null)
                {
                    tf.gameObject.SetActive(isfinish);
                }
            }
        }
        public void Clear()
        {
            GameObject go = m_GO;
            if (go != null)
            {
                tfAvailable = go.transform.Find("Reward01-Btn/Btn-Available");
                if (tfAvailable != null)
                {
                    UIEventListener.Get(tfAvailable.gameObject).onClick = null;
                }
                tfUnAvailable = go.transform.Find("Reward01-Btn/Btn-Unavailable");
                if (tfUnAvailable != null)
                {
                    UIEventListener.Get(tfUnAvailable.gameObject).onClick = null;
                }
                tfFinish = go.transform.Find("Reward01-Btn/Btn-Finished");
                if (tfFinish != null)
                {
                    UIEventListener.Get(tfFinish.gameObject).onClick = null;
                }
            }
        }
        private Transform tfAvailable = null;
        private Transform tfUnAvailable = null;
        private Transform tfFinish = null;
        public UILabel UILabelCounting = null;
        public UILabel UILabelAvailable = null;
        public UILabel UIFinish = null;
        public int Id = -1;
        private GameObject m_GO = null;
        private GetStatusType type = GetStatusType.None;
    }
}
