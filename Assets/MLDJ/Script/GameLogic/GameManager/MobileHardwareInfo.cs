/********************************************************************************
 *	功能说明：硬件信息； 机型性能等级划分
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

/// <summary>
/// 硬件信息； 机型性能等级划分
/// </summary>
public class MobileHardwareInfo
{
    private int m_IOSMemorySize = 1024;
    private int m_AndroidLowMemorySize = 768;
    private int m_AndroidMiddleMemorySize = 1536;

    private Games.GlobeDefine.GameDefine_Globe.HardwardLevel m_HardwareLevel;
    /// <summary>
    /// 硬件级别
    /// </summary>
    public Games.GlobeDefine.GameDefine_Globe.HardwardLevel HardwareLevel
    {
        get { return m_HardwareLevel; }
    }


    private static MobileHardwareInfo m_Instance;
    public static MobileHardwareInfo Instance {
        get
        {
            if (m_Instance == null)
            {
                m_Instance = new MobileHardwareInfo();
            }

            return m_Instance;
        }
    }

    public MobileHardwareInfo()
    {
        SetHardwareLevel();
    }

    /// <summary>
    /// 设置硬件级别
    /// </summary>
    private void SetHardwareLevel()
    {
#if UNITY_EDITOR
        m_HardwareLevel = Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH;
#elif UNITY_IPHONE
        SetIOSHardwareLevel();
#elif UNITY_ANDROID
        SetAndroidHardwareLevel();
#endif
    }
    

    private void SetIOSHardwareLevel()
    {
        m_HardwareLevel = Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH;
        if (SystemInfo.systemMemorySize <= m_IOSMemorySize)
        {
            m_HardwareLevel = Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_LOW;
        }
    }

    private void SetAndroidHardwareLevel()
    {
        m_HardwareLevel = Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH;
        if (SystemInfo.systemMemorySize <= m_AndroidLowMemorySize || SystemInfo.processorCount <= 2)
        {
            m_HardwareLevel = Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_LOW;
        }
        else if (SystemInfo.systemMemorySize <= m_AndroidMiddleMemorySize)
        {
            m_HardwareLevel = Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_MIDDLE;
        }

    }
}
