/********************************************************************
	created:	2014/09/12
	created:	21:1:2014   16:55
	filename: 	BiographyController.cs
	author:		于凤磊
	
	purpose:	秘籍界面控制器
*********************************************************************/
using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame;
using Games.LogicObj;
using GCGame.Table;
public class BiographyController : UIControllerBase<BiographyController>
{
    public UIPanel m_CurDragPanel;

    public GameObject m_Biographylist;

    public GameObject m_ObjBiographyItem;

    public GameObject m_BtnClose;

    void Awake()
    {
        SetInstance(this);
    }

    private BiographyItemLogic m_itemLogic = null;
    private GameObject m_curItem = null;
    void Start()
    {
        int itemcount = TableManager.GetBiographyItem().Count;
        for (int i = 0; i < itemcount; i++)
        {
            m_curItem = Utils.BindObjToParent(m_ObjBiographyItem, m_Biographylist);
            if (m_curItem != null)
            {
                m_itemLogic = m_curItem.GetComponent<BiographyItemLogic>();
                if (m_itemLogic != null)
                {
                    m_itemLogic.SetData(i);
                }
                else
                {
                    LogModule.ErrorLog("BiographyController create BiographyItem error");
                }
            }
            else
            {
                LogModule.ErrorLog("BiographyController create GameObject error");
            }
        }

        if (m_Biographylist != null)
        {
            m_Biographylist.GetComponent<UIGrid>().Reposition();
            SetCurrentPanelPosition();
        }
        else
        {
            LogModule.ErrorLog("BiographyController m_Biographylist repositionNow error");
        }

#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.TIPS_UI);
#endif
  
    }

    private Vector3 m_moveRelativeVec = Vector3.zero;

    void SetCurrentPanelPosition()
    {

        int currentIndex = FindCurLevelIndex();
        //currentIndex = 5;
        //Vector3 moveRelativeVec = new Vector3((-currentIndex) * 300f, m_Biographylist.gameObject.transform.position.y, 0);
		UIGrid gridForOff = this.gameObject.GetComponent<UIGrid>();
		float offset = (gridForOff != null)?(gridForOff.cellWidth):(420f);
		m_moveRelativeVec = new Vector3((-currentIndex*offset), 0, 0);

        if (m_moveRelativeVec != Vector3.zero && m_CurDragPanel != null)
        {
            NGUITools.SetActive(m_CurDragPanel.gameObject,false);
        }
        
       
    }

    int FindCurLevelIndex()
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;

        int playerLevel = 0;

        if(mainPlayer != null)
        {
            playerLevel = mainPlayer.BaseAttr.Level;
        }

        int indexCount = 0;

        Tab_BiographyItem item = null;
        foreach (int key in TableManager.GetBiographyItem().Keys)
        {
            item = TableManager.GetBiographyItemByID(key, 0);
            if (item == null)
            {
                continue;
            }
            if (playerLevel <= item.EndLevel && playerLevel >= item.BeginLevel)
            {
                break;
            }

            indexCount ++;
        }

        return indexCount;
    }

    void Update()
    {
        if (m_moveRelativeVec != Vector3.zero)
        {
            if(m_CurDragPanel == null)
                return;

            NGUITools.SetActive(m_CurDragPanel.gameObject, true);

            UIDraggablePanel moveDragPanel = m_CurDragPanel.GetComponent<UIDraggablePanel>();

            if (moveDragPanel != null)
            {
                //moveDragPanel.currentMomentum = m_moveRelativeVec;
                moveDragPanel.MoveRelative(m_moveRelativeVec);
            }

            m_moveRelativeVec = Vector3.zero;
        } 
    }

    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.Biography);
    }

	public void CombatNumClick()
	{
		//UIManager.ShowUI(UIInfo.CheckPowerRoot);
		CG_REQ_POWERUP packet = (CG_REQ_POWERUP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_POWERUP);
        packet.Type = (int)BePowerData.BePowerType.BPTDEFINE_GEM;
		packet.Flag = 1;
		packet.SendPacket();
	}

}
