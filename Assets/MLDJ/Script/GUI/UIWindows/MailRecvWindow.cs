using UnityEngine;
using System.Collections;
using GCGame;
using SPacket.SocketInstance;
using GCGame.Table;
using Module.Log;
using System.Collections.Generic;
using Games.Item;
public class MailRecvWindow : MonoBehaviour {

	public GameObject MailListGrid;
    public GameObject CurMailGroup;

    public UILabel LabelCurMailText;
    public RewardItem CurRewardItem;
    public GameObject BtnReplay;
    public GameObject BtnGetItem;
    public GameObject BtnBtnReport;

    public MailWindow TopMailWindow;
    public GameObject MoneyCountLabel;
    public GameObject MoneyIcon;
    //public UILabel LabelRecvTips;           // 收件箱提示



    public UILabel BtnLabelDelAll;
    public UILabel BtnLabelGetAll;
    public UILabel BtnLabelDelCur;
    public UILabel BtnLabelGetCur;
    public UILabel BtnLabelReply;
    private MailListItem m_curSelectItem = null;
	// Use this for initialization

    private bool m_bFirstUpdate = true;

    private static List<System.UInt64> m_sortMailList = new List<System.UInt64>();
    private GameObject m_curItemResObj = null;     // 缓存的邮件ITEM
    private float m_UpdateTimer = 0;

    void Awake()
    {

        CurRewardItem.delItemClick = OnRewardItemClick;

        BtnLabelDelAll.text = Utils.GetDicByID(1126);
        BtnLabelGetAll.text = Utils.GetDicByID(1127);
        BtnLabelDelCur.text = Utils.GetDicByID(1128);
        BtnLabelReply.text = Utils.GetDicByID(1129);
        BtnLabelGetCur.text = Utils.GetDicByID(1130);
    }
	void Start () {
        m_bFirstUpdate = true;
        InitItems();
	}

    void OnEnable()
    {
        MailData.delMailUpdate += UpdateMailData;
    }

    void OnDisable()
    {
        MailData.delMailUpdate -= UpdateMailData;
    }

    void Update()
    {
        if (m_UpdateTimer > 0)
        {
            m_UpdateTimer -= Time.deltaTime;
            if (m_UpdateTimer <= 0)
            {
                UpdateMailItems();
            }
        }
    }

    // 删除当前邮件
    void OnClickDelCur()
    {
        MailData.UserMail curMail = GetMailByItem(m_curSelectItem);
        if (null == curMail)
        {
            return;
        }

        if (curMail.itemID > 0 || curMail.moneyCount > 0)
        {
            //仍有未提取的附件或钱币，无法删除？
            MessageBoxLogic.OpenOKBox(1135, 1000);
            return;
        }

        DoDeleteCurMail();
    }

    void DoDeleteCurMail()
    {
        MailData.UserMail curMail = GetMailByItem(m_curSelectItem);
        if (null == curMail)
        {
            LogModule.ErrorLog("can not find cur select item");
            return;
        }
        CG_MAIL_OPERATION packetDelMail = (CG_MAIL_OPERATION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MAIL_OPERATION);
        packetDelMail.SetOperationType((int)CG_MAIL_OPERATION.MailOperation.OPERATION_DELETE);
        packetDelMail.SetMailGuid(curMail.key);
        packetDelMail.SendPacket();
    }

	void OnClickDelAll()
	{
        //确定要将所有已读邮件删除吗？
        MessageBoxLogic.OpenOKCancelBox(1137, 1000, TryDeleteAll);
	}

    void TryDeleteAll()
    {
        DoDeleteAll();
    }

    void DoDeleteAll()
    {
        foreach (ulong mailKeys in MailData.UserMailMap.Keys)
        {
            MailData.UserMail curMail = MailData.UserMailMap[mailKeys];
            if (curMail.bReaded && !(curMail.itemID >= 0 || curMail.moneyCount > 0))
            {
                CG_MAIL_OPERATION packetDelMail = (CG_MAIL_OPERATION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MAIL_OPERATION);
                packetDelMail.SetOperationType((int)CG_MAIL_OPERATION.MailOperation.OPERATION_DELETE);
                packetDelMail.SetMailGuid(mailKeys);
                packetDelMail.SendPacket();
            }
        }
    }

    void OnClickGetCur()
    {
        MailData.UserMail curMail = GetMailByItem(m_curSelectItem);
        if (null == curMail)
        {
            return;
        }

		if (curMail.itemID > 0 || curMail.moneyCount > 0) 
		{
						CG_MAIL_OPERATION packetDelMail = (CG_MAIL_OPERATION)PacketDistributed.CreatePacket (MessageID.PACKET_CG_MAIL_OPERATION);
						packetDelMail.SetOperationType ((int)CG_MAIL_OPERATION.MailOperation.OPERATION_GETITEM);
						packetDelMail.SetMailGuid (curMail.key);
						packetDelMail.SendPacket ();

				} 
		else {
			OnClickDelCur();
		}
    }

