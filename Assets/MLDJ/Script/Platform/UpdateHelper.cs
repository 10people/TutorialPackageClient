using UnityEngine;
using System.Collections;
using Module.Log;
using System.IO;
using GCGame;
using System.Collections.Generic;
using System.Xml;
using System;

#if UNITY_WP8
using UnityPort;
using System.Text;
using System.Xml.Serialization;
using System;
#endif


public class UpdateHelper : MonoBehaviour
{

    public enum UpdateResult
    {
        NONE,
        Success,                    // 更新成功
        GetVersionFail,             // 获取版本号失败
        GetFileListFail,            // 获取文件列表失败
        DownloadInComplete,         // 下载文件不完全
        DownloadFail,               // 下载文件失败
        CopyDataFileFail,           // 拷贝文件失败
        GenerateVersionFileFail,    // 生成版本号文件失败
        GenerateFileListFail,       // 生成文件列表文件失败
        CleanCacheFail,             // 生成文件列表文件失败
        LoadRomoteFailListError,    // 读取下载的文件列表失败
    }

    public enum UpdateStep
    {
        NONE,
        CheckVersion,
        GetFileList,
        CompareRes,
        AskIsDonwload,               // 询问是否下载文件
        DownloadRes,
        CheckRes,
        CopyRes,
        CleanCache,
        FINISH,
    }

    // 检查资源版本结果
    public enum CheckVersionResult
    {
        NONEEDUPDATE,       // 不需要更新
        NEEDUPDATE,         // 需要更新
        ERROR,              // 检查失败
    }

    public class FileInfo
    {
        public FileInfo(string _md5, long _size, int _level)
        {
            md5 = _md5;
            size = _size;
            level = _level;
        }

        public FileInfo()
        {

        }

		public void CopyData(FileInfo otherData)
		{
			md5 = otherData.md5;
			size = otherData.size;
			level = otherData.level;
		}
        public string md5;
        public long size;
        public int level;
    }

    public UpdateStep CurUpdateStep { get { return m_curUpdateStep; } }
    public UpdateResult CurUpdateResult { get { return m_curUpdateResult; } }
    public long DownloadTotalSize { get {return m_totalNeedDownloadSize;} }
    public long CurDownloadSize {get{return (null != m_dataFileDownloader) ? m_dataFileDownloader.AlreadyDownloadSize : 0;}}



    public static string ResCachePath = Application.temporaryCachePath + "/tlbbres";

    public static string AppVersionFolder = "/VersionData";        // APP自带版本资源路径 
    public static string LocalVersionPath = Application.persistentDataPath + "/VersionData";       // 本地保存的版本资源路径
    public static string CacheVersionPath = ResCachePath + "/VersionData";                // 下载的远程版本资源路径
    public static string DownloadDataFolder = "StreamingAssets";

    public static string VersionFileName = "ResVersion.txt";
    public static string ResFileListName = "update.info";
	public static string ResLevelIndexFileName = "ResLevelIndex.info";
	public static string LocalResLevelFileName = "LocalResLevel.info";

    private static string LocalPathRoot = BundleManager.LocalPathRoot;
    delegate void DelegateGetResVersion(bool bSuccess);
	delegate void DelegateDownFileList(bool bSuccess);
    public delegate void DelegateCheckResVersion(CheckVersionResult result);
	private static string m_resServerUrl = "http://127.0.0.1:8080/tlbb/res/";
	private string m_cacheDataPath = ResCachePath + "/"+ DownloadDataFolder;
	private string m_remoteDataPath;
    private int m_localVersion = -1;
	private int m_remoteVersion = -1;
	private string m_remoteResLevelIndex = "";
	private int m_playerNeedResLevel = 0;
	private int m_localResLevel = 0;
	private int m_downloadResLevel = 0;
		
	private Dictionary<string, FileInfo> m_dicLocalFiles = new Dictionary<string, FileInfo>();
    private Dictionary<string, FileInfo> m_dicRemoteFiles = new Dictionary<string, FileInfo>();

    private List<string> m_listUpdateFiles = new List<string>();
    private List<string> m_listUpdateErrorFiles = new List<string>();
    private List<string> m_listDownloadFiles = new List<string>();
    private List<string> m_listDownloadFileUrls = new List<string>();

