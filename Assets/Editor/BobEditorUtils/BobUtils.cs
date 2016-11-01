using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;
using System.Collections.Generic;

public class BobUtils
{

    /// <summary>
    /// 显示进度条
    /// </summary>
    /// <param name="currentProc"></param>
    /// <param name="fullProc"></param>
    /// <param name="title"></param>
    /// <param name="info"></param>
    public static void DisplayProgressBar(float currentProc, float fullProc, string title, string info)
    {
        float percent = currentProc / fullProc;
        EditorUtility.DisplayProgressBar(title + percent.ToString(" 0.00%").ToString(), info, percent);
    }
    public static void ClearProgressBar()
    {
        EditorUtility.ClearProgressBar();
    }
    /// <summary>
    /// 获取相对Project文件夹的路径，即以Assets开始的路径
    /// </summary>
    /// <param name="fullname"></param>
    /// <returns></returns>
    public static string GetRelativePath(string fullname)
    {
        int mAssetPathStartIndex = Application.dataPath.IndexOf("Assets");
        fullname.Replace('\\', '/');
        fullname = fullname.Remove(0, mAssetPathStartIndex);
        return fullname;
    }
    /// <summary>
    /// 获取选中资源的全路径
    /// </summary>
    /// <returns></returns>
    public static string GetSelectedFolderPath()
    {
        if (Selection.objects.Length <= 0)
        {
            ShowErrorMessage("请选中一个资源");
            return null;
        }
        string projectDir = Application.dataPath;
        projectDir = projectDir.Substring(0, projectDir.IndexOf("Assets"));
        return projectDir + AssetDatabase.GetAssetPath(Selection.objects[0]);
    }

    /// <summary>
    /// 给定一个文件路径，获取依赖文件路径
    /// </summary>
    /// <param name="filepath"></param>
    /// <returns></returns>
    public static List<string> CollectDependencies(string filepath)
    {
        List<string> dependencyPaths = new List<string>();

        Object[] dependencies = EditorUtility.CollectDependencies(new Object[] { AssetDatabase.LoadAssetAtPath(filepath, typeof(Object)) });
        for (int i = 0; i < dependencies.Length; i++)
        {
            string dependpath = AssetDatabase.GetAssetPath(dependencies[i]);
            if (dependpath == filepath)
            {
                continue;
            }
            dependencyPaths.Add(dependpath);
        }
        return dependencyPaths;
    }
    public static void ShowErrorMessage(string notice)
    {
        EditorUtility.DisplayDialog("Error", notice, "好的");
    }
    public static bool IsDirectory(string dir)
    {
        FileAttributes attr = File.GetAttributes(dir);
        return (attr & FileAttributes.Directory) == FileAttributes.Directory;
    }
    public static bool ispowerofTwo(int a)
    {
        if (a == 0)
        {
            return true;
        }
        if (a < 0)
        {
            a = -a;
        }

        return (a & (a - 1)) == 0;
    }

    /// <summary>
    /// 将srcPath文件夹下的内容拷贝到dstPath中
    /// </summary>
    /// <param name="srcPath"></param>
    /// <param name="dstPath"></param>
    public static void CopyFilrOrDirectoryFromTo(string srcPath, string dstPath)
    {
        string[] files = Directory.GetFiles(srcPath);
        string[] dirs = Directory.GetDirectories(srcPath);

        for (int i = 0; i < files.Length; i++)
        {
            string filename = Path.GetFileName(files[i]);
            FileUtil.DeleteFileOrDirectory(dstPath + "/" + filename);
            FileUtil.CopyFileOrDirectory(srcPath + "/" + filename, dstPath + "/" + filename);
        }
        for (int i = 0; i < dirs.Length; i++)
        {
            DirectoryInfo dirInfo = new DirectoryInfo(dirs[i]);
            FileUtil.DeleteFileOrDirectory(dstPath + "/" + dirInfo.Name);
            FileUtil.CopyFileOrDirectory(srcPath + "/" + dirInfo.Name, dstPath + "/" + dirInfo.Name);
        }
    }

}
