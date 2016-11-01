using Games.GlobeDefine;
using Games.LogicObj;
using GCGame.Table;
using UnityEngine;
using System.Collections;

public class PKInfoSetLogic : MonoBehaviour {

	// Use this for initialization
    private static PKInfoSetLogic m_Instance = null;
    private static Color LabelGrayColor = new Color(64, 223, 227, 255);
    private static Color LabelHighColor = new Color(164, 223, 227, 255);
    public static PKInfoSetLogic Instance()
    {
        return m_Instance;
    }

    private int m_nPKModle = -1;
	public int PKModle
	{
		get { return m_nPKModle; }
		set { m_nPKModle = value; }
	}
    private int m_nPKCDTime = -1;
	public int PKCDTime
	{
		get { return m_nPKCDTime; }
		set { m_nPKCDTime = value; }
	}
    private int m_nPKValue =0;
	public int PKValue
	{
		get { return m_nPKValue; }
		set { m_nPKValue = value; }
	}
    public UILabel m_PkValueLable;
    public UILabel m_PKStateLable;

    //public GameObject m_LeftLabel;
    //public GameObject m_RightLabel;

    public UILabel m_LeftLabel;
    public UILabel m_RightLabel;

    public GameObject m_LeftImageNormal;
    public GameObject m_LeftImageHigh;

    public GameObject m_RightImageNormal;
    public GameObject m_RightImageHigh;

    public GameObject m_LeftButtonBG;
    public GameObject m_RightButtonBG;


    public UISprite m_RightSprite;
    public UISprite m_LeftSprite;
    private string m_LeftLabelText = "";
    private string m_RightLabelText = "";
    private bool m_IsModeClick = false;

	void Start ()
	{

	}


    void OnEnable()
    {
        m_Instance = this;
        if (m_LeftLabelText == "")
        {
            m_LeftLabelText = m_LeftLabel.text;
            m_RightLabelText = m_RightLabel.text;
        }
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer)
        {
            //发包请求信息
            CG_ASK_PKINFO pkinfo = (CG_ASK_PKINFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_PKINFO);
            pkinfo.SetObjId(_mainPlayer.ServerID);
            pkinfo.SendPacket();
        }
        SwitchBtnState();

