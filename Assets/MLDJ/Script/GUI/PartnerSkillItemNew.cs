using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using Games.Fellow;

public class PartnerSkillItemNew : MonoBehaviour 
{
#region UI ref
    public UISprite sprSkillIcon;
    public UILabel lblSkillLv;
    public GameObject objLock;
    public GameObject enhanceSkill;

    public GameObject objDetail;
    public GameObject objDetailBg;
    public UILabel lblSkillName;
    public UILabel lblSkillDesc;
    public UILabel lblSkillEffect;
	private bool m_bTallent = false;
	private bool m_bSkill = false;
#endregion

#region params
    private int m_TallentSkillId = GlobeVar.INVALID_ID;
    private int m_ElementSkillId = GlobeVar.INVALID_ID;
#endregion


#region functions
    /// <summary>
    /// 填充天赋技能数据
    /// </summary>
    /// <param name="skillid"></param>
    /// <param name="curexp"></param>
    public void InitTallentSkill(int skillid, int curexp)//天赋和技能公用一个，所以加个标识区分 true为天赋 false技能
    {
		m_bTallent = true;
        Tab_CabalFellowTallentSkill tabSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
        if (tabSkill == null)
        {
            return;
        }
		HideDetail (null);//切换宠物时 隐藏Tip
        m_TallentSkillId = skillid;
        m_ElementSkillId = GlobeVar.INVALID_ID;
        sprSkillIcon.spriteName = tabSkill.Icon;
        lblSkillName.text = tabSkill.Name;
        lblSkillDesc.text = tabSkill.SkillDesc;
        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().UpdateDevelopRemindPoint();
        }
    }

    /// <summary>
    /// 填充元素技能数据
    /// </summary>
    public void InitElementSkill_Hold(int skillid, int index, int fellowlevel)
    {
		m_bSkill = true;
		HideDetail (null);
        if (skillid == GlobeVar.INVALID_ID)
        {
            if (index < 0 || index >= Fellow.FELLOW_ELEMENTSKILL_LEVELNEED.Length)
            {
                return;
            }
            objLock.SetActive(fellowlevel < Fellow.FELLOW_ELEMENTSKILL_LEVELNEED[index]);
            sprSkillIcon.gameObject.SetActive(false);
            lblSkillLv.transform.parent.gameObject.SetActive(false);
            enhanceSkill.SetActive(false);
			m_ElementSkillId = GlobeVar.INVALID_ID;
        }
        else
        {
            InitElementSkill_Info(skillid);
        }
    }

    void InitElementSkill_Info(int skillid)
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

        Tab_CabalFellowElementSkill tabNextSkill = TableManager.GetCabalFellowElementSkillByID(tabSkill.NextSkillId, 0);
        if (tabNextSkill == null)
        {
            lblSkillLv.text = "MAX";
        }
        sprSkillIcon.spriteName = tabBase.Icon;
        sprSkillIcon.gameObject.SetActive(true);

        lblSkillLv.text = FellowTool.GetFellowElementLevelText(skillid);
        lblSkillLv.transform.parent.gameObject.SetActive(true);
        lblSkillName.text = tabBase.Name;
        lblSkillDesc.text = tabBase.SkillIntro;
        objLock.SetActive(false);
        enhanceSkill.SetActive(true);
        UIEventListener.Get(enhanceSkill).onClick = ShowEnhanceDialog;
        if (PartnerFrameLogic.Instance() != null)
        {
            PartnerFrameLogic.Instance().UpdateDevelopRemindPoint();
        }
    }

    void Start()
    {
        UIEventListener.Get(gameObject).onClick = ShowDetail;
        UIEventListener.Get(objDetailBg).onClick = HideDetail;
    }

    void ShowDetail(GameObject go)
    {
		//if (m_ElementSkillId != GlobeVar.INVALID_ID || m_TallentSkillId != GlobeVar.INVALID_ID)
		if(m_bTallent&&m_TallentSkillId != GlobeVar.INVALID_ID)
			objDetail.SetActive(true);
		if(m_bSkill&&m_ElementSkillId != GlobeVar.INVALID_ID)
            objDetail.SetActive(true);
    }

    void HideDetail(GameObject go)
    {
        objDetail.SetActive(false);
    }

    void ShowEnhanceDialog(GameObject go)
    {
        if (PartnerFrameLogic_Skill.Instance() != null)
        {
            PartnerFrameLogic_Skill.Instance().OnElementSkillLevelUpClick(m_ElementSkillId);
        }
    }
#endregion

}
