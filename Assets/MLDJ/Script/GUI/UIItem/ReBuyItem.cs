using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using GCGame;
public class ReBuyItem : MonoBehaviour {

    private int m_RebuyCopySceneId;
    public int RebuyCopySceneId
    {
        get { return m_RebuyCopySceneId; }
        set { m_RebuyCopySceneId = value; }
    }
    private bool m_RebuyCopySceneSingle;
    public bool RebuyCopySceneSingle
    {
        get { return m_RebuyCopySceneSingle; }
        set { m_RebuyCopySceneSingle = value; }
    }

    private int m_RebuyCopySceneCount;
    public int RebuyCopySceneCount
    {
        get { return m_RebuyCopySceneCount; }
        set { m_RebuyCopySceneCount = value; }
    }

    public UILabel m_LabelName;
    public UILabel m_LabelCount;
    public RebuyChooseWindow m_RebuyChooseWindow;

    public void SendData(int nCopySceneId, bool Single)
    {
        RebuyCopySceneId = nCopySceneId;
        RebuyCopySceneSingle = Single;
        RebuyCopySceneCount = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumberEx(nCopySceneId, Single);
        m_LabelName.text = Utils.GetCSName(nCopySceneId, Single);
        m_LabelCount.text = StrDictionary.GetClientDictionaryString("#{5394}", RebuyCopySceneCount);
    }

    public void Cleanup()
    {
        m_LabelName.text = "";
        m_LabelCount.text = "";
        RebuyCopySceneId = -1;
        RebuyCopySceneSingle = true;
        RebuyCopySceneCount = 0;
    }
    void OnBuyback()
    {
        if (RebuyCopySceneCount <= 0)
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{5400}");
                return;
            }
           
        }
        m_RebuyChooseWindow.SendData(RebuyCopySceneId, RebuyCopySceneSingle);
        m_RebuyChooseWindow.gameObject.SetActive(true);
    }    
}
