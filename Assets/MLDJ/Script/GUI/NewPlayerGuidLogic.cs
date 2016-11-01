using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using Module.Log;
using GCGame.Table;
public class NewPlayerGuidLogic : MonoBehaviour {

    public enum GuideSpriteType
    {
        Rectangle,
        Circle,
        NoFrame,
    }

    public enum MotionType
    {
        Circle,
        FromR2L,
        Twinkle,
        LeftConner,
        FromL2R,
        Standstill,
    }

    public class PlayerGuideInfo
    {
        public PlayerGuideInfo()
        {
            CleanUp();
        }

        public PlayerGuideInfo(GameObject UIObj, int nWidth, int nHeight, string strText, string TextLocation, int nMotionType, bool bIsBoxEnable, bool bIsMaskEnable, bool bIsForever, GuideSpriteType eGuideSpriteType, OnShowGuide deleOnShowGuide, float offsetX = 0, float offsetY = 0)
        {
            _UIObj = UIObj;            
            _nWidth = nWidth;
            _nHeight = nHeight;
            _strText = strText;
            _TextLocation = TextLocation;
            _nMotionType = nMotionType;
            _bIsBoxEnable = bIsBoxEnable;
            _bIsMaskEnable = bIsMaskEnable;
            _bIsForever = bIsForever;
            _GuideSpriteType = eGuideSpriteType;
            _deleOnShowGuide = deleOnShowGuide;
            _offsetX = offsetX;
            _offsetY = offsetY;
        }

        public void Init(GameObject UIObj, int nWidth, int nHeight, string strText, string TextLocation, int nMotionType, 
            bool bIsBoxEnable, bool bIsMaskEnable, bool bIsForever, bool bIsFocusAnim,
            GuideSpriteType eGuideSpriteType, OnShowGuide deleOnShowGuide, OnShowGuide afterShowGuide, float offsetX = 0, float offsetY = 0, Action onClickBlackCallback = null)
        {
            _UIObj = UIObj;
            _nWidth = nWidth;
            _nHeight = nHeight;
            _strText = strText;
            _TextLocation = TextLocation;
            _nMotionType = nMotionType;
            _bIsBoxEnable = bIsBoxEnable;
            _bIsMaskEnable = bIsMaskEnable;
            _bIsForever = bIsForever;
            _bIsFocusAnim = bIsFocusAnim;
            _GuideSpriteType = eGuideSpriteType;
            _deleOnShowGuide = deleOnShowGuide;
            _afterShowGuide = afterShowGuide;
            _offsetX = offsetX;
            _offsetY = offsetY;
            _onClickBlackCallback = onClickBlackCallback;
        }

        public void CleanUp()
        {
            _UIObj = null;
        }

        public bool IsValid()
        {
            return _UIObj != null;
        }

        public GameObject _UIObj;
        public GuideSpriteType _GuideSpriteType;
        public int _nWidth;
        public int _nHeight;
        public string _strText;
        public string _TextLocation;
        public int _nMotionType;
        public bool _bIsBoxEnable;
        public bool _bIsMaskEnable;
        public bool _bIsForever;
        public bool _bIsFocusAnim;
        public OnShowGuide _deleOnShowGuide;
        public OnShowGuide _afterShowGuide;
        public float _offsetX = 0;
        public float _offsetY = 0;
        public Action _onClickBlackCallback;
    }

    private static NewPlayerGuidLogic m_Instance = null;
    public static NewPlayerGuidLogic Instance()
    {
        return m_Instance;
    }

    public GameObject m_NewPlayerGuideOffSet;   // 屏幕偏移
    public UISprite m_NewPlayerGuid;          // 新手教学框
    public UISprite m_NewPlayerGuidCircle;
    public BoxCollider m_BoxColliderLeft;           // 左挡板
    public BoxCollider m_BoxColliderRight;          // 右挡板
    public BoxCollider m_BoxColliderTop;            // 上挡板
    public BoxCollider m_BoxColliderBottom;       // 下挡板
    
    public UILabel m_RemindLabel;              // 提示文字
    public UISprite m_RemindBackground;        // 提示文字背景
    public GameObject m_RemindObj;
    public GameObject m_RemindArrowParent;          //新加一个箭头的父节点

    public GameObject m_HandObject;
    public UILabel m_FTECenterTxt;
    public UISprite m_FTECenterTxtBg;
    // focus animation, o up 1 left 2 bottom 3 right
    Transform[] focusTrans = new Transform[4];
    public TweenPosition[] focusTwPos;
    TweenAlpha focusTwAlpha;

