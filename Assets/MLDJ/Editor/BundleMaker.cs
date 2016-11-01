using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;
using System.Collections.Generic;
using GCGame;
using System.Xml;
using Games.GlobeDefine;

public class BundleEditor : Editor
{

    private static Dictionary<string, int> m_dicBundleLevel = new Dictionary<string, int>();
    private static bool m_bRecordLevel = false;
    private static string m_curOutputPath = "";

    static string GetSelectPath(string targetDoc)
    {
        Object objSelected = Selection.activeObject;
        if (null == objSelected)
        {
            Debug.LogError("choose a folder first");
            return null;
        }

        string selectPath = AssetDatabase.GetAssetPath(objSelected).Replace("Assets", "");
        Debug.Log("current work path" + selectPath);

        if (!selectPath.Contains(targetDoc))
        {
            Debug.LogError("cur path not contain target doc : " + targetDoc);
            return null;
        }
        return selectPath;
    }

    static Object[] GetObjArrayByPathList(List<string> pathList)
    {
        Object[] retObjArray = new Object[pathList.Count];

        for (int i = 0; i < pathList.Count; i++)
        {
            retObjArray[i] = AssetDatabase.LoadMainAssetAtPath(pathList[i]);
        }
        return retObjArray;
    }

    static Dictionary<string, Object[]> GetGroupObjectDicByPathGroup(Dictionary<string, List<string>> pathDic, string selectPath)
    {

        Dictionary<string, Object[]> retDic = new Dictionary<string, Object[]>();

        foreach (KeyValuePair<string, List<string>> curPair in pathDic)
        {
            int realArrayCount = 0;
            for (int i = 0; i < curPair.Value.Count; i++)
            {
                if (curPair.Value[i].Replace('\\', '/').Contains(selectPath.Replace('\\', '/')))
                {
                    realArrayCount++;
                }
            }

            if (realArrayCount > 0)
            {
                Object[] retObjArray = new Object[realArrayCount];
                for (int i = 0; i < curPair.Value.Count; i++)
                {
                    if (curPair.Value[i].Replace('\\', '/').Contains(selectPath.Replace('\\', '/')))
                    {
                        realArrayCount++;
                        retObjArray[i] = AssetDatabase.LoadMainAssetAtPath(curPair.Value[i]);
                    }
                }
                retDic.Add(curPair.Key, retObjArray);
            }
        }

        return retDic;
    }

    // 返回选择路径下的全部物体
    static Dictionary<string, Object> GetFolderObjectDicByPathGroup(Dictionary<string, string> pathDic, string selectPath)
    {
        Dictionary<string, Object> retDic = new Dictionary<string, Object>();
        foreach (KeyValuePair<string, string> curPair in pathDic)
        {
            if (curPair.Value.Replace('\\', '/').Contains(selectPath.Replace('\\', '/')))
            {
                retDic.Add(curPair.Key, AssetDatabase.LoadMainAssetAtPath(curPair.Value));
            }
        }
        return retDic;
    }

    static Object[] GetDependObjectByPathList(Dictionary<string, List<string>> pathList)
    {

        List<Object> objCheckList = new List<Object>();
        foreach (KeyValuePair<string, List<string>> curPathPair in pathList)
        {
            foreach (string curPath in curPathPair.Value)
            {
                objCheckList.Add(AssetDatabase.LoadMainAssetAtPath(curPath));
            }
        }

        Object[] retObjArray = new Object[objCheckList.Count];
        for (int i = 0; i < objCheckList.Count; i++)
        {
            retObjArray[i] = objCheckList[i];
        }

        return EditorUtility.CollectDependencies(retObjArray);

    }

    // 返回字典key为groupName，value为pathList
    static Dictionary<string, List<string>> GetPrefabGroupInPath(string path)
    {
        Dictionary<string, List<string>> retDic = new Dictionary<string, List<string>>();
        string[] fileList = Directory.GetFiles(path);
        string[] dictionaryList = Directory.GetDirectories(path);
        foreach (string curFile in fileList)
        {
            if (curFile.EndsWith("prefab"))
            {
                List<string> curPathList = new List<string>();
                curPathList.Add(curFile.Replace(Application.dataPath, "Assets"));
                string curFilePath = curFile.Replace('\\', '/');
                curFilePath = curFilePath.Substring(curFilePath.LastIndexOf('/') + 1);
                Debug.Log("Add Dic:" + curFilePath.Substring(0, curFilePath.Length - 7));
                retDic.Add(curFilePath.Substring(0, curFilePath.Length - 7), curPathList);
            }
        }

        foreach (string curDic in dictionaryList)
        {
            fileList = Directory.GetFiles(curDic);
            string curDicName = curDic.Replace('\\', '/');
            curDicName = curDicName.Substring(curDicName.LastIndexOf('/') + 1);
            Debug.Log("Add Dic:" + curDicName);
            List<string> curPathList = new List<string>();
            foreach (string curFile in fileList)
            {
                if (curFile.EndsWith("prefab"))
                {
                    curPathList.Add(curFile.Replace(Application.dataPath, "Assets"));

                    Debug.Log("============Add Dic:" + curDicName + " --path :" + curFile.Replace(Application.dataPath, "Assets"));
                }
            }
            retDic.Add(curDicName, curPathList);
        }
        return retDic;
    }


