//********************************************************************
// 文件名: PartnerFrameLogic_FellowDetail.cs
// 描述: 宠物界面详细信息弹出框
// 作者: weitong
// 创建时间: 2015-12-3
//
//********************************************************************
using UnityEngine;
using System.Collections.Generic;
using Games.Fellow;
using GCGame;
using GCGame.Table;
using Games.Item;
public class PartnerFrameLogic_FellowDetail : MonoBehaviour 
{
#region UI ref
    public UISprite sprHead;
    public UISprite sprHeadQuality;
    public UILabel lblName;
    public UILabel lblLv;
    public UISprite sprTalent;
    public UILabel lblType;
    public UIGrid gridTalentSkills;
    public UIGrid gridElementSkills;
    public GameObject skillArea;
	public GameObject m_cloneArea;
	public UILabel m_CloneCount;
	public UILabel m_LuckValue;
	public UISprite[] m_CurStarPic;
    public GameObject skillTemplate;
#endregion

#region functions
    public void SetData(Fellow fellow)
    {
        sprHead.spriteName = fellow.GetIcon();
        sprHeadQuality.spriteName = FellowTool.GetFellowQualityFrame(fellow.Quality);
        lblName.text = fellow.Name;
        lblLv.text = fellow.Level.ToString();
        sprTalent.spriteName = FellowTool.GetFellowElementPic(fellow.ElementAttr);
        lblType.text = FellowTool.GetFellowTypeText(fellow.GetFellowType(), fellow.GetEvolveLevel());

        if (fellow.IsBabyFellow())
        {
            skillArea.SetActive(false);
			m_cloneArea.SetActive(true);
			SetStarState(false);
			SetCloneInfo(fellow);
        }
        else
        {
            skillArea.SetActive(true);
			m_cloneArea.SetActive(false);
			SetStarState(true);
            SetSkills(fellow);
        }
		UpdateFellowInfo_CurStar (fellow);
    }
	void SetStarState(bool bState)
	{
		for (int i=0; i<m_CurStarPic.Length; i++)
		{
			m_CurStarPic[i].gameObject.SetActive(bState);
		}
	}
	void SetCloneInfo(Fellow fellow)
	{
		m_CloneCount.text = fellow.ProcreateCount.ToString();
		m_LuckValue.text = fellow.Lucky.ToString();
	}
	void UpdateFellowInfo_CurStar(Fellow fellow)
	{
		int nStarCount = fellow.StarLevel > 0 ? ((fellow.StarLevel - 1) % 12) + 1 : 0;
		for (int i = 0; i < m_CurStarPic.Length; i++)
		{
			if (i < nStarCount)
			{
				m_CurStarPic[i].color = ItemTool.GetStarColorRGB(fellow.StarLevel);
			}
			else
			{
				m_CurStarPic[i].color = ItemTool.GetStarColorRGB(fellow.StarLevel-12);
			}
		}
	}
    void SetSkills(Fellow fellow)
    {
        Utils.CleanGrid(gridElementSkills.gameObject);
        Utils.CleanGrid(gridTalentSkills.gameObject);

        int index = 0;

        int nValidTalentSkillCount = 0;
        foreach (KeyValuePair<int, int> pair in fellow.TallentSkill)
        {
            int skillid = pair.Key;
            if (skillid <= 0)
            {
                break;
            }
            Tab_CabalFellowTallentSkill tabTallentSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
            if (tabTallentSkill == null)
            {
                break;
            }
            string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
            GameObject skillitem = Utils.BindObjToParent(skillTemplate, gridTalentSkills.gameObject, itemName);
            if (skillitem == null || skillitem.GetComponent<PartnerSkillItemLogic>() == null)
            {
                break;
            }
            skillitem.GetComponent<PartnerSkillItemLogic>().InitTallentSkill(skillid);
            index += 1;
            nValidTalentSkillCount += 1;
        }

        int nValidElementSkillCount = 0;
        for (int i = 0; i < Fellow.FELLOW_ELEMENTSKILL_COUNT && i < Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT; i++)
        {
            int skillid = fellow.GetElementSkillId(i);
            if (skillid <= 0)
            {
                break;
            }
            Tab_CabalFellowElementSkill tabElementSkill = TableManager.GetCabalFellowElementSkillByID(skillid, 0);
            if (tabElementSkill == null)
            {
                break;
            }
            string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
            GameObject skillitem = Utils.BindObjToParent(skillTemplate, gridElementSkills.gameObject, itemName);
            if (skillitem == null || skillitem.GetComponent<PartnerSkillItemLogic>() == null)
            {
                break;
            }
            skillitem.GetComponent<PartnerSkillItemLogic>().InitElementSkill(skillid);
            index += 1;
            nValidElementSkillCount += 1;
        }

        int nEmptySlotCount = Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT - nValidElementSkillCount;
        int nLockSlotCount = Fellow.FELLOW_ELEMENTSKILL_LEVELNEED.Length;
        for (int i = 0; i < Fellow.FELLOW_ELEMENTSKILL_LEVELNEED.Length; i++)
        {
            if (fellow.Level >= Fellow.FELLOW_ELEMENTSKILL_LEVELNEED[i])
            {
                nLockSlotCount -= 1;
            }
        }

        for (int i = 0; i < nEmptySlotCount; i++)
        {
            string itemName = index < 10 ? "0" + index.ToString() : index.ToString();
            GameObject skillitem = Utils.BindObjToParent(skillTemplate, gridElementSkills.gameObject, itemName);
            if (skillitem == null || skillitem.GetComponent<PartnerSkillItemLogic>() == null)
            {
                break;
            }

            skillitem.GetComponent<PartnerSkillItemLogic>().InitEmptySkill(i >= nEmptySlotCount - nLockSlotCount);
            index += 1;
        }
        gridTalentSkills.Reposition();
        gridElementSkills.Reposition();
    }
#endregion

}
