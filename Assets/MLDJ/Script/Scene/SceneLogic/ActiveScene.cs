/********************************************************************************
 *	文件名：	ActiveSceneManager.cs
 *	全路径：	\Script\Scene\ActiveSceneManager.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-29
 *
 *	功能说明：游戏当前激活场景,负责游戏的场景数据保存和提供常用方法
 *	修改记录：
*********************************************************************************/

using System;
using System.Runtime.Remoting.Messaging;
using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using Module.Log;
using System.IO;
using GCGame;
namespace Games.Scene
{
    public class Scene_Init_Data
    {
        Scene_Init_Data()
        {
            m_bIsValid = false;
        }

        public bool m_bIsValid;         //该结构体是否合法，创建的时候不合法，必须手动赋值后再设置该项
        public int m_nCurSceneSrvID;    //场景服务器ID
    }

    public class ActiveScene
    {
        private GameObject m_MainCamera; //主摄像机
        /// <summary>
        /// 场景主摄像机
        /// </summary>
        public GameObject MainCamera 
        {
            get { return m_MainCamera; }
        }

        private int m_nCurSceneServerID;  //当前场景的服务器ID（考虑到副本场景可能资源ID和场景服务器ID不一致的情况）
        public int CurSceneServerID
        {
            get { return m_nCurSceneServerID; }
            set { m_nCurSceneServerID = value; }
        }

		private int m_nDifficulty;
		public int Difficulty
		{
			get { return m_nDifficulty; }
			set { m_nDifficulty = value; }
		}

		private float m_fStartTime;
		public float StartTime
		{
			get { return m_fStartTime; }
			set { m_fStartTime = value; }
		}

		private int m_nExistTime;
		public int ExistTime
		{
			get { return m_nExistTime; }
			set { m_nExistTime = value; }
		}

        private GameObject m_UIRoot;      //当前场景UI根节点
        public GameObject UIRoot
        {
            get { return m_UIRoot; }
            set { m_UIRoot = value; }
        }

        public GameObject NameBoardRoot { set; get; }

        public GameObject FakeObjRoot { get; set; }
        public GameObject FakeObjTrans
        {
            get { return FakeObjRoot.transform.FindChild("TransformOff").gameObject; }
        }

        private GameObject[] m_SceneAudioSources;
        public GameObject[] SceneAudioSources
        {
            get { return m_SceneAudioSources; }
            set { m_SceneAudioSources = value; }
        }
        private GameObject m_Teleport;      // 传送点
        public GameObject Teleport
        {
            get { return m_Teleport; }
            set { m_Teleport = value; }
        }
        private GameObject m_TeleportCopyScene;      // 传送下一个副本
        public GameObject TeleportCopyScene
        {
            get { return m_TeleportCopyScene; }
            set { m_TeleportCopyScene = value; }
        }
        private GameObject m_DamageBoardRoot = null;
        public GameObject DamageBoardRoot
        {
            get { return m_DamageBoardRoot; }
        }
        public DamageBoardManager m_DamageBoardManager = null;
        public DamageBoardManager DamageBoardManager
        {
            get { return m_DamageBoardManager; }
        }

        private GameObject[] m_QingGongPointList;
        public GameObject[] QingGongPointList
        {
            get { return m_QingGongPointList; }
            set { m_QingGongPointList = value; }
        }

        private SceneEffectBehaviourController m_sceneEffect;

        public SceneEffectBehaviourController SceneEffect
        {
            get { return m_sceneEffect; }
        }

        private float m_ChangeTime = -1;
        private float m_SceneTimeScaleStart = -1;
        //地形文件
        //private TerrainManager m_TerrainData = null;
        //public TerrainManager TerrainData
        //{
        //    get { return m_TerrainData; }
        //    set { m_TerrainData = value; }
        //}

        //名字版池子
        private GameObjectPool m_NameBoardPool = null;
        public GameObjectPool NameBoardPool
        {
            get { return m_NameBoardPool; }
            set { m_NameBoardPool = value; }
        }