    private DownloadHelper m_versionFileDownloader = null;
    private DownloadHelper m_dataFileDownloader = null;

    private UpdateStep m_curUpdateStep = UpdateStep.NONE;
    private UpdateResult m_curUpdateResult = UpdateResult.NONE;
    private long m_totalNeedDownloadSize = 0;

    // 检查版本号，不参与资源更新，不使用成员变量
    public static IEnumerator CheckResVersion(DelegateCheckResVersion delFun, MonoBehaviour parent)
    {
        int localVersion = -1;
        int appVersion = -1;
        int remoteVersion = -1;
        string localVersionFilePath = LocalVersionPath + "/" + VersionFileName;
        string AppVersionFilePath = GetAppDataUrl(AppVersionFolder, VersionFileName);

        // 读取本地版本号文件
        if (File.Exists(localVersionFilePath))
        {
            LogModule.DebugLog("read local version:" + localVersionFilePath.ToString());
            if (!Utils.GetFileInt(localVersionFilePath, out localVersion))
            {
                LogModule.ErrorLog("parse version error");
            }
        }

        // 读取包体
        WWW wwwAppVersionFile = new WWW(AppVersionFilePath);
        yield return wwwAppVersionFile;
        if (!string.IsNullOrEmpty(wwwAppVersionFile.error))
        {
            LogModule.DebugLog("read app version:" + AppVersionFilePath.ToString() + " error:" + wwwAppVersionFile.error);
        }
        else
        {
            if (!int.TryParse(wwwAppVersionFile.text, out appVersion))
            {
                LogModule.ErrorLog("parse app path version error");
            }
        }

        if (appVersion > localVersion)
        {
            localVersion = appVersion;
        }

        // 读取远程版本号文件
        LogModule.DebugLog("ger version form " + m_resServerUrl + "/" + VersionFileName);

        // 获取远程版本号，重试3次
        int retryTime = 3;
        WWW wwwVersionFile = null;
        while (retryTime > 0)
        {
            wwwVersionFile = null;
            yield return parent.StartCoroutine(DownloadHelper.GetCDNWWW(m_resServerUrl + "/" + VersionFileName, value => wwwVersionFile = value));
            if (!string.IsNullOrEmpty(wwwVersionFile.error))
            {
                LogModule.ErrorLog(wwwVersionFile.error);
            }
            else
            {
                break;
            }
            retryTime--;
        }

		if (retryTime > 0 && null != wwwVersionFile)
        {
			// 获取成功
            if (!int.TryParse(wwwVersionFile.text, out remoteVersion))
            {
                // 解析失败
                delFun(CheckVersionResult.ERROR);
            }
            else
            {
                if (remoteVersion > localVersion)
                {
                    delFun(CheckVersionResult.NEEDUPDATE);
                }
                else
                {
                    delFun(CheckVersionResult.NONEEDUPDATE);
                }
            }
        }

    }

    public void StartCheckRes(string resServerUrl, int playerLevel = 0)
    {
        m_remoteVersion = -1;
        if (null != m_versionFileDownloader)
        {
            m_versionFileDownloader.Stop();
        }

        if (null != m_dataFileDownloader)
        {
            m_dataFileDownloader.Stop();
        }

		if(!Utils.GetFileInt(LocalVersionPath + "/" + LocalResLevelFileName, out m_localResLevel))
		{
			m_localResLevel = GameDefines.RESLEVEL_LOCAL;
		}

		m_playerNeedResLevel = playerLevel;

		if(m_playerNeedResLevel < m_localResLevel)
		{
			m_playerNeedResLevel = m_localResLevel;
		}

		m_downloadResLevel = 0;
		m_resServerUrl = resServerUrl;
		m_remoteDataPath = m_resServerUrl + "/" + DownloadDataFolder;;
		m_remoteVersion = -1;
		m_versionFileDownloader = null;
        m_dataFileDownloader = null;
        m_totalNeedDownloadSize = 0;
        m_curUpdateStep = UpdateStep.CheckVersion;
        StartCoroutine(GetResVersion(OnCheckVersion));
    }