        Check_NewPlayerGuide();

#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.PK_UI);
#endif
    }

    void OnDisable()
    {
        m_Instance = null;
    }
	
	// Update is called once per frame
    public  void UpdatePKInfo()
    {
        m_PkValueLable.text = m_nPKValue.ToString();
        if (m_nPKModle ==(int)CharacterDefine.PKMODLE.NORMAL)
        {
            string _strNotice = StrDictionary.GetClientDictionaryString("#{1109}");
            m_PKStateLable.text =_strNotice;
        }
        else if (m_nPKModle == (int)CharacterDefine.PKMODLE.KILL && m_nPKCDTime<0)
        {
            string _strNotice = StrDictionary.GetClientDictionaryString("#{1121}");
            m_PKStateLable.text = _strNotice;
        }
        else if (m_nPKModle == (int)CharacterDefine.PKMODLE.KILL && m_nPKCDTime > 0)
        {
            int nMin = m_nPKCDTime/60000;
            int nSecond =(m_nPKCDTime%60000)/1000;
            string _strNotice = StrDictionary.GetClientDictionaryString("#{1110}",nMin,nSecond);
            m_PKStateLable.text =_strNotice;
        }
    }
	void Update () 
    {
        if (m_nPKModle == (int)CharacterDefine.PKMODLE.KILL && m_nPKCDTime > 0)
        {
            int nMin = m_nPKCDTime / 60000;
            int nSecond = (m_nPKCDTime % 60000) / 1000;
            string _strNotice = StrDictionary.GetClientDictionaryString("#{1110}",nMin,nSecond);
            m_PKStateLable.text = _strNotice;
            m_nPKCDTime = m_nPKCDTime - (int) (Time.deltaTime*1000);
        }
	}

    void OnNormalModleClick()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer ==null)
        {
           return;
        }
        if (m_nPKModle == (int) CharacterDefine.PKMODLE.NORMAL)
        {
            _mainPlayer.SendNoticMsg(false, "#{1108}");
            return;
        }
        if (m_nPKCDTime >0)
        {
            int nMin = m_nPKCDTime / 60000;
            int nSecond = (m_nPKCDTime % 60000) / 1000;
            //字典提示
            _mainPlayer.SendNoticMsg(false, "#{1110}", nMin, nSecond);
            return;
        }
        if (m_nPKModle != (int)CharacterDefine.PKMODLE.NORMAL && m_nPKCDTime <=0)
        {
            //发包请求切换
            CG_CHANGE_PKMODLE pkChange= (CG_CHANGE_PKMODLE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHANGE_PKMODLE);
            pkChange.SetObjId(_mainPlayer.ServerID);
            pkChange.SetPKModle((int)CharacterDefine.PKMODLE.NORMAL);
            pkChange.SendPacket();
            OnCloseClick();
        }
        m_IsModeClick = true;
        if (FunctionButtonLogic.Instance() != null) {
          FunctionButtonLogic.Instance().UpdateNewFunctionButtonState(FunctionButtonLogic.DynamicLogo.PKModel);
        }
    }
    void OnKillModleClick()
    {
        if (m_nNewPlayerGuideIndex == 1)
        {
            m_nNewPlayerGuideIndex = -1;
            NewPlayerGuidLogic.CloseWindow();
        }

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        if (_mainPlayer.BaseAttr.Level <30)
        {
            _mainPlayer.SendNoticMsg(false, "#{1111}");
            return;
        }
        if (_mainPlayer.PkModle == (int)CharacterDefine.PKMODLE.KILL && m_nPKCDTime <0)
        {
            _mainPlayer.SendNoticMsg(false, "#{1107}");
            return;
        }
        //弹出确认框
        string _strNotice = StrDictionary.GetClientDictionaryString("#{1106}");
        MessageBoxLogic.OpenOKCancelBox(_strNotice, "", SwitchKillModeOnOk, SwitchKillModeOnCancel);
        m_IsModeClick = true;
    }

    public void SwitchKillModeOnOk()
    {
        if (m_nPKModle != (int)CharacterDefine.PKMODLE.KILL  ||  m_nPKCDTime >0)
        {
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer)
            {
                //发包请求切换
                CG_CHANGE_PKMODLE pkChange = (CG_CHANGE_PKMODLE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHANGE_PKMODLE);
                pkChange.SetObjId(_mainPlayer.ServerID);
                pkChange.SetPKModle((int)CharacterDefine.PKMODLE.KILL);
                pkChange.SendPacket();
            }
        }
        OnCloseClick();
        if (FunctionButtonLogic.Instance() != null) {
          FunctionButtonLogic.Instance().UpdateNewFunctionButtonState(FunctionButtonLogic.DynamicLogo.PKModel);
        }
    }
    public void SwitchKillModeOnCancel()
    {

    }
    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.PKSetInfo);
    }

    public void SetLabelGray(ref UILabel label,ref string text)
    {
        label.text = "[40DFE3]" + text + "[-]";
    }

    public void SetLabelHigh(ref UILabel label, ref string text)
    {
        label.text = "[A4DFE3]" + text +"[-]";

    }

    public void SetSpriteGray(ref UISprite sprite)
    {
        sprite.color = GlobeVar.BUTTONGRAY;
    }

    public void SetSpriteHigh(ref UISprite sprite)
    {
        sprite.color = GlobeVar.BUTTONCOLER;
    }


    public void SwitchBtnState()
    {
        //m_LeftLabel.SetActive(true);
        //m_RightLabel.SetActive(true);
        m_LeftButtonBG.SetActive(false);
        m_RightButtonBG.SetActive(false);
        m_LeftImageNormal.SetActive(false);
        m_LeftImageHigh.SetActive(false);
        m_RightImageNormal.SetActive(false);
        m_RightImageHigh.SetActive(false);

        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        int nPKModel = Singleton<ObjManager>.Instance.MainPlayer.PkModle;
        if (nPKModel == (int)CharacterDefine.PKMODLE.NORMAL)
        {
            //m_LeftLabel.SetActive(false);
            m_LeftButtonBG.SetActive(false);
            SetSpriteGray(ref m_LeftSprite);
            SetLabelGray(ref m_LeftLabel,ref m_LeftLabelText);
            //m_RightLabel.SetActive(true);
            m_RightButtonBG.SetActive(true);
            SetSpriteHigh(ref m_RightSprite);
            SetLabelHigh(ref m_RightLabel,ref m_RightLabelText);
            m_LeftImageNormal.SetActive(true);
            m_LeftImageHigh.SetActive(false);
            m_RightImageNormal.SetActive(false);
            m_RightImageHigh.SetActive(true);
        }
        else if (nPKModel == (int)CharacterDefine.PKMODLE.KILL)
        {
            //m_LeftLabel.SetActive(true);
            //m_RightLabel.SetActive(false);
            m_LeftButtonBG.SetActive(true);
            SetSpriteHigh(ref m_LeftSprite);
            SetLabelHigh(ref m_LeftLabel,ref m_LeftLabelText);
            m_RightButtonBG.SetActive(false);
            SetSpriteGray(ref m_RightSprite);
            SetLabelGray(ref m_RightLabel,ref m_RightLabelText);
            m_LeftImageNormal.SetActive(false);
            m_LeftImageHigh.SetActive(true);
            m_RightImageNormal.SetActive(true);
            m_RightImageHigh.SetActive(false);
        }
    }

    private int m_nNewPlayerGuideIndex = -1;
    public GameObject m_PkButton;
    public GameObject m_CloseButton;
    void Check_NewPlayerGuide()
    {
        if (NewFunctionLogic.Instance() && NewFunctionLogic.Instance().NewPlayerGuideIndex == 5)
        {
            NewPlayerGuide(1);
            NewFunctionLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }

    void NewPlayerGuide(int nIndex)
    {
        m_nNewPlayerGuideIndex = nIndex;
        if (nIndex == 1)
        {
            NewPlayerGuidLogic.OpenWindow_Circle(m_PkButton, 100, "", "left", 0, true, true);  
        }
        else if (nIndex == 2)
        {
            NewPlayerGuidLogic.OpenWindow_Circle(m_CloseButton, 100, "", "left", 0, true, true);  
        }
    }
}
