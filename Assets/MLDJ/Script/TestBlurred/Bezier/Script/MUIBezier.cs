//------------------------------------------------------
//MGUI: Cyou MGUI
//CopyRight © 2014-1015 用研一部
//ALL rights reserved
//ClassName:MUIBezierEditor
//Description:贝塞尔动效类
//
//created by yinyi at 2015.07.17
//-------------------------------------------------------
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[ExecuteInEditMode]
public class MUIBezier : MonoBehaviour {

    [SerializeField]
    private MUITweenValue.Style style = MUITweenValue.Style.Once;
    [SerializeField]
    private AnimationCurve animationCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
    [SerializeField]
    private float duration = 1f;
    [SerializeField]
    private float startDelay = 0f;
    public List<MUIBezierPoint> bezierPoints = new List<MUIBezierPoint>();
    private MUITweenValue tween;
    public List<EventDelegate> onFinished = new List<EventDelegate>();
	// Use this for initialization
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

        bezierPoints.Clear();
        MUIBezierPoint[] points = gameObject.GetComponents<MUIBezierPoint>();
        foreach(MUIBezierPoint point in points){
            bezierPoints.Add(point);
        }

        tween = MUITweenValue.Begin(gameObject, duration, 1f);
        tween.startValue = 0f;
        tween.startDelay = startDelay;
        tween.style = style;
        tween.animationCurve = animationCurve;
        tween.onFinished.Clear();
        tween.onFinished = onFinished;
        tween.Play();

        //Debug.Log(bezierPoints.Count);
	}
	
	// Update is called once per frame
	void Update () {
        if (!Application.isPlaying)
            return;

        float count = Mathf.Clamp01(tween.CurveValue);
        if (bezierPoints.Count > 1)
        {
            float curveT = 1.0f / (float)(bezierPoints.Count - 1);
            int pointIndex = Mathf.FloorToInt(count / curveT);
            float percent = Mathf.Clamp01((count - (curveT * pointIndex)) / curveT);
            if (pointIndex >= (bezierPoints.Count - 1))
            {
                return;
            }
            Vector2 controlPoint = bezierPoints[pointIndex].controlPoint;
            if (pointIndex > 0)
                controlPoint = SymmetryPoint(bezierPoints[pointIndex].controlPoint, bezierPoints[pointIndex].positionPoint);
            Vector2 pos = CalculateBezierPoint(percent, bezierPoints[pointIndex].positionPoint, controlPoint, bezierPoints[pointIndex + 1].controlPoint, bezierPoints[pointIndex + 1].positionPoint);
            transform.position = pos;
        }
	}

    public void ResetToBeginning()
    {
        tween.ResetToBeginning();
    }

    public void PlayForward() 
    {
        tween.PlayForward();
    }

    public void PlayReverse() 
    {
        tween.PlayReverse();
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
}
