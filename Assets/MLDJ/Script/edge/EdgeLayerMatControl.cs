using UnityEngine;
using System.Collections;

public class EdgeLayerMatControl : MonoBehaviour 
{
    public Material m_SpecailMat = null;
    private Material m_OldMat = null;

	void Start () 
    {
	}
	
	// Update is called once per frame
	void Update () 
    {
	}

    void OnWillRenderObject()
    {
        SkinnedMeshRenderer render = gameObject.GetComponent<SkinnedMeshRenderer>();

        if (m_OldMat == null && render.sharedMaterial != null)
        {
            m_OldMat = new Material(render.sharedMaterial);
        }

        Material[] matarray = render.materials;
        if (Camera.current.tag == "loginmain")
        {
            render.material = m_OldMat;
            render.sharedMaterial = m_OldMat;

            for (int i = 0; i < matarray.Length;i++ )
            {
                matarray[i] = m_OldMat;
            }
        }
        else if (Camera.current.tag == "rendercam")
        {
            render.sharedMaterial = m_SpecailMat;
            render.material = m_SpecailMat;

            for (int i = 0; i < matarray.Length; i++)
            {
                matarray[i] = m_SpecailMat;
            }
        }
        else
        {
        }
    }
}
