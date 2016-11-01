using UnityEngine;
using System.Collections;
using GCGame.Table;

public class GuildRuleItemLogic : MonoBehaviour {

    public UILabel m_TitleLabel;
    public UILabel m_ContentLabel;
    public UISprite m_Background;
    public BoxCollider m_SelfBox;

	public void Init(Tab_GuildRule tabRule)
    {
        m_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{10378}", tabRule.Id);
        m_ContentLabel.text = tabRule.RuleContent;
        m_Background.height = (int)(m_TitleLabel.printedSize.y + m_ContentLabel.printedSize.y + 30);    // 最后加的30是微调
        m_SelfBox.size = new Vector3(m_Background.width, m_Background.height, 0);
        m_SelfBox.center = new Vector3(m_Background.width / 2, -m_Background.height / 2, 0);
    }
}
