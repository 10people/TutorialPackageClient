using UnityEngine;
using System.Collections;
using Games.Fellow;
using GCGame.Table;
using GCGame;
using System;

public class PartnerFrameItemLogic : MonoBehaviour {

    public GameObject RedPoint;
    public UISprite m_IconSprite;
    public UILabel m_LevelLabel;
    public UILabel m_NameLabel;
    public UILabel m_NameLabel2;
    public UISprite m_ChooseSprite;
    public UISprite m_LockSprite;
    public UISprite m_QualitySprite;
    public UILabel m_TypeLabel;
    public GameObject cloningInfo;
    public GameObject normalInfo;

    private Fellow m_fellow;

    public Fellow FellowInfo
    {
        get
        {
            return m_fellow;
        }
    }
    public void ShowCloningInfo()
    {
        normalInfo.SetActive(false);
        cloningInfo.SetActive(true);
        m_NameLabel2.text = cloningInfo.transform.FindChild("NameLabel").GetComponent<UILabel>().text;
    }
	
    public void UpdateFellowInfo(Fellow fellow)
    {
        if (fellow == null || false == fellow.IsValid())
        {
            return;
        }

        normalInfo.SetActive(true);
        cloningInfo.SetActive(false);
		RedPoint.SetActive(false);
        SetName(fellow);
        SetLevel(fellow);
        SetIcon(fellow);
        SetLock(fellow);
        SetQuality(fellow);
        SetFellowType(fellow);

        m_fellow = fellow;
    }

    public void UpdateFellowInfo_Refresh()
    {
        if (m_fellow == null || false == m_fellow.IsValid())
        {
            return;
        }

        SetName(m_fellow);
        SetLevel(m_fellow);
        SetIcon(m_fellow);
        SetLock(m_fellow);
        SetQuality(m_fellow);
        SetFellowType(m_fellow);
    }

    private void SetName(Fellow fellow)
    {
        //m_NameLabel.text = Utils.GetFellowNameColor(fellow.Quality);
        m_NameLabel.text = fellow.Name;
        m_NameLabel2.text = fellow.Name;
    }

    private void SetLevel(Fellow fellow)
    {
        m_LevelLabel.text = fellow.Level.ToString();
    }

    private void SetIcon(Fellow fellow)
    {
        m_IconSprite.spriteName = fellow.GetIcon();
        //m_IconSprite.MakePixelPerfect();
    }

    private void SetLock(Fellow fellow)
    {
        if (fellow.Locked)
        {
            m_LockSprite.gameObject.SetActive(true);
        }
        else
        {
            m_LockSprite.gameObject.SetActive(false);
        }
    }

    private void SetQuality(Fellow fellow)
    {
        if (m_QualitySprite != null)
        {
            m_QualitySprite.spriteName = FellowTool.GetFellowQualityFrame(fellow.Quality);
        }
    }

    private void SetFellowType(Fellow fellow)
    {
        if (m_TypeLabel != null)
        {
            if (fellow.GetFellowType() == (int)FELLOWTYPE.ALIEN)
            {
                m_TypeLabel.text = FellowTool.GetFellowTypeText(fellow.GetFellowType(), fellow.GetEvolveLevel());
            }
            else
            {
                m_TypeLabel.text = FellowTool.GetFellowTypeText(fellow.GetFellowType());
            }
        }
    }

    public void OnFellowClick()
    {
        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().OnFellowClick(m_fellow);

            if (gameObject.name == "00" && PartnerFrameLogic.Instance())
            {
                int nIndex = PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step;
                if (PartnerFrameLogic_Info.Instance() != null)
                {
                    if (nIndex == 2)// 召唤伙伴
                    {
                        PartnerFrameLogic_Info.Instance().NewPlayerGuide(1);
                    }
                    else if (nIndex == 12)// 天赋技能
                    {
                        PartnerFrameLogic_Info.Instance().NewPlayerGuide(2);
                    }
                    PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step = -1;
                    return;
                }
                else if (nIndex == 15)// 升星
                {
                    PartnerFrameLogic.Instance().NewPlayerGuide(16);
                }
            }
        }
    }

    public void UpdateChooseFlag(UInt64 fellowguid)
    {
        if (m_fellow != null)
        {
            m_ChooseSprite.gameObject.SetActive(fellowguid == m_fellow.Guid);
        }
        else if (fellowguid == Games.GlobeDefine.GlobeVar.INVALID_GUID)
        {
            m_ChooseSprite.gameObject.SetActive(true);
        }
        else
        {
            m_ChooseSprite.gameObject.SetActive(false);
        }
    }
    public void SetRedPoint(bool vis)
    {
        if (RedPoint != null)
        {
            RedPoint.SetActive(vis);
        }
    }
}
