/********************************************************************
	created:	2014/02/17
	created:	17:2:2014   9:57
	filename: 	UIManager.cs
	author:		王迪
	
	purpose:	UIRoot下的UI管理器，创建不同的根节点来控制不同功能的UI
 *              删除UI禁止使用Destroy 必须使用DestroyUI，否则可能引起内存无线增长
*********************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Module.Log;
using System;
using Games.GlobeDefine;
public class UIManager : MonoBehaviour
{
    //private static int m_sCloseUICount = 0;

    public delegate void OnOpenUIDelegate(bool bSuccess, object param);
    public delegate void OnLoadUIItemDelegate(GameObject resItem, object param1);

    private Transform BaseUIRoot;      // 位于UI最底层，常驻场景，基础交互
    private Transform PopUIRoot;       // 位于UI上层，弹出式，互斥
    private Transform StoryUIRoot;     // 故事背景层
    private Transform TipUIRoot;       // 位于UI顶层，弹出重要提示信息等
    private Transform MenuPopUIRoot;
    private Transform MessageUIRoot;
    private Transform DeathUIRoot;

    private Dictionary<string, GameObject> m_dicTipUI = new Dictionary<string, GameObject>();
    private Dictionary<string, GameObject> m_dicBaseUI = new Dictionary<string, GameObject>();
    private Dictionary<string, GameObject> m_dicPopUI = new Dictionary<string, GameObject>();
    private Dictionary<string, GameObject> m_dicStoryUI = new Dictionary<string, GameObject>();
    private Dictionary<string, GameObject> m_dicMenuPopUI = new Dictionary<string, GameObject>();
    private Dictionary<string, GameObject> m_dicMessageUI = new Dictionary<string, GameObject>();
    private Dictionary<string, GameObject> m_dicDeathUI = new Dictionary<string, GameObject>();
    private Dictionary<string, GameObject> m_dicCacheUI = new Dictionary<string, GameObject>();

    private Dictionary<string, int> m_dicWaitLoad = new Dictionary<string, int>();
    //private static string[] m_MenuBarPopUI = { "RoleView", "PartnerAndMountRoot", "MissionLogRoot", "RelationRoot", "BelleController", "BackPackRoot", "EquipStrengthenRoot", "SkillRoot" };

    //Android 
#if UNITY_ANDROID
    public bool m_IsGC = false;
    public GameObject m_MissionItemPrefab = null; //Mission Prefab
    //public static GameObject m_StaicMission = null;

    public Dictionary<string, GameObject> m_PrefabList = new Dictionary<string, GameObject>();
    public List<string>  m_PrefabNameList = new List<string>();

    // android平台下回退键所需关闭的弹窗
    private List<UIPathData> m_UIOpenedList = new List<UIPathData>();
#endif

    private static UIManager m_instance;
    public static UIManager Instance()
    {
        return m_instance;
    }

    //private static bool m_GCTimerGo = false;
    //private static float m_GCWaitTime = GlobeVar.INVALID_ID;
    private const int GCCollectTime = 1;
#if UNITY_WP8
    private static bool m_UnloadBundle = false;
    private static bool m_UnloadItemBundle = false;
    private static List<string> m_itemBundleNameList = new List<string>();
#endif

    void Awake()
    {

#if UNITY_ANDROID

        m_IsGC = false;

        if (m_PrefabNameList == null)
        {
            m_PrefabNameList = new List<string>();
        }
        m_PrefabNameList.Clear();

        m_PrefabNameList.Add("NewItemGetRoot");
        m_PrefabNameList.Add("LevelUpTip");
        m_PrefabNameList.Add("EquipRemindRoot");
        m_PrefabNameList.Add("PowerRemindRoot");
        m_PrefabNameList.Add("StoryDialogRoot");
        m_PrefabNameList.Add("MissionInfoRoot");

        if (m_PrefabList == null)
        {
            m_PrefabList = new Dictionary<string, GameObject>();
        }
        m_PrefabList.Clear();

#endif
        m_dicTipUI.Clear();
        m_dicBaseUI.Clear();
        m_dicPopUI.Clear();
        m_dicStoryUI.Clear();
        m_dicMenuPopUI.Clear();
        m_dicMessageUI.Clear();
        m_dicDeathUI.Clear();
        m_dicCacheUI.Clear();
        m_instance = this;

        BaseUIRoot = gameObject.transform.FindChild("BaseUIRoot");
        if (null == BaseUIRoot)
        {
            BaseUIRoot = AddObjToRoot("BaseUIRoot").transform;
        }

        PopUIRoot = gameObject.transform.FindChild("PopUIRoot");
        if (null == PopUIRoot)
        {
            PopUIRoot = AddObjToRoot("PopUIRoot").transform;
        }

        StoryUIRoot = gameObject.transform.FindChild("StoryUIRoot");
        if (null == StoryUIRoot)
        {
            StoryUIRoot = AddObjToRoot("StoryUIRoot").transform;
        }

        TipUIRoot = gameObject.transform.FindChild("TipUIRoot");
        if (null == TipUIRoot)
        {
            TipUIRoot = AddObjToRoot("TipUIRoot").transform;
        }

        MenuPopUIRoot = gameObject.transform.FindChild("MenuPopUIRoot");
        if (null == MenuPopUIRoot)
        {
            MenuPopUIRoot = AddObjToRoot("MenuPopUIRoot").transform;
        }

        MessageUIRoot = gameObject.transform.FindChild("MessageUIRoot");
        if (null == MessageUIRoot)
        {
            MessageUIRoot = AddObjToRoot("MessageUIRoot").transform;
        }

        DeathUIRoot = gameObject.transform.FindChild("DeathUIRoot");
        if (null == DeathUIRoot)
        {
            DeathUIRoot = AddObjToRoot("DeathUIRoot").transform;
        }

        BaseUIRoot.gameObject.SetActive(true);
        TipUIRoot.gameObject.SetActive(true);
        PopUIRoot.gameObject.SetActive(true);
        StoryUIRoot.gameObject.SetActive(true);
        MenuPopUIRoot.gameObject.SetActive(true);
        MessageUIRoot.gameObject.SetActive(true);
        DeathUIRoot.gameObject.SetActive(true);

#if UNITY_WP8
        m_UnloadItemBundle = false;
#endif
    }

    //void FixedUpdate()
    //{
    //    if (m_GCTimerGo)
    //    {
    //        if (Time.fixedTime - m_GCWaitTime >= GCCollectTime)
    //        {
    //            Resources.UnloadUnusedAssets();
    //            GC.Collect();

    //            m_GCTimerGo = false;
    //            m_GCWaitTime = GlobeVar.INVALID_ID;
    //        }
    //    }
    //}

    void OnDestroy()
    {
#if UNITY_ANDROID

        m_MissionItemPrefab = null;

        if (m_PrefabList != null)
        {
            m_PrefabList.Clear();
            m_PrefabList = null;
        }

        if (m_PrefabNameList != null)
        {
            m_PrefabNameList.Clear();
            m_PrefabNameList = null;
        }

#endif

        m_instance = null;
    }

    public static bool LoadItem(UIPathData pathData, OnLoadUIItemDelegate delLoadItem, object param =  null)
    {
        if (null == m_instance)
        {
            LogModule.ErrorLog("game manager is not init");
            return false;
        }

        m_instance.LoadUIItem(pathData, delLoadItem, param);
        return true;
    }

    // 展示UI，根据类型不同，触发不同行为
    public static bool ShowUI(UIPathData pathData, OnOpenUIDelegate delOpenUI = null, object param = null)
    {
        if (null == m_instance)
        {
            LogModule.ErrorLog("game manager is not init");
            return false;
        }

        m_instance.AddLoadDicRefCount(pathData.name);
        

#if !UNITY_EDITOR && !UNITY_STANDALONE_WIN
		if(pathData.uiType == UIPathData.UIType.TYPE_POP || 
//        pathData.uiType == UIPathData.UIType.TYPE_STORY || 	// 现在对话界面有可能是小对话不需要释放摇杆了，把释放摇杆的操作放到具体逻辑中去
        pathData.uiType == UIPathData.UIType.TYPE_TIP ||
		pathData.uiType == UIPathData.UIType.TYPE_MENUPOP)
		{
			if(JoyStickLogic.Instance() != null)
			{
				ProcessInput.Instance().ReleaseTouch();
				JoyStickLogic.Instance().ReleaseJoyStick();
			}
		}
#endif

        Dictionary<string, GameObject> curDic = null;
        switch (pathData.uiType)
        {
            case UIPathData.UIType.TYPE_BASE:
                curDic = m_instance.m_dicBaseUI;
                break;
            case UIPathData.UIType.TYPE_POP:
                curDic = m_instance.m_dicPopUI;
                break;
            case UIPathData.UIType.TYPE_STORY:
                curDic = m_instance.m_dicStoryUI;
                break;
            case UIPathData.UIType.TYPE_TIP:
                curDic = m_instance.m_dicTipUI;
                break;
            case UIPathData.UIType.TYPE_MENUPOP:
                curDic = m_instance.m_dicMenuPopUI;
                break;
            case UIPathData.UIType.TYPE_MESSAGE:
                curDic = m_instance.m_dicMessageUI;
                break;
            case UIPathData.UIType.TYPE_DEATH:
                curDic = m_instance.m_dicDeathUI;
               
                break;
            default:
                return false;
        }

        if (null == curDic)
        {
            return false;
        }

        if (m_instance.m_dicCacheUI.ContainsKey(pathData.name))
        {
            if (!curDic.ContainsKey(pathData.name))
            {
                curDic.Add(pathData.name, m_instance.m_dicCacheUI[pathData.name]);
            }

            m_instance.m_dicCacheUI.Remove(pathData.name);
        }

        if (curDic.ContainsKey(pathData.name))
        {
            // 如果缓存区有，那么直接显示
            curDic[pathData.name].SetActive(true);
            m_instance.DoAddUI(pathData, curDic[pathData.name], delOpenUI, param);
            return true;
        }

        m_instance.LoadUI(pathData, delOpenUI, param);
        
        return true;
    }

    // 读表展示UI，
    public static bool ShowUIByID(int tableID, OnOpenUIDelegate delOpenUI = null, object param = null)
    {
        if (null == m_instance)
        {
            LogModule.ErrorLog("game manager is not init");
            return false;
        }

        Tab_UIPath curTabPath = TableManager.GetUIPathByID(tableID, 0);
        if (null == curTabPath)
        {
            LogModule.ErrorLog("cur ui is not set in table" + tableID);
            return false;
        }

        if(!UIPathData.m_DicUIInfo.ContainsKey(curTabPath.Path))
        {
            LogModule.ErrorLog("cur ui is not set in table" + curTabPath.Path);
            return false;
        }

        UIPathData curData = UIPathData.m_DicUIInfo[curTabPath.Path];
        return UIManager.ShowUI(curData, delOpenUI, param);
       
    }

    public static void CloseUIByID(int tableID)
    {
        if (null == m_instance)
        {
            LogModule.ErrorLog("game manager is not init");
            return;
        }


        Tab_UIPath curTabPath = TableManager.GetUIPathByID(tableID, 0);
        if (null == curTabPath)
        {
            LogModule.ErrorLog("cur ui is not set in table" + tableID);
            return;
        }

        if (!UIPathData.m_DicUIInfo.ContainsKey(curTabPath.Path))
        {
            LogModule.ErrorLog("cur ui is not set in table " + curTabPath.Path);
            return;
        }

        UIPathData curPathData = UIPathData.m_DicUIInfo[curTabPath.Path];
        CloseUI(curPathData);

    }

    // 关闭UI，根据类型不同，触发不同行为
    public static void CloseUI(UIPathData pathData)
    {
        if (null == m_instance)
        {
            return;
        }

        //int MaxCloseCount = PlayerPreferenceData.MaxCleanUICount;
        //if (MaxCloseCount > 6)
        //{
        //    MaxCloseCount = 6;
        //}

        //关闭MaxCloseCount次UI的时候，立即GC
        //if (++m_sCloseUICount >= MaxCloseCount)
        //{
        //    Resources.UnloadUnusedAssets();
        //    GC.Collect();
        //    m_sCloseUICount = 0;
        //   // LogModule.DebugLog("CloseUI GC 1");
        //}
        //else
        //{
        //    //活动，侠客，世界地图，PK，酒楼, 美人，背包界面，伙伴，每次打开都清理
        //    if (pathData.name == "ActivityController" ||
        //        pathData.name == "SwordsManController" ||
        //        pathData.name == "SceneMapRoot" ||
        //        pathData.name == "PKSetRoot" ||
        //        pathData.name == "Restaurant" ||
        //        pathData.name == "BelleController" ||
        //        pathData.name == "BackPackRoot" ||
        //        pathData.name == "PartnerAndMountRoot")
        //    {
        //        Resources.UnloadUnusedAssets();
        //        GC.Collect();
        //        m_sCloseUICount = 0;
        //        //LogModule.DebugLog("CloseUI GC 2 " + pathData.name);
        //    }
        //}
        //LogModule.DebugLog("m_sCloseUICount : " + m_sCloseUICount + " MaxCloseCount= " + MaxCloseCount);

        //if (!m_GCTimerGo)
        //{
        //    //关闭UI的时候，如果玩家不会进行其他操作，则顺手清理一下内存
        //    //如果关闭UI的时候玩家需要流畅的玩耍，则要排除掉
        //    //目前先增加特例，之后等特例多了之后进行统一处理
        //    if (pathData.name != "NewPlayerGuidRoot")
        //    {
        //        m_GCTimerGo = true;
        //        m_GCWaitTime = Time.fixedTime;
        //    }
        //}

         if (pathData.name.Equals("BelleController"))
         {
             BundleManager.DoUnloadUnuseBundle();
         }

#if UNITY_WP8
         m_UnloadBundle = false;
#endif
#if UNITY_ANDROID
        if (!PlatformHelper.IsChannelMainland())
        {
            PopOpenedList(false);
        }
#endif
        m_instance.RemoveLoadDicRefCount(pathData.name);
        switch (pathData.uiType)
        {
            case UIPathData.UIType.TYPE_BASE:
                m_instance.CloseBaseUI(pathData.name);
                break;
            case UIPathData.UIType.TYPE_POP:
                m_instance.ClosePopUI(pathData.name);
                break;
            case UIPathData.UIType.TYPE_STORY:
                m_instance.CloseStoryUI(pathData.name);
                break;
            case UIPathData.UIType.TYPE_TIP:
                m_instance.CloseTipUI(pathData.name);
                break;
            case UIPathData.UIType.TYPE_MENUPOP:
                m_instance.CloseMenuPopUI(pathData.name);
                break;
            case UIPathData.UIType.TYPE_MESSAGE:
                m_instance.CloseMessageUI(pathData.name);
                break;
            case UIPathData.UIType.TYPE_DEATH:
                m_instance.CloseDeathUI(pathData.name);
                break;
            default:
                break;
        }

#if UNITY_WP8 //windows phone 清理 assetbundle
        if (m_UnloadBundle && pathData.uiType != UIPathData.UIType.TYPE_BASE && pathData.uiType != UIPathData.UIType.TYPE_MESSAGE)
        {
            if (pathData.uiType != UIPathData.UIType.TYPE_TIP)
            {
                ClearUIBundle(m_itemBundleNameList);
        
                m_itemBundleNameList.Clear();
                m_UnloadItemBundle = false;
            }


            ClearUIBundleAsyc(pathData.name);

        }
#endif
        if (pathData.uiGroupName != null && pathData.isMainAsset)
        {
            BundleManager.ReleaseLoginBundle();
#if UNITY_WP8
            BundleManager.ReleaseSingleGroupBundle(pathData.uiGroupName);
#endif
        }
    }


    public static void HideAllUIExceptStory()
    {
        if (m_instance != null)
        {
            m_instance.BaseUIRoot.gameObject.SetActive(false);
            m_instance.TipUIRoot.gameObject.SetActive(false);
            m_instance.PopUIRoot.gameObject.SetActive(false);
            m_instance.MenuPopUIRoot.gameObject.SetActive(false);
            m_instance.MessageUIRoot.gameObject.SetActive(false);
            //StoryUIRoot.gameObject.SetActive(true);
        }
    }

    public static void ShowAllUIExceptStory()
    {
        if (m_instance != null)
        {
            m_instance.BaseUIRoot.gameObject.SetActive(true);
            m_instance.TipUIRoot.gameObject.SetActive(true);
            m_instance.PopUIRoot.gameObject.SetActive(true);
            m_instance.MenuPopUIRoot.gameObject.SetActive(true);
            m_instance.MessageUIRoot.gameObject.SetActive(true);
            //StoryUIRoot.gameObject.SetActive(false);
        }
    }

	public static void HideAllUIWhenLevelUp()
	{
		if (m_instance != null)
		{
			m_instance.BaseUIRoot.gameObject.SetActive(false);
			m_instance.StoryUIRoot.gameObject.SetActive(false);
			m_instance.PopUIRoot.gameObject.SetActive(false);
			m_instance.MenuPopUIRoot.gameObject.SetActive(false);
			m_instance.MessageUIRoot.gameObject.SetActive(false);
			m_instance.TipUIRoot.gameObject.SetActive(false);
		}
	}
	public static void ShowAllUIWhenLevelUp()
	{
		if (m_instance != null)
		{
			m_instance.BaseUIRoot.gameObject.SetActive(true);
			m_instance.StoryUIRoot.gameObject.SetActive(true);
			m_instance.PopUIRoot.gameObject.SetActive(true);
			m_instance.MenuPopUIRoot.gameObject.SetActive(true);
			m_instance.MessageUIRoot.gameObject.SetActive(true);
			m_instance.TipUIRoot.gameObject.SetActive(true);
		}
	}


#if UNITY_WP8 //在下一帧清理未被引用的assetbundle
    static IEnumerator ClearUIBundleAsyc(string bundleName)
    {
        yield return new WaitForEndOfFrame();
        BundleManager.ReleaseUnreferencedUIBundle(BundleManager.GetBundleLoadUrl(BundleManager.PathUIPrefab, bundleName + ".data"));
        Resources.UnloadUnusedAssets();
        GC.Collect();
    }

    static void ClearUIBundle(List<string> unloadBundleList)
    {
        for (int i = 0; i < unloadBundleList.Count; ++i)
        {
            BundleManager.ReleaseUnreferencedUIBundle(BundleManager.GetBundleLoadUrl(BundleManager.PathUIPrefab, unloadBundleList[i] + ".data"));
        }

        Resources.UnloadUnusedAssets();
        GC.Collect();
    }
#endif

    void DoAddUI(UIPathData uiData, GameObject curWindow, object fun, object param)
    {
        if (!m_dicWaitLoad.Remove(uiData.name))
        {
            return;
        }

        if (null != curWindow)
        {

#if UNITY_ANDROID
            if (m_PrefabNameList != null && m_PrefabList != null)
            {
                if (m_PrefabNameList.Contains(uiData.name))
                {
                    if (!m_PrefabList.ContainsKey(uiData.name))
                    {
                        m_PrefabList.Add(uiData.name, curWindow);
                    }
                    else
                    {
                        if (m_PrefabList[uiData.name] == null)
                        {
                            m_PrefabList[uiData.name] = curWindow;
                        }
                    }
                }
            }
#endif

#if UNITY_ANDROID
            if (!PlatformHelper.IsChannelMainland())
            {
                PushToOpenedList(uiData);
            }
#endif

            Transform parentRoot = null;
            Dictionary<string, GameObject> relativeDic = null;
            switch (uiData.uiType)
            {
                case UIPathData.UIType.TYPE_BASE:
                    parentRoot = BaseUIRoot;
                    relativeDic = m_dicBaseUI;
                    break;
                case UIPathData.UIType.TYPE_POP:
                    parentRoot = PopUIRoot;
                    relativeDic = m_dicPopUI;
                    break;
                case UIPathData.UIType.TYPE_STORY:
                    parentRoot = StoryUIRoot;
                    relativeDic = m_dicStoryUI;
                    break;
                case UIPathData.UIType.TYPE_TIP:
                    parentRoot = TipUIRoot;
                    relativeDic = m_dicTipUI;
                    break;
                case UIPathData.UIType.TYPE_MENUPOP:
                    parentRoot = MenuPopUIRoot;
                    relativeDic = m_dicMenuPopUI;
                    break;
                case UIPathData.UIType.TYPE_MESSAGE:
                    parentRoot = MessageUIRoot;
                    relativeDic = m_dicMessageUI;
                    break;
                case UIPathData.UIType.TYPE_DEATH:
                    parentRoot = DeathUIRoot;
                    relativeDic = m_dicDeathUI;
                    break;
                default:
                    break;

            }

            if (uiData.uiType == UIPathData.UIType.TYPE_POP || uiData.uiType == UIPathData.UIType.TYPE_MENUPOP)
            {
                OnLoadNewPopUI(m_dicPopUI, uiData.name);
                OnLoadNewPopUI(m_dicMenuPopUI, uiData.name);
            }

            if (null != relativeDic && relativeDic.ContainsKey(uiData.name))
            {
                relativeDic[uiData.name].SetActive(true);
            }
            else if (null != parentRoot && null != relativeDic)
            {
                GameObject newWindow = GameObject.Instantiate(curWindow) as GameObject;
                if (null != newWindow)
                {
                    newWindow.transform.parent = parentRoot;
                    newWindow.transform.localPosition = Vector3.zero;
                    newWindow.transform.localScale = Vector3.one;
                    relativeDic.Add(uiData.name, newWindow);

                    //自动加的一个比较大的MenuSubUIShield，有个大collider。王喆说以后应该不用了
                    /*if (uiData.uiType == UIPathData.UIType.TYPE_MENUPOP)
                    {
                        LoadMenuSubUIShield(newWindow);
                    }*/
                }
            }

            //if (uiData.uiType == UIPathData.UIType.TYPE_STORY)
            //{
            //    BaseUIRoot.gameObject.SetActive(false);
            //    TipUIRoot.gameObject.SetActive(false);
            //    PopUIRoot.gameObject.SetActive(false);
            //    MenuPopUIRoot.gameObject.SetActive(false);
            //    MessageUIRoot.gameObject.SetActive(false);
            //    StoryUIRoot.gameObject.SetActive(true);
            //}
            //else if (uiData.uiType == UIPathData.UIType.TYPE_MENUPOP)
            if (uiData.uiType == UIPathData.UIType.TYPE_POP ||
                (uiData.name == "BackPackRoot" && BackPackLogic.m_OpenWay == BackPackLogic.OPEN_WAY.NEWFUNCTION_QUICK) ||
                (uiData.name == "RelationRoot" && RelationLogic.m_OpenWay == RelationLogic.OPEN_WAY.MISSION_TEAM))
            {
                if (PlayerFrameLogic.Instance() != null)
                {
                    PlayerFrameLogic.Instance().SwitchAllWhenPopUIShow(false);
                    PlayerFrameLogic.Instance().gameObject.SetActive(false);
                }
                if (MenuBarLogic.Instance() != null)
                {
                    MenuBarLogic.Instance().gameObject.SetActive(false);
                }

                if (!(uiData.name.Equals("ServerChooseController") ||
                    uiData.name.Equals("RoleCreate")))
                {
#if !UNITY_ANDROID

                    StartCoroutine(GCAfterOneSceond());
#endif
                }
            }
            else if (uiData.uiType == UIPathData.UIType.TYPE_MENUPOP)
            {
                if (null != PlayerFrameLogic.Instance() && null != MenuBarLogic.Instance())
                {
                    MenuBarLogic.Instance().gameObject.SetActive(false);
                    PlayerFrameLogic.Instance().gameObject.SetActive(false);

#if !UNITY_ANDROID
                    StartCoroutine(GCAfterOneSceond());
#endif
                }
            }
            else if (uiData.uiType == UIPathData.UIType.TYPE_DEATH)
            {
                ReliveCloseOtherSubUI();
            }
        }

        if (null != fun)
        {
            OnOpenUIDelegate delOpenUI = fun as OnOpenUIDelegate;
            delOpenUI(curWindow != null, param);
        }
    }

    IEnumerator GCAfterOneSceond()
    {
         yield return new WaitForSeconds(1);
         BundleManager.DoUnloadUnuseBundle();
    }

    void DoLoadUIItem(UIPathData uiData, GameObject curItem, object fun, object param)
    {
        if (null != fun)
        {
            OnLoadUIItemDelegate delLoadItem = fun as OnLoadUIItemDelegate;
            delLoadItem(curItem, param);
        }
    }
    void ClosePopUI(string name)
    {
        OnClosePopUI(m_dicPopUI, name);
    }

    void CloseStoryUI(string name)
    {
        if (TryDestroyUI(m_dicStoryUI, name))
        {
            //BaseUIRoot.gameObject.SetActive(true);
            //TipUIRoot.gameObject.SetActive(true);
            //PopUIRoot.gameObject.SetActive(true);
            //MenuPopUIRoot.gameObject.SetActive(true);
            //MessageUIRoot.gameObject.SetActive(true);
            //StoryUIRoot.gameObject.SetActive(true);
        }
    }

    void CloseBaseUI(string name)
    {
        if (m_dicBaseUI.ContainsKey(name))
        {
            m_dicBaseUI[name].SetActive(false);
        }
    }

    void CloseTipUI(string name)
    {
        TryDestroyUI(m_dicTipUI, name);
    }

    void CloseMenuPopUI(string name)
    {
        OnClosePopUI(m_dicMenuPopUI, name);
    }

    void CloseMessageUI(string name)
    {
        TryDestroyUI(m_dicMessageUI, name);
    }

    void CloseDeathUI(string name)
    {
        if (TryDestroyUI(m_dicDeathUI, name))
        {
            // 关闭复活界面时 恢复节点的显示
            m_instance.PopUIRoot.gameObject.SetActive(true);
            m_instance.MenuPopUIRoot.gameObject.SetActive(true);
            m_instance.TipUIRoot.gameObject.SetActive(true);
        }
    }

    /// <summary>
    /// 没有缓存的UI，进行加载
    /// </summary>
    /// <param name="uiData"></param>
    /// <param name="delOpenUI"></param>
    /// <param name="param1"></param>
    void LoadUI(UIPathData uiData, OnOpenUIDelegate delOpenUI = null, object param1 = null)
    {
        GameObject curWindow = null;

#if UNITY_ANDROID
        if (m_PrefabNameList != null && m_PrefabList != null)
        {
            if (m_PrefabNameList.Contains(uiData.name))
            {
                if (m_PrefabList.ContainsKey(uiData.name))
                {
                    curWindow = m_PrefabList[uiData.name];
                }
            }
        }
#endif
        if (curWindow == null)
        {
            curWindow = ResourceManager.LoadResource("Prefab/UI/" + uiData.name) as GameObject;
        }

        //GameObject curWindow = ResourceManager.LoadResource("Prefab/UI/" + uiData.name) as GameObject;
        if (null != curWindow)
        {
            DoAddUI(uiData, curWindow, delOpenUI, param1);
            //LogModule.ErrorLog("can not open controller path not found:" + path);
            return;
        }

        if (uiData.uiGroupName != null)
        {
            GameObject objCacheBundle = BundleManager.GetGroupUIItem(uiData);
            if (null != objCacheBundle)
            {
                DoAddUI(uiData, objCacheBundle, delOpenUI, param1);
                return;
            }
        }

#if UNITY_WP8
        if (UIPathData.UIType.TYPE_POP == uiData.uiType || UIPathData.UIType.TYPE_MENUPOP == uiData.uiType)
        {
            m_UnloadItemBundle = true;
        }
#endif

        StartCoroutine(BundleManager.LoadUI(uiData, DoAddUI, delOpenUI, param1));
    }

    void LoadUIItem(UIPathData uiData, OnLoadUIItemDelegate delLoadItem, object param = null)
    {

#if UNITY_ANDROID
        if (uiData.name == "MissionItem" && m_MissionItemPrefab != null)
        {
            DoLoadUIItem(uiData, m_MissionItemPrefab, delLoadItem, param);
            return;
        }

        //m_StaicMission
        //if (uiData.name == "MissionItem" && m_StaicMission != null)
        //{
        //    DoLoadUIItem(uiData, m_StaicMission, delLoadItem, param);
        //    return;
        //}
#endif

        GameObject curWindow = ResourceManager.LoadResource("Prefab/UI/" + uiData.name) as GameObject;
        if(null != curWindow)
        {
            DoLoadUIItem(uiData, curWindow, delLoadItem, param);
            return;
        }

        if (uiData.uiGroupName != null)
        {
            GameObject objCacheBundle = BundleManager.GetGroupUIItem(uiData);
            if (null != objCacheBundle)
            {
                DoLoadUIItem(uiData, objCacheBundle, delLoadItem, param);
                return;
            }
        }

#if UNITY_WP8
        if (m_UnloadItemBundle && uiData.name != "MissionItem")
        {
            m_itemBundleNameList.Add(uiData.name);
        }
#endif

        StartCoroutine(BundleManager.LoadUI(uiData, DoLoadUIItem, delLoadItem, param));
    }

    static void LoadMenuSubUIShield(GameObject newWindow)
    {
        GameObject MenuSubUIShield = ResourceManager.InstantiateResource("Prefab/UI/MenuSubUIShield") as GameObject;
        if (MenuSubUIShield == null)
        {
            LogModule.ErrorLog("can not open MenuSubUIShield path not found");
            return;
        }
        MenuSubUIShield.transform.parent = newWindow.transform;
        MenuSubUIShield.transform.localPosition = Vector3.zero;
        MenuSubUIShield.transform.localScale = Vector3.one;
    }

    static void LoadPopUIShield(GameObject newWindow)
    {
        if (GameManager.gameManager.RunningScene == (int)GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN ||
            GameManager.gameManager.RunningScene == (int)GameDefine_Globe.SCENE_DEFINE.SCENE_LOADINGSCENE)
        {
            return;
        }

        GameObject PopUIBlack = ResourceManager.InstantiateResource("Prefab/UI/PopUIBlack") as GameObject;
        if (PopUIBlack == null)
        {
            LogModule.ErrorLog("can not open PopUIBlack path not found");
            return;
        }
        PopUIBlack.transform.parent = newWindow.transform;
        PopUIBlack.transform.localPosition = Vector3.zero;
        PopUIBlack.transform.localScale = Vector3.one;
    }

    GameObject AddObjToRoot(string name)
    {
        GameObject obj = new GameObject();
        obj.transform.parent = transform;
        obj.transform.localPosition = Vector3.zero;
        obj.transform.localScale = Vector3.one;
        obj.name = name;
        return obj;
    }

    bool SubUIShow()
    {
        // 因为有边对话边游戏的需求，这里注掉
        if (m_dicPopUI.Count + m_dicTipUI.Count + m_dicMenuPopUI.Count > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static bool IsSubUIShow()
    {
        if (m_instance != null)
        {
            return m_instance.SubUIShow();
        }
        return false;
    }

    static void ReliveCloseOtherSubUI()
    {
        // 关闭所有PopUI
        List<string> uiKeyList = new List<string>();
        foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicPopUI)
        {
            uiKeyList.Add(pair.Key);
        }
        for (int i = 0; i < uiKeyList.Count; i++ )
        {
            m_instance.ClosePopUI(uiKeyList[i]);
        }
        uiKeyList.Clear();
        // 关闭所有MenuPopUI
        foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicMenuPopUI)
        {
            uiKeyList.Add(pair.Key);
        }
        for (int i = 0; i < uiKeyList.Count; i++)
        {
            m_instance.CloseMenuPopUI(uiKeyList[i]);
        }
        uiKeyList.Clear();
        // 关闭所有TipUI
        foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicTipUI)
        {
            uiKeyList.Add(pair.Key);
        }
        for (int i = 0; i < uiKeyList.Count; i++)
        {
            m_instance.CloseTipUI(uiKeyList[i]);
        }
        uiKeyList.Clear();
        // 关闭所有除CentreNotice以外的MessageUI MessageUIRoot节点保留不隐藏
        foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicMessageUI)
        {
            if (!pair.Key.Contains("CentreNotice"))
            {
                uiKeyList.Add(pair.Key);
            }
        }
        for (int i = 0; i < uiKeyList.Count; i++)
        {
            m_instance.CloseMessageUI(uiKeyList[i]);
        }
        uiKeyList.Clear();

        // 中断剧情对话
        if (StoryDialogLogic.Instance() != null)
        {
            CloseUI(UIInfo.StoryDialogRoot);
        }
        // 中断诗词对话
        if (ShiCiLogic.Instance() != null)
        {
            CloseUI(UIInfo.ShiCiRoot);
        }
        // 中断剑谱对话
        if (JianPuLogic.Instance() != null)
        {
            CloseUI(UIInfo.JianPuRoot);
        }

        // 隐藏二级UI节点
        m_instance.PopUIRoot.gameObject.SetActive(false);
        m_instance.MenuPopUIRoot.gameObject.SetActive(false);
        m_instance.TipUIRoot.gameObject.SetActive(false);
    }

    static public void NewPlayerGuideCloseSubUI()
    {
        // 关闭所有PopUI
        foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicPopUI)
        {
            m_instance.ClosePopUI(pair.Key);
            break;
        }
        // 关闭所有MenuPopUI
        foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicMenuPopUI)
        {
            m_instance.CloseMenuPopUI(pair.Key);
            break;
        }
        // 关闭所有TipUI
        foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicTipUI)
        {
            m_instance.CloseTipUI(pair.Key);
            break;
        }
        // 关闭所有MessageUI
        //         foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicMessageUI)
        //         {
        //             m_instance.CloseMessageUI(pair.Key);
        //             break;
        //         }
    }

    /// <summary>
    /// 关闭所有的PopUI
    /// </summary>
    public static void CloseAllPopUI()
    {
        // 关闭所有PopUI
        List<string> uiKeyList = new List<string>();
        foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicPopUI)
        {
            uiKeyList.Add(pair.Key);
        }
        for (int i = 0; i < uiKeyList.Count; i++)
        {
            m_instance.ClosePopUI(uiKeyList[i]);
        }
        uiKeyList.Clear();
        // 关闭所有MenuPopUI
        foreach (KeyValuePair<string, GameObject> pair in m_instance.m_dicMenuPopUI)
        {
            uiKeyList.Add(pair.Key);
        }
        for (int i = 0; i < uiKeyList.Count; i++)
        {
            m_instance.CloseMenuPopUI(uiKeyList[i]);
        }
        uiKeyList.Clear();
    }

    void AddLoadDicRefCount(string pathName)
    {
        if (m_dicWaitLoad.ContainsKey(pathName))
        {
            m_dicWaitLoad[pathName]++;
        }
        else
        {
            m_dicWaitLoad.Add(pathName, 1);
        }
    }

    bool RemoveLoadDicRefCount(string pathName)
    {
        if (!m_dicWaitLoad.ContainsKey(pathName))
        {
            return false;
        }

        m_dicWaitLoad[pathName]--;
        if (m_dicWaitLoad[pathName] <= 0)
        {
            m_dicWaitLoad.Remove(pathName);
        }

        return true;
    }

    void DestroyUI(string name, GameObject obj)
    {
        Destroy(obj);
        BundleManager.OnUIDestroy(name);

#if UNITY_WP8
        m_UnloadBundle = true;
#endif
    }

    private void OnLoadNewPopUI(Dictionary<string, GameObject> curList, string curName)
    {
        if (curList == null)
        {
            return;
        }

        List<string> objToRemove = new List<string>();

        if (curList.Count > 0)
        {
            objToRemove.Clear();
            foreach (KeyValuePair<string, GameObject> objs in curList)
            {
                if (curName == objs.Key)
                {
                    continue;
                }
                objs.Value.SetActive(false);
                objToRemove.Add(objs.Key);
                if (UIPathData.m_DicUIName.ContainsKey(objs.Key) && UIPathData.m_DicUIName[objs.Key].isDestroyOnUnload)
                {
                    DestroyUI(objs.Key, objs.Value);
                }
                else
                {
                    m_dicCacheUI.Add(objs.Key, objs.Value);
                }
            }

            for (int i = 0; i < objToRemove.Count; i++)
            {
                if (curList.ContainsKey(objToRemove[i]))
                {
                    curList.Remove(objToRemove[i]);
                }
            }
        }
    }
    private void OnClosePopUI(Dictionary<string, GameObject> curList, string curName)
    {
        if (TryDestroyUI(curList, curName))
        {
            // 关闭导航栏打开的二级UI时 收回导航栏
            if (null != PlayerFrameLogic.Instance())
            {
                PlayerFrameLogic.Instance().gameObject.SetActive(true);
                if (PlayerFrameLogic.Instance().Fold)
                {
                    PlayerFrameLogic.Instance().SwitchAllWhenPopUIShow(true);
                }
            }
            if (MenuBarLogic.Instance() != null)
            {
                if (MenuBarLogic.Instance().Fold)
                {
                    MenuBarLogic.Instance().gameObject.SetActive(true);
                }
            }
        }
    }

    private bool TryDestroyUI(Dictionary<string, GameObject> curList, string curName)
    {
        if (curList == null)
        {
            return false;
        }

        if (!curList.ContainsKey(curName))
        {
            return false;
        }

#if UNITY_ANDROID

        // < 768M UI不进行缓存
        if (SystemInfo.systemMemorySize < 768)
        {
            DestroyUI(curName, curList[curName]);
            curList.Remove(curName);

            if (m_PrefabNameList != null)
            {
                if (!m_PrefabNameList.Contains(curName))
                {
                    Resources.UnloadUnusedAssets();
                    GC.Collect();
                }
            }

            return true;
        }
//#elif UNITY_WP8
//        if (GameManager.gameManager.IsLowWindowsPhone)
//        {
//            DestroyUI(curName, curList[curName]);
//            curList.Remove(curName);

//            return true;
//        }

#endif

        if (UIPathData.m_DicUIName.ContainsKey(curName) && !UIPathData.m_DicUIName[curName].isDestroyOnUnload)
        {
            curList[curName].SetActive(false);
            m_dicCacheUI.Add(curName, curList[curName]);
        }
        else
        {
            DestroyUI(curName, curList[curName]);
        }

        curList.Remove(curName);

        return true;
    }