	void OnClickGetAll()
	{
        foreach (ulong mailKeys in MailData.UserMailMap.Keys)
        {
            CG_MAIL_OPERATION packetDelMail = (CG_MAIL_OPERATION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MAIL_OPERATION);
            packetDelMail.SetOperationType((int)CG_MAIL_OPERATION.MailOperation.OPERATION_GETITEM);
            packetDelMail.SetMailGuid(mailKeys);
            packetDelMail.SendPacket();
        }
	}

    void OnClickReply()
    {
        MailData.UserMail curMail = GetMailByItem(m_curSelectItem);
        if (null == curMail)
        {
            return;
        }

        if (curMail.senderType == GC_MAIL_UPDATE.MailSender.MAILSENDER_SYS)
        {
            return;
        }

        TopMailWindow.ReplayMail(curMail.SenderID, curMail.SenderName);
    }

    void InitItems()
    {
        UIManager.LoadItem(UIInfo.MailListItem, OnLoadItem);
    }

    void OnLoadItem(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("load mail resItem fail");
            return;
        }

        m_curItemResObj = resItem;

        // 按照已读未读排序，已读未读分流后按照时间由近到远排列
//        int m_curUnreadMailCount = 0;
        m_sortMailList.Clear();

		SortedDictionary<int, ulong> tempListUnread = new SortedDictionary<int, ulong>(new MySort());
		SortedDictionary<int, ulong> tempListReaded = new SortedDictionary<int, ulong>(new MySort());

//		int spcialkey_unread = 1;
//		int spcialket_readed = 1;
        foreach (System.UInt64 key in MailData.UserMailMap.Keys)
        {
            if (!MailData.UserMailMap[key].bReaded)
            {
//				if(tempListUnread.ContainsKey(-MailData.UserMailMap[key].sortTime))
//				{
//					tempListUnread.Add(-MailData.UserMailMap[key].sortTime - spcialkey_unread++,key);
//				}
//				else
//				{
					tempListUnread.Add(-MailData.UserMailMap[key].sortTime,key);
//				}
            }
            else
            {
//				if(tempListReaded.ContainsKey(-MailData.UserMailMap[key].sortTime))
//				{
//					tempListReaded.Add(-MailData.UserMailMap[key].sortTime - spcialket_readed++,key);
//				}
//				else
//				{
					tempListReaded.Add(-MailData.UserMailMap[key].sortTime,key);
//				}

            }
        }

		foreach (var item in tempListUnread) 
		{
			m_sortMailList.Add(item.Value);
		}
		foreach(var item in tempListReaded)
		{
			m_sortMailList.Add(item.Value);
		}

        

