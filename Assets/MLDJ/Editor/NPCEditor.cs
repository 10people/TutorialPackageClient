/********************************************************************
	created:	2014/03/14
	created:	14:3:2014   10:11
	filename: 	NPCEditor.cs
	author:		王迪
	
	purpose:	种怪编辑器，导入导出接口
*********************************************************************/
using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;


public class NPCEditor : Editor 
{
    public GameObject EffectObj;

    [MenuItem("MLDJ/Utils/NPCEditor/ExportData")]
    public static  void ExportData()
    {
        GameObject curObj = Selection.activeGameObject;
        if (null == curObj)
        {
            Debug.LogError("pleas choose the npcEditor root");
            return;
        }
        NPCEditorRoot curRoot = curObj.GetComponent<NPCEditorRoot>();
        if (null == curRoot)
        {
            Debug.LogError("the object is not a npcEditor root");
            return;
        }
        string SavePath = Application.dataPath + "/Data/";
        if (!Directory.Exists(SavePath))
        {
            Directory.CreateDirectory(SavePath);
        }

        string SaveFile = Application.dataPath + "/../../Public/PublicTables/SceneNpc.txt";
        curRoot.ExportData(SaveFile);
        AssetDatabase.Refresh();
        Debug.Log(SavePath + "保存完毕");

        /*
        string curPath = "";//= BundleManager.GetGUIDataName(target.name);
       
         * */
    }

    [MenuItem("MLDJ/Utils/NPCEditor/ImportData")]
    public static void ImportData()
    {
        GameObject curObj = Selection.activeGameObject;
        if (null == curObj)
        {
            Debug.LogError("pleas choose the npcEditor root");
            return;
        }
        NPCEditorRoot curRoot = curObj.GetComponent<NPCEditorRoot>();
        if (null == curRoot)
        {
            Debug.LogError("the object is not a npcEditor root");
            return;
        }
        string curPath = Application.dataPath + "/../../Public/PublicTables/SceneNpc.txt";
        if (!File.Exists(curPath))
        {
            EditorUtility.DisplayDialog("提示", "文件 " + curPath + " 不存在，无法加载", "确定");
        }
        else
        {
            curRoot.ImportData(curPath);
        }
    }
	
}
 