#if UNITY_ANDROID
    // 将打开的界面记录到m_UIOpenedList中
    private static void PushToOpenedList(UIPathData ui)
    {
        if (m_instance == null || m_instance.m_UIOpenedList == null)
        {
            return;
        }
        if (UIInfo.CentreNotice == ui || UIInfo.NewPlayerGuidRoot == ui)
        {
            return;
        }
        m_instance.m_UIOpenedList.Add(ui);
    }

    // 从m_UIOpenedList中pop一个界面，根据isDoClose确定是否执行关闭操作
    // 返回值为true时不弹出游戏退出提示，false时弹出
    public static bool PopOpenedList(bool isDoClose = true)
    {
        // Login 场景不处理
        if (GameManager.gameManager.RunningScene == (int)GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN)
        {
            return false;
        }

        if (m_instance == null || m_instance.m_UIOpenedList == null)
        {
            return false;
        }
        int count = m_instance.m_UIOpenedList.Count;
        if (count <= 0)
        {
            return false;
        }
        UIPathData ui = m_instance.m_UIOpenedList[count - 1];
        if (isDoClose)
        {
            if (ui.uiType == UIPathData.UIType.TYPE_BASE || ui.uiType == UIPathData.UIType.TYPE_DEATH || ui.uiType == UIPathData.UIType.TYPE_STORY)
            {
                if (PlayerFrameLogic.Instance() != null && !PlayerFrameLogic.Instance().Fold)
                {
                    PlayerFrameLogic.Instance().PlayerFrameHeadOnClick();
                    m_instance.m_UIOpenedList.RemoveAt(count - 1);
                    return true;
                }
                return false;
            }
            CloseUI(ui);
            return true;
        }
        m_instance.m_UIOpenedList.RemoveAt(count - 1);
        return true;
    }

    public static void ClearOpenedList()
    {
        if (m_instance == null || m_instance.m_UIOpenedList == null)
        {
            return;
        }
        m_instance.m_UIOpenedList.Clear();
    }
#endif
}
