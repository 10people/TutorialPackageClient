using System;
using System.Runtime.CompilerServices;
using Games.Scene;
using UnityEngine;
using System.Collections;
using Object = UnityEngine.Object;

public class JtddSceneControl : MonoBehaviour
{
    public GameObject ShaChenGameObject;
    public static int CurrentSceneTag = 1;
    private static JtddSceneControl m_instance = null;

    private GameObject m_CurSceneObject;
    private GameObject m_OldSceneObject;

    /// <summary>
    /// 临时添加， 后期需要对阻挡配置生成 重新设置下。现有情况不利于多种阻挡类型的生成。
    /// </summary>
    public GameObject ZudanGameObject;
    public GameObject ZudanGameObject02;

    public static JtddSceneControl Instance()
    {
        return m_instance;
    }

	// Use this for initialization
	void Start ()
	{
	    m_instance = this;

        CurrentSceneTag = 1;

        //播放动画
        ShowSceneObject("SceneModel/Sc_animation_xin");
	}

    void OnDestroy()
    {
        m_instance = null;
    }

    /// <summary>
    /// 显示当前对应的场景物体信息
    /// </summary>
    /// <param name="strPath"></param>
    public void ShowSceneObject(string strPath)
    {
        Object animationObject = Resources.Load(strPath) as Object;
        if (animationObject == null) return;

        GameObject aniGameObject = GameObject.Instantiate(animationObject) as GameObject;
        if (aniGameObject != null)
        {
            if (strPath == "SceneModel/Scene")
            {
                StaticBatchingUtility.Combine(aniGameObject);
            }

            m_OldSceneObject = m_CurSceneObject;
            m_CurSceneObject = aniGameObject;
            aniGameObject.transform.parent = this.transform.parent;
            aniGameObject = null;
        }        

        animationObject = null;
    }

    public void GotoNextScene()
    {
        if ( CurrentSceneTag == 1 )
        {
            ShowSceneObject("SceneModel/Scene");

            //关闭导航
            if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
            {
                if (Singleton<ObjManager>.GetInstance().MainPlayer.NavAgent != null)
                {
                    Singleton<ObjManager>.GetInstance().MainPlayer.NavAgent.gameObject.SetActive(false);
                }
            }

            CurrentSceneTag = 2;
            if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
            {
                Vector3 curPosition = Singleton<ObjManager>.GetInstance().MainPlayer.Position;
                Singleton<ObjManager>.GetInstance().MainPlayer.Position = ActiveScene.GetTerrainPosition(curPosition);

                if (Singleton<ObjManager>.GetInstance().MainPlayer.NavAgent != null)
                {
                    Singleton<ObjManager>.GetInstance().MainPlayer.NavAgent.gameObject.SetActive(true);
                    Singleton<ObjManager>.GetInstance().MainPlayer.InitNavAgent();
					Singleton<ObjManager>.GetInstance().MainPlayer.Rotation = Quaternion.Euler(0, 30, 0);
                }
            }

            if (ShaChenGameObject != null)
            {
                ShaChenGameObject.SetActive(true);
            }

            GCGame.Utils.PlaySceneMusic(207);    //second scene

            if (m_OldSceneObject != null)
            {
                DestroyObject(m_OldSceneObject);
                Resources.UnloadUnusedAssets();
                GC.Collect();
            }
        }

    }
}
