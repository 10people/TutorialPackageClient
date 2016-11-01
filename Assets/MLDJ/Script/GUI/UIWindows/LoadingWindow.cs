using GameRes;
using Games.LogicObj;
using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame.Table;
using Games.GlobeDefine;
using System.Text;

public class LoadingWindow : MonoBehaviour {

    public ClipSlider m_ClipSlider;

    public UILabel m_xiaozhitiao;

	public UILabel LabelLoadingProgressNum1;
	public UILabel LabelLoadingProgressNum2;

    public LoadingBackTexAdapt m_LoadingBackTexAdapt;
	public UISlider   SliderLoading1 ;

	private static AssetBundle m_lastSceneBundle = null;
	public static Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE nextSceneID;

    public static void LoadScene(Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE secenID)
    {
       
		/*
        if (GameManager.gameManager.RunningScene == (int)secenID)
        {
            UIManager.CloseUI(UIInfo.MessageBox);
            Singleton<ObjManager>.Instance.CleanSceneObj();
            NetWorkLogic.GetMe().CanProcessPacket = true;
            NetWorkLogic.GetMe().ForceProcessPakcet = true;
            return;
        }
		*/

#if BOBJOYSTICK
        MouseSimulator.Instance.MouseEnable = false;
#endif
        if (secenID == Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOADINGSCENE)
        {
            LogModule.WarningLog("loading scene can not be loaded");
            return;
        }

        if (secenID == Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            PlatformHelper.SendUserAction(UserBehaviorDefine.EnterFirstScene);
        }

        GameManager.gameManager.RunningScene = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOADINGSCENE;
        LoadingWindow.nextSceneID = secenID;
        Application.LoadLevel("LoadingScene");
#if UNITY_ANDROID
        if (PlatformHelper.IsChannelTW())
        {
            UIManager.ClearOpenedList();
        }
#endif
    }

    

	// Use this for initialization
	void Start () {

        int nIndex = Random.Range(1, 10000);
        int nTotalCount = TableManager.GetXiaozhitiao().Count;
        if (nTotalCount >= 1)
        {
            nIndex = nIndex % nTotalCount;
            Tab_Xiaozhitiao xztTab = TableManager.GetXiaozhitiaoByID(nIndex, 0);
            if (xztTab != null)
            {
                m_xiaozhitiao.text = StrDictionary.GetClientString_WithNameSex(xztTab.Content);
            }
        }

#if UNITY_WP8
        if (m_LoadingBackTexAdapt != null && Screen.width == 1280 && Screen.height == 768)
        {
            //m_LoadingBackTexAdapt.enabled = true;
            m_LoadingBackTexAdapt.AdaptiveUI();
        }
#endif
	
		Singleton<CameraManager>.Instance.IsDuangCamera = false;
        StartCoroutine(LoadScene());
	}

    void OnDestroy()
    {
#if !UNITY_WP8
        if (null != m_lastSceneBundle)
        {
            m_lastSceneBundle.Unload(false);
            m_lastSceneBundle = null;
        }
#endif
    }
	
    IEnumerator LoadScene()
    {
        //m_ClipSlider.SetNextProgress(0.9f);
		LabelLoadingProgressNum1.text = "90%";
		LabelLoadingProgressNum2.text = "90%";
		SliderLoading1.value = 0.9f ;


		BundleManager.ReleaseSingleBundle();
		BundleManager.CleanBundleLoadQueue();
        BundleManager.ReleaseUIRefBundle();
        BundleManager.DoUnloadUnuseBundle();
        Obj_Character.s_hasPlayedBornEffectObjIdList.Clear();

        if (null != m_lastSceneBundle)
        {
            m_lastSceneBundle.Unload(false);
            m_lastSceneBundle = null;
        }
        ResourcesManager.Instance.UnLoadAll();
        BundleManager.ReleaseUIGroupBundle();
        if (nextSceneID != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN)
        {
            BundleManager.ReleaseLoginBundle();
            LogModule.ErrorLog("Resources.UnloadUnusedAssets");
            yield return Resources.UnloadUnusedAssets();
            System.GC.Collect();
			yield return StartCoroutine(BundleManager.LoadMainUI());  

            yield return StartCoroutine(BundleManager.LoadUI(UIInfo.JoyStickRoot, null, null, null));

            DamageBoardManager.PreloadDamageBoard();            
        }
        else
        {
			BundleManager.ReleaseGroupBundle();
            LogModule.ErrorLog("Resources.UnloadUnusedAssets");
            yield return Resources.UnloadUnusedAssets();
            System.GC.Collect();
            yield return StartCoroutine(BundleManager.LoadLoginUI());   
        }
        
        yield return StartCoroutine(BundleManager.LoadCommonShader());

        if (nextSceneID == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN)
        {
            GameManager.gameManager.RunningScene = (int)LoadingWindow.nextSceneID;
            AsyncOperation curAsync = Application.LoadLevelAsync((int)LoadingWindow.nextSceneID);
            while (!curAsync.isDone)
            {
                //SetProgress(curAsync.progress);

                //m_ClipSlider.SetNextProgress(0.9f + 0.1f * curAsync.progress);
				StringBuilder sb = new StringBuilder("");
				sb.AppendFormat("{0}%", (int)(curAsync.progress * 100));
				LabelLoadingProgressNum1.text = sb.ToString();
				LabelLoadingProgressNum2.text = sb.ToString();
				SliderLoading1.sliderValue =curAsync.progress; 
                //loadingSlider.value = curAsync.progress;
                yield return null;
            }
            //m_ClipSlider.SetProgress(1f);
			LabelLoadingProgressNum1.text = "100%";
			LabelLoadingProgressNum2.text = "100%";
			SliderLoading1.sliderValue = 1.0f; 
            //loadingSlider.value = 1;
        }
        else
        {
            m_ClipSlider.SetNextProgress(1f);
			SliderLoading1.sliderValue = 0.95f;
			LabelLoadingProgressNum2.text = "95%";
			// 这个地方改为读表，不读GlobeDefine的静态字符串
			Tab_SceneClass sceneClass = TableManager.GetSceneClassByID((int)LoadingWindow.nextSceneID, 0);
			if (sceneClass == null)
			{
				LogModule.ErrorLog("Cant load scene id: {0}", (int)LoadingWindow.nextSceneID);
				yield return null;
			}
			else
			{
				yield return StartCoroutine(BundleManager.LoadScene(sceneClass.ResName, LoadSceneFinish));
			}
        }
       
    }

    void LoadSceneFinish(string sceneName, AssetBundle SceneBundle)
    {

        if (string.IsNullOrEmpty(sceneName))
        {
            LogModule.ErrorLog("load scene fail");
        }
        else
        {
			m_lastSceneBundle = SceneBundle;
            GameManager.gameManager.RunningScene= (int)LoadingWindow.nextSceneID;
            AsyncOperation curAsync = Application.LoadLevelAsync(sceneName);
        }
		SliderLoading1.sliderValue = 1.0f; 
		LabelLoadingProgressNum2.text = "100%";
		
    }
}
