using System.IO;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.InteropServices;
using Games.SkillModle;
using GCGame.Table;
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using Games.GlobeDefine;
using Module.Log;
using GCGame;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public enum SKILLBAR
{
    MAXSKILLBARNUM = 5,
}
public struct SkillBarInfo
{
    public void CleanUp()
    {
        buttonInfo = null;
        CDPicInfo = null;
        CDPicBk = null;
        RingPic = null;
        IconInfo = null;
        CDEffect = null;
        SkillIndex = -1;
        IsPress = false;
        fCurrentStartTime = -1.0f;
        nCurrentCDTime = 0;
        nPreIndex = -1;
        fRemainCDTime = -1.0f;
        fDisabledRemTime = -1.0f;
        SkillCount = 0;
        fCurDisabledStartTime = -1.0f;
        isCompleted = false;
        CurSkillId = -1;
        nPreSkillId = -1;
    }

    public GameObject buttonInfo;
    public UISprite CDPicInfo;
    public UISprite CDPicBk;
    public GameObject RingPic;
    public UISprite IconInfo;
    public UISpriteAnimation CDEffect;
    public int SkillIndex;             //该按钮初始状态保存的技能索引

    public bool IsPress;
    public int SkillCount;             //第几个连续技?从1开始
    public bool isCompleted;
    public int CurSkillId;             //当前按钮对应的技能ID

    //添加关于变身的属性
    public float fCurrentStartTime;   //持续技能的开始时间
    public float nCurrentCDTime;        //当前技能可点击的持续时间
    public int nPreIndex;             //上个技能
    public float fRemainCDTime;       //当前技能可点击的剩余时间
    public float fDisabledRemTime;    //不可点击的剩余时间
    public float fCurDisabledStartTime; //不可点击的起始生效时间
    public float fCurDisabedTime;       //不可点击的总生效时间
    public int nPreSkillId;             //上个技能ID
}

//xp按钮个数
public enum SKILLXPBTNNUM
{
    MAXSKILLXPBTNNUM = 3,
}

public struct SkillXpBtnInfo
{
    public void CleanUp()
    {
        buttonInfo = null;
        xpIconInfo = null;
        xpObj = null;
        xpLock = null;
        xpGrayIcon = null;
        xpTweenPosition = null;
    }

    public GameObject xpObj;
    public GameObject buttonInfo;
    public UISprite xpIconInfo;
    public GameObject xpLock;
    public GameObject xpGrayIcon;
    public TweenPosition xpTweenPosition;
}

public class AttackBarInfo
{
    public void CleanUp()
    {
        nSkillFirstIndex = 0;
        fCurrentStartTime = -1.0f;
        nCurrentCDTime = 0;
        fRemainCDTime = -1.0f;
        fDisabledRemTime = -1.0f;
        fCurDisabledStartTime = -1.0f;
        fCurDisabledTime = -1.0f;
       // attackIconPic.spriteName = "PuTongGongJi";
       // nCurSkillId = -1;
        nCurSkillId = m_nNormalSkillId;
        attackIconPic.spriteName = m_strNormalAttackSpriteName;
        isPress = false;
        fPressTime = 0f;
        canUseNext = false;
        attackObj = null;
        canUseNextUpdateTime = 0f;
    }

    public void ReturnFirstState()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer != null)
        {
            if (nSkillFirstIndex >= 0 && nSkillFirstIndex < _mainPlayer.OwnSkillInfo.Length)
            {
                nCurSkillId = _mainPlayer.OwnSkillInfo[nSkillFirstIndex].SkillId;
            }
        }
        fCurrentStartTime = -1.0f;
        nCurrentCDTime = 0;
        fRemainCDTime = -1.0f;
    }

    public AttackBarInfo(int normalSkillId)
    {
        UpdateData(normalSkillId);
    }
    public void UpdateData(int normalSkillId)
    {
        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(normalSkillId, 0);
        if (_skillEx != null)
        {
            Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
            if (null != _skillBase)
            {
                this.m_strNormalAttackSpriteName = _skillBase.Icon;
            }
        }
        this.m_nNormalSkillId = normalSkillId;
    }
    public int nSkillFirstIndex;      //如果是连续技能，是该组的第一个技能Index，非连续技能是本身
    public float fCurrentStartTime;   //持续技能的开始时间
    public float nCurrentCDTime;        //当前技能可点击的持续时间
    public float fRemainCDTime;       //当
    public UISprite attackIconPic;
    public float fDisabledRemTime;    //不可点击的生效时间
    public float fCurDisabledStartTime; //不可点击的起始时间
    public float fCurDisabledTime;     //总的不可点击时间
    public int nCurSkillId;            //普攻按钮当前的技能ID

    public bool isPress;               //普攻是否在按压状态
    public float fPressTime;           //按压持续时间变量
    public bool canUseNext;

    public float canUseNextUpdateTime; //下个技能可用的最迟刷新时间
    public GameObject attackObj;

    //普攻按钮的特殊处理
    private int m_nNormalSkillId = 0;//
    private string m_strNormalAttackSpriteName = "PuTongGongJi";

}

public class SkillBarLogic : MonoBehaviour
{
    public GameObject m_SkillChangeStateEffect;
    public GameObject m_FirstChild;

    public UISprite m_Skill1CDPic;
    public UISprite m_Skill2CDPic;
    public UISprite m_Skill3CDPic;
    public UISprite m_Skill4CDPic;

    public UISprite m_CrashCDPic;

    //bk 目前只做4个
    public UISprite m_Skill1CDBK;
    public UISprite m_Skill2CDBK;
    public UISprite m_Skill3CDBK;
    public UISprite m_Skill4CDBK;
    public UISprite m_Skill5CDBK;

    public UISprite m_CrashCDBK;

    public GameObject m_SkillRing1;
    public GameObject m_SkillRing2;
    public GameObject m_SkillRing3;
    public GameObject m_SkillRing4;
    public GameObject m_SkillRing5;

    public GameObject m_CrashRing;

    public UISprite m_Skill5CDPic;
    public UISprite m_Skill6CDPic;
    public UISprite m_Skill7CDPic;
    public UISprite m_Skill8CDPic;
    //public UISprite m_SkillXPCPPic;

    public UISprite m_Skill1IconPic;
    public UISprite m_Skill2IconPic;
    public UISprite m_Skill3IconPic;
    public UISprite m_Skill4IconPic;
    public UISprite m_Skill5IconPic;
    public UISprite m_Skill6IconPic;
    public UISprite m_Skill7IconPic;
    public UISprite m_Skill8IconPic;
    public UISprite m_SkillXP1IconPic;
    public UISprite m_SkillXP2IconPic;
    public UISprite m_SkillXP3IconPic;
    public UISprite m_AttackIconPic;

    public GameObject m_Skill1Bt;
    public GameObject m_Skill2Bt;
    public GameObject m_Skill3Bt;
    public GameObject m_Skill4Bt;
    public GameObject m_Skill5Bt;
    public GameObject m_Skill6Bt;
    public GameObject m_Skill7Bt;
    public GameObject m_Skill8Bt;
    public GameObject m_SkillAttackBt;
    public GameObject m_SkillXP1Bt;
    public GameObject m_SkillXP2Bt;
    public GameObject m_SkillXP3Bt;

    public GameObject m_skillXp1Obj;
    public GameObject m_skillXp2Obj;
    public GameObject m_skillXp3Obj;

    public GameObject m_skillXp1Lock;
    public GameObject m_skillXp2Lock;
    public GameObject m_skillXp3Lock;

    public GameObject m_skillXp1Gray;
    public GameObject m_skillXp2Gray;
    public GameObject m_skillXp3Gray;

    public TweenPosition m_skillXp1Tween;
    public TweenPosition m_skillXp2Tween;
    public TweenPosition m_skillXp3Tween;

    public UISprite m_xpValueIcon;
    private bool m_xpShowBtnState = true;
    private int m_xpShowIndex = 0;
    public TweenAlpha m_xpBg;
    public UISpriteAnimation m_Skill1CDEffect;
    public UISpriteAnimation m_Skill2CDEffect;
    public UISpriteAnimation m_Skill3CDEffect;
    public UISpriteAnimation m_Skill4CDEffect;
    public UISpriteAnimation m_Skill5CDEffect;
    public UISpriteAnimation m_Skill6CDEffect;
    public UISpriteAnimation m_Skill7CDEffect;
    public UISpriteAnimation m_Skill8CDEffect;
    public UISpriteAnimation m_CrashCDEffect;

    public GameObject m_AttackGuideObject;

    public GameObject m_CrashBtn;        //骑乘冲撞技能按钮

    //技能按钮大小参数
    private Vector2 m_vecSkillBtnSize_01 = new Vector2(61, 61);
    private Vector2 m_vecSkillBtnSize_02 = new Vector2(100, 100);

    private bool m_CrashBtnIntroGuide = false;
    public bool CrashBtnIntroGuide
    {
        get { return m_CrashBtnIntroGuide; }
        set { m_CrashBtnIntroGuide = value; }
    }

    public GameObject m_MountBtn;

    public TweenPosition m_xpObj;

    private static SkillBarLogic m_Instance = null;
    public static SkillBarLogic Instance()
    {
        return m_Instance;
    }

    //xp按钮
    private SkillXpBtnInfo[] m_MySkillXpInfo;
    public SkillXpBtnInfo[] MySkillXpInfo
    {
        get { return m_MySkillXpInfo; }
        set { m_MySkillXpInfo = value; }
    }


    private SkillBarInfo[] m_MySkillBarInfo;
    public SkillBarInfo[] MySkillBarInfo
    {
        get { return m_MySkillBarInfo; }
        set { m_MySkillBarInfo = value; }
    }
    private bool m_bFirstUpdate = false;
    private bool m_bSetSkillBarSuccess = false;
    // 新手指引
    private int m_NewPlayerGuide_Step = 0;
    public int NewPlayerGuide_Step
    {
        get { return m_NewPlayerGuide_Step; }
        set { m_NewPlayerGuide_Step = value; }
    }

    private AttackBarInfo m_AttackBarInfo;
    public AttackBarInfo _AttackBarInfo
    {
        get { return m_AttackBarInfo; }
        set { m_AttackBarInfo = value; }
    }

    //特殊效果ID
    private int m_NewSkillEffectID = 60;         //新技能学会特效
    private int m_XPSkillEffectID = 64;         //XP技能学会特效
    private int m_nXpFullEffectID = 578;

    public float m_xpHideTime = 10.0f;
    private float m_xpBtnHitTime = -1.0f;

    public bool m_isUseSkillClick = false;

    public GameObject m_TransformSprite;

    private const float m_pressContinueTime = 1.0f;
    private float m_sendSkillTime = -1;

    private const float SENDTIME = 0.3f;

    private const float CanUseNextSkillTime = 1f;
    //常规技能总节点
    public GameObject m_skillObj;

    //变身后获得的新技能节点
    public GameObject m_afterChangeModeObj;

    //变身主按钮
    public GameObject m_mainXpBtnObj;

    public UIImageButton m_PVEBtn;
    public UIImageButton m_PVPBtn;

    public UISprite m_SpritePVEBG;
    public UISprite m_SpritePVPBG;

    public UILabel m_LblPvE;
    public UILabel m_LblPvP;

    public UISprite m_mainXpBtnCanUse; //满75的时候替换按钮
    //当前主变身按钮附带呼出按钮的显示状态
    public bool m_isXpBtnOpen = false;

    private bool m_isChangeMode = false;

    public GameObject m_objXpRoot;

    //变身控制 第1组Tween 出现
    public TweenPosition m_TweenPvP;
    public TweenPosition m_TweenPVE;
   
    public UISlider m_SliderForChoose;
    public GameObject m_BGForChoose;

    public UISprite m_SpritePVE;
    public UISprite m_SpritePVP;

    public Color m_ColorXpEnable = new Color(1,1,1,1);
    public Color m_ColorXpDisable = new Color(0.19f,0.19f,0.19f,1);
    public TweenStatus m_TweenStatus = TweenStatus.Running;

    private TransformController m_TransformCon;
    public TransformController TransformCon
    {
        get { return m_TransformCon; }
    }
    public MUIWave m_UIWave;
    public GameObject m_TransformOpenBtn;

    private UIEffectBehaviourController m_xpFullEffectCon;
    //缓存了m_xpFullEffectCon 这个特效。。。。

    public GameObject m_EffectPve01;
    public GameObject m_EffectPve02;

    public GameObject m_EffectPvP01;
    public GameObject m_EffectPvP02;