    // 返回name:path字典
    static Dictionary<string, string> GetPrefabDicInPath(string path, string[] fileEndArray)
    {
        path = path.Replace('\\', '/');
        Dictionary<string, string> retDic = new Dictionary<string, string>();
        GetAssetInPath(retDic, path, path, fileEndArray);
        return retDic;
    }

    static void GetAssetInPath(Dictionary<string, string> retDic, string startPath, string curPath, string[] fileEndArray)
    {
        string[] fileList = Directory.GetFiles(curPath);
        string[] dictionaryList = Directory.GetDirectories(curPath);

        foreach (string curFile in fileList)
        {
            foreach (string fileEnd in fileEndArray)
            {
                if (curFile.EndsWith(fileEnd))
                {
                    string curFilePath = curFile.Replace('\\', '/');
                    curFilePath = curFilePath.Substring(startPath.Length + 1);
                    //Debug.Log("Add Dic:" + curFilePath.Substring(0, curFilePath.Length - fileEnd.Length - 1));
                    retDic.Add(curFilePath.Substring(0, curFilePath.Length - fileEnd.Length - 1), curFile.Replace(Application.dataPath, "Assets").Replace('\\', '/'));
                    break;
                }
            }
        }

        // 逐层目录开始遍历，获取所有的file end的文件
        foreach (string curDic in dictionaryList)
        {
            string curDicName = curDic.Replace('\\', '/');
            GetAssetInPath(retDic, startPath, curDicName, fileEndArray);
        }

    }

    static void CheckFontDependFiles(List<string> fontPathList, Object[] objDepends)
    {
        foreach (Object dependObj in objDepends)
        {
            if (dependObj is UnityEngine.Font)
            {
                string fontPath = AssetDatabase.GetAssetPath(dependObj);
                if (!fontPathList.Contains(fontPath))
                {
                    Debug.Log("add font: " + fontPath);
                    fontPathList.Add(fontPath);
                }
            }
        }
    }

    static void CheckCommonDependFiles(List<string> commonPathList, Object[] objDepends)
    {
        foreach (Object dependObj in objDepends)
        {
            if (dependObj is UnityEngine.Texture)
            {
                string commonPath = AssetDatabase.GetAssetPath(dependObj).Replace('\\', '/');
                if (commonPath.Contains("UIRes/Atlas/Common") && !commonPathList.Contains(commonPath))
                {
                    Debug.Log("add common ui: " + commonPath);
                    commonPathList.Add(commonPath);
                }
            }
        }
    }

    static void CheckSoundDependFiles(List<string> soundPathList, Object[] objDepends)
    {
        foreach (Object dependObj in objDepends)
        {
            if (dependObj is UnityEngine.AudioClip)
            {
                string soundPath = AssetDatabase.GetAssetPath(dependObj);
                if (!soundPathList.Contains(soundPath))
                {
                    Debug.Log("add sound: " + soundPath);
                    soundPathList.Add(soundPath);
                }
            }
        }
    }

    static void CheckUIDependFiles(string checkPath, List<string> uiPathList, Object[] objDepends)
    {
        foreach (Object dependObj in objDepends)
        {
            if (dependObj is UnityEngine.Texture)
            {
                string texPath = AssetDatabase.GetAssetPath(dependObj).Replace('\\', '/');
                if (texPath.Contains(checkPath) && !uiPathList.Contains(texPath))
                {
                    Debug.Log(checkPath + " :add ui depend file:" + texPath);
                    uiPathList.Add(texPath);
                }
            }
        }
    }

    static void CheckShaderDependFiles(List<string> shaderPathList, Object[] objDepends)
    {
        foreach (Object dependObj in objDepends)
        {
            if (dependObj is UnityEngine.Texture)
            {
                string texPath = AssetDatabase.GetAssetPath(dependObj).Replace('\\', '/');
                if (!shaderPathList.Contains(texPath))
                {
                    Debug.Log(" :add ui depend file:" + texPath);
                    shaderPathList.Add(texPath);
                }
            }
        }
    }

