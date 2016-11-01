/********************************************************************************
 *	文件名：	SceneLogic.cs
 *	全路径：	\Script\Scene\SceneLogic.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-29
 *
 *	功能说明：游戏场景逻辑，
 *	         负责本场景内的场景相关逻辑
 *	         每一个场景挂接一个，这样就保证在场景切换完成之后可以进行操作
 *	修改记录：
*********************************************************************************/

using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;
using GCGame.Table;
using Module.Log;
using GCGame;
using Games.LogicObj;

#if BOBJOYSTICK
using Engine.JoyUI;
#endif
namespace Games.Scene
{
    public enum Scene_Const_Value
    {
        MAX_SCENE_MUSIC_NUM = 3,
    }

    public class SceneLogic : MonoBehaviour
    {
		// 控制场景中角色显示的过滤器
		public enum ECharacterDisplayFilter
		{
			ShowNothing		= 0,
			ShowMainPlayer	= 1,
			ShowOtherPlayer = 2,
			ShowNPC			= 4,

			ShowAllPlayer	= 3,
			ShowAll			= 7,
		}

		public ECharacterDisplayFilter CharacterDisplayFilter = ECharacterDisplayFilter.ShowAll;

        void Awake()
        {
            //设置当前场景
            if (null == GameManager.gameManager)
            {
                ResourceManager.InstantiateResource("Prefab/Logic/GameManager", "GameManagerObject");
				if (null != GameManager.gameManager)
				{
					GameManager.gameManager.Init();
				}
				else
				{
					LogModule.ErrorLog("Create GameManagerInstance failed");
				}
            }

            if (null == PlatformListener.Instance())
            {
                ResourceManager.InstantiateResource("Prefab/Logic/PlatformListener", "PlatformListener");
            }
            //将当前场景SceneLogic放入GameManager暂存
            GameManager.gameManager.SceneLogic = this;
            
			ResourceManager.InstantiateResource("Prefab/Logic/FingerGestures", "FingerGestures");

            // 将Debug工具挂入场景，如发布正式版，注释掉此行代码
            DebugHelper.CreateDebugHelper();
			CreateAndroidHelper ();//```````````````````
            Singleton<ObjManager>.GetInstance().OnEnterScene();

            // 动态加载场景无法加载SHADER问题
#if UNITY_EDITOR
            GameObject SceneObj = GameObject.Find("Scene");
            if (null != SceneObj && SceneObj.GetComponent<ShaderFix>() == null)
            {
                SceneObj.AddComponent<ShaderFix>();
            }

            TeleportPoint[] Teleports = GameObject.FindObjectsOfType<TeleportPoint>();
            foreach (TeleportPoint curTeleport in Teleports)
            {
                if (curTeleport.gameObject.GetComponent<ShaderFix>() == null)
                {
                    curTeleport.gameObject.AddComponent<ShaderFix>();
                }
            }
            
#endif
            GameManager.gameManager.ActiveScene.Init();

            //为了防止低端机型在场景切换完成和人物创建完成之间会照到空白的地方，这里先调整一下摄像机的位置
            if (null != Camera.main)
            {
                Vector3 camInitPos = GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterScenePos;
                camInitPos = ActiveScene.GetTerrainPosition(camInitPos);
                camInitPos.y += 8.0f;
                Camera.main.transform.position = camInitPos;
            }

            //初始化场景通路图
            if (null != GameManager.gameManager.AutoSearch)
            {
                GameManager.gameManager.AutoSearch.InitMapConnectPath();
            }

            //设置是否可处理消息包
            NetWorkLogic.GetMe().CanProcessPacket = true;

			// 广播进入场景消息
			if (GameManager.gameManager.RunningScene != (int)GameDefine_Globe.SCENE_DEFINE.SCENE_LOADINGSCENE)
			{
				Messenger.Broadcast(MessengerConst.OnEnterSceneFinish);
			}
        }
		//add AndroidHelp by wjf
		public static void CreateAndroidHelper()
		{
			GameObject helperInstance = ResourceManager.InstantiateResource("Prefab/Logic/AndroidHelper", "AndroidHelper") as GameObject;
		}
        /// <summary>
        /// 日志检测处理方法
        /// </summary>
        /// <param name="message"></param>
        /// <param name="stacktrace"></param>
        /// <param name="type"></param>
        public void OnLog(string message, string stacktrace, LogType type)
        {
            if (UnityGuiConsole.Instance != null)
            {
                UnityGuiConsole.Instance.LogCallback(message, stacktrace, type);
            }
            switch (type)
            {
                case LogType.Exception:
                {
                    string butMsg = "{\n" +
                    "\"message\":" + "\"" + message.Replace("\n", "") + "\"" +
                        ",\n\"stacktrace\":" + "\"" + stacktrace.Replace("\n", "") + "\"" +
                        ",\n\"time\":" + "\"" + PlatformHelper.getcurrentTime() + "\""
                        + "\n" + "\"" + "\n}";
                 
                    //PlatformHelper.UploadBug(butMsg);
                    LogModule.DebugLog(butMsg);
                    break;
                }
                case  LogType.Log:
                    LogModule.DebugLog(message);
                    break;
                case LogType.Warning:
                    LogModule.WarningLog(message);
                    break;
                case LogType.Error:
                    LogModule.ErrorLog(message);
                    break;
            }
        }
        