    public GameObject[] m_objHideWhenTween;
    public GameObject[] m_SkillButtonEffect;
    public System.Action<int, int> SkillBtnShowEffect;
    private bool ShowSkillEffectButSign = false;
    private List<int> ShowSkillEffectBtnIndexs = new List<int>();
    private float ShowSkillEffectButTime = 0f;
    private bool ShowSkillEffectButTimeSign = false;
    public enum TweenStatus
    {
        Running=0,
        Done,
    }
    void Awake()
    {
        m_Instance = this;
        m_xpBtnHitTime = -1.0f;
    }
    // Use this for initialization
    void Start()
    {
//#if UNITY_ANDROID		
//        m_FirstChild.SetActive(false);
//#else
//        m_FirstChild.SetActive(true);
//#endif
        m_MySkillBarInfo = new SkillBarInfo[(int)SKILLBAR.MAXSKILLBARNUM];
        for (int i = 0; i < (int)SKILLBAR.MAXSKILLBARNUM; i++)
        {
            m_MySkillBarInfo[i] = new SkillBarInfo();
            m_MySkillBarInfo[i].CleanUp();
        }

        m_MySkillXpInfo = new SkillXpBtnInfo[(int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM];
        for (int i = 0; i < (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM; i++)
        {
            m_MySkillXpInfo[i] = new SkillXpBtnInfo();
            m_MySkillXpInfo[i].CleanUp();
        }

        InitMySkillBarInfo(0, m_Skill1Bt, m_Skill1CDPic, m_Skill1CDBK, m_SkillRing1, m_Skill1IconPic, -1, m_Skill1CDEffect);
        InitMySkillBarInfo(1, m_Skill2Bt, m_Skill2CDPic, m_Skill2CDBK, m_SkillRing2, m_Skill2IconPic, -1, m_Skill2CDEffect);
        InitMySkillBarInfo(2, m_Skill3Bt, m_Skill3CDPic, m_Skill3CDBK, m_SkillRing3, m_Skill3IconPic, -1, m_Skill3CDEffect);
        InitMySkillBarInfo(3, m_Skill4Bt, m_Skill4CDPic, m_Skill4CDBK, m_SkillRing4, m_Skill4IconPic, -1, m_Skill4CDEffect);
        InitMySkillBarInfo(4, m_Skill5Bt, m_Skill5CDPic, m_Skill5CDBK, m_SkillRing5, m_Skill5IconPic, -1, m_Skill5CDEffect);

        InitMySkillXpBtnInfo(0, m_SkillXP1Bt, m_SkillXP1IconPic, m_skillXp1Obj, m_skillXp1Lock, m_skillXp1Gray, m_skillXp1Tween);
        InitMySkillXpBtnInfo(1, m_SkillXP2Bt, m_SkillXP2IconPic, m_skillXp2Obj, m_skillXp2Lock, m_skillXp2Gray, m_skillXp2Tween);
        InitMySkillXpBtnInfo(2, m_SkillXP3Bt, m_SkillXP3IconPic, m_skillXp3Obj, m_skillXp3Lock, m_skillXp3Gray, m_skillXp3Tween);

        for (int i = 0; i < (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM; i++)
        {
            if (m_MySkillXpInfo[i].buttonInfo.activeInHierarchy)
            {
                UIEffectBehaviourController effectLogic = m_MySkillXpInfo[i].buttonInfo.GetComponent<UIEffectBehaviourController>();
                if (null == effectLogic)
                {
                    effectLogic = m_MySkillXpInfo[i].buttonInfo.AddComponent<UIEffectBehaviourController>();
                    effectLogic.InitEffect(m_MySkillXpInfo[i].buttonInfo);
                }
                if (null != effectLogic)
                {
                    effectLogic.PlayEffect(m_XPSkillEffectID);
                }
            }
        }

        //更新下 技能按钮信息
        UpdateSkillBarInfo();
        //普攻的按钮单独处理下
        UpdateAttackSkillBarInfo();

        if (GameManager.gameManager.PlayerDataPool.ForthSkillFlag == true)
        {
            NewPlayerGuide(4);
        }

        //冲撞按钮的初始化
        InitCrashBarInfo();
        //骑乘按钮
        m_MountBtn.SetActive(false);

        m_xpShowBtnState = true;
        m_xpBg.Reset();
        m_xpBtnHitTime = -1.0f;
        m_isUseSkillClick = false;

        UdpateXPBtnState();
        // m_afterChangeModeObj.SetActive(true);
        m_isXpBtnOpen = false;

        m_TransformCon = new TransformController(this);
        m_SliderForChoose.gameObject.SetActive(false);
        OnClickXpClose();
        InitXpFullEffect();
        InitWaveUI();

        m_PVEBtn.IsNeedGreyColour = false;
        m_PVPBtn.IsNeedGreyColour = false;
        //m_TweenPVE.onFinished = OnXpTweenFinish();
    }
    void InitWaveUI()
    {
        GameObject wavePrefab = ResourceManager.LoadUIPrefab("WaveTexture",1) as GameObject;
        GameObject waveObj = Instantiate(wavePrefab) as GameObject;
        waveObj.transform.parent = m_TransformOpenBtn.transform;
        waveObj.transform.localPosition = new Vector3(2,0,0);
        waveObj.transform.localScale = Vector3.one;
        m_UIWave=waveObj.GetComponent<MUIWave>();
        waveObj.SetActive(true);
    }
    //冲撞按钮初始化
    void InitCrashBarInfo()
    {
        m_CrashCDPic.fillAmount = 0;

        m_CrashBtn.SetActive(false);
        m_CrashCDBK.gameObject.SetActive(false);
        m_CrashCDPic.gameObject.SetActive(false);
        m_CrashRing.gameObject.SetActive(false);
    }

    void InitMySkillBarInfo(int nIndex, GameObject _button, UISprite _CDPic, UISprite _CDBk, GameObject _Ring, UISprite _IconPic, int _SkillIndex, UISpriteAnimation _CDEffect)
    {
        if (nIndex >= 0 && nIndex < (int)SKILLBAR.MAXSKILLBARNUM)
        {
            m_MySkillBarInfo[nIndex].buttonInfo = _button;
            m_MySkillBarInfo[nIndex].CDPicInfo = _CDPic;
            m_MySkillBarInfo[nIndex].IconInfo = _IconPic;
            m_MySkillBarInfo[nIndex].SkillIndex = _SkillIndex;
            m_MySkillBarInfo[nIndex].CDPicInfo.gameObject.SetActive(false);
            m_MySkillBarInfo[nIndex].IconInfo.spriteName = "Lock";
            m_MySkillBarInfo[nIndex].CDEffect = _CDEffect;
            m_MySkillBarInfo[nIndex].CDEffect.gameObject.SetActive(false);
            m_MySkillBarInfo[nIndex].CDPicBk = _CDBk;
            m_MySkillBarInfo[nIndex].CDPicBk.gameObject.SetActive(false);
            m_MySkillBarInfo[nIndex].RingPic = _Ring;
            m_MySkillBarInfo[nIndex].RingPic.SetActive(false);
        }
    }

    private void InitMySkillXpBtnInfo(int nIndex, GameObject _btton, UISprite _xpIconPic, GameObject _xpObj, GameObject _xpLock, GameObject _xpGray, TweenPosition _xpTweenPosition)
    {
        if (nIndex >= 0 && nIndex < (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM)
        {
            m_MySkillXpInfo[nIndex].buttonInfo = _btton;
            m_MySkillXpInfo[nIndex].xpIconInfo = _xpIconPic;
            m_MySkillXpInfo[nIndex].xpIconInfo.spriteName = "";
            m_MySkillXpInfo[nIndex].xpObj = _xpObj;
            m_MySkillXpInfo[nIndex].xpLock = _xpLock;
            m_MySkillXpInfo[nIndex].xpGrayIcon = _xpGray;
            m_MySkillXpInfo[nIndex].xpTweenPosition = _xpTweenPosition;
            m_MySkillXpInfo[nIndex].xpTweenPosition.Reset();
            m_MySkillXpInfo[nIndex].xpObj.SetActive(false);
        }
    }
    public void CleanUpSkillBarInfo()
    {
        for (int nIndex = 0; nIndex < (int)SKILLBAR.MAXSKILLBARNUM; nIndex++)
        {
            m_MySkillBarInfo[nIndex].SkillIndex = -1;
            m_MySkillBarInfo[nIndex].CurSkillId = -1;
            m_MySkillBarInfo[nIndex].IconInfo.spriteName = "Lock";
            m_MySkillBarInfo[nIndex].CDPicBk.gameObject.SetActive(false);
            m_MySkillBarInfo[nIndex].CDPicInfo.gameObject.SetActive(false);
            m_MySkillBarInfo[nIndex].RingPic.SetActive(false);
        }

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == _mainPlayer)
        {
            return;
        }

        //加个连击TIP按钮清理吧
        if (null != ComboSkillTipLogic.Instance())
        {
            // ComboSkillTipLogic.Instance().SetStep(0);
            ComboSkillTipLogic.Instance().Hide();
        }

        UserConfigData.AddSkillBarSetInfo(_mainPlayer.GUID.ToString(), m_MySkillBarInfo);
    }

    //变回原来状态保存一下原来的配置
    public void SaveNotChangeModeSkillBarInfo()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == _mainPlayer)
        {
            return;
        }


        for (int _skillIndex = 0; _skillIndex < _mainPlayer.OwnSkillInfo.Length; _skillIndex++)
        {
            int _skillID = _mainPlayer.OwnSkillInfo[_skillIndex].SkillId;
            if (_skillID > 0)
            {
                Tab_SkillEx _skillExinfo = TableManager.GetSkillExByID(_skillID, 0);
                if (_skillExinfo != null)
                {
                    Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillExinfo.BaseId, 0);
                    if (_skillBase != null)
                    {
                        SetSkillBarInfoByChangeState(_skillBase, _skillIndex, _mainPlayer.GetCurrentChangeState());
                    }
                }
            }

        }

        if (m_MySkillBarInfo != null)
        {
            UserConfigData.AddSkillBarSetInfo(_mainPlayer.GUID.ToString(), m_MySkillBarInfo);
        }
    }
    /// <summary>
    /// 普攻单独处理
    /// </summary>
    public void UpdateAttackSkillBarInfo()
    {
        int normalSKillId = -1;
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer != null && _mainPlayer.OwnSkillInfo != null && _mainPlayer.OwnSkillInfo.Length > 0)
        {
            normalSKillId = _mainPlayer.OwnSkillInfo[0].SkillId;
        }
        if (m_AttackBarInfo == null)
        {
            m_AttackBarInfo = new AttackBarInfo(normalSKillId);
            m_AttackBarInfo.attackIconPic = m_AttackIconPic;
        }
        else
        {
            m_AttackBarInfo.UpdateData(normalSKillId);
        }
        UpdateSkillSpriteSize(m_AttackIconPic, true);
        m_AttackBarInfo.CleanUp();
    }
    public void UpdateSkillBarInfo()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        m_bFirstUpdate = true;

        //         if (!m_skillObj.activeSelf)
        //             m_skillObj.SetActive(true);

        for (int _skillIndex = 0; _skillIndex < _mainPlayer.OwnSkillInfo.Length; _skillIndex++)
        {
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(_mainPlayer.OwnSkillInfo[_skillIndex].SkillId, 0);
            if (_skillEx != null)
            {
                Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                if (_skillBase != null && (_skillBase.SkillClass & (int)SKILLCLASS.XP) != 0)
                {
                    if (_skillBase.XpSkillIndex >= 1 && _skillBase.XpSkillIndex <= (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM)
                    {
                        m_MySkillXpInfo[_skillBase.XpSkillIndex - 1].xpIconInfo.spriteName = _skillBase.Icon;
                       // m_MySkillXpInfo[_skillBase.XpSkillIndex - 1].xpIconInfo.MakePixelPerfect();
                        UpdateSkillSpriteSize(m_MySkillXpInfo[_skillBase.XpSkillIndex - 1].xpIconInfo,false);
                        //XPNewPlayGuid();
                    }
                    //设置XP图标 
                }
            }
        }


        //获取当前的变身状态（没有变身，默认是0变身，反之开始从1,2,3计算变身）
        int nChangeState = _mainPlayer.GetCurrentChangeState();
        //读取技能栏配置
        m_bSetSkillBarSuccess = false;
        Dictionary<string, SkillBarInfo[]> _skillBarSetMap = UserConfigData.GetSkillBarSetInfo();
        if (_skillBarSetMap != null && _skillBarSetMap.ContainsKey(_mainPlayer.GUID.ToString()))
        {
            if (m_MySkillBarInfo != null)
            {
                SkillBarInfo[] _skillBarSetInfo = _skillBarSetMap[_mainPlayer.GUID.ToString()];
                for (int _skillBarIndex = 0; _skillBarIndex < m_MySkillBarInfo.Length; _skillBarIndex++)
                {
                    int nSkillIndex = _skillBarSetInfo[_skillBarIndex].SkillIndex;
                    if (nSkillIndex >= 0 && nSkillIndex < _mainPlayer.OwnSkillInfo.Length)
                    {
                        if (_mainPlayer.OwnSkillInfo[nSkillIndex].SkillId != -1)
                        {
                            SetSkillBarInfo(_skillBarIndex, nSkillIndex);
                        }
                        else // 保存的技能不存在 清掉
                        {
                            _skillBarSetInfo[_skillBarIndex].SkillIndex = -1;
                            _skillBarSetInfo[_skillBarIndex].CurSkillId = -1;
                            // 保存配置
                            UserConfigData.AddSkillBarSetInfo(_mainPlayer.GUID.ToString(), m_MySkillBarInfo);
                        }
                    }
                }
            }
        }

        if (m_bSetSkillBarSuccess == false) //配置读取失败了 给一个默认的配置
        {
            for (int _skillIndex = 0; _skillIndex < _mainPlayer.OwnSkillInfo.Length; _skillIndex++)
            {
                int _skillID = _mainPlayer.OwnSkillInfo[_skillIndex].SkillId;
                if (_skillID > 0)
                {
                    Tab_SkillEx _skillExinfo = TableManager.GetSkillExByID(_skillID, 0);
                    if (_skillExinfo != null)
                    {
                        Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillExinfo.BaseId, 0);
                        if (_skillBase != null)
                        {
                            SetSkillBarInfoByChangeState(_skillBase, _skillIndex, nChangeState);
                        }
                    }
                }
            }
            //保存配置
            if (m_MySkillBarInfo != null)
            {
                UserConfigData.AddSkillBarSetInfo(_mainPlayer.GUID.ToString(), m_MySkillBarInfo);
            }
        }


        if (Turntable.Instance() != null)
        {
            Turntable.Instance().UpdateSkillBarShow();
        }
        SkillBtnShowEffect = null;
    }
    /// <summary>
    /// 改变一个SkillBarSprite的size
    /// 常规技能和附加技能图标大小 61*61    普攻和2变普攻 100*100
    /// </summary>
    /// <param name="skillClass"></param>
    /// <param name="sprite"></param>
    private void UpdateSkillSpriteSize(UISprite sprite,bool forBigOne=false)
    {
        if (!forBigOne)
        {
            sprite.width = (int)m_vecSkillBtnSize_01.x;
            sprite.height = (int)m_vecSkillBtnSize_01.y;
        }
        else
        {
            sprite.width = (int)m_vecSkillBtnSize_02.x;
            sprite.height = (int)m_vecSkillBtnSize_02.y;
        }
    }

    private void SetSkillBarInfoByChangeState(Tab_SkillBase _skillBase, int skillIndex, int changeState)
    {
        //状态超过最大值了
        if (changeState < 0 || changeState >= _skillBase.getChangeModeCount())
            return;

        //只有非连续技能，非XP技能，该状态可显示，但不是连续技能的才可放入按钮中
        if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) == 0 &&
            (_skillBase.SkillClass & (int)SKILLCLASS.XP) == 0 &&
            (_skillBase.GetChangeModebyIndex(changeState)) >= 0 &&
            (_skillBase.FirstIndex == skillIndex) &&
            (_skillBase.SkillClass & (int)SKILLCLASS.PASSIVITY) == 0)
        {

            //当前变身特殊技能固定加在第四个位置上
            if ((_skillBase.SkillClass & (int)SKILLCLASS.CHANGEMODE) != 0)
            {
                int nChangeModeIndex  = -1;
                if(Utils.IsPvESkill(_skillBase))
                {
                    nChangeModeIndex = PlayerPreferenceData.PVESkillIdCurUsing;
                }
                else if(Utils.IsPvPSkill(_skillBase))
                {
                    nChangeModeIndex = PlayerPreferenceData.PVPSkillIdCurUsing;
                }
                SetSkillBarInfo(GlobeVar.CHANGEMODE_SKILLPOSITION, nChangeModeIndex);
                return;
            }

            for (int _skillBarIndex = 0; _skillBarIndex < (int)SKILLBAR.MAXSKILLBARNUM; _skillBarIndex++)
            {
                //找到一个空位置填上
                if (m_MySkillBarInfo != null && m_MySkillBarInfo[_skillBarIndex].SkillIndex == -1)
                {
                    SetSkillBarInfo(_skillBarIndex, skillIndex);
                    break;
                }
            }
        }


    }

    public void SetSkillBarInfo(int _skillBarIndex, int _skillIndex)
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        if (_skillBarIndex >= 0 && _skillBarIndex < (int)SKILLBAR.MAXSKILLBARNUM)
        {
            if (_skillIndex >= 0 && _skillIndex < _mainPlayer.OwnSkillInfo.Length)
            {
                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(_mainPlayer.OwnSkillInfo[_skillIndex].SkillId, 0);
                if (_skillEx != null)
                {
                    Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                    if (_skillBase != null)
                    {
                        m_MySkillBarInfo[_skillBarIndex].SkillIndex = _skillIndex;
                        m_MySkillBarInfo[_skillBarIndex].CurSkillId = _mainPlayer.OwnSkillInfo[_skillIndex].SkillId;
                        m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount = 0;
                        m_MySkillBarInfo[_skillBarIndex].CDPicInfo.gameObject.SetActive(false);
                        m_MySkillBarInfo[_skillBarIndex].CDPicBk.gameObject.SetActive(false);
                        m_MySkillBarInfo[_skillBarIndex].IconInfo.spriteName = _skillBase.Icon;
                       // m_MySkillBarInfo[_skillBarIndex].IconInfo.MakePixelPerfect();
                        UpdateSkillSpriteSize(m_MySkillBarInfo[_skillBarIndex].IconInfo,false);
                        m_bSetSkillBarSuccess = true;
                        m_MySkillBarInfo[_skillBarIndex].RingPic.SetActive(false);
                        if (SkillBtnShowEffect != null) {
                          SkillBtnShowEffect(_skillBarIndex, _skillIndex);
                        }
                    }
                }
            }
            else
            {
                m_MySkillBarInfo[_skillBarIndex].SkillIndex = -1;
                m_MySkillBarInfo[_skillBarIndex].CurSkillId = -1;
                m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount = 0;
                m_MySkillBarInfo[_skillBarIndex].CDPicInfo.gameObject.SetActive(false);
                m_MySkillBarInfo[_skillBarIndex].CDPicBk.gameObject.SetActive(false);
                m_MySkillBarInfo[_skillBarIndex].IconInfo.spriteName = "Lock";
            }
        }
    }

    public void ShowSkillButtonEffect(int _skillBarIndex, int _skillIndex)
    {

      ulong guid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
      if (UnityEngine.PlayerPrefs.GetInt("skill" + guid + _skillBarIndex) == 0) {
        ShowSkillEffectBtnIndexs.Add(_skillBarIndex);
        ShowSkillEffectButSign = true;
        UnityEngine.PlayerPrefs.SetInt("skill" + guid + _skillBarIndex, 1);
      } else {
        return;
      }
    }
    public void HideSkillButtonEffect()
    {
      foreach (GameObject go in m_SkillButtonEffect) {
        if (go != null) {
          go.SetActive(false);
        }
      }
    }
    public void SetSkillBarInfoForNext(int _skillBarIndex, int nNextSkillId)
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        int nChangeState = _mainPlayer.GetCurrentChangeState();
        if (_skillBarIndex >= 0 && _skillBarIndex < (int)SKILLBAR.MAXSKILLBARNUM)
        {
            if (nNextSkillId != -1)
            {
                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nNextSkillId, 0);
                if (_skillEx != null)
                {
                    Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                    if (_skillBase != null)
                    {
                        m_MySkillBarInfo[_skillBarIndex].CurSkillId = nNextSkillId;
                        m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount = 0;
                        m_MySkillBarInfo[_skillBarIndex].CDPicInfo.gameObject.SetActive(false);
                        m_MySkillBarInfo[_skillBarIndex].CDPicBk.gameObject.SetActive(false);
                        m_MySkillBarInfo[_skillBarIndex].IconInfo.spriteName = _skillBase.Icon;
                       // m_MySkillBarInfo[_skillBarIndex].IconInfo.MakePixelPerfect();
                        UpdateSkillSpriteSize(m_MySkillBarInfo[_skillBarIndex].IconInfo,false);
                        m_MySkillBarInfo[_skillBarIndex].RingPic.SetActive(true);

                        //如果是从高位回来的技能那么该组的技能全部进入cd状态。
                        if (m_MySkillBarInfo[_skillBarIndex].nPreSkillId != -1 && m_MySkillBarInfo[_skillBarIndex].CurSkillId < m_MySkillBarInfo[_skillBarIndex].nPreSkillId)
                        {
                            SetChangeModeCDTime(_skillBase.GetChangeModebyIndex(nChangeState), _mainPlayer);
                        }
                    }
                }
            }
            else
            {
                m_MySkillBarInfo[_skillBarIndex].SkillIndex = -1;
                m_MySkillBarInfo[_skillBarIndex].CurSkillId = -1;
                m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount = 0;
                m_MySkillBarInfo[_skillBarIndex].CDPicInfo.gameObject.SetActive(false);
                m_MySkillBarInfo[_skillBarIndex].CDPicBk.gameObject.SetActive(false);
                m_MySkillBarInfo[_skillBarIndex].IconInfo.spriteName = "Lock";
            }
        }
    }

    public void SetChangeModeCDTime(int nXpGroup, Obj_MainPlayer _mainPlayer)
    {
        //非变身连续技能不处理
        if (nXpGroup <= 0)
            return;

        int nChangeState = _mainPlayer.GetCurrentChangeState();

        for (int nSkillIndex = 0; nSkillIndex < _mainPlayer.OwnSkillInfo.Length; nSkillIndex++)
        {
            int nSkillId = _mainPlayer.OwnSkillInfo[nSkillIndex].SkillId;

            if (nSkillId <= 0)
                continue;

            Tab_SkillEx _tmpSkillEx = TableManager.GetSkillExByID(nSkillId, 0);

            if (_tmpSkillEx != null)
            {
                Tab_SkillBase _tmpSkillBase = TableManager.GetSkillBaseByID(_tmpSkillEx.BaseId, 0);

                if (_tmpSkillBase != null && _tmpSkillBase.GetChangeModebyIndex(nChangeState) == nXpGroup)
                {
                    Tab_CoolDownTime _coolDownTime = TableManager.GetCoolDownTimeByID(_tmpSkillEx.CDTimeId, 0);

                    _mainPlayer.OwnSkillInfo[nSkillIndex].CDTime = _coolDownTime.CDTime;

                    //非连续技能增加公共CD
                    int nPublicSkillCDId = (int)SKILLDEFINE.PUBLICCDID;
                    Tab_CoolDownTime _publicCDTime = TableManager.GetCoolDownTimeByID(nPublicSkillCDId, 0);

                    if (_publicCDTime != null && _tmpSkillBase.HasPublicCd == 1)
                    {
                        _mainPlayer.SkillPublicTime = _publicCDTime.CDTime;
                    }
                }
            }
        }

    }

    // Update is called once per frame
    void Update()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }

        if (m_bFirstUpdate == false)
        {
            UpdateSkillBarInfo();
            UpdateAttackSkillBarInfo();
        }
        // 骑乘按钮显示及隐藏
        if (_mainPlayer.CheckCanMount() && !m_MountBtn.activeSelf)
        {
            m_MountBtn.SetActive(true);
        }
        else if (!_mainPlayer.CheckCanMount() && m_MountBtn.activeSelf)
        {
            m_MountBtn.SetActive(false);
        }
        //冲撞按钮显示
        if (_mainPlayer.MountID != -1)
        {
            if (m_MountBtn.activeSelf)
            {
                m_MountBtn.SetActive(false);
            }
            if (!_mainPlayer.IsInModelStory)
            {
                if (GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO || m_CrashBtnIntroGuide)
                {
                    m_CrashBtn.SetActive(true);
                }
            }
        }
        else
        {
            m_CrashBtn.SetActive(false);
            if (m_NewPlayerGuide_Step == 6)
            {
                m_NewPlayerGuide_Step = 0;
                GameManager.gameManager.SoundManager.StopSoundEffect(231);
                NewPlayerGuidLogic.CloseWindow();
            }
        }


        for (int _skillBarIndex = 0; _skillBarIndex < m_MySkillBarInfo.Length; _skillBarIndex++)
        {
            if (m_MySkillBarInfo[_skillBarIndex].IsPress)
            {
                if (m_MySkillBarInfo[_skillBarIndex].buttonInfo.activeInHierarchy == false)
                {
                    ReleaseSkill(m_MySkillBarInfo[_skillBarIndex].buttonInfo);
                }
                else if (Input.GetMouseButton((int)ProcessInput.MOUSE_BUTTON.MOUSE_BUTTON_LEFT) == false) //鼠标没按下 释放
                {
                    ReleaseSkill(m_MySkillBarInfo[_skillBarIndex].buttonInfo);
                }
            }
            //播放冷却动画

            int nSkillIndex = m_MySkillBarInfo[_skillBarIndex].SkillIndex;
            if (nSkillIndex >= 0 && nSkillIndex < _mainPlayer.OwnSkillInfo.Length)
            {
                //该按钮初始技能ID
                int nOriginSkillId = _mainPlayer.OwnSkillInfo[nSkillIndex].SkillId;

                //当前技能ID
                int nCurSkillId = m_MySkillBarInfo[_skillBarIndex].CurSkillId;

                //有最初的技能并且，当前技能跟最初的技能不等，则进入计时刷新
                if (nOriginSkillId != -1 && nCurSkillId != -1 && nOriginSkillId != nCurSkillId)
                {
                    if (m_MySkillBarInfo[_skillBarIndex].fRemainCDTime > 0)
                    {
                        m_MySkillBarInfo[_skillBarIndex].fRemainCDTime = m_MySkillBarInfo[_skillBarIndex].nCurrentCDTime -
                                                                         (Time.realtimeSinceStartup - m_MySkillBarInfo[_skillBarIndex].fCurrentStartTime);
                    }
                    else
                    {
                        //时间到了，回到最初状态
                        if (null != ComboSkillTipLogic.Instance())
                        {
                            //ComboSkillTipLogic.Instance().SetStep(_skillBarIndex, 0);
                            ComboSkillTipLogic.Instance().HideCurrent(_skillBarIndex);
                        }
                        m_MySkillBarInfo[_skillBarIndex].nPreSkillId = nCurSkillId;
                        m_MySkillBarInfo[_skillBarIndex].fCurrentStartTime = -1.0f;
                        m_MySkillBarInfo[_skillBarIndex].nCurrentCDTime = 0;
                        m_MySkillBarInfo[_skillBarIndex].fRemainCDTime = -1.0f;
                        m_MySkillBarInfo[_skillBarIndex].SkillCount = 0;
                        m_MySkillBarInfo[_skillBarIndex].isCompleted = false;
                        SetSkillBarInfoForNext(_skillBarIndex, nOriginSkillId);

                        //新手引导的过期
                        if (nCurSkillId == GlobeVar.SHUANGJIANSHI_SKILL1_COMBO1
                            || nCurSkillId == GlobeVar.SHUANGJIANSHI_SKILL1_COMBO2
                            || nCurSkillId == GlobeVar.SHUANGJIANSHI_SKILL1_COMBO3)
                        {
                            if (m_NewPlayerGuide_Step == 5)
                            {
                                NewPlayerGuidLogic.CloseWindow();
                            }
                        }
                    }
                }

                if (m_MySkillBarInfo[_skillBarIndex].fDisabledRemTime > 0)
                {
                    m_MySkillBarInfo[_skillBarIndex].fDisabledRemTime = m_MySkillBarInfo[_skillBarIndex].fCurDisabedTime - (Time.realtimeSinceStartup - m_MySkillBarInfo[_skillBarIndex].fCurDisabledStartTime);
                }
                else
                {
                    m_MySkillBarInfo[_skillBarIndex].fCurDisabledStartTime = -1.0f;
                    m_MySkillBarInfo[_skillBarIndex].fCurDisabedTime = -1.0f;
                }


                if (m_MySkillBarInfo[_skillBarIndex].isCompleted)
                {
                    //等两秒再隐藏
                    if (Time.realtimeSinceStartup - m_MySkillBarInfo[_skillBarIndex].fCurrentStartTime >= 2)
                    {
                        if (null != ComboSkillTipLogic.Instance())
                        {
                            // ComboSkillTipLogic.Instance().SetStep(0);
                            ComboSkillTipLogic.Instance().HideCurrent(_skillBarIndex);
                        }
                        m_MySkillBarInfo[_skillBarIndex].SkillCount = 0;
                        m_MySkillBarInfo[_skillBarIndex].isCompleted = false;
                    }
                }
            }

            //走Cd
            nSkillIndex = m_MySkillBarInfo[_skillBarIndex].SkillIndex;
            if (nSkillIndex >= 0 && nSkillIndex < _mainPlayer.OwnSkillInfo.Length)
            {
                int _skillId = _mainPlayer.OwnSkillInfo[nSkillIndex].SkillId;
                int _CDTime = _mainPlayer.OwnSkillInfo[nSkillIndex].CDTime;
                //先看技能
                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(_skillId, 0);

                Tab_SkillBase _skillBase = null;

                if (null != _skillEx)
                {
                    _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                }
                if (_skillId > 0 && _CDTime > 0)
                {
                    if (m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount == 0)
                    {
                        m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount = 1;
                        m_MySkillBarInfo[_skillBarIndex].CDPicInfo.gameObject.SetActive(true);
                        m_MySkillBarInfo[_skillBarIndex].CDPicBk.gameObject.SetActive(true);
                        m_MySkillBarInfo[_skillBarIndex].RingPic.SetActive(false);
                        NewPlayerGuidLogic.CloseWindow();
                    }
                    //技能的总CD时间
                    if (_skillEx != null)
                    {
                        Tab_CoolDownTime _CDTimeInfo = TableManager.GetCoolDownTimeByID(_skillEx.CDTimeId, 0);
                        if (_CDTimeInfo != null)
                        {
                            int _totalCDTime = _CDTimeInfo.CDTime;
                            if (_totalCDTime > 0)
                            {
                                m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount = (_CDTime * 1.0f) / _totalCDTime;
                            }
                        }
                    }
                }
                //后看公共CD
                else if (_skillId > 0 && _mainPlayer.SkillPublicTime > 0 && _skillBase != null && _skillBase.HasPublicCd == 1)
                {
                    if (m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount == 0)
                    {
                        m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount = 1;
                        m_MySkillBarInfo[_skillBarIndex].CDPicInfo.gameObject.SetActive(true);
                        m_MySkillBarInfo[_skillBarIndex].CDPicBk.gameObject.SetActive(true);
                        m_MySkillBarInfo[_skillBarIndex].RingPic.SetActive(false);
                    }
                    int _publicCDID = (int)SKILLDEFINE.PUBLICCDID;
                    Tab_CoolDownTime _CDTimeInfo = TableManager.GetCoolDownTimeByID(_publicCDID, 0);
                    if (_CDTimeInfo != null)
                    {
                        int _totalCDTime = _CDTimeInfo.CDTime;
                        if (_totalCDTime > 0)
                        {
                            m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount = (_mainPlayer.SkillPublicTime * 1.0f) / _totalCDTime;
                        }
                    }
                }
                else if (m_MySkillBarInfo[_skillBarIndex].CDPicInfo.gameObject.activeInHierarchy)
                {
                    PlayCDZeroEffect(m_MySkillBarInfo[_skillBarIndex].CDEffect);
                    m_MySkillBarInfo[_skillBarIndex].CDPicInfo.fillAmount = 0;
                    m_MySkillBarInfo[_skillBarIndex].CDPicInfo.gameObject.SetActive(false);
                    m_MySkillBarInfo[_skillBarIndex].CDPicBk.gameObject.SetActive(false);
                    // 变身技能CD到了，提示使用FTE
                    if (m_MySkillBarInfo[_skillBarIndex].CDPicInfo.gameObject.name == "Skill5ColdDownPic")
                    {
                        TransformSkillFTE();
                    }
                }
            }
        }

        //冲撞技能的CD特殊检测
        UpdateCrashSkillCDTime();

        UdpateXpBtnState();
        UpateTransformController();
        if (ShowSkillEffectButSign) {
          int count = ShowSkillEffectBtnIndexs.Count;
          for (int i = 0; i < count; ++i) {
            if (ShowSkillEffectBtnIndexs[i] > -1 && ShowSkillEffectBtnIndexs[i] < m_SkillButtonEffect.Length && m_SkillButtonEffect[ShowSkillEffectBtnIndexs[i]] != null) {
              m_SkillButtonEffect[ShowSkillEffectBtnIndexs[i]].SetActive(true);
            }
          }
          ShowSkillEffectButSign = false;
          ShowSkillEffectButTimeSign = true;
          ShowSkillEffectBtnIndexs.Clear();
        }
        if (ShowSkillEffectButTimeSign) {
          ShowSkillEffectButTime += Time.deltaTime;
          if (ShowSkillEffectButTime > 1.5f) {
            ShowSkillEffectButTimeSign = false;
            ShowSkillEffectButTime = 0f;
            HideSkillButtonEffect();
          }
        }
    }
    private void UpateTransformController()
    {
        if (m_TransformCon != null)
        {
            m_TransformCon.Update();
        }
    }
    //更新当xp主按钮隐藏时，>75的点击图标跟着隐藏
    private void UdpateXpBtnState()
    {
//         if (!m_mainXpBtnObj.activeSelf)
//         {
//             m_mainXpBtnCanUse.gameObject.SetActive(false);
//         }
    }
    /// <summary>
    /// 冲撞技能CD的更新
    /// </summary>
    private void UpdateCrashSkillCDTime()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        int _skillId = GlobeVar.CRASH_SKILL_ID;
        int _CDTime = _mainPlayer.CrashSkillCDTime;
        //先看技能
        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(_skillId, 0);