    // 根据KEY来判断KEY里是否包含等级信息，并写入等级字典里，用于生成INFO时记录
    static string RecordSourceLevel(string orgKey, string startPath, string curPath, string loadPath)
    {
        string retKey = orgKey;
        int loadLevel = 0;
        if (curPath.Contains(startPath))
        {
            string relPath = curPath.Substring(curPath.IndexOf(startPath) + startPath.Length + 1);
            int nextFolderIndex = relPath.IndexOf('/');
            if (nextFolderIndex >= 0)
            {
                string nextFolder = relPath.Substring(0, nextFolderIndex);
                if (int.TryParse(nextFolder, out loadLevel))
                {
                    retKey = retKey.Remove(0, nextFolder.Length + 1);
                }
            }
        }

        string outputPath = loadPath + "/" + retKey + ".data";
        string loadRelPath = outputPath.Substring(m_curOutputPath.Length + 1).Replace('\\', '/');
        if (m_bRecordLevel)
        {
            Debug.Log("add record " + loadLevel.ToString() + " key " + loadRelPath);
            m_dicBundleLevel.Add(loadRelPath, loadLevel);
        }

        return retKey;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // 导出带有目录结构的非依赖Prefab
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    static void ExportFolderPrefab(string selectPath, string choosePath, string loadPath, BuildTarget buildTarget, string[] fileEndArray)
    {
        string startPath = selectPath.Substring(0, selectPath.IndexOf(choosePath) + choosePath.Length).Replace("\\", "/");
        Debug.Log("==startPath:" + startPath);
        // 获取 文件名：路径 字典
        Dictionary<string, string> singlePrefabs = GetPrefabDicInPath(Application.dataPath + startPath, fileEndArray);
        // 获取 文件名：物体 字典
        Dictionary<string, Object> singleObjsDic = GetFolderObjectDicByPathGroup(singlePrefabs, selectPath);
        // 去掉等级标识后的路径
        Dictionary<string, Object> finalObjsDic = new Dictionary<string, Object>();
        // 获取所有文件名对应的等级
        foreach (KeyValuePair<string, string> curObjPath in singlePrefabs)
        {
            string curKey = curObjPath.Key;
            if (!singleObjsDic.ContainsKey(curKey))
            {
                Debug.LogError(curKey);
                continue;
            }

            curKey = RecordSourceLevel(curKey, startPath, curObjPath.Value, loadPath);
            finalObjsDic.Add(curKey, singleObjsDic[curObjPath.Key]);
        }

        // 生成所有物体
        foreach (KeyValuePair<string, Object> obj in finalObjsDic)
        {
            Debug.Log("objKey:" + obj.Key);
            Debug.Log("loadPath:" + loadPath);
            string outputPath = loadPath + "/" + obj.Key + ".data";
            Utils.CheckTargetPath(outputPath);
            BuildPipeline.BuildAssetBundle(obj.Value, null, outputPath, BuildAssetBundleOptions.CollectDependencies | BuildAssetBundleOptions.CompleteAssets | BuildAssetBundleOptions.DisableWriteTypeTree | BuildAssetBundleOptions.DeterministicAssetBundle, buildTarget);
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // 导出带有目录结构的非依赖Prefab
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    static void ExportNoneEffectPrefab(string selectPath, string choosePath, string loadPath, BuildTarget buildTarget, string[] fileEndArray, string effectName, bool isShader = false, bool isPrefab = false)
    {
        string startPath = selectPath.Substring(0, selectPath.IndexOf(choosePath) + choosePath.Length).Replace("\\", "/");
        Debug.Log("==startPath:" + startPath);
        // 获取 文件名：路径 字典
        Dictionary<string, string> singlePrefabs = GetPrefabDicInPath(Application.dataPath + startPath, fileEndArray);

        // 获取 文件名：物体 字典
        Dictionary<string, Object> singleObjsDic = GetFolderObjectDicByPathGroup(singlePrefabs, selectPath);

        // 去掉等级标识后的路径
        Dictionary<string, Object> finalObjsDic = new Dictionary<string, Object>();

        // 获取所有文件名对应的等级
        foreach (KeyValuePair<string, string> curObjPath in singlePrefabs)
        {
            string curKey = curObjPath.Key;
            if (!singleObjsDic.ContainsKey(curKey))
            {
                Debug.LogError(curKey);
                continue;
            }

            curKey = RecordSourceLevel(curKey, startPath, curObjPath.Value, loadPath);
            finalObjsDic.Add(curKey, singleObjsDic[curObjPath.Key]);
        }

        Object[] curLoadPrefab = new Object[finalObjsDic.Count];
        int curLoadPrefabIndex = 0;
        foreach (KeyValuePair<string, Object> obj in finalObjsDic)
        {
            curLoadPrefab[curLoadPrefabIndex++] = obj.Value;
        }

        Object[] dependObjs = EditorUtility.CollectDependencies(curLoadPrefab);
        List<Object> shaderDependObjs = new List<Object>();
        foreach (Object curDepend in dependObjs)
        {
            if (curDepend is UnityEngine.Shader)
            {
//                string shaderPath = AssetDatabase.GetAssetPath(curDepend);
                //if (shaderPath.Contains("Assets/MLDJ"))
                {
                    //if (curDepend.name.IndexOf("OutLineHighLightSelfIllumVirtualLightDir") >= 0)
                    //{
                    //    continue;
                    //}

                    shaderDependObjs.Add(curDepend);
                }
            }
        }

        BuildAssetBundleOptions optionsDepend =
            BuildAssetBundleOptions.DeterministicAssetBundle |
                BuildAssetBundleOptions.CompleteAssets;
        BuildAssetBundleOptions optionsNormal =
            BuildAssetBundleOptions.DeterministicAssetBundle |
                BuildAssetBundleOptions.CollectDependencies;

        BuildPipeline.PushAssetDependencies();


        Object[] finalDependObj = null;
        if (shaderDependObjs.Count > 0 && !isPrefab)
        {
            finalDependObj = new Object[shaderDependObjs.Count];
            for (int i = 0; i < shaderDependObjs.Count; i++)
            {
                finalDependObj[i] = shaderDependObjs[i];
            }
        }

        if (finalDependObj != null)
        {
            //model_shader_common

            string outputPath = loadPath + "/" + effectName + ".data";
            Utils.CheckTargetPath(outputPath);
            BuildPipeline.BuildAssetBundle(null, finalDependObj, outputPath, optionsDepend, buildTarget);
        }

        if (!isShader)
        {
            // 生成所有物体
            foreach (KeyValuePair<string, Object> obj in finalObjsDic)
            {

                Debug.Log("objKey:" + obj.Key);
                Debug.Log("loadPath:" + loadPath);
                string outputPath = loadPath + "/" + obj.Key + ".data";
                Utils.CheckTargetPath(outputPath);
                BuildPipeline.PushAssetDependencies();
                BuildPipeline.BuildAssetBundle(obj.Value, null, outputPath, optionsNormal, buildTarget);
                BuildPipeline.PopAssetDependencies();
            }
        }

        BuildPipeline.PopAssetDependencies();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // 导出UI依赖包
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    static void ExportUIPrefab(string selectPath, BuildTarget buildTarget, string outputPath)
    {
        string startPath = selectPath.Substring(0, selectPath.IndexOf("UI/Prefab") + 9);

        // 获取路径下Prefab
        Dictionary<string, List<string>> loginUIPrefabs = GetPrefabGroupInPath(Application.dataPath + startPath + "/" + BundleManager.FolderLoginUI);
        Dictionary<string, List<string>> mainUIPrefabs = GetPrefabGroupInPath(Application.dataPath + startPath + "/" + BundleManager.FolderMainUI);
        Dictionary<string, List<string>> commonUIPrefabs = GetPrefabGroupInPath(Application.dataPath + startPath + "/" + BundleManager.FolderCommonUI);

        BuildAssetBundleOptions optionsDepend =
            BuildAssetBundleOptions.DeterministicAssetBundle |
            BuildAssetBundleOptions.CompleteAssets;
        BuildAssetBundleOptions optionsNormal =
            BuildAssetBundleOptions.DeterministicAssetBundle |
            BuildAssetBundleOptions.CollectDependencies;

        Object[] mainUIdependencies = GetDependObjectByPathList(mainUIPrefabs);
        Object[] loginUIdependencies = GetDependObjectByPathList(loginUIPrefabs);
        Object[] commonUIdependencies = GetDependObjectByPathList(commonUIPrefabs);
        // 保存依赖列表
        List<string> commonDependPathList = new List<string>();
        List<string> fontDependPathList = new List<string>();
        List<string> soundDependPathList = new List<string>();
        List<string> loginUIDependPathList = new List<string>();
        List<string> mainUIDependPathList = new List<string>();

        CheckCommonDependFiles(commonDependPathList, commonUIdependencies);
        CheckCommonDependFiles(commonDependPathList, mainUIdependencies);
        CheckCommonDependFiles(commonDependPathList, loginUIdependencies);

        CheckFontDependFiles(fontDependPathList, commonUIdependencies);
        CheckFontDependFiles(fontDependPathList, mainUIdependencies);
        CheckFontDependFiles(fontDependPathList, loginUIdependencies);

        CheckSoundDependFiles(soundDependPathList, commonUIdependencies);
        CheckSoundDependFiles(soundDependPathList, mainUIdependencies);
        CheckSoundDependFiles(soundDependPathList, loginUIdependencies);

        CheckUIDependFiles("UIRes/Atlas/Login", loginUIDependPathList, loginUIdependencies);
        CheckUIDependFiles("UIRes/Atlas/Main", mainUIDependPathList, mainUIdependencies);

        Utils.CheckTargetPath(outputPath + BundleManager.PathUICommon);
        Utils.CheckTargetPath(outputPath + BundleManager.PathUIPrefab);

        Object[] dependCommonObjs = GetObjArrayByPathList(commonDependPathList);
        Object[] dependFontObjs = GetObjArrayByPathList(fontDependPathList);
//        Object[] dependSoundObjs = GetObjArrayByPathList(soundDependPathList);
        Object[] dependLoginObjs = GetObjArrayByPathList(loginUIDependPathList);
        Object[] dependMainObjs = GetObjArrayByPathList(mainUIDependPathList);
        Dictionary<string, Object[]> commonUIObjsDic = GetGroupObjectDicByPathGroup(commonUIPrefabs, selectPath);
        Dictionary<string, Object[]> loginUIObjsDic = GetGroupObjectDicByPathGroup(loginUIPrefabs, selectPath);
        Dictionary<string, Object[]> mainUIObjsDic = GetGroupObjectDicByPathGroup(mainUIPrefabs, selectPath);
        BuildPipeline.PushAssetDependencies();
        // COMMON
        if (dependFontObjs.Length > 0)
        {
            BuildPipeline.BuildAssetBundle(null, dependFontObjs, outputPath + BundleManager.PathUICommon + "/" + BundleManager.UIFontName, optionsDepend, buildTarget);
        }

        if (dependCommonObjs.Length > 0)
        {
            BuildPipeline.BuildAssetBundle(null, dependCommonObjs, outputPath + BundleManager.PathUICommon + "/" + BundleManager.UICommonName, optionsDepend, buildTarget);
        }
        //===========================================================
        // begin common
        //===========================================================

        BuildPipeline.PushAssetDependencies();
        foreach (KeyValuePair<string, Object[]> obj in commonUIObjsDic)
        {

            BuildPipeline.PushAssetDependencies();
            BuildPipeline.BuildAssetBundle(null, obj.Value, outputPath + BundleManager.PathUIPrefab + "/" + obj.Key + ".data", optionsNormal, buildTarget);
            BuildPipeline.PopAssetDependencies();

        }
        BuildPipeline.PopAssetDependencies();
        //===========================================================
        // end common
        //===========================================================

        //===========================================================
        // begin login
        //===========================================================
        BuildPipeline.PushAssetDependencies();

        if (dependLoginObjs.Length > 0)
        {
            BuildPipeline.BuildAssetBundle(null, dependLoginObjs, outputPath + BundleManager.PathUICommon + "/" + BundleManager.UILoginName, optionsDepend, buildTarget);
        }

        BuildPipeline.PushAssetDependencies();

        foreach (KeyValuePair<string, Object[]> obj in loginUIObjsDic)
        {

            BuildPipeline.PushAssetDependencies();
            BuildPipeline.BuildAssetBundle(null, obj.Value, outputPath + BundleManager.PathUIPrefab + "/" + obj.Key + ".data", optionsNormal, buildTarget);
            BuildPipeline.PopAssetDependencies();

        }

        BuildPipeline.PopAssetDependencies();
        BuildPipeline.PopAssetDependencies();
        //===========================================================
        // end login
        //===========================================================

        //===========================================================
        // begin main
        //===========================================================
        BuildPipeline.PushAssetDependencies();
        if (dependMainObjs.Length > 0)
        {
            BuildPipeline.BuildAssetBundle(null, dependMainObjs, outputPath + BundleManager.PathUICommon + "/" + BundleManager.UIMainName, optionsDepend, buildTarget);
        }

        BuildPipeline.PushAssetDependencies();

        foreach (KeyValuePair<string, Object[]> obj in mainUIObjsDic)
        {

            BuildPipeline.PushAssetDependencies();
            BuildPipeline.BuildAssetBundle(null, obj.Value, outputPath + BundleManager.PathUIPrefab + "/" + obj.Key + ".data", optionsNormal, buildTarget);
            BuildPipeline.PopAssetDependencies();

        }

        BuildPipeline.PopAssetDependencies();

        BuildPipeline.PopAssetDependencies();
        //===========================================================
        // end main
        //===========================================================


        BuildPipeline.PopAssetDependencies();

        EditorUtility.UnloadUnusedAssets();
        AssetDatabase.Refresh();
    }

    [MenuItem("MLDJ/BundleMaker-Dev/UI/UIPrefab")]
    static void ExportDevUIPrefab()
    {
        string selectPath = GetSelectPath("UI/Prefab");
        if (null == selectPath)
        {
            return;
        }

        ExportUIPrefab(selectPath, CommandBuild.GetBuildResTarget, BundleManager.DevelopOutputPath);
    }


    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // 导出Model
    /////////////////////////////////////////////////////////////////////////////////////////////////////

    static string[] modelFileEnd = new string[] { "prefab" };
    static void ExportModel(string selectPath, string outputPath, BuildTarget target)
    {
        ExportNoneEffectPrefab(selectPath, "BundleData/Model", outputPath + BundleManager.PathModelPrefab, target, modelFileEnd, "model_shader_common");
    }


    [MenuItem("MLDJ/BundleMaker-Dev/Model/Prefab")]
    static void ExportDevModel()
    {
        string selectPath = GetSelectPath("BundleData/Model");
        if (null == selectPath)
        {
            return;
        }
        ExportModel(selectPath, BundleManager.DevelopOutputPath, CommandBuild.GetBuildResTarget);
    }

    [MenuItem("MLDJ/BundleMaker-Dev/Model/Shader")]
    static void ExportDevModelShader()
    {
        ExportNoneEffectPrefab("/MLDJ/BundleData/Model", "BundleData/Model", BundleManager.DevelopOutputPath + BundleManager.PathModelPrefab, CommandBuild.GetBuildResTarget, modelFileEnd, "model_shader_common", true);
    }

    static string[] effectFileEnd = new string[] { "prefab" };
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // 导出特效
    /////////////////////////////////////////////////////////////////////////////////////////////////////

    static void ExportEffect(string selectPath, string outputPath, BuildTarget target)
    {
        ExportNoneEffectPrefab(selectPath, "BundleData/Effect", outputPath + BundleManager.PathEffectPrefab, target, effectFileEnd, "effect_shader_common");
    }

    [MenuItem("MLDJ/BundleMaker-Dev/Effect/Prefab")]
    static void ExportDevEffect()
    {
        string selectPath = GetSelectPath("BundleData/Effect");
        if (null == selectPath)
        {
            return;
        }

        ExportEffect(selectPath, BundleManager.DevelopOutputPath, CommandBuild.GetBuildResTarget);
    }

    [MenuItem("MLDJ/BundleMaker-Dev/Effect/Shader")]
    static void ExportDevEffectShader()
    {
        ExportNoneEffectPrefab("/MLDJ/BundleData/Effect", "BundleData/Effect", BundleManager.DevelopOutputPath + BundleManager.PathEffectPrefab, CommandBuild.GetBuildResTarget, modelFileEnd, "effect_shader_common", true);

    }

    static string[] soundFileEnd = new string[] { "mp3", "ogg", "wav", "OGG", "MP3", "WAV" };
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // 导出声音
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    static void ExportSound(string selectPath, string outputPath, BuildTarget target)
    {
        ExportFolderPrefab(selectPath, "BundleData/Sounds", outputPath + BundleManager.PathSoundPrefab, target, soundFileEnd);
    }

    [MenuItem("MLDJ/BundleMaker-Dev/Sound")]
    static void ExportDevSound()
    {
#if UNITY_WINDOWS
        LogModule.WarningLog("really???? crazy!");
        return;
#endif
        string selectPath = GetSelectPath("BundleData/Sounds");
        if (null == selectPath)
        {
            return;
        }


        ExportSound(selectPath, BundleManager.DevelopOutputPath, CommandBuild.GetBuildResTarget);
    }


    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // 导出动作
    /////////////////////////////////////////////////////////////////////////////////////////////////////
//    static string[] animationFileEnd = new string[] { "anim" };
    static void ExportAnimation(string selectPath, string outputPath, BuildTarget target)
    {
        // 暂时屏蔽掉
        return;
        //ExportFolderPrefab(selectPath, "BundleData/Animation", outputPath + BundleManager.PathAnimationAsset, target, animationFileEnd);
    }

    [MenuItem("MLDJ/BundleMaker-Dev/Animation")]
    static void ExportDevAnimation()
    {
#if UNITY_WINDOWS
        LogModule.WarningLog("really???? crazy!");
        return;
#endif
        string selectPath = GetSelectPath("BundleData/Animation");
        if (null == selectPath)
        {
            return;
        }


        ExportAnimation(selectPath, BundleManager.DevelopOutputPath, CommandBuild.GetBuildResTarget);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // 导出场景
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    static string[] sceneFileEnd = new string[] { "unity" };
    static void ExportScene(string selectPath, string outputPath, BuildTarget target)
    {
        ExportSceneStream(selectPath, "BundleData/Scene", outputPath + BundleManager.PathSceneData, target, sceneFileEnd);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////
    // 导出Scene
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    static void ExportSceneStream(string selectPath, string choosePath, string loadPath, BuildTarget buildTarget, string[] fileEndArray)
    {
        string startPath = selectPath.Substring(0, selectPath.IndexOf(choosePath) + choosePath.Length);
        Dictionary<string, string> scenePathDic = GetPrefabDicInPath(Application.dataPath + startPath, fileEndArray);
        Dictionary<string, string> finalScenePathDic = new Dictionary<string, string>();

        // 获取所有文件名对应的等级
        foreach (KeyValuePair<string, string> curObjPath in scenePathDic)
        {
            string curKey = curObjPath.Key;
            curKey = RecordSourceLevel(curKey, startPath, curObjPath.Value, loadPath);
            finalScenePathDic.Add(curKey, scenePathDic[curObjPath.Key]);
        }

        string[] sceneName = new string[1];
        foreach (KeyValuePair<string, string> obj in finalScenePathDic)
        {
            if (obj.Key == Games.GlobeDefine.GameDefine_Globe.LoginSceneName ||
                obj.Key == Games.GlobeDefine.GameDefine_Globe.LoadingSceneName)
            {
                continue;
            }


            if (obj.Value.Replace('\\', '/').Contains(selectPath.Replace('\\', '/')))
            {
                sceneName[0] = obj.Value;
                string outputPath = loadPath + "/" + obj.Key + ".data";
                Utils.CheckTargetPath(outputPath);
                Debug.Log(outputPath);
                BuildPipeline.BuildPlayer(sceneName, outputPath, buildTarget, BuildOptions.BuildAdditionalStreamedScenes);

            }

        }
    }

    [MenuItem("MLDJ/BundleMaker-Dev/Scene")]
    static void ExportDevScene()
    {
#if UNITY_WINDOWS
        LogModule.WarningLog("really???? crazy!");
        return;
#endif
        string selectPath = GetSelectPath("Scene");
        if (null == selectPath)
        {
            return;
        }

        ExportScene(selectPath, BundleManager.DevelopOutputPath, CommandBuild.GetBuildResTarget);
    }


    // 拷贝表格。。。
    public static void ExportTableData(string outputPath, bool isAndroid = false)
    {
        //Android 单独拷贝
        if (isAndroid)
        {
            Utils.CopyPathFile(BundleManager.DevelopOutputPath + "/" + BundleManager.PathTableData,
                Application.dataPath + "/MLDJ/Resources/" + BundleManager.PathTableData);
            Debug.Log("Copy Table to " + Application.dataPath + "/MLDJ/Resources/" + BundleManager.PathTableData);
        }
        Utils.CopyPathFile(BundleManager.DevelopOutputPath + BundleManager.PathTableData, outputPath + BundleManager.PathTableData);
    }
    /// <summary>
    /// 清空bundleData文件夹
    /// </summary>
    private static void CleanAppBundleDir()
    {
        Utils.DeleteFolder(BundleManager.AppOutputPath + "/UI");
        Utils.DeleteFolder(BundleManager.AppOutputPath + "/Model");
        Utils.DeleteFolder(BundleManager.AppOutputPath + "/Effect");
        Utils.DeleteFolder(BundleManager.AppOutputPath + "/Sounds");
        Utils.DeleteFolder(BundleManager.AppOutputPath + "/Animation");
        Utils.DeleteFolder(BundleManager.AppOutputPath + "/Scene");
        Utils.DeleteFolder(BundleManager.AppOutputPath + "/Tables");

        Utils.DeleteFolder(BundleManager.UpdateOutputPath + "/UI");
        Utils.DeleteFolder(BundleManager.UpdateOutputPath + "/Model");
        Utils.DeleteFolder(BundleManager.UpdateOutputPath + "/Effect");
        Utils.DeleteFolder(BundleManager.UpdateOutputPath + "/Sounds");
        Utils.DeleteFolder(BundleManager.UpdateOutputPath + "/Animation");
        Utils.DeleteFolder(BundleManager.UpdateOutputPath + "/Tables");
        Utils.DeleteFolder(BundleManager.UpdateOutputPath + "/Scene");
    }

    public static void ExportBundleData(bool bNeedUpdate, BuildTarget target)
    {
        CleanAppBundleDir();
        m_curOutputPath = bNeedUpdate ? BundleManager.UpdateOutputPath : BundleManager.AppOutputPath;
        Utils.CheckTargetPath(m_curOutputPath);
        m_dicBundleLevel.Clear();
        m_bRecordLevel = true;

        ExportUIPrefab("/MLDJ/BundleData/UI/Prefab", target, m_curOutputPath);
        ExportEffect("/MLDJ/BundleData/Effect", m_curOutputPath, target);
        ExportModel("/MLDJ/BundleData/Model", m_curOutputPath, target);
        ExportSound("/MLDJ/BundleData/Sounds", m_curOutputPath, target);
        ExportAnimation("/MLDJ/BundleData/Animation", m_curOutputPath, target);
        ExportTableData(m_curOutputPath, target == BuildTarget.Android);
        ExportScene("/MLDJ/BundleData/Scene", m_curOutputPath, target);
        GenerateInfoData(bNeedUpdate);

        m_bRecordLevel = false;
    }


    public static void GenerateInfoData(bool bUpdate)
    {
        Debug.Log("is update " + bUpdate.ToString());
        Dictionary<string, UpdateHelper.FileInfo> dicGenerateFiles = new Dictionary<string, UpdateHelper.FileInfo>();
        List<int> levelList = new List<int>();
        string outputPath = bUpdate ? BundleManager.UpdateOutputPath : BundleManager.AppOutputPath;
        AddFileToInfo(outputPath, outputPath + "/UI", dicGenerateFiles);
        AddFileToInfo(outputPath, outputPath + "/Effect", dicGenerateFiles);
        AddFileToInfo(outputPath, outputPath + "/Model", dicGenerateFiles);
        AddFileToInfo(outputPath, outputPath + "/Sounds", dicGenerateFiles);
        AddFileToInfo(outputPath, outputPath + "/Animation", dicGenerateFiles);
        AddFileToInfo(outputPath, outputPath + "/Tables", dicGenerateFiles);
        AddFileToInfo(outputPath, outputPath + "/Scene", dicGenerateFiles);

        Dictionary<string, UpdateHelper.FileInfo> dicLocalFiles = new Dictionary<string, UpdateHelper.FileInfo>();

        foreach (string keys in dicGenerateFiles.Keys)
        {
            bool bAddToLocal = dicGenerateFiles[keys].level <= GameDefines.RESLEVEL_LOCAL;

            if (!levelList.Contains(dicGenerateFiles[keys].level))
            {
                levelList.Add(dicGenerateFiles[keys].level);
            }

            if (bAddToLocal && bUpdate)
            {
                dicLocalFiles.Add(keys, dicGenerateFiles[keys]);
                //Debug.Log("copy file " + BundleManager.AppOutputPath + "/" + keys);
                Utils.CheckTargetPath(BundleManager.AppOutputPath + "/" + keys);
                System.IO.File.Copy(BundleManager.UpdateOutputPath + "/" + keys, BundleManager.AppOutputPath + "/" + keys, true);
            }

        }

        string localXmlPath = BundleManager.LocalLoadPath + UpdateHelper.AppVersionFolder + "/" + UpdateHelper.ResFileListName;
        string remoteXmlPath = BundleManager.UpdateOutputPath + "/../" + UpdateHelper.ResFileListName;

        if (bUpdate)
        {

            Utils.GenerateResFileList(localXmlPath, dicLocalFiles);
            Utils.GenerateResFileList(remoteXmlPath, dicGenerateFiles);

            string strLevelIndex = "";
            bool bFirst = true;
            foreach (int curLevel in levelList)
            {
                if (bFirst)
                {
                    strLevelIndex += curLevel.ToString();
                    bFirst = false;
                }
                else
                {
                    strLevelIndex += "," + curLevel.ToString();
                }

            }

            Utils.WriteStringToFile(BundleManager.UpdateOutputPath + "/../" + UpdateHelper.ResLevelIndexFileName, strLevelIndex);
        }
        else
        {
            Utils.GenerateResFileList(localXmlPath, dicGenerateFiles);
        }



    }

    static void AddFileToInfo(string rootPath, string curPath, Dictionary<string, UpdateHelper.FileInfo> curDic)
    {
        if (!Directory.Exists(curPath))
        {
            return;
        }

        string[] strLocalFile = System.IO.Directory.GetFiles(curPath);
        foreach (string curFile in strLocalFile)
        {
            if (curFile.EndsWith(".txt") || curFile.EndsWith(".data"))
            {
                FileInfo curFileInfo = new FileInfo(curFile);
                long size = curFileInfo.Length;
                string md5 = Utils.GetMD5Hash(curFile);
                string relPath = curFile.Substring(rootPath.Length + 1).Replace('\\', '/');
                //Debug.Log("path " + relPath + "  size" + size.ToString() + "  md5" + md5);
                if (!m_dicBundleLevel.ContainsKey(relPath))
                {
                    //Debug.Log("generate no level res!");
                    curDic.Add(relPath, new UpdateHelper.FileInfo(md5, size, 0));
                }
                else
                {
                    curDic.Add(relPath, new UpdateHelper.FileInfo(md5, size, m_dicBundleLevel[relPath]));
                }

            }

            //System.IO.File.Copy(curFile, distPath + "/" + Path.GetFileName(curFile), true);
        }

        string[] strLocalPath = System.IO.Directory.GetDirectories(curPath);
        foreach (string curSubPath in strLocalPath)
        {
            AddFileToInfo(rootPath, curSubPath, curDic);
        }
    }
}
