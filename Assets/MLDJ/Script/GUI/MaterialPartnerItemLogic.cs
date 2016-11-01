using UnityEngine;
using System;
using System.Collections;
using Games.Fellow;
using GCGame.Table;

public class MaterialPartnerItemLogic : MonoBehaviour {

    public UISprite m_IconSprite;
    public UISprite m_QualitySprite;
    public GameObject m_SelectMark;

#region params
    public Fellow m_fellow;

    private bool m_bChoose = false;
    public bool Choose
    {
        get { return m_bChoose; }
        set 
        { 
            m_bChoose = value;
            m_SelectMark.SetActive(m_bChoose);
        }
    }

    private int m_StarExp;
    public int StarExp
    {
        get { return m_StarExp; }
        set { m_StarExp = value; }
    }
#endregion

    public void Init(Fellow fellow)
    {
        m_fellow = fellow;
        m_StarExp = fellow.GetFullStarExp();
        SetIcon(fellow);
        SetQuality(fellow);
        m_SelectMark.SetActive(false);
        UIEventListener.Get(gameObject).onClick = OnAddMaterialButtonClick;
    }

    private void SetIcon(Fellow fellow)
    {
        m_IconSprite.spriteName = fellow.GetIcon();
        m_IconSprite.gameObject.SetActive(true);
    }

    private void SetQuality(Fellow fellow)
    {
        if (m_QualitySprite != null)
        {
            m_QualitySprite.spriteName = FellowTool.GetFellowQualityFrame(fellow.Quality);
            m_QualitySprite.gameObject.SetActive(true);
        }
    }

    public UInt64 GetGuid()
    {
        return m_fellow.Guid;
    }

    void OnAddMaterialButtonClick(GameObject go)
    {
        m_SelectMark.SetActive(!m_SelectMark.activeSelf);
        m_bChoose = !m_bChoose;

        if (PartnerFrameLogic_Star.Instance() != null)
        {
            PartnerFrameLogic_Star.Instance().OnChooseMaterialClick(this);
        }
    }
}
