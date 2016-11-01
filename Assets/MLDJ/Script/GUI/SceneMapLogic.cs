using Games.Scene;
using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using System.Collections.Generic;
using Games.LogicObj;
using Module.Log;
using Games.GlobeDefine;

public class SceneMapLogic : MonoBehaviour 
{
	enum AUTO_SEARCH_TYPE
	{
		AUTO_SEARCH_TRANSMIT = 1,
		AUTO_SEARCH_MISSION = 2,
		AUTO_SEARCH_ENEMY = 3,
		AUTO_SEARCH_STORE = 4,
	}

    public enum FRIEND_NPC_TYPE
    {
        FRIEND_NPC_NORMAL,
        FRIEND_NPC_VILLAIN_GULDE,
    }
    class FriendNPCData
    {
        public string m_name;
        public Vector3 m_pos;
        public FRIEND_NPC_TYPE m_nType = FRIEND_NPC_TYPE.FRIEND_NPC_NORMAL;
    }

    private static SceneMapLogic m_Instance = null;
    public static SceneMapLogic Instance()
    {
        return m_Instance;
    }

    public UILabel m_SceneNameLabel;    //场景名称
    public UILabel m_ScenePosLablex;          //当前坐标点
    public UILabel m_ScenePosLabley;          //当前坐标点
    //public UISprite m_SceneMapSprite;
    public GameObject m_TransmitPointGrid;

    public UITexture m_TextureMap;
    public UITexture m_TextureRole;
    public GameObject m_ObjMapDot;
    public GameObject m_ObjMapNpc;
    public GameObject m_ObjMapNpcForVillain;
    public GameObject m_ObjMapBoss;
	public GameObject m_ObjEnemy;
	public GameObject m_ObjTransmit;
    public Transform m_MapRoot;
	public UILabel m_SceneName;

    public UISprite m_ClickEffectSprite;
    public Transform m_ClickEffectTran;
    public UIImageButton m_BtnChangeChannel;

    private int m_curSceneID = 1;
    private Tab_SceneClass m_curTabScene;
	private bool m_bLoadingItem = false;

    private static int m_curNPCListScene = -1;
    private static RecycleList<FriendNPCData> m_FriendNPCRecycleList = new RecycleList<FriendNPCData>();
	private List<Vector3> m_EnemyList = new List<Vector3>();
	private List<Vector3> m_TransmitList = new List<Vector3>();

    private List<Transform> m_ObjMapFriendDotList = new List<Transform>();

    void Awake()
    {
        m_Instance = this;
        
    }

    
    void OnDestroy()
    {
        m_Instance = null;
    }

