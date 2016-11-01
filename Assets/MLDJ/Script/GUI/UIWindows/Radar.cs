/********************************************************************
	created:	2014/02/27
	created:	27:2:2014   9:45
	filename: 	Radar.cs
	file base:	Radar
	author:		王迪
	
	purpose:    雷达小地图
*********************************************************************/
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using System.Collections.Generic;
using GCGame.Table;
using Games.GlobeDefine;
using Module.Log;
public class Radar : MonoBehaviour
{
    private float m_mapTexWidth = 735;      // 地图图片宽度
    private float m_mapTexHeight = 735;     // 地图图片高
    //private float m_mapRealWidth = 42;      // 图片宽度对应的逻辑宽度

    private float MapScreenHalfWidth = 68;  // 显示区域宽度的一半
    private float MapScreenHalfHeight = 53; // 显示区域高度的一半

    public float UPDATE_DELAY = 0.5f;       // 更新延迟

    public GameObject   MapClip;
    public GameObject   ObjArrow;       // 主角箭头
	public GameObject   FriendPoint;		//Friend Unit Radar Point, Never show up, just for Instance 
	public GameObject	  NeutralPoint;	//Neutral Unit Radar Point, Never show up, just for Instance 
	public GameObject	  EnemyPoint;	//Enemy Unit Radar Point, Never show up, just for Instance 
	public GameObject	  OtherPoint;	    //Other Unit Radar Point, Never show up, just for Instance 
	public UILabel      LabelPos;       // 位置信息Label
	public GameObject   TexTarget;      // 寻路目标位置提示图片
    public UILabel      LabelSceneName; // 当前场景名
    public UILabel      LabelChannel;   // 当前频道
    public UIPanel      PanelMapClip;
    private Vector3 arrowPos    = Vector3.zero;     
    private Vector3 arrowRot    = Vector3.zero;
    private Vector3 mapPos      = Vector3.zero;  

	private  List<UISprite> TexListFriend     = new List<UISprite>();
	private  List<UISprite> TexListNeutral    = new List<UISprite>();
	private  List<UISprite> TexListEnemy      = new List<UISprite>();
	private  List<UISprite> TexListOther      = new List<UISprite>();

    private float m_scale = 1.0f;     // 当前地图与实际地形比例
    private bool m_bLoadMap = false;
    
	// 折叠小地图相关
	public TweenPosition m_RadarTweenPos;
	private bool m_RadarFold = false;                // ControlButton控制的折叠状态 默认不折叠

    void Start()
    {
        ObjArrow.SetActive(false);
        m_bLoadMap = false;
        Tab_SceneClass curScene = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
        if (null == curScene)
        {
            LogModule.ErrorLog("load scene map table fail :" + GameManager.gameManager.RunningScene);
            return;
        }

        LabelSceneName.color = SceneData.GetSceneNameColor(GameManager.gameManager.RunningScene);
        LabelSceneName.text = curScene.Name;
        if (curScene.SceneID == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI)
        {
            int tier = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_TIER);
            //Tab_CangJingGeInfo cjg = TableManager.GetCangJingGeInfoByID(tier,0);
            LabelSceneName.text = StrDictionary.GetClientDictionaryString("#{2221}", tier);
        }

        m_mapTexWidth = curScene.SceneMapWidth;
        m_mapTexHeight = curScene.SceneMapHeight;
        if (curScene.SceneMapLogicWidth == 0)
        {
            LogModule.ErrorLog("load scene with is 0 :" + curScene.SceneMapTexture);
            return;
        }
        m_scale = m_mapTexWidth / curScene.SceneMapLogicWidth;
        Texture curTexture = ResourceManager.LoadResource(curScene.SceneMapTexture, typeof(Texture)) as Texture;
        if (null == curTexture)
        {
            LogModule.ErrorLog("load scene map fail :" + curScene.SceneMapTexture);
        }
        else
        {
            MapScreenHalfHeight = PanelMapClip.clipRange.w * 0.5f;
            MapScreenHalfWidth = PanelMapClip.clipRange.z * 0.5f;
            MapClip.GetComponent<UITexture>().mainTexture = curTexture;
            MapClip.GetComponent<UITexture>().width = (int)m_mapTexWidth;
            MapClip.GetComponent<UITexture>().height = (int)m_mapTexHeight;
            MapClip.GetComponent<UITexture>().pivot = UIWidget.Pivot.BottomLeft;
        }

