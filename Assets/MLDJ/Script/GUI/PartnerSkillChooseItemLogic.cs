using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Fellow;
using Games.GlobeDefine;

public class PartnerSkillChooseItemLogic : MonoBehaviour {

    public UISprite m_SkillIcon;
    public UILabel m_NameLabel;
    public UISprite m_ElementPic;
    public UILabel m_ElementLabel;

    Tab_CommonItem mBook = null;


    public void Init(Tab_CabalFellowElementSkillBook book)
    {
        Tab_CommonItem bookShowInfo = TableManager.GetCommonItemByID(book.Id, 0);
        mBook = bookShowInfo;
        m_NameLabel.text = bookShowInfo.Name;
        m_SkillIcon.spriteName = bookShowInfo.Icon;
        m_ElementPic.spriteName = FellowTool.GetFellowElementPic(book.ElementAttr);
        m_ElementLabel.text = FellowTool.GetFellowElementText(book.ElementAttr);
    }

    void OnChooseClick()
    {
        if (PartnerFrameLogic_Skill.Instance() != null)
        {
            PartnerFrameLogic_Skill.Instance().OnSkillChooseOKClick(mBook);
        }
    }
}
