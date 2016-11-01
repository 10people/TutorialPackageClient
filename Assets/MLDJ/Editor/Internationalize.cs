/********************************************************************************
 *	文件名：	Internationalize.cs
 *	全路径：	\MLDJ\Editor\Internationalize.cs
 *	创建人：	李嘉
 *	创建时间：2014-10-22
 *
 *	功能说明：所有国际化工具的实现文件
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.IO;
using System.Collections.Generic;
using UnityEditor;
using System;

public class Internationalize : Editor
{
    //////////////////////////////////////////////////////////////////////////
    // 生成当前场景服务器阻挡
    //////////////////////////////////////////////////////////////////////////
    [MenuItem("MLDJ/Internationalize/CheckChineseInUIPrefab")]
    public static void CheckChineseInUIPrefab()
    {
        //获取UI下的所有文件名
        Dictionary<string, string> pathDic = GetPrefabDicInPath(Application.dataPath + "/MLDJ/BundleData/UI");
        //获取所有的Prefab的GameObject
        Dictionary<string, UnityEngine.Object> singleObjsDic = GetFolderObjectDicByPathGroup(pathDic, "/MLDJ/BundleData/UI");
        
        //搜索singleObjsDic下的所有GameObject的UILable脚本
        foreach(UnityEngine.Object obj in singleObjsDic.Values)
        {
            if (null == obj)
                continue;

            GameObject uiGameObj = obj as GameObject;
            if (null == uiGameObj)
                continue;

            //记录当前界面名称
            string szUIName = uiGameObj.name;            
            //查找所有的Lable控件,发现包含中文字符则输出Log
            FindUILable(uiGameObj.transform, szUIName);
        }
    }
    [MenuItem("MLDJ/Internationalize/CheckChineseInSelectUIPrefab")]
    public static void CheckSelectPrefab()
    {
        UnityEngine.Object objSelected = Selection.activeObject;
        GameObject uiGameObj = objSelected as GameObject;
            if (null == uiGameObj)
                return;

            //记录当前界面名称
            string szUIName = uiGameObj.name;            
            //查找所有的Lable控件,发现包含中文字符则输出Log
            FindUILable(uiGameObj.transform, szUIName);
    }

    //检查Lable是否包含中文
    static bool IsLableContainChinese(UILabel lable)
    {
        if (null == lable)
            return false;

        if (lable.useDicTable)
        {
            if (lable.curDicID >= 0)
            {
                //使用了合法字典号，为合法Lable
                return false;
            }
            else
            {
                //使用了非法字典号，为不合法Lable
                return true;
            }
        }

        foreach (char c in lable.text)
        {
            if ((int)c > 127)
            {
                //包含中文字符，为不合格Lable
                return true;
            }
        }

        return false;
    }

    static void FindUILable(Transform parent, string szUIName)
    {
        if (null == parent)
        {
            return;
        }

        foreach (Transform child in parent)
        {
            if (null != child)
            {
                UILabel childLable = child.gameObject.GetComponent<UILabel>();
                if (null != childLable && true == IsLableContainChinese(childLable))
                {
                    Debug.Log("UIName:" + szUIName + ", LableName:" + childLable.name + ", Text:" + childLable.text);
                }

                FindUILable(child, szUIName);
            }
        }
    }

    // 返回name:path字典
    static Dictionary<string, string> GetPrefabDicInPath(string path)
    {
        path = path.Replace('\\', '/');
        Dictionary<string, string> retDic = new Dictionary<string, string>();
        GetAssetInPath(retDic, path, path);
        return retDic;
    }

    static void GetAssetInPath(Dictionary<string, string> retDic, string startPath, string curPath)
    {
        string[] fileList = Directory.GetFiles(curPath);
        string[] dictionaryList = Directory.GetDirectories(curPath);

        foreach (string curFile in fileList)
        {
            if (curFile.EndsWith("prefab"))
            {
                string curFilePath = curFile.Replace('\\', '/');
                curFilePath = curFilePath.Substring(startPath.Length + 1);
                retDic.Add(curFilePath.Substring(0, curFilePath.Length - 7), curFile.Replace(Application.dataPath, "Assets").Replace('\\', '/'));
            }
        }

        // 逐层目录开始遍历，获取所有的file end的文件
        foreach (string curDic in dictionaryList)
        {
            string curDicName = curDic.Replace('\\', '/');
            GetAssetInPath(retDic, startPath, curDicName);
        }
    }

    // 返回选择路径下的全部物体
    static Dictionary<string, UnityEngine.Object> GetFolderObjectDicByPathGroup(Dictionary<string, string> pathDic, string selectPath)
    {
        Dictionary<string, UnityEngine.Object> retDic = new Dictionary<string, UnityEngine.Object>();
        foreach (KeyValuePair<string, string> curPair in pathDic)
        {
            if (curPair.Value.Replace('\\', '/').Contains(selectPath.Replace('\\', '/')))
            {
                retDic.Add(curPair.Key, AssetDatabase.LoadMainAssetAtPath(curPair.Value));
            }
        }
        return retDic;
    }

    [MenuItem("MLDJ/Internationalize/CopyInternalizeAllData")]
    public static void CopyAllData()
    {
        CopyInternationRes(Games.GlobeDefine.GlobeVar.TYPE_INTERNATION);
    }

    [MenuItem("MLDJ/Internationalize/CopyInternalizeBundleAssets")]
    public static void CopyBundleAsset()
    {
        CopyInternationRes(Games.GlobeDefine.GlobeVar.TYPE_INTERNATION, CopyType.BUNDLE);
    }

    [MenuItem("MLDJ/Internationalize/CopyInternalizeResource")]
    public static void CopyResource()
    {
        CopyInternationRes(Games.GlobeDefine.GlobeVar.TYPE_INTERNATION, CopyType.RESOURCES);
    }

    [MenuItem("MLDJ/Internationalize/CopyInternalizeUIRes")]
    public static void CopyUIRes()
    {
        CopyInternationRes(Games.GlobeDefine.GlobeVar.TYPE_INTERNATION, CopyType.UIRES);
    }

    public enum CopyType
    {
        ALL,
        BUNDLE,
        RESOURCES,
        UIRES,
    }
    public static bool CopyInternationRes(Games.GlobeDefine.GameDefine_Globe.InternationType internation, CopyType copyType = CopyType.ALL)
    {
        string strCode = "";
        switch (internation)
        {
            case Games.GlobeDefine.GameDefine_Globe.InternationType.TW:
                {
                    strCode = "TW";
                }
                break;
            case Games.GlobeDefine.GameDefine_Globe.InternationType.HK:
                {
                    strCode = "HK";
                }
            break;
            default:
            {
                Debug.LogError("cur internal is not defined" + internation.ToString());
            }
            
            return false;
        }

        string strRootPath = Application.dataPath;

        if (copyType == CopyType.ALL || copyType == CopyType.BUNDLE)
        {
            // 拷贝BundleData
            
            string strDisBundlePath = strRootPath + "/BundleAssets";
            string strSrcBundlePath = strRootPath + "/International/" + strCode + "/R_BundleAssets";
            if (!CopyData(strSrcBundlePath.Replace("\\", "/"), strDisBundlePath.Replace("\\", "/")))
            {
                return false;
            }
        }

        if (copyType == CopyType.ALL || copyType == CopyType.RESOURCES)
        {
            // 拷贝Resources
            string strDisResourcesPath = strRootPath + "/MLDJ/Resources";
            string strSrcResourcesPath = strRootPath + "/International/" + strCode + "/R_Resources";
            if (!CopyData(strSrcResourcesPath.Replace("\\", "/"), strDisResourcesPath.Replace("\\", "/")))
            {
                return false;
            }
        }

        if (copyType == CopyType.ALL || copyType == CopyType.UIRES)
        {
            // 拷贝UIRes
            string strDisUIResPath = strRootPath + "/MLDJ/UIRes";
            string strSrcUIResPath = strRootPath + "/International/" + strCode + "/R_UIRes";
            if (!CopyData(strSrcUIResPath.Replace("\\", "/"), strDisUIResPath.Replace("\\", "/")))
            {
                return false;
            }
        }
       

        AssetDatabase.Refresh();
        return true ;
    }

    private static bool CopyData(string strSrcPath, string strDisPath)
    {
        string[] curFiles = Directory.GetFiles(strSrcPath);
        foreach (string curFile in curFiles)
        {
            if (!curFile.EndsWith(".meta"))
            {
                string relFilePath = curFile.Replace("\\", "/").Substring(strSrcPath.Length);
                string srcFile = strSrcPath + relFilePath;
                string disFile = strDisPath + relFilePath;

                try
                {
                    System.IO.File.Copy(srcFile, disFile, true);
                }
                catch (Exception e)
                {
                    Debug.LogError(e.ToString() + "copy file error" + srcFile + " " + disFile);
                    return false;
                }
                
                //Debug.LogError("copy " + srcFile + " to " + disFile);

                if (File.Exists(srcFile + ".meta"))
                {
                    try
                    {
                        System.IO.File.Copy(srcFile + ".meta", disFile + ".meta", true);
                    }
                    catch (Exception e)
                    {
                        Debug.LogError(e.ToString() + "copy meta file error" + srcFile + " " + disFile);
                        return false;
                    }
                    
                }
            }
            
        }

        string[] curDics = Directory.GetDirectories(strSrcPath);
        foreach (string curDic in curDics)
        {
            string relDic =  curDic.Replace("\\", "/").Substring(strSrcPath.Length);
            CopyData(strSrcPath + relDic, strDisPath + relDic);
        }

        return true;
        
    }
}