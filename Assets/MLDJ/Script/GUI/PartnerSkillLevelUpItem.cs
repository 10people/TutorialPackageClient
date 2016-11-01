using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using Games.Fellow;

public class PartnerSkillLevelUpItem : MonoBehaviour {

    public UILabel m_NameLabel;
    public UILabel m_LevelLabel;
    public UILabel m_DescLabel;
    public UISprite m_SkillIcon;
    public UISprite m_QualityPic;

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

        m_NameLabel.text = tabSkill.Name;
        m_LevelLabel.text = "LV" + tabSkill.Level.ToString();
        m_DescLabel.text = tabSkill.SkillDesc;
        m_SkillIcon.spriteName = tabSkill.Icon;
        //m_QualityPic.spriteName = FellowTool.GetFellowTallentSkillQualityPic(skillid);
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

        m_NameLabel.text = tabBase.Name;
        m_LevelLabel.text = FellowTool.GetFellowElementLevelText(skillid);
        m_DescLabel.text = tabSkillEx.SkillDesc;
        m_SkillIcon.spriteName = tabBase.Icon;
        //m_QualityPic.spriteName = FellowTool.GetFellowElementSkillQualityPic(skillid);
    }
}