        UpdateMailItems();
        
    }

    public void UpdateMailData(MailData.MailUpdateType curUpdateType, System.UInt64 curKey)
    {
        switch (curUpdateType )
        {
            case MailData.MailUpdateType.ADD:
                {
                    m_sortMailList.Insert(0, curKey);
                }
                break;
            case MailData.MailUpdateType.DEL:
                {
                    m_sortMailList.Remove(curKey);
                    if (MailListGrid != null) {
                      UITopGrid utg = MailListGrid.GetComponent<UITopGrid>();
                      if (utg != null) {
                        utg.recenterTopNow = true;
                      }
                    }
                }
                break;
            default:
                break;
        }
        m_UpdateTimer = 0.5f;
    }

    void UpdateMailItems()
    {
        if (null == m_curItemResObj)
        {
            return;
        }

        // 记录上次正在操作的邮件，重新加载时直接选中
        string lastKey = null;
        if (null != m_curSelectItem)
        {
            lastKey = m_curSelectItem.gameObject.name;
        }

        m_curSelectItem = null;
        Utils.CleanGrid(MailListGrid);
        for (int i = 0; i < m_sortMailList.Count; i++)
        {
            System.UInt64 curKey = m_sortMailList[i];
            if (!MailData.UserMailMap.ContainsKey(curKey))
            {
                continue;
            }
            MailListItem curItem = MailListItem.CreateItem(MailListGrid, m_curItemResObj, curKey.ToString(), this, MailData.UserMailMap[curKey]);
            if (null == curItem)
            {
                continue;
            }
            if (null == m_curSelectItem && curKey.ToString() == lastKey)
            {
                ShowMailItem(curItem);
            }
        }

        MailListGrid.GetComponent<UIGrid>().Reposition();
        //MailListGrid.GetComponent<UITopGrid>().Recenter(m_bFirstUpdate);
        m_bFirstUpdate = false;

        if (null == m_curSelectItem && MailListGrid.transform.childCount > 0)
        {
            ShowMailItem(MailListGrid.transform.GetChild(0).GetComponent<MailListItem>());
        }

        CurMailGroup.SetActive(null != m_curSelectItem);
        if (RelationLogic.Instance() != null) {
          RelationLogic.Instance().ShowNewEmailBigRed();
        }
        // 邮件上限提示
       // LabelRecvTips.text = StrDictionary.GetClientDictionaryString("#{1252}", MailData.UserMailMap.Count);
    }

    public void ShowMailItem(MailListItem curItem)
    {
        if (null == curItem) return;
        if (m_curSelectItem == curItem) return;

        if (null != m_curSelectItem)
        {
            m_curSelectItem.EnableHighlight(false);
        }

        m_curSelectItem = curItem;
		m_curSelectItem.gameObject.SetActive (true);
        m_curSelectItem.EnableHighlight(true);
	
        MailData.UserMail curMail = GetMailByItem(curItem);
        if (null == curMail)
        {
            return;
        }

		m_playerName.text = curMail.SenderName;
        bool bHaveItem = false;
        LabelCurMailText.text = StrDictionary.GetClientString_WithNameSex(curMail.text);//curMail.text;
        if (curMail.itemID >= 0)
        {
            CurRewardItem.SetData(curMail.itemID,curMail.itemCount);
            CurRewardItem.gameObject.SetActive(true);
            bHaveItem = true;
        }
        else
        {
            CurRewardItem.gameObject.SetActive(false);
        }

        if (curMail.moneyCount > 0)
        {
            MoneyCountLabel.SetActive(true);
			MoneyIcon.SetActive(true);
			m_MoneyBack.gameObject.SetActive(true);
            MoneyCountLabel.GetComponent<UILabel>().text = curMail.moneyCount.ToString();
            if (curMail.moneyType == 0)
            {
                MoneyIcon.GetComponent<UISprite>().spriteName = "jinbi";
            }
            else if (curMail.moneyType == 2)
            {
                MoneyIcon.GetComponent<UISprite>().spriteName = "bdyuanbao";
            }
            else
            {
                MoneyIcon.GetComponent<UISprite>().spriteName = "gonghuijifen";
            }
            bHaveItem = true;

        }
        else
        {
            MoneyCountLabel.SetActive(false);
            MoneyIcon.SetActive(false);
			m_MoneyBack.gameObject.SetActive(false);
        }

		if (bHaveItem)
			m_awardText.text = "领奖";
		else
			m_awardText.text = "删除";

        BtnGetItem.SetActive(true);

        BtnReplay.SetActive(curMail.senderType != GC_MAIL_UPDATE.MailSender.MAILSENDER_SYS);
        BtnBtnReport.SetActive(curMail.senderType != GC_MAIL_UPDATE.MailSender.MAILSENDER_SYS);
        if (!curMail.bReaded)
        {
            CG_MAIL_OPERATION packetDelMail = (CG_MAIL_OPERATION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MAIL_OPERATION);
            packetDelMail.SetOperationType((int)CG_MAIL_OPERATION.MailOperation.OPERATION_SETREAD);
            packetDelMail.SetMailGuid(curMail.key);
            packetDelMail.SendPacket();
        }
    }

    MailData.UserMail GetMailByItem(MailListItem curItem)
    {
        if (null == curItem)
        {
            return null;
        }
        System.UInt64 curMailID = 0;
        if (!System.UInt64.TryParse(curItem.gameObject.name, out curMailID))
        {
            LogModule.ErrorLog("can not parse cur mail id:" + curMailID.ToString() + " name : " + curItem.gameObject.name);
            CurMailGroup.SetActive(false);
            return null;
        }

        if (!MailData.UserMailMap.ContainsKey(curMailID))
        {
            LogModule.ErrorLog("can not find cur mail id:" + curMailID.ToString());
            CurMailGroup.SetActive(false);
            return null;
        }

        return MailData.UserMailMap[curMailID];
    }

    void OnRewardItemClick(RewardItem curItem)
    {
        if (null == m_curSelectItem)
        {
            return;
        }

        MailData.UserMail curUserMail = GetMailByItem(m_curSelectItem);

        if(null == curUserMail)
        {
            return;
        }

        GameItem gameItem = new GameItem();
        gameItem.DataID = curUserMail.itemID;
        if (gameItem.IsEquipMent())
        {

            EquipTooltipsLogic.ShowEquipTooltip(gameItem,EquipTooltipsLogic.ShowType.Info);
        }
        else
        {
            ItemTooltipsLogic.ShowItemTooltip(gameItem, ItemTooltipsLogic.ShowType.Info);
        }
    }
    void OnClickReport()
    {
        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5449}"), "", OnReportOK, OnReportCancel);
    }
    public void OnReportOK()
    {       
        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_COMPLAIN))
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{5483}");
                return;
            }
            MailData.UserMail curMail = GetMailByItem(m_curSelectItem);
            if (null == curMail)
            {
                return;
            }            
            StartCoroutine(Singleton<ObjManager>.GetInstance().MainPlayer.SendComplain(curMail.SenderID, curMail.SenderName, curMail.text, 2));
            CG_ADDBLACKLIST msg = (CG_ADDBLACKLIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ADDBLACKLIST);
            msg.Guid = curMail.SenderID;
            msg.SendPacket();
        }
    }
    public void OnReportCancel()
    {

    }
	//=================================================================
	//public GameObject m_MailRecItem ;
	public UILabel m_playerName ;
	public UILabel m_awardText ;
	public UISprite m_MoneyBack ;
}
