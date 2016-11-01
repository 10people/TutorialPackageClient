using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
public class RebuyChooseWindow : MonoBehaviour {

    public UILabel m_LabelName;
    public UIInput m_InputNum;
    public UILabel m_Yuanbao;

    private int m_RebuyCopySceneId;
    private bool m_RebuyCopySceneSingle;
    private int m_curNum = 1;         // 当前数字
    private int m_minValue = 1;         // 下限
    private int m_maxValue = 1;        // 上限
    private bool m_isAdd = false;
    private bool m_isDel = false;
    private int m_stepValue = 1;        // 每次批量变化的数值
    private int m_nYuanbBao = 0;
    void Start()
    {
        InvokeRepeating("SlowUpdate", 0, 0.1f);
    }
    void OnEnable()
    {
        m_maxValue = GameManager.gameManager.PlayerDataPool.CommonData.GetCopySceneNumberEx(m_RebuyCopySceneId, m_RebuyCopySceneSingle);
        
        m_InputNum.defaultText = "1";
        m_LabelName.text = Utils.GetCSName(m_RebuyCopySceneId, m_RebuyCopySceneSingle);
        m_nYuanbBao = GetBuybackYuanbao(m_RebuyCopySceneId, m_RebuyCopySceneSingle);
        if (m_nYuanbBao <= 0)
        {
            m_nYuanbBao = 9999;
        }
        m_Yuanbao.text = StrDictionary.GetClientDictionaryString("#{5395}", m_nYuanbBao);     
    }
    void OnDestroy()
    {
        CancelInvoke("SlowUpdate");
    }
    public void SendData(int nCopySceneId, bool Single)
    {
        m_RebuyCopySceneId = nCopySceneId;
        m_RebuyCopySceneSingle = Single;
    }
    void SlowUpdate()
    {
        if (m_isAdd)
        {
            AddNum();
        }
        if (m_isDel)
        {
            SubNum();
        }
    }
    void OnChongZhi()
    {
        UIManager.ShowUI(UIInfo.Recharge);
    }
    void OnOkClick()
    {
        OnInputSubmit();
        CG_BUYBACK_COPYSCENENUMBER pak = (CG_BUYBACK_COPYSCENENUMBER)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BUYBACK_COPYSCENENUMBER);
        pak.SetNSceneClassID(m_RebuyCopySceneId);
        pak.SetType(m_RebuyCopySceneSingle == true ? 1:0);
        pak.SetNData(m_curNum);
        pak.SendPacket();
        OnCloseWindow();
    }
    void AddNum()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(m_InputNum.value, out curNum);
        if (bCanParse)
        {
            if (1 == curNum && m_stepValue > curNum)
            {
                curNum = Mathf.Min(m_maxValue, m_stepValue);
            }
            else
            {
                if (m_maxValue == curNum)
                {
                    curNum = m_minValue;
                }
                else
                {
                    curNum = Mathf.Min(m_maxValue, curNum + m_stepValue);

                }
            }
            m_InputNum.value = curNum.ToString();
        }

        m_curNum = curNum;
        m_Yuanbao.text = StrDictionary.GetClientDictionaryString("#{5395}", m_nYuanbBao * m_curNum);     
    }

    void SubNum()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(m_InputNum.value, out curNum);
        if (bCanParse)
        {
            int tempModValue = curNum % m_stepValue;
            if (m_maxValue == curNum && (tempModValue != 0))
            {
                curNum = Mathf.Max(m_minValue, curNum - tempModValue);
            }
            else
            {
                if (m_minValue == curNum)
                {
                    curNum = m_maxValue;
                }
                else
                {
                    curNum = Mathf.Max(m_minValue, curNum - m_stepValue);
                }
            }
            m_InputNum.value = curNum.ToString();

        }

        m_curNum = curNum;
        m_Yuanbao.text = StrDictionary.GetClientDictionaryString("#{5395}", m_nYuanbBao * m_curNum);     
    }

    public void NumChooseSubmit()
    {
        bool bCanParse = int.TryParse(m_InputNum.value, out m_curNum);
        if (!bCanParse)
        {
            return;
        }
    }
    // 回车时响应
    public void OnInputSubmit()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(m_InputNum.value, out curNum);
        if (bCanParse)
        {
            curNum = Mathf.Min(m_maxValue, Mathf.Max(1, curNum));
            m_InputNum.value = curNum.ToString();
        }
        else
        {
            m_InputNum.value = "1";
            curNum = 1;
        }

        m_curNum = curNum;
        m_Yuanbao.text = StrDictionary.GetClientDictionaryString("#{5395}", m_nYuanbBao * m_curNum);     
    }


    void OnClickInput()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(m_InputNum.value, out curNum);
        if (bCanParse)
        {
            curNum = Mathf.Min(m_maxValue, Mathf.Max(1, curNum));
            if (1 == curNum)
            {
                m_InputNum.value = "1";
            }
        }
    }
    void OnCloseWindow()
    {
        gameObject.SetActive(false);
        m_LabelName.text = "";
        m_curNum = 1;
        m_InputNum.value = "1";
    }
   
    void AddOnPress()
    {
        m_isAdd = true;
    }

    void AddOnRelease()
    {
        m_isAdd = false;
    }

    void DelOnPress()
    {
        m_isDel = true;
    }

    void DelOnRelease()
    {
        m_isDel = false;
    }
    public int GetBuybackYuanbao(int nSceneId, bool bSingle)
    {
        int nYuanBao = 0;
        if (null == Singleton<ObjManager>.GetInstance())
        {
            return nYuanBao;
        }
        Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(m_RebuyCopySceneId, 0);
        if (pSceneClass == null)
        {
            return nYuanBao;
        }
        Tab_CopyScene pCopyScene = TableManager.GetCopySceneByID(pSceneClass.CopySceneID, 0);
        if (pCopyScene == null)
        {
            return nYuanBao;
        }
        Tab_CopySceneRule pCopySceneRule;
        if (bSingle)
        {
            pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRulebyIndex(0), 0);
        }
        else
        {
            pCopySceneRule = TableManager.GetCopySceneRuleByID(pCopyScene.GetRuleTeambyIndex(0), 0);
        }
        if (null == pCopySceneRule)
        {
            return nYuanBao;
        }
        if (GameManager.gameManager.PlayerDataPool.CommonData.GetIsCSActivity(nSceneId, bSingle))
        {
            nYuanBao = pCopySceneRule.GetBuybackbyIndex(1);
        }
        else
        {
            nYuanBao = pCopySceneRule.GetBuybackbyIndex(0);
        }
       
        return nYuanBao;
    }
}
