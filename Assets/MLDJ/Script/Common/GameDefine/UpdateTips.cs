using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Module;

public class UpdateTips
{
    private static Dictionary<int, string> m_dicData = null;
    public static string GetTipByID(int id)
    {
        if(null == m_dicData)
        {
            m_dicData = InitData();
        }
        if(null == m_dicData)
        {
            return null;
        }

        if(m_dicData.ContainsKey(id))
        {
            return m_dicData[id];
        }

        return null;
    }

    public static string GetUpdateErrorTip(UpdateHelper.UpdateResult updateResult)
    {
        switch(updateResult)
        {

            case UpdateHelper.UpdateResult.GetVersionFail:             // 获取版本号失败
                {
                    // 请检查网络是否通畅
                    return GetTipByID(11);
                }
            case UpdateHelper.UpdateResult.GetFileListFail:            // 获取文件列表失败
                {
                    // 请检查网络是否通畅
                    return GetTipByID(11);
                }
            case UpdateHelper.UpdateResult.DownloadInComplete:         // 下载文件不完全
                {
                    // 文件错误，请重启游戏
                    return GetTipByID(12);
                }
            case UpdateHelper.UpdateResult.DownloadFail:               // 下载文件失败
                {
                    // 下载失败，请检查网络是否通畅
                    return GetTipByID(13);
                }
            case UpdateHelper.UpdateResult.CopyDataFileFail:           // 拷贝文件失败
                {
                    // 安装失败，请重启游戏
                    return GetTipByID(14);
                }
            case UpdateHelper.UpdateResult.GenerateVersionFileFail:    // 生成版本号文件失败
                {
                    // 版本号错误，请重启游戏
                    return GetTipByID(15);
                }
            case UpdateHelper.UpdateResult.GenerateFileListFail:       // 生成文件列表文件失败
                {
                    // 文件信息错误，请重启游戏
                    return GetTipByID(16);
                }
            case UpdateHelper.UpdateResult.CleanCacheFail:             // 清理缓存失败
                {
                    // 清理缓存错误，请重启游戏
                    return GetTipByID(17);
                }
            case UpdateHelper.UpdateResult.LoadRomoteFailListError:    // 读取下载的文件列表失败
                {
                    // 请检查网络是否通畅
                    return GetTipByID(11);
                }
            default:
                {
                    // 未知错误
                    return GetTipByID(18);
                }
        }
    }

    private static Dictionary<int, string> InitData()
    {
        Dictionary<int, string> curDic = new Dictionary<int,string>();

        TextAsset testAsset = Resources.Load("Tips/UpdateTips", typeof(TextAsset)) as TextAsset;
        if(null == testAsset)
        {
            Module.Log.LogModule.ErrorLog("update tip load error");
            return null;
        }
        string[]  alldataRow = testAsset.text.Split('\n');
        for(int i=0; i<alldataRow.Length; i++)
        {
            string[] curData = alldataRow[i].Split('\t');
            if(curData.Length != 2)
            {
                Module.Log.LogModule.ErrorLog("update tip error: row data format error");
                continue;
            }
            curDic.Add(i, curData[1]);
        }
        return curDic;
    }
}
