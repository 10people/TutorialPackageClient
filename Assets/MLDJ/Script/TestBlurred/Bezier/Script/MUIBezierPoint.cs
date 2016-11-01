//------------------------------------------------------
//MGUI: Cyou MGUI
//CopyRight © 2014-1015 用研一部
//ALL rights reserved
//ClassName:MUIBezierPoint
//Description:贝塞尔点
//
//created by yinyi at 2015.07.17
//-------------------------------------------------------
using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class MUIBezierPoint : MonoBehaviour {

    public int index = 0;
    public Vector2 controlPoint = Vector2.zero;
    public Vector2 positionPoint = Vector2.zero;
    public Vector2 positionDis = Vector2.zero;
    public Vector2 controlDis = Vector2.zero;

    void OnEnable()
    {
        hideFlags = HideFlags.HideInInspector;
    }

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void Copy(MUIBezierPoint p)
    {
        index = p.index;
        controlPoint = p.controlPoint;
        positionPoint = p.positionPoint;
        positionDis = p.positionDis;
        controlDis = p.controlDis;
    }
}
