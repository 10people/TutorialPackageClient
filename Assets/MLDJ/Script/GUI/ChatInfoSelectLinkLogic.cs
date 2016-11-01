
using UnityEngine;
using System.Collections;
using GCGame;
using System.Collections.Generic;
using Games.GlobeDefine;
using GCGame.Table;
using Games.Mission;
using Games.Fellow;
using System;
using Games.Item;
using Games.ChatHistory;

public class ChatInfoSelectLinkLogic : MonoBehaviour
{
    public int m_select = 0;

    //     public GameObject m_emotionBtn;
    //     public GameObject m_missionBtn;
    //     public GameObject m_comItemBtn;
    //     public GameObject m_fellowBtn;
    //     public GameObject m_historyBtn;


    //     public UISprite m_emotionSpr;
    //     public UISprite m_missionSpr;
    //     public UISprite m_comItemSpr;
    //     public UISprite m_fellowSpr;
    //     public UISprite m_historySpr;

    public UIGrid m_leftTabGrid;
	public UIScrollBar m_scrollBar;
	public UISprite m_scrollCon;

    //     public GameObject m_emotionGrid;
    //     public GameObject m_missionGrid;
    //     public GameObject m_commItemGrid;
    //     public GameObject m_fellowGrid;
    //     public GameObject m_historyGrid;

    private const int TAB_GRID_COUNT = 5;
    private  string[] TAB_NORMALS = {"biaoqingBtnnormal","Renwu","zhuangbei_1","petBtn","lishiBtn"};
    private  string[] TAB_PRESSEDS = {"biaoqingBtnlight","Renwulight","zhuangbei_2","petBtnLight","Lishilight"};

    //     public GameObject m_emotionItem;
    //     public GameObject m_missionItem;
    //     public GameObject m_commonItem;
    //     public GameObject m_fellowItem;
    //     public GameObject m_historyItem;

    public List<GameObject> m_tabBtnList;
    public List<UISprite> m_tabSprList;
    public List<UIGrid> m_gridList;
    public List<GameObject> m_itemList;
    // public List<ChatInfoSelectLinkItemLogic> m_itemLogicList;

    private const int FastReplyMaxNum = 9;
    private const int MaxMissionNum = 9;

    public const int MAX_COMMONITEM_COUNT = 22;
    public struct Data
    {
        public int id;
        public UInt64 guid;
        public GameItem item;
        public ChatHistoryItem historyItem;
        public Data(int id = -1, UInt64 guid = 0, GameItem item = null, ChatHistoryItem historyItem = new ChatHistoryItem())
        {
            this.id = id;
            this.guid = guid;
            this.item = item;
            this.historyItem = historyItem;
        }




    }
    private List<List<Data>> m_dataList = null;

    //宠物不同的打开方式，获得的数据会不一样定义一个枚举值吧
    public enum OPEN_TYPE
    {
        NORMAL = 0,
        PROPAGATE = 1,
    }
    public static OPEN_TYPE M_OPEN_TYPE = OPEN_TYPE.NORMAL;

