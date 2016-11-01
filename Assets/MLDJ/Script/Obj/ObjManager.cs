/********************************************************************************
 *	文件名：	ObjManager.cs
 *	全路径：	\Script\Obj\ObjManager.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-25
 *
 *	功能说明：游戏逻辑Obj管理器，对游戏中所有Obj提供创建，移除和管理
 *	修改记录：
 *	//2013-11-18 修改list结构为Dictionary结构，
*********************************************************************************/

using GameRes;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using Games.GlobeDefine;
using Games.LogicObj;
using GCGame.Table;
using Games.AI_Logic;
using GCGame;
using System;
using Games.Animation_Modle;
using Module.Log;
using Games.FakeObject;
using Games.ObjAnimModule;
using Games.Item;

//初始化一个Obj所需数据
public class Obj_Init_Data
{
    public float m_fX;                           //坐标X
    public float m_fY;                           //坐标Y
    public float m_fZ;                           //坐标Z
    public float m_fDir;                         //朝向
    public int m_RoleBaseID;                   //在RoleBase表中的ID
    public int m_CharModelID;                  //在CharModel表中ID（NPC可以从RoleBase表读取，但变换外形后会导致和RoleBase中的CharModelID不一致） 
    public int m_ClientInitID;                 //在ClientInitTable中的ID
    public int m_ServerID;                     //服务器ID
    public UInt64 m_Guid;                         //Obj在服务器的GUID
    public int m_Force;                        //势力
    public string m_StrName;                      //Obj的名字
    public int m_nProfession;                  //职业 （创建玩家用的）
    public string m_strTitleName;                 //称号名
    public int m_CurTitleID;                   //称号ID
    public bool m_isInMainPlayerPKList;         //是否在主角反击列表中 只对非主角玩家有用
    public bool m_IsDie;                        //是否死亡
    public int m_PkModel;                      //PK模式
    public int m_OwnerObjId;                   //主人objid
    public int m_MountID;                      // 坐骑ID
    public float m_MoveSpeed;                    // 移动速度
    public int m_WeaponDataID;                 // 当前武器
    public int m_ModelVisualID;                // 当前模型外观ID
    public int m_WeaponEffectGem;              // 武器特效宝石
    public int m_StealthLev;                   //隐身级别
    public bool m_bNpcBornCreate;               //是否是刚刚刷出来的NPC
    public int m_nOtherVipCost;                //vip info
    public UInt64 m_GuildGuid;                    //帮会GUID
    public int m_FellowQuality;                //伙伴品质（创建伙伴用）
    public int m_nOtherCombatValue;            //战力
    public int m_BindParent;                   //绑定父节点
    public List<int> m_BindChildren;                //绑定子节点
    public bool m_bIsWildEnemyForMainPlayer;    //是否与主角敌对
    public int m_nPaoShangState;               //跑商状态
    public int m_nLightSkillLevel;             //轻功等级
    public bool m_bIsInTeamFollow;              // 组队跟随状态
    public int m_changeState;                       //变身状态
    public int m_SceneNpcId;                    // SceneNpc表id
    public int m_FlyWingId;                     // 翅膀id
    public Obj_Init_Data()
    {
        m_BindChildren = new List<int>();
        CleanUp();
    }
    public void CleanUp()
    {
        m_fX = 0.0f;
        m_fY = 0.0f;
        m_fZ = 0.0f;
        m_RoleBaseID = GlobeVar.INVALID_ID;
        m_CharModelID = GlobeVar.INVALID_ID;
        m_ServerID = GlobeVar.INVALID_ID;
        m_Guid = GlobeVar.INVALID_GUID;
        m_Force = GlobeVar.INVALID_ID;
        m_ClientInitID = GlobeVar.INVALID_ID;
        m_StrName = "";
        m_nProfession = -1; //职业 （创建玩家用的）
        m_isInMainPlayerPKList = false;
        m_IsDie = false;
        m_PkModel = -1;
        m_fDir = 0.0f;
        m_OwnerObjId = -1;
        m_MountID = -1;
        m_MoveSpeed = 0.0f;
        m_ModelVisualID = GlobeVar.INVALID_ID;
        m_WeaponDataID = GlobeVar.INVALID_ID;
        m_WeaponEffectGem = GlobeVar.INVALID_ID;
        m_strTitleName = "";
        m_CurTitleID = GlobeVar.INVALID_ID;
        m_StealthLev = 0;
        m_bNpcBornCreate = false;
        m_nOtherVipCost = -1;
        m_GuildGuid = GlobeVar.INVALID_GUID;
        m_FellowQuality = 0;
        m_nOtherCombatValue = 0;
        m_BindParent = -1;
        m_BindChildren.Clear();
        m_bIsWildEnemyForMainPlayer = false;
        m_nPaoShangState = -1;
        m_bIsInTeamFollow = false;
        m_changeState = 0;
        m_SceneNpcId = GlobeVar.INVALID_ID;
        m_FlyWingId = GlobeVar.INVALID_ID; 
    }
}
public class ObjSnare_Init_Data
{
    public float m_fX;           //坐标X
    public float m_fY;           //坐标Y
    public float m_fZ;           //坐标Z
    public int m_SnareID;       //在RoleBase表中的ID
    public int m_ServerID;     //服务器ID
    public int m_OwnerObjId;   //主人objid
    public UInt64 m_OwerGuid;//主人GUID

    public void CleanUp()
    {
        m_fX = 0.0f;
        m_fY = 0.0f;
        m_fZ = 0.0f;
        m_SnareID = GlobeVar.INVALID_ID;
        m_ServerID = GlobeVar.INVALID_ID;
        m_OwnerObjId = -1;
        m_OwerGuid = GlobeVar.INVALID_GUID;
    }
}

public class ObjYanHua_Init_Data
{
    public float m_fX;           //坐标X
    public float m_fY;           //坐标Y
    public float m_fZ;           //坐标Z
    public int m_nYanHuaID;       //在RoleBase表中的ID
    public int m_ServerID;     //服务器ID
    public int m_OwnerObjId;   //主人objid
    public UInt64 m_OwerGuid;//主人GUID

    public void CleanUp()
    {
        m_fX = 0.0f;
        m_fY = 0.0f;
        m_fZ = 0.0f;
        m_nYanHuaID = GlobeVar.INVALID_ID;
        m_ServerID = GlobeVar.INVALID_ID;
        m_OwnerObjId = -1;
        m_OwerGuid = GlobeVar.INVALID_GUID;
    }
}
//初始化一个DropItemObj所需数据
public class Obj_DroopItemData
{
    public float m_fX;           //坐标X
    public float m_fY;           //坐标Y
    public float m_fZ;           //坐标Z
    public int m_nType;          //掉落类型
    public int m_nItemId;        //物品Id
    public int m_nItemCount;     //物品数量
    public int m_nServerID;      //服务器ID
    public UInt64 m_OwnerGuid;   //归属者Guild
    public void CleanUp()
    {
        m_fX = 0.0f;
        m_fY = 0.0f;
        m_fZ = 0.0f;
        m_nItemId = GlobeVar.INVALID_ID;
        m_nItemCount = 0;
        m_nServerID = GlobeVar.INVALID_ID;
        m_OwnerGuid = GlobeVar.INVALID_GUID;
    }
}

public class Obj_HidePlayerData : IComparable
{
    public Obj_HidePlayerData(string serverID, int value)
    {
        m_serverID = serverID;
        m_value = value;
    }

    public int CompareTo(object obj)
    {
        Obj_HidePlayerData info = obj as Obj_HidePlayerData;
        return (this.m_value < info.m_value ? -1 : 1);
    }
    public string m_serverID;
    public int m_value;

    public int CharModelId;
    public Obj_Init_Data InitData;

}

public struct NPCGameManager
{
    public GameObject NpcoGameObject;
    public float deleteTime;
}


public class ObjManager : Singleton<ObjManager>
{
    //当前客户端所有非玩家Obj池，使用Obj（场景中）名字（唯一）索引，对应Obj的数据 特殊逻辑 obj_client 并未在池中被管理
    private Dictionary<string, Obj> m_ObjPools;
    public Dictionary<string, Obj> ObjPools
    {
        get { return m_ObjPools; }
        set { m_ObjPools = value; }
    }

	public Dictionary<string, float> DeleteNPCList
	{
		get { return m_DeleteNPCList; }
		set { m_DeleteNPCList = value; }
	}

    private List<Obj_HidePlayerData> m_ObjOtherPlayerHideList { set; get; }
    private List<Obj_HidePlayerData> m_ObjOtherPlayerShowList { set; get; }

    private Obj_MainPlayer m_MainPlayer;                //当前客户端主角色
    public Obj_MainPlayer MainPlayer { get { return m_MainPlayer; } }

    //当前客户端所有非Obj的GameObj池，使用 自定义 名字（唯一）索引，对应Obj的数据
    private Dictionary<string, GameObject> m_OtherGameObjPools;
    public Dictionary<string, GameObject> OtherGameObjPools
    {
        get { return m_OtherGameObjPools; }
        set { OtherGameObjPools = value; }
    }

    //优化Android下多人同时在线问题 
    private Dictionary<string, GameObject> m_NPCGameObjectList;
    private Dictionary<string, float> m_DeleteNPCList;


    public ObjManager()
    {
        m_ObjPools = new Dictionary<string, Obj>();  //动态的，注意使用上限
        m_ObjPools.Clear();

        m_ObjOtherPlayerShowList = new List<Obj_HidePlayerData>();
        m_ObjOtherPlayerHideList = new List<Obj_HidePlayerData>();

        m_MainPlayer = null;

        m_OtherGameObjPools = new Dictionary<string, GameObject>();  //动态的，注意使用上限
        m_OtherGameObjPools.Clear();
    }

    public void AddPoolObj(string name, Obj obj)
    {
        try
        {
            m_ObjPools.Add(name, obj);
        }
        catch (System.Exception ex)
        {
            LogModule.ErrorLog("ObjManager AddPoolObj(" + name + "," + obj.ServerID.ToString() + " Error: " + ex.Message);
        }
    }

    //初始化Obj管理器
    public bool Init()
    {
        return true;
    }

    public void OnEnterScene()
    {
        m_ShowingNPCList.Clear();

        DeleteNPCPool();
        m_ObjPools.Clear();
        m_OtherGameObjPools.Clear();
        m_ObjOtherPlayerHideList.Clear();
        m_ObjOtherPlayerShowList.Clear();
    }