    void Start()
    {
       
        m_curSceneID = GameManager.gameManager.RunningScene;

        //根据加载场景ID获取场景信息
        m_curTabScene = TableManager.GetSceneClassByID(m_curSceneID, 0);
        if (null == m_curTabScene)
        {
            LogModule.ErrorLog("current is not defined in table: " + m_curSceneID.ToString());
            return;
        }
		// 地图名字
		m_SceneName.text = m_curTabScene.Name;
        // 初始化NPC信息
        if (m_curNPCListScene != GameManager.gameManager.RunningScene)
        {
            m_FriendNPCRecycleList.Clear();
            Dictionary<int, List<Tab_SceneNpc>> curTabSceneNPCDic = TableManager.GetSceneNpc();
            foreach (KeyValuePair<int, List<Tab_SceneNpc>> curPair in curTabSceneNPCDic)
            {
                if (curPair.Value[0] != null && curPair.Value[0].SceneID == GameManager.gameManager.RunningScene)
                {
                    Tab_RoleBaseAttr curRoleBase = TableManager.GetRoleBaseAttrByID(curPair.Value[0].DataID, 0);
                    if ( curRoleBase != null && curRoleBase.Camp == 1)
                    {

                        Tab_NianShouNpcScence nianshounpcTab = TableManager.GetNianShouNpcScenceByID(GameManager.gameManager.RunningScene, 0);
                        if (nianshounpcTab != null)
                        {
                            if (curPair.Value[0].GroupID == VillainData.NianShouGroupID)
                            {
                                if (false == GlobalData.IsNianShouOpen())
                                {
                                    continue;
                                }
                            }
                        }

                        Tab_VillainScene VillainSceneTab = TableManager.GetVillainSceneByID(GameManager.gameManager.RunningScene, 0);
                        if (VillainSceneTab != null)
                        {
                            if (curPair.Value[0].GroupID == VillainData.NormalNpcGroupID || curPair.Value[0].GroupID == VillainData.SuperNpcGroupID)
                            {
                                //规则来来回回改变已经第四版,希望这是今年最终版了
                                FriendNPCData newVillainData = m_FriendNPCRecycleList.GetNewItem();
                                newVillainData.m_name = curRoleBase.Name;
                                newVillainData.m_nType = FRIEND_NPC_TYPE.FRIEND_NPC_VILLAIN_GULDE;
                                newVillainData.m_pos = new Vector3(curPair.Value[0].PosX, 0, curPair.Value[0].PosZ);
                                m_FriendNPCRecycleList.Add(newVillainData);
                                continue;                                                                                 
                            }
                        }
                        FriendNPCData newData = m_FriendNPCRecycleList.GetNewItem();
                        newData.m_name = curRoleBase.Name;
                        newData.m_nType = FRIEND_NPC_TYPE.FRIEND_NPC_NORMAL; 
                        newData.m_pos = new Vector3(curPair.Value[0].PosX, 0, curPair.Value[0].PosZ);
                        m_FriendNPCRecycleList.Add(newData);
                    }
                }
            }
            m_curNPCListScene = GameManager.gameManager.RunningScene;
        }

        for (int i = 0; i < m_FriendNPCRecycleList.UsingList().Count; i++)
        {
            if (m_FriendNPCRecycleList.UsingList()[i] != null)
            {
                GameObject newNPCDot = null;
                if (m_FriendNPCRecycleList.UsingList()[i].m_nType == FRIEND_NPC_TYPE.FRIEND_NPC_VILLAIN_GULDE)
                {
                    newNPCDot = GameObject.Instantiate(m_ObjMapNpcForVillain) as GameObject;
                }
                else if (m_FriendNPCRecycleList.UsingList()[i].m_nType == FRIEND_NPC_TYPE.FRIEND_NPC_NORMAL)
                {
                    newNPCDot = GameObject.Instantiate(m_ObjMapNpc) as GameObject;
                }
                if (null != newNPCDot)
                {
                    newNPCDot.transform.parent = m_MapRoot;
                    newNPCDot.transform.localScale = Vector3.one;
                    newNPCDot.transform.localPosition = ScenePosToMapPos(m_FriendNPCRecycleList.UsingList()[i].m_pos, m_curTabScene);
                    newNPCDot.SetActive(true);
                }
            }                              
        }

        for (int i = 0; i < GlobeVar.MAX_TEAM_MEMBER; i++)
        {
            GameObject newNPCDot = GameObject.Instantiate(m_ObjMapDot) as GameObject;
            if (null != newNPCDot)
            {
                newNPCDot.transform.parent = m_MapRoot;
                newNPCDot.transform.localScale = Vector3.one;
//                UITexture npcTexture = newNPCDot.GetComponent<UITexture>();
                m_ObjMapFriendDotList.Add(newNPCDot.transform);
            }
        }

        if (m_curSceneID == GameDefine_Globe.WORLDBOSS_SCENE_ID && WorldMapWindow.WorldBossOpen == 1)
        {
            m_ObjMapBoss.transform.localPosition = ScenePosToMapPos(new Vector3(GameDefine_Globe.WORLDBOSS_X,0,GameDefine_Globe.WORLDBOSS_Z), m_curTabScene);
            m_ObjMapBoss.SetActive(true);
        }
        
        ShowSceneInfo(m_curTabScene);

        if (GameManager.gameManager.ActiveScene.IsCopyScene())
        {
            m_BtnChangeChannel.isEnabled = false;
        }
        else
        {
            m_BtnChangeChannel.isEnabled = true;
        }

        StartCoroutine(UpdateTeamPos());
    }

    IEnumerator UpdateTeamPos()
    {
        while (true)
        {
            if (null != Singleton<ObjManager>.GetInstance().MainPlayer && null != m_curTabScene)
            {
                if (m_TextureMap.gameObject.activeSelf && null != m_curTabScene)
                {
                    m_TextureRole.transform.localPosition = ScenePosToMapPos(Singleton<ObjManager>.GetInstance().MainPlayer.transform.localPosition, m_curTabScene);
                }

                for (int i = 0; i < m_ObjMapFriendDotList.Count; i++)
                {
                    if (i < GameManager.gameManager.PlayerDataPool.TeamInfo.teamMember.Length)
                    {
                        ulong curGuid = GameManager.gameManager.PlayerDataPool.TeamInfo.teamMember[i].Guid;
                        if (Singleton<ObjManager>.GetInstance().MainPlayer.GUID != curGuid)
                        {
                            Obj_OtherPlayer curPlayer = Singleton<ObjManager>.GetInstance().FindOtherPlayerInScene(curGuid);
                            if (null != curPlayer)
                            {
                                m_ObjMapFriendDotList[i].localPosition = ScenePosToMapPos(curPlayer.transform.localPosition, m_curTabScene);
                                m_ObjMapFriendDotList[i].gameObject.SetActive(true);
                            }
                        }
                    }
                    else
                    {
                        m_ObjMapFriendDotList[i].gameObject.SetActive(false);
                    }
                }
            }

            yield return new WaitForSeconds(1.0f);
        }
        
    }
    void InitSceneTransmitPoint()
    {
		m_bLoadingItem = true;
        UIManager.LoadItem(UIInfo.SceneMapTransmitPoint, OnLoadTransmitPoint);
    }

