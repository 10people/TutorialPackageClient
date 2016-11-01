using UnityEngine;
using System.Collections;
using GCGame;
using Module.Log;

public class MailListItem : MonoBehaviour {

	public UISprite SprState;     // 状态
	public UILabel LabelSender;
	//public UILabel labelText;  // 邮件名
	public UILabel labelTime;
    public GameObject SprHightlight;
    public GameObject SprNormal;
   // public GameObject ObjOfficialIcon;
	public UILabel ObjOfficialText;

    private MailRecvWindow m_mailRecvWindow;

	// Use this for initialization
	void Start () {
	
	}


    public static MailListItem CreateItem(GameObject grid, GameObject resObj, string name, MailRecvWindow parent, MailData.UserMail data)
    {
        if (null == data)
        {
            LogModule.ErrorLog("receive mail data null:" + name);
            return null;
        }

        GameObject curItem = Utils.BindObjToParent(resObj, grid, name);
        if (null != curItem)
        {
            MailListItem curItemComponent = curItem.GetComponent<MailListItem>();
            if (null != curItemComponent)
                curItemComponent.SetData(parent, data);
            
            return curItemComponent;
        }

        return null;
    }

    public void SetData(MailRecvWindow parent,  MailData.UserMail data)
    {
        if (null == data)
        {
            return;
        }

        LabelSender.text = data.SenderName;
//         if (data.text.Length > 6)
//         {
//             labelText.text = string.Format("{0}{1}", data.text.Substring(0, 6), "...");
//         }
//         else
//         {
//             labelText.text = data.text;
//         }
       // labelText.text = data.text;
        
        labelTime.text = data.time;
        SprState.gameObject.SetActive((!data.bReaded || data.itemID >= 0 || data.moneyCount > 0));
        m_mailRecvWindow = parent;

       // ObjOfficialIcon.SetActive(data.senderType == GC_MAIL_UPDATE.MailSender.MAILSENDER_SYS);
		if (data.senderType == GC_MAIL_UPDATE.MailSender.MAILSENDER_SYS) 
		{
				ObjOfficialText.text = "官方";
		} 
		else
		{
			ObjOfficialText.text = "" ;
		}
    }

    void OnItemClick()
    {
        if (null != m_mailRecvWindow)
        {
          m_mailRecvWindow.ShowMailItem(this);
        }
        if (RelationLogic.Instance() != null) {
          RelationLogic.Instance().ShowNewEmailBigRed();
        }
    }

    public void EnableHighlight(bool bEnable)
    {
        SprHightlight.SetActive(bEnable);
        SprNormal.SetActive(!bEnable);
    }
    
}
