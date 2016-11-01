using UnityEngine;
using System.Collections;

public class MUIWave : MonoBehaviour {

    public float waveRate;
    public float waveLength;
    [Range(0, 1)]
    public float amount;

    private UITexture texture;
	// Use this for initialization
	void Start () {
        texture = gameObject.GetComponent<UITexture>();
        //texture.onRender += OnMaterialRender;
	}

    void OnMaterialRender(UIDrawCall drawcall)
    {
        if (drawcall == null)
        {
            return;
        }
        Material mat = drawcall.dynamicMat;
        mat.SetFloat("_WaveRate", waveRate);
        mat.SetFloat("_WaveLength", waveLength);
        mat.SetFloat("_WaveSpeed", Time.timeSinceLevelLoad * 5);
        mat.SetFloat("_Amount", amount);
    }
	
	// Update is called once per frame
	void Update () {
        OnMaterialRender(texture.panel.GetDrawCall(texture.material, texture.depth));
	}
}
