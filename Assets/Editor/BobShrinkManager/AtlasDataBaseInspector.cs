using UnityEngine;
using System.Collections;
using UnityEditor;

/// <summary>
/// 单纯的为了不显示AtlasDataBase中
/// Inspector中的数据而创建这个类
/// </summary>
[CustomEditor(typeof(AtlasDataBase))]
public class AtlasDataBaseInspector : Editor
{
    public override void OnInspectorGUI()
    {

    }
}