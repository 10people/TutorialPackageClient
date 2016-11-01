using System;
using UnityEngine;


//Attached to camera
[RequireComponent(typeof(Camera))]

class EdgeBlend : MonoBehaviour
{
    #region Variables
    [Range(0, 1)]
    public float intensity = 0.5f;
    public Shader m_Shader = null;
    public Vector3 m_fScaleVec;
    private Material m_Material = null;
    private Mesh m_mesh;
//    private Material oldmat = null;
    private string m_blendtexname = null;

    public RenderTexture m_preRT;
    public Camera renderCamera;
    #endregion

    #region Properties
    public Material material
    {
        get
        {
            if (m_Material == null)
            {
                m_Material = new Material(m_Shader);
                m_Material.hideFlags = HideFlags.HideAndDontSave;
            }
            return m_Material;
        }
    }
    #endregion

    // Use this for initialization  
    void Start()
    {
        m_blendtexname = "_BlendTex";

        m_fScaleVec = new Vector3(100.0f, 100.0f, 100.0f);
        if (SystemInfo.supportsImageEffects == false)
        {
            enabled = false;
            return;
        }

        if (m_Shader != null && m_Shader.isSupported == false)
        {
            enabled = false;
        }

        m_preRT = new RenderTexture(Screen.width, Screen.height, 24);
        renderCamera.targetTexture = m_preRT;
//         renderCamera.enabled = false;
//         renderCamera.enabled = true;

    }

    void Update()
    {
        material.SetFloat("_Scale", intensity);
    }

    [ImageEffectOpaque]
    void OnRenderImage(RenderTexture sourceTexture, RenderTexture destTexture)
    {
        if (m_Shader != null)
        {
            //Debug.Log("OnRenderImage");
            if (!material.GetTexture(m_blendtexname))
                material.SetTexture(m_blendtexname, m_preRT);

            if (material.mainTexture == null)
                material.mainTexture = sourceTexture;

            Graphics.Blit(sourceTexture, destTexture, material);
        }
        else
            Graphics.Blit(sourceTexture, destTexture);
    }

    void OnDisable()
    {
        if (m_Material != null)
        {
            DestroyImmediate(m_Material);
        }
    }



    //void OnRenderObject()
    //{
    //    m_gameobject = GameObject.Find("1");
    //    Debug.Log("1");

    //    if (!enabled)
    //        return;

    //    if (!m_gameobject)
    //        return;

    //    Vector3 oldScale = m_gameobject.transform.localScale;

    //    m_gameobject.transform.localScale = m_fScaleVec;

    //    MeshFilter meshf = m_gameobject.GetComponent<MeshFilter>();
    //    Debug.Log(meshf.mesh.bounds.size);
    //    MeshRenderer mrender = m_gameobject.GetComponent<MeshRenderer>();
    //    if (oldmat)
    //        oldmat = null;

    //    oldmat = new Material(mrender.material);
    //    mrender.material = material;

    //    Graphics.DrawMeshNow(meshf.mesh, m_gameobject.transform.position, m_gameobject.transform.rotation);

    //    m_gameobject.transform.localScale = oldScale;
    //    mrender.material = oldmat;

    //    Debug.Log("2");
    //}

}

