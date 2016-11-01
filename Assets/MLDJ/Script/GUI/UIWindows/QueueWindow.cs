/********************************************************************
	created:	2013/12/25
	created:	25:12:2013   10:49
	filename: 	QueueWindow.cs
	author:		王迪
	
	purpose:	排队界面
*********************************************************************/

using UnityEngine;
using System.Collections;
using GCGame.Table;

public class QueueWindow : UIControllerBase<QueueWindow> {

    public UILabel labelTip;
    public GameObject FirstChild;
    public GameObject objLeaveBtn;      // 退出排队按钮

    enum ButtonState
    {
        STATE_UNCLICK,
        STATE_COUNT,
        STATE_TIMEOUT,
    };

    
    private float m_updateTimer = 3.0f;          // 更新定时器
	void Awake()
    {
        SetInstance(this);
        m_updateTimer = 3.0f;
	}

    void Start()
    {
        
        UpdateQueueInfo();
    }

	void Update ()
    {
        if (m_updateTimer > 0)
        {
            m_updateTimer -= Time.deltaTime;
            if (m_updateTimer <= 0)
            {
                if (LoginData.m_curQueueState == GC_LOGIN_QUEUE_STATUS.QUEUESTATUS.QUEUING)
                {
                    if(LoginUILogic.Instance() != null)
                    {
                        objLeaveBtn.SetActive(true);
                    }
                    FirstChild.SetActive(true);
                    PlatformHelper.SendUserAction(UserBehaviorDefine.StartQueue);
                }
                else
                {
                    UIManager.CloseUI(UIInfo.QueueWindow);
                }
            }
        }
	}

    public void UpdateQueueInfo()
    {
        if (LoginData.m_curQueueNum >= LoginData.QueueDefaultNum)
        {
            labelTip.text = StrDictionary.GetClientDictionaryString("3285");
        }
        else
        {
            labelTip.text = StrDictionary.GetClientDictionaryString("#{2172}", LoginData.m_curQueueNum + 1);
        }
    }

    void OnLeaveQueueClick()
    {
        if (ServerChooseController.Instance() != null)
        {
            ServerChooseController.Instance().SwitchWindow((int)ServerChooseController.Window.ServerList);
            UIManager.CloseUI(UIInfo.QueueWindow);
            NetWorkLogic.GetMe().DisconnectServer();
        }
        
    }

}