    public void DownloadCurFileList()
    {
        m_curUpdateStep = UpdateStep.DownloadRes;
        LogModule.DebugLog("have diff files");
        m_dataFileDownloader = DownloadHelper.StartDownload(this, m_listDownloadFileUrls, true, m_listDownloadFiles, OnDownloadRes);
    }
    // 获取版本号
    IEnumerator GetResVersion(DelegateGetResVersion delFun)
    {
        // 读取本地版本号文件
        m_localVersion = -1;
		int appVersion = -1;
		string localVersionFilePath = LocalVersionPath + "/" + VersionFileName;// 本地下载的版本号文件 android在data/包名下	ios在Document/
        string AppVersionFilePath = GetAppDataUrl(AppVersionFolder, VersionFileName);//包体里的版本号文件
        if (File.Exists(localVersionFilePath))
        {
            LogModule.DebugLog("read local version:" + localVersionFilePath.ToString());
            if (!Utils.GetFileInt(localVersionFilePath, out m_localVersion))
            {
                LogModule.ErrorLog("parse version error");
            }
        }
        
		WWW wwwAppVersionFile = new WWW(AppVersionFilePath);
		yield return wwwAppVersionFile;
		if (!string.IsNullOrEmpty(wwwAppVersionFile.error))
		{
            LogModule.DebugLog("read app version:" + AppVersionFilePath.ToString() + " error:" + wwwAppVersionFile.error);
		}
		else
		{
			if (!int.TryParse(wwwAppVersionFile.text, out appVersion))
			{
				LogModule.ErrorLog("parse app path version error");
			}
		}
		
		if(appVersion > m_localVersion) //包体版本号大于本地下载，如新包覆盖安装，则清除本地下载记录
		{
			// clean read path
			LogModule.DebugLog("app version is bigger than local, clean local path");
			Utils.DeleteFolder(LocalVersionPath);
			Utils.DeleteFolder(BundleManager.LocalPathRoot);
			m_localVersion = appVersion;
		}

        // 读取远程版本号文件
		LogModule.DebugLog("ger version form " + m_resServerUrl + "/" + VersionFileName);
		WWW wwwVersionFile = null;
        yield return StartCoroutine(DownloadHelper.GetCDNWWW(m_resServerUrl + "/" + VersionFileName, value => wwwVersionFile = value));
        if (!string.IsNullOrEmpty(wwwVersionFile.error))
        {
            LogModule.ErrorLog(wwwVersionFile.error);
            delFun(false);
        }
        else
        {
            if (!int.TryParse(wwwVersionFile.text, out m_remoteVersion))
            {
                delFun(false);
            }
            else
            {
				LogModule.DebugLog("get version form " + m_resServerUrl + "/" + ResLevelIndexFileName);
				WWW wwwResLevelIndexFile = null;
                yield return StartCoroutine(DownloadHelper.GetCDNWWW(m_resServerUrl + "/" + ResLevelIndexFileName, value => wwwResLevelIndexFile=value));
				if (!string.IsNullOrEmpty(wwwResLevelIndexFile.error))
				{
					LogModule.ErrorLog(wwwResLevelIndexFile.error);
					delFun(false);
				}
				else
				{
					delFun(true);
				}
			}
		}
	}

    // 获取版本号回调
    void OnCheckVersion(bool bSuccess)
	{
		if(bSuccess)
		{
            LogModule.DebugLog("comparing version");

			// 比较版本号
            LogModule.DebugLog("version --local:" + m_localVersion.ToString() + " --remote:" + m_remoteVersion);
			if (m_remoteVersion > m_localVersion)
            {
                Utils.DeleteFolder(CacheVersionPath);
                LogModule.DebugLog("remote version is big than local, begin update");

                m_curUpdateStep = UpdateStep.GetFileList;

                // 下载文件列表
				m_versionFileDownloader = DownloadHelper.StartDownload(this, m_resServerUrl + "/" + ResFileListName, true, CacheVersionPath + "/" + ResFileListName, OnDownloadRemoteResFileList);
            }
			else
			{
				StartCoroutine(OnDownloadlevelIndexFile());
			}
		}
		else
		{
			// error 严重错误，可能网络不通，需要重新请求
            LogModule.ErrorLog("check verion fail");
            UpdateFinish(UpdateResult.GetVersionFail);
		}
	}

