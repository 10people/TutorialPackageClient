/********************************************************************************
 *	文件名：	LogModule.cs
 *	全路径：	\Script\GlobeDefine\LogModule.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-25
 *
 *	功能说明：日志模块
 *	修改记录：添加文件存储日志，by weitong 2016-04-19
*********************************************************************************/
using System;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;

namespace Module.Log
{
   
	class LogModule
	{
        /*
        const string ERRORLOG = "./error_{0}.log";
        const string DEBUGLOG = "./debug_{0}.log";
        const string WARNINGLOG = "./warning_{0}.log";
        */
        enum LOG_TYPE
        {
            DEGUG_LOG =0,
            WARNING_LOG,
            ERROR_LOG
        }
		
		public delegate void OnOutputLog(string _msg); 
		static public OnOutputLog onOutputLog = null;

        private static StreamWriter m_fileStream;

        static void InitLogFile()
        {
            string path = Application.persistentDataPath + "/log/";

            if (!Directory.Exists(path))
            {
                Directory.CreateDirectory(path);
            }

            m_fileStream = new StreamWriter(string.Format(path + "Game_{0}.log", DateTime.Now.ToString("yyyy-MM-dd-hhmmss")));
        }

        private static void WriteLog (string msg ,LOG_TYPE type, bool _showInConsole = false)
        {
            try
            {
                if (m_fileStream == null)
                {
                    InitLogFile();
                }

                switch (type)
                {
                    case LOG_TYPE.DEGUG_LOG:
#if UNITY_EDITOR
                        Debug.Log(msg);
#endif
                        break;
                    case LOG_TYPE.ERROR_LOG:
                        Debug.LogError(msg);
                        break;
                    case LOG_TYPE.WARNING_LOG:
                        Debug.LogWarning(msg);
                        break;
                }

                m_fileStream.WriteLine(msg);
                m_fileStream.Flush();
            }
            catch (Exception e)
            {
                UnityEngine.Debug.LogError("[Log] Exception occurred: " + e.GetType().Name + ", Message: " + e.Message);
            }
        }

		public static void ErrorLog(string fort,params object[] areges)
		{
            if (!PlatformHelper.IsEnableDebugMode()) return;
			if (areges.Length>0)
			{
				string msg = string.Format(fort, areges);
				WriteLog(msg, LOG_TYPE.ERROR_LOG, true);
			}
			else
			{
				WriteLog(fort, LOG_TYPE.ERROR_LOG, true);
			}
			
		}
		public static void WarningLog(string fort, params object[] areges)
		{
            if (!PlatformHelper.IsEnableDebugMode()) return;
			if (areges.Length > 0)
			{
				string msg = string.Format(fort, areges);
				WriteLog(msg, LOG_TYPE.WARNING_LOG, true);
			}
			else
			{
				WriteLog(fort, LOG_TYPE.WARNING_LOG, true);
			}
		}
		public static void DebugLog(string fort, params object[] areges)
		{
            if (!PlatformHelper.IsEnableDebugMode()) return;
			if (areges.Length > 0)
			{
				string msg = string.Format(fort, areges);
				WriteLog(msg, LOG_TYPE.DEGUG_LOG, true);
			}
			else
			{
				WriteLog(fort, LOG_TYPE.DEGUG_LOG, true);
			}
		}
		
		private static void ErrorLog(string msg)
		{
			WriteLog(msg, LOG_TYPE.ERROR_LOG);
		}
		
		private static void WarningLog(string msg)
		{
			WriteLog(msg, LOG_TYPE.WARNING_LOG);
		}
		
		public static void DebugLog(string msg)
		{
            if (!PlatformHelper.IsEnableDebugMode()) return;
			WriteLog(msg, LOG_TYPE.DEGUG_LOG);
		}
		
      	public static void Log(string logString, string stackTrace, LogType type)
		{
            if (!PlatformHelper.IsEnableDebugMode()) return;
			switch (type)
			{
			case LogType.Log:
				LogModule.DebugLog(logString);
				break;
			case LogType.Warning:
				LogModule.WarningLog(logString);
				break;
			case LogType.Error:
				LogModule.ErrorLog(logString);
				break;
			}
		}

        /// <summary>
        /// 这个函数轻易不要用，只在打印一些调试日志时用，效率较低
        /// </summary>
        /// <returns></returns>
        public static string ByteToString(byte[] byteData, int nStartIndex, int nCount)
        {
            if (!PlatformHelper.IsEnableDebugMode()) return "";

            string strResult = "";
            if (nStartIndex < 0 || nStartIndex >= byteData.Length)
            {
                return strResult;
            }

            for (int i = nStartIndex; i < nCount && i < byteData.Length; i++)
            {
                strResult += Convert.ToString(byteData[i]);
            }
            return strResult;
        }
        
	}
}