        //掉落包节点
        public GameObject DropItemBoardRoot { set; get; }
        //////////////////////////////////////////////////////////////////////////
        //地面特效部分
        //////////////////////////////////////////////////////////////////////////
        private GameObject m_MovingCircle = null;      //地表移动特效
        private GameObject m_SelectCircle = null;      //NPC选中特效

        private GameObject m_SelectObj = null;         //NPC脚下光圈的目标
        public UnityEngine.GameObject SelectObj
        {
            get { return m_SelectObj; }
            set { m_SelectObj = value; }
        }

		// 方向引导圈特效
		private GuideDirectionSign m_GuideDirSign = null;

        private float m_curMainPlayerCircleScale = 1;

        private float m_curMainPlayerCircleScaleOnMount = 1;

		/// <summary>
		/// 显示主角脚底圈和引导箭头
		/// </summary>
		public void ShowGuideDirSign()
		{
			if (m_GuideDirSign != null)
			{
				m_GuideDirSign.gameObject.SetActive(true);
			}
		}

		/// <summary>
		/// 设定引导箭头的引导目的地
		/// </summary>
		/// <param name="sceneId">Scene identifier.</param>
		/// <param name="posX">Position x.</param>
		/// <param name="posZ">Position z.</param>
		public void SetGuideDestination (int sceneId, float posX, float posZ, int showDestEffect)
		{
			if (m_GuideDirSign != null)
			{
				m_GuideDirSign.SetDest(sceneId, posX, posZ, showDestEffect);
			}
		}

        public bool GetGuideDestination(ref float x, ref float z)
        {
            return m_GuideDirSign.GetDest(ref x, ref z);
        }

        //设置移动特效状态和位置
        public void ActiveMovingCircle(Vector3 pos)
        {
            if (null == m_MovingCircle)
            {
                return;
            }
            
            if (!m_MovingCircle.activeSelf)
            {
                m_MovingCircle.SetActive(true);
            }

            for (int i = 0; i < m_MovingCircle.transform.childCount; ++i)
            {
                GameObject child = m_MovingCircle.transform.GetChild(i).gameObject;
                if (null != child)
                {
                    ParticleSystem particle = child.GetComponent<ParticleSystem>();
                    if (null != particle)
                    {
                        particle.time = 0.0f;
                    }
                }
            }

			m_MovingCircle.transform.position = pos + Vector3.up * 0.1f;

            if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.IsHitPoint = true;
            }
        }