    void OnLoadTransmitPoint(GameObject resObj, object param)
    {
		m_EnemyList.Clear();
		m_TransmitList.Clear();

        if (null == resObj)
        {
            LogModule.ErrorLog("loas  transmit point error");
            return;
        }
        List<Tab_AutoSearch> tableList = TableManager.GetAutoSearchByID(m_curSceneID);
        if (null != tableList)
        {
			for (int nIndex = 0; nIndex < tableList.Count; ++nIndex)
            {
                Tab_AutoSearch autoSearchInfo = tableList[nIndex];
                if (null != autoSearchInfo)
                {
					if(autoSearchInfo.Type == (int)AUTO_SEARCH_TYPE.AUTO_SEARCH_ENEMY)
					{
						m_EnemyList.Add(new Vector3(autoSearchInfo.X,0f,autoSearchInfo.Z));
					}
					else if(autoSearchInfo.Type == (int)AUTO_SEARCH_TYPE.AUTO_SEARCH_TRANSMIT)
					{
						m_TransmitList.Add(new Vector3(autoSearchInfo.X,0f,autoSearchInfo.Z));
					}
                    GameObject newTransmitPoint = Utils.BindObjToParent(resObj, m_TransmitPointGrid, "TransmitPoint" + nIndex.ToString());
                    if (null != newTransmitPoint && null != newTransmitPoint.GetComponent<AutoSearchPointLogic>())
                        newTransmitPoint.GetComponent<AutoSearchPointLogic>().CreateAutoSearchPointInfo(autoSearchInfo);
                }
            }
        }

        m_TransmitPointGrid.GetComponent<UIGrid>().Reposition();
		m_bLoadingItem = false;
		ShowEnemy();
		ShowTransmit();
    }

    
    
    public void CloseWindow()
    {
		if(m_bLoadingItem)
		{
			return;
		}
        UIManager.CloseUI(UIInfo.SceneMapRoot);
    }

    void GoToMainCity()
    {
    }

    void ShowOtherPlayers()
    {
		//Open RelationLogic Window and switch to NearByPlayer Frame
		if (null == RelationLogic.Instance()) 
		{
			UIManager.ShowUI(UIInfo.RelationRoot);
			//If Show UI Success
			if (null != RelationLogic.Instance())
			{
				RelationLogic.Instance().OpenNearByPlayerFrame();
				CloseWindow();
			}
		}
    }

    void OnWorldMapClick()
    {
        UIManager.CloseUI(UIInfo.SceneMapRoot);
        UIManager.ShowUI(UIInfo.WorldMapWindow);
    }

   

    public void ShowSceneInfo(Tab_SceneClass curTabScene)
    {
        if (curTabScene != null)
        {
            m_SceneNameLabel.text = curTabScene.Name;
            //m_SceneNameLabel.color = SceneData.GetSceneNameColor(curTabScene.SceneID);

            Texture curTexture = ResourceManager.LoadResource(curTabScene.SceneMapTexture, typeof(Texture)) as Texture;
            if (null != curTexture)
            {
                m_TextureMap.mainTexture = curTexture;
                m_TextureMap.gameObject.SetActive(true);
            }
            
        }

        // m_SceneMapSprite.spriteName = "shop01";
        //m_SceneMapSprite.MakePixelPerfect();

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer != null)
        {
            //m_ScenePosLable.text = StrDictionary.GetClientDictionaryString("#{1185}", (int)(_mainPlayer.gameObject.transform.position.x), (int)(_mainPlayer.gameObject.transform.position.z));
            Vector3 curPos = _mainPlayer.gameObject.transform.position;
            int x = (int)curPos.x;
            int y = (int)curPos.z;
            m_ScenePosLablex.text = x.ToString();
            m_ScenePosLabley.text = y.ToString();

            if(m_TextureMap.gameObject.activeSelf && null != curTabScene)
            {
                m_TextureRole.transform.localPosition = ScenePosToMapPos(_mainPlayer.transform.localPosition, curTabScene);
            }
           
        }

