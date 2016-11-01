using UnityEngine;
using System.Collections;

public class ShaderFix : MonoBehaviour {

    private void Awake()
    {
#if UNITY_EDITOR
        foreach (Transform t in gameObject.GetComponentsInChildren<Transform>())
        {
            if (t.gameObject.GetComponent<Renderer>() != null)
            {
                t.gameObject.GetComponent<Renderer>().material.shader = Shader.Find(t.gameObject.GetComponent<Renderer>().material.shader.name);
            }
        }
#endif
    }
}
