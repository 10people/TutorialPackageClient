using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Fellow;
using GCGame;
using System;

public class PartnerChooseItemLogic : MonoBehaviour 
{
    public UISprite m_IconSprite;
    public UILabel m_LevelLabel;
    public UILabel m_NameLabel;
    public UISprite m_QualitySprite;
    public UILabel m_CombatValueLabel;
    public UILabel m_ProCreateLabel;
    public UILabel m_LuckyLabel;

    public Fellow m_fellow;

    public void Init(Fellow fellow)
    {
        m_fellow = fellow;
        //m_NameLabel.text = Utils.GetFellowNameColor(fellow.Quality);
        m_NameLabel.text = fellow.Name;
        m_LevelLabel.text = fellow.Level.ToString();
        m_IconSprite.spriteName = fellow.GetIcon();
        //m_IconSprite.MakePixelPerfect();
        m_QualitySprite.spriteName = FellowTool.GetFellowQualityFrame(fellow.Quality);
        m_CombatValueLabel.text = fellow.GetCombatValue().ToString();
        m_ProCreateLabel.text = fellow.ProcreateCount.ToString();
        m_LuckyLabel.text = fellow.Lucky.ToString();
    }

    public void OnChooseBtnClick()
    {
        if (PartnerFrameLogic_Breeding.Instance() != null)
        {
            PartnerFrameLogic_Breeding.Instance().OnPartnerChooseOKClick(m_fellow);
        }
    }
}