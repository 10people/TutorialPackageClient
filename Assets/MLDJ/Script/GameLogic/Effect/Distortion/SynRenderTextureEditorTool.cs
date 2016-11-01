#region
/*************************************************************************************
   * filename:          SynRenderTextureEditorTool
   * date:              6/10/2015 10:30:46 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion


using UnityEngine;

[ExecuteInEditMode]
public class SynRenderTextureEditorTool : MonoBehaviour
{
    #region 变量

    private RenderTexture _cachedRenderTexture;

    private Camera _cachedCamera = null;

    #endregion

    #region 属性

    #endregion

    #region 方法



    void OnEnable()
    {
        LinkCamera(Camera.main);
    }

    void OnDisable()
    {
        if (_cachedRenderTexture != null)
        {
            DestroyImmediate(_cachedRenderTexture);
            _cachedRenderTexture = null;
        }
        if (_cachedCamera != null)
        {
            DestroyImmediate(_cachedCamera.gameObject);
            _cachedCamera = null;
        }
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
        if (baseCamera == null)
        {
            return;
        }
        if (_cachedCamera != null)
        {
            return;
        }


        _cachedRenderTexture = new RenderTexture(GetScreenWidth(), GetScreenHeight(), 16);
        _cachedRenderTexture.antiAliasing = 1;
        _cachedRenderTexture.anisoLevel = 0;
        _cachedRenderTexture.wrapMode = TextureWrapMode.Clamp;
        _cachedRenderTexture.filterMode = FilterMode.Bilinear;

        GameObject tmpGo = baseCamera.gameObject;
        GameObject go = new GameObject("RenderCamera");
        go.transform.parent = tmpGo.transform;
        go.transform.localRotation = Quaternion.identity;
        go.transform.localPosition = Vector3.zero;
        go.transform.localScale = Vector3.one;
        //Utils.SetParent(go.transform, tmpGo.transform);
        _cachedCamera = go.AddComponent<Camera>();
        _cachedCamera.clearFlags = CameraClearFlags.SolidColor;
        _cachedCamera.backgroundColor = new Color(49f / 255, 77f / 255, 121f / 255, 1);
//        const int layer = (1 << (int)Games.GlobeDefine.GameDefine_Globe.ESceneLayer.MoveLayer) |
//                          (1 << (int)Games.GlobeDefine.GameDefine_Globe.ESceneLayer.LogicObj) |
//                          (1 << (int)Games.GlobeDefine.GameDefine_Globe.ESceneLayer.Default);
        //_cachedCamera.cullingMask = layer;
        _cachedCamera.fieldOfView = baseCamera.fieldOfView;
        _cachedCamera.nearClipPlane = baseCamera.nearClipPlane;
        _cachedCamera.farClipPlane = baseCamera.farClipPlane;
        _cachedCamera.depth = 4;
        _cachedCamera.targetTexture = _cachedRenderTexture;
        Shader.SetGlobalTexture("_RenderTexture", _cachedRenderTexture);
    }


    #endregion
}