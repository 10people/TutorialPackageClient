using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class EdgeDrawPost : MonoBehaviour 
{
    private float m_fWidth;
    private float m_fHeight;
//    private bool m_enable = false;
//    private bool isSupported = false;

    public float m_fThreshold;
    public float m_fSampleDistance;
    public float m_fSampleDistanceDepth;
    public float m_fExponentScale;
    public Vector2  m_fSensitive;

    public Color m_EdgeColor;
    public Color m_BackgroundColor;
    
    public Shader edgeDetectShader;
    private Material edgeDetectMaterial = null;

	// Use this for initialization
	void Start () 
    {
//         m_fThreshold = 0.2f;
//         m_fSampleDistance = 1.0f;
//         m_fSampleDistanceDepth = 1.0f;
//         m_fExponentScale = 1.0f;

        //m_EdgeColor = new Color(0.0f, 1.0f, 0.0f, 1.0f);
        //m_BackgroundColor = new Color(0.0f, 0.0f, 0.0f, 1.0f);
        m_fSensitive = new Vector2(1.0f,1.0f);
        /*m_enable = */CheckAllResources();
	}
	
	// Update is called once per frame
	void Update () 
    {
	
	}

     public bool CheckAllResources()
     {
        CheckSupport(true);
        edgeDetectMaterial = CheckAndCreateMaterial(edgeDetectShader, edgeDetectMaterial);
        if (!edgeDetectMaterial)
            return false;

        return true;
     }

    //[ImageEffectOpaque]
    void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
        //Graphics.Blit(source, destination);
        //return;
        if (CheckAllResources() == false)
        {
            Graphics.Blit(source, destination);
            return;
        }

        edgeDetectMaterial.SetVector("_Sensitivity", m_fSensitive);
        edgeDetectMaterial.SetColor("_EdgeColorParam", m_EdgeColor);
        edgeDetectMaterial.SetColor("_BGColor", m_BackgroundColor);
        edgeDetectMaterial.SetFloat("_Threshold", m_fThreshold);
        edgeDetectMaterial.SetFloat("_SampleDistance", m_fSampleDistance);
        edgeDetectMaterial.SetFloat("_Exponent", m_fExponentScale);
        edgeDetectMaterial.SetFloat("_SampleDistanceDepth", m_fSampleDistanceDepth);
        
        Graphics.Blit(source, destination, edgeDetectMaterial);
    }


    protected bool CheckSupport(bool needDepth)
    {
//        isSupported = true;
//        bool supportHDRTextures = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf);
//        bool supportDX11 = SystemInfo.graphicsShaderLevel >= 50 && SystemInfo.supportsComputeShaders;

        if (!SystemInfo.supportsImageEffects || !SystemInfo.supportsRenderTextures)
        {
            enabled = false;
//            isSupported = false;
            return false;
        }

        if (needDepth && !SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.Depth))
        {
            enabled = false;
//            isSupported = false;
            return false;
        }

        if (needDepth)
            GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;

        return true;
    }


    protected Material CheckAndCreateMaterial(Shader s, Material m2Create)
    {
        if (!s)
        {
            Debug.Log("Missing shader in " + ToString());
            enabled = false;
            return null;
        }

        if (s.isSupported && m2Create && m2Create.shader == s)
            return m2Create;

        if (!s.isSupported)
        {
            enabled = false;
//            isSupported = false;
            Debug.Log("The shader " + s.ToString() + " on effect " + ToString() + " is not supported on this platform!");
            return null;
        }
        else
        {
            m2Create = new Material(s);
            m2Create.hideFlags = HideFlags.DontSave;
            if (m2Create)
                return m2Create;
            else return null;
        }
    }

}
