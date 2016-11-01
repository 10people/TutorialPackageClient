#region
/*************************************************************************************
   * filename:          GetBindPointPathEditorWindow
   * date:              4/15/2015 10:11:28 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System;
using UnityEditor;
using UnityEngine;
using Object = UnityEngine.Object;

public class GetBindPointPathEditorWindow : EditorWindow
{
    #region 变量

    private string m_sRootName = "all";

    private const string m_sBaseRoot = "Model";
    private string m_fullPath = "";
    private string m_sFormat = "{0}/{1}";

    #endregion

    #region 属性

    #endregion

    #region 方法

    void OnGUI()
    {
        GUILayout.BeginVertical();
        GUILayout.BeginHorizontal();
        GUILayout.Label("RootName:");
        m_sRootName = GUILayout.TextField(m_sRootName);
        GUILayout.EndHorizontal();
        if (GUILayout.Button("Get"))
        {
            Object curSelect = Selection.activeObject;
            
            if (curSelect != null && curSelect is GameObject)
            {
                Debug.Log(curSelect.name);
                if (!FindFullPathWithRoot(((GameObject)curSelect).transform))
                {
                    m_fullPath = "error!";
                }
                TextEditor te = new TextEditor();
                te.content = new GUIContent(m_fullPath);
                te.OnFocus();
                te.Copy();
            }
            else
            {
                Debug.LogError("curSelect is invalid!");
                return;
            }
        }
        GUILayout.BeginHorizontal();
        GUILayout.Label("Res:");
        GUILayout.TextField(m_fullPath);
        GUILayout.EndHorizontal();
        GUILayout.Label("点击按钮后会直接将内容拷贝至剪切板,在excel中直接粘贴即可.");
        GUILayout.EndVertical();
    }

    [MenuItem("CABAL/GetBindPointPathEditorWindow")]
    public static void DoTexture()
    {
        var window = GetWindow<GetBindPointPathEditorWindow>();
        window.position = new Rect(100, 100, 500, 200);
        window.title = "GetBindPointPathEditorWindow";
        window.Show();
    }


    #region private

    private bool FindFullPathWithRoot(Transform go)
    {
        if (go == null)
        {
            return false;
        }
        m_fullPath = go.name;
        Transform tmpParent = go.parent;
        bool isFind = false;
        while (tmpParent !=null)
        {
            m_fullPath = string.Format(m_sFormat, tmpParent.name, m_fullPath);
            
            if (tmpParent.name == m_sRootName)
            {
                isFind = true;
                m_fullPath = string.Format(m_sFormat,m_sBaseRoot, m_fullPath);
                break;
            }
            tmpParent = tmpParent.parent;
        }
        return isFind;
    }

    #endregion

    #endregion
}