//        Tab_SkillBase _skillBase = null;
//
//        if (null != _skillEx)
//        {
//            _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
//        }
        if (_skillId > 0 && _CDTime > 0)
        {
            if (m_CrashCDPic.fillAmount == 0)
            {
                m_CrashCDPic.fillAmount = 1;
                m_CrashCDPic.gameObject.SetActive(true);
                m_CrashCDBK.gameObject.SetActive(true);
                m_CrashRing.gameObject.SetActive(false);
            }

            //技能的总CD时间
            if (_skillEx != null)
            {
                Tab_CoolDownTime _CDTimeInfo = TableManager.GetCoolDownTimeByID(_skillEx.CDTimeId, 0);
                if (_CDTimeInfo != null)
                {
                    int _totalCDTime = _CDTimeInfo.CDTime;
                    if (_totalCDTime > 0)
                    {
                        m_CrashCDPic.fillAmount = (_CDTime * 1.0f) / _totalCDTime;
                    }
                }
            }

        }
        else if (m_CrashCDPic.gameObject.activeInHierarchy)
        {
            PlayCDZeroEffect(m_CrashCDEffect);
            m_CrashCDPic.fillAmount = 0;
            m_CrashCDPic.gameObject.SetActive(false);
            m_CrashCDBK.gameObject.SetActive(false);
        }
    }
    public void SetChangeModeAttackBtn()
    {
        m_AttackBarInfo.nSkillFirstIndex = GetChangeModeAttackFirstIndex();
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer != null)
        {
            if (m_AttackBarInfo.nSkillFirstIndex >= 0 && m_AttackBarInfo.nSkillFirstIndex < _mainPlayer.OwnSkillInfo.Length)
            {
                m_AttackBarInfo.nCurSkillId = _mainPlayer.OwnSkillInfo[m_AttackBarInfo.nSkillFirstIndex].SkillId;
            }
        }

        if (null != _mainPlayer)
        {
            int nSkillId = m_AttackBarInfo.nCurSkillId;
            if (nSkillId <= 0)
                return;

            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
            if (null != _skillEx)
            {
                Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                m_AttackBarInfo.attackIconPic.spriteName = _skillBase.Icon;
            }
        }
    }

    //得到当前状态的第一个普攻的下标值
    public int GetChangeModeAttackFirstIndex()
    {
        int index = 0;

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == _mainPlayer)
        {
            return index;
        }