    public void CleanSceneObj()
    {
        foreach (KeyValuePair<string, GameObject> otherGameObj in m_OtherGameObjPools)
        {
            ResourceManager.DestroyResource(otherGameObj.Value);
        }

        m_OtherGameObjPools.Clear();

        List<GameObject> removeObjList = new List<GameObject>();
        foreach (KeyValuePair<string, Obj> gameObj in m_ObjPools)
        {
            removeObjList.Add(gameObj.Value.gameObject);
        }

        for (int i = 0; i < removeObjList.Count; ++i)
        {
            ReomoveObjInScene(removeObjList[i]);
        }

        m_MainPlayer = null;
        m_ObjPools.Clear();
        m_ObjOtherPlayerHideList.Clear();
        m_ObjOtherPlayerShowList.Clear();

    }

    public void DeleteNPCPool()
    {
        if (m_NPCGameObjectList != null)
        {
            m_NPCGameObjectList.Clear();
            m_NPCGameObjectList = null;
        }

        if (m_DeleteNPCList != null)
        {
            m_DeleteNPCList.Clear();
            m_DeleteNPCList = null;
        }
    }

    /// <summary>
    /// 返回当前NPC数量
    /// </summary>
    /// <returns></returns>
    public int GetNPCNum()
    {
        if (m_NPCGameObjectList != null)
        {
            return m_NPCGameObjectList.Count;
        }

        return 0;
    }

    /// <summary>
    /// 获取当前其他玩家数量
    /// </summary>
    /// <returns></returns>
    public int GetOtherPlayerNum()
    {
        int iTag = 0;
        if (m_ObjPools != null)
        {
            foreach (KeyValuePair<string, Obj> objPair in m_ObjPools)
            {
                if (objPair.Value.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                {
                    iTag++;
                }
            }
        }

        return iTag;
    }

    //创建NPC
    public void CreateNPC(Obj_Init_Data initData)
    {
        if (null == initData)
            return;

        if (m_NPCGameObjectList == null)
        {
            m_NPCGameObjectList = new Dictionary<string, GameObject>();
        }

        if (null != m_NPCGameObjectList && m_NPCGameObjectList.ContainsKey(initData.m_ServerID.ToString()))
        {
            if (m_DeleteNPCList != null)
            {
                if (m_DeleteNPCList.ContainsKey(initData.m_ServerID.ToString()))
                {
                    m_DeleteNPCList.Remove(initData.m_ServerID.ToString());
                }
            }

            GameObject npcGameObject = m_NPCGameObjectList[initData.m_ServerID.ToString()];

            Obj_NPC objNpc = npcGameObject.GetComponent<Obj_NPC>();

            if (objNpc != null)
            {
                objNpc.PlayUnDissolve();
                objNpc.ResetEdge();
                objNpc.CanLogic = true;
                objNpc.Init(initData);
                objNpc = null;
            }

            npcGameObject.SetActive(true);
            return;
        }
        //根据RoleBase的ID获得路径
        Tab_RoleBaseAttr roleBaseAttr = TableManager.GetRoleBaseAttrByID(initData.m_RoleBaseID, 0);
        if (null == roleBaseAttr)
        {
            return;
        }
        CreateObjFunction.CreateModelNpcObj(roleBaseAttr.CharModelID, initData, null);
    }

    public void CachedNpc(string objName, GameObject go, bool condition)
    {
        if (null != m_NPCGameObjectList)
        {
            if (!m_NPCGameObjectList.ContainsKey(objName) && condition)
            {
                m_NPCGameObjectList.Add(objName, go);
            }

            //缓存数量多时，主动调用
            if (m_NPCGameObjectList.Count > 50)
            {
                DeleteNPCGameObject();
            }
        }
    }
    /// <summary>
    /// 检查将要创建的这个对象 是否可视  不可视的话 保存创建数据 
    /// </summary>
    /// <param name="model"></param>
    /// <returns>是否继续创建</returns>
    public bool CheckOhterPlayerVisibleState(Obj_Init_Data initData, Tab_CharModel model, Obj_OtherPlayer obj)
    {
        if (initData == null || model == null || obj == null)
        {
            return false;
        }
        //添加判断，当前显示人数是否已经达到玩家要求的最大人数
        //如果>= 当前显示人数时，只显示名字版等，不显示玩家模型
        if (m_ObjOtherPlayerShowList != null)
        {
            if (m_ObjOtherPlayerShowList.Count >= PlayerPreferenceData.SystemShowOtherPlayerCount)
            {
                Obj_HidePlayerData hidePlayerData = new Obj_HidePlayerData(initData.m_ServerID.ToString(),
                    GetVisibleValue(obj));
                hidePlayerData.CharModelId = model.Id;
                hidePlayerData.InitData = initData;

                if (m_ObjOtherPlayerHideList != null)
                {
                    m_ObjOtherPlayerHideList.Add(hidePlayerData);
                }

                obj.SetVisible(false);

                return false;
            }
        }
        return true;
    }

    /// <summary>
    /// 是否开始创建主角标记位，由于主角会在Update中创建，所以改为异步之后需要判断此标记位
    /// </summary>
    public bool m_bBeginAsycCreateMainPlayer = false;

    public void ShowOthersInfo()
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == mainPlayer)
        {
            LogModule.ErrorLog("create main player model error");
            return;
        }

        //m_MainPlayer.PlayEffect(381);

        if (mainPlayer.ChangeGameObject != null)
        {
            mainPlayer.IsChangingMainPlayer = false;
            mainPlayer.RealoadPlayerWeaponVisual();
            mainPlayer.InitAnimation(mainPlayer.ChangeGameObject.name);
            mainPlayer.ChangeGameObject.SetActive(true);
        }

        mainPlayer.IsChangedMainPlayer = true;
        mainPlayer.IsChangingMainPlayer = false;