	IEnumerator OnDownloadlevelIndexFile()
	{
		LogModule.DebugLog("ger version form " + m_resServerUrl + "/" + ResLevelIndexFileName);
		WWW wwwResLevelFile = null;
        yield return StartCoroutine(DownloadHelper.GetCDNWWW(m_resServerUrl + "/" + ResLevelIndexFileName, value => wwwResLevelFile = value));
		if (!string.IsNullOrEmpty(wwwResLevelFile.error))
		{
			LogModule.ErrorLog(wwwResLevelFile.error);
			UpdateFinish(UpdateResult.GetVersionFail);
			yield break;
		}

		m_remoteResLevelIndex = wwwResLevelFile.text;

		// check level
		string[] strLevels = m_remoteResLevelIndex.Split(',');
		if(strLevels.Length > 0)
		{
			int curLevel = 0;

            LogModule.DebugLog("level index string:" + m_remoteResLevelIndex);
			
			for(int i=0; i<strLevels.Length; i++)
			{
				if(int.TryParse(strLevels[i], out curLevel))
				{
                    LogModule.DebugLog("level index:" + curLevel.ToString());
					if(m_localResLevel < curLevel && m_playerNeedResLevel >= curLevel)
					{
						// need update
						LogModule.DebugLog("remote verion level is big than local, begin update");
						
						m_curUpdateStep = UpdateStep.GetFileList;
						
						// 下载文件列表
                        m_versionFileDownloader = DownloadHelper.StartDownload(this, m_resServerUrl + "/" + ResFileListName, true, CacheVersionPath + "/" + ResFileListName, OnDownloadRemoteResFileList);
						yield break;
					}
				}
				else
				{
					LogModule.ErrorLog("parse level index file error " + strLevels[i]);
				}
			}
		}
		
		UpdateFinish(UpdateResult.Success);
	}

    // 下载远程文件列表回调
    void OnDownloadRemoteResFileList(bool bSuccess)
	{
		if(bSuccess)
		{
            m_curUpdateStep = UpdateStep.CompareRes;

            // 远程文件列表请求成功，开始查找需要下载的资源
            LogModule.DebugLog("load file success: " + CacheVersionPath + "/" + ResFileListName);
            string localFileListName = LocalVersionPath + "/" + ResFileListName;

            LogModule.DebugLog(localFileListName);
            // 如果读取目录没有文件，将包体文件拷贝出
            if (!File.Exists(localFileListName))
			{
                m_versionFileDownloader = DownloadHelper.StartDownload(this, GetAppDataUrl(AppVersionFolder, ResFileListName), false, localFileListName, OnDownloadLocalResFileList);
			}
            else
            {
                OnDownloadLocalResFileList(true);
            }
            
        }
        else
		{
			// 下载远程文件列表失败，应该重新请求
            UpdateFinish(UpdateResult.GetFileListFail);
		}
	}

