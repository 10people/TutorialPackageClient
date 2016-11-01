using UnityEngine;
using System.Collections;
using System.Collections.Generic;


namespace Engine.JoyUI
{
public class JoyControllerLogic : MonoBehaviour {
#if BOBJOYSTICK
#if HUAWEISTICK
    public static readonly KeyCode BTN_A = KeyCode.JoystickButton8;
    public static readonly KeyCode BTN_B = KeyCode.JoystickButton9;
    public static readonly KeyCode BTN_X = KeyCode.JoystickButton11;
    public static readonly KeyCode BTN_Y = KeyCode.JoystickButton12;
    public static readonly KeyCode BTN_START = KeyCode.JoystickButton18;
#elif XIAOMISTICK
    public static readonly KeyCode BTN_A = KeyCode.JoystickButton0;
    public static readonly KeyCode BTN_B = KeyCode.JoystickButton1;
    public static readonly KeyCode BTN_X = KeyCode.JoystickButton2;
    public static readonly KeyCode BTN_Y = KeyCode.JoystickButton3;
    public static readonly KeyCode BTN_L1 = KeyCode.JoystickButton4;
    public static readonly KeyCode BTN_R1 = KeyCode.JoystickButton5;
    public static readonly KeyCode BTN_L2 = KeyCode.JoystickButton6;
    public static readonly KeyCode BTN_R2 = KeyCode.JoystickButton7;
    public static readonly KeyCode BTN_START = KeyCode.JoystickButton10;
    public static readonly KeyCode BTN_SELECT = KeyCode.JoystickButton11;

    //public static readonly KeyCode BTN_A = KeyCode.JoystickButton2;
    //public static readonly KeyCode BTN_B = KeyCode.JoystickButton1;
    //public static readonly KeyCode BTN_X = KeyCode.JoystickButton3;
    //public static readonly KeyCode BTN_Y = KeyCode.JoystickButton0;
    //public static readonly KeyCode BTN_L1 = KeyCode.JoystickButton4;
    //public static readonly KeyCode BTN_R1 = KeyCode.JoystickButton5;
    //public static readonly KeyCode BTN_L2 = KeyCode.JoystickButton6;
    //public static readonly KeyCode BTN_R2 = KeyCode.JoystickButton7;
    //public static readonly KeyCode BTN_START = KeyCode.JoystickButton9;
    //public static readonly KeyCode BTN_SELECT = KeyCode.JoystickButton8;
	#endif

	public List<ServerPageItem> m_serverPageList = new List<ServerPageItem>();
    public ServerTopWindow m_serverTopWindow;
    public ServerListWindow m_servetListWindow;
    public GameObject m_btnserverOther;
    public GameObject m_btnserverBack;


    private static JoyControllerLogic instance;
    public static JoyControllerLogic Instance
    {
        get
        {
            return instance;
        }
    }
    void Awake()
    {
        instance = this;
    }

    void InitServerList()
    {
        ServerPageItem[] pages = GameObject.FindObjectsOfType<ServerPageItem>();
        m_serverPageList.AddRange(pages);
    }
    private static void FindChild(Transform trans, ref Transform result, string name)
    {
        if (trans == null)
        {
            result = null;
            return;
        }
        for (int i = 0; i < trans.childCount; i++)
        {            
            Transform child = trans.GetChild(i);
            if (child.name == name)
            {
                result = child;
                return;
            }
            FindChild(child, ref result, name);
        }
    }
    public static Transform FindChild(Transform trans, string name)
    {
        Transform _result = null;
        FindChild(trans, ref _result, name);
        return _result;
    }
    private static void FindChild<T>(Transform trans, ref Transform result) where T:MonoBehaviour
    {
        if (trans == null)
        {
            result = null;
            return;
        }
        for (int i = 0; i < trans.childCount; i++)
        {
            Transform child = trans.GetChild(i);
            if (child.GetComponent<T>() != null)
            {
                result = child;
                return;
            }
            FindChild<T>(child, ref result);
        }
    }
    public static Transform FindChild<T>(Transform trans) where T:MonoBehaviour
    {
        Transform _result = null;
        FindChild<T>(trans, ref _result);
        return _result;
    }