    public float m_AutoCloseWindowTime;
    public static float m_ChangedCloseWindowTime = 0;
    private static float m_CurCloseTime = 0;

    public float m_IntervalTime;
    private static float m_CurIntervalTime = 0;

    private int m_HandRadius = 0;
    private static float m_Angle = 0;
    private static float m_DisOffSet = 0;

    private MotionType m_MotionType;

    private bool m_OffSetCorrectFlag = false;
    private GameObject m_UIObj = null;

    private bool m_bForever = false;

    public static bool IsOpenFlag = false;

    public UILabel m_OptDec;

	/// <summary>
	/// 当前引导ID，设这个是为了判断一些有特殊需求的引导
	/// </summary>
	public static int CurrentGuideID = -1;

    private static PlayerGuideInfo m_CurPlayerGuideInfo = new PlayerGuideInfo();

    private bool m_IsMaskEnable = false;
    private bool m_IsFocusAnim = true;
    private Action m_onClickBlackCallback = null;

    private float _offsetX = 0;
    private float _offsetY = 0;

    private Vector3 _offset = Vector3.zero;
    public bool IsMaskEnable
    {
        get { return m_IsMaskEnable; }
        set { m_IsMaskEnable = value; }
    }

    public delegate void OnShowGuide();
    void Awake()
    {
        m_Instance = this;
    }
	
	void Update () 
    {
        // 开始来一次位置修正
        if (false == m_OffSetCorrectFlag
            || (m_UIObj && m_NewPlayerGuideOffSet.transform.position != (m_UIObj.transform.position + _offset)))
        {
            if (m_UIObj)
            {
                ResetHandePos();
                m_NewPlayerGuideOffSet.transform.position = m_UIObj.transform.position+_offset;
                m_NewPlayerGuideOffSet.SetActive(true);
                ResetFocusTrans();
            }
            m_OffSetCorrectFlag = true;
        }

        if (m_UIObj == null || m_UIObj.activeInHierarchy == false)
        {
            CloseWindow();
        }
	}

    void ResetHandePos()
    {
        Vector3 Pos = Vector3.zero;
        switch (m_MotionType)
        {
            case MotionType.LeftConner:
                Pos.x = -m_HandRadius / 2f;
                break;

            case MotionType.FromL2R:
            case MotionType.Standstill:
            case MotionType.Circle:
            case MotionType.Twinkle:
                break;

            default:
                Pos.x = m_HandRadius / 2f;
                break;
        }
        m_HandObject.transform.localPosition = Pos;
    }

    void FixedUpdate()
    {
        // 自动关闭界面
        AutoCloseWindow();

        HandMoving();
    }

    void OnDestroy()
    {
        if (m_Instance != null)
        {
            m_Instance = null;
            m_onClickBlackCallback = null;
        }       
    }

    void InitWindow(GameObject UIObj, float offsetX = 0, float offsetY = 0)
    {
        //gameObject.SetActive(true);
        //gameObject.layer = UIObj.layer;
        if (UIObj == null)
        {
            return;
        }
        _offset = new Vector3(offsetX,offsetY,0);
        m_NewPlayerGuideOffSet.transform.position = UIObj.transform.position + _offset;

        m_NewPlayerGuid.gameObject.SetActive(true);
        m_BoxColliderLeft.gameObject.SetActive(true);
        m_BoxColliderRight.gameObject.SetActive(true);
        m_BoxColliderBottom.gameObject.SetActive(true);
        m_BoxColliderTop.gameObject.SetActive(true);

        m_NewPlayerGuideOffSet.SetActive(false);

        // 位置重置
        m_HandObject.transform.localPosition = Vector3.zero;
        m_BoxColliderLeft.gameObject.transform.localPosition = Vector3.zero;
        m_BoxColliderRight.gameObject.transform.localPosition = Vector3.zero;
        m_BoxColliderTop.gameObject.transform.localPosition = Vector3.zero;
        m_BoxColliderBottom.gameObject.transform.localPosition = Vector3.zero;

        // focus 位置重置
        for (int i = 0; i < 4; i ++ )
        {
            focusTrans[i] = focusTwPos[i].transform;
            focusTwPos[i].enabled = false;
        }

        focusTwAlpha = m_NewPlayerGuid.GetComponent<TweenAlpha>();
        focusTwAlpha.enabled = false;
        ResetFocusTrans();
        TweenAlpha tween = m_HandObject.GetComponent<TweenAlpha>();
        if (tween)
        {
            tween.Reset();
            tween.enabled = false;
        }

        m_HandRadius = 0;
        m_CurCloseTime = 0;
        m_CurIntervalTime = 0;
        m_Angle = 0;
        m_MotionType = MotionType.Circle;
        m_OffSetCorrectFlag = false;
        m_UIObj = UIObj;
    }

