using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using Module.Log;
using GCGame;
using GCGame.Table;

public class PlayerFindWindow : MonoBehaviour
{
    private static PlayerFindWindow m_Instance = null;
    public static PlayerFindWindow Instance()
    {
        return m_Instance;
    }

    public GameObject m_PlayerFindListGrid;         //列表控件
    public UIInput m_NameInput;                     //姓名输入控件
    public UIImageButton m_AddFreindButton;
    public UIImageButton m_TrailButton;

    private PlayerFindItemLogic m_SelectItem;

    void Awake()
    {
        m_Instance = this;
    }

    void OnEnable()
    {
        GUIData.delPlayerFindResult += UpdatePlayerFindResult;
        ClearPleyrFindItem();
        SetSelectPlayerItem(null);
        m_NameInput.defaultText = StrDictionary.GetClientDictionaryString("#{4051}");
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    void OnDisable()
    {
        GUIData.delPlayerFindResult -= UpdatePlayerFindResult;
    }
    
    //收到服务器返回结果之后，更新玩家查找结果
    public void UpdatePlayerFindResult(GC_FINDPLAYER packet)
    {
        if (packet.HasRet)
        {
            if (packet.Ret == 1)
            {
                GUIData.AddNotifyData("#{5128}");
                return;
            }
            else if (packet.Ret == 2)
            {
                GUIData.AddNotifyData("#{2745}");
                return;
            }
            UIManager.LoadItem(UIInfo.PlayerFindItem, OnLoadPlayerFindItem, packet);
        }
        else
        {
            UIManager.LoadItem(UIInfo.PlayerFindItem, OnLoadPlayerFindItem, packet);
        }
    }

    void OnLoadPlayerFindItem(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("can not load player find item");
            return;
        }

        GC_FINDPLAYER packet = param as GC_FINDPLAYER;
        //清空表格内容
        ClearPleyrFindItem();

        //填充数据
        int idCount = packet.guidCount;
        for (int i = 0; i < idCount; i++)
        {
            Relation player = new Relation();
            player.Guid = packet.GetGuid(i);
            player.Name = packet.GetName(i);
            player.Level = packet.GetLevel(i);
            player.Profession = packet.GetProf(i);
            player.CombatNum = packet.GetCombat(i);
			//player.TimeInfo = packet.GetTimeInfo(i);

            //GameObject newPlayerFindItem = Utils.BindObjToParent(resItem, m_PlayerFindListGrid, i.ToString());
            //newPlayerFindItem.GetComponent<PlayerFindItemLogic>().InitPlayerFindItem(player);
            PlayerFindItemLogic PlayerItem = PlayerFindItemLogic.CreateItem(m_PlayerFindListGrid, resItem, i.ToString(), this);
            if (PlayerItem == null)
            {
                continue;
            }
            PlayerItem.InitPlayerFindItem(player);
            if (m_SelectItem == null)
            {
                SetSelectPlayerItem(PlayerItem);
            }
        }

        m_PlayerFindListGrid.GetComponent<UIGrid>().repositionNow = true;
        m_PlayerFindListGrid.GetComponent<UITopGrid>().recenterTopNow = true;
    }

    //点击玩家查找按钮
    void OnClickSearch()
    {
        if (null == m_NameInput)
        {
            return;
        }

        //清空表格内容
        ClearPleyrFindItem();

        //向服务器发送超找好友包
        CG_FINDPLAYER msg = (CG_FINDPLAYER)PacketDistributed.CreatePacket(MessageID.PACKET_CG_FINDPLAYER);
        msg.Guid = GlobeVar.INVALID_GUID;
        msg.Name = m_NameInput.value;
        msg.SendPacket();
    }

    //清空列表框
    public void ClearPleyrFindItem()
    {
        if (null == m_PlayerFindListGrid)
        {
            return;
        }

        //PlayerFindItemLogic[] item = m_PlayerFindListGrid.GetComponentsInChildren<PlayerFindItemLogic>();
        //for (int i = 0; i < item.Length; ++i)
        //{
        //    Destroy(item[i].gameObject);
        //}

        //m_PlayerFindListGrid.transform.DetachChildren();
        Utils.CleanGrid(m_PlayerFindListGrid);
        SetSelectPlayerItem(null);

    }

    public void OpenNearByTab()
    {

    }

    void SetSelectPlayerItem(PlayerFindItemLogic SelectItem)
    {
        if (SelectItem == null)
        {
            if ( m_AddFreindButton !=null)
            {
                m_AddFreindButton.isEnabled = false;
            }
            if (m_TrailButton != null)
            {
                m_TrailButton.isEnabled = false;
            }
            m_SelectItem = SelectItem;
            return;
        }
        if ( m_SelectItem != null)
        {
            m_SelectItem.OnCancelSelectItem();
        }
        m_SelectItem = SelectItem;
        m_SelectItem.OnSelectItem();
        if (m_AddFreindButton != null)
        {
            m_AddFreindButton.isEnabled = true;
        }
        if (m_TrailButton != null)
        {
            m_TrailButton.isEnabled = true;
        }
    }

    public void OnClickPlayerItem(PlayerFindItemLogic SelectItem)
    {
        if (SelectItem == null)
        {
            LogModule.ErrorLog("OnClickPlayerItem::SelectItem id null");
            return;
        }
        SetSelectPlayerItem(SelectItem);
    }

    public void OnClickAddFriend()
    {
        //检查GUID合法性
        if (m_SelectItem == null)
        {
            GUIData.AddNotifyData("#{2751}");
            return;
        }
        if (m_SelectItem.Guid == GlobeVar.INVALID_GUID)
        {
            GUIData.AddNotifyData("#{2751}");
            return;
        }
        //是否已经是好友
        if (true == GameManager.gameManager.PlayerDataPool.FriendList.IsExist(m_SelectItem.Guid))
        {
            GUIData.AddNotifyData("#{2750}");
            return;
        }

        //添加好友
        Singleton<ObjManager>.GetInstance().MainPlayer.ReqAddFriend(m_SelectItem.Guid);
    }

    void OnClickTrail()
    {
        //检查GUID合法性
        if (m_SelectItem == null)
        {
            GUIData.AddNotifyData("#{2750}");
            return;
        }
        if (m_SelectItem.Guid == GlobeVar.INVALID_GUID)
        {
            GUIData.AddNotifyData("#{2750}");
            return;
        }
        if (m_SelectItem.Guid == Singleton<ObjManager>.Instance.MainPlayer.GUID)
        {
            return;
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqTrailPlayer(m_SelectItem.Guid);
    }
}
