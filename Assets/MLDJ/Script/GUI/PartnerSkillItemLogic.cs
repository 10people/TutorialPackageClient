using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using Games.Fellow;

public class PartnerSkillItemLogic : MonoBehaviour {

    public UISprite m_SkillIcon;
    public UISprite m_QualityPic;
    //remove
    //public UILabel m_LevelLabel;
    public GameObject m_LockSprite;
    public string toolTipMsg = string.Empty;

    private int m_TallentSkillId = GlobeVar.INVALID_ID;
    private int m_ElementSkillId = GlobeVar.INVALID_ID;

    public void InitTallentSkill(int skillid)
    {
        Tab_CabalFellowTallentSkill tabSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
        if (tabSkill == null)
        {
            return;
        }

        m_TallentSkillId = skillid;
        m_ElementSkillId = GlobeVar.INVALID_ID;
        toolTipMsg = tabSkill.SkillDesc;
        m_SkillIcon.spriteName = tabSkill.Icon;
        m_SkillIcon.gameObject.SetActive(true);
        //m_QualityPic.spriteName = FellowTool.GetFellowTallentSkillQualityPic(skillid);
        //m_LevelLabel.text = tabSkill.Level.ToString();
        m_LockSprite.SetActive(false);
    }

    public void InitElementSkill(int skillid)
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

        m_TallentSkillId = GlobeVar.INVALID_ID;
        m_ElementSkillId = skillid;
        toolTipMsg = tabBase.SkillIntro;
        m_SkillIcon.spriteName = tabBase.Icon;
        m_SkillIcon.gameObject.SetActive(true);
        //m_QualityPic.spriteName = FellowTool.GetFellowElementSkillQualityPic(skillid);
        //m_LevelLabel.text = FellowTool.GetFellowElementLevelText(skillid);
        m_LockSprite.SetActive(false);
    }

    public void InitEmptySkill(bool bLock)
    {
        m_SkillIcon.gameObject.SetActive(false);
        //m_QualityPic.spriteName = "jinengkuang1";
        //m_LevelLabel.text = "";

        m_LockSprite.SetActive(bLock);
    }
}
