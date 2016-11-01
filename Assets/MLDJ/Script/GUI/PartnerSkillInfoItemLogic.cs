using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using Games.Fellow;


/// <summary>
/// 弃用
/// </summary>
public class PartnerSkillInfoItemLogic : MonoBehaviour {

    public UILabel m_NameLabel;
    public UILabel m_ExpLabel;
    public UISprite m_SkillIcon;
    public UISprite m_QualityPic;
    public UILabel m_LevelLabel;
    public GameObject m_LevelUpButton;
    public GameObject m_LockSprite;
    public UILabel m_FlagLabel;
    public UISprite m_RemindPoint;

    private int m_TallentSkillId = GlobeVar.INVALID_ID;
    private int m_ElementSkillId = GlobeVar.INVALID_ID;

    public void InitTallentSkill(int skillid, int curexp)
    {
        Tab_CabalFellowTallentSkill tabSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
        if (tabSkill == null)
        {
            return;
        }

        m_TallentSkillId = skillid;
        m_ElementSkillId = GlobeVar.INVALID_ID;

        m_NameLabel.text = tabSkill.Name;
        m_NameLabel.gameObject.SetActive(true);

        m_ExpLabel.text = tabSkill.NextSkillId != GlobeVar.INVALID_ID ? StrDictionary.GetClientDictionaryString("#{10321}", curexp, tabSkill.LevelUpExp) : "MAX";
        m_ExpLabel.gameObject.SetActive(true);

        m_SkillIcon.spriteName = tabSkill.Icon;
        m_SkillIcon.gameObject.SetActive(true);

        m_QualityPic.spriteName = FellowTool.GetFellowTallentSkillQualityPic(skillid);

        m_LevelLabel.text = "LV" + tabSkill.Level.ToString();
        m_LevelLabel.gameObject.SetActive(true);

        m_LockSprite.SetActive(false);
        m_FlagLabel.gameObject.SetActive(false);

        if (m_LevelUpButton != null)
        {
            m_LevelUpButton.SetActive(tabSkill.NextSkillId != GlobeVar.INVALID_ID);
        }

        updateTalentRemindPoint(skillid);
        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().UpdateDevelopRemindPoint();
        }
    }

    public void InitElementSkill_Hold(int skillid, int index, int fellowlevel)
    {
        if (skillid == GlobeVar.INVALID_ID)
        {
            if (index < 0 || index >= Fellow.FELLOW_ELEMENTSKILL_LEVELNEED.Length)
            {
                return;
            }
            
            if (fellowlevel >= Fellow.FELLOW_ELEMENTSKILL_LEVELNEED[index])
            {                
                m_FlagLabel.text = StrDictionary.GetClientDictionaryString("#{10526}");
                m_FlagLabel.gameObject.SetActive(true);
                m_LockSprite.SetActive(false);
            }
            else
            {
                m_FlagLabel.text = StrDictionary.GetClientDictionaryString("#{10527}");
                m_FlagLabel.gameObject.SetActive(true);
                m_LockSprite.SetActive(true);
            }
            m_NameLabel.gameObject.SetActive(false);
            m_ExpLabel.gameObject.SetActive(false);
            m_SkillIcon.gameObject.SetActive(false);
            m_QualityPic.spriteName = "white-jinengkuang";
            m_LevelLabel.gameObject.SetActive(false);
            m_LevelUpButton.SetActive(false);
        }
        else
        {
            InitElementSkill_Info(skillid);
        }
    }

    public void InitElementSkill_Info(int skillid)
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
        m_NameLabel.gameObject.SetActive(true);

        Tab_CabalFellowElementSkill tabNextSkill = TableManager.GetCabalFellowElementSkillByID(tabSkill.NextSkillId, 0);
        if (tabNextSkill == null)
        {
            m_ExpLabel.text = "MAX";
        }
        else
        {
            m_ExpLabel.text = StrDictionary.GetClientDictionaryString("#{10321}", GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(tabNextSkill.NeedBookId), tabNextSkill.NeedBookCount);
        }
        m_ExpLabel.gameObject.SetActive(true);

        m_SkillIcon.spriteName = tabBase.Icon;
        m_SkillIcon.gameObject.SetActive(true);

        m_QualityPic.spriteName = FellowTool.GetFellowElementSkillQualityPic(skillid);

        m_LevelLabel.text = FellowTool.GetFellowElementLevelText(skillid);
        m_LevelLabel.gameObject.SetActive(true);

        m_FlagLabel.gameObject.SetActive(false);
        m_LockSprite.SetActive(false);

        if (m_LevelUpButton != null)
        {
            m_LevelUpButton.SetActive(tabSkill.NextSkillId != GlobeVar.INVALID_ID);
        }

        updateElementRemindPoint(skillid);
        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().UpdateDevelopRemindPoint();
        }
    }

    public void InitElementSkill_Baby()
    {
        m_FlagLabel.text = StrDictionary.GetClientDictionaryString("#{10535}");
        m_FlagLabel.gameObject.SetActive(true);

        m_LockSprite.SetActive(true);
        m_NameLabel.gameObject.SetActive(false);
        m_ExpLabel.gameObject.SetActive(false);
        m_SkillIcon.gameObject.SetActive(false);
        m_QualityPic.spriteName = "white-jinengkuang";
        m_LevelLabel.gameObject.SetActive(false);
        m_LevelUpButton.SetActive(false);
    }

    void OnLevelUpClick()
    {
        //天赋技能改成根据宠物的等级提升而提升
        //if (m_TallentSkillId != GlobeVar.INVALID_ID)
        //{
        //    if (PartnerFrameLogic_Skill.Instance() != null)
        //    {
        //        PartnerFrameLogic_Skill.Instance().OnTalentSkillLevelUpClick(m_TallentSkillId);
        //    }
        //}
        if (m_ElementSkillId != GlobeVar.INVALID_ID)
        {
            if (PartnerFrameLogic_Skill.Instance() != null)
            {
                PartnerFrameLogic_Skill.Instance().OnElementSkillLevelUpClick(m_ElementSkillId);
            }
        }

        if (PartnerFrameLogic_Develop.Instance() && PartnerFrameLogic_Develop.Instance().NewPlayerGuideFlag_Step == 1)
        {
            PartnerFrameLogic_Develop.Instance().NewPlayerGuide(2);
        }
    }

    public void updateTalentRemindPoint(int skillid)
    {
        Tab_CabalFellowTallentSkill tabTalentSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
        if (tabTalentSkill == null)
        {
            return;
        }
        int needTalentBookId = tabTalentSkill.SkillBook;
        if (tabTalentSkill.NextSkillId != GlobeVar.INVALID_ID)
        {
            if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(needTalentBookId) > 0)
            {
                m_RemindPoint.gameObject.SetActive(true);
            }
            else
            {
                m_RemindPoint.gameObject.SetActive(false);
            }
        }
        else
        {
            m_RemindPoint.gameObject.SetActive(false);
        }
    }

    public void updateElementRemindPoint(int skillid)
    {
        Tab_CabalFellowElementSkill tabElementSkill = TableManager.GetCabalFellowElementSkillByID(skillid, 0);
        if (tabElementSkill == null)
        {
            return;
        }
        Tab_CabalFellowElementSkill tabNextSkill = TableManager.GetCabalFellowElementSkillByID(tabElementSkill.NextSkillId, 0);
        if (tabNextSkill == null)
        {
            return;
        }
        int packHaveBookNum = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(tabNextSkill.NeedBookId);
        int nextSkillNeedBookNum = tabNextSkill.NeedBookCount;
        if (packHaveBookNum >= nextSkillNeedBookNum)
        {
            m_RemindPoint.gameObject.SetActive(true);
        }
        else
        {
            m_RemindPoint.gameObject.SetActive(false);
        }
    }
}

