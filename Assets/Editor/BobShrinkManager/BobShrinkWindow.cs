using UnityEngine;
using System.Collections;
using UnityEditor;
using System.Collections.Generic;
/// <summary>
/// 显示Atlas，纹理压缩管理窗口
/// </summary>
public class BobShrinkWindow : EditorWindow {

    [MenuItem("BY Engine/ShrinkEditor")]
    static void OpenShrinkEditor()
    {
//        BobShrinkWindow ShrinkEditorWindow = EditorWindow.GetWindow<BobShrinkWindow>();
    }
    private AtlasDataBase db
    {
        get
        {
            return BobShrinker.db;
        }
    }
    
    BobShrinkFilePanel filepanel = new BobShrinkFilePanel();
    Vector2 currentShrinkPos = Vector2.zero;
    void OnGUI()
    {
        GUILayout.Label(string.Format("atlas: {0}  textures: {1}", db.mAtlasPaths.Count, db.mTexturePaths.Count));
        GUILayout.BeginHorizontal();
        GUILayout.Label("Filter:", GUILayout.Width(40));
        filepanel.mfilterStr = GUILayout.TextField(filepanel.mfilterStr);
        GUILayout.Space(10);
        GUILayout.EndHorizontal();


        Rect m_shrinkedArea = new Rect(0, 50, Screen.width, Screen.height - 90);
        GUI.Box(new Rect(0, m_shrinkedArea.yMin-13, m_shrinkedArea.width, m_shrinkedArea.height),"");
        currentShrinkPos = GUILayout.BeginScrollView(currentShrinkPos,GUILayout.Height(m_shrinkedArea.height));
        filepanel.OnGUI();
        GUILayout.EndScrollView();
        GUILayout.FlexibleSpace();
        GUILayout.BeginHorizontal();

        if (GUILayout.Button("DoShrink", GUILayout.Width(100)))
        {
            bool ret = EditorUtility.DisplayDialog("注意", "将要进行纹理压缩，\n确认要进行吗？", "确认", "取消");
            if (ret)
            {
                //BundleEditor.DoShrink();
            }
        }
        if (GUILayout.Button("DoRecover", GUILayout.Width(100)))
        {
            bool ret = EditorUtility.DisplayDialog("注意", "将要进行纹理恢复，\n确认要进行吗？", "确认", "取消");
            if (ret)
            {
                //BundleEditor.DoRecover();
            }
        }
        if (GUILayout.Button("Clear",GUILayout.Width(100)))
        {
            bool ret = EditorUtility.DisplayDialog("注意", "清空后将无法恢复资源，\n确认要清空吗？", "确认", "取消");
            if (ret)
            {
                db.ClearData();
                EditorUtility.SetDirty(db);
            }
        }
        GUILayout.EndHorizontal();
    }


}
