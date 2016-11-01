#region
/*************************************************************************************
   * filename:          SynRenderTexture
   * date:              5/25/2015 8:42:25 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using Games.GlobeDefine;
using GCGame;
using UnityEngine;
using GCGame.Table;


public class SynRenderTexture :MonoBase
{
    #region 变量

    private RenderTexture _cachedRenderTexture;

    private Camera _cachedCamera = null;

    #endregion

    #region 属性

    #endregion

    #region 方法


    public override bool Init()
    {
        if (MobileHardwareInfo.Instance.HardwareLevel != Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH)
        {
            return false;
        }

        _cachedRenderTexture = new RenderTexture(GetScreenWidth(), GetScreenHeight(), 16);
        _cachedRenderTexture.antiAliasing = 1;
        _cachedRenderTexture.anisoLevel = 0;
        _cachedRenderTexture.wrapMode = TextureWrapMode.Clamp;
        _cachedRenderTexture.filterMode = FilterMode.Bilinear;
        return false;
    }

    private int GetScreenWidth()
    {
        int value = (int)(Mathf.Log(Screen.width, 2));
        return (int)Mathf.Pow(2, value);
    }

    private int GetScreenHeight()
    {
        int value = (int)(Mathf.Log(Screen.height, 2));
        return (int)Mathf.Pow(2, value);
    }

    public void LinkCamera(Camera baseCamera)
    {
        if (MobileHardwareInfo.Instance.HardwareLevel == Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH)
        {
            // 高配机用实时算出来的render texture
            if (baseCamera == null)
            {
                return;
            }
            if (_cachedCamera != null)
            {
                return;
            }
            GameObject tmpGo = baseCamera.gameObject;
            GameObject go = new GameObject("RenderCamera");
            Utils.SetParent(go.transform, tmpGo.transform);
            _cachedCamera = go.AddComponent<Camera>();
            _cachedCamera.clearFlags = CameraClearFlags.SolidColor;
            _cachedCamera.backgroundColor = new Color(49f / 255, 77f / 255, 121f / 255, 1);
            const int layer = (1 << (int)Games.GlobeDefine.GameDefine_Globe.ESceneLayer.MoveLayer) |
                              (1 << (int)Games.GlobeDefine.GameDefine_Globe.ESceneLayer.LogicObj) |
                              (1 << (int)Games.GlobeDefine.GameDefine_Globe.ESceneLayer.Default);
            _cachedCamera.cullingMask = layer;
            _cachedCamera.fieldOfView = baseCamera.fieldOfView;
            _cachedCamera.nearClipPlane = baseCamera.nearClipPlane;
            _cachedCamera.farClipPlane = baseCamera.farClipPlane;
            _cachedCamera.depth = 4;
            _cachedCamera.targetTexture = _cachedRenderTexture;
            Shader.SetGlobalTexture("_RenderTexture", _cachedRenderTexture);
        }
        else
        {
            //中低配机用模拟的静态texture
            Tab_SceneClass tabScene = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
            if (tabScene == null)
            {
                return;
            }

            Texture distortionTexture = ResourceManager.LoadResource("Texture/Distortion/" + tabScene.DistortionTexture, typeof(Texture)) as Texture;
            if (distortionTexture == null)
            {
                return;
            }

            Shader.SetGlobalTexture("_RenderTexture", distortionTexture);
        }
    }

    public override void Clear()
    {
        throw new System.NotImplementedException();
    }


    #endregion
}