//------------------------------------------------------
//MGUI: Cyou MGUI
//CopyRight © 2014-1015 用研一部
//ALL rights reserved
//ClassName:MUIBezierEditor
//Description:贝塞尔动效编辑类,编辑MUIBezier在Inspector中的显示
//
//created by yinyi at 2015.07.17
//-------------------------------------------------------
using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;


[CanEditMultipleObjects]
[CustomEditor(typeof(MUIBezier))]
public class MUIBezierEditor : Editor
{
    MUIBezier mBezier;
    List<MUIBezierPoint> mBezierPoints = new List<MUIBezierPoint>();
    Vector3 scaleFactor = Vector3.zero;

    void OnSceneGUI()
    {
        mBezier = (MUIBezier)target;

        if (mBezier == null)
            return;

        scaleFactor = RootScale(mBezier.transform.parent);
        //if (scaleFactor.Equals(Vector3.zero))
        //{
        //    Debug.Log(scaleFactor);
        //}
        mBezier.bezierPoints.Clear();
        foreach (MUIBezierPoint point in mBezier.gameObject.GetComponents<MUIBezierPoint>())
        {
            mBezier.bezierPoints.Add(point);
        }
        mBezierPoints = mBezier.bezierPoints;

        if (mBezier.enabled)
        {
            if (mBezierPoints.Count < 2)
                return;

            for (int i = 0; i < mBezierPoints.Count; i++)
            {
                if (i < mBezierPoints.Count - 1)
                {
                    Vector2 controlPoint = mBezierPoints[i].controlPoint;
                    if (i > 0)
                        controlPoint = SymmetryPoint(mBezierPoints[i].controlPoint, mBezierPoints[i].positionPoint);
                    Handles.DrawBezier(mBezierPoints[i].positionPoint, mBezierPoints[i + 1].positionPoint, controlPoint, mBezierPoints[i + 1].controlPoint, Color.green, null, 2);
                }
                Handles.color = Color.white;
                Handles.ConeCap(i, mBezierPoints[i].positionPoint, Quaternion.identity, .05f);

                Vector2 currentPoint = mBezierPoints[i].controlPoint;
                currentPoint = Handles.PositionHandle(currentPoint, Quaternion.identity);
                Handles.color = Color.red;
                Handles.ConeCap(i, currentPoint, Quaternion.identity, .05f);
                Handles.color = Color.white;
                Handles.Label(currentPoint, "control point" + i);
                mBezierPoints[i].controlPoint = currentPoint;

                Handles.color = Color.magenta;
                Handles.DrawLine(mBezierPoints[i].controlPoint, mBezierPoints[i].positionPoint);

                Vector2 positionPoint = mBezierPoints[i].positionPoint;
                positionPoint = Handles.PositionHandle(positionPoint, Quaternion.identity);
                Handles.color = Color.white;
                Handles.Label(positionPoint, "point" + i);
                mBezierPoints[i].positionPoint = positionPoint;

                if (GUI.changed)
                {
                    EditorUtility.SetDirty(mBezier);
                }
            }
        }
    }

    public override void OnInspectorGUI()
    {
        if (mBezier == null)
            return;

        serializedObject.Update();

        GUI.changed = false;

        EditorGUILayout.PropertyField(serializedObject.FindProperty("style"),new GUIContent("Play Style"));
        EditorGUILayout.PropertyField(serializedObject.FindProperty("animationCurve"));
        EditorGUILayout.PropertyField(serializedObject.FindProperty("duration"));
        EditorGUILayout.PropertyField(serializedObject.FindProperty("startDelay"));
        NGUIEditorTools.DrawEvents("On Finished", mBezier, mBezier.onFinished);

        if (NGUIEditorTools.DrawHeader("Points"))
        {
            for (int i = 0; i < mBezierPoints.Count; i++)
            {
                Vector2 position = mBezierPoints[i].positionPoint;
                Vector2 control = mBezierPoints[i].controlPoint;

                GUILayout.BeginHorizontal();
                EditorGUILayout.LabelField("Point" + i, EditorStyles.boldLabel);
                if (GUILayout.Button("Delete Point"))
                {
                    DestroyImmediate(mBezier.bezierPoints[i]);
                    mBezierPoints.RemoveAt(i);
                    continue;
                }
                GUILayout.EndHorizontal();

                GUILayout.BeginHorizontal();
                GUILayout.Label("position");
                GUILayout.Label("X");
                position.x = EditorGUILayout.FloatField(position.x / scaleFactor.x) * scaleFactor.x;//在Inspector上显示的值是与当前的transform统一坐标系
                GUILayout.Label("Y");
                position.y = EditorGUILayout.FloatField(position.y / scaleFactor.y) * scaleFactor.y;
                GUILayout.EndHorizontal();
                mBezierPoints[i].positionPoint = position;

                GUILayout.BeginHorizontal();
                GUILayout.Label("control");
                GUILayout.Label("X");
                control.x = EditorGUILayout.FloatField(control.x / scaleFactor.x) * scaleFactor.x;
                GUILayout.Label("Y");
                control.y = EditorGUILayout.FloatField(control.y / scaleFactor.y) * scaleFactor.y;
                GUILayout.EndHorizontal();
                mBezierPoints[i].controlPoint = control;
            }

            if (mBezierPoints.Count < 2)
            {
                EditorGUILayout.HelpBox("Bezier's line must have at least Two Points", MessageType.Warning);
            }

            GUILayout.Label("", GUILayout.Height(3));
            if (GUILayout.Button("Add Point"))
            {
                MUIBezierPoint point = mBezier.gameObject.AddComponent<MUIBezierPoint>();
                point.index = mBezierPoints.Count;
                Debug.Log(mBezierPoints.Count);
                point.positionPoint = new Vector2(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
                point.controlPoint = point.positionPoint + new Vector2(Random.Range(-.2f, .2f), Random.Range(-.2f, .2f));
                mBezierPoints.Add(point);
            }   
        }

        if (GUI.changed)
        {
            EditorUtility.SetDirty(mBezier);
        }

        serializedObject.ApplyModifiedProperties();
    }

    Vector2 SymmetryPoint(Vector2 curPoint, Vector2 centerPoint)
    {
        //获得对称点
        Vector2 symmetryPoint = Vector2.zero;
        symmetryPoint = centerPoint * 2 - curPoint;
        return symmetryPoint;
    }

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
