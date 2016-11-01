using UnityEngine;
using System.Collections;
using GCGame.Table;
using Module.Log;

public class ChatInfoSelectLinkMissionItemLogic : ChatInfoSelectLinkItemLogic
{

    public UILabel m_missionName;

    private int m_missionId;

    public override void Init(ChatInfoSelectLinkLogic.Data data, int index)
    {
       
        base.Init(data, index);
        
        m_missionId = data.id;
        int nMissionID = data.id;
        this.name = string.Format("{0:D4}",index);
        Tab_MissionDictionary MissionDic = TableManager.GetMissionDictionaryByID(nMissionID, 0);
        if (MissionDic == null)
        {
            LogModule.ErrorLog("Can not find missionDictionary {0}", nMissionID);
            return;
        }
        byte yMissionQuality = GameManager.gameManager.MissionManager.GetMissionQuality(nMissionID);
        string strMissionColor = MissionDialogAndLeftTabsLogic.GetColorByQuality(yMissionQuality);

        m_missionName.text = string.Format(MissionDic.MissionName, strMissionColor, "[ffe6b4]");
    }

    public void OnClickItem()
    {
        if (ChatInfoLogic.Instance() != null)
        {
            ChatInfoLogic.Instance().InsertMissionLinkText(m_missionId);
        }
    }
}
