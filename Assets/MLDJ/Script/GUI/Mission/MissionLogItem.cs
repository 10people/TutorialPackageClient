/********************************************************************************
 *	文件名：MissionLogItem.cs
 *	全路径：	\Script\GUI\MissionLogItem.cs
 *	创建人：	贺文鹏
 *	创建时间：2014-02-17
 *
 *	功能说明： 任务日志界面 任务项UI。
 *	       
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Mission;
using Module.Log;

public class MissionLogItem : MonoBehaviour {

    public UILabel m_MissionName;   // 任务名称
    public GameObject m_Active; // 点击状态

    private const byte MaxStateCount = 3;
    public UITexture[] m_MissionState = new UITexture[MaxStateCount];// 任务状态图

    private int m_MissionID;
    public int MissionID
    {
        get { return m_MissionID; }
        set { 
            m_MissionID = value;
            SetMissionLogItem();
        }
    }

    void CleanUpInfo()
    {
        for (int i = 0; i < 3; i++)
        {
            if (m_MissionState[i])
            {
                m_MissionState[i].gameObject.SetActive(false);
            }
        }

        if (m_MissionName)
        {
            m_MissionName.text = "";
        }

        if (m_Active)
        {
            m_Active.SetActive(false);
        }
    }

    public void SetChooseState(bool bFlag)
    {
        if (m_Active)
        {
            m_Active.SetActive(bFlag);
        }
    }

    // 设置Item名字、状态UI
    void SetMissionLogItem()
    {
        if (m_MissionID < 0)
        {
            return;
        }

        CleanUpInfo();

        Tab_MissionDictionary MisDictionary = TableManager.GetMissionDictionaryByID(m_MissionID, 0);
        if (MisDictionary != null)
        {
            if (m_MissionName)
            {
                m_MissionName.text = string.Format(MisDictionary.MissionName,"","");
            }
        }
		else
		{
			LogModule.ErrorLog("Can not find missionDictionary {0}", m_MissionID);
		}

        // 状态
//        byte byMisState = GameManager.gameManager.MissionManager.GetMissionState(m_MissionID);
//        if (byMisState < MaxStateCount)
//        {
//            for (byte i = 0; i < MaxStateCount; i++ )
//            {
//                if (byMisState == i)
//                {
//                    m_MissionState[i].gameObject.SetActive(true);
//                }
//                else
//                    m_MissionState[i].gameObject.SetActive(false);
//            }
//        }
    }
}
