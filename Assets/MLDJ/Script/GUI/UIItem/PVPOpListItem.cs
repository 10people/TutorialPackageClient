using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;

public class PVPOpListItem : MonoBehaviour {

    public UILabel LabelName;
    public UILabel LabelLevel;
    public UILabel LabelPower;
    public UILabel LabelProfession;
    public UILabel LabelRange;
    public GameObject SprHightlight;
    public UITexture[] ProfessionSprites;

	private PVPFindOpWindow m_parent;
	private PVPData.OpponentInfo m_data;


	public static PVPOpListItem CreateItem(GameObject grid, GameObject resObj, string name, PVPFindOpWindow parent, PVPData.OpponentInfo data)
	{
		GameObject curItem = Utils.BindObjToParent(resObj, grid);
        if (null != curItem)
        {
            PVPOpListItem curItemComponent = curItem.GetComponent<PVPOpListItem>();
            if (null != curItemComponent)
                curItemComponent.SetData(parent, data);
            return curItemComponent;
        }

        return null;
	}

	public void SetData(PVPFindOpWindow parent, PVPData.OpponentInfo data)
	{
		m_parent = parent;
		LabelName.text = data.name;
		LabelLevel.text = data.level.ToString();
		LabelPower.text = data.fightPower.ToString();
        LabelProfession.text = Utils.GetProfessionNameByType((int)data.profession); //Utils.GetDicByID(CharacterDefine.PROFESSION_DICNUM[(int)data.profession]);//data.profession.ToString();
		LabelRange.text = data.range.ToString();
        m_data = data;

        int profession = (int)data.profession;
        for (int i = 0; i < ProfessionSprites.Length; i++)
        {
            ProfessionSprites[i].gameObject.SetActive(profession == i);
        }
    }

	public PVPData.OpponentInfo GetData()
	{
		return m_data;
	}

	void OnItemClick()
	{
		if(null != m_parent) m_parent.OnOpItemClick(this);
	}

    public void EnableHighlight(bool bEnable)
    {
        SprHightlight.SetActive(bEnable);
    }
    //================================================
    public void OnClickChallenge()
    {
        if (GameManager.gameManager.RunningScene == (int)GameDefine_Globe.SCENE_DEFINE.SCENE_PKSCENE)
        {
            return;
        }

        CG_REQ_CHALLENGE packet = (CG_REQ_CHALLENGE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_CHALLENGE);
        packet.SetOpponentGuid(m_data.guid);
        packet.SendPacket();
    }
	//====================================================
	public GameObject m_TiaozhanObj ;
	public void NewGuildPvp()
	{
		NewPlayerGuidLogic.OpenWindow(m_TiaozhanObj, 200, 70, "", "left", 0, true, true);
	}
}
