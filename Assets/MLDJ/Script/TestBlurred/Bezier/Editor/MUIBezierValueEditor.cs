//------------------------------------------------------
//MGUI: Cyou MGUI
//CopyRight © 2014-1015 用研一部
//ALL rights reserved
//ClassName:MUIBezierValueEditor
//Description:贝塞尔曲线编辑类,编辑MUIBezierValue在Inspector中的显示
//
//created by yinyi at 2015.07.20
//-------------------------------------------------------
using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;

[CanEditMultipleObjects]
[CustomEditor(typeof(MUIBezierValue))]
public class MUIBezierValueEditor : Editor
{
    MUIBezierValue mBezierValue;
    List<MUIBezierPoint> mBezierPoints = new List<MUIBezierPoint>();
    Vector3 scaleFactor = Vector3.zero;

    void OnSceneGUI()
    {
        mBezierValue = (MUIBezierValue)target;

        if (mBezierValue == null)
            return;

        scaleFactor = RootScale(mBezierValue.transform.parent);
        //if (scaleFactor.Equals(Vector3.zero))
        //{
        //    Debug.Log(scaleFactor);
        //}
        mBezierValue.bezierPoints.Clear();
        foreach (MUIBezierPoint point in mBezierValue.gameObject.GetComponents<MUIBezierPoint>())
        {
            mBezierValue.bezierPoints.Add(point);
        }
        mBezierPoints = mBezierValue.bezierPoints;

        if (mBezierValue.enabled)
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
                    EditorUtility.SetDirty(mBezierValue);
                }
            }
        }
    }

    public override void OnInspectorGUI()
    {
        if (mBezierValue == null)
            return;

        serializedObject.Update();

        GUI.changed = false;

        if (NGUIEditorTools.DrawHeader("Anchor"))
            EditorGUILayout.PropertyField(serializedObject.FindProperty("anchorTarget"));

        if (NGUIEditorTools.DrawHeader("Points"))
        {
            Transform anchorTrans = mBezierValue.anchorTarget;
            if (anchorTrans == null)
                anchorTrans = mBezierValue.transform;

            mBezierValue.anchorTarget = anchorTrans;

            for (int i = 0; i < mBezierPoints.Count; i++)
            {
                Vector2 position = mBezierPoints[i].positionPoint;
                Vector2 control = mBezierPoints[i].controlPoint;
                Vector2 posDis = mBezierPoints[i].positionDis;
                Vector2 ctrlDis = mBezierPoints[i].controlDis;

                GUILayout.BeginHorizontal();
                EditorGUILayout.LabelField("Point" + i, EditorStyles.boldLabel);
                if (GUILayout.Button("Delete Point"))
                {
                    DestroyImmediate(mBezierValue.bezierPoints[i]);
                    mBezierPoints.RemoveAt(i);
                    continue;
                }
                GUILayout.EndHorizontal();

                GUILayout.BeginHorizontal();
                GUILayout.Label("position");
                GUILayout.Label("X");
                //在Inspector上显示的值是与当前的transform统一坐标系,且有锚点的话显示基于锚点的坐标
                if (anchorTrans == null)
                    position.x = EditorGUILayout.FloatField(position.x / scaleFactor.x) * scaleFactor.x;
                else
                {
                    position.x = EditorGUILayout.FloatField((position.x - anchorTrans.position.x) / scaleFactor.x) * scaleFactor.x + anchorTrans.position.x;
                    posDis.x = position.x - anchorTrans.position.x;
                }

                GUILayout.Label("Y");
                if (anchorTrans == null)
                    position.y = EditorGUILayout.FloatField(position.y / scaleFactor.y) * scaleFactor.y;
                else
                {
                    position.y = EditorGUILayout.FloatField((position.y - anchorTrans.position.y) / scaleFactor.y) * scaleFactor.y + anchorTrans.position.y;
                    posDis.y = position.y - anchorTrans.position.y;
                }

                GUILayout.EndHorizontal();
                mBezierPoints[i].positionPoint = position;
                if (anchorTrans != null)
                    mBezierPoints[i].positionDis = posDis;

                GUILayout.BeginHorizontal();
                GUILayout.Label("control");
                GUILayout.Label("X");
                if (anchorTrans == null)
                    control.x = EditorGUILayout.FloatField(control.x / scaleFactor.x) * scaleFactor.x;
                else
                {
                    control.x = EditorGUILayout.FloatField((control.x - anchorTrans.position.x) / scaleFactor.x) * scaleFactor.x + anchorTrans.position.x;
                    ctrlDis.x = control.x - anchorTrans.position.x;
                }

                GUILayout.Label("Y");
                if (anchorTrans == null)
                    control.y = EditorGUILayout.FloatField(control.y / scaleFactor.y) * scaleFactor.y;
                else
                {
                    control.y = EditorGUILayout.FloatField((control.y - anchorTrans.position.y) / scaleFactor.y) * scaleFactor.y + anchorTrans.position.y;
                    ctrlDis.y = control.y - anchorTrans.position.y;
                }

                GUILayout.EndHorizontal();
                mBezierPoints[i].controlPoint = control;
                if (anchorTrans != null)
                    mBezierPoints[i].controlDis = ctrlDis;
            }

            if (mBezierPoints.Count < 2)
            {
                EditorGUILayout.HelpBox("Bezier's line must have at least Two Points", MessageType.Warning);
            }

            GUILayout.Label("", GUILayout.Height(3));
            if (GUILayout.Button("Add Point"))
            {
                MUIBezierPoint point = mBezierValue.gameObject.AddComponent<MUIBezierPoint>();
                point.index = mBezierPoints.Count;
                Debug.Log(mBezierPoints.Count);
                point.positionPoint = new Vector2(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
                point.controlPoint = point.positionPoint + new Vector2(Random.Range(-.2f, .2f), Random.Range(-.2f, .2f));
                mBezierPoints.Add(point);
            }
        }

        if (GUI.changed)
        {
            EditorUtility.SetDirty(mBezierValue);
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