    private static ChatInfoSelectLinkLogic m_instance = null;
    public static ChatInfoSelectLinkLogic Instance()
    {
        return m_instance;
    }
    void Awake()
    {
        m_instance = this;
        if (m_dataList == null)
        {
            m_dataList = new List<List<Data>>();
        }
    }
    // Use this for initialization
    void Start()
    {
//         M_OPEN_TYPE = OPEN_TYPE.NORMAL;
//         Init();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnEnable()
    {
        Init();
    }
    private void Init()
    {
        
        for (int i = 0; i < m_gridList.Count; i++)
        {
            Utils.CleanGrid(m_gridList[i].gameObject);
        }


        for (int i = 0; i < m_tabBtnList.Count; i++)
        {
            m_tabBtnList[i].name = i.ToString();
        }
        m_leftTabGrid.Reposition(true);

        m_select = 0;

        for (int i = 0; i < m_tabSprList.Count; i++)
        {
            m_tabSprList[i].spriteName = i == m_select ? TAB_PRESSEDS[i] : TAB_NORMALS[i];
        }

        if (m_tabBtnList.Count <= 0)
            return;


        List<Data> itemDataS = new List<Data>();
        itemDataS.Clear();

        m_dataList = new List<List<Data>>();
        m_dataList.Clear();

        for (int i = 0; i < m_gridList.Count; i++)
        {
            m_dataList.Add(itemDataS);
        }

        int index = 0;
        if (M_OPEN_TYPE == OPEN_TYPE.NORMAL)
        {
            index = 0;
        }
        else if (M_OPEN_TYPE == OPEN_TYPE.PROPAGATE)
        {
            index = 3;
        }

        OnClickTab(m_tabBtnList[index]);
    }


    public void FillUpAllDataList()
    {
        if (m_dataList.Count != 5)
        {
            return;
        }
        m_dataList[0] = GetDataListEmotion_0();
        m_dataList[1] = GetDataListMission_1();
        m_dataList[2] = GetDataListCommonItem_2();
        m_dataList[3] = GetDataListFellow_3();
        m_dataList[4] = GetDataListHistory_4();
    }

    private List<Data> GetDataListEmotion_0()
    {
        List<Data> res = new List<Data>();
        res.Clear();
        for (int i = 0; i < GlobeVar.EmotionTiger_Num; i++)
        {
            Data data = new Data();
            data.id = i;
            res.Add(data);
        }
        return res;
    }

    private List<Data> GetDataListMission_1()
    {
        List<Data> res = new List<Data>();

		List<int> MissionList = GameManager.gameManager.MissionManager.GetCanAcceptedMissionIDInScene(MaxMissionNum);

        //也是只显示前9个任务
        for (int i = 0; i < MissionList.Count; i++)
        {
            Tab_MissionBase MisBase = TableManager.GetMissionBaseByID(MissionList[i], 0);
            if (MisBase == null)
            {
                continue;
            }

            // 日常任务不显示
            //             if (MisBase.MissionType == (int)MISSIONTYPE.MISSION_DAILY
            //                 || MisBase.MissionType == (int)MISSIONTYPE.MISSION_GUILD)
            //             {
            //                 //DailyMissionBonusInfo(MisBase);
            //                 continue;
            //             }
            Data data = new Data();
            data.id = MissionList[i];
            res.Add(data);
        }

        // 创建LogItem
        List<int> nMissionIDList = GameManager.gameManager.MissionManager.GetAllNotDailyMissionList();

        //同样加了 9 个限制，已级日常任务，和帮会任务的不显示
        for (int i = 0; i < MaxMissionNum && i < nMissionIDList.Count; i++)
        {
            // 日常任务 不显示在日志上 // 帮会任务 不显示
            Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionIDList[i], 0);
            //             if (null == MissionBase || MissionBase.MissionType == (int)MISSIONTYPE.MISSION_DAILY
            //                 || MissionBase.MissionType == (int)MISSIONTYPE.MISSION_GUILD)
            //             {
            //                 continue;
            //             }
            if (null == MissionBase)
                continue;
            Data data = new Data();
            data.id = nMissionIDList[i];
            res.Add(data);
        }
        return res;
    }

    private List<Data> GetDataListCommonItem_2()
    {
        List<Data> res = new List<Data>();

        GameItemContainer EquipPack = GameManager.gameManager.PlayerDataPool.EquipPack;
        for (int index = 0; index < EquipPack.ContainerSize; ++index)
        {
            GameItem equip = EquipPack.GetItem(BackPackLogic.GetEquipSlotByIndex(index));
            if (equip != null && equip.IsValid())
            {
                Data data = new Data();
                data.item = equip;
                res.Add(data);
            }
        }


        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        List<GameItem> itemall = ItemTool.ItemFilter(BackPack, 0, 0, false);
        for (int nIndex = 0; nIndex < GameItemContainer.MAXSIZE_BACKPACK; ++nIndex)
        {
            if (nIndex < BackPack.ContainerSize && nIndex < itemall.Count)
            {
                Data data = new Data();
                data.item = itemall[nIndex];
                res.Add(data);
            }
        }

        //道具显示比较特殊，22组为一个Item

//         int itemCount = MAX_COMMONITEM_COUNT;
//         int pageCount = 0;
//         if (res.Count % itemCount == 0)
//         {
//             pageCount = res.Count / itemCount;
//         }
//         else
//         {
//             pageCount = res.Count / itemCount + 1;
//         }
// 
//         res.Clear();
// 
//         //看有多少页的数据
//         for (int i = 0; i < pageCount; i++)
//         {
//             Data data = new Data();
//             res.Add(data);
//         }

        return res;
    }

