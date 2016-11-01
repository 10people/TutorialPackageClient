using UnityEngine;
using System.Collections;
using System;
using GCGame;

public class MailWindow : MonoBehaviour {
	
    public TabController m_TabController;
	//private bool m_bRecvWindow = true;

    public UILabel BtnLabelRecvBox;
    public UILabel BtnLabelSendBox;
	public GameObject SendMailObj ;
    void Awake()
    {
        BtnLabelRecvBox.text = Utils.GetDicByID(1124);
        BtnLabelSendBox.text = Utils.GetDicByID(1125);
    }

	void OnEnable()
	{
		//m_bRecvWindow = false;
        //m_TabController.ChangeTab("BtnRecvBox");
		SendMailObj.SetActive(false);
	}
	

    public void ReplayMail(UInt64 receiver, string recevierName)
    {
        //GameObject sendWindow = m_TabController.ChangeTab("BtnSendBox");
		SendMailObj.SetActive (true);
		if (null != SendMailObj && null != SendMailObj.GetComponent<MailSendWindow>())
			SendMailObj.GetComponent<MailSendWindow>().SetReceiver(receiver, recevierName);
    }

	public void showSendMailObj()
	{
        if (GameManager.gameManager.PlayerDataPool.FriendList.GetRelationNum() == 0)
        {
            MessageBoxLogic.OpenOKBox(11164);
            return;
        }
		SendMailObj.SetActive(true);
	}

	public void hideSendMailObj()
	{
		SendMailObj.SetActive(false);
	}
}
