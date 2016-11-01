using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using Games.Fellow;

public class PartnerLearnElementSkillLogic : MonoBehaviour {

    public UISprite m_SkillIcon;
    public UISprite m_QualityPic;
    public GameObject m_LockButton;
    public GameObject m_UnLockButton;
    public GameObject m_NoHoldSprite;
    public UILabel m_Level;
    public GameObject skillLeardEffect;

    private bool m_bLocked = false;
    public bool Locked
    {
        get { return m_bLocked; }
        set { m_bLocked = value; }
    }

    private bool m_bValidSlot = false;
    public bool ValidSlot
    {
        get { return m_bValidSlot; }
        set { m_bValidSlot = value; }
    }

    public void Init(int skillid, int index, int fellowlevel)
    {
        if (skillid == GlobeVar.INVALID_ID)
        {
            if (index < 0 || index >= Fellow.FELLOW_ELEMENTSKILL_LEVELNEED.Length)
            {
                return;
            }

            m_SkillIcon.gameObject.SetActive(false);
            //m_QualityPic.spriteName = "white-jinengkuang";
            m_UnLockButton.SetActive(false);
			int LvValue = Fellow.FELLOW_ELEMENTSKILL_LEVELNEED[index];
			m_Level.text = LvValue.ToString();
			if (fellowlevel >= LvValue)
            {
                m_LockButton.SetActive(true);
                m_NoHoldSprite.SetActive(false);
                m_bValidSlot = true;
                m_bLocked = false;
            }
            else
            {
                m_LockButton.SetActive(false);
                m_NoHoldSprite.SetActive(true);
                m_bValidSlot = false;
                m_bLocked = true;
            }
        }
        else
        {
            Tab_CabalFellowElementSkill tabSkill = TableManager.GetCabalFellowElementSkillByID(skillid, 0);
            if (tabSkill == null)
            {
                return;
            }

            Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(skillid, 0);
            if (tabSkillEx == null)
            {
                return;
            }

            Tab_SkillBase tabBase = TableManager.GetSkillBaseByID(tabSkillEx.BaseId, 0);
            if (tabBase == null)
            {
                return;
            }

            m_SkillIcon.spriteName = tabBase.Icon;
            m_SkillIcon.gameObject.SetActive(true);
            Tab_CabalFellowElementSkill tabNextSkill = TableManager.GetCabalFellowElementSkillByID(tabSkill.NextSkillId, 0);
            if (tabNextSkill == null)
            {
                m_Level.text = "MAX";
            }
            m_Level.text = FellowTool.GetFellowElementLevelText(skillid);

            m_LockButton.SetActive(true);
            m_UnLockButton.SetActive(false);

            m_NoHoldSprite.SetActive(false);

            m_bValidSlot = true;
            m_bLocked = false;
        }
    }

    void OnLockClick()
    {
        m_LockButton.SetActive(false);
        m_UnLockButton.SetActive(true);

        m_bLocked = true;
    }

    void OnUnLockClick()
    {
        m_LockButton.SetActive(true);
        m_UnLockButton.SetActive(false);

        m_bLocked = false;
    }
}