    private List<Data> GetDataListFellow_3()
    {
        List<Data> res = new List<Data>();

        FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container == null)
        {
            return res;
        }

        List<Fellow> babylist = new List<Fellow>();
//        int nFellowCount = container.GetFellowCount();
        List<Fellow> fellowList = FellowTool.FellowSort(container);
        if (M_OPEN_TYPE == OPEN_TYPE.NORMAL)
        {
            
             for (int i = 0; i < fellowList.Count; ++i)
             {
                 //有效槽位
                 Fellow fellow = fellowList[i];
                 if (fellow.IsValid())
                 {
                     babylist.Add(fellow);
                 }
             }
                
        }
        else if(M_OPEN_TYPE == OPEN_TYPE.PROPAGATE)
        {
            babylist = FellowTool.FellowCanBreedingFilter(container);
        }
         

        if (babylist.Count <= 0)
        {
            return res;
        }

        for (int i = 0; i < babylist.Count; i++)
        {
            Data data = new Data();
            data.guid = babylist[i].Guid;
            res.Add(data);
        }
        return res;
    }

    private List<Data> GetDataListHistory_4()
    {
        List<Data> res = new List<Data>();

        List<ChatHistoryItem> listPlayerReplyHistory = GameManager.gameManager.PlayerDataPool.ChatHistory.ReplyHistoryList;
        for (int i = listPlayerReplyHistory.Count - 1, j = 0; i >= 0 && j < FastReplyMaxNum; i--, j++) {
          string str = System.Text.RegularExpressions.Regex.Replace(listPlayerReplyHistory[i].ChatInfo, @"\[em=\d{1,2}\]|<a>|</a>", "");
          if (!string.IsNullOrEmpty(str)) {
            Data data = new Data();
            data.historyItem = listPlayerReplyHistory[i];
            data.historyItem.ChatInfo = str;
			if((int)(data.historyItem.ELinkType[0])==0)//wjf 历史记录屏蔽可以链接的类
            	res.Add(data);
          }
        }
        return res;
    }

    public void OnClickTab(GameObject obj)
    {
        int selectItem = 0;
        if (!int.TryParse(obj.name, out selectItem))
        {
            return;
        }
        m_select = selectItem;
        ChangeTabBtnState(selectItem);
        ChangeGridState(selectItem);

        //fill up all data list
        FillUpAllDataList();
        FillUpGridByIndex(selectItem);
		m_scrollBar.enabled = true;
		m_scrollBar.value = 0f;
    }

    private void ChangeTabBtnState(int curIndex)
    {
        for (int i = 0; i < m_tabSprList.Count; i++)
        {
            m_tabSprList[i].spriteName = i == curIndex ? TAB_PRESSEDS[i] : TAB_NORMALS[i];
        }
    }

    private void ChangeGridState(int curIndex)
    {
        for (int i = 0; i < m_gridList.Count; i++)
        {
            m_gridList[i].gameObject.SetActive(i == curIndex);
        }
    }

    public void FillUpGridByIndex(int curIndex)
    {
        if (curIndex < 0 || curIndex >= m_gridList.Count
                         || curIndex >= m_dataList.Count
                         || curIndex >= m_itemList.Count
                         )
        {
            return;
        }

        List<Data> curData = m_dataList[curIndex];
        Utils.CleanGrid(m_gridList[curIndex].gameObject);

        for (int i = 0; i < curData.Count; i++)
        {
            GameObject objItem = Utils.BindObjToParent(m_itemList[curIndex], m_gridList[curIndex].gameObject, i.ToString());
            ChatInfoSelectLinkItemLogic itemLogic = objItem.GetComponent<ChatInfoSelectLinkItemLogic>();
            itemLogic.Init(curData[i], i);
        }

        m_gridList[curIndex].Reposition(true);
    }

}