    void ResetFocusTrans()
    {
        int logicW = UIRootAdapter.GetLogicWidth() / 2;
        int logicH = UIRootAdapter.GetLogicHeight() / 2;
        Vector3 offset = m_NewPlayerGuideOffSet.transform.localPosition;
        focusTrans[0].localPosition = new Vector3(logicW + 1, logicH) - offset;
        focusTrans[1].localPosition = new Vector3(-logicW, logicH + 1) - offset;
        focusTrans[2].localPosition = new Vector3(-logicW - 1, -logicH) - offset;
        focusTrans[3].localPosition = new Vector3(logicW, -logicH - 1) - offset;
        for (int i = 0; i < 4; i++)
        {
            focusTwPos[i].from = focusTrans[i].localPosition;
        }
    }

    void HandMoving()
    {
        if (null == m_HandObject)
        {
            return;
        }

        switch (m_MotionType)
        {
            case MotionType.Circle:
                // remove circle moving
                //if (m_Angle >= 360 && m_CurIntervalTime < m_IntervalTime)
                //{
                //    m_CurIntervalTime += Time.deltaTime;
                //    return;
                //}
                //else if (m_CurIntervalTime >= m_IntervalTime)
                //{
                //    m_Angle = 0;
                //    m_CurIntervalTime = 0;
                //}

                //m_Angle += 180 * Time.deltaTime;
                //m_HandObject.transform.RotateAround(m_NewPlayerGuideOffSet.transform.position, Vector3.forward, 180 * Time.deltaTime);
                //m_HandObject.transform.localRotation = Quaternion.identity;
                break;

            case MotionType.FromR2L:
                if (m_DisOffSet >= m_HandRadius / 2 && m_CurIntervalTime < m_IntervalTime)
                {
                    m_CurIntervalTime += Time.deltaTime;
                    return;
                }
                else if (m_CurIntervalTime >= m_IntervalTime)
                {
                    m_DisOffSet = 0;
                    m_CurIntervalTime = 0;
                    m_HandObject.transform.localPosition += new Vector3(m_HandRadius / 2, 0, 0);
                }
                m_DisOffSet += 100 * Time.deltaTime;
                m_HandObject.transform.localPosition -= new Vector3(100 * Time.deltaTime, 0, 0);
                break;

            case MotionType.Twinkle:
                TweenAlpha tween = m_HandObject.GetComponent<TweenAlpha>();
                if (tween)
                {
                    tween.enabled = true;
                }
                break;

            case MotionType.LeftConner:
                if (m_Angle >= 90 && m_CurIntervalTime < m_IntervalTime)
                {
                    m_CurIntervalTime += Time.deltaTime;
                    m_HandObject.transform.localPosition = new Vector3(-m_HandRadius / 2, 0, 0);
                    return;
                }
                else if (m_CurIntervalTime >= m_IntervalTime)
                {
                    m_Angle = 0;
                    m_CurIntervalTime = 0;
                }

                m_Angle += 90 * Time.deltaTime;
                m_HandObject.transform.RotateAround(m_NewPlayerGuideOffSet.transform.position, Vector3.back, 90 * Time.deltaTime);
                m_HandObject.transform.localRotation = Quaternion.identity;
                break;

            case MotionType.FromL2R:
                if (m_DisOffSet >= m_HandRadius / 2 && m_CurIntervalTime < m_IntervalTime)
                {
                    m_CurIntervalTime += Time.deltaTime;
                    return;
                }
                else if (m_CurIntervalTime >= m_IntervalTime)
                {
                    m_DisOffSet = 0;
                    m_CurIntervalTime = 0;
                    m_HandObject.transform.localPosition = Vector3.zero;
                }
                m_DisOffSet += 100 * Time.deltaTime;
                m_HandObject.transform.localPosition += new Vector3(100 * Time.deltaTime, 0, 0);
                break;

            case MotionType.Standstill:
                break;

            default:
                break;
        }
    }
    /// <summary>
    /// 显示新手教学
    /// </summary>
    /// <param name="UIObj">新手教学框位置 中心点</param>
    /// <param name="nWidth">新手教学框宽度</param>
    /// <param name="nHeight">新手教学框高度</param>
    /// <param name="strText">新手教学框文字描述</param>
    /// <param name="TextLocation">新手教学框文字描述位置，参数为“top， bottom， left， right, canter”</param>
    /// <param name="nMotionType">新手教学手运动方式，参数为“0--画圈, 1--右到左直线, 2--手指闪烁, 3--圆左上1/4”</param>
    /// <param name="bIsBoxEnable">新手教学框是否显示，参数为“0--不显示, 1--显示”</param>
    /// <param name="bIsMaskEnable">新手教学蒙版是否显示，参数为“0--不显示, 1--显示”</param>
    /// <param name="bIsForever">是否不消失</param>
    /// <param name="deleOnShowGuide">显示回调</param>
    /// <param name="afterShowGuid">显示之后回调</param>
    /// <param name="offsetX">X偏移量</param>
    /// <param name="offsetY">Y偏移量</param>
    /// <param name="isHasGuideFrame">是否依然显示提示框，现在改为默认不显示提示框，所以如果为true，说明是指示功能，指示功能添加了自己的触发逻辑</param>
    /// <param name="bIsFocusAnim">是否有聚焦动画</param>
    public static void OpenWindow(GameObject UIObj, int nWidth, int nHeight, string strText, string TextLocation, 
        int nMotionType = 0, bool bIsBoxEnable = false, bool bIsMaskEnable = false, bool bIsForever = false,
        OnShowGuide deleOnShowGuide = null, OnShowGuide afterShowGuid = null, float offsetX = 0, float offsetY = 0, bool isHasGuideFrame = false, 
        bool bIsFocusAnim = true, Action onClickBlackCallback = null)
    {
        if (PlayerPreferenceData.NewPlayerGuideClose)
        {
            return;
        }
        if (null == UIObj )
        {
            LogModule.DebugLog(UIObj + "UIobj is null!!!");
            return;
        }
        Debug.LogWarning("FTE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        GuideSpriteType sprType = GuideSpriteType.NoFrame;
        if (isHasGuideFrame)
        {
            sprType = GuideSpriteType.Rectangle;
        }
        //TextLocation = "center";
        m_CurPlayerGuideInfo.Init(UIObj, nWidth, nHeight, strText, TextLocation, nMotionType,
            bIsBoxEnable, bIsMaskEnable, bIsForever, bIsFocusAnim, sprType, deleOnShowGuide, afterShowGuid, offsetX, offsetY, onClickBlackCallback);
        //PlayerGuideInfo curInfo = new PlayerGuideInfo(UIObj, nWidth, nHeight, strText, TextLocation, nMotionType, bIsBoxEnable, bIsMaskEnable, bIsForever, GuideSpriteType.Rectangle);
        IsOpenFlag = true;

        UIManager.ShowUI(UIInfo.NewPlayerGuidRoot, OnOpenWindow);

    }

    public static void OpenWindow_Circle(GameObject UIObj, int nRadius, string strText, string TextLocation, 
        int nMotionType = 0, bool bIsBoxEnable = false, bool bIsMaskEnable = false, bool bIsForever = false,
        OnShowGuide deleOnShowGuide = null, OnShowGuide afterShowGuide = null, bool isHasGuideFrame = false, bool bIsFocusAnim = true, Action onClickBlackCallback = null)
    {
        if (PlayerPreferenceData.NewPlayerGuideClose)
        {
            return;
        }
        if (null == UIObj)
        {
            LogModule.DebugLog(UIObj + "UIobj is null!!!");
            return;
        }
        Debug.LogWarning("FTE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        GuideSpriteType sprType = GuideSpriteType.NoFrame;
        if (isHasGuideFrame)
        {
            sprType = GuideSpriteType.Circle;
        }
        //TextLocation = "center";
        m_CurPlayerGuideInfo.Init(UIObj, nRadius, nRadius, strText, TextLocation,
            nMotionType, bIsBoxEnable, bIsMaskEnable, bIsForever, bIsFocusAnim, sprType, deleOnShowGuide, afterShowGuide, 0f, 0f, onClickBlackCallback);
        //PlayerGuideInfo curInfo = new PlayerGuideInfo(UIObj, nRadius, nRadius, strText, TextLocation, nMotionType, bIsBoxEnable, bIsMaskEnable, bIsForever, GuideSpriteType.Circle);
        IsOpenFlag = true;

        UIManager.ShowUI(UIInfo.NewPlayerGuidRoot, OnOpenWindow);
    }

    static void OnOpenWindow(bool bSuccess, object info)
    {
        if (bSuccess == false)
        {
            return;
        }
        //PlayerGuideInfo curInfo = info as PlayerGuideInfo;
        if (null != m_Instance && m_CurPlayerGuideInfo.IsValid()/* && null != curInfo*/)
        {
            m_Instance.InitWindow(m_CurPlayerGuideInfo._UIObj, m_CurPlayerGuideInfo._offsetX, m_CurPlayerGuideInfo._offsetY);
            // 手
            m_Instance.UpdateHand(m_CurPlayerGuideInfo._nWidth, m_CurPlayerGuideInfo._nHeight, m_CurPlayerGuideInfo._nMotionType);
            // 新手框、蒙版
            m_Instance.UpdateBoxMask(m_CurPlayerGuideInfo._UIObj, m_CurPlayerGuideInfo._nWidth, m_CurPlayerGuideInfo._nHeight, 
                m_CurPlayerGuideInfo._bIsBoxEnable, m_CurPlayerGuideInfo._bIsMaskEnable, m_CurPlayerGuideInfo._bIsFocusAnim, m_CurPlayerGuideInfo._GuideSpriteType,
                m_CurPlayerGuideInfo._onClickBlackCallback);
            // 更新文字提示的位置
            m_Instance.UpdateRemindLabelPos(m_CurPlayerGuideInfo._strText, m_CurPlayerGuideInfo._TextLocation, m_CurPlayerGuideInfo._GuideSpriteType);
            // FTE Sound
            m_Instance.PlayFTESound(m_CurPlayerGuideInfo._UIObj.name);
            // 有关时间
            m_Instance.UpdateTimeLimit(m_CurPlayerGuideInfo._bIsForever);

            if (m_CurPlayerGuideInfo._deleOnShowGuide != null)
            {
                m_CurPlayerGuideInfo._deleOnShowGuide();
            }
        }

        m_CurPlayerGuideInfo.CleanUp();
    }
    void UpdateTimeLimit(bool bForever)
    {
        m_bForever = bForever;
    }

    void UpdateHand(int nWidth, int nHeight,int nMotionType)
    {
        // 手位置
        m_MotionType = (MotionType)System.Enum.ToObject(typeof(MotionType), nMotionType);
        if (nWidth > nHeight)
        {
            m_HandRadius = nHeight;
        }
        else
            m_HandRadius = nWidth;

        if (m_HandObject && m_NewPlayerGuid)
        {
            ResetHandePos();
        }

        m_HandObject.SetActive((int)m_MotionType >= 0);
    }

    void UpdateBoxMask(GameObject UIObj, int nWidth, int nHeight, bool bIsBoxEnable, bool bIsMaskEnable, bool bIsFocusAnim, GuideSpriteType eGuideSpriteType, Action onClickBlackCallback)
    {
        // 指引框
        if (m_NewPlayerGuid == null || m_NewPlayerGuidCircle == null)
        {
            LogModule.DebugLog("NewPlayerGuidLogic---Error: m_NewPlayerGuid is null");
            return;
        }

        if (false == bIsBoxEnable)
        {
            m_NewPlayerGuid.gameObject.SetActive(false);
            m_NewPlayerGuidCircle.gameObject.SetActive(false);
        }
        else
        {
            // 方框
            if (eGuideSpriteType == GuideSpriteType.Rectangle)
            {
                m_NewPlayerGuid.gameObject.SetActive(true);
                m_NewPlayerGuid.GetComponent<BoxCollider>().enabled = true;
                m_NewPlayerGuidCircle.gameObject.SetActive(false);

                m_NewPlayerGuid.GetComponent<UISprite>().GetComponent<UIWidget>().width = nWidth;
                m_NewPlayerGuid.GetComponent<UISprite>().GetComponent<UIWidget>().height = nHeight;
                m_NewPlayerGuid.alpha = 1f;
                m_NewPlayerGuid.GetComponent<UISprite>().enabled = !(nWidth == 0 && nHeight == 0);
            }
            else if (eGuideSpriteType == GuideSpriteType.Circle)
            {
                m_NewPlayerGuid.gameObject.SetActive(false);
                m_NewPlayerGuidCircle.gameObject.SetActive(true);

                m_NewPlayerGuidCircle.GetComponent<UISprite>().GetComponent<UIWidget>().width = nWidth;
                m_NewPlayerGuidCircle.GetComponent<UISprite>().GetComponent<UIWidget>().height = nWidth;
            }
            else if (eGuideSpriteType == GuideSpriteType.NoFrame)
            {
                m_NewPlayerGuid.gameObject.SetActive(true);
                m_NewPlayerGuid.GetComponent<BoxCollider>().enabled = false;
                m_NewPlayerGuidCircle.gameObject.SetActive(false);
                m_NewPlayerGuid.alpha = 0;
                m_NewPlayerGuid.GetComponent<UISprite>().GetComponent<UIWidget>().width = nWidth + 10;
                m_NewPlayerGuid.GetComponent<UISprite>().GetComponent<UIWidget>().height = nHeight + 10;
            }
        }

        // 蒙版
        if (false == bIsMaskEnable)
        {
            m_BoxColliderLeft.gameObject.SetActive(false);
            m_BoxColliderRight.gameObject.SetActive(false);
            m_BoxColliderBottom.gameObject.SetActive(false);
            m_BoxColliderTop.gameObject.SetActive(false);
        }
        else
        {
            m_BoxColliderLeft.gameObject.transform.localPosition = new Vector3(-750 - nWidth / 2, -750 + nHeight / 2, 0);
            m_BoxColliderRight.gameObject.transform.localPosition = new Vector3(750 + nWidth / 2, 750 - nHeight / 2, 0);
            m_BoxColliderTop.gameObject.transform.localPosition = new Vector3(-750 + nWidth / 2, 750 + nHeight / 2, 0);
            m_BoxColliderBottom.gameObject.transform.localPosition = new Vector3(750 - nWidth / 2, -750 - nHeight / 2, 0);
            
            // 设置focus Animation
            for (int i = 0; i < 4; i++ )
            {
                focusTwPos[i].from = focusTrans[i].localPosition;
            }
            focusTwPos[0].to = new Vector3(nWidth / 2f + 0.5f, nHeight / 2f);
            focusTwPos[1].to = new Vector3(-nWidth / 2f, nHeight / 2f + 1f);
            focusTwPos[2].to = new Vector3(-nWidth / 2f - 1f, -nHeight / 2f);
            focusTwPos[3].to = new Vector3(nWidth / 2f, -nHeight / 2f - 1f);
            EventDelegate.Add(focusTwAlpha.onFinished, focusTweenFinishHandler);
        }
        m_IsMaskEnable = bIsMaskEnable;
        m_IsFocusAnim = bIsFocusAnim;
        m_onClickBlackCallback = onClickBlackCallback;
    }

    void focusTweenFinishHandler()
    {
        for (int i = 0; i < 4; i ++ )
        {
            focusTwPos[i].Reset();
            focusTwPos[i].enabled = false;
        }
        focusTwAlpha.Reset();
        focusTwAlpha.enabled = false;
    }
    
    /// <summary>
    /// 关闭新手教学
    /// </summary>
    public static void CloseWindow()
    {
        // 临时添加
        if (IsOpenFlag == false)
        {
            return;
        }
        Debug.LogWarning("NewPlayerGuidLogic.CloseWindow()!!!!!!!!!");
        m_CurCloseTime = 0;
        m_CurIntervalTime = 0;
        m_Angle = 0;
        m_DisOffSet = 0;
        IsOpenFlag = false;
        if (m_Instance)
        {
            m_Instance.m_HandRadius = 0;
            m_Instance.m_UIObj = null;
            m_Instance.m_HandObject.transform.localPosition = Vector3.zero;
        }
        UIManager.CloseUI(UIInfo.NewPlayerGuidRoot);
		Messenger.Broadcast(MessengerConst.OnNewPlayerGuideClose);

        if (m_CurPlayerGuideInfo._afterShowGuide != null)
        {
            m_CurPlayerGuideInfo._afterShowGuide();
        }
		CurrentGuideID = -1;
    }

    
    void AutoCloseWindow()
    {
        //if (m_UIObj == null || m_UIObj.activeInHierarchy == false)
		if (m_UIObj == null)
        {
            CloseWindow();
            return;
        }

        float closetime = m_ChangedCloseWindowTime <= 0 ? m_AutoCloseWindowTime : m_ChangedCloseWindowTime;

        if (!m_bForever && m_CurCloseTime >= closetime)
        {
            CloseWindow();
            return;
        }
        m_CurCloseTime += Time.deltaTime;
    }

    /// <summary>
    /// 更新文字提示的位置
    /// </summary>
    void UpdateRemindLabelPos(string strText, string TextLocation, GuideSpriteType eType)
    {
        if (strText == "")
        {
            m_RemindLabel.gameObject.SetActive(false);
            m_RemindBackground.gameObject.SetActive(false);
            m_OptDec.gameObject.SetActive(false);
            m_FTECenterTxt.gameObject.SetActive(false);
        }
        else if (TextLocation == "center")
        {
            // FTE center text
            m_RemindLabel.gameObject.SetActive(false);
            m_RemindBackground.gameObject.SetActive(false);
            m_OptDec.gameObject.SetActive(false);
            m_FTECenterTxt.gameObject.SetActive(true);
            m_FTECenterTxt.text = strText;
            m_FTECenterTxtBg.height = strText.Length > 10 ? 83 : 63;
            //m_FTECenterTxt.transform.position = UICamera.currentCamera.ScreenToWorldPoint(new Vector3(Screen.width / 2f, Screen.height * 0.75f));
        }
        else
        {
            m_FTECenterTxt.gameObject.SetActive(false);
            m_RemindLabel.gameObject.SetActive(true);
            m_RemindBackground.gameObject.SetActive(true);
            m_OptDec.gameObject.SetActive(true);

            m_RemindLabel.text = strText;
            m_RemindLabel.GetComponent<UILabel>().AssumeNaturalSize();

//            int nWidth = m_RemindLabel.GetComponent<UILabel>().GetComponent<UIWidget>().width;
//            int nHeight = m_RemindLabel.GetComponent<UILabel>().GetComponent<UIWidget>().height;

            //m_RemindBackground.GetComponent<UISprite>().GetComponent<UIWidget>().width = nWidth + 10;
            //m_RemindBackground.GetComponent<UISprite>().GetComponent<UIWidget>().height = nHeight + 20;

            // 描述文字偏移
            int Xoffset = 0;
            int Yoffset = 0;
            int Distance = 20;

            int nGridWidth = eType == GuideSpriteType.Rectangle ? m_NewPlayerGuid.width : m_NewPlayerGuidCircle.width;
            int nGridHeight = eType == GuideSpriteType.Rectangle ? m_NewPlayerGuid.height : m_NewPlayerGuidCircle.height;

            GameObject GridObj = eType == GuideSpriteType.Rectangle ? m_NewPlayerGuid.gameObject : m_NewPlayerGuidCircle.gameObject;
            
            switch (TextLocation)
            {
                case "top":
                    Xoffset = (int)GridObj.transform.localPosition.x;
                    Yoffset = (int)GridObj.transform.localPosition.y + nGridHeight / 2 + m_RemindBackground.height / 2 + Distance;
                    m_RemindBackground.transform.localPosition = new Vector3(0, 0, 0);
                    m_RemindBackground.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    m_RemindArrowParent.transform.localPosition = new Vector3(0,80,0);
                    m_RemindArrowParent.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 90));
                    break;
                case "bottom":
                    Xoffset = (int)GridObj.transform.localPosition.x;
                    Yoffset = (int)GridObj.transform.localPosition.y - nGridHeight / 2 - m_RemindBackground.height / 2 - Distance;
                    m_RemindBackground.transform.localPosition = new Vector3(0, 0, 0);
                    m_RemindBackground.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    m_RemindArrowParent.transform.localPosition = new Vector3(0,-70,0);
                    m_RemindArrowParent.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, -90));
                    break;
                case "left":
                    Xoffset = (int)GridObj.transform.localPosition.x - nGridWidth / 2 - m_RemindBackground.width / 2 - Distance - 30;
                    Yoffset = (int)GridObj.transform.localPosition.y;
                    m_RemindBackground.transform.localPosition = new Vector3(0, 0, 0);
                    m_RemindBackground.transform.localRotation = Quaternion.Euler(new Vector3(0, 180, 0));
                    m_RemindArrowParent.transform.localPosition = new Vector3(0,0,0);
                    m_RemindArrowParent.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    break;
                case "right":
                    Xoffset = (int)GridObj.transform.localPosition.x + nGridWidth / 2 + m_RemindBackground.width / 2 + Distance;
                    Yoffset = (int)GridObj.transform.localPosition.y;
                    m_RemindBackground.transform.localPosition = new Vector3(0, 0, 0);
                    m_RemindBackground.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    m_RemindArrowParent.transform.localPosition = new Vector3(0,0,0);
                    m_RemindArrowParent.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    break;
                case "topleft":
                    Xoffset = (int)GridObj.transform.localPosition.x - nGridWidth / 2 - m_RemindBackground.width / 2 - Distance;
                    Yoffset = (int)GridObj.transform.localPosition.y + Distance;
                    m_RemindBackground.transform.localPosition = new Vector3(0, 0, 0);
                    m_RemindBackground.transform.localRotation = Quaternion.Euler(new Vector3(0, 180, 0));
                    m_RemindArrowParent.transform.localPosition = new Vector3(0,0,0);
                    m_RemindArrowParent.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    break;
                case "topright":
                    Xoffset = (int)GridObj.transform.localPosition.x + nGridWidth / 2 + m_RemindBackground.width / 2 + Distance;
                    Yoffset = (int)GridObj.transform.localPosition.y + Distance;
                    m_RemindBackground.transform.localPosition = new Vector3(0, 0, 0);
                    m_RemindBackground.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    m_RemindArrowParent.transform.localPosition = new Vector3(0,0,0);
                    m_RemindArrowParent.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    break;
                case "bottomleft":
                    Xoffset = (int)GridObj.transform.localPosition.x - nGridWidth / 2 - m_RemindBackground.width / 2 - Distance;
                    Yoffset = (int)GridObj.transform.localPosition.y - Distance;
                    m_RemindBackground.transform.localPosition = new Vector3(0, 0, 0);
                    m_RemindBackground.transform.localRotation = Quaternion.Euler(new Vector3(0, 180, 0));
                    m_RemindArrowParent.transform.localPosition = new Vector3(0,0,0);
                    m_RemindArrowParent.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    break;
                case "bottomright":
                    Xoffset = (int)GridObj.transform.localPosition.x + nGridWidth / 2 + m_RemindBackground.width / 2 + Distance;
                    Yoffset = (int)GridObj.transform.localPosition.y - Distance;
                    m_RemindBackground.transform.localPosition = new Vector3(0, 0, 0);
                    m_RemindBackground.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    m_RemindArrowParent.transform.localPosition = new Vector3(0,0,0);
                    m_RemindArrowParent.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    break;
                default: // 默认，左偏移
                    Xoffset = (int)GridObj.transform.localPosition.x - nGridWidth / 2 - m_RemindBackground.width / 2 - Distance;
                    Yoffset = (int)GridObj.transform.localPosition.y;
                    m_RemindBackground.transform.localPosition = new Vector3(0, 0, 0);
                    m_RemindBackground.transform.localRotation = Quaternion.Euler(new Vector3(0, 180, 0));
                    m_RemindArrowParent.transform.localPosition = new Vector3(0,0,0);
                    m_RemindArrowParent.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
                    break;
            }
            m_RemindObj.transform.localPosition = new Vector3(Xoffset, Yoffset, 0);
            //m_RemindLabel.transform.localPosition = new Vector3(Xoffset, Yoffset, 0);
            //m_RemindBackground.transform.localPosition = new Vector3(Xoffset, Yoffset, 0);
        }
    }

    void OnClickBlack()
    {
        if (m_IsMaskEnable && m_IsFocusAnim)
        {
            for (int i = 0; i < 4; i++)
            {
                focusTwPos[i].Play();
            }
            focusTwAlpha.Play();
        }
    }

    void OnClickGuideSprite()
    {
        if (m_onClickBlackCallback != null)
        {
            m_onClickBlackCallback();
        }
    }


