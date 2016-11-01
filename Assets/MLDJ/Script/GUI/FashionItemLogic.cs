using UnityEngine;
using Games.GlobeDefine;
using GCGame.Table;
using Module.Log;

public class FashionItemLogic : MonoBehaviour
{
    public UISprite m_ItemIcon;
    public UILabel m_ItemName;
    public UILabel m_ItemName2;
    public UISprite m_Highlight;
    public GameObject m_ChosenSprite;

    private int m_FashionID = GlobeVar.INVALID_ID;
    public int FashionID
    {
        get { return m_FashionID; }
    }

    public void UpdateState(bool isObtained)
    {
        m_ItemIcon.gameObject.SetActive(isObtained);
    }

    public void InitInfo(Tab_FashionData tabFashionData, bool isObtained)
    {
        m_FashionID = tabFashionData.Id;

        if (tabFashionData == null)
        {
            LogModule.WarningLog("FashionItemLogic::InitInfo FashionID is Invalid!!!");
            m_ItemIcon.gameObject.SetActive(false);
            m_ItemName.text = "Invalid";
            m_Highlight.gameObject.SetActive(false);
        }
        else
        {
            m_ItemIcon.spriteName = tabFashionData.Icon;
            m_ItemIcon.gameObject.SetActive(isObtained);
            m_ItemName.text = tabFashionData.Name;
            m_ItemName2.text = tabFashionData.Name;
        }

        HideChosenSprite();
    }

    void ChooseFashionItem()
    {
        HandleItemChoose();
    }

    public void HandleItemChoose()
    {
        int curChooseFashionType = TableManager.GetFashionDataByID(m_FashionID, 0).FashionType;
        if (FashionLogic.Instance() != null)
        {
            FashionLogic.Instance().ChooseFashionItem(m_FashionID);
            if (curChooseFashionType == (int)FashionLogic.FashionType.TYPE_ClOSETH)
            {
                FashionLogic.Instance().FitOnFashion(m_FashionID);
            }
            else if (curChooseFashionType == (int)FashionLogic.FashionType.TYPE_WING)
            {
                FashionLogic.Instance().FitOnWing();

            }
            
        }
    }

    public void UpdateHightLight(int nFashionID)
    {
        if (nFashionID == m_FashionID)
        {
            m_Highlight.gameObject.SetActive(true);
        }
        else
        {
            m_Highlight.gameObject.SetActive(false);
        }
    }

    public void ShowChosenSprite()
    {
        m_ChosenSprite.SetActive(true);
    }

    public void HideChosenSprite()
    {
        m_ChosenSprite.SetActive(false);
    }
}