        Utils.CleanGrid(m_TransmitPointGrid);

        InitSceneTransmitPoint();
	
    }

    void OnChangeChannelClick()
    {
        Tab_SceneClass curTabScene = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
        if (null == curTabScene)
        {
            return;
        }

        if (curTabScene.Type == 2)
        {
            // 副本不允许切线
            return;
        }

		UIManager.ShowUI(UIInfo.ChannelChange);
    }

    Vector3 ScenePosToMapPos(Vector3 scenePos, Tab_SceneClass curTabScene)
    {
        float posScale = (float)m_TextureMap.width / curTabScene.SceneMapLogicWidth;
        float curXPos = scenePos.x * posScale - m_TextureMap.width * 0.5f;
        float curYPos = scenePos.z * posScale - m_TextureMap.height * 0.5f;
        return new Vector3(curXPos, curYPos, 0);
    }

    Vector3 MapPosToScenePos(Vector3 mapPos, Tab_SceneClass curTabScene)
    {
        float posScale = (float)m_TextureMap.width / curTabScene.SceneMapLogicWidth;
        float curXPos = (mapPos.x + m_TextureMap.width * 0.5f) / posScale;
        float curYPos = (mapPos.y + m_TextureMap.height * 0.5f) / posScale;
        return new Vector3(curXPos, 0, curYPos);
    }

    void OnSceneMapClick()
    {
        Vector3 worldPos = UICamera.currentCamera.ScreenToWorldPoint(UICamera.lastTouchPosition);
        Vector3 localPos = m_TextureMap.transform.InverseTransformPoint(worldPos);
        Vector3 mapPos = MapPosToScenePos(localPos, m_curTabScene);

        AutoSearchPoint point = new AutoSearchPoint(m_curSceneID, mapPos.x, mapPos.z);
        if (GameManager.gameManager && GameManager.gameManager.AutoSearch)
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                //验证导航是否可达，如果不可达，不进行移动
                Vector3 testVec = new Vector3(point.PosX, 0, point.PosZ);
                testVec = ActiveScene.GetTerrainPosition(testVec);
                if (!Singleton<ObjManager>.GetInstance().MainPlayer.IsMoveNavAgent(testVec))
                {
                    return;
                }
            }

            GameManager.gameManager.AutoSearch.ProcessAutoSearch(point);
        }

        if (m_ClickEffectSprite != null && m_ClickEffectTran != null)
        {
            m_ClickEffectTran.localPosition = localPos;
            m_ClickEffectSprite.gameObject.SetActive(true);
        }
        else
        {
            LogModule.ErrorLog("OnSceneMapClick::m_ClickEffectSprite = null || m_ClickEffectTran = null");
        }
    }

    public void StopPlayClickEffect()
    {
        if (m_ClickEffectSprite != null)
        {
            m_ClickEffectSprite.gameObject.SetActive(false);
        }
    }

    void OnEnable()
    {
        if (m_ClickEffectSprite != null)
        {
            m_ClickEffectSprite.gameObject.SetActive(false);
        }
    }

	void ShowEnemy()
	{
		for (int i = 0; i < m_EnemyList.Count; i++)
		{
			if (m_EnemyList[i] != null)
			{
				GameObject newEnemyDot = null;
				newEnemyDot = GameObject.Instantiate(m_ObjEnemy) as GameObject;
				if (null != newEnemyDot)
				{
					newEnemyDot.transform.parent = m_MapRoot;
					newEnemyDot.transform.localScale = Vector3.one;
					newEnemyDot.transform.localPosition = ScenePosToMapPos(m_EnemyList[i], m_curTabScene);
					newEnemyDot.SetActive(true);
				}
			}                              
		}
	}

	void ShowTransmit()
	{
		for (int i = 0; i < m_TransmitList.Count; i++)
		{
			if (m_TransmitList[i] != null)
			{
				GameObject newTransmitDot = null;
				newTransmitDot = GameObject.Instantiate(m_ObjTransmit) as GameObject;
				if (null != newTransmitDot)
				{
					newTransmitDot.transform.parent = m_MapRoot;
					newTransmitDot.transform.localScale = Vector3.one;
					newTransmitDot.transform.localPosition = ScenePosToMapPos(m_TransmitList[i], m_curTabScene);
					newTransmitDot.SetActive(true);
				}
			}                              
		}
	}
}
