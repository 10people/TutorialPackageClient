using UnityEngine;
using System.Collections;
using System;
using Games.Fellow;

public class ChatInfoSelectLinkFellowItemLogic : ChatInfoSelectLinkItemLogic
{
    public UISprite m_fellowIcon;
    public UILabel m_fellowName;
    public UILabel m_combatValue;
    public UILabel m_level;
    public UISprite m_fellowQuality;
    private UInt64 m_fellowGuid;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public override void Init(ChatInfoSelectLinkLogic.Data data, int index)
    {
        base.Init(data, index);

        this.name = index.ToString();

         FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (container == null)
        {
            return;
        }
        Fellow fellow = container.GetFellowByGuid(data.guid);

        if (null == fellow)
        {
            return;
        }

        m_fellowIcon.spriteName = fellow.GetIcon();
        m_fellowName.text = fellow.Name;
        m_level.text = fellow.Level.ToString();
        m_combatValue.text = fellow.GetCombatValue().ToString();
        m_fellowQuality.spriteName = FellowTool.GetFellowQualityFrame(fellow.Quality);
        this.m_fellowGuid = data.guid;
    }

    public void OnClickItem()
    {
        if (ChatInfoSelectLinkLogic.M_OPEN_TYPE == ChatInfoSelectLinkLogic.OPEN_TYPE.PROPAGATE)
        {
            if (ChatInfoLogic.Instance() != null)
            {
                ChatInfoLogic.Instance().InsertFellowLinkForProText(m_fellowGuid);
            }
        }
        else if (ChatInfoSelectLinkLogic.M_OPEN_TYPE == ChatInfoSelectLinkLogic.OPEN_TYPE.NORMAL)
        {
            if (ChatInfoLogic.Instance() != null)
            {
                ChatInfoLogic.Instance().InsertFellowLinkText(m_fellowGuid);
            }
        }
        
    }
}