        private void OnEnable()
        {
            //注册Tessar回调
            Application.RegisterLogCallback(OnLog);
        }

        private void OnDisable()
        {
            //取消Tessar回调
            Application.RegisterLogCallback(null);
        }

        // Use this for initialization
        //场景内部初始化在此进行
        void Start()
        {
            if ((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN != GameManager.gameManager.RunningScene)
            {
				// login scene will call play bg self
				PlaySceneMusic();
                Singleton<CollectItem>.GetInstance().InitCollectItem(GameManager.gameManager.RunningScene);
            }

            //StartCoroutine(BundleManager.BundleQueueLoadTick());
        }

        public void PlaySceneMusic()
        {
            if (null == GameManager.gameManager.SoundManager)
            {
                return;
            }

            Tab_SceneClass tab = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
            if (tab == null)
            {
                return;
            }

            if (tab.BGMusic < 0)
            {
                return;
            }

            Tab_Sounds soundsTab = TableManager.GetSoundsByID(tab.BGMusic, 0);
            if (soundsTab == null)
            {
                LogModule.DebugLog("sound name " + tab.BGMusic.ToString() + " is null");
                return;
            }

            GameManager.gameManager.SoundManager.PlayBGMusic(tab.BGMusic, soundsTab.FadeOutTime, soundsTab.FadeInTime);
        }

        // Update is called once per frame
        void Update()
        {
//            if (!ProcessInput.IsProcessInput) return;
			if (CharacterDisplayFilter == ECharacterDisplayFilter.ShowNothing) return;

            if (Time.time - m_npcTime > 0)
            {
                Singleton<ObjManager>.GetInstance().ShowNPC();
                m_npcTime = Time.time + m_NPCRefreshTime;
            }

            if (_wheelTime == 0) _wheelTime = Time.time;

            if (Time.time - _wheelTime >= m_cacheTime)
            {
                Singleton<ObjManager>.GetInstance().DeleteNPCGameObject();
                _wheelTime = Time.time;
            }
        }

        private float m_NPCRefreshTime = 0.05f;
        private float m_cacheTime = 20.0f;
        private float _wheelTime;
        private float m_npcTime = 0.0f;

        void FixedUpdate()
        {
			BundleManager.BundleQueueLoadTick(this);
        }

        void Destroy()
        {
            if (null != GameManager.gameManager)
            {
                if (null != GameManager.gameManager.ActiveScene)
                {
                    GameManager.gameManager.ActiveScene.RelaseActiveSceneData();
                }

                //清空当前场景SceneLogic对象
                GameManager.gameManager.SceneLogic = null;
            }
        }
        void OnApplicationPause(bool paused)
        {
            //if (!paused)
            //{
            //    //程序从后台进入前台时
            //    PushNotification.CleanNotification();

            //    Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
            //    if (null != mainPlayer)
            //    {
            //        mainPlayer.LastHeartBeatTime = UnityEngine.Time.time;
            //    }
            //}
            //if (GlobeVar.s_FirstInitGame)
            //{
            //    // 这时候程序还没有初始化
            //    return;
            //}
            ////程序进入后台时
            //if (paused)
            //{
            //    PushNotification.CleanNotification();
            //    PushNotification.NotificationMessage2Clinet();
            //    LogModule.DebugLog("OnApplicationPause:NotificationMessage2Server");
            //    PushNotification.NotificationMessage2Server();
            //}
           
        }
    }
}
