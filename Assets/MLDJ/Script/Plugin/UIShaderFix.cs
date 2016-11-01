using UnityEngine;
using System.Collections;

public class UIShaderFix : MonoBehaviour
{
    void Start()
    {
#if UNITY_EDITOR
        foreach (UISprite spr in gameObject.GetComponentsInChildren<UISprite>())
        {
            if (spr.material != null)
            {
                spr.material.shader = Shader.Find(spr.material.shader.name);
            }
        }
#endif
    }

	public void SetShder()
	{
		#if UNITY_EDITOR
		foreach (UITexture spr in gameObject.GetComponentsInChildren<UITexture>())
		{
			if (spr.material != null)
			{
				spr.material.shader = Shader.Find(spr.material.shader.name);
			}
		}
		#endif
	}

}
