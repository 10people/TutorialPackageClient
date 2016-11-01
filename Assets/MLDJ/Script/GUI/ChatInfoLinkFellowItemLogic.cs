using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using Games.Fellow;

public class ChatInfoLinkFellowItemLogic : MonoBehaviour {

    public UISprite m_SkillIcon;
    public UISprite m_QualityPic;
   // public UILabel m_LevelLabel;
    public UISprite m_TallentBgPic; // 天赋技能加一个背景框

    private int m_TallentSkillId = GlobeVar.INVALID_ID;
    private int m_ElementSkillId = GlobeVar.INVALID_ID;

    // Use this for initialization
    void Start()
    {

    }

    void OnEnable()
    {
        m_TallentBgPic.gameObject.SetActive(false);
    }
    // Update is called once per frame
    void Update()
    {

    }

    public void InitTallentSkill(int skillid)
    {
        Tab_CabalFellowTallentSkill tabSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
        if (tabSkill == null)
        {
            return;
        }

        m_TallentSkillId = skillid;
        m_ElementSkillId = GlobeVar.INVALID_ID;

        m_SkillIcon.spriteName = tabSkill.Icon;
        //取消品质
        //m_QualityPic.spriteName = FellowTool.GetChatFellowTallentSkillQualityPic(skillid);
        m_TallentBgPic.gameObject.SetActive(true);
      //  m_LevelLabel.text = tabSkill.Level.ToString();
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

        m_SkillIcon.spriteName = tabBase.Icon;
        //取消品质
        //m_QualityPic.spriteName = FellowTool.GetChatFellowElementSkillQualityPic(skillid);
        m_TallentBgPic.gameObject.SetActive(false);
      //  m_LevelLabel.text = FellowTool.GetFellowElementLevelText(skillid);
    }
}
