//------------------------------------------------------
//MGUI: Cyou MGUI
//CopyRight © 2014-1015 用研一部
//ALL rights reserved
//ClassName:MUIBezierEditor
//Description:贝塞尔动效取值类
//
//created by yinyi at 2015.07.20
//-------------------------------------------------------
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[ExecuteInEditMode]
public class MUIBezierValue : MonoBehaviour {

    public List<MUIBezierPoint> bezierPoints = new List<MUIBezierPoint>();
    public Transform anchorTarget;
	// Use this for initialization
    void Awake()
    {
        bezierPoints.Clear();
        if (anchorTarget == null)
            anchorTarget = transform;
        MUIBezierPoint[] points = gameObject.GetComponents<MUIBezierPoint>();
        foreach (MUIBezierPoint point in points)
        {
            point.controlPoint = (Vector2)anchorTarget.position + point.controlDis;
            point.positionPoint = (Vector2)anchorTarget.position + point.positionDis;
            bezierPoints.Add(point);
        }
    }
	void Start () {
        if (!Application.isPlaying)
        {
            if (bezierPoints.Count > 0 && bezierPoints[0] == null)
            {
                bezierPoints.Clear();
                foreach (MUIBezierPoint point in gameObject.GetComponents<MUIBezierPoint>())
                {
                    bezierPoints.Add(point);
                }
                return;
            }

            MUIBezierPoint[] pts = gameObject.GetComponents<MUIBezierPoint>();
            foreach (MUIBezierPoint point in pts)
            {
                DestroyImmediate(point);
            }
            foreach (MUIBezierPoint point in bezierPoints)
            {
                MUIBezierPoint p = gameObject.AddComponent<MUIBezierPoint>();
                p.Copy(point);
            }
            return;
        }
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public Vector2 GetBezierValue(float percent)
    {
        Vector2 bezierValue = Vector2.zero;
        percent = Mathf.Clamp01(percent);
        if (bezierPoints.Count > 1)
        {
            float curveT = 1.0f / (float)(bezierPoints.Count - 1);
            int pointIndex = Mathf.FloorToInt(percent / curveT);
            if (pointIndex >= (bezierPoints.Count - 1))
                pointIndex = bezierPoints.Count - 2;
            float nowPercent = Mathf.Clamp01((percent - (curveT * pointIndex)) / curveT);

            Vector2 controlPoint = bezierPoints[pointIndex].controlPoint;
            if (pointIndex > 0)
                controlPoint = SymmetryPoint(bezierPoints[pointIndex].controlPoint, bezierPoints[pointIndex].positionPoint);
            bezierValue = CalculateBezierPoint(nowPercent, bezierPoints[pointIndex].positionPoint, controlPoint, bezierPoints[pointIndex + 1].controlPoint, bezierPoints[pointIndex + 1].positionPoint);
        }

        return bezierValue;
    }

    /// <summary>
    /// alculate the Bezier spline position
    /// </summary>
    /// <param name="t">the time (0-1) of the curve to sample</param>
    /// <param name="p0">the start point of the curve</param>
    /// <param name="p1">control point from p0</param>
    /// <param name="p2">control point from p3</param>
    /// <param name="p3">the end point of the curve</param>
    /// <returns></returns>
    private Vector2 CalculateBezierPoint(float t, Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3)
    {
        float t2 = t * t;
        float t3 = t2 * t;
        float u = 1.0f - t;
        float u2 = u * u;
        float u3 = u2 * u;

        Vector2 p = u3 * p0 + 3 * u2 * t * p1 + 3 * u * t2 * p2 + t3 * p3;

        return p;
    }

    /// <summary>
    /// symmetryPoint of curPoint
    /// </summary>
    /// <param name="curPoint"></param>
    /// <param name="centerPoint"></param>
    /// <returns></returns>
    Vector2 SymmetryPoint(Vector2 curPoint, Vector2 centerPoint)
    {
        Vector2 symmetryPoint = Vector2.zero;
        symmetryPoint = centerPoint * 2 - curPoint;
        return symmetryPoint;
    }

    /// <summary>
    /// Get RootScale Value
    /// </summary>
    /// <param name="trans"></param>
    /// <returns></returns>
    Vector3 RootScale(Transform trans)
    {
        if (trans == null)
            return Vector3.one;

        Vector3 scale = Vector3.zero;
        if (trans.parent)
        {
            scale = new Vector3(trans.localScale.x * RootScale(trans.parent).x, trans.localScale.y * RootScale(trans.parent).y, trans.localScale.z * RootScale(trans.parent).z);
        }
        else
        {
            scale = trans.localScale;
        }
        return scale;
    }
}
