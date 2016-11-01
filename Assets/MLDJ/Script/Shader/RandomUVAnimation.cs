using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class RandomUVAnimation : MonoBehaviour {
    
    //public Color NormalColor = new Color(1f, 1f, 1f, 1f);//目标颜色值
    public Color FlowColor = new Color(1f, 1f, 1f, 1f);//流光效果颜色值

	public float ConvertSpeed = 0.7f;
	public float MaxRange = 0.7f;
	public float MinRange = 0f;

	//public Material InstanceMaterial;
	public Renderer[] _renderers;
	public Camera MainCam;
	private float AddInterval = 0.5f;
	public float AddSpeed = 1f;
	public float TempTime = 1.80f;
	public float TempNumTime = 3f;
	//public bool BReflectionLight = false;

    private Color _currentColor; //记录实时颜色值
	private Vector4 _startDir;
    private Vector4 _midDir;
    private Vector4 _endDir;
    private Vector4 _curDir;
    private float _addTimer;
    private float _currentRange;
    private List<BreathlingLight> _lstBreathlingLight = new List<BreathlingLight>();


	// Use this for initialization
	void Start () {
	
		_addTimer = 0.0f;
        _startDir = new Vector4(1, 0, 0, 0);
        _midDir = new Vector4(0, 0, 1, 0);
        _endDir = new Vector4(-1, 0, 0, 0);
		_curDir = Vector4.zero;
		_currentRange = 0.0f;

		if (MainCam == null) {

				if (Camera.main != null)
						MainCam = Camera.main;
		}

		_renderers = this.GetComponentsInChildren<Renderer>();
		for (int i=0; i < _renderers.Length; i++) {

			Renderer rd = _renderers[i];
			Material mat = rd.material;
			BreathlingLight bLight = new BreathlingLight();
			bLight.Mat = mat;
            //mat.SetColor("_AddTintColor", SplitLight); 
            mat.SetColor("_FlowColor", FlowColor); 

			//bLight.BaseColor = mat.GetColor("_Color");

			_lstBreathlingLight.Add(bLight);
		}

	}

	private bool isTag = false;
	private float _tempTime = 0;
	// Update is called once per frame
	void Update ()
	{
		if (MainCam == null)
						return;

		if (isTag && Time.time - _tempTime <= TempNumTime) {
			return;
				}
		isTag = false;
		_currentRange += Time.deltaTime * ConvertSpeed;

		if (_currentRange > MaxRange) 
		{
			_currentRange = MaxRange;
			ConvertSpeed = -ConvertSpeed;
		}
		else if (_currentRange < MinRange) 
		{
			_currentRange = MinRange;
			ConvertSpeed = -ConvertSpeed;
		}


		_addTimer += Time.deltaTime * AddSpeed;
		if (_addTimer > 0) 
		{
			float temp = _addTimer * 2;
			if (temp < 1.01f) 
            {
				_curDir = Vector4.Lerp (_startDir, _midDir, temp).normalized;
			} 
            else if (temp >= 1.01f && temp < 2.01f) 
            {
				_curDir = Vector4.Lerp (_midDir, _endDir, temp - 1).normalized;
			} 
            else if (temp >= 2.01f && temp < 3.01f) 
            {
				_curDir = Vector4.Lerp (_endDir, -_midDir, temp - 2).normalized;
			} 
            else if (temp >= 3.01f) 
            {
				_curDir = Vector4.Lerp (-_midDir, _startDir, temp - 3).normalized;
			}
		}
		else 
		{
			_curDir = Vector4.zero;
		}

		if (_lstBreathlingLight != null && _lstBreathlingLight.Count > 0) 
		{
			foreach(BreathlingLight bl in _lstBreathlingLight)
			{
                //_currentColor = Color.Lerp(bl.BaseColor, NormalColor, _currentRange);
				//_currentColor.a = 1f;
                //bl.Mat.SetVector("_Color", _currentColor);
                bl.Mat.SetVector("_CurrentLightDirection", _curDir);
			}
		}

		if (_addTimer > TempTime)
        {
            _addTimer = -((0.5f + Random.Range(0.0f, AddInterval)) * AddSpeed);

			_tempTime = Time.time;
			isTag = true;

			if (_lstBreathlingLight != null && _lstBreathlingLight.Count > 0) 
			{
				foreach(BreathlingLight bl in _lstBreathlingLight)
				{
					//_currentColor = bl.BaseColor;
					//bl.Mat.SetVector("_Color", _currentColor);
					bl.Mat.SetVector("_CurrentLightDirection", Vector4.zero);
				}
			}


            //if (BReflectionLight)
            //{
            //    RandomReflectionLight();
            //}
        }
	}

	private void RandomReflectionLight()
	{
		float tempValue = Random.Range(0, 4);

		if (tempValue > 1) 
		{
			tempValue = Random.Range (-1f, 1f);
		}
		else 
		{
			tempValue = Random.Range(-1f, 1f);
		}

		_startDir.x = tempValue;
		_endDir.x = -tempValue;

		float tempY1 = Random.Range (-1f, 1f);
		float tempY2 = Random.Range (-1f, 1f);

		_midDir.y = tempY1;
		_startDir.y = (tempY1 + tempY2) * 0.5f;
		_endDir.y = tempY2;
	}

}
