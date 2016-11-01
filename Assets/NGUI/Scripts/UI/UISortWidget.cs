using UnityEngine;
using System.Collections.Generic;

public class UISortWidget : MonoBehaviour
{
    public int newRenderQueue = 3000;

    [System.NonSerialized]
    Renderer m_renderer;

    void Awake()
    {
        m_renderer = this.GetComponent<Renderer>();
    }

    void LateUpdate()
    {
        foreach (Material material in m_renderer.materials)
        {
            if (material.renderQueue != newRenderQueue)
            {
                material.renderQueue = newRenderQueue;
            }
        }
    }
}