        public void DeactiveMovingCircle()
        {
            if (null != m_MovingCircle)
            {
                m_MovingCircle.SetActive(false);
            }

            if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.IsHitPoint = false;
            }
        }
        
        //设置选择特效状态和位置
        public void ActiveSelectCircle(GameObject obj)
        {
            //在开启显示服务器主角位置的情况下，选中特效作为位置显示使用，不参与选中逻辑
            if (GameManager.gameManager.ShowMainPlayerServerTrace)
            {
                return;
            }

            if (null == m_SelectCircle || null == obj)
            {
                return;
            }

            //激活
            m_SelectCircle.SetActive(true);
            m_SelectObj = obj;
            m_SelectCircle.transform.position = obj.transform.position;
        }

        public void DeactiveSelectCircle()
        {
            //在开启显示服务器主角位置的情况下，选中特效作为位置显示使用，不参与选中逻辑
            if (GameManager.gameManager.ShowMainPlayerServerTrace)
            {
                return;
            }

            if (null != m_SelectCircle)
            {
                m_SelectCircle.SetActive(false);
            }

            m_SelectObj = null;
        }

        private void UpdateSelectCircle()
        {
            //在开启显示服务器主角位置的情况下，选中特效作为位置显示使用，不参与选中逻辑
            if (GameManager.gameManager.ShowMainPlayerServerTrace)
            {
                return;
            }

            if (null != m_SelectObj && null != m_SelectCircle)
            {
                m_SelectCircle.transform.position = m_SelectObj.transform.position;
            }
        }

        //主角服务器位置测试选项
        public void ShowMainPlayerServerPosition(float fX, float fZ)
        {
            if (false == GameManager.gameManager.ShowMainPlayerServerTrace)
            {
                return;
            }
            
            if (null != m_SelectCircle)
            {
                m_SelectCircle.SetActive(true);
                Vector3 pos = new Vector3(fX, 0, fZ);
                pos.y = Singleton<ObjManager>.GetInstance().MainPlayer.ObjTransform.position.y;

                m_SelectCircle.transform.position = pos;
            }
        }

        /// <summary>
        /// 场景初始化
        /// </summary>
        private void SceneInit()
        {
            NameBoardRoot = GameObject.Find("CharacterRoot");
            if (NameBoardRoot == null)
            {
                NameBoardRoot = ResourceManager.InstantiateResource("Prefab/HeadInfo/NameBoardRoot") as GameObject;
            }

            FakeObjRoot = GameObject.Find("FakeObjRoot");
            if (FakeObjRoot == null)
            {
                FakeObjRoot = ResourceManager.InstantiateResource("Prefab/HeadInfo/FakeObjRoot") as GameObject;
                FakeObjRoot.SetActive(false);
            }

            DropItemBoardRoot = GameObject.Find("DropItemBoardRoot");
            if (DropItemBoardRoot == null)
            {
                DropItemBoardRoot = ResourceManager.InstantiateResource("Prefab/HeadInfo/DropItemBoardRoot") as GameObject;
            }


            //初始化特效
            m_MovingCircle = GameObject.Find("cb_dituzhizhen_02");
            if (null == m_MovingCircle)
            {
                m_MovingCircle = ResourceManager.InstantiateResource("Prefab/Effect/cb_dituzhizhen_02") as GameObject;
                if (null != m_MovingCircle)
                {
                    m_MovingCircle.transform.position = Vector3.zero;
                    m_MovingCircle.transform.rotation = Quaternion.Euler(Vector3.zero);
                    m_MovingCircle.SetActive(false);
                }
            }

            m_SelectCircle = GameObject.Find("SelectCircle");
            if (null == m_SelectCircle)
            {
                m_SelectCircle = ResourceManager.InstantiateResource("Prefab/Effect/SelectCircle") as GameObject;
                if (null != m_SelectCircle)
                {
                    m_SelectCircle.transform.position = Vector3.zero;
                    m_SelectCircle.transform.rotation = Quaternion.Euler(Vector3.zero);
                    m_SelectCircle.SetActive(false);
                }
            }

            // 方向指引
            GameObject guideDirSignObj = GameObject.Find("cb_dituzhizhen_01");
            if (null == guideDirSignObj)
            {
                guideDirSignObj = ResourceManager.InstantiateResource("Prefab/Effect/cb_dituzhizhen_01") as GameObject;
                m_GuideDirSign = guideDirSignObj.AddComponent<GuideDirectionSign>();
                if (null != m_GuideDirSign)
                {
                    m_GuideDirSign.m_circleTrans = guideDirSignObj.transform;
                    m_GuideDirSign.m_circleTrans.position = Vector3.zero;
                    m_GuideDirSign.m_circleTrans.rotation = Quaternion.Euler(Vector3.zero);
                    guideDirSignObj.SetActive(false);
                }
            }
            else
            {
                m_GuideDirSign = guideDirSignObj.GetComponent<GuideDirectionSign>();
            }

            if (m_GuideDirSign != null)
            {
                m_GuideDirSign.Init();
                m_GuideDirSign.SetGuideEffectScale(m_curMainPlayerCircleScale);
            }
            m_Teleport = GameObject.Find("Teleport");
            if (m_Teleport != null)
            {
                if (IsCopyScene())
                {
                    m_Teleport.SetActive(false);
                }
            }
            m_TeleportCopyScene = GameObject.Find("TeleportCopyScene");
            if (m_TeleportCopyScene)
            {
                if (IsCopyScene())
                {
                    m_TeleportCopyScene.SetActive(false);
                }
            }
            if (null == m_DamageBoardRoot)
            {
                m_DamageBoardRoot = new GameObject("DamageBoard Root");
                if (null != m_DamageBoardRoot)
                {
                    UIPanel panel = m_DamageBoardRoot.AddComponent<UIPanel>();
                    if (null != panel)
                    {
                        panel.depth = 20;
                    }
                    m_DamageBoardRoot.transform.localScale = new Vector3(0.015f, 0.015f, 0.015f);

                    m_DamageBoardManager = m_DamageBoardRoot.AddComponent<DamageBoardManager>();
                }
            }

            m_QingGongPointList = GameObject.FindGameObjectsWithTag("QingGongPoint");
            for (int i = 0; i < m_QingGongPointList.Length; ++i)
            {
                if (IsCopyScene() && m_QingGongPointList[i] != null)
                {
                    m_QingGongPointList[i].SetActive(false);
                }
            }

            //声音资源
            m_SceneAudioSources = GameObject.FindGameObjectsWithTag("SceneSoundEffect");
            for (int i = 0; i < m_SceneAudioSources.Length; ++i)
            {
                if (m_SceneAudioSources[i] != null && PlayerPreferenceData.SystemSoundEffect == 0)
                {
                    m_SceneAudioSources[i].SetActive(false);
                }
            }

            //初始化Terrain数据
            if (GameManager.gameManager != null)
            {
                GameManager.gameManager.m_loadErrorNum = 0;
            }

            //初始化名字版池子
            if (null == m_NameBoardPool)
            {
                m_NameBoardPool = new GameObjectPool("HeadInfo", 128);
            }

            if (null != m_NameBoardPool)
            {
                m_NameBoardPool.ClearAllPool();
            }

            if (m_MainCamera == null)
            {
                m_MainCamera = GameObject.Find("Main Camera");
            }
        }

        public bool Init()
		{
            m_UIRoot = GameObject.Find("UI Root");
            if (null == m_UIRoot)
            {
                LogModule.WarningLog("can not find uiroot in curscene");
            }
            else
            {
                if (null == m_UIRoot.GetComponent<UIManager>())
                {
                    m_UIRoot.AddComponent<UIManager>();
                }
            }

            GameObject sceneEffect = new GameObject("SceneEffect");
            Utils.ResetTransform(sceneEffect.transform);
            m_sceneEffect = sceneEffect.AddComponent<SceneEffectBehaviourController>();
            m_sceneEffect.InitEffect(sceneEffect);

            if ((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN != GameManager.gameManager.RunningScene)
            {
                SceneInit();
            }

			else
			{
				FakeObjRoot = GameObject.Find("FakeObjRoot");
				if (FakeObjRoot == null)
				{
					FakeObjRoot = ResourceManager.InstantiateResource("Prefab/HeadInfo/FakeObjRoot") as GameObject;
					FakeObjRoot.SetActive(false);
				}
			}

            return true;
        }

        public void Update()
        {
            UpdateSelectCircle();
            //UpdateMovingCircle();
            UpdateSceneTimeScale();
        }

        public void RelaseActiveSceneData()
        {
            m_nCurSceneServerID = GlobeVar.INVALID_ID;
            m_UIRoot = null;
            NameBoardRoot = null;
            //m_TerrainData = null;
            m_MovingCircle = null;
            m_SelectCircle = null;
			m_GuideDirSign = null;
            m_Teleport = null;
            m_TeleportCopyScene = null;
            m_QingGongPointList = null;
            m_NameBoardPool = null;
            m_DamageBoardRoot = null;
            m_DamageBoardManager = null;
            m_SceneAudioSources = null;
        }

        public void SceneTimeScale(int nTimeScaleType)
        {
            if (nTimeScaleType == 0)
            {
                Time.timeScale = 0.2f;
                m_ChangeTime = 0.6f;
                m_SceneTimeScaleStart = Time.fixedTime;
            }
            else if (nTimeScaleType == 1) //todo 临时实验代码
            {
//                 Time.timeScale = 0.5f;
//                 m_ChangeTime = 0.1f;
//                 m_SceneTimeScaleStart = Time.fixedTime;
            }
        }

        void UpdateSceneTimeScale()
        {
            if (m_ChangeTime > 0)
            {
                if (Time.fixedTime - m_SceneTimeScaleStart >= m_ChangeTime)
                {
                    m_SceneTimeScaleStart = -1;
                    m_ChangeTime = -1;
                    Time.timeScale = 1;
                }
            }
        }

        //判断是否为T4M场景，只要判断有没有高度图raw文件即可
        //public bool IsT4MScene()
        //{
        //    return (m_TerrainData != null);
        //}

        public float GetTerrainHeight(Vector3 pos)
        {
            //if (null != m_TerrainData)
            //{
            return ActiveScene.GetTerrainPosition(pos).y;
            //}
//
//            return 0;
        }

        //根据给定点获得在导航网格上的高度
        public float GetNavSampleHeight(Vector3 pos)
        {
            NavMeshHit hit;
            if (NavMesh.SamplePosition(pos,out hit, 100.0f, -1))
            {
                return hit.position.y;
            }            

            return 0.0f;
        }
        
		public int GetStoryCopySceneID()
		{
			if (IsStoryCopyScene())
			{
				Tab_SceneClass scLine = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
				if (scLine != null)
				{
					return scLine.CopySceneID;
				}
			}

			return -1;
		}

        public bool IsCopyScene()
        {
            Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
            if (tabSceneClass != null)
            {
                if (tabSceneClass.Type == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_TYPE.SCENETYPE_COPYSCENE
                    || tabSceneClass.Type == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_TYPE.SCENETYPE_STORYCOPYSCENE)
                {
                    return true;
                }
            }
            return false;
        }
		public bool IsStoryCopyScene()
		{
			Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
			if (tabSceneClass != null)
			{
				if (tabSceneClass.Type == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_TYPE.SCENETYPE_STORYCOPYSCENE)
				{
					return true;
				}
			}
			return false;
		}

//		public int GetCopySceneExistTime()
//		{
//			Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
//			if (tabSceneClass == null)
//			{
//				return -1;
//			}
//
//			if( !IsCopyScene() && !IsStoryCopyScene() )
//			{
//				return -1;
//			}
//
//			int nCopySceneID = tabSceneClass.CopySceneID;
//			if( IsStoryCopyScene() )
//			{
//				Tab_StoryCopyScene tabCopyScene = TableManager.GetStoryCopySceneByID(nCopySceneID,0);
//				return tabCopyScene.ExistTime;
//				
//			}
//			else if( IsCopyScene() )
//			{
//				Tab_CopyScene tabCopyScene = TableManager.GetCopySceneByID(nCopySceneID,0);
//
//				// 需要添加rule 
////				if ( )
////				{
////				}
////				else
//				{
//					return tabCopyScene.ExistTime;
//				}
//			}
//
//
//			//if(tabSceneClass.)
//			return -1;
//		}

		public string GetSceneName()
		{
			Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
			if (tabSceneClass != null)
			{
				return tabSceneClass.Name;
			}
			return "";
		}

        public bool IsWildeScene()
        {
            Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
            if (tabSceneClass != null)
            {
                if (tabSceneClass.Type == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_TYPE.SCENETYPE_WILDCITY)
                {
                    return true;
                }
            }
            return false;
        }
        public void SetSceneSoundEffect(bool bIsActive)
        {
            for (int i = 0; i < m_SceneAudioSources.Length; ++i)
            {
                if (m_SceneAudioSources[i] != null)
                {
                    m_SceneAudioSources[i].SetActive(bIsActive);
                }
            }
        }


        public static Vector3 GetTrrainPositionByAndroid(Vector3 orgPosition)
        {
            Vector3 newPosition = orgPosition;

            return newPosition;
        }


        public static LayerMask MoveLayerMask = 1 << 12;
        private static RaycastHit m_moveRaycastHit;
        //public static bool IsUseRaycast = true;

        /// <summary>
        /// 
        /// </summary>
        /// <param name="orgPosition"></param>
        /// <param name="isTag">标记Android下，是否读取默认配置中的值。只在场景首次加载时使用</param>
        /// <returns></returns>
        static public Vector3 GetTerrainPosition(Vector3 orgPosition)
        {
            if (null == GameManager.gameManager)
            {
                return orgPosition;
            }

            Vector3 newPosition = orgPosition;

            /*if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ERHAI)
            {
                //暂时添加
                newPosition.y = 17.5f;
            }
            else*/
            {
                /// 只有在新手场景中使用
                if (JtddSceneControl.CurrentSceneTag == 1 && orgPosition.z < 0)
                {
                    newPosition.y = 39.75f;
                    return newPosition;
                }

                Vector3 pointVector3 = orgPosition;
                pointVector3.y = 400f;

                if (Physics.Raycast(new Ray(pointVector3, -Vector3.up), out m_moveRaycastHit, 500,
                    MoveLayerMask))
                {
                    //打到点
                    orgPosition.y = m_moveRaycastHit.point.y + 0.2f;
                    return orgPosition;
                }
            }

            return newPosition;

            //if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU)
            //{
            //    //暂时添加
            //    newPosition.y = 17.5f;
            //}
            //else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JIANHUGONG)
            //{
            //    //暂时添加
            //    newPosition.y = 15.5f;
            //}
            //else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ERHAI)
            //{
            //    newPosition.y = 18.0f;
            //}
            ////else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU)
            ////{
            ////    newPosition.y = 20.5f;
            ////}
            //else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JIANYU)
            //{
            //    newPosition.y = 15.5f;
            //}
            //else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_GUILDWAR)
            //{
            //    newPosition.y = 20.0f;
            //}
            //else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WUDAOZHIDIAN ||
            //         GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUASHANLUNJIAN ||
            //         GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YUQINGGONG ||
            //         GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_RICHANGJUEDOU ||
            //         GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WULINDAHUI)
            //{
            //    newPosition.y = 22.7f;
            //}
            //else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUTOUZHANCHUAN)
            //{
            //    newPosition.y = 7.3f;
            //}
            ////else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WUCHANG)
            ////{
            ////    newPosition.y = 15.2f;
            ////}
            //else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN)
            //{
            //    newPosition.y = 6.2f;
            //}
            //else
            //{
                //if (!isTag)
                //{
                //    if (GameManager.gameManager.RunningScene < Games.GlobeDefine.GameDefine_Globe.SceneHeight.Length
                //        && GameManager.gameManager.RunningScene >= 0)
                //    {
                //        newPosition.y = Games.GlobeDefine.GameDefine_Globe.SceneHeight[GameManager.gameManager.RunningScene];
                //    }
                //    else
                //    {
                //        newPosition.y = 0.0f;
                //    }
                //}
            //}
        }

        public void InitFakeObjRoot(GameObject topleft, GameObject bottomright)
        {
            CameraFakeObjct fakeObj = FakeObjRoot.GetComponent<CameraFakeObjct>();
            if (null != fakeObj)
            {
                fakeObj.m_TopLeft = topleft;
                fakeObj.m_BottomRight = bottomright;
                fakeObj.Init();
            }
        }

        public void ShowFakeObj()
        {
            if (FakeObjRoot != null)
            {
                FakeObjRoot.SetActive(true);
            }
        }

        public void HideFakeObj()
        {
            if (FakeObjRoot != null)
            {
                FakeObjRoot.SetActive(false);
            }
        }
        /// <summary>
        /// 处理主玩家 脚下光圈缩放
        /// </summary>
        public void SetMainPlayerCircleSize(float value)
        {
            m_curMainPlayerCircleScale = value;
            if (m_GuideDirSign != null)
            {
                m_GuideDirSign.SetGuideEffectScale(m_curMainPlayerCircleScale);
            }
        }

        public void SetMainPlayerCircleSizeOnMount(float value)
        {
            m_curMainPlayerCircleScaleOnMount = value;
            if (m_GuideDirSign != null)
            {
                m_GuideDirSign.SetGuideEffectScale(m_curMainPlayerCircleScaleOnMount);
            }
        }

        public void OnMainPlayerMountOff()
        {
            if (m_GuideDirSign != null)
            {
                m_GuideDirSign.SetGuideEffectScale(m_curMainPlayerCircleScale);
            }
        }
    }
}
