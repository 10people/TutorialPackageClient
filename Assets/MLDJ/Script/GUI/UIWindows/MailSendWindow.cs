using UnityEngine;
using System.Collections;
using System.Text;
using GCGame;
using Games.GlobeDefine;

public class MailSendWindow : MonoBehaviour {

	public GameUIInput inputText;
	public UILabel labelReceiverName;
    public MailWindow TopMailWindow;
    public UILabel LabelInput;
    private ulong m_curReceiver;

    public UILabel BtnLabelSendMail;
   // public UILabel BtnLabelReceiver;

    public RelationNamePopController FriendNameWindow;

	// Use this for initialization
	void Awake () 
    {
        BtnLabelSendMail.text = Utils.GetDicByID(1132);
       // BtnLabelReceiver.text = Utils.GetDicByID(1131);
        labelReceiverName.text = Utils.GetDicByID(4063);
        FriendNameWindow.SetDelegate(SetReceiver);
        FriendNameWindow.SetIsPopWindow(false);
	}
	

    void OnEnable()
    {
        LabelInput.text = Utils.GetDicByID(4065);
        FriendNameWindow.ResetItem();
        CleanData();
    }
    void OnDisable()
    {
        CleanData();
    }

    public void SetReceiver(System.UInt64 receiverID, string recevierName)
    {
        m_curReceiver = receiverID;
        labelReceiverName.text = recevierName;
    }
	void OnChooseReceiverClick()
	{
        UIManager.ShowUI(UIInfo.RelationNamePopWindow, OnChooseReceiver);
        
	}

    void OnChooseReceiver(bool bSuccess, object param)
    {
        RelationNamePopController.Instance().SetDelegate(SetReceiver);
    }
	
    
	void OnSendMailClick()
	{
        if (string.IsNullOrEmpty(labelReceiverName.text) || m_curReceiver <= 0)
        {
            // 请输入收件人姓名。
            MessageBoxLogic.OpenOKBox(1138, 1000);
            return;
        }

        if (string.IsNullOrEmpty(inputText.value))
        {
            // 请输入收件人姓名。
            MessageBoxLogic.OpenOKBox(1141,1000);
            return;
        }

       
        if (Encoding.UTF8.GetBytes(inputText.value).Length > 180)
        {
            // 邮件正文不能超过60个字符。
            MessageBoxLogic.OpenOKBox(1259, 1000);
            return;
        }


        if (null != Utils.GetStrFilter(inputText.value, (int)Games.GlobeDefine.GameDefine_Globe.STRFILTER_TYPE.STRFILTER_CHAT))
        {
            // 邮件包含非法字符
            MessageBoxLogic.OpenOKBox(1278, 1000);
            return;
        }

        CG_MAIL_SEND packetSendMail = (CG_MAIL_SEND)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MAIL_SEND);
        packetSendMail.SetReceiverGuid(m_curReceiver);
        packetSendMail.SetTextContent(inputText.value);
        packetSendMail.SendPacket();
        CleanData();
	}

    void CleanData()
    {
        m_curReceiver = 0;
        labelReceiverName.text = "";
        inputText.value = "";
    }
}
