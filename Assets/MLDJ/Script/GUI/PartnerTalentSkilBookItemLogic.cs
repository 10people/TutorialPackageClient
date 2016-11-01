using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;

public class PartnerTalentSkilBookItemLogic : MonoBehaviour {

    public ItemSlotLogic m_ItemSlot;
    public UILabel m_NameLabel;
    public UILabel m_OwnCountLabel;
    public UILabel m_UseCountLabel;
    public GameObject m_MinusButton;
    public GameObject m_AddButton;

    private int m_SkillBookId = GlobeVar.INVALID_ID;
    public int SkillBookId
    {
        get { return m_SkillBookId; }
        set { m_SkillBookId = value; }
    }

    private int m_UseCount = 0;
    public int UseCount
    {
        get { return m_UseCount; }
        set { m_UseCount = value; }
    }

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void Init(int skillbookid, int defaultcount = 0)
    {
        Tab_CommonItem tabItem = TableManager.GetCommonItemByID(skillbookid, 0);
        if (tabItem == null)
        {
            return;
        }

        Tab_CabalFellowTallentSkillBook tabBook = TableManager.GetCabalFellowTallentSkillBookByID(skillbookid, 0);
        if (tabBook == null)
        {
            return;
        }

        m_ItemSlot.InitInfo_Item(skillbookid, ItemSlotLogic.OnClickOpenTips);
        m_NameLabel.text = tabItem.Name;
        m_OwnCountLabel.text = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(skillbookid).ToString();
        m_UseCountLabel.text = defaultcount.ToString();

        m_MinusButton.SetActive(true);
        m_AddButton.SetActive(true);
        if (defaultcount <= 0)
        {
            m_MinusButton.SetActive(false);
        }
        else if (defaultcount >= GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(skillbookid))
        {
            m_AddButton.SetActive(false);
        }

        m_SkillBookId = skillbookid;
        m_UseCount = defaultcount;
    }

    void OnMinusButtonClick()
    {
        if (m_UseCount <= 0)
        {
            return;
        }

        m_UseCount -= 1;
        m_UseCountLabel.text = m_UseCount.ToString();

        if (m_UseCount == 0)
        {
            m_MinusButton.SetActive(false);
        }
        if (m_UseCount < GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(m_SkillBookId))
        {
            m_AddButton.SetActive(true);
        }
    }

    void OnAddButtonClick()
    {
        if (m_UseCount >= GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(m_SkillBookId))
        {
            return;
        }

        m_UseCount += 1;
        m_UseCountLabel.text = m_UseCount.ToString();

        if (m_UseCount == GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(m_SkillBookId))
        {
            m_AddButton.SetActive(false);
        }
        if (m_UseCount > 0)
        {
            m_MinusButton.SetActive(true);
        }
    }
}