    // 下载本地本件列表回调
    void OnDownloadLocalResFileList(bool bSuccess)
    {
        if (!bSuccess)
        {
            LogModule.DebugLog("get local res file list fail");
        }

        string localFileListName = LocalVersionPath + "/" + ResFileListName;
        string cacheFileListName = CacheVersionPath + "/" + ResFileListName;

        m_dicLocalFiles.Clear();
        m_dicRemoteFiles.Clear();
        m_listUpdateFiles.Clear();

        // 将资源列表中所有的文件存入dic

        // 本地文件读取失败不处理，当做空
        ReadVersionFileToDic(localFileListName, m_dicLocalFiles);

        // 远程文件读取失败，需要重新下载
        if (!ReadVersionFileToDic(cacheFileListName, m_dicRemoteFiles))
        {
            UpdateFinish(UpdateResult.LoadRomoteFailListError);
            // 严重错误，可能网络不通，需要重新请求
            // 退出重新下载逻辑
            return;
        }

        // 对比文件列表，找出本地没有的资源
        foreach (KeyValuePair<string, FileInfo> curPair in m_dicRemoteFiles)
        {
            // 如果远程列表包含，本地列表不包含，则放入更新文件列表
            if (m_dicLocalFiles.ContainsKey(curPair.Key))
            {
                if (m_dicLocalFiles[curPair.Key].md5 != curPair.Value.md5)
                {
                    m_listUpdateFiles.Add(curPair.Key);
                }
            }
            else if (curPair.Value.level <= m_playerNeedResLevel)
            {
                if (curPair.Value.level > m_downloadResLevel)
                {
                    m_downloadResLevel = curPair.Value.level;
                }
                m_listUpdateFiles.Add(curPair.Key);
            }
        }

        if (m_listUpdateFiles.Count > 0)
        {
            // 下载更新文件
            m_listDownloadFileUrls.Clear();
            m_listDownloadFiles.Clear();
            m_totalNeedDownloadSize = 0;
            foreach (string curFile in m_listUpdateFiles)
            {
                // 检查缓存中是否已经有下载好的资源，如果有缓存文件，并且MD5值正确，则跳过
                string localFilePath = m_cacheDataPath + "/" + curFile;
                if (!File.Exists(localFilePath) || Utils.GetMD5Hash(localFilePath).ToLower() != m_dicRemoteFiles[curFile].md5.ToLower())
                {
                    m_listDownloadFileUrls.Add(m_remoteDataPath + "/" + curFile);
                    m_listDownloadFiles.Add(localFilePath);
                    m_totalNeedDownloadSize += m_dicRemoteFiles[curFile].size;
                }
            }

            // 如果下载列表大于0 开始下载
            if (m_listDownloadFiles.Count > 0)
            {
                m_curUpdateStep = UpdateStep.AskIsDonwload;
                return;
            }
        }
        // 没有需要下载的文件，开始拷贝
        OnDownloadRes(true);
    }

    // 下载资源回调
    void OnDownloadRes(bool bSuccess)
    {
        if (bSuccess)
        {
            LogModule.DebugLog("check res md5");
            m_curUpdateStep = UpdateStep.CheckRes;
            // 下载所有文件成功，开始检查文件，将MD5错误或未下载文件放入错误文件列表
            m_listUpdateErrorFiles.Clear();
            foreach (string updateFileName in m_listUpdateFiles)
            {
                string curFilePath = m_cacheDataPath + "/" + updateFileName;
                if (!File.Exists(curFilePath))
                {
                    LogModule.ErrorLog("download file fail " + updateFileName);
                    m_listUpdateErrorFiles.Add(updateFileName);
                }
                else
                {
                    string curFileMD5 = Utils.GetMD5Hash(curFilePath);
                    if (!m_dicRemoteFiles.ContainsKey(updateFileName) || curFileMD5.ToLower() != m_dicRemoteFiles[updateFileName].md5.ToLower())
                    {
                        LogModule.ErrorLog("download file md5 error : romote:" + m_dicRemoteFiles[updateFileName].md5 + " local :" + curFileMD5);
                        m_listUpdateErrorFiles.Add(updateFileName);
                    }
					else
					{
						if(m_dicLocalFiles.ContainsKey(updateFileName))
						{
                            m_dicLocalFiles[updateFileName].CopyData(m_dicRemoteFiles[updateFileName]);
						}
						else
						{
							m_dicLocalFiles.Add(updateFileName, m_dicRemoteFiles[updateFileName]);
						}
					}
                }
            }

            if (m_listUpdateErrorFiles.Count == 0)
            {
                // 没有错误文件，开始拷贝过程
                LogModule.DebugLog("check res success");
                CopyResToDataPath();
            }
            else
            {
                // 有文件发生错误，应该重新比对下载
                LogModule.ErrorLog("check res fail");
                UpdateFinish(UpdateResult.DownloadInComplete);
            }
        }
        else
        {
            // 下载资源失败，应该重新比对下载
            LogModule.ErrorLog("download res  error");
            UpdateFinish(UpdateResult.DownloadFail);
        }
    }