        mainPlayer.IsNoMove = false;
        mainPlayer = null;
    }

    public void ShowChangedUIInfo()
    {
        // 显示隐藏掉的UI，不知为何要在同一帧隐藏UI又开启，还会引起bug，所以注释掉
        //UIManager.ShowAllUIExceptStory();

        //更新界面的UI
        if (SkillBarLogic.Instance() != null)
        {
            SkillBarLogic.Instance().CleanUpSkillBarInfo();
            SkillBarLogic.Instance().UpdateSkillBarInfo();
            SkillBarLogic.Instance().CleanUpAttackBarInfo();
            SkillBarLogic.Instance().SetChangeModeAttackBtn();
        }
    }

    #region obj 创建

    public void ChangeMainPlayer()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            LogModule.ErrorLog("MainPlayer is NULL");
            return;
        }

        if (m_MainPlayer.IsChangingMainPlayer || m_MainPlayer.ChangeGameObject != null)
        {
            LogModule.ErrorLog("Changing or Changed ");
            return;
        }

        //可以变身 ******************
        m_MainPlayer.IsChangingMainPlayer = true;

        //变身后音乐更改机制，暂时屏蔽
        //Utils.StopBKMusic(0.5f);

        // 隐藏掉UI，不知为何要在同一帧隐藏UI又开启，还会引起bug，所以注释掉
        //UIManager.HideAllUIExceptStory();

        m_MainPlayer.StopMove();
        m_MainPlayer.IsNoMove = true;

       // IsChangingMainPlayer = true;
        //-- 现有模型调用变身动作; 播放变身粒子效果
        int nbeforeAnimId = m_MainPlayer.GetAnimIdByState(m_MainPlayer.Profession,m_MainPlayer.CurChangeState,0);

        if (GlobeVar.INVALID_ID != nbeforeAnimId)
        {
            m_MainPlayer.BeforeChangeModeAnimId = nbeforeAnimId;
            m_MainPlayer.AnimLogic.Play(nbeforeAnimId);

            Tab_Animation tab_anim = TableManager.GetAnimationByID(nbeforeAnimId,0);
            if (null != tab_anim)
            {
                m_MainPlayer.PlayEffect(tab_anim.GetStartEffectbyIndex(0));
            }
        }
        //m_MainPlayer.PlayEffect(353);

        Transform modelTransform = m_MainPlayer.transform.Find("Model");
         modelTransform.name = "ModelChange";
        m_MainPlayer.NormalGameObject = modelTransform.gameObject;

        m_MainPlayer.ShowChangedMainPlayer();
        // 调用摄像机震动
        CameraManager.Instance.StartRock(20);

        int nCharmodelID = m_MainPlayer.GetCharModelIDByChangeState(m_MainPlayer.Profession,m_MainPlayer.CurChangeState);
        CreateObjFunction.ChangeMainPLayerObj(nCharmodelID);
    }

    public void ChangeMainPlayerToNormal()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            LogModule.ErrorLog("MainPlayer is NULL");
            return;
        }

        m_MainPlayer.StopMove();
        m_MainPlayer.IsNoMove = true;

        m_MainPlayer.ShowNormalMainPlayer();
        //暂时写死 玩家变身后id 为 461
        CreateObjFunction.ChangeMainPLayerObjToNormal();
        if ( SkillBarLogic.Instance() != null)
        {
            SkillBarLogic.Instance().TransformCon.End();
        }
    }
    /// <summary>
    /// 创建主玩家
    /// </summary>
    public void CreateMainPlayer()
    {
        if (true == m_bBeginAsycCreateMainPlayer && null != m_MainPlayer)
        {
            return;
        }
        if (null == m_MainPlayer)
        {
            m_MainPlayer = CreateObjFunction.CreateMainPlayerObj();
        }
    }

    //创建掉落包
    public void CreateDropItem(Obj_DroopItemData initData)
    {
        UIManager.LoadItem(UIInfo.DropItemHeadInfo, OnCreateDropItem, initData);
    }

    //创建采集点
    public void CreateCollectItem(Tab_CollectItem CollectItem, string szName, int nItemIndex)
    {
        if (null == CollectItem)
        {
            return;
        }

        Tab_CharModel pCharModel = TableManager.GetCharModelByID(CollectItem.CharModelID, 0);
        if (pCharModel == null)
        {
            LogModule.DebugLog("CollectItem Error CharModel is null");
            return;
        }

        GameObject CollectItemRoot = ResourceManager.InstantiateResource("Prefab/Model/CollectItemRoot", szName) as GameObject;
        if (null == CollectItemRoot)
        {
            LogModule.DebugLog("CollectItem Error CharModel is null");
            return;
        }
        Obj_OtherGameObj OtherGameObj = CollectItemRoot.AddComponent<Obj_OtherGameObj>();
        if (OtherGameObj == null)
        {
            OtherGameObj = CollectItemRoot.AddComponent<Obj_OtherGameObj>();
        }
        OtherGameObj.SetIntParam(0, CollectItem.CharModelID);
        OtherGameObj.SetIntParam(1, CollectItem.Index);
        OtherGameObj.SetIntParam(2, nItemIndex);
        OtherGameObj.SetIntParam(3, CollectItem.BornMonster);

        ReloadModel(CollectItemRoot, pCharModel.ResPath, AsycCreateCollectItemOver, CollectItem, szName);
    }

    /// <summary>
    /// 创建动态阻挡 修改 后去除 异步加载的方式
    /// </summary>
    /// <param name="tab"></param>
    /// <param name="strName"></param>
    public void CreateDyncObstacle(Tab_DynamicObstacle tab, string strName)
    {
        if (null == tab)
        {
            return;
        }

        GameObject DyncObstRoot = ResourceManager.InstantiateResource("Prefab/Model/DynamisObstacleRoot", strName) as GameObject;
        if (null == DyncObstRoot)
        {
            LogModule.DebugLog("DynamicObstacle Error DynamisObstacleRoot is null");
            return;
        }
        //ReloadModel(DyncObstRoot, tab.ResPath, AsycCreateDyncObstacle, tab, strName);
        string loadPath = "Prefab/Model/" + tab.ResPath;

        //创建新的Model节点并挂到objRoot
        GameObject objModel = ResourceManager.InstantiateResource(loadPath, "Model") as GameObject;
        if (objModel)
        {
            if (ReloadModel(DyncObstRoot, objModel) == true)
            {
                DyncObstRoot.transform.localPosition = new Vector3(tab.PosX, tab.PosY, tab.PosZ);
                DyncObstRoot.transform.localRotation = Quaternion.Euler(tab.RotX, tab.RotY, tab.RotZ);
                DyncObstRoot.transform.localScale = Vector3.one;

                NavMeshObstacle NavMeshObst = objModel.AddComponent<NavMeshObstacle>();
                if (NavMeshObst)
                {
                    NavMeshObst.carving = true;
                    objModel.transform.localPosition = Vector3.zero;
                    objModel.transform.localRotation = Quaternion.identity;
                    objModel.transform.localScale = new Vector3(tab.ScaleX, tab.ScaleY, tab.ScaleZ);

					//#if UNITY_EDITOR
					// 编辑器下便于查看
					objModel.AddComponent<CabalObstacle>();
					//#endif

                    AddPoolOtherGameObj(strName, DyncObstRoot);
                }
            }
        }
        else
        {
            LogModule.ErrorLog("CreateDyncObstacle failed! id {0}", tab.Id);
            return;
        }
    }

    #endregion

    #region obj 创建 回调函数

    public void OnCreateDropItem(GameObject resObj, object param)
    {
        if (null == resObj)
        {
            LogModule.ErrorLog("create drop item error");
            return;
        }
        Obj_DroopItemData initData = param as Obj_DroopItemData;
        if (null == initData)
            return;


        Obj_DropItem objDropItem = null;
        GameObject dorpItem = GameObject.Instantiate(resObj) as GameObject;
        dorpItem.name = initData.m_nServerID.ToString();
        if (null != dorpItem)
        {
            objDropItem = (Obj_DropItem)dorpItem.GetComponent<Obj_DropItem>();
            if (!objDropItem)
            {
                objDropItem = (Obj_DropItem)dorpItem.AddComponent<Obj_DropItem>();
            }

            if (objDropItem && objDropItem.Init(initData))
            {
                objDropItem.CanLogic = true;
                AddPoolObj(objDropItem.ServerID.ToString(), objDropItem);
            }
        }
    }

    private void AsycCreateCollectItemOver(string modelName, GameObject resObj, object param1, object param2, object param3 = null)
    {
        if (null == param1 || null == param2 || resObj == null)
        {
            return;
        }

        GameObject CollectItemRoot = (GameObject)param1;
        Tab_CollectItem CollectItem = (Tab_CollectItem)param2;
        //string strName = (string)param3;

        if (null == CollectItemRoot || null == CollectItem)
        {
            return;
        }
        GameObject ItemObj = (GameObject)GameObject.Instantiate(resObj);
        if (ItemObj == null)
        {
            return;
        }

        ItemObj.name = "Model";
        if (false == ReloadModel(CollectItemRoot, ItemObj))
        {
            return;
        }
        ItemObj.transform.localRotation = Quaternion.Euler(CollectItem.RotX, CollectItem.RotY, CollectItem.RotZ);
        Vector3 vPos = new Vector3(CollectItem.PosX, 0, CollectItem.PosZ);
        if (CollectItem.Radius > 0)
        {
            vPos.x += UnityEngine.Random.Range(-CollectItem.Radius, CollectItem.Radius);
            vPos.z += UnityEngine.Random.Range(-CollectItem.Radius, CollectItem.Radius);
        }

        //         if (GameManager.gameManager.ActiveScene.IsT4MScene())
        //         {
        //             vPos.y = GameManager.gameManager.ActiveScene.GetTerrainHeight(vPos);
        //         }
        //         else if (null != Terrain.activeTerrain)
        //         {
        //             vPos.y = Terrain.activeTerrain.SampleHeight(vPos);
        //         }
        vPos.y = CollectItem.PosY;

        CollectItemRoot.transform.position = vPos;
        CollectItemRoot.tag = "CollectItem";

        AddPoolOtherGameObj(CollectItemRoot.name, CollectItemRoot);
    }

    #endregion

    //为一个PlayerRoot加载一个Model节点，节点内容为模型的骨骼和mesh
    //此做法的优点在于便于随时更换模型而无需重新挂接脚本
    public bool ReloadModel(GameObject objRoot, string modelPath, BundleManager.LoadSingleFinish delFinish, object param2, object param3 = null, string animationPath = null)
    {
        //判断参数合法性
        if (null == objRoot || modelPath.Length <= 0)
        {
            return false;
        }

        string loadPath = "Prefab/Model/" + modelPath;

        //创建新的Model节点并挂到objRoot
        GameObject objModel = ResourceManager.InstantiateResource(loadPath, "Model") as GameObject;
        if (objModel)
        {
            return ReloadModel(objRoot, objModel, animationPath);
        }
        else
        {
            //try asyc load model
            BundleManager.LoadModelInQueue(modelPath, delFinish, objRoot, param2, param3);
            //GameManager.gameManager.SceneLogic.StartCoroutine(BundleManager.LoadModel(modelPath, delFinish, objRoot, param2, param3));
        }
        return false;
    }
    public void AsycReloadModelOver(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (null == param1 || null == param2 || null == resObj)
        {
            return;
        }
        if (AwardLogic.Instance() != null && AwardLogic.Instance().m_NewServerAwardRoot != null)
        {
 //AsycLoadFakeObjOver_Active_Weapon_Wing_Fashion
        }
        GameObject objRoot = (GameObject)param1;
        if (null == objRoot)
        {
            return;
        }
        string animationPath = (string)param2;
        Obj_Mount MountObj = (Obj_Mount)param3;

        GameObject model = (GameObject)GameObject.Instantiate(resObj);
        if (null == model)
        {
            return;
        }
        else
        {
            model.name = "Model";
        }

        ReloadModel(objRoot, model, animationPath, MountObj);

        Obj_Character curChar = null;
        // 加载武器 有可能是脱武器 所以INVALID_ID也一样传进去
        Obj_MainPlayer mainPlayer = objRoot.GetComponent<Obj_MainPlayer>();
        if (null != mainPlayer)
        {
            mainPlayer.ChangeHeadPic();

            mainPlayer.RealoadPlayerWeaponVisual();

            AddOutLineMaterial(model);

            mainPlayer.UpdateCombatValue();

            curChar = mainPlayer;

			GameManager.gameManager.FlyWingMananger.ReLoadFlyWing();  // 重新加载翅膀 
        }
        else
        {
            Obj_OtherPlayer otherPlayer = objRoot.GetComponent<Obj_OtherPlayer>();
            if (otherPlayer != null)
            {
                otherPlayer.RealoadPlayerWeaponVisual();
                otherPlayer.UpdateCombatValue();
                curChar = otherPlayer;
            }
            Obj_NPC npc = objRoot.GetComponent<Obj_NPC>();
            if (npc != null)
            {
                npc.RealoadPlayerWeaponVisual(npc.WeaponDataID, npc.Profession, npc.WeaponEffectGem);
                curChar = npc;
            }
        }

        if (null != curChar)
        {
            curChar.OnReloadModle();
        }
    }

    public void AsycReloadMountModelOver(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (null == param1 || null == param2)
        {
            return;
        }

        GameObject objRoot = (GameObject)param1;

        if (null == objRoot)
        {
            return;
        }
        string animationPath = (string)param2;

        string strModelName = "Model";
        //         if (Singleton<ObjManager>.GetInstance().MainPlayer.IsChangedMainPlayer)
        //         {
        //             strModelName = "ModelChange";
        //         }

        GameObject model = (GameObject)GameObject.Instantiate(resObj);
        if (null == model)
        {
            return;
        }
        else
        {
            model.name = strModelName;
        }

        //判断参数合法性
        if (null == objRoot)
        {
            return;
        }

        //如果发现已经有Model节点，则删除之
        Transform modelTransform = objRoot.transform.FindChild(strModelName);
        if (null != modelTransform)
        {
            // 立即删除 替换马模型 后续需要寻找节点
            GameObject.DestroyImmediate(modelTransform.gameObject);
        }

        //创建新的Model节点并挂到objRoot
        if (model)
        {
            model.transform.parent = objRoot.transform;
            model.transform.localPosition = Vector3.zero;
            model.transform.localRotation = Quaternion.identity;
            model.transform.localScale = Vector3.one;

            //设置模型layer的和root一致
            Transform[] trans = model.GetComponentsInChildren<Transform>();
            for (int i = 0; i < trans.Length; ++i)
            {
                trans[i].gameObject.layer = objRoot.layer;
            }

            Obj_Character curChar = objRoot.GetComponent<Obj_Character>();
            if (null != curChar)
            {
                if (null != animationPath)
                {
                    curChar.AnimationFilePath = animationPath;
                }

                curChar.InitAnimation();

            }

            if (null != objRoot.GetComponent<Obj_MainPlayer>())
            {
                AddOutLineMaterial(model);
            }
        }
    }

    public void AsycLoadFakeObjOver(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (null == param1 || null == param2 || null == param3)
        {
            return;
        }
        if (AwardLogic.Instance() != null && AwardLogic.Instance().m_NewServerAwardRoot != null
            && AwardLogic.Instance().m_NewServerAwardRoot.gameObject.activeInHierarchy
            )
        {
            AsycLoadFakeObjOver_Active_Weapon_Wing_Fashion(modelName, resObj, param1, param2, param3, AwardLogic.Instance().m_NewServerAwardRoot.FakeObjExtraData);
            return;
        }
        //AsycLoadFakeObjOver_Active_Weapon_Wing_Fashion
        GameObject Obj = (GameObject)param1;
        if (null == Obj)
        {
            return;
        }
        Tab_FakeObject FakeObjTable = (Tab_FakeObject)param2;
        FakeObject FakeObj = (FakeObject)param3;

        if (null == FakeObj)
        {
            return;
        }

        GameObject FakeModel = (GameObject)GameObject.Instantiate(resObj);
        if (null == FakeModel)
        {
            return;
        }
        else
        {
            FakeModel.name = "Model";
        }

        if (false == ReloadModel(Obj, FakeModel))
        {
            return;
        }

        // 创建成功 设置节点
        GameObject gParentObj = FakeObj.FakeObjNode;
        if (gParentObj == null)
        {
            return;
        }
        Obj.transform.parent = gParentObj.transform;
        Obj.transform.localPosition = new Vector3(FakeObjTable.XOffSet, FakeObjTable.YOffSet, FakeObjTable.ZOffset);
        Obj.transform.localScale = Vector3.one;
        Obj.transform.localRotation = Quaternion.identity;

        // 方向
        Transform CameraTransform = gParentObj.transform.parent;
        if (null == CameraTransform)
        {
            LogModule.DebugLog("error: MountAndFellowLogic::MountItemClick() can't find obj from /Camera-FakeObject");
        }
        //Vector3 lookRot = CameraTransform.position - Obj.transform.position;
        Obj.transform.localRotation = Quaternion.Euler(FakeObjTable.XRotation, FakeObjTable.YRotation, FakeObjTable.ZRotation);

        FakeObj.ObjAnim = Obj.GetComponent<ObjAnimModel>() as ObjAnimModel;
        if (FakeObj.ObjAnim == null)
        {
            FakeObj.ObjAnim = Obj.AddComponent<ObjAnimModel>() as ObjAnimModel;
        }

        if (FakeObj.ObjAnim)
        {
            FakeObj.ObjAnim.AnimationFilePath = FakeObjTable.AnimPath;
            FakeObj.ObjAnim.InitAnimation();

            if (null != FakeObj.ObjAnim.AnimLogic)
                FakeObj.ObjAnim.AnimLogic.Play(0);
        }

        if (FakeObjTable.IsPlayer == 1)
        {
            if (Singleton<ObjManager>.Instance.MainPlayer)
            {
                FakeObj.InitFakeObjWeapon(Obj, Singleton<ObjManager>.Instance.MainPlayer.CurWeaponDataID, FakeObjTable);

                if (FlyWingRoot.Instance() != null)
                {
                    FakeObj.InitFakeObjFlyWing(FlyWingRoot.Instance().GetFlyWingFakeObjIdForShow(), Obj);
                }

                if (FashionLogic.Instance() != null && GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId != GlobeVar.INVALID_ID)//装备了翅膀
                {
                    int curChooseFashion = FashionLogic.Instance().GetCurChooseFashion();
                    if (curChooseFashion != GlobeVar.INVALID_ID && TableManager.GetFashionDataByID(curChooseFashion, 0).FashionType == (int)FashionLogic.FashionType.TYPE_WING)
                    {
                        FakeObj.InitFakeObjFlyWing(TableManager.GetFashionDataByID(curChooseFashion, 0).ItemVisualID, Obj);
                    }
                    else
                    {
                        if (GameManager.gameManager.FlyWingMananger.CurDreamFlyWingId != GlobeVar.INVALID_ID)
                            FakeObj.InitFakeObjFlyWing(GameManager.gameManager.FlyWingMananger.CurDreamFlyWingId, Obj);
                        else
                            FakeObj.InitFakeObjFlyWing(GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId, Obj);
                    }
                }
                else if (FashionLogic.Instance() != null)//没有装备翅膀
                {
                    int curChooseFashion = FashionLogic.Instance().GetCurChooseFashion();
                    if (curChooseFashion != GlobeVar.INVALID_ID && TableManager.GetFashionDataByID(curChooseFashion, 0).FashionType == (int)FashionLogic.FashionType.TYPE_WING)
                    {
                        FakeObj.InitFakeObjFlyWing(TableManager.GetFashionDataByID(curChooseFashion, 0).ItemVisualID, Obj);//
                    }
                }

            }

			else
			{
				if( UIControllerBase<RoleChooseLogic>.Instance() != null)
				{
					//if(UIControllerBase<RoleChooseLogic>.Instance() .GetRoleWeaponId() != -1)
						FakeObj.InitFakeObjWeapon(Obj, UIControllerBase<RoleChooseLogic>.Instance() .GetRoleWeaponId(), FakeObjTable);
                        FakeObj.InitFakeObjFlyWing(UIControllerBase<RoleChooseLogic>.Instance().GetPlayerLoginFlyWingId(), Obj);
				}
			}
        }

        //均使用UI特效并绑定在指定位置上
        if (FakeObjTable.Effect > 0)
        {
            Transform tf = Obj.transform.Find(FakeObjTable.Bone);
            if (tf != null)
            {
                UIEffectBehaviourController ec = Obj.GetComponent<UIEffectBehaviourController>();
                if (null == ec)
                {
                    ec = Obj.AddComponent<UIEffectBehaviourController>();
                }
                if (ec != null)
                {
                    ec.InitEffect(tf.gameObject);
                    ec.ClearEffect();
                    ec.PlayEffect(FakeObjTable.Effect);
                }
            }            
        }
    }
   /// <summary>
   /// 指定参数的重载版本。
   /// 没有处理装备，在实现这个方法时装备没有改变外观。
   /// 坑，慎入。
   /// </summary>
   /// <param name="modelName"></param>
   /// <param name="resObj"></param>
   /// <param name="param1"></param>
   /// <param name="param2"></param>
   /// <param name="param3"></param>
   /// <param name="equipId"></param>
   /// <param name="weaponId"></param>
   /// <param name="wingId"></param>
   /// <param name="fashionId"></param>
    public void AsycLoadFakeObjOver_Active_Weapon_Wing_Fashion(string modelName, GameObject resObj, object param1, object param2, object param3,ModelLoadExtraData extraData=null)
    {
        if (null == param1 || null == param2 || null == param3)
        {
            return;
        }

        GameObject Obj = (GameObject)param1;
        if (null == Obj)
        {
            return;
        }
        Tab_FakeObject FakeObjTable = (Tab_FakeObject)param2;
        FakeObject FakeObj = (FakeObject)param3;

        if (null == FakeObj)
        {
            return;
        }

        GameObject FakeModel = (GameObject)GameObject.Instantiate(resObj);
        if (null == FakeModel)
        {
            return;
        }
        else
        {
            FakeModel.name = "Model";
        }

        if (false == ReloadModel(Obj, FakeModel))
        {
            return;
        }

        // 创建成功 设置节点
        GameObject gParentObj = FakeObj.FakeObjNode;
        if (gParentObj == null)
        {
            return;
        }
        Obj.transform.parent = gParentObj.transform;
        Obj.transform.localPosition = new Vector3(FakeObjTable.XOffSet, FakeObjTable.YOffSet, FakeObjTable.ZOffset);
        Obj.transform.localScale = Vector3.one;
        Obj.transform.localRotation = Quaternion.identity;

        // 方向
        Transform CameraTransform = gParentObj.transform.parent;
        if (null == CameraTransform)
        {
            LogModule.DebugLog("error: MountAndFellowLogic::MountItemClick() can't find obj from /Camera-FakeObject");
        }
        //Vector3 lookRot = CameraTransform.position - Obj.transform.position;
        Obj.transform.localRotation = Quaternion.Euler(FakeObjTable.XRotation, FakeObjTable.YRotation, FakeObjTable.ZRotation);

        FakeObj.ObjAnim = Obj.GetComponent<ObjAnimModel>() as ObjAnimModel;
        if (FakeObj.ObjAnim == null)
        {
            FakeObj.ObjAnim = Obj.AddComponent<ObjAnimModel>() as ObjAnimModel;
        }

        if (FakeObj.ObjAnim)
        {
            FakeObj.ObjAnim.AnimationFilePath = FakeObjTable.AnimPath;
            FakeObj.ObjAnim.InitAnimation();

            if (null != FakeObj.ObjAnim.AnimLogic)
                FakeObj.ObjAnim.AnimLogic.Play(0);
        }

        if (FakeObjTable.IsPlayer == 1)
        {
            if (Singleton<ObjManager>.Instance.MainPlayer)
            {
                if (extraData.weaponId != -1)
                {
                    FakeObj.InitFakeObjWeapon(Obj, extraData.weaponId, FakeObjTable);
                }
                else
                {
                    FakeObj.InitFakeObjWeapon(Obj, Singleton<ObjManager>.Instance.MainPlayer.CurWeaponDataID, FakeObjTable);
                }
                if (extraData.wingId != -1)
                {
                    FakeObj.InitFakeObjFlyWing(extraData.wingId, Obj);
                }
                else
                {
                    if (FlyWingRoot.Instance() != null)
                    {
                        FakeObj.InitFakeObjFlyWing(FlyWingRoot.Instance().GetFlyWingFakeObjIdForShow(), Obj);
                    }

                    if (FashionLogic.Instance() != null && GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId != GlobeVar.INVALID_ID)//装备了翅膀
                    {
                        int curChooseFashion = FashionLogic.Instance().GetCurChooseFashion();
                        if (curChooseFashion != GlobeVar.INVALID_ID && TableManager.GetFashionDataByID(curChooseFashion, 0).FashionType == (int)FashionLogic.FashionType.TYPE_WING)
                        {
                            FakeObj.InitFakeObjFlyWing(TableManager.GetFashionDataByID(curChooseFashion, 0).ItemVisualID, Obj);//
                        }
                        else
                        {
                            FakeObj.InitFakeObjFlyWing(GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId, Obj);
                        }
                    }
                    else if (FashionLogic.Instance() != null)//没有装备翅膀
                    {
                        int curChooseFashion = FashionLogic.Instance().GetCurChooseFashion();
                        if (curChooseFashion != GlobeVar.INVALID_ID && TableManager.GetFashionDataByID(curChooseFashion, 0).FashionType == (int)FashionLogic.FashionType.TYPE_WING)
                        {
                            FakeObj.InitFakeObjFlyWing(TableManager.GetFashionDataByID(curChooseFashion, 0).ItemVisualID, Obj);//
                        }
                    }
                }
            }
        }
        //均使用UI特效并绑定在指定位置上
        if (FakeObjTable.Effect > 0)
        {
            Transform tf = Obj.transform.Find(FakeObjTable.Bone);
            if (tf != null)
            {
                UIEffectBehaviourController ec = Obj.GetComponent<UIEffectBehaviourController>();
                if (null == ec)
                {
                    ec = Obj.AddComponent<UIEffectBehaviourController>();
                }
                if (ec != null)
                {
                    ec.InitEffect(tf.gameObject);
                    ec.ClearEffect();
                    ec.PlayEffect(FakeObjTable.Effect);
                }
            }
        }
    }

    //查看他人属性专用使用，将WeaponID 作为上边的函数参数实在改动太大，所以加一个新的
    public void OtherView_AsycLoadFakeObjOver(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (null == param1 || null == param2 || null == param3)
        {
            return;
        }

        GameObject Obj = (GameObject)param1;
        Tab_FakeObject FakeObjTable = (Tab_FakeObject)param2;
        OtherFakeObject FakeObj = (OtherFakeObject)param3;
        if (null == Obj || null == FakeObj)
        {
            return;
        }

        GameObject FakeModel = (GameObject)GameObject.Instantiate(resObj);
        if (null == FakeModel)
        {
            return;
        }
        else
        {
            FakeModel.name = "Model";
        }

        if (false == ReloadModel(Obj, FakeModel))
        {
            return;
        }

        // 创建成功 设置节点
        GameObject gParentObj = FakeObj.FakeObjNode;
        Obj.transform.parent = gParentObj.transform;
        Obj.transform.localPosition = new Vector3(FakeObjTable.XOffSet, FakeObjTable.YOffSet, FakeObjTable.ZOffset);
        Obj.transform.localScale = Vector3.one;
        Obj.transform.localRotation = Quaternion.identity;

        // 方向
        Transform CameraTransform = gParentObj.transform.parent;
        if (null == CameraTransform)
        {
            LogModule.DebugLog("error: MountAndFellowLogic::MountItemClick() can't find obj from /Camera-FakeObject");
        }
        //Vector3 lookRot = CameraTransform.position - Obj.transform.position;
        Obj.transform.localRotation = Quaternion.Euler(FakeObjTable.XRotation, FakeObjTable.YRotation, FakeObjTable.ZRotation);

        FakeObj.ObjAnim = Obj.AddComponent<ObjAnimModel>() as ObjAnimModel;

        if (FakeObj.ObjAnim)
        {
            FakeObj.ObjAnim.AnimationFilePath = FakeObjTable.AnimPath;
            FakeObj.ObjAnim.InitAnimation();

            if (null != FakeObj.ObjAnim.AnimLogic)
                FakeObj.ObjAnim.AnimLogic.Play(0);
        }

        if (FakeObjTable.IsPlayer == 1)
        {
            FakeObj.InitFakeObjWeapon(Obj, GameManager.gameManager.OtherPlayerData.CurWeaponDataID, FakeObjTable);
        }
    }


    public void AsycLoadFitOnObjOver(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (null == param1 || null == param2)
        {
            return;
        }

        GameObject Obj = (GameObject)param1;
        List<object> param = (List<object>)param2;
        if (null == Obj || null == param || param.Count < 3)
        {
            return;
        }

        Tab_FakeObject FakeObjTable = (Tab_FakeObject)param[0];
        FakeObject FakeObj = (FakeObject)param[1];
        YuanBaoShopLogic.FitOnVisual playerFitOnVisual = (YuanBaoShopLogic.FitOnVisual)param[2];

        if (FakeObj == null)
        {
            return;
        }

        GameObject FakeModel = (GameObject)GameObject.Instantiate(resObj);
        if (null == FakeModel)
        {
            return;
        }
        else
        {
            FakeModel.name = "Model";
        }

        if (false == ReloadModel(Obj, FakeModel))
        {
            return;
        }

        // 创建成功 设置节点
        GameObject gParentObj = FakeObj.FakeObjNode;
        Obj.transform.parent = gParentObj.transform;
        Obj.transform.localPosition = new Vector3(FakeObjTable.XOffSet, FakeObjTable.YOffSet, FakeObjTable.ZOffset);
        Obj.transform.localScale = Vector3.one;
        Obj.transform.localRotation = Quaternion.identity;

        // 方向
        Transform CameraTransform = gParentObj.transform.parent;
        if (null == CameraTransform)
        {
            LogModule.DebugLog("error: MountAndFellowLogic::MountItemClick() can't find obj from /Camera-FakeObject");
        }

        Obj.transform.localRotation = Quaternion.Euler(FakeObjTable.XRotation, FakeObjTable.YRotation, FakeObjTable.ZRotation);

        FakeObj.ObjAnim = Obj.GetComponent<ObjAnimModel>() as ObjAnimModel;
        if (FakeObj.ObjAnim == null)
        {
            FakeObj.ObjAnim = Obj.AddComponent<ObjAnimModel>() as ObjAnimModel;
        }

        if (FakeObj.ObjAnim)
        {
            FakeObj.ObjAnim.InitAnimation();

            if (null != FakeObj.ObjAnim.AnimLogic)
                FakeObj.ObjAnim.AnimLogic.Play(0);
        }

        if (playerFitOnVisual.WeaponID == GlobeVar.INVALID_ID)
        {
            FakeObj.InitFakeObjWeapon(Obj, Singleton<ObjManager>.Instance.MainPlayer.CurWeaponDataID, FakeObjTable);
        }
        else
        {
            FakeObj.InitFakeObjWeapon(Obj, playerFitOnVisual.WeaponID, FakeObjTable);
        }
    }

    public void AsycLoadRoleViewFitOnObjOver(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (null == param1 || null == param2)
        {
            return;
        }

        GameObject Obj = (GameObject)param1;
        if (null == Obj)
        {
            return;
        }
        List<object> param = (List<object>)param2;
        if (null == param || param.Count < 2)
        {
            return;
        }

        Tab_FakeObject FakeObjTable = (Tab_FakeObject)param[0];
        FakeObject FakeObj = (FakeObject)param[1];

        if (null == FakeObj)
        {
            return;
        }
        GameObject FakeModel = (GameObject)GameObject.Instantiate(resObj);
        if (null == FakeModel)
        {
            return;
        }
        else
        {
            FakeModel.name = "Model";
        }

        if (false == ReloadModel(Obj, FakeModel))
        {
            return;
        }

        // 创建成功 设置节点
        GameObject gParentObj = FakeObj.FakeObjNode;
        Obj.transform.parent = gParentObj.transform;
        Obj.transform.localPosition = new Vector3(FakeObjTable.XOffSet, FakeObjTable.YOffSet, FakeObjTable.ZOffset);
        Obj.transform.localScale = Vector3.one;
        Obj.transform.localRotation = Quaternion.identity;

        // 方向
        Transform CameraTransform = gParentObj.transform.parent;
        if (null == CameraTransform)
        {
            LogModule.DebugLog("error: MountAndFellowLogic::MountItemClick() can't find obj from /Camera-FakeObject");
        }

        Obj.transform.localRotation = Quaternion.Euler(FakeObjTable.XRotation, FakeObjTable.YRotation, FakeObjTable.ZRotation);

        FakeObj.ObjAnim = Obj.GetComponent<ObjAnimModel>() as ObjAnimModel;
        if (FakeObj.ObjAnim == null)
        {
            FakeObj.ObjAnim = Obj.AddComponent<ObjAnimModel>() as ObjAnimModel;
        }

        if (FakeObj.ObjAnim)
        {
            FakeObj.ObjAnim.InitAnimation();

            if (null != FakeObj.ObjAnim.AnimLogic)
                FakeObj.ObjAnim.AnimLogic.Play(0);
        }

        if (FakeObjTable.IsPlayer == 1)
        {
            FakeObj.InitFakeObjWeapon(Obj, Singleton<ObjManager>.Instance.MainPlayer.CurWeaponDataID, FakeObjTable);
        }

        if (FashionLogic.Instance() != null && GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId != GlobeVar.INVALID_ID)
        {
            if (GameManager.gameManager.FlyWingMananger.CurDreamFlyWingId != GlobeVar.INVALID_ID)
                FakeObj.InitFakeObjFlyWing(GameManager.gameManager.FlyWingMananger.CurDreamFlyWingId, Obj);
            else
                FakeObj.InitFakeObjFlyWing(GameManager.gameManager.FlyWingMananger.CurEquipFlyWingId, Obj);
        }
    }

    public bool ReloadWeapon(GameObject objRoot, string modelPath, BundleManager.LoadSingleFinish delFinish, object param2, object param3 = null)
    {
        if (objRoot == null || modelPath.Length <= 0)
        {
            return false;
        }

        BundleManager.LoadModelInQueue(modelPath, delFinish, objRoot, param2, param3);
        return true;
    }

    public void AsycReloadWeaponOver(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (param1 == null || param2 == null)
        {
            return;
        }
        GameObject objRoot = (GameObject)param1;
        List<object> Params = (List<object>)param2;
        if (null == objRoot || null == Params || Params.Count != 7)
        {

            return;
        }
        string strWeaponPoint = (string)Params[0];
//        int nWeaponEffectGem = (int)Params[1];
        Obj_Mount MountObj = (Obj_Mount)Params[2];
//        int nProfession = (int)Params[3];
//        int nWeaponDataId = (int)Params[4];
        Vector3 rVector3 = (Vector3)Params[5];
        Tab_WeaponModel tableData = (Tab_WeaponModel)Params[6];

        GameObject weaponModel = (GameObject)GameObject.Instantiate(resObj);
        if (null == weaponModel)
        {
            return;
        }

        GameObject playerGameObject = null;
        // 根据是否在坐骑上 确定玩家模型所在位置
        if (MountObj == null)
        {
            playerGameObject = objRoot;
        }
        else
        {
            if (MountObj.MountPlayer == null)
            {
                return;
            }
            playerGameObject = MountObj.MountPlayer.gameObject;
        }

        if (playerGameObject == null)
        {
            return;
        }

        Transform modelTrans = playerGameObject.transform.FindChild("Model");
        if (modelTrans == null)
        {
            return;
        }

        //此处是因为在换模型加载的时候，其实有，原来模型ModelChange 和新模型Model同时存在。
//         if (!modelTrans.gameObject.activeSelf)
//         {
//             modelTrans = playerGameObject.transform.FindChild("ModelChange");
//             if (modelTrans == null) return;
//         }

        Transform modelallTrans = modelTrans.FindChild("all");
        if (modelallTrans == null)
        {
            return;
        }

        Transform weaponParent = modelallTrans.Find(strWeaponPoint);
        if (weaponParent == null)
        {
            return;
        }

        //*********
        // 需要在这里对不同武器、人物模型进行 位置、旋转设置 ；本次在DEMO期，临时处理下
        //**********

        Transform effectParent;
//         if (nProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
//         {
//             effectParent = weaponParent.FindChild("Weapon_R");
//             if (effectParent == null)
//             {
//                 return;
//             }
//         }
//         else
//         {
            effectParent = weaponParent;
//        }

        // 删除武器 逍遥职业特殊 武器节点和特效节点不是同一个
        for (int i = 0; i < weaponParent.childCount; ++i)
        {
            Transform child = weaponParent.GetChild(i);
            if (null != child && 
                null != child.gameObject && 
                child.gameObject.name != "EffectPoint" && 
                child.gameObject.name != effectParent.name && 
                !child.gameObject.name.Contains("Bip"))
            {
                GameObject.Destroy(child.gameObject);
            }
        }

        /*Transform weaponNormLNode = modelallTrans.FindChild("Weapon_L");
        Transform weaponNormRNode = modelallTrans.FindChild("Weapon_R");

        if (weaponParent.gameObject != null && weaponParent.gameObject.name.Contains("L"))
        {
            for (int i = 0; i < weaponNormLNode.childCount; ++i)
            {
                Transform child = weaponNormLNode.GetChild(i);
                if (null != child && 
                    null != child.gameObject && 
                    child.gameObject.name != "EffectPoint" &&
                    child.gameObject.name != effectParent.name &&
                    !child.gameObject.name.Contains("Bip"))
                {
                    GameObject.Destroy(child.gameObject);
                }
            }
        }
        else if (weaponParent.gameObject != null && weaponParent.gameObject.name.Contains("R"))
        {
            for (int i = 0; i < weaponNormRNode.childCount; ++i)
            {
                Transform child = weaponNormRNode.GetChild(i);
                if (null != child && 
                    null != child.gameObject && 
                    child.gameObject.name != "EffectPoint" &&
                    child.gameObject.name != effectParent.name &&
                    !child.gameObject.name.Contains("Bip"))
                {
                    GameObject.Destroy(child.gameObject);
                }
            }
        }*/

//        Quaternion weaponRotation = weaponModel.transform.localRotation;
        weaponModel.transform.parent = weaponParent;
        weaponModel.transform.localPosition = Vector3.zero;
        weaponModel.transform.localScale = Vector3.one;
        weaponModel.transform.localEulerAngles = rVector3;

        Transform[] trans = weaponModel.GetComponentsInChildren<Transform>();
        for (int i = 0; i < trans.Length; ++i)
        {
            trans[i].gameObject.layer = playerGameObject.layer;
        }

        //关联武器GameObject
        Obj_OtherPlayer otherPlayer = objRoot.GetComponent<Obj_OtherPlayer>();
        if (otherPlayer != null)
        {
            if (modelName.Contains("_L"))
            {
                otherPlayer.LWeaponObject = weaponModel;
            }
            else if (modelName.Contains("_R"))
            {
                otherPlayer.RWeaponObject = weaponModel;
            }

            if (otherPlayer.ObjEffectController != null)
            {
                if (IsDualWieldWeapon(tableData))
                {
                    if (otherPlayer.LWeaponObject != null && otherPlayer.RWeaponObject != null)
                    {
                        otherPlayer.ObjEffectController.OnWeaponEquOk(tableData);
                    }
                }
                else
                {
                    if (otherPlayer.LWeaponObject != null || otherPlayer.RWeaponObject != null)
                    {
                        otherPlayer.ObjEffectController.OnWeaponEquOk(tableData);
                    }
                }
            }

            int nMountID = GlobeVar.INVALID_ID;
            if (otherPlayer.ObjType == GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER
                && otherPlayer.MountID > 0)
            {
                nMountID = otherPlayer.MountID;
            }
            else if (otherPlayer.ObjType == GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                Obj_MainPlayer mPlayer = otherPlayer as Obj_MainPlayer;
                if (mPlayer && mPlayer.GetEquipMountID() > 0)
                {
                    nMountID = mPlayer.GetEquipMountID();
                }
            }

            if (MountObj != null)
            {
                if (modelName.Contains("_L"))
                {
                    otherPlayer.RideMountWeapon_L();
                }
                else if (modelName.Contains("_R"))
                {
                    otherPlayer.RideMountWeapon_R();

                    otherPlayer.IsLoadingModel = false;
                    if (otherPlayer.WaitChangeState != GlobeVar.INVALID_ID)
                    {
                        int nChangeState = otherPlayer.WaitChangeState;
                        otherPlayer.WaitChangeState = GlobeVar.INVALID_ID;
                        otherPlayer.UpdateOtherPlayerChangeState(nChangeState);
                    }
                }
            }
            else
            {
                if (otherPlayer.LWeaponObject != null || otherPlayer.RWeaponObject != null)
                {
                    otherPlayer.RideOrUnMount(nMountID);
                }
            }
        }
        else
        {
            // fakeobj
            ObjAnimModel objAnim = objRoot.GetComponent<ObjAnimModel>();
            if (objAnim != null)
            {
                if (modelName.Contains("_L"))
                {
                    objAnim.LWeaponObject = weaponModel;
                }
                else if (modelName.Contains("_R"))
                {
                    objAnim.RWeaponObject = weaponModel;
                }
                if (objAnim.FakeObjEffectController != null)
                {
                    if (IsDualWieldWeapon(tableData))
                    {
                        if (objAnim.LWeaponObject != null && objAnim.RWeaponObject != null)
                        {
                            objAnim.FakeObjEffectController.OnLoadWeaponOK(tableData);
                        }
                    }
                    else
                    {
                        if (objAnim.LWeaponObject != null || objAnim.RWeaponObject != null)
                        {
                            objAnim.FakeObjEffectController.OnLoadWeaponOK(tableData);
                        }
                    }
                }
            }
        }

        //武器重新加载之后 初始化武器的材质信息
        Obj _obj = objRoot.GetComponent<Obj>();
        if (_obj != null)
        {
            _obj.InitWeaponMaterialInfo();
        }
    }

    /// <summary>
    /// 是否是双持武器
    /// </summary>
    /// <param name="wm"></param>
    /// <returns></returns>
    bool IsDualWieldWeapon(Tab_WeaponModel wm)
    {
        return (wm.GetWeaponEffectbyIndex(0) > 0 && wm.GetWeaponEffectbyIndex(1) > 0);
    }


    public void OtherView_AsycReloadWeaponOver(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (param1 == null || param2 == null)
        {
            return;
        }
        GameObject objRoot = (GameObject)param1;
        List<object> Params = (List<object>)param2;

        if (null == objRoot || null == Params || Params.Count < 5)
        {
            return;
        }

        string strWeaponPoint = (string)Params[0];
        int nWeaponEffectGem = (int)Params[1];
        Obj_Mount MountObj = (Obj_Mount)Params[2];
//        int nProfession = (int)Params[3];
        int nWeaponDataId = (int)Params[4];
        Vector3 rRotation = (Vector3)Params[5];
        GameObject weaponModel = (GameObject)GameObject.Instantiate(resObj);
        if (null == weaponModel)
        {
            return;
        }

        GameObject playerGameObject = null;
        // 根据是否在坐骑上 确定玩家模型所在位置
        if (MountObj == null)
        {
            playerGameObject = objRoot;
        }
        else
        {
            if (MountObj.MountPlayer == null)
            {
                return;
            }
            playerGameObject = MountObj.MountPlayer.gameObject;
        }

        Transform modelTrans = playerGameObject.transform.FindChild("Model");
        if (modelTrans == null)
        {
            return;
        }

        Transform modelallTrans = modelTrans.FindChild("all");
        if (modelallTrans == null)
        {
            return;
        }

        Transform weaponParent = modelallTrans.FindChild(strWeaponPoint);
        if (weaponParent == null)
        {
            return;
        }

        Transform effectParent;
        //if (nProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
        //{
        //    effectParent = weaponParent.FindChild("Weapon_R");
        //    if (effectParent == null)
        //    {
        //        return;
        //    }
        //}
        //else
        {
            effectParent = weaponParent;
        }

        // 删除武器 逍遥职业特殊 武器节点和特效节点不是同一个
        for (int i = 0; i < weaponParent.childCount; ++i)
        {
            Transform child = weaponParent.GetChild(i);
            if (null != child && null != child.gameObject && child.gameObject.name != "EffectPoint" && child.gameObject.name != effectParent.name)
            {
                GameObject.Destroy(child.gameObject);
            }
        }

        //Quaternion weaponRotation = weaponModel.transform.localRotation;
        weaponModel.transform.parent = weaponParent;
        weaponModel.transform.localPosition = Vector3.zero;
        weaponModel.transform.localScale = Vector3.one;
        weaponModel.transform.localEulerAngles = rRotation;

        Transform[] trans = weaponModel.GetComponentsInChildren<Transform>();
        for (int i = 0; i < trans.Length; ++i)
        {
            trans[i].gameObject.layer = playerGameObject.layer;
        }

        // 加载武器宝石特效
        ObjEffectBehaviourController effectLogic = effectParent.gameObject.GetComponent<ObjEffectBehaviourController>();
        if (null == effectLogic)
        {
            effectLogic = effectParent.gameObject.AddComponent<ObjEffectBehaviourController>();
            effectLogic.InitEffect(effectParent.gameObject);
        }
        if (null != effectLogic)
        {
            effectLogic.ClearEffect();
            Tab_GemAttr tabGemAttr = TableManager.GetGemAttrByID(nWeaponEffectGem, 0);
            if (tabGemAttr != null)
            {
                Tab_Effect tabEffect = TableManager.GetEffectByID(tabGemAttr.EffectID, 0);
                if (tabEffect != null)
                {
                    effectLogic.PlayEffect(tabGemAttr.EffectID);
                }
            }
            //加载神器特效
            Tab_CommonItem _ItemInfo = TableManager.GetCommonItemByID(nWeaponDataId, 0);
            if (_ItemInfo != null &&
                _ItemInfo.ClassID == (int)ItemClass.EQUIP &&
                _ItemInfo.SubClassID == (int)EquipSubClass.WEAPON &&
                _ItemInfo.ThirdClassID == (int)EquipThirdClass.SHENQI)
            {
                Tab_ShenQiInfo _shenQiInfo = TableManager.GetShenQiInfoByID(nWeaponDataId, 0);
                if (_shenQiInfo != null)
                {
                    effectLogic.PlayEffect(_shenQiInfo.ShenQiEffctId);
                }
            }
        }
    }

    public bool ReloadChangeModel(GameObject objRoot, GameObject objModel, string animationPath = null,
        Obj_Mount MountObj = null)
    {
        //判断参数合法性
        if (null == objRoot)
        {
            return false;
        }

        GameObject playerGameObject = null;
        // 根据是否在坐骑上 确定玩家模型所在位置
        if (MountObj == null)
        {
            playerGameObject = objRoot;
        }
        else
        {
            if (null != MountObj.MountPlayer)
            {
                playerGameObject = MountObj.MountPlayer.gameObject;
            }
            else
            {
                return false;
            }
        }

        //如果发现已经有Model节点，则删除之
        Transform modelTransform = playerGameObject.transform.FindChild("Model");
        if (null != modelTransform)
        {
            GameObject.DestroyImmediate(modelTransform.gameObject);
        }

        //创建新的Model节点并挂到objRoot
        if (objModel)
        {
            objModel.transform.parent = playerGameObject.transform;
            objModel.transform.localPosition = Vector3.zero;
            objModel.transform.localRotation = Quaternion.identity;
            objModel.transform.localScale = Vector3.one;

            //设置模型layer的和root一致
            Transform[] trans = objModel.GetComponentsInChildren<Transform>();
            for (int i = 0; i < trans.Length; ++i)
            {
                trans[i].gameObject.layer = playerGameObject.layer;
            }
        }
        return true;
    }

    //将一个加载好的Model加入节点
    public bool ReloadModel(GameObject objRoot, GameObject objModel, string animationPath = null, Obj_Mount MountObj = null)
    {
        //判断参数合法性
        if (null == objRoot)
        {
            return false;
        }

        GameObject playerGameObject = null;
        // 根据是否在坐骑上 确定玩家模型所在位置
        if (MountObj == null)
        {
            playerGameObject = objRoot;
        }
        else
        {
            if (null != MountObj.MountPlayer)
            {
                playerGameObject = MountObj.MountPlayer.gameObject;
            }
            else
            {
                return false;
            }
        }

        //如果发现已经有Model节点，则删除之
        Transform modelTransform = playerGameObject.transform.FindChild("Model");
        if (null != modelTransform)
        {
            GameObject.DestroyImmediate(modelTransform.gameObject);
        }

        //创建新的Model节点并挂到objRoot
        if (objModel)
        {
            objModel.transform.parent = playerGameObject.transform;
            objModel.transform.localPosition = Vector3.zero;
            objModel.transform.localRotation = Quaternion.identity;
            objModel.transform.localScale = Vector3.one;

            //设置模型layer的和root一致
            Transform[] trans = objModel.GetComponentsInChildren<Transform>();
            for (int i = 0; i < trans.Length; ++i)
            {
                trans[i].gameObject.layer = playerGameObject.layer;
            }

            Obj_Character curChar = objRoot.GetComponent<Obj_Character>();
            if (null != curChar)
            {
                if (MountObj == null)
                {
                    if (null != animationPath)
                    {
                        curChar.AnimationFilePath = animationPath;
                    }

                    curChar.InitAnimation();
                    //初始化缓存的材质信息 坐骑加载不需要重置
                    curChar.InitMaterialInfo();
                }
                else
                {
                    if (MountObj.MountPlayer)
                    {
                        MountObj.MountPlayer.AnimationFilePath = animationPath;
                        MountObj.MountPlayer.InitAnimation();
                    }
                }

                curChar.OnSwithObjAnimState(curChar.CurObjAnimState, false);
                curChar.OnReloadModle();

                curChar.ModelNode = objModel;
            }
        }

        return true;
    }

    private Dictionary<string, Obj_Init_Data> m_ShowingNPCList = new Dictionary<string, Obj_Init_Data>();
    private void ShowingNPCList(Obj_Init_Data initData)
    {
        if (null == initData)
        {
            return;
        }
        if (m_ShowingNPCList == null)
        {
            m_ShowingNPCList = new Dictionary<string, Obj_Init_Data>();
        }

        if (!m_ShowingNPCList.ContainsKey(initData.m_ServerID.ToString()))
        {
            m_ShowingNPCList.Add(initData.m_ServerID.ToString(), initData);
        }
    }

    public void ShowNPC()
    {
        if (m_ShowingNPCList == null) return;
        if (m_ShowingNPCList.Count <= 0) return;

        int iShowTag = 1;
        int iTag = 0;
        string[] strNPCName = new string[iShowTag];
        foreach (KeyValuePair<string, Obj_Init_Data> keyValuePair in m_ShowingNPCList)
        {
            if (keyValuePair.Value != null)
            {
                CreateNPC(keyValuePair.Value);
            }
            strNPCName.SetValue(keyValuePair.Key, iTag);

            iTag++;
            if (iTag >= iShowTag) break;
        }

        for (int i = 0; i < strNPCName.Length; i++)
        {
            if (string.IsNullOrEmpty(strNPCName[i])) continue;

            if (m_ShowingNPCList.ContainsKey(strNPCName[i]))
            {
                m_ShowingNPCList[strNPCName[i]] = null;
                m_ShowingNPCList.Remove(strNPCName[i]);
            }
        }

        strNPCName = null;
    }


    //根据类型创建非主角玩家
    public void NewCharacterObj(Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE type, Obj_Init_Data initData)
    {
        switch (type)
        {
            case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC:
                {
                    ShowingNPCList(initData);
                }
                break;
            case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_FELLOW:
                {
                    CreateObjFunction.CreateFellowModel(initData);
                }
                break;
            case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER:
                {
                    CreateObjFunction.CreateOtherPlayer(initData);
                }
                break;
            case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER:
                {
                    CreateObjFunction.CreateZombieUser(initData);
                }
                break; ;
            default:
                break;
        }
    }


    public void NewDropObj(Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE type, Obj_DroopItemData initData)
    {
        switch (type)
        {
            case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_DROP_ITEM:
                {
                    CreateDropItem(initData);
                }
                break;
            default:
                break;
        }

    }
    //根据ServerID来查找Obj
    public Obj FindObjInScene(int nServerID)
    {
        if (m_ObjPools.ContainsKey(nServerID.ToString()))
        {
            return m_ObjPools[nServerID.ToString()];
        }

        return null;
    }

    //根据ServerID来查找Obj_Character
    public Obj_Character FindObjCharacterInScene(int nServerID)
    {
        if (nServerID < 0)
        {
            return null;
        }

        if (m_ObjPools.ContainsKey(nServerID.ToString()))
        {

            return m_ObjPools[nServerID.ToString()] as Obj_Character;
        }

        return null;
    }

    //根据Obj_Character的BaseAttr中的名字来查找NPC
    //遍历，不推荐反复使用
    public Obj_Character FindObjCharacterInSceneByName(string szBaseAttrName, bool bIsAlive = true, float nMinDistance = 8f)
    {
        Obj_Character objTarget = null;
        float minDistance = nMinDistance;

        foreach (KeyValuePair<string, Obj> objPair in m_ObjPools)
        {
            Obj_Character objChar = objPair.Value as Obj_Character;
            if (objChar && objChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC && objChar.BaseAttr.RoleName == szBaseAttrName)
            {
                //是否要寻找非死亡目标
                if (bIsAlive && objChar.IsDie())
                {
                    continue;
                }

                CharacterDefine.REPUTATION_TYPE nType = Reputation.GetObjReputionType(objChar);
                if (nType == CharacterDefine.REPUTATION_TYPE.REPUTATION_INVALID
                    || nType == CharacterDefine.REPUTATION_TYPE.REPUTATION_FRIEND)
                {
                    return objChar;
                }
                else
                {
                    Vector3 UserPos = Singleton<ObjManager>.GetInstance().MainPlayer.Position;
                    float distance = Mathf.Abs(Vector3.Distance(UserPos, objChar.Position));
                    if (distance - minDistance <= 0)
                    {
                        minDistance = distance;
                        objTarget = objChar;
                    }
                }
            }
        }

        return objTarget;
    }

    //查找某个玩家
    public Obj_OtherPlayer FindOtherPlayerInScene(UInt64 guid)
    {
        if (guid == GlobeVar.INVALID_GUID)
        {
            return null;
        }

        foreach (KeyValuePair<string, Obj> objPair in m_ObjPools)
        {
            if (objPair.Value.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                Obj_OtherPlayer objPlayer = objPair.Value as Obj_OtherPlayer;
                if (null != objPlayer && objPlayer.GUID == guid)
                {
                    return objPlayer;
                }
            }
        }

        return null;
    }

    //判断场景中某个Obj是否存在
    public bool IsObjExist(int nServerID)
    {
        return m_ObjPools.ContainsKey(nServerID.ToString());
    }

    //根据ServerID删除场景中的Obj
    public bool RemoveObj(int nServerID)
    {
        Obj obj = FindObjInScene(nServerID);
        if (null != obj)
        {
            ReomoveObjInScene(obj.gameObject);
            return true;
        }

        return false;
    }


    /// <summary>
    /// 删除NPC缓存中对象
    /// </summary>
    /// <param name="isInitiative">是否主动调用删除</param>
    public void DeleteNPCGameObject()
    {
        if (m_DeleteNPCList == null) return;

        List<string> temp = new List<string>();
        int deleteTag = 0;
        foreach (KeyValuePair<string, float> deleteNpc in m_DeleteNPCList)
        {
            if (deleteTag >= 8) break;

            if (null != m_NPCGameObjectList && m_NPCGameObjectList.ContainsKey(deleteNpc.Key))
            {
                ReomoveObjInScene(m_NPCGameObjectList[deleteNpc.Key], true);
                m_NPCGameObjectList[deleteNpc.Key] = null;
                m_NPCGameObjectList.Remove(deleteNpc.Key);
            }

            temp.Add(deleteNpc.Key);
            deleteTag++;

        }

        for (int i = 0; i < temp.Count; i++)
        {
            m_DeleteNPCList.Remove(temp[i]);
        }

        temp.Clear();
        temp = null;
    }

    //删除场景中的Obj
    public bool ReomoveObjInScene(GameObject removeObject, bool isDelete = false)
    {
        if (null == removeObject)
        {
            return false;
        }

        Obj tempObj = removeObject.GetComponent<Obj>();
        if (tempObj)
        {
            if (!isDelete)
            {
                Obj_NPC npc = removeObject.GetComponent<Obj_NPC>();
                if (npc != null)
                {
                    if (null != m_NPCGameObjectList && m_NPCGameObjectList.ContainsKey(removeObject.name))
                    {
                        m_NPCGameObjectList[removeObject.name].SetActive(false);

                        if (m_DeleteNPCList == null)
                        {
                            m_DeleteNPCList = new Dictionary<string, float>();
                        }

                        if (!m_DeleteNPCList.ContainsKey(removeObject.name))
                        {
                            m_DeleteNPCList.Add(removeObject.name, Time.time);
                        }

                        npc.StopNPCEffect();

                        npc = null;
                        removeObject = null;
                        return true;
                    }
                }
            }

            //删除延迟缓存中的NPC列表信息
            if (m_ShowingNPCList != null)
            {
                if (m_ShowingNPCList.ContainsKey(tempObj.ServerID.ToString()))
                {
                    m_ShowingNPCList.Remove(tempObj.ServerID.ToString());
                }
            }

            m_ObjPools.Remove(tempObj.ServerID.ToString());

            for (int i = 0; i < m_ObjOtherPlayerHideList.Count; ++i)
            {
                if (m_ObjOtherPlayerHideList[i].m_serverID == tempObj.ServerID.ToString())
                {
                    m_ObjOtherPlayerHideList.Remove(m_ObjOtherPlayerHideList[i]);
                    break;
                }
            }

            for (int i = 0; i < m_ObjOtherPlayerShowList.Count; ++i)
            {
                if (m_ObjOtherPlayerShowList[i].m_serverID == tempObj.ServerID.ToString())
                {
                    m_ObjOtherPlayerShowList.Remove(m_ObjOtherPlayerShowList[i]);
                    break;
                }
            }

            UpdateHidePlayers();

            //删除名字版
            Obj_Character tempObjCharacter = tempObj as Obj_Character;
            if (tempObjCharacter)
            {
                ResourceManager.UnLoadHeadInfoPrefab(tempObjCharacter.HeadInfoBoard);
                ResourcesManager.Instance.ReduceCachedRef(tempObjCharacter.MainModelUrl, EResourceType.CharacterModel, tempObjCharacter.ObjType);
            }

            ResourceManager.DestroyResource(ref removeObject);
            return true;
        }

        return false;
    }

    //同步场景中的Obj位置
    public void SyncObjectPosition(int nServerId, int nPosX, int nPosZ)
    {
        //如果是自己则不进行同步
        if (Singleton<ObjManager>.GetInstance().MainPlayer.ServerID == nServerId)
        {
            return;
        }

        float fPosX = ((float)nPosX) / 100;
        float fPosZ = ((float)nPosZ) / 100;
        Obj_Character obj = FindObjCharacterInScene(nServerId);
        if (null != obj)
        {
            Vector3 pos = new Vector3(fPosX, obj.gameObject.transform.position.y, fPosZ);
            pos.y = GameManager.gameManager.ActiveScene.GetTerrainHeight(pos);
            //if (GameManager.gameManager.ActiveScene.IsT4MScene())
            //{
            //    pos.y = GameManager.gameManager.ActiveScene.GetTerrainHeight(pos);
            //}
            //else if (null != Terrain.activeTerrain)
            //{
            //    pos.y = Terrain.activeTerrain.SampleHeight(pos);
            //}

            //校验，如果发现距离相差太远，则直接拉过去
            if (Vector3.Distance(pos, obj.Position) > 5.0f || obj.ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                obj.Position = pos;
            }
            else
            {
                obj.MoveTo(pos, null, 0.5f);
            }
        }
    }


    private void AddPoolOtherGameObj(string name, GameObject gObj)
    {
        try
        {
            m_OtherGameObjPools.Add(name, gObj);
        }
        catch (System.Exception ex)
        {
            LogModule.ErrorLog("ObjManager AddPoolOtherGameObj(" + name + "," + "Error: " + ex.Message);
        }
    }

    // 返回隐藏权重值
    public static int GetVisibleValue(Obj_Character obj)
    {
        if (obj == null)
        {
            LogModule.ErrorLog("GetVisibleValue called but parameter obj is null!");
            return 0;
        }
        // 权重值越大，隐藏优先级越低，显示优先级越高
        if (Reputation.GetObjReputionType(obj) == CharacterDefine.REPUTATION_TYPE.REPUTATION_HOSTILE)
        {
            return 100;
        }

        if (Reputation.GetObjReputionType(obj) == CharacterDefine.REPUTATION_TYPE.REPUTATION_FRIEND)
        {
            return 50;
        }
        return 0;
    }

    //根据Gameobject的Name在非Obj池查找
    public GameObject FindOtherGameObj(string strName)
    {
        if (m_OtherGameObjPools.ContainsKey(strName))
        {
            return m_OtherGameObjPools[strName];
        }

        return null;
    }

    //删除场景中非obj池 中的GameObject
    public bool RemoveOtherGameObj(string strName)
    {
        GameObject removeObject = FindOtherGameObj(strName);
        if (null == removeObject)
        {
            return false;
        }

        if (m_OtherGameObjPools.Remove(removeObject.name))
        {
            ResourceManager.DestroyResource(ref removeObject);
            return true;
        }
        return false;
    }

    // 根据屏蔽规则判断隐藏的玩家是否可以显示
    public void UpdateHidePlayers()
    {
        if (m_ObjOtherPlayerShowList.Count > PlayerPreferenceData.SystemShowOtherPlayerCount)
        {
            // 当前显示的已经超过预期，将多余的隐藏
            int canHideCount = m_ObjOtherPlayerShowList.Count - PlayerPreferenceData.SystemShowOtherPlayerCount;

            canHideCount = canHideCount > m_ObjOtherPlayerShowList.Count ? m_ObjOtherPlayerShowList.Count : canHideCount;

            for (int i = 0; i < canHideCount; i++)
            {
                // 排在显示队列末尾的拥有比较高的显示优先级
                Obj_HidePlayerData curObjData = m_ObjOtherPlayerShowList[m_ObjOtherPlayerShowList.Count - 1];
                m_ObjOtherPlayerShowList.RemoveAt(m_ObjOtherPlayerShowList.Count - 1);

                if (m_ObjPools.ContainsKey(curObjData.m_serverID))
                {
                    Obj_OtherPlayer curChar = m_ObjPools[curObjData.m_serverID] as Obj_OtherPlayer;
                    m_ObjOtherPlayerHideList.Add(curObjData);
                    if (null != curChar)
                    {
                        curChar.SetVisible(false);
                    }
                }
            }
        }
        else
        {
            // 当前显示不足预期，放开显示
            int canShowCount = PlayerPreferenceData.SystemShowOtherPlayerCount - m_ObjOtherPlayerShowList.Count;

            canShowCount = canShowCount > m_ObjOtherPlayerHideList.Count ? m_ObjOtherPlayerHideList.Count : canShowCount;
            for (int i = 0; i < canShowCount; i++)
            {
                Obj_HidePlayerData curObjData = m_ObjOtherPlayerHideList[0];
                m_ObjOtherPlayerHideList.RemoveAt(0);

                if (m_ObjPools.ContainsKey(curObjData.m_serverID))
                {
                    Obj_OtherPlayer curChar = m_ObjPools[curObjData.m_serverID] as Obj_OtherPlayer;
                    m_ObjOtherPlayerShowList.Add(curObjData);
                    if (null != curChar)
                    {
                        curChar.SetVisible(true);
                        //判断是否已经下载模型。如果没加载模型，加载模型
                        Transform childTrans = curChar.transform.FindChild("Model");
                        if (childTrans == null)
                        {
                            CreateObjFunction.CreateOtherPlayerHided(curChar, curObjData);
                        }
                        else
                        {
                            curChar.RideOrUnMount(curChar.MountID);
                        }
                        childTrans = null;
                    }
                }
            }
        }
    }

    public void TestOtherPlayerVisible(Obj_OtherPlayer curPlayer)
    {
        if (curPlayer == null)
        {
            LogModule.ErrorLog("TestOtherPlayerVisible called but curPlayer is null!");
            return;
        }
        m_ObjOtherPlayerShowList.Add(new Obj_HidePlayerData(curPlayer.ServerID.ToString(), GetVisibleValue(curPlayer)));
        UpdateHidePlayers();
    }

    //add by mawenbin 
    //comment code for building begin
    public static void AddOutLineMaterial(GameObject parentObj)
    {
        //#if UNITY_WP8
        //        return;
        //#endif
        if (PlayerPreferenceData.SystemWallVisionEnable == false)
        {
            return;
        }
        foreach (SkinnedMeshRenderer curMeshRender in parentObj.GetComponentsInChildren<SkinnedMeshRenderer>())
        {
            if (curMeshRender.gameObject.name.StartsWith("Qicheng_"))
            {
                continue;
            }
            if (curMeshRender.gameObject.name.StartsWith("Qc_"))
            {
                continue;
            }
            Material[] newMaterialArray = new Material[curMeshRender.materials.Length + 1];
            for (int i = 0; i < curMeshRender.materials.Length; i++)
            {
                if (curMeshRender.materials[i].name.Contains("PlayerXplay"))
                {
                    return;
                }
                else
                {
                    newMaterialArray[i] = curMeshRender.materials[i];
                }
            }

            UnityEngine.Object playerXPlayObj = Resources.Load("Material/PlayerXplay");
            if (null != playerXPlayObj)
            {
                newMaterialArray[curMeshRender.materials.Length] = GameObject.Instantiate(playerXPlayObj) as Material;
            }

            curMeshRender.materials = newMaterialArray;

        }
    }

    public static void RemoveOutLineMaerial(GameObject parentObj)
    {
        foreach (SkinnedMeshRenderer curMeshRender in parentObj.GetComponentsInChildren<SkinnedMeshRenderer>())
        {
            int newMaterialArrayCount = 0;
            for (int i = 0; i < curMeshRender.materials.Length; i++)
            {
                if (curMeshRender.materials[i].name.Contains("PlayerXplay"))
                {
                    newMaterialArrayCount++;
                }
            }

            if (newMaterialArrayCount > 0)
            {
                Material[] newMaterialArray = new Material[newMaterialArrayCount];
                int curMaterialIndex = 0;
                for (int i = 0; i < curMeshRender.materials.Length; i++)
                {
                    if (curMaterialIndex >= newMaterialArrayCount)
                    {
                        break;
                    }
                    if (!curMeshRender.materials[i].name.Contains("PlayerXplay"))
                    {
                        newMaterialArray[curMaterialIndex] = curMeshRender.materials[i];
                        curMaterialIndex++;
                    }
                }

                curMeshRender.materials = newMaterialArray;
            }
        }
    }
    //comment code for building end
}