    void Update()
    {
        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN)
        {
            InitUI();
        }
        UpdateJoyDState();
    }

    private void InitUI()
    {
        if (m_serverPageList.Count <= 0)
        {
            InitServerList();
        }
        if (m_servetListWindow == null)
        {
            m_servetListWindow = GameObject.FindObjectOfType<ServerListWindow>();
        }
        if (m_serverTopWindow == null)
        {
            m_serverTopWindow = GameObject.FindObjectOfType<ServerTopWindow>();
        }
        if (m_btnserverOther == null)
        {
            m_btnserverOther = GameObject.Find("BtnServerOther");
        }
        if (m_btnserverBack == null)
        {
            m_btnserverBack = GameObject.Find("BtnBack");
        }
    }
    /// <summary>
    /// 为curuibtn 添加跳转功能，即按键以后选中名为othername的按钮
    /// </summary>
    /// <param name="curuibtn"></param>
    /// <param name="othername"></param>
    public void AttachGotoFunction(JoyUIButton curuibtn, string othername)
    {
        JoyUIChangeFocus jucf = curuibtn.gameObject.AddComponent<JoyUIChangeFocus>();
        jucf.other = GameObject.Find(othername).GetComponent<JoyUIButton>();
    }

    #region DPad Internal
    private float lastdHorizontal = 0;
    private float lastdVertical = 0;

    public static bool DPad_upDown = false;
    public static bool DPad_upUp = false;

    public static bool DPad_downDown = false;
    public static bool DPad_downUp = false;

    public static bool DPad_leftDown = false;
    public static bool DPad_leftUp = false;

    public static bool DPad_rightDown = false;
    public static bool DPad_rightUp = false;
    public static bool AnyDPadButtonDown
    {
        get
        {
            return DPad_upDown || DPad_downDown || DPad_leftDown || DPad_rightDown;
        }
    }
    /// <summary>
    /// 当获取的Axis值大于btnThredhold时才认为按钮按下
    /// </summary>
    private float btnThredhold = 0.5f;
    public static bool storyDialogOn;
    private void UpdateJoyDState()
    {
        float dhorizontal = Engine.OSC.AbstractController.Instance.GetAxis("DHorizontal");
        float dvertical = Engine.OSC.AbstractController.Instance.GetAxis("DVertical");
        if (dhorizontal > btnThredhold && lastdHorizontal < btnThredhold)
        {
            DPad_rightDown = true;
        }
        else if (dhorizontal < btnThredhold && lastdHorizontal > btnThredhold)
        {
            DPad_rightUp = true;
        }
        if (dhorizontal < -btnThredhold && lastdHorizontal > -btnThredhold)
        {
            DPad_leftDown = true;
        }
        else if (dhorizontal > -btnThredhold && lastdHorizontal < -btnThredhold)
        {
            DPad_leftUp = true;
        }

        if (dvertical > btnThredhold && lastdVertical < btnThredhold)
        {
            DPad_upDown = true;
        }
        else if (dvertical < btnThredhold && lastdVertical > btnThredhold)
        {
            DPad_upUp = true;
        }
        if (dvertical < -btnThredhold && lastdVertical > -btnThredhold)
        {
            DPad_downDown = true;
        }
        else if (dvertical > -btnThredhold && lastdVertical < -btnThredhold)
        {
            DPad_downUp = true;
        }
        lastdHorizontal = dhorizontal;
        lastdVertical = dvertical;
    }
    void LateUpdate()
    {
        DPad_leftDown = DPad_leftUp = DPad_rightDown = DPad_rightUp = DPad_upDown = DPad_upUp = DPad_downDown = DPad_downUp = false;
    }

    #endregion DPad


#endif
}
}