    // 拷贝资源
    void CopyResToDataPath()
    {
        try
        {
            LogModule.DebugLog("copy res");
            m_curUpdateStep = UpdateStep.CopyRes;
            foreach (string updateFileName in m_listUpdateFiles)
            {
                string localFilePath = LocalPathRoot + "/" + updateFileName;
                Utils.CheckTargetPath(localFilePath);
                File.Copy(m_cacheDataPath + "/" + updateFileName, localFilePath, true);
            }
        }
        catch (System.Exception ex)
        {
            // 拷贝文件失败，这该咋办
            LogModule.ErrorLog("copy res error!" + ex.ToString());
            UpdateFinish(UpdateResult.CopyDataFileFail);
            return;
        }

		GenerateLocalFileList();
    }

    // 拷贝文件列表
    void GenerateLocalFileList()
    {
        try
        {
            LogModule.DebugLog("copy filelist");
            string localFileListName = LocalVersionPath + "/" + ResFileListName;
            //string cacheFileListName = CacheVersionPath + "/" + ResFileListName;

			if(!Utils.GenerateResFileList(localFileListName, m_dicLocalFiles))
			{
				LogModule.ErrorLog("generate version file fail!");
				UpdateFinish(UpdateResult.GenerateVersionFileFail);
			}

            //Utils.CheckTargetPath(localFileListName);
            //File.Copy(cacheFileListName, localFileListName, true);
        }
        catch (System.Exception ex)
        {
            LogModule.ErrorLog("generate version file fail!" + ex.ToString());
            UpdateFinish(UpdateResult.GenerateFileListFail);
            return;
        }

		GenerateResLevelFile();
    }

	void GenerateResLevelFile()
	{
		string localResLevelFilePath = LocalVersionPath + "/" + LocalResLevelFileName;
		LogModule.DebugLog("GenerateResLevelFile :"+ localResLevelFilePath);
		if(!Utils.WriteStringToFile(LocalVersionPath + "/" + LocalResLevelFileName, m_downloadResLevel.ToString()))
		{
			LogModule.ErrorLog("generate local res level file fail!!!!!");
		}

		CopyVersionFile();
	}

    // 生成版本文件
    void CopyVersionFile()
    {
        try
        {
            LogModule.DebugLog("copy version file");
            string localVersionFilePath = LocalVersionPath + "/" + VersionFileName;
		
            Utils.CheckTargetPath(localVersionFilePath);
            FileStream fs = new FileStream(localVersionFilePath, FileMode.OpenOrCreate, FileAccess.ReadWrite, FileShare.ReadWrite);
            StreamWriter sw = new StreamWriter(fs);
            sw.WriteLine(m_remoteVersion.ToString());
            sw.Close();
            fs.Close();
            
        }
        catch (System.Exception ex)
        {
            LogModule.ErrorLog("generate version file fail!" + ex.ToString());
            UpdateFinish(UpdateResult.GenerateVersionFileFail);
            return;
        }

        CleanCacheFiles();
    }

    // 清理缓存
    void CleanCacheFiles()
    {
        LogModule.DebugLog("clean cache");
        m_curUpdateStep = UpdateStep.CleanCache;
        try
        {
            Utils.DeleteFolder(m_cacheDataPath);
            Utils.DeleteFolder(CacheVersionPath);
        }
        catch (System.Exception ex)
        {
            LogModule.ErrorLog("clean cache fail!" + ex.ToString());
            UpdateFinish(UpdateResult.CleanCacheFail);
            return;
        }

        m_curUpdateStep = UpdateStep.FINISH;
        UpdateFinish(UpdateResult.Success);
    }