//        int nChangeState = _mainPlayer.GetCurrentChangeState();

        for (int nIndex = 0; nIndex < _mainPlayer.OwnSkillInfo.Length; nIndex++)
        {
            int nSkillId = _mainPlayer.OwnSkillInfo[nIndex].SkillId;
            if (nSkillId > 0)
            {
                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
                if (null != _skillEx)
                {
                    Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                    if (null != _skillBase)
                    {
                        //找到当前状态下第一个可显示的普攻技能
                        if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0 && _skillBase.GetChangeModebyIndex(_mainPlayer.CurChangeState) >= 0)
                        {
                            return nIndex;
                        }
                    }
                }
            }

        }


        return index;
    }

    void OnEnable()
    {
      showNewGuildByDelayId();
    }
    void OnDisable()
    {
        if (m_MySkillBarInfo != null)
        {
            for (int _skillBarIndex = 0; _skillBarIndex < m_MySkillBarInfo.Length; _skillBarIndex++)
            {
                if (m_MySkillBarInfo[_skillBarIndex].IsPress)
                {
                    ReleaseSkill(m_MySkillBarInfo[_skillBarIndex].buttonInfo);
                }
            }
        }
    }
    void OnDestroy()
    {
        m_Instance = null;
        if (m_TransformCon != null)
        {
            m_TransformCon = null;
        }
    }

    public void PlayNewSkillEffect(GameObject button)
    {
        if (button.activeInHierarchy == false)
        {
            return;
        }
        UIEffectBehaviourController effectLogic = button.GetComponent<UIEffectBehaviourController>();
        if (null == effectLogic)
        {
            effectLogic = button.AddComponent<UIEffectBehaviourController>();
            effectLogic.InitEffect(button);
        }
        if (null != effectLogic)
        {
            effectLogic.PlayEffect(m_NewSkillEffectID);
        }
    }

    public void InitXpFullEffect()
    {
        m_xpFullEffectCon = m_mainXpBtnCanUse.gameObject.AddComponent<UIEffectBehaviourController>();
        m_xpFullEffectCon.InitEffect(m_mainXpBtnCanUse.gameObject);
        m_xpFullEffectCon.PlayEffect(m_nXpFullEffectID, ChangeStateEffectOK);

        //m_CachedEffect = m_xpFullEffectCon.LoadEffect();
    }
    private void ChangeStateEffectOK(GameObject effectObj, object param)
    {
      m_SkillChangeStateEffect = effectObj;
    }
    public void ShowSkillChangeStateEffect(bool state)
    {
      if (m_SkillChangeStateEffect != null) {
        m_SkillChangeStateEffect.SetActive(state);
      }
    }

    //得到当前学会的变身技能，依次放入List当中
    private List<int> GetCurrentXPSkillNum()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;

        List<int> xpList = new List<int>();
        if (null == _mainPlayer)
        {
            return xpList;
        }

        //加个是否达到对应等级的判断
        for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
        {
            int nSkillId = _mainPlayer.OwnSkillInfo[i].SkillId;

            if (nSkillId >= 0)
            {
                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
                if (null != _skillEx)
                {
                    Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                    if (null != _skillBase)
                    {
                        //如果是XP技能
                        if ((_skillBase.SkillClass & (int)SKILLCLASS.XP) == (int)SKILLCLASS.XP)
                        {
                            xpList.Add(i);
                        }
                    }
                }
            }

        }

        return xpList;
    }

    /// <summary>
    /// 得到变身技能的SkillIndex值,几变，从1开始
    /// </summary>
    /// <returns></returns>
    private Dictionary<int, int> GetXpSkillBySkillIndex()
    {
        Dictionary<int, int> xpSKillDic = new Dictionary<int, int>();
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        foreach (KeyValuePair<int, List<Tab_SkillActive>> skillAtive in TableManager.GetSkillActive())
        {
            Tab_SkillActive _skillActive = skillAtive.Value[0];
            if (_skillActive != null && _skillActive.Profession == _mainPlayer.Profession && _skillActive.IsXpIndex > 0 && !xpSKillDic.ContainsKey(_skillActive.IsXpIndex))
            {
                xpSKillDic.Add(_skillActive.IsXpIndex, _skillActive.SKillIndex);
            }
        }
        return xpSKillDic;
    }
    //该nMaxIndex,不是代表该位置可激活，而是代表，从[0-nMaxIndex]的所有位置都激活（不要问why，策划要求。）
    public void PlayXPActiveEffect(int nMaxIndex, bool isClick = false)
    {
        //在合着的时候就隐藏并且没有点击
        if (m_xpShowBtnState && !isClick)
        {
            for (int nIndex = 0; nIndex < (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM; nIndex++)
            {
                if (m_MySkillXpInfo != null && m_MySkillXpInfo[nIndex].xpObj != null)
                    m_MySkillXpInfo[nIndex].xpObj.SetActive(false);
            }

            return;
        }

        if (nMaxIndex < 0 || nMaxIndex > (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM)
        {
            return;
        }

        //加个当前已经学会的XP技能的判断吧
        int nHaveCount = GetCurrentXPSkillNum().Count;
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == _mainPlayer)
        {
            return;
        }

        //变身状态一个也不显示
        int nChangeState = _mainPlayer.GetCurrentChangeState();
        if (nChangeState > 0)
        {
            nMaxIndex = 0;
        }
        //取两者之间的最小值
        //nMaxIndex = nMaxIndex < nHaveCount ? nMaxIndex : nHaveCount;

        for (int nIndex = 0; nIndex < (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM; nIndex++)
        {
            if (m_MySkillXpInfo == null || null == m_MySkillXpInfo[nIndex].buttonInfo)
                continue;

            UIEffectBehaviourController effectLogic = m_MySkillXpInfo[nIndex].buttonInfo.GetComponent<UIEffectBehaviourController>();
            if (null == effectLogic)
            {
                effectLogic = m_MySkillXpInfo[nIndex].buttonInfo.AddComponent<UIEffectBehaviourController>();
                effectLogic.InitEffect(m_MySkillXpInfo[nIndex].buttonInfo);
            }
            if (null != effectLogic)
            {
                Tab_SceneClass _sceneClassInfo = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
                if (_sceneClassInfo != null && _sceneClassInfo.IsCanUseXp == 1 && nIndex < nHaveCount)
                {
                    m_MySkillXpInfo[nIndex].buttonInfo.transform.gameObject.SetActive(true);
                    m_MySkillXpInfo[nIndex].xpObj.SetActive(true);
                    //学会并可以释放
                    if (nIndex < nMaxIndex)
                    {
                        m_MySkillXpInfo[nIndex].xpLock.SetActive(false);
                        m_MySkillXpInfo[nIndex].xpGrayIcon.SetActive(false);
                        if (null != effectLogic && m_MySkillXpInfo[nIndex].buttonInfo.activeInHierarchy)
                        {
                            effectLogic.PlayEffect(m_XPSkillEffectID);
                        }
                    }
                    else
                    {
                        m_MySkillXpInfo[nIndex].xpLock.SetActive(false);
                        m_MySkillXpInfo[nIndex].xpGrayIcon.SetActive(true);
                    }

                }
                else
                {
                    effectLogic.StopEffect(m_XPSkillEffectID);
                    m_MySkillXpInfo[nIndex].buttonInfo.transform.gameObject.SetActive(true);
                    m_MySkillXpInfo[nIndex].xpObj.SetActive(true);
                    m_MySkillXpInfo[nIndex].xpGrayIcon.SetActive(false);
                    m_MySkillXpInfo[nIndex].xpLock.SetActive(true);
                }
            }
        }
    }

    //根据怒气值更新当前xp按钮状态
    public void UpdateXpBtnState(int nCurValue)
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == _mainPlayer)
        {
            return;
        }
        if (m_mainXpBtnObj.activeSelf && nCurValue >= GlobeVar.XP_CHANGE_MODE_2)
        {
            m_mainXpBtnCanUse.gameObject.SetActive(true);
        }
        else
        {
            if ((int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_2 == _mainPlayer.CurChangeState
                    || (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_1 == _mainPlayer.CurChangeState)
            {
                m_mainXpBtnCanUse.gameObject.SetActive(true);
            }
            else
            {
                m_mainXpBtnCanUse.gameObject.SetActive(false);
            }
           
        }
        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            //新手副本不管
            return;
        }
        int mainPlayerLevel = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level;
        Tab_SceneClass _sceneClassInfo = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
        int m_xp1LearnLevel = -1;
        int m_xp2LearnLevel = -2;
        m_xp1LearnLevel = _mainPlayer.GetSkillXpLearnLevelByXpIndex(1);
        m_xp2LearnLevel = _mainPlayer.GetSkillXpLearnLevelByXpIndex(2);
        m_PVPBtn.isEnabled = _sceneClassInfo != null && _sceneClassInfo.IsCanUseXp == 1 && mainPlayerLevel >= m_xp2LearnLevel && nCurValue >= GlobeVar.XP_CHANGE_MODE_2;
        m_PVEBtn.isEnabled = _sceneClassInfo != null && _sceneClassInfo.IsCanUseXp == 1 && mainPlayerLevel >= m_xp1LearnLevel && nCurValue >= GlobeVar.XP_CHNAGE_MODE_1;
    }
    /// <summary>
    /// 根据按钮状态判断PVP、PVE变身的颜色,不需要每帧都调用。
    /// </summary>
    private void UpdateTransformSpriteColor()
    {
        m_SpritePVP.color = m_PVPBtn.isEnabled ? m_ColorXpEnable : m_ColorXpDisable;
        m_SpritePVE.color = m_PVEBtn.isEnabled ? m_ColorXpEnable : m_ColorXpDisable;
//         if (m_TransformCon != null)
//         {
//             m_TransformCon.m_BeginDataPVP.m_fBeginAlpha = m_SpritePVP.color.a;
//             m_TransformCon.m_BeginDataPVE.m_fBeginAlpha = m_SpritePVE.color.a;
//         }
    }

    public void ChangeXpValueBtn(int nValue, int maxXP)
    {
        if (maxXP <= 0 || nValue < 0)
        {
            m_xpValueIcon.fillAmount = 0f;
            if (m_UIWave != null)
            {
                m_UIWave.amount = 0f;
            }
            return;
        }

        int nXPPercent = 0;
        nXPPercent = (int)(((float)nValue / (float)maxXP) * 100);

        int nIndex = 0;

        //小于最小变身值
        if (nXPPercent < GlobeVar.XP_CHNAGE_MODE_1)
        {
            //一个也不显示
            nIndex = 0;
        }//1变
        else if (nXPPercent >= GlobeVar.XP_CHNAGE_MODE_1 && nXPPercent < GlobeVar.XP_CHANGE_MODE_2)
        {
            nIndex = 1;
        }//2变
        else if (nXPPercent >= GlobeVar.XP_CHANGE_MODE_2 && nXPPercent < GlobeVar.XP_CHANGE_MODE_3)
        {
            nIndex = 2;
        }//3变
        m_xpValueIcon.fillAmount = (float)nValue / (float)maxXP;
        if (m_UIWave != null)
        {
            m_UIWave.amount = (float)nValue / (float)maxXP;
        }
        m_xpShowIndex = nIndex;
    }

    public void ChangeXpBtnActive(int nValue, int maxXP)
    {
        if (maxXP <= 0 || nValue < 0)
        {

            return;
        }

        int nXPPercent = 0;
        nXPPercent = (int)(((float)nValue / (float)maxXP) * 100);

        int nIndex = 0;

        //小于最小变身值
        if (nXPPercent < GlobeVar.XP_CHNAGE_MODE_1)
        {
            //一个也不显示
            nIndex = 0;
        }//1变
        else if (nXPPercent >= GlobeVar.XP_CHNAGE_MODE_1 && nXPPercent < GlobeVar.XP_CHANGE_MODE_2)
        {
            nIndex = 1;
        }//2变
        else if (nXPPercent >= GlobeVar.XP_CHANGE_MODE_2 && nXPPercent < GlobeVar.XP_CHANGE_MODE_3)
        {
            nIndex = 2;
        }//3变
        else if (nXPPercent >= GlobeVar.XP_CHANGE_MODE_3)
        {
            nIndex = 3;
        }

        PlayXPActiveEffect(nIndex, true);
    }

    public int GetCurXpPercent(int nValue, int maxXP)
    {
        if (maxXP <= 0 || nValue < 0)
        {

            return 0;
        }

//        int nXPPercent = 0;
        return (int)(((float)nValue / (float)maxXP) * 100);
    }
    void PlayCDZeroEffect(UISpriteAnimation CDEffect)
    {
        CDEffect.gameObject.SetActive(true);
        CDEffect.Reset();
    }

    public void UseSkill(GameObject button)
    {
        // 正在转动 此时不响应技能
        if ((Turntable.Instance() != null && Turntable.Instance().Turning))
        {
            return;
        }
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            LogModule.DebugLog("_mainPlayer is Null");
            return;
        }
        if (button.name == "AttackButton")
        {
            _mainPlayer.LastClickAttackBtTime = Time.time;

            //默认恒定给一个初始状态的普攻吧
            int nUseSkillId = _mainPlayer.OwnSkillInfo[0].SkillId;
            if (_AttackBarInfo.nCurSkillId != -1)
            {
                nUseSkillId = _AttackBarInfo.nCurSkillId;
            }

            _mainPlayer.UseSkillOpt(nUseSkillId, button);
        }
        else if (button.name == "CrashButton")
        {
            //不能使用骑乘冲锋技能
            if (!_mainPlayer.CheckCanUseCrashSkill())
                return;

            _mainPlayer.UseSkillOpt(GlobeVar.CRASH_SKILL_ID, button);
        }
        else if (button.name == "PVE")
        {
            //             if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            //             {
            //                 //新手副本暂时不允许点击
            //                 return;
            //             }
            //写死了，button1，就是XP1

            //Tween正在进行时无法点击
           
            m_xpBtnHitTime = Time.realtimeSinceStartup;
            Dictionary<int, int> xpSkillIndexDic = GetXpSkillBySkillIndex();
            if (null == xpSkillIndexDic || !xpSkillIndexDic.ContainsKey(1))
                return;


            int xpIndex = xpSkillIndexDic[1];

            if (xpIndex < 0 || xpIndex >= _mainPlayer.OwnSkillInfo.Length || _mainPlayer.OwnSkillInfo[xpIndex].SkillId == -1)
            {
                _mainPlayer.SendNoticMsg(false, "#{10726}");
                return;
            }

            if (GetCurXpPercent(_mainPlayer.BaseAttr.XP, _mainPlayer.BaseAttr.MaxXP) < GlobeVar.XP_CHNAGE_MODE_1)
            {
                _mainPlayer.SendNoticMsg(false, "#{10735}");
                return;
            }

            if (m_TweenStatus != TweenStatus.Done &&
               GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO
               )
            {
                return;
            }
            if (m_TransformCon != null)
            {
                m_TransformCon.ChooseDone();
            }


            if (NewPlayerGuidLogic.CurrentGuideID == 9)
            {
                NewPlayerGuide(10);
            }
            _mainPlayer.UseSkillOpt(_mainPlayer.OwnSkillInfo[xpIndex].SkillId, button);

            //  OnClickXpShowBtn();
        }
        else if (button.name == "SkillXPButton2")
        {
            //             if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            //             {
            //                 //新手副本暂时不允许点击
            //                 return;
            //             }


           

            m_xpBtnHitTime = Time.realtimeSinceStartup;
            Dictionary<int, int> xpSkillIndexDic = GetXpSkillBySkillIndex();
            if (null == xpSkillIndexDic || !xpSkillIndexDic.ContainsKey(2))
                return;


            int xpIndex = xpSkillIndexDic[2];

            if (xpIndex < 0 || xpIndex >= _mainPlayer.OwnSkillInfo.Length || _mainPlayer.OwnSkillInfo[xpIndex].SkillId == -1)
            {
                _mainPlayer.SendNoticMsg(false, "#{10726}");
                return;
            }

            if (GetCurXpPercent(_mainPlayer.BaseAttr.XP, _mainPlayer.BaseAttr.MaxXP) < GlobeVar.XP_CHANGE_MODE_2)
            {
                _mainPlayer.SendNoticMsg(false, "#{10735}");
                return;
            }
            _mainPlayer.UseSkillOpt(_mainPlayer.OwnSkillInfo[xpIndex].SkillId, button);


            //  OnClickXpShowBtn();
        }
        else if (button.name == "PVP")
        {
            //Tween正在进行时无法点击
            
            NewPlayerGuidLogic.CloseWindow();
            m_xpBtnHitTime = Time.realtimeSinceStartup;

            Dictionary<int, int> xpSkillIndexDic = GetXpSkillBySkillIndex();
            if (null == xpSkillIndexDic || !xpSkillIndexDic.ContainsKey(2))
                return;


            int xpIndex = xpSkillIndexDic[2];

            if (xpIndex < 0 || xpIndex >= _mainPlayer.OwnSkillInfo.Length || _mainPlayer.OwnSkillInfo[xpIndex].SkillId == -1)
            {
                _mainPlayer.SendNoticMsg(false, "#{10726}");
                return;
            }

            if (GetCurXpPercent(_mainPlayer.BaseAttr.XP, _mainPlayer.BaseAttr.MaxXP) < GlobeVar.XP_CHANGE_MODE_2)
            {
                _mainPlayer.SendNoticMsg(false, "#{10735}");
                return;
            }

            if (m_TweenStatus != TweenStatus.Done
                && GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO
                )
            {
                return;
            }
            if (m_TransformCon != null)
            {
                m_TransformCon.ChooseDone(false);
            }

            _mainPlayer.UseSkillOpt(_mainPlayer.OwnSkillInfo[xpIndex].SkillId, button);

//             if (NewPlayerGuidLogic.CurrentGuideID == 9)
//             {
//                 NewPlayerGuide(10);
//             }
            //             if (_mainPlayer.SkillCore != null && _mainPlayer.SkillCore.LastSkillId == _mainPlayer.OwnSkillInfo[xpIndex].SkillId)
            //             {
            //                 
            //             }
            //  OnClickXpShowBtn();
        }
        else
        {
            for (int i = 0; i < m_MySkillBarInfo.Length; i++)
            {
                //加上当前技能可点击的一个判断
                if (m_MySkillBarInfo[i].buttonInfo.name == button.name && m_MySkillBarInfo[i].fDisabledRemTime <= 0)
                {
                    _mainPlayer.UseSkillOpt(m_MySkillBarInfo[i].CurSkillId, button);
                    if (i == 4 && NewPlayerGuidLogic.CurrentGuideID == 10)
                    {
                        NewPlayerGuidLogic.CloseWindow();
                        NewPlayerGuidLogic.CurrentGuideID = -1;
                    }
                    break;
                }
            }
        }

        // 新手指引 暂时写这儿
        if (button.name == "SkillXPButton3" && m_NewPlayerGuide_Step == 7)
        {
            //PlayerPreferenceData.XPNewPlayerGuideFlag = true;
            m_NewPlayerGuide_Step = 0;
            //GameManager.gameManager.SoundManager.StopSoundEffect(233);
            NewPlayerGuidLogic.CloseWindow();
        }
        else if (button.name == "AttackButton" && JoyStickLogic.Instance() != null && JoyStickLogic.Instance().NewPlayerStep == 1)
        {
            JoyStickLogic.Instance().NewPlayerGuide(3);
        }
        else if (button.name == "AttackButton" && m_NewPlayerGuide_Step == 2)
        {
            m_NewPlayerGuide_Step = 0;
            //GameManager.gameManager.SoundManager.StopSoundEffect(227);
            NewPlayerGuidLogic.CloseWindow();
        }
        else if (button.name == "Skill1Button" && m_NewPlayerGuide_Step == 3)
        {
            GameManager.gameManager.SoundManager.StopSoundEffect(228);
            NewPlayerGuidLogic.CloseWindow();
        }
        else if (button.name == "Skill1Button" && m_NewPlayerGuide_Step == 5)
        {
            //m_NewPlayerGuide_Step = 0;
            //GameManager.gameManager.SoundManager.StopSoundEffect(230);
            //NewPlayerGuidLogic.CloseWindow();
        }
        else if (button.name == "CrashButton" && m_NewPlayerGuide_Step == 6)
        {
            Singleton<ObjManager>.Instance.MainPlayer.IsNoMove = false;
            m_NewPlayerGuide_Step = 0;
            //GameManager.gameManager.SoundManager.StopSoundEffect(231);
            NewPlayerGuidLogic.CloseWindow();
            // 取消坐骑冲锋摇杆教学
            /*if (JoyStickLogic.Instance() != null)
            {
                JoyStickLogic.Instance().NewPlayerGuide(2);
            }*/
        }
    }

    public void PressSkill(GameObject button)
    {
        //默认恒定给一个初始状态的普攻吧
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            LogModule.DebugLog("_mainPlayer is Null");
            return;
        }
        if (button.name == "AttackButton")
        {
            int nUseSkillId = _mainPlayer.OwnSkillInfo[0].SkillId;
            if (_AttackBarInfo.nCurSkillId != -1)
            {
                nUseSkillId = _AttackBarInfo.nCurSkillId;
            }

            //使用技能是第一个技能
            if (CheckSkillIdIsFirst(nUseSkillId))
            {
                m_AttackBarInfo.isPress = true;
                m_AttackBarInfo.fPressTime = Time.realtimeSinceStartup;
                m_AttackBarInfo.canUseNext = true;
                m_AttackBarInfo.attackObj = button;
                _mainPlayer.UseSkillOpt(nUseSkillId, button);
            }
            //m_AttackBarInfo.canUseNext = true;
        }

        //先松开
        if (m_MySkillBarInfo != null)
        {
            for (int _skillBarIndex = 0; _skillBarIndex < m_MySkillBarInfo.Length; _skillBarIndex++)
            {
                if (m_MySkillBarInfo[_skillBarIndex].IsPress)
                {
                    ReleaseSkill(m_MySkillBarInfo[_skillBarIndex].buttonInfo);
                }
            }

        }

        for (int i = 0; i < m_MySkillBarInfo.Length; i++)
        {
            if (m_MySkillBarInfo[i].buttonInfo.name == button.name)
            {
                // 如果该技能在CD中，那么不显示范围特效
                int nSkillIndex = m_MySkillBarInfo[i].SkillIndex;
                int _skillId = _mainPlayer.OwnSkillInfo[nSkillIndex].SkillId;
                int _CDTime = _mainPlayer.OwnSkillInfo[nSkillIndex].CDTime;
                if (_skillId > 0 && _CDTime > 0)
                {
                    break;
                }
                m_MySkillBarInfo[i].IsPress = true;
                int _skillIndex = m_MySkillBarInfo[i].SkillIndex;
                if (_skillIndex >= 0 && _skillIndex < _mainPlayer.OwnSkillInfo.Length)
                {
                    //播放范围特效
                    _mainPlayer.CurPressSkillId = m_MySkillBarInfo[i].CurSkillId;
                    Tab_SkillEx _skillEx = TableManager.GetSkillExByID(_mainPlayer.CurPressSkillId, 0);
                    if (_skillEx != null)
                    {
                        int _rangeEffectType = _skillEx.RangeEffectType;
                        if (_rangeEffectType != -1)
                        {
                            //目标播放
                            if (_skillEx.RangeEffectTarType == (int)SKILLRANGEEFFECTTAR.SELECTTARGET)
                            {
                                if (_mainPlayer.SelectTarget)
                                {
                                    _mainPlayer.SelectTarget.PlaySkillRangeEffect();
                                }
                            }
                            else //玩家自己播放
                            {
                                _mainPlayer.PlaySkillRangeEffect();
                            }
                        }
                        break;
                    }
                }
            }
        }
    }
    public void ReleaseSkill(GameObject button)
    {
        if (button.name == "AttackButton")
        {
            m_AttackBarInfo.isPress = false;
            m_AttackBarInfo.fPressTime = 0f;
            m_AttackBarInfo.canUseNext = false;
        }
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            LogModule.DebugLog("_mainPlayer is Null");
            return;
        }
        //停止范围特效 
        if (_mainPlayer.CurPressSkillId != -1)
        {
            for (int i = 0; i < m_MySkillBarInfo.Length; i++)
            {
                if (m_MySkillBarInfo[i].buttonInfo.name == button.name)
                {
                    m_MySkillBarInfo[i].IsPress = false;
                    int _skillIndex = m_MySkillBarInfo[i].SkillIndex;
                    if (_skillIndex >= 0 && _skillIndex < _mainPlayer.OwnSkillInfo.Length)
                    {
                        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(_mainPlayer.CurPressSkillId, 0);
                        if (_skillEx != null)
                        {
                            int _rangeEffectType = _skillEx.RangeEffectType;
                            if (_rangeEffectType != -1)
                            {
                                //目标
                                if (_skillEx.RangeEffectTarType == (int)SKILLRANGEEFFECTTAR.SELECTTARGET)
                                {
                                    if (_mainPlayer.SelectTarget)
                                    {
                                        _mainPlayer.SelectTarget.StopSkillRangeEffect();
                                    }
                                }
                                else //玩家自己
                                {
                                    _mainPlayer.StopSkillRangeEffect();
                                }
                            }
                            break;
                        }
                    }
                }
            }
            _mainPlayer.CurPressSkillId = -1;
        }


        //使用技能
        //   UseSkill(button);
    }
    void UseItem(GameObject button)
    {
    }

    public void HideTransformButtonInDemo()
    {
        if (m_mainXpBtnObj != null)
        {
            UpdateTransformBtnShow(false);
        }
    }
    public void HideTransformButtonWithLock()
    {
        if (m_mainXpBtnObj != null)
        {
            UpdateTransformBtnShow(false);
            lockTransformBtnShow = true;
        }
    }


    byte[] m_FinishedSteps = new byte[11];
    // 新手教学
    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        switch (nIndex)
        {
            case 1:
                // 变身引导
                if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
                {
                    if (m_TransformSprite != null && m_mainXpBtnObj != null)
                    {
                        m_FinishedSteps[nIndex - 1] = 1;
                        UpdateTransformBtnShow(true);
                        // 第一步，点击变身按钮
                        NewPlayerGuidLogic.OpenWindow_Circle(m_TransformSprite, 110, StrDictionary.GetClientDictionaryString("#{11437}"), "center", 
                            (int)NewPlayerGuidLogic.MotionType.Standstill, true, true, true, null, null, false);
                        GameManager.gameManager.SoundManager.PlaySoundEffect(233);
                        NewPlayerGuidLogic.CurrentGuideID = 1;
                        ProcessInput.Instance().ReleaseTouch();
                        JoyStickLogic.Instance().ReleaseJoyStick();
                    }
                }
                break;
            case 2:
                ShowSomePart(1);
                ShowAndHide(true);
                if (m_AttackGuideObject && m_AttackGuideObject.activeInHierarchy)
                {
                    m_FinishedSteps[nIndex - 1] = 1;
                    GameManager.gameManager.SoundManager.StopSoundEffect(226);
                    //NewPlayerGuidLogic.OpenWindow(m_SkillAttackBt, 134, 134, "点击施放普通攻击", "left", 0, true);
                    NewPlayerGuidLogic.OpenWindow_Circle(m_AttackGuideObject, 115, StrDictionary.GetClientDictionaryString("#{10294}"), "center", 
                        (int)NewPlayerGuidLogic.MotionType.Standstill, true, false, true, null, null, false);
                    GameManager.gameManager.SoundManager.PlaySoundEffect(227);
                }
                NewPlayerGuidLogic.txtFteIndex = 0;
                break;
            case 3:
                LockSkillAtForFTE(1);
                LockSkillAtForFTE(2);
                LockSkillAtForFTE(3);
                ShowSomePart(2);
                if (m_Skill1Bt && m_Skill1Bt.activeInHierarchy)
                {
                    m_FinishedSteps[nIndex - 1] = 1;
                    NewPlayerGuidLogic.OpenWindow_Circle(m_Skill1Bt, 110, StrDictionary.GetClientDictionaryString("#{10295}"), "center", 
                        (int)NewPlayerGuidLogic.MotionType.Standstill, true, true, true, null, null, false);
                    GameManager.gameManager.SoundManager.PlaySoundEffect(228);
                    //NewPlayerGuidLogic.OpenWindow(m_Skill1Bt, 110, 110, "点击施放技能", "left", 0, true);
                }

                else
                {
                    m_NewGuildDelayId = 3;
                }
                break;
            case 4:
                if (m_SkillAttackBt && m_SkillAttackBt.activeInHierarchy)
                {
                    m_FinishedSteps[nIndex - 1] = 1;
                    //NewPlayerGuidLogic.OpenWindow(m_SkillAttackBt, 134, 134, "点击施放普通攻击", "left", 0, true);
                    NewPlayerGuidLogic.OpenWindow(m_SkillAttackBt, 200, 200, "", "left", 3);
                }
                break;
            case 5:
                if (m_Skill1Bt && m_Skill1Bt.activeInHierarchy)
                {
                    Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
                    if (null == mainPlayer)
                    {
                        LogModule.ErrorLog("mainplayer is null");
                        return ;
                    }

                    int nPlayerProfession = mainPlayer.Profession;

                    if (nPlayerProfession != (int)CharacterDefine.PROFESSION.XIAOYAO && nPlayerProfession !=  (int)CharacterDefine.PROFESSION.SHAOLIN)
                    {
                        if (m_Skill1Bt.GetComponent<UIImageButton>() != null)
                        {
                            m_Skill1Bt.GetComponent<UIImageButton>().isEnabled = true;
                        }
                        m_FinishedSteps[nIndex - 1] = 1;
                        NewPlayerGuidLogic.OpenWindow_Circle(m_Skill1Bt, 110, StrDictionary.GetClientDictionaryString("#{10297}"), "center",
                            (int)NewPlayerGuidLogic.MotionType.Standstill, true, true, false, null, () =>
                            {
                                UnlockSkillAtForFTE(1);
                                UnlockSkillAtForFTE(2);
                                UnlockSkillAtForFTE(3);
                                NewPlayerGuidLogic.txtFteIndex = 1;
                            }, false);
                        GameManager.gameManager.SoundManager.StopSoundEffect(229);
                        GameManager.gameManager.SoundManager.PlaySoundEffect(230);
                    }

                    else
                    {
                        UnlockSkillAtForFTE(1);
                        UnlockSkillAtForFTE(2);
                        UnlockSkillAtForFTE(3);
                        NewPlayerGuidLogic.txtFteIndex = 1;
                        NewPlayerGuidLogic.CloseWindow();
                    }
                }
                break;
            case 6:
                if (m_CrashBtn && m_CrashBtn.activeInHierarchy)
                {
                    m_FinishedSteps[nIndex - 1] = 1;
                    NewPlayerGuidLogic.OpenWindow_Circle(m_CrashBtn, 100, StrDictionary.GetClientDictionaryString("#{10298}"), "center", 
                        (int)NewPlayerGuidLogic.MotionType.Standstill, true, true, true, OnShowNewplayerGuide, null, false);
                    GameManager.gameManager.SoundManager.PlaySoundEffect(231);
                    Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                    if (_mainPlayer == null)
                    {
                        LogModule.DebugLog("_mainPlayer is Null");
                        return;
                    }
                    _mainPlayer.IsFirstUseCrash = true;
                    NewPlayerGuidLogic.txtFteIndex = 2;
                }
                break;
            case 7:
                {
                    if (m_SkillXP3IconPic.gameObject && m_SkillXP3IconPic.gameObject.activeInHierarchy)
                    {
                        m_FinishedSteps[nIndex - 1] = 1;
                        NewPlayerGuidLogic.OpenWindow_Circle(m_SkillXP3IconPic.gameObject, 110, StrDictionary.GetClientDictionaryString("#{10300}"), "left", 2, true, true, true);
                        ProcessInput.Instance().ReleaseTouch();
                        JoyStickLogic.Instance().ReleaseJoyStick();
                    }
                }
                break;
            case 8: 
                {
                    if (m_TransformSprite != null && m_mainXpBtnObj != null)
                    {
                        m_FinishedSteps[nIndex - 1] = 1;
                        lockTransformBtnShow = false;
                        UpdateTransformBtnShow(true);
                        NewPlayerGuidLogic.OpenWindow_Circle(m_TransformSprite, 110, StrDictionary.GetClientDictionaryString("#{10814}"), "left", 2, true, true, true);
                      //  GameManager.gameManager.SoundManager.PlaySoundEffect(233);
                        NewPlayerGuidLogic.CurrentGuideID = 8;
                        ProcessInput.Instance().ReleaseTouch();
                        JoyStickLogic.Instance().ReleaseJoyStick();
                    }
                    break;
                }
            case 9:
                {
                    // 剧情副本的引导
                    if (m_PVEBtn.gameObject && m_PVEBtn.gameObject.activeInHierarchy)
                    {
                        m_FinishedSteps[nIndex - 1] = 1;
                        NewPlayerGuidLogic.OpenWindow(m_PVEBtn.gameObject, 700, 260, StrDictionary.GetClientDictionaryString("#{10300}"), "left", 2, true, true, true, offsetX: -0.4f, offsetY: -0.12f);
                        ProcessInput.Instance().ReleaseTouch();
                        JoyStickLogic.Instance().ReleaseJoyStick();
                        NewPlayerGuidLogic.CurrentGuideID = 9;
                    }
                    break;
                }
            case 10:
                {
                    // 点击变身技能
                    if (m_Skill5IconPic.gameObject && m_Skill5IconPic.gameObject.activeInHierarchy)
                    {
                        m_FinishedSteps[nIndex - 1] = 1;
                        NewPlayerGuidLogic.OpenWindow_Circle(m_Skill5IconPic.gameObject, 110, StrDictionary.GetClientDictionaryString("#{10816}"), "center", 2, true, true, true);
                        ProcessInput.Instance().ReleaseTouch();
                        JoyStickLogic.Instance().ReleaseJoyStick();
                        NewPlayerGuidLogic.CurrentGuideID = 10;
                    }
                    break;
                }
            case 11:
                {
                    // 新手关新手引导
                    if (m_PVPBtn.gameObject && m_PVPBtn.gameObject.activeInHierarchy)
                    {
                        m_FinishedSteps[nIndex - 1] = 1;
                        //m_PVEBtn.IsNeedGreyColour = true;
                        //m_PVEBtn.isEnabled = false;
                        foreach (UISprite spr in m_PVEBtn.GetComponentsInChildren<UISprite>())
                        {
                            spr.color = new Color(0, 255, 255, 255);
                        }
                        NewPlayerGuidLogic.OpenWindow(m_PVPBtn.gameObject, 700, 260, StrDictionary.GetClientDictionaryString("#{10300}"), "center", 2, true, true, true, null, () =>
                        {
                            //m_PVEBtn.isEnabled = true;
                            //m_PVEBtn.IsNeedGreyColour = false;
                            foreach (UISprite spr in m_PVEBtn.GetComponentsInChildren<UISprite>())
                            {
                                spr.color = Color.white;
                            }
                        }, -0.5f, -0.12f);
                        ProcessInput.Instance().ReleaseTouch();
                        JoyStickLogic.Instance().ReleaseJoyStick();
                        NewPlayerGuidLogic.CurrentGuideID = 11;
						//GameManager.gameManager.SoundManager.PlaySoundEffect(233);
                    }
                    break;
                }
            default:
                break;
        }
    }

    //切换目标
    public void SwitchTarget()
    {
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SwitchTarget();
        }

        //SceneControl.Instance().GotoNextScene(Vector3.zero);
    }

    public void PlayTween(bool nDirection)
    {
        gameObject.SetActive(!nDirection);
    }

    /// <summary>
    /// 得到当前连续技能图标.
    /// </summary>
    /// <param name="_skillBase"></param>
    /// <returns></returns>
    public List<string> GetContinueSkillIcons(Tab_SkillBase _skillBase)
    {
        List<string> iconList = new List<string>();

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == _mainPlayer)
            return iconList;

        Dictionary<int, List<Tab_SkillBase>> dicTab_SkillBase = TableManager.GetSkillBase();

        foreach (KeyValuePair<int, List<Tab_SkillBase>> kv in dicTab_SkillBase)
        {
            Tab_SkillBase _tmpSkillBase = kv.Value[0];

            //找到同一个连续技相同的firstIndex；
            if (null != _tmpSkillBase
                && _tmpSkillBase.ProfessionId == _skillBase.ProfessionId
                && _skillBase.FirstIndex == _tmpSkillBase.FirstIndex
                && _tmpSkillBase.GetChangeModebyIndex(_mainPlayer.CurChangeState) > 0)
            {
                iconList.Add(_tmpSkillBase.Icon);
            }
        }
        return iconList;
    }

    public void CleanUpAttackBarInfo()
    {
        if (m_AttackBarInfo != null)
        {
            m_AttackBarInfo.CleanUp();
        }
    }

    void FixedUpdate()
    {
        //普攻时间检测
        if (null != m_AttackBarInfo)
        {
            if (m_AttackBarInfo.fRemainCDTime >= 0)
            {
                m_AttackBarInfo.fRemainCDTime -= (int)(Time.fixedDeltaTime * 1000);
                if (m_AttackBarInfo.fRemainCDTime < 0)
                {
                    m_AttackBarInfo.ReturnFirstState();
                }
            }

            if (m_AttackBarInfo.fDisabledRemTime >= 0)
            {
                m_AttackBarInfo.fDisabledRemTime -= (int)(Time.fixedDeltaTime * 1000);
                if (m_AttackBarInfo.fDisabledRemTime < 0)
                {
                    m_AttackBarInfo.fCurDisabledStartTime = -1.0f;
                    m_AttackBarInfo.fCurDisabledTime = -1.0f;
                }
            }
        }

        UpdatePressTime();
    }



    /// <summary>
    /// xp技能活出按钮响应函数
    /// </summary>
    public void OnClickXpShowBtn()
    {
        //         if (m_xpShowBtnState)
        //         {
        //             for (int nIndex = 0; nIndex < (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM; nIndex++)
        //             {
        //                 m_MySkillXpInfo[nIndex].xpObj.SetActive(true);
        //             }
        //             //  PlayXPActiveEffect(m_xpShowIndex,true);
        //         }
        // 
        // 
        //         Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        //         if (_mainPlayer == null)
        //         {
        //             LogModule.DebugLog("_mainPlayer is Null");
        //             return;
        //         }
        // 
        //         ChangeXpBtnActive(_mainPlayer.BaseAttr.XP, _mainPlayer.BaseAttr.MaxXP);
        // 
        //         for (int nIndex = 0; nIndex < (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM; nIndex++)
        //         {
        //             m_MySkillXpInfo[nIndex].xpTweenPosition.Play(m_xpShowBtnState);
        //             m_xpBg.Play(m_xpShowBtnState);
        //         }
        // 
        //         m_xpShowBtnState = !m_xpShowBtnState;
        // 
        //         m_xpBtnHitTime = m_xpShowBtnState ? -1.0f : Time.realtimeSinceStartup;
        //         //   ShowXpBtns(m_xpShowBtnState);
    }



    public void OnMountBtn()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            LogModule.DebugLog("_mainPlayer is Null");
            return;
        }
        // 给服务器发消息 骑乘
        // 客户端模拟
        if (!_mainPlayer.CheckCanMount())
        {
            _mainPlayer.SendNoticMsg(false, "#{2443}");
            return;
        }

        GameManager.gameManager.SoundManager.PlaySoundEffect(30);
        CG_MOUNT_MOUNT packet = (CG_MOUNT_MOUNT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MOUNT_MOUNT);
        packet.SetMountID(-1);
        packet.SendPacket();

        //Games.LogicObj.Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        //if (mainPlayer != null)
        //{
        //    mainPlayer.PlayerStopMountSound();
        //}
    }

    public void OnTweenPositionFinsh()
    {
        //         for (int nIndex = 0; nIndex < (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM; nIndex++)
        //         {
        //             m_MySkillXpInfo[nIndex].xpObj.SetActive(!m_xpShowBtnState);
        //         }
        // 
        //         if (m_NewPlayerGuide_Step == 1 && GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        //         {
        //             NewPlayerGuide(7);
        //         }
        //         if (m_NewPlayerGuide_Step == 8)
        //         {
        //             NewPlayerGuide(9);
        //         }
    }

    //隐藏xp按钮的更新
    private void OnUpdateXpBtnHide()
    {
        //新手副本不回收
        //                 if (GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        //                 {
        //                     //如果在呼出的状态
        //                     if (!m_xpShowBtnState)
        //                     {
        //                         //点击时间大于0
        //                         if (m_xpBtnHitTime > 0 && Time.realtimeSinceStartup - m_xpBtnHitTime > m_xpHideTime)
        //                         {
        //                             OnClickXpShowBtn();
        //                         }
        //                     }
        //                 }
    }

    private void OnUpdateXpBitState()
    {
        if (!m_xpShowBtnState)
        {
            for (int nIndex = 0; nIndex < (int)SKILLXPBTNNUM.MAXSKILLXPBTNNUM; nIndex++)
            {
                m_MySkillXpInfo[nIndex].xpObj.SetActive(true);
            }
        }
    }

    public static bool lockTransformBtnShow = false;
    public void UpdateTransformBtnShow(bool bShow)
    {
        if (lockTransformBtnShow)
        {
            m_mainXpBtnObj.SetActive(false);
        }
        else
        {
            m_mainXpBtnObj.SetActive(bShow);
        }
    }

    void OnShowNewplayerGuide()
    {
        switch (m_NewPlayerGuide_Step)
        {
            case 6:
                if (Singleton<ObjManager>.Instance.MainPlayer != null)
                {
                    Singleton<ObjManager>.Instance.MainPlayer.StopMove();
                    Singleton<ObjManager>.Instance.MainPlayer.Rotation = Quaternion.identity;
                    Singleton<ObjManager>.Instance.MainPlayer.Position = new Vector3(33.89f, 56.60f, 21.16f);
                    Singleton<ObjManager>.Instance.MainPlayer.IsNoMove = true;
                }
                break;
            default:
                break;
        }
    }

    private void UpdatePressTime()
    {
        if (null != m_AttackBarInfo && m_AttackBarInfo.isPress)
        {
            if (Time.realtimeSinceStartup - m_AttackBarInfo.fPressTime > m_pressContinueTime)
            {
                if (m_AttackBarInfo.fDisabledRemTime < 0 && m_AttackBarInfo.canUseNext)
                {
                    m_AttackBarInfo.canUseNext = false;
                    m_AttackBarInfo.canUseNextUpdateTime = 0f;
                    if (m_AttackBarInfo.attackObj != null)
                    {
                        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                        if (_mainPlayer == null)
                        {
                            LogModule.DebugLog("_mainPlayer is Null");
                            return;
                        }


                        _mainPlayer.UseSkillOpt(m_AttackBarInfo.nCurSkillId, m_AttackBarInfo.attackObj);
                    }
                }
                else if (m_AttackBarInfo.fCurDisabledTime < 0 && !m_AttackBarInfo.canUseNext)
                {
                    m_AttackBarInfo.canUseNextUpdateTime += Time.fixedDeltaTime;
                    if (m_AttackBarInfo.canUseNextUpdateTime > CanUseNextSkillTime)
                    {
                        m_AttackBarInfo.canUseNext = true;
                    }
                }
            }
        }
    }

    public void SetAttackBarCanUseNext(bool canUseNext)
    {
        m_AttackBarInfo.canUseNext = canUseNext;
    }

    public bool CheckSkillIdIsFirst(int nSkillId)
    {
        bool isFirst = false;

        if (nSkillId < 0)
            return isFirst;

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return isFirst;
        }

        for (int _skillIndex = 0; _skillIndex < _mainPlayer.OwnSkillInfo.Length; _skillIndex++)
        {
            if (nSkillId == _mainPlayer.OwnSkillInfo[_skillIndex].SkillId)
            {
                return true;
            }
        }

        return isFirst;
    }

    public void OnClickXpClose()
    {
        CloseCHoosePanel();
        m_xpObj.Play(false);
        m_isXpBtnOpen = false;
    }

    /// <summary>
    /// 第一个阶段完成。
    /// </summary>
    public void OnXpTweenFinish()
    {
        //不该进的时候
        if (!m_isXpBtnOpen)
        {
            return;
        }
        if(m_TweenStatus==TweenStatus.Running)
        {
            m_TweenStatus = TweenStatus.Done;
            OnTweenPositionXp();
        }
    }

    public void OnTweenPositionXp()
    {
        //m_skillObj.SetActive(!m_isXpBtnOpen);
        if (m_skillObj.activeSelf && m_isChangeMode)
        {
            m_afterChangeModeObj.SetActive(true);
        }

        if (m_SecondChangeMode && m_SecondChangeMode.activeInHierarchy)
        {
            if (m_NewPlayerGuide_Step == 1)
            {
//                 NewPlayerGuidLogic.OpenWindow(m_SecondChangeMode, 133, 320, StrDictionary.GetClientDictionaryString("#{10300}"), "left", 2, true, true, true);
//                 m_NewPlayerGuide_Step = 0;
//                 NewPlayerGuidLogic.CurrentGuideID = 9;
                NewPlayerGuide(11);
            }

        }

        if (m_PVEBtn.gameObject && m_PVEBtn.gameObject.activeInHierarchy)
        {
            if (m_NewPlayerGuide_Step == 8)
            {
                NewPlayerGuide(9);
            }
        }

        if (NewPlayerGuidLogic.CurrentGuideID == 9)
        {
            NewPlayerGuide(10);
        }
    }

    public void TransformationGuideStep3()
    {
        StartCoroutine(TransformationGuideStep3Cor());
    }

    IEnumerator TransformationGuideStep3Cor()
    {
        yield return new WaitForSeconds(1);
        if (NewPlayerGuidLogic.CurrentGuideID == -1 && m_FinishedSteps[10] == 1)
        {
            NewPlayerGuide(10);
        }
        yield break;
    }

    /// <summary>
    /// 选择阶段完成并完成（最后一段的渐变完成）
    /// </summary>
    public void OnTweenFinsh_Group2()
    {
        if (TransformCon != null)
        {
            TransformCon.ResetTransformUI();
        }
    }

   

    public void OnClickXpMainBtn()
    {

		//不能重复进
        if (m_isXpBtnOpen)
        {
            return;
        }
        //新手关就不做限制了
        if (GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer != null)
            {
				// 死了不能点
				if(_mainPlayer.IsDie())
				{
					return;
				}

                //第一阶变身都不满足时不能进
                if (GetCurXpPercent(_mainPlayer.BaseAttr.XP, _mainPlayer.BaseAttr.MaxXP) < GlobeVar.XP_CHNAGE_MODE_1)
                {
                    return;
                }
                //再做一次等级限定
                if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level < _mainPlayer.GetSkillXp1LearnLevel())
                {
                    return;
                }
            }
        }
        if (TransformCon != null)
        {
            TransformCon.ResetTransformUI();
        }
        UpdateTransformSpriteColor();
        m_isXpBtnOpen = true;
        m_TweenStatus = TweenStatus.Running;
        //清理数据
        if (TransformCon != null)
        {
            TransformCon.ShowChoosePanel();
            m_BGForChoose.SetActive(true);
            m_SliderForChoose.value = 1;
            m_SliderForChoose.gameObject.SetActive(true);
            TransformCon.PlayTweenInGroup(TransformController.TWEENGROUP_START);
            m_EffectPve01.SetActive(false);
            m_EffectPvP01.SetActive(false);
            m_EffectPve01.SetActive(true);
            m_EffectPvP01.SetActive(true);
        }
        //m_xpObj.Play(true);
        NewPlayerGuidLogic.CloseWindow();
    }
    /// <summary>
    /// 由TransfromController调用
    /// </summary>
    public void CloseCHoosePanel()
    {
        m_isXpBtnOpen = false;
        m_BGForChoose.SetActive(false);
        m_SliderForChoose.gameObject.SetActive(false);
    }
    public void ReverseTween()
    {
        TransformCon.PlayTweenInGroup(TransformController.TWEENGROUP_END);
    }

    public void UpdateXpChooseSLiderValue(float percent)
    {
        m_SliderForChoose.value = percent;
    }

    public void ShowAfterChangeSkill(bool isShow)
    {
        m_afterChangeModeObj.SetActive(isShow);
        UpdateTransformBtnShow(!isShow);
    }

    public void UpdateSkillActiveByChangeState(int nChangeState)
    {
        if (nChangeState < 0 || nChangeState >= (int)GameDefine_Globe.ChangeModeState.COUNT)
        {
            return;
        }

        //如果是正常状态，激活正常状态的按钮显示
       // m_afterChangeModeObj.SetActive(!(nChangeState == (int)GameDefine_Globe.ChangeModeState.NORMAL));
        UpdateTransformBtnShow(nChangeState == (int)GameDefine_Globe.ChangeModeState.NORMAL);
        m_isChangeMode = !(nChangeState == (int)GameDefine_Globe.ChangeModeState.NORMAL);
    }

    private void UdpateXPBtnState()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == _mainPlayer)
        {
            return;
        }

        UpdateSkillActiveByChangeState(_mainPlayer.CurChangeState);
        if (GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            UpdateTransformBtnShow(GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level >= _mainPlayer.GetSkillXp1LearnLevel());
        }
        else
        {
            UpdateTransformBtnShow(false);
        }
        m_mainXpBtnCanUse.gameObject.SetActive(m_mainXpBtnObj.activeSelf && GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.XP > GlobeVar.XP_CHANGE_MODE_2);
    }

    private int m_NewGuildDelayId = -1;
    void showNewGuildByDelayId()
    {
        if (m_NewGuildDelayId != -1)
        {
            NewPlayerGuide(m_NewGuildDelayId);
            m_NewGuildDelayId = -1;
        }
    }
    //==========================
    public GameObject m_SecondChangeMode;

    public void ShowAndHide(bool isShow)
    {
        transform.GetChild(0).gameObject.SetActive(isShow);
    }

    public void ShowSomePart(int showType)
    {
        switch (showType)
        {
            case 0:
                // show all
                if (Turntable.Instance() != null)
                {
                    Turntable.Instance().gameObject.SetActive(true);
                }
                UpdateTransformBtnShow(true);
                m_CrashBtn.SetActive(true);
                m_skillObj.transform.FindChild("ChangeButton").gameObject.SetActive(true);
                break;

            case 1:
                // 只出现普攻
                if (Turntable.Instance() != null)
                {
                    Turntable.Instance().gameObject.SetActive(false);
                }
                UpdateTransformBtnShow(false);
                m_CrashBtn.SetActive(false);
                m_skillObj.transform.FindChild("ChangeButton").gameObject.SetActive(false);
                break;

            case 2:
                // 出现普攻和技能们
                if (Turntable.Instance() != null)
                {
                    Turntable.Instance().gameObject.SetActive(true);
                }
                break;

        }
    }

    public void LockSkillAtForFTE(int index)
    {
        m_MySkillBarInfo[index].IconInfo.spriteName = "Lock";
    }

    public void UnlockSkillAtForFTE(int index)
    {
        Tab_SkillEx skillEx = TableManager.GetSkillExByID(m_MySkillBarInfo[index].CurSkillId, 0);
        Tab_SkillBase skillBase = TableManager.GetSkillBaseByID(skillEx.BaseId, 0);
        m_MySkillBarInfo[index].IconInfo.spriteName = skillBase.Icon;
    }

    void TransformSkillFTE()
    {
        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            if (m_Skill5IconPic.gameObject && m_Skill5IconPic.gameObject.activeInHierarchy && m_FinishedSteps[9] == 1)
            {
                NewPlayerGuidLogic.OpenWindow_Circle(m_Skill5IconPic.gameObject, 110, StrDictionary.GetClientDictionaryString("#{11395}"), "center", 2);
            }
        }
    }
}