#region Text FTE
    public static int txtFteIndex = -1;
#endregion

#region Sound FTE
    static string[] soundList = null;
    static int soundIndex = 0;
    static int lastSoundId = -1;
    void PlayFTESound(string startPointName)
    {
        Debug.LogWarning("PlayFTESound : " + startPointName);
        int soundId = GetPlaySoundId(startPointName);
        if (soundId != -1)
        {
            // play the sound
            if (lastSoundId != -1)
            {
                GameManager.gameManager.SoundManager.StopSoundEffect(lastSoundId);
            }
            Debug.LogWarning("PlaySoundEffect : " + soundId);
            GameManager.gameManager.SoundManager.PlaySoundEffect(soundId);
        }
        lastSoundId = soundId;
    }

    int GetPlaySoundId(string startPointName)
    {
        Tab_FTESound FTESound = GetFTESound(startPointName);
        if (FTESound != null)
        {
            // start a new list
            Debug.LogWarning("start a new list : " + FTESound.SoundList);
            soundList = null;
            if (FTESound.SoundList.Contains("|"))
            {
                soundList = FTESound.SoundList.Split('|');
            }
            else
            {
                soundList = new string[1];
                soundList[0] = FTESound.SoundList;
            }
            soundIndex = 0;
            return int.Parse(soundList[soundIndex]);
        }
        else
        {
            // check the existing list
            if (soundList != null)
            {
                soundIndex += 1;
                if (soundIndex < soundList.Length)
                {
                    // play the next one
                    return int.Parse(soundList[soundIndex]);
                }
                else
                {
                    // list done
                    soundList = null;
                    soundIndex = 0;
                }
            }
        }
        return -1;
    }

    Tab_FTESound GetFTESound(string startPointName)
    {
        foreach (var list in TableManager.GetFTESound().Values)
        {
            Tab_FTESound FTESound = list[0];
            if (FTESound.StartPoint == startPointName)
            {
                return FTESound;
            }
        }
        return null;
    }
#endregion

}