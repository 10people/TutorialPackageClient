
using System;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof (CameraRockTest))]
public class CameraRockEditor : Editor
{
    // Use this for initialization    
    private void Start()
    {
    }

    // Update is called once per frame  
    private void Update()
    {
    }

    private CameraRockTest _rockTest;
    private string PosXId = "-1";
    private string PosYId = "-1";
    private string PosZId = "-1";

    private string RXId = "-1";
    private string RYId = "-1";
    private string RZId = "-1";

    private void OnEnable()
    {
        _rockTest = (CameraRockTest) target;
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        GUILayout.BeginVertical();

        if (GUILayout.Button("保存数据", GUILayout.Width(100), GUILayout.Height(30)))
        {
            _rockTest.WriteCurveValue();
            PosXId = _rockTest.PosxIndex.ToString();
            PosYId = _rockTest.PosYIndex.ToString();
            PosZId = _rockTest.PosZIndex.ToString();

            RXId = _rockTest.RXIndex.ToString();
            RYId = _rockTest.RYIndex.ToString();
            RZId = _rockTest.RZIndex.ToString();
        }
        GUILayout.Space(10);
        if (GUILayout.Button("开始震屏", GUILayout.Width(100), GUILayout.Height(30)))
        {
            _rockTest.Play();
        }

        GUILayout.Space(50);

        GUILayout.BeginHorizontal();
        GUILayout.Label("XRockOff的曲线ID:");
        PosXId = GUILayout.TextField(PosXId, GUILayout.Width(100), GUILayout.Height(20));
        GUILayout.EndHorizontal();

        GUILayout.BeginHorizontal();
        GUILayout.Label("YRockOff的曲线ID:");
        PosYId = GUILayout.TextField(PosYId, GUILayout.Width(100), GUILayout.Height(20));
        GUILayout.EndHorizontal();

        GUILayout.BeginHorizontal();
        GUILayout.Label("ZRockOff的曲线ID:");
        PosZId = GUILayout.TextField(PosZId, GUILayout.Width(100), GUILayout.Height(20));
        GUILayout.EndHorizontal();

        GUILayout.BeginHorizontal();
        GUILayout.Label("RX RockOff的曲线ID:");
        RXId = GUILayout.TextField(RXId, GUILayout.Width(100), GUILayout.Height(20));
        GUILayout.EndHorizontal();

        GUILayout.BeginHorizontal();
        GUILayout.Label("RY RockOff的曲线ID:");
        RYId = GUILayout.TextField(RYId, GUILayout.Width(100), GUILayout.Height(20));
        GUILayout.EndHorizontal();

        GUILayout.BeginHorizontal();
        GUILayout.Label("RZ RockOff的曲线ID:");
        RZId = GUILayout.TextField(RZId, GUILayout.Width(100), GUILayout.Height(20));
        GUILayout.EndHorizontal();


        if (GUILayout.Button("读取数据", GUILayout.Width(100), GUILayout.Height(30)))
        {
            _rockTest.SetRockXCurve(_rockTest.InitRockOff(Convert.ToInt32(PosXId)));
            _rockTest.SetRockYCurve(_rockTest.InitRockOff(Convert.ToInt32(PosYId)));
            _rockTest.SetRockZCurve(_rockTest.InitRockOff(Convert.ToInt32(PosZId)));

            _rockTest.SetRockRXCurve(_rockTest.InitRockOff(Convert.ToInt32(RXId)));
            _rockTest.SetRockRYCurve(_rockTest.InitRockOff(Convert.ToInt32(RYId)));
            _rockTest.SetRockRZCurve(_rockTest.InitRockOff(Convert.ToInt32(RZId)));
        }
        GUILayout.EndVertical();
    }
}