    public static bool ReadVersionFileToDic(string versionPath, Dictionary<string, FileInfo> curDic)
	{
        try
        {
            if (!File.Exists(versionPath))
            {
                return false; ;
            }

#if UNITY_WP8
            Utils.FileList fileInfoList = XmlHelper.XmlDeserializeFromFile<Utils.FileList>(versionPath, new UTF8Encoding(false));
            if (null == fileInfoList)
            {
                return false;
            }

            foreach (Utils.FileInformation info in fileInfoList.list)
            {
                FileInfo curFileInfo = new FileInfo();
                curFileInfo.md5 = info.md5;
                long.TryParse(info.size, out curFileInfo.size);

                if (null != info.path)
                {
                    curDic.Add(info.path, curFileInfo);
                }
            }
#else
            XmlDocument xml = new XmlDocument();

            xml.Load(versionPath);
            XmlNode fileListNode = null;
            foreach (XmlNode elem in xml.ChildNodes)
            {
                LogModule.DebugLog(elem.Name);
                if (elem.Name == "FileList")
                {
                    fileListNode = elem;
                    break;
                }
            }

            if (null == fileListNode)
            {
                return false;
            }

            foreach (XmlNode elemPath in fileListNode.ChildNodes)
            {
                FileInfo curFileInfo = new FileInfo();
                string curPath = null;
                foreach (XmlNode fileInfo in elemPath.ChildNodes)
                {
                    if (fileInfo.Name == "md5")
                    {
                        curFileInfo.md5 = fileInfo.InnerText;
                    }
                    else if (fileInfo.Name == "size")
                    {
                        long.TryParse(fileInfo.InnerText, out curFileInfo.size);
                    }
                    else if (fileInfo.Name == "path")
                    {
                        curPath = fileInfo.InnerText;
                    }
                }
                if (null != curPath)
                {
                    curDic.Add(curPath, curFileInfo);
                }
                
            }
#endif
            return true;
        }
        catch (System.Exception e)
        {
            LogModule.ErrorLog("read version file error :" + versionPath + " e: " + e.ToString());
            return false;
        }
    }

    void UpdateFinish(UpdateResult result)
    {
        m_curUpdateStep = UpdateStep.FINISH;
        m_curUpdateResult = result;
    }

    public static string GetAppDataUrl(string subFolder, string localName)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        return Application.streamingAssetsPath + subFolder + "/" + localName;
#endif

        return string.Format("{0}{1}", BundleManager.m_loadUrlHead, Application.streamingAssetsPath + subFolder + "/" + localName);
    }

    public static void CheckUpdateInfoFile(string sSrcUpdateInfoFile, string sDestUpdteInfoFile, string sCompareResult)
    {
        if (string.IsNullOrEmpty(sSrcUpdateInfoFile) || !File.Exists(sSrcUpdateInfoFile))
        {
            Debug.Log("src update info file don't exist, path is: " + sSrcUpdateInfoFile);
            return;
        }
        if (string.IsNullOrEmpty(sDestUpdteInfoFile) || !File.Exists(sDestUpdteInfoFile))
        {
            Debug.Log("dest update info file don't exist, path is: " + sSrcUpdateInfoFile);
            return;
        }

        Dictionary<string, FileInfo> srcFilesDictionary = new Dictionary<string, FileInfo>();
        Dictionary<string, FileInfo> destFilesDictionary = new Dictionary<string, FileInfo>();
        if (!UpdateHelper.ReadVersionFileToDic(sSrcUpdateInfoFile, srcFilesDictionary))
        {
            Debug.Log("read src info file to dictionary failed");
            return;
        }
        if (!UpdateHelper.ReadVersionFileToDic(sDestUpdteInfoFile, destFilesDictionary))
        {
            Debug.Log("read dest info file to dictionary failed");
            return;
        }

        if (File.Exists(sCompareResult))
        {
            File.Delete(sCompareResult);
        }

        FileStream myFs = new FileStream(sCompareResult, FileMode.Create);
        StreamWriter mySw = new StreamWriter(myFs);

        // 对比文件列表，找出与源版本不同的资源
        foreach (KeyValuePair<string, FileInfo> currPair in destFilesDictionary)
        {
            if (srcFilesDictionary.ContainsKey(currPair.Key))
            {
                if (!currPair.Value.md5.Equals(srcFilesDictionary[currPair.Key].md5, StringComparison.OrdinalIgnoreCase))
                {
                    string sLine = "Modify Path:" + currPair.Key + ", src md5:" + srcFilesDictionary[currPair.Key].md5 + ", dest md5:" + currPair.Value.md5;
                    mySw.WriteLine(sLine);
                }
            }
            else
            {
                string sLine = "Add Path:" + currPair.Key + ", dest md5:" + currPair.Value.md5;
                mySw.WriteLine(sLine);
            }
        }

        srcFilesDictionary.Clear();
        destFilesDictionary.Clear();
        mySw.Close();
        myFs.Close();
    }

}