        ObjArrow.SetActive(true);
       
        LabelChannel.text = StrDictionary.GetClientDictionaryString("{#1177}", SceneData.SceneInst + 1);
        m_bLoadMap = true;

        InvokeRepeating("UpdateMap", 0, UPDATE_DELAY);

		InitRadarControl(PlayerPreferenceData.RadarControl);
    }
    
    void UpdateMap()
    {
        if (!m_bLoadMap)
        {
            return;
        }

        Obj_MainPlayer curPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == curPlayer)
        {
            return;
        }

        arrowPos = GetMapPos(curPlayer.transform.position);
        ObjArrow.transform.localPosition = arrowPos;

        arrowRot.z = -curPlayer.transform.localRotation.eulerAngles.y;
        ObjArrow.transform.rotation = Quaternion.Euler(arrowRot);

        mapPos.x = Mathf.Min(-MapScreenHalfWidth, Mathf.Max(-arrowPos.x, MapScreenHalfWidth - m_mapTexWidth));
        mapPos.y = Mathf.Min(-MapScreenHalfHeight, Mathf.Max(-arrowPos.y, MapScreenHalfHeight - m_mapTexHeight));
        MapClip.transform.localPosition = mapPos;

		if(null != LabelPos)
		{
			LabelPos.text =((int)curPlayer.transform.position.x).ToString() + ", " + ((int)curPlayer.transform.position.z).ToString();
		}

		if (GameManager.gameManager && GameManager.gameManager.AutoSearch && GameManager.gameManager.AutoSearch.IsAutoSearching)
		{
			AutoSearchPath path = GameManager.gameManager.AutoSearch.Path;
			if(path.AutoSearchPosCache.Count > 0 )
			{
				AutoSearchPoint lastPoint = path.AutoSearchPosCache[path.AutoSearchPosCache.Count-1];
				if(lastPoint.SceneID == GameManager.gameManager.RunningScene)
				{
					TexTarget.transform.localPosition = GetMapPos(lastPoint.PosX, lastPoint.PosZ);
				}
			}           
		}
		else
		{
			TexTarget.transform.localPosition = GetMapPos(100000, 10000);
		}

        

        int curFriendCount = 0;
        int curNeutralCount = 0;
        int curEnemyCount = 0;
        int curOtherCount = 0;
        foreach (Obj curObj in Singleton<ObjManager>.GetInstance().ObjPools.Values)
        {
            //MainPlayer在前面设置过位置，伙伴不显示，所以这两个排除
            if (curObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER || curObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_FELLOW)
            {
                continue;
            }

            //只显示如下三种类型
            if (curObj.ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_CHARACTER &&
                curObj.ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC &&
                curObj.ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                continue;
            }

            Obj_Character curChar = curObj as Obj_Character;
            if (null == curChar)
            {
                continue;
            }

			if (curObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
			{
				if (Singleton<ObjManager>.GetInstance().DeleteNPCList != null)
				{	
					if ( Singleton<ObjManager>.GetInstance().DeleteNPCList.ContainsKey( curObj.ServerID.ToString() ) )
					{
						continue;
					}
				}
			}

			float xPosDiff = curChar.transform.localPosition.x - curPlayer.transform.localPosition.x;
			float yPosDiff = curChar.transform.localPosition.z - curPlayer.transform.localPosition.z;

            if (Mathf.Abs(xPosDiff) * m_scale > MapScreenHalfWidth || Mathf.Abs(yPosDiff) * m_scale > MapScreenHalfHeight)
			{
				continue;
			}

            CharacterDefine.REPUTATION_TYPE type = Reputation.GetObjReputionType(curChar);
            if (CharacterDefine.REPUTATION_TYPE.REPUTATION_FRIEND == type)
            {
                AddDotToList(TexListFriend, curFriendCount, FriendPoint, curObj.gameObject, CharacterDefine.NPC_COLOR_FRIEND);
                curFriendCount++;
            }
            else if (CharacterDefine.REPUTATION_TYPE.REPUTATION_NEUTRAL == type)
            {
                AddDotToList(TexListNeutral, curNeutralCount, NeutralPoint, curObj.gameObject, CharacterDefine.NPC_COLOR_NEUTRAL);
                curNeutralCount++;
            }
            else if (CharacterDefine.REPUTATION_TYPE.REPUTATION_HOSTILE == type)
            {
                AddDotToList(TexListEnemy, curEnemyCount, EnemyPoint, curObj.gameObject, CharacterDefine.NPC_COLOR_ENEMY);
                curEnemyCount++;
            }
            else
            {
                AddDotToList(TexListOther, curOtherCount, OtherPoint, curObj.gameObject, Color.white);
                curOtherCount++;
            }
        }

		DeActiveList(curFriendCount, TexListFriend, arrowPos);
		DeActiveList(curNeutralCount, TexListNeutral,arrowPos);
		DeActiveList(curEnemyCount, TexListEnemy,arrowPos);
		DeActiveList(curOtherCount, TexListOther,arrowPos);
        
    }

    // 将小点加入缓存列表
    void AddDotToList(List<UISprite> curList,  int curIndex, GameObject instanceObj,  GameObject curShowObj, Color color)
    {
        if (curIndex >= curList.Count)
        {
			GameObject newObj = CreateRadarPoint(instanceObj, curShowObj.transform.localPosition);
			if (null == newObj)
				return;

			UISprite sprite = newObj.GetComponent<UISprite>();
//			GameObject newObj = CreateTexture(color, curShowObj.transform.localPosition);
			if (null != sprite)
				curList.Add(sprite);
        }
        else
        {
			//            curList[curIndex].SetActive(true);
			curList[curIndex].color = Color.white;
            curList[curIndex].gameObject.transform.localPosition = GetMapPos(curShowObj.transform.localPosition);
        }
    }

    // 逻辑位置转换地图位置
    Vector3 GetMapPos(Vector3 curPos)
    {
		return GetMapPos(curPos.x, curPos.z);
	}

    // 逻辑位置转换地图位置
	Vector3 GetMapPos(float xPos, float zPos)
	{
			Vector3 tempPos = Vector3.zero;
			tempPos.x = xPos * m_scale;
			tempPos.y = zPos * m_scale;
			return tempPos;
	}

	// Create a Radar Point
	GameObject CreateRadarPoint(GameObject obj, Vector3 targetPos)
	{
		if (null == obj)
			return null;

		GameObject newObj = (GameObject)GameObject.Instantiate(obj);
		if (null == newObj)
			return null;

		newObj.transform.parent = MapClip.transform;
		newObj.transform.localScale = Vector3.one;
		newObj.transform.localPosition = GetMapPos(targetPos);
		newObj.layer = MapClip.layer;
		newObj.SetActive(true);

		return newObj;
	}
	
    // 将不用的小点隐藏
    void DeActiveList(int useCount, List<UISprite> curList, Vector3 centerPos)
    {
        Vector3 finalPos = centerPos;
        for (int i = useCount; i < curList.Count; i++)
        {
            if (curList[i].color != GlobeVar.TRANSPARENT_COLOR)
            {
                finalPos.x = centerPos.x - MapScreenHalfWidth / 2 + Random.Range(0, MapScreenHalfWidth);
                finalPos.y = centerPos.y - MapScreenHalfHeight / 2 + Random.Range(0, MapScreenHalfHeight);
                curList[i].color = GlobeVar.TRANSPARENT_COLOR;
                curList[i].transform.localPosition = finalPos;
            }
        }
    }

	void RadarControlClick()
	{
		if (PlayerPreferenceData.RadarControl == 1)
		{
			PlayerPreferenceData.RadarControl = 0;
			GameManager.gameManager.SoundManager.PlaySoundEffect(128);
			return;
		}
		else
		{
			PlayerPreferenceData.RadarControl = 1;
			GameManager.gameManager.SoundManager.PlaySoundEffect(8);
			return;
		}
	}

	void InitRadarControl(int nControl)
	{
		if( m_RadarTweenPos == null )
			return;

		m_RadarTweenPos.Reset();
		
		// 以折叠状态初始化
		if (nControl == 1)
		{
			m_RadarFold = true;
			
			m_RadarTweenPos.from = new Vector3(-16, -178, 0);
			m_RadarTweenPos.to = new Vector3(-254, -178, 0);
		}
		// 以展开状态初始化
		else
		{
			m_RadarFold = false;
			
			m_RadarTweenPos.from = new Vector3(-254, -178, 0);
			m_RadarTweenPos.to = new Vector3(-16, -178, 0);
		}
		
		m_RadarTweenPos.gameObject.transform.localPosition = m_RadarTweenPos.from;
	}

}