//********************************************************************
// 文件名: MessageBoxLogic.cs
// 描述: 消息框脚本
// 作者: WangZhe
//********************************************************************

using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using GCGame;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public class MessageBoxLogic : UIControllerBase<MessageBoxLogic> {

    public enum PASSWORD
    {
        INVALID = -1,
        MARRYROOT = 0,
    }
    
    public UILabel labelTitle;                            // 提示标题
    public UILabel labelText;                             // 提示内容
    public GameObject m_MessageBoxOKButton;               // 确定按钮
    public GameObject m_MessageBoxCancelButton;           // 取消按钮
    public GameObject detailBandRoot;                     // 详细信息节点
    public UISprite sprBackGround;                        // 背景
    public UIFont m_Font;
    public GameObject m_MessageInfo;
	private int m_Type = -1 ;

    public Vector3 btnLelfPos;                            // 按钮在左边的位置
    public Vector3 btnCenterPos;                          // 按钮在中间的位置
    public Vector3 btnRightPos;                           // 按钮在右边的位置
    public UILabel m_CountTextLabel;                      // 倒计时内容

    public GameObject m_MessageBoxIcon;

    public GameObject m_TypeCost;
    public UILabel m_TypeCostLabel;
    public UILabel m_TypeCostSupplementLabel;
    public UILabel m_TypeCostDesc;
    public UILabel m_TypeCostCount;
    public UISprite m_TypeCostIcon;

    public delegate void OnOKClick();
    private OnOKClick deleOK;                             // 确定按钮响应函数托管
    public delegate void OnCancelClick();
    private OnCancelClick deleCancel;                     // 取消按钮响应函数托管
    public delegate void OnWaitTimeOut();
    private OnWaitTimeOut delWaitTimeOut;                 // 等待超时
    private float m_waitTimer = 0;
    private float m_delayTimer = 0;
    private float m_fCountDown = -1;  //倒计时时间 -1代表无倒计时,秒标记
    public float CountDown
    {
        get { return m_fCountDown; }
        set { 
            m_fCountDown = value; 
            if (m_fCountDown > 0 && m_nCountDownDicID > GlobeVar.INVALID_ID)
            {
                m_CountTextLabel.text = StrDictionary.GetClientDictionaryString("#{" + m_nCountDownDicID + "}", Mathf.CeilToInt(m_fCountDown));
            }
            else
            {
                m_nCountDownDicID = GlobeVar.INVALID_ID;
                m_CountTextLabel.text = "";
            }
        }
    }
    private float m_fCountDonwTime = 0;   // 倒计时计时器
    private int m_nCountDownDicID = GlobeVar.INVALID_ID;  //倒计时 显示字典ID
    private float TextHeight = GlobeVar.INVALID_ID;
    private PASSWORD m_ePassword = PASSWORD.INVALID;
    public PASSWORD EPassword
    {
        get { return m_ePassword; }
        set { m_ePassword = value; }
    }
    private string[] symbols = new string[4] { "#q1", "#q2", "#q3", "#q5" };
    private string[] icons = new string[4] { "qian1", "qian2", "qian3", "qian5" };
    private CostBoxInfo m_costInfo = null;

    void Awake()
    {
        SetInstance(this);
#if BOBJOYSTICK
        MapMessageBoxUI();
#endif
    }
    void OnEnable()
    {
#if BOBJOYSTICK
        Attachfirstui();
#endif
        Check_NewPlayerGuide();
    }
#if BOBJOYSTICK
    void Attachfirstui()
    {
        if (null == btnokui)
            return;
        JoyStickCursor.Instance.AttachCursor(btnokui);
    }
    JoyUIButton btnokui;
    void MapMessageBoxUI()
    {
        GameObject btnOK = null;
        GameObject btnCancel = null;
        btnCancel = JoyControllerLogic.FindChild(transform, "CancelButton").gameObject;
        btnOK = JoyControllerLogic.FindChild(transform, "MessageBoxOPButton").gameObject;
        btnokui = JoyUIButtonFactory.Instance.MapUI(btnOK);
        if (JoyControllerLogic.Instance.m_btnserverOther != null)
        {
            string othername = "_" + JoyControllerLogic.Instance.m_btnserverOther.name;
            JoyControllerLogic.Instance.AttachGotoFunction(btnokui, othername);
        }
        JoyUIButton btncancelui = JoyUIButtonFactory.Instance.MapUI(btnCancel);
        btnokui.Left = btncancelui;
        btncancelui.Right = btnokui;
        Attachfirstui();
    }
#endif
	void Update () {

        if (m_delayTimer > 0)
        {
            m_delayTimer -= Time.deltaTime;
            if (m_delayTimer <= 0)
            {
                ShowBox();
            }

            return;
        }
        if (m_waitTimer > 0)
        {
            m_waitTimer -= Time.deltaTime;
            if (m_waitTimer <= 0)
            {
                UIManager.CloseUI(UIInfo.MessageBox);
                if (null != delWaitTimeOut) delWaitTimeOut();
            }
        }
        if (CountDown > 0)
        {
            m_fCountDonwTime += Time.deltaTime;
            if (m_fCountDonwTime >= 1.0f )
            {
                CountDown -= m_fCountDonwTime;
                if (CountDown <= 0)
                {
                    CountDown = 0;
                    UIManager.CloseUI(UIInfo.MessageBox);
                    if (null != deleCancel)
                    {
						if( m_Type != (int)(Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_CANCEL))
                        	deleCancel();
						else
							deleOK();
                    }
                }
                m_fCountDonwTime = 0;
            }            
        }       	
	}

    void MessageBoxOK()
    {
        UIManager.CloseUI(UIInfo.MessageBox);
        if (null != deleOK)
        {
            deleOK();
        }
        if (RestaurantController.Instance() != null)
        {
            if (RestaurantController.Instance().NewPlayerGuide_Step == 3)
            {
                RestaurantController.Instance().NewPlayerGuide(4);
            }
        }
    }

    void MessageBoxCancel()
    {
        foreach (UISprite sprite in m_MessageInfo.GetComponentsInChildren<UISprite>())
        {
            Destroy(sprite.gameObject);
        }
        UIManager.CloseUI(UIInfo.MessageBox);
        if (null != deleCancel)
        {
            deleCancel();
        }
    }

    void CleanData()
    {
        deleOK = null;
        deleCancel = null;
        delWaitTimeOut = null;
        m_waitTimer = 0;
        m_delayTimer = 0;
		m_Type = -1;
        m_ePassword = PASSWORD.INVALID;
        CountDown = 0;
        ShowBox();
    }

    private static Color transColor = new Color(1, 1, 1, 0);
    void HideBox()
    {
        sprBackGround.color = transColor;
        detailBandRoot.SetActive(false);
    }

    void ShowBox()
    {
        sprBackGround.color = Color.white;
        detailBandRoot.SetActive(true);
    }
    /// <summary>
    /// 显示MessageBox
    /// </summary>
    /// <param name="strInfo">提示信息</param>
    /// <param name="eType">MessageBox类型</param>
    /// <param name="funcOKClicked">确定按钮响应函数</param>
    /// <param name="funcCancelClicked">取消按钮响应函数</param>
    public void ShowMessageBox(string title, string text, Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE eType)
    {
        if (TextHeight < 0)
        {
            TextHeight = m_Font.CalculatePrintedSize(" ", true, UIFont.SymbolStyle.None).y;
        }
        labelTitle.text = title;

        SetTextAnalyseSymbol(text);        
		m_Type = (int)eType;
        switch (eType)
        {
            case Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_OK:
                {
                    m_MessageBoxOKButton.SetActive(true);
                    m_MessageBoxCancelButton.SetActive(false);
                    //m_MessageBoxOKButton.transform.localPosition = btnCenterPos;
                    m_TypeCost.SetActive(false);
                    m_MessageInfo.SetActive(true);
                }
                break;
            case Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_OKCANCEL:
                {
                    m_MessageBoxOKButton.SetActive(true);
                    m_MessageBoxCancelButton.SetActive(true);
                    //m_MessageBoxOKButton.transform.localPosition = btnLelfPos;
                    //m_MessageBoxCancelButton.transform.localPosition = btnRightPos;
                    m_TypeCost.SetActive(false);
                    m_MessageInfo.SetActive(true);
                }
                break;
            case Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_WAIT:
                {
                    m_MessageBoxOKButton.SetActive(false);
                    m_MessageBoxCancelButton.SetActive(false);
                    m_TypeCost.SetActive(false);
                    m_MessageInfo.SetActive(true);
                }
                break;
            case Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_CANCEL:
                {
                    m_MessageBoxOKButton.SetActive(false);
                    m_MessageBoxCancelButton.SetActive(true);
                    m_TypeCost.SetActive(false);
                    m_MessageInfo.SetActive(true);
                }
                break;
            case Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_COST:
                {
                    m_MessageBoxOKButton.SetActive(true);
                    m_MessageBoxCancelButton.SetActive(true);
                    m_TypeCost.SetActive(true);
                    m_MessageInfo.SetActive(false);
                    m_TypeCostLabel.text = text;
                    m_TypeCostSupplementLabel.text = m_costInfo._textSupplement;
                    m_TypeCostDesc.text = m_costInfo._costDesc;
                    m_TypeCostCount.text = m_costInfo._costCount;
                    m_TypeCostIcon.spriteName = m_costInfo._costIcon;
                    //m_TypeCostIcon.MakePixelPerfect();
                }
                break;
            case Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_INVALID:
            default:
                break;
        }
        gameObject.SetActive(true);
    }

    public void SetTextAnalyseSymbol(string text)
    {
        foreach (UISprite sprite in m_MessageInfo.GetComponentsInChildren<UISprite>())
        {
            Destroy(sprite.gameObject);
        }
        for (int i = 0; i < 4; i++ )
        {
            int iconindex = text.IndexOf(symbols[i]);
            if (iconindex > 0)
            {
                // prewidth-图标前面的总宽度
                float prewidth = m_Font.CalculatePrintedSize(text.Substring(0, iconindex), true, UIFont.SymbolStyle.None).x;
                // prelines-图标前面的行数 不包括图标行
                int prelines = Mathf.FloorToInt(prewidth / (float)labelText.width);
                // wholewidth-总宽度
                float wholewidth = m_Font.CalculatePrintedSize(text, true, UIFont.SymbolStyle.None).x;
                // lines-总行数
                int lines = Mathf.CeilToInt(wholewidth / (float)labelText.width);
                // 此时可以先确定图标Y位置
                float POSY = TextHeight / 2 * (lines - 1) - prelines * TextHeight;
                // 创建图标
                GameObject icon = Utils.BindObjToParent(m_MessageBoxIcon, m_MessageInfo, icons[i]);
                if (icon != null && icon.GetComponent<UISprite>() != null)
                {
                    icon.GetComponent<UISprite>().spriteName = icons[i];                    

                    string strSpace = "";
                    float spaceWidth = m_Font.CalculatePrintedSize("　", true, UIFont.SymbolStyle.None).x;
                    int iconWidth = icon.GetComponent<UISprite>().width;
                    int spaceNum = Mathf.CeilToInt((float)iconWidth / spaceWidth);
                    for (int j = 0; j < spaceNum; j++)
                    {
                        strSpace += "　";
                    }                    
                    text = text.Replace(symbols[i], strSpace);

                    // 此时确定图标的X位置 为所加空格的中点
                    // prelineswidth-图标前面的行的宽度
                    float prelineswidth = 0;
                    if (prelines > 0)
                    {
                        for (int k = 0; k < iconindex; k++ )
                        {
                            float width = m_Font.CalculatePrintedSize(text.Substring(0, k), true, UIFont.SymbolStyle.None).x;
                            if (width > labelText.width * prelines)
                            {
                                break;
                            }
                            prelineswidth = width;
                        }
                    }
                    // leftwidth-图标行左侧文字的宽度
                    float leftwidth = prewidth - prelineswidth;

                    // curlinewidth-图标行的宽度 此时图标已被空格替换
                    float curlinewidth = 0;
                    for (int k = iconindex + 1; k < text.Length; k++ )
                    {
                        float width = m_Font.CalculatePrintedSize(text.Substring(0, k), true, UIFont.SymbolStyle.None).x - prelineswidth;
                        if (width > labelText.width)
                        {
                            break;
                        }
                        curlinewidth = width;
                    }

                    float POSX = 0;
                    POSX = leftwidth + (float)(spaceNum * spaceWidth) / 2.0f; 
                    // 因为文本居中显示 所以减去图标行行宽的一半
                    POSX -= curlinewidth / 2.0f;
                    icon.transform.localPosition = new Vector3(POSX, POSY, 0);

                    labelText.text = text;

                    break;
                }
            }
            else if (i == 3)
            {
                labelText.text = text;
            }
        }       
    }

    public static void CloseBox()
    {
        if (null != MessageBoxLogic.Instance())
        {
            MessageBoxLogic.Instance().CleanData();
        }
        UIManager.CloseUI(UIInfo.MessageBox);
    }

    private class OKCancelInfo
    {
        public OKCancelInfo(string text, string title = null, OnOKClick funcOKClicked = null, OnCancelClick funcCancelClicked = null, float fCountDown = GlobeVar.INVALID_ID, PASSWORD password = PASSWORD.INVALID, int nCountDownDicID = GlobeVar.INVALID_ID)
        {
            _text = text;
            _title = title;
            _delOkClick = funcOKClicked;
            _delCancelClick = funcCancelClicked;
            _fCountDown = fCountDown;
            _nCountDownDicID = nCountDownDicID;
            _password = password;
        }

        public string _text;
        public string _title;
        public float _fCountDown;
        public int _nCountDownDicID;
        public PASSWORD _password;

        public OnOKClick _delOkClick;
        public OnCancelClick _delCancelClick;
    }

	// ======================================================================================
	//只有一个取消按钮
	public static void OpenCancelBox(string text, string title = null, OnOKClick funcOKClicked = null, OnCancelClick funcCancelClicked = null, int nCountDown = GlobeVar.INVALID_ID, PASSWORD password = PASSWORD.INVALID, int nCountDownDicID = GlobeVar.INVALID_ID)
	{
		OKCancelInfo curInfo = new OKCancelInfo(text, title, funcOKClicked, funcCancelClicked, nCountDown, password, nCountDownDicID);
		UIManager.ShowUI(UIInfo.MessageBox, OnOpenCancelBox, curInfo);
	}
	static void OnOpenCancelBox(bool bSuccess, object param)
	{
		if (!bSuccess)
		{
			return;
		}
		if (MessageBoxLogic.Instance() != null)
		{
			OKCancelInfo curInfo = param as OKCancelInfo;
			MessageBoxLogic.Instance().CleanData();
			MessageBoxLogic.Instance().deleOK = curInfo._delOkClick;
			MessageBoxLogic.Instance().deleCancel = curInfo._delCancelClick;
			MessageBoxLogic.Instance().m_nCountDownDicID = curInfo._nCountDownDicID;
			MessageBoxLogic.Instance().CountDown = curInfo._fCountDown;
			MessageBoxLogic.Instance().m_ePassword = curInfo._password;
			MessageBoxLogic.Instance().ShowMessageBox(curInfo._title, curInfo._text, Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_CANCEL);
		}
	}
	//============================================================================================
    // 只有一个确定按钮
    public static void OpenOKBox(string text, string title = null, OnOKClick funcOKClicked = null, PASSWORD password = PASSWORD.INVALID)
    {
        OKCancelInfo curInfo = new OKCancelInfo(text, title, funcOKClicked, null, GlobeVar.INVALID_ID, password);
        UIManager.ShowUI(UIInfo.MessageBox, OnOpenOkBox, curInfo);
        
    }
    static void OnOpenOkBox(bool bSuccess , object param)
    {
        if (!bSuccess)
        {
            return;
        }
        if (MessageBoxLogic.Instance() != null)
        {
            OKCancelInfo curInfo = param as OKCancelInfo;
            MessageBoxLogic.Instance().CleanData();
            MessageBoxLogic.Instance().deleOK = curInfo._delOkClick;
            MessageBoxLogic.Instance().m_ePassword = curInfo._password;
            MessageBoxLogic.Instance().ShowMessageBox(curInfo._title, curInfo._text, Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_OK);
        }
    }

    
    // 有确定取消按钮
    public static void OpenOKCancelBox(string text, string title = null, OnOKClick funcOKClicked = null, OnCancelClick funcCancelClicked = null, int nCountDown = GlobeVar.INVALID_ID, PASSWORD password = PASSWORD.INVALID, int nCountDownDicID = GlobeVar.INVALID_ID)
    {
        OKCancelInfo curInfo = new OKCancelInfo(text, title, funcOKClicked, funcCancelClicked, nCountDown, password, nCountDownDicID);
        UIManager.ShowUI(UIInfo.MessageBox, OnOpenOkCancelBox, curInfo);
        
    }

    static void OnOpenOkCancelBox(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            return;
        }
        if (MessageBoxLogic.Instance() != null)
        {
            OKCancelInfo curInfo = param as OKCancelInfo;
            MessageBoxLogic.Instance().CleanData();
            MessageBoxLogic.Instance().deleOK = curInfo._delOkClick;
            MessageBoxLogic.Instance().deleCancel = curInfo._delCancelClick;
            MessageBoxLogic.Instance().m_nCountDownDicID = curInfo._nCountDownDicID;
            MessageBoxLogic.Instance().CountDown = curInfo._fCountDown;
            MessageBoxLogic.Instance().m_ePassword = curInfo._password;
            MessageBoxLogic.Instance().ShowMessageBox(curInfo._title, curInfo._text, Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_OKCANCEL);
        }
    }

    private class WaitBoxInfo
    {
        public WaitBoxInfo(string text, float duration, float delay, OnWaitTimeOut delWaitTimeOutFun, PASSWORD password)
        {
            _text = text;
            _duration = duration;
            _delay = delay;
            _delWaitTimeOut = delWaitTimeOutFun;
            _password = password;
        }

        public string _text;
        public float _duration;
        public float _delay;
        public OnWaitTimeOut _delWaitTimeOut;
        public PASSWORD _password;
    }
    // 等待界面
    // duration 等待时间，如果<=0 则无限等待,
    // delay 延时弹出时间，如有延时，则会先以透明底版的形式弹出，延时结束后显示内容
    public static void OpenWaitBox(string text, float duration = 0, float delay = 0,OnWaitTimeOut delWaitTimeOutFun = null, PASSWORD password = PASSWORD.INVALID)
    {
        WaitBoxInfo curInfo = new WaitBoxInfo(text, duration, delay, delWaitTimeOutFun, password);
        UIManager.ShowUI(UIInfo.MessageBox, OnOpenWaitBox, curInfo);
        
    }

    static void OnOpenWaitBox(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            return;
        }
        if (MessageBoxLogic.Instance() != null)
        {
            WaitBoxInfo curInfo = param as WaitBoxInfo;

            MessageBoxLogic.Instance().CleanData();
            MessageBoxLogic.Instance().delWaitTimeOut = curInfo._delWaitTimeOut;
            MessageBoxLogic.Instance().m_waitTimer = curInfo._duration;
            MessageBoxLogic.Instance().m_delayTimer = curInfo._delay;
            MessageBoxLogic.Instance().m_ePassword = curInfo._password;
            MessageBoxLogic.Instance().ShowMessageBox("", curInfo._text, Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_WAIT);
            if (curInfo._delay > 0)
            {
                MessageBoxLogic.Instance().HideBox();
            }
        }
    }

    private class CostBoxInfo
    {
        public CostBoxInfo(string text, string textSupplement = null, string title = null, string costDesc = null, string costIcon = null, string costCount = null, OnOKClick funcOKClicked = null, OnCancelClick funcCancelClicked = null)
        {
            _text = text;
            _textSupplement = textSupplement;
            _title = title;
            _delOkClick = funcOKClicked;
            _delCancelClick = funcCancelClicked;
            _costDesc = costDesc;
            _costIcon = costIcon;
            _costCount = costCount;
        }

        public string _text;
        public string _textSupplement;
        public string _title;
        public string _costDesc;
        public string _costIcon;
        public string _costCount;

        public OnOKClick _delOkClick;
        public OnCancelClick _delCancelClick;
    }

    public static void OpenCostBox(string text, string textSupplement = null, string title = null, string costDesc = null, string costIcon = null, string costCount = null, OnOKClick funcOKClicked = null, OnCancelClick funcCancelClicked = null)
    {
        CostBoxInfo curInfo = new CostBoxInfo(text, textSupplement, title, costDesc, costIcon, costCount, funcOKClicked, funcCancelClicked);
        UIManager.ShowUI(UIInfo.MessageBox, OnOpenCostBox, curInfo);
    }

    static void OnOpenCostBox(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            return;
        }
        if (MessageBoxLogic.Instance() != null)
        {
            CostBoxInfo curInfo = param as CostBoxInfo;
            MessageBoxLogic.Instance().CleanData();
            MessageBoxLogic.Instance().deleOK = curInfo._delOkClick;
            MessageBoxLogic.Instance().deleCancel = curInfo._delCancelClick;
            MessageBoxLogic.Instance().m_costInfo = curInfo;
            MessageBoxLogic.Instance().ShowMessageBox(curInfo._title, curInfo._text, Games.GlobeDefine.GameDefine_Globe.MESSAGEBOX_TYPE.TYPE_COST);
        }
    }

    //----------------------------------重载便捷函数-------------------------------------------------------/
    public static void OpenOKBox(int textDicID, int titleDicID = -1, OnOKClick funcOKClicked = null, PASSWORD password = PASSWORD.INVALID)
    {
        MessageBoxLogic.OpenOKBox(Utils.GetDicByID(textDicID), titleDicID == -1 ? "" : Utils.GetDicByID((int)titleDicID), funcOKClicked, password);
    }

    public static void OpenOKCancelBox(int textDicID, int titleDicID = -1, OnOKClick funcOKClicked = null, OnCancelClick funcCancelClicked = null, PASSWORD password = PASSWORD.INVALID)
    {
        MessageBoxLogic.OpenOKCancelBox(Utils.GetDicByID(textDicID), Utils.GetDicByID((int)titleDicID), funcOKClicked, funcCancelClicked, GlobeVar.INVALID_ID, password);
    }

    public static void OpenWaitBox(int textDicID, float duration = GameDefines.CONNECT_TIMEOUT, float delay = GameDefines.CONNECT_WAIT_DELAY, OnWaitTimeOut delWaitTimeOutFun = null, PASSWORD password = PASSWORD.INVALID)
    {
        
        MessageBoxLogic.OpenWaitBox(Utils.GetDicByID(textDicID), duration, delay, delWaitTimeOutFun, password);
    }

    // 倒计时专用吧
    public static void OpenOKCancelCountDownBox(string text, string title = null, OnOKClick funcOKClicked = null, OnCancelClick funcCancelClicked = null, int nCountDown = GlobeVar.INVALID_ID, int nCountDownDicID = GlobeVar.INVALID_ID)
    {
        OKCancelInfo curInfo = new OKCancelInfo(text, title, funcOKClicked, funcCancelClicked, nCountDown, PASSWORD.INVALID, nCountDownDicID);
        UIManager.ShowUI(UIInfo.MessageBox, OnOpenOkCancelBox, curInfo);

    }

    void Check_NewPlayerGuide()
    {
        if (RestaurantController.Instance() != null)
        {
            if (RestaurantController.Instance().NewPlayerGuide_Step == 2)
            {
                RestaurantController.Instance().NewPlayerGuide_Step = 3;
                NewPlayerGuidLogic.OpenWindow(m_MessageBoxOKButton, 200, 100, "", "top", 0, true, true);
            }
        }

    }
}
