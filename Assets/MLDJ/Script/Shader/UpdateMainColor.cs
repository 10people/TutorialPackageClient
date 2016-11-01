using UnityEngine;
using System.Collections;

public class UpdateMainColor : MonoBehaviour {

    public Renderer[] _renderers = null;

//    private float _updateIntervalTime = 1.0f; //间隔时间
    private float _updateTime = 0.25f; //持续时间
    private float _useTime = 0.0f; //进行时间

    private bool _isUpdateing = false;
    private bool _isUser = false;


	// Use this for initialization
	void Start () {

	}

    public void UpdateColor()
    {
        if (_isUpdateing || _isUser) return;
        _isUser = true;
        _isUpdateing = true;
        UpdateColor(Color.red); //更改颜色
        _useTime = Time.time;
    }

    private void UpdateColor(Color tagColor)
    {
        if (_renderers == null)
        {
            _renderers = this.GetComponentsInChildren<Renderer>();
        }

        if (_renderers == null) return;

        for (int i = 0; i < _renderers.Length; i++)
        {
            if (_renderers[i] != null && _renderers[i].material != null)
            {
                _renderers[i].material.SetColor("_Color", tagColor);
            }
        }
    }

    // Update is called once per frame
	void Update ()
	{
	    if (!_isUser) return;

        if (_isUpdateing && Time.time - _useTime > _updateTime) //更改颜色时间持续Ns时间
	    {
	        UpdateColor(Color.white);
	        _isUpdateing = false;
	        _isUser = false;
	        _useTime = 0.0f;
	    }
	}
}
