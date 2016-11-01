using UnityEngine;
using System.Collections;
using GCGame.Table;

public class SystemAndAutoFightLogic : MonoBehaviour {
    public UISprite m_AutoFightRemindPoint;
    private static SystemAndAutoFightLogic m_Instance = null;
    public static SystemAndAutoFightLogic Instance()
    {
        return m_Instance;
    }

    public TabController m_TabController;

    void Awake()
    {
        m_Instance = this;
		m_TabController.delTabChanged = onTabChange;
        updateRemindPoint();
        Check_NewPlayerGuide();
    }

    void Start()
    {
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.SETTING_UI);
#endif
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.SystemAndAutoFight);

		if( AutoFightLogic.Instance())
		    AutoFightLogic.Instance().AutoFightOK();  

		if(Singleton<ObjManager>.Instance != null)
		  Singleton<ObjManager>.Instance.UpdateHidePlayers();
    }

	//=============================================================
	public GameObject m_System ;
	public GameObject m_AutoFight ;
	public GameObject m_VoiceChat ;

	public void onTabChange(TabButton button)
	{
		m_System.SetActive(false) ;
		m_AutoFight.SetActive(false) ;
		m_VoiceChat.SetActive(false) ;
	
		if (button.name == "Btn1-System")
		{
			m_System.SetActive(true) ;
		}
		else if (button.name == "Btn2-AutoFight")
		{
			m_AutoFight.SetActive(true) ;
		}
		else if (button.name == "Btn3-VoiceChat")
		{
			m_VoiceChat.SetActive(true) ;
		}
	}

    public void updateRemindPoint()
    {
        if (m_AutoFightRemindPoint == null)
        {
            return;
        }
        if (null == PlayerFrameLogic.Instance())
        {
            return;
        }
        if (PlayerFrameLogic.Instance().GetSystemLogicTipCount() > 0)
        {
            m_AutoFightRemindPoint.gameObject.SetActive(true);
        }
        else
        {
            m_AutoFightRemindPoint.gameObject.SetActive(false);
        }
    }

    private int m_NewPlayerGuideFlag_Step = -1;
    public int NewPlayerGuideFlag_Step
    {
        get { return m_NewPlayerGuideFlag_Step; }
        set { m_NewPlayerGuideFlag_Step = value; }
    }

    void Check_NewPlayerGuide()
    {
        if (MenuBarLogic.Instance() == null)
        {
            return;
        }
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 21)
        {
            NewPlayerGuide(0);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }

    public void NewPlayerGuide(int index)
    {
        if (index < 0)
        {
            return;
        }
        m_NewPlayerGuideFlag_Step = index;
        switch (index)
        {
            case 0:
                NewPlayerGuidLogic.OpenWindow(m_TabController.transform.Find("Btn2-AutoFight").gameObject, 270, 110, StrDictionary.GetClientDictionaryString("#{11540}"), "bottom", 0, true, true);
                break;
            case 1:
                NewPlayerGuidLogic.OpenWindow(m_AutoFight, 900, 250,
                    GCGame.Utils.GetDicByID(11541), "bottom", -1, true, true, false, null, null, -0.1f, 0.2f, true, false, () =>
                    {
                        NewPlayerGuide(2);
                    });
                break;
            case 2:
                NewPlayerGuidLogic.OpenWindow(m_AutoFight, 900, 250,
                    GCGame.Utils.GetDicByID(11542), "top", -1, true, true, false, null, null, -0.1f, -0.4f, true, false, () =>
                    {
                        NewPlayerGuide(3);
                    });
                break;
            case 3:
                NewPlayerGuidLogic.OpenWindow(AutoFightLogic.Instance().m_RightHightLight.transform.parent.gameObject, 270, 110, "", "top", 0, true, true);
                break;
            case 4:
                NewPlayerGuidLogic.OpenWindow(m_AutoFight, 900, 300,
                     GCGame.Utils.GetDicByID(11543), "bottom", -1, true, true, false, null, null, -0.1f, 0.2f, true, false, () =>
                     {
                         NewPlayerGuide(5);
                     });
                break;
            case 5:
                m_NewPlayerGuideFlag_Step = -1;
                NewPlayerGuidLogic.CloseWindow();
                break;
            default:
                break;
        }
    }
}
