using Games.GlobeDefine;
using Module.Log;
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using System;
using GCGame;
using GCGame.Table;
using System.Collections.Generic;

public struct HpInfo
{
    public UISprite m_TargetHPSprite;
	public UISprite m_TargetHPotherSprite;
    public UISprite m_TargetHPBakSprite;
    public UILabel m_TargetHPText;
    public UILabel m_TargetHpCount;
}

public class TargetFrameLogic : MonoBehaviour {

    private static TargetFrameLogic m_Instance = null;
    public static TargetFrameLogic Instance()
    {
        return m_Instance;
    }

    public UISprite[] m_BuffShowIcon = new UISprite[(int)Games.ImpactModle.BUFFICON.MAX_BUFFICONUM];
    public GameObject m_TargetFrameOffset;
    public UILabel m_TargetLevelText;
    public UILabel m_TargetName;

    public GameObject m_NormalHPInfo;
    public UISprite m_NormalHPSprite;
    public UISprite m_NormalHPBakSprite;
    public UILabel m_NormalHPText;
    public UILabel m_NormalHpCount;

    public GameObject m_BossHPInfo;
    public UISprite m_BossHPSprite;
	public UISprite m_BossHPOtherSprite;
    public UISprite m_BossHPBakSprite;
    public UILabel m_BossHPText;
    public UILabel m_BossHpCount;

    public UISprite m_TargetMPSprite;
    public UISprite m_TargetMPBakSprite;
    public UILabel m_TargetMPText;
    //public UISprite m_TargetHeadSprite;
    
    public BoxCollider m_TargetFrameBoxColliser;
    //public TweenAlpha m_FoldTween;

    private bool m_bFold = false;           // 折叠状态 false 目标头像收起 fold 目标头像显示
    private bool m_hasTarget = false;    // 是否有目标

    private float m_fMPBakSpeed = 0.003f;
    private bool m_isNeedShowMp = false;

    private int m_nLastMp =0;

    private HpInfo m_HpInfo;
    void CleanHpInfo()
    {
        m_HpInfo.m_TargetHPSprite = null;
		m_HpInfo.m_TargetHPotherSprite = null;
        m_HpInfo.m_TargetHPBakSprite = null;
        m_HpInfo.m_TargetHPText = null;
        m_HpInfo.m_TargetHpCount = null;
    }
    void SwitchHpInfo(Obj_Character obj)
    {
        if (obj == null)
        {
            return;
        }
        bool bNormal = true;
        if (obj.ObjType == GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
        {
            Obj_NPC npcObj = obj as Obj_NPC;
            if (null != npcObj)
            {
                if (npcObj.NpcType == GameDefine_Globe.NPC_TYPE.BOSS)
                {
                    bNormal = false;
                }
            }
        }
        if ( bNormal )
        {
            m_NormalHPInfo.SetActive(true);
            m_BossHPInfo.SetActive(false);

            m_HpInfo.m_TargetHPSprite = m_NormalHPSprite;
            m_HpInfo.m_TargetHPBakSprite = m_NormalHPBakSprite;
            m_HpInfo.m_TargetHPText = m_NormalHPText;
            m_HpInfo.m_TargetHpCount = m_NormalHpCount;
			m_HpInfo.m_TargetHPotherSprite = null ;

			m_HpInfo.m_TargetHpCount.gameObject.SetActive(true) ;
        }
        else
        {
            m_NormalHPInfo.SetActive(false);
            m_BossHPInfo.SetActive(true);

            m_HpInfo.m_TargetHPSprite = m_BossHPSprite;
            m_HpInfo.m_TargetHPBakSprite = m_BossHPBakSprite;
            m_HpInfo.m_TargetHPText = m_BossHPText;
            m_HpInfo.m_TargetHpCount = m_BossHpCount;
			m_HpInfo.m_TargetHPotherSprite = m_BossHPOtherSprite ;

			m_HpInfo.m_TargetHpCount.gameObject.SetActive(false) ;
        }
    }
    /// <summary>
    /// 存储血条颜色信息
    /// </summary>
    private Color[] m_HpColorArray;
    //保存目标的某些信息
    private UInt64 m_TargetGuid = GlobeVar.INVALID_GUID;
    private int m_lastHpCount = -1;
    private string m_showHpCountFormat = "x{0}";

    public System.UInt64 TargetGuid
    {
        get { return m_TargetGuid; }
        set { m_TargetGuid = value; }
    }

    private string m_strTargetName = "";
    public string StrTargetName
    {
        get { return m_strTargetName; }
        set { m_strTargetName = value; }
    }

    private int m_TargetServerID = GlobeVar.INVALID_ID;
    public int TargetServerID
    {
        get { return m_TargetServerID; }
        set { m_TargetServerID = value; }
    }
    
    void Awake()
    {
        m_Instance = this;
        //gameObject.SetActive(false);
        CheckHideHPText();        
    }

	// Use this for initialization
	void Start () {
        //InitUITweenerWhenChangeScene();
        InitHpColorData();
        HideTargetFrame();

        m_TargetLevelText.text = "Lv 0";        
        ClearHpShow();
        m_TargetMPSprite.fillAmount =0;
        m_TargetMPBakSprite.fillAmount = 0;

        CleanHpInfo();
	}
	
	// Update is called once per frame
	void Update () 
    {
		// 残血
    if (m_HpInfo.m_TargetHPSprite != null) 
		{
			if(  m_HpInfo.m_TargetHPSprite.fillAmount <= 0 )
			{
				m_HpInfo.m_TargetHPSprite.fillAmount = 0.0f ;
				m_HpInfo.m_TargetHPBakSprite.fillAmount = 0.0f ;

				if (m_HpInfo.m_TargetHPotherSprite != null) 
					m_HpInfo.m_TargetHPotherSprite.fillAmount = 0.0f ;
			}

			else
			{
				if (m_isNpc && m_HpInfo.m_TargetHPotherSprite != null) 
					m_HpInfo.m_TargetHPotherSprite.fillAmount = 1.0f ;

				if( m_HpInfo.m_TargetHPSprite.fillAmount > 0 && m_HpInfo.m_TargetHPBakSprite.fillAmount <= 0 )
				{
					m_HpInfo.m_TargetHPBakSprite.fillAmount = m_HpInfo.m_TargetHPSprite.fillAmount ;
				}

				if (m_HpInfo.m_TargetHPSprite.fillAmount > 0 && m_HpInfo.m_TargetHPBakSprite.fillAmount > 0)
				{
					m_HpInfo.m_TargetHPBakSprite.fillAmount -= 0.003f ;
					if( m_HpInfo.m_TargetHPSprite.fillAmount - m_HpInfo.m_TargetHPBakSprite.fillAmount >= 0 )
					{
						m_HpInfo.m_TargetHPBakSprite.fillAmount =  m_HpInfo.m_TargetHPSprite.fillAmount ;
					}
				}
			}
		}


        //残蓝
	    if (m_isNeedShowMp)
	    {
            if (m_TargetMPSprite.fillAmount > 0 && m_TargetMPBakSprite.fillAmount <= 0)
            {
                m_TargetMPBakSprite.fillAmount = m_TargetMPSprite.fillAmount;
            }
            else if (m_TargetMPSprite.fillAmount - m_TargetMPBakSprite.fillAmount < 0)
            {
                m_TargetMPBakSprite.fillAmount -= m_fMPBakSpeed;
                if (m_TargetMPSprite.fillAmount - m_TargetMPBakSprite.fillAmount >= 0)
                {
                    m_TargetMPBakSprite.fillAmount = m_TargetMPSprite.fillAmount;
                }
            }
	    }
	}

    void OnDestroy()
    {
        m_Instance = null;
    }

    public void PlayTween(bool nDirection)
    {
        m_bFold = nDirection;
        if (!m_bFold)
        {
            if (m_hasTarget)
            {
                gameObject.SetActive(true);
            }
            else
            {
                gameObject.SetActive(false);
            }
        }
        else
        {
            gameObject.SetActive(false);
        }
    }

    /// <summary>
    /// 切换目标
    /// </summary>
    /// <param name="targetObj">目标obj</param>
    public void ChangeTarget(Obj_Character targetObj)
    {
        if (!m_bFold)
        {
            ShowTargetFrame();
        }
        if (targetObj == null || targetObj.BaseAttr == null)
        {
            LogModule.ErrorLog("ChangeTarget called but targetObj targetObj == null || targetObj.BaseAttr == null");
            return;
        }

        SwitchHpInfo(targetObj);

        m_hasTarget = true;
        bool isSameTarget = false;
        if (null == targetObj)
            return;

        if (m_TargetServerID == targetObj.ServerID)
        {
            isSameTarget = true;
        }
        else
        {
            m_TargetLevelText.text = "Lv 0";
            ClearHpShow();
            m_TargetMPSprite.fillAmount = 0;
            m_TargetMPBakSprite.fillAmount = 0;
            m_nLastMp = 0;
        }
        m_TargetServerID = targetObj.ServerID;
        if (targetObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER || 
            targetObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
            targetObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
        {
            Obj_OtherPlayer otherPlayer = targetObj as Obj_OtherPlayer;
            if (null != otherPlayer)
            {
                m_TargetGuid = otherPlayer.GUID;
                if (!string.IsNullOrEmpty(otherPlayer.BaseAttr.RoleName))
                {
                    char firstChar = otherPlayer.BaseAttr.RoleName[0];
                    string szNameResult = "";
                    if (firstChar == '#' && 0==StrDictionary.GetServerDictionaryFormatString(otherPlayer.BaseAttr.RoleName,ref szNameResult))
                    {
                        otherPlayer.BaseAttr.RoleName = szNameResult;
                    }
                }
                m_strTargetName = otherPlayer.BaseAttr.RoleName;
            }
        }
        else
        {
            m_TargetGuid = GlobeVar.INVALID_GUID;
            m_strTargetName = "";
        }
        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
		{
			if (targetObj.BaseAttr.RoleBaseID == 1080)
			{
				m_TargetLevelText.text = string.Format("Lv {0}", 100);
			}
			else if (targetObj.BaseAttr.RoleBaseID == 1079)
			{
				m_TargetLevelText.text = string.Format("Lv {0}", 90);
			}
			else
			{
				// 玩家
				m_TargetLevelText.text = string.Format("Lv {0}", 100);
			}
		}
		else
		{
			m_TargetLevelText.text = string.Format("Lv {0}", targetObj.BaseAttr.Level);
		}
        
        SetTargetName(targetObj);

        bool isWorldBoss = (targetObj.BaseAttr.RoleBaseID == 847);
        if (isWorldBoss == true || IsGuildBossNpc(targetObj) == true)
        {
            //m_TargetHPText.text = "???" + "/" + "???";
            float perCent = (float)targetObj.BaseAttr.HP / (float)targetObj.BaseAttr.MaxHP * 100;
            if (m_HpInfo.m_TargetHPText != null)
            {
                m_HpInfo.m_TargetHPText.text = perCent.ToString("0.000") + "%";
            }
        }
        else
        {
            if (m_HpInfo.m_TargetHPText != null)
            {
                m_HpInfo.m_TargetHPText.text = Utils.ConvertLargeNumToString(targetObj.BaseAttr.HP) + "/" + Utils.ConvertLargeNumToString(targetObj.BaseAttr.MaxHP);
            }
        }
        int hpCount = 1;

        if (targetObj.BaseAttr.CachedRoleBase != null)
        {
            hpCount = targetObj.BaseAttr.CachedRoleBase.HpCount;
        }

		Obj_NPC npcObj = targetObj as Obj_NPC;
		m_isNpc = false;
		if (null != npcObj) 
		{
			if (npcObj.NpcType == GameDefine_Globe.NPC_TYPE.BOSS)
			{
				m_isNpc = true ;
				UpdateBossHpShow(targetObj.BaseAttr.HP, targetObj.BaseAttr.MaxHP, hpCount); 
			}

		}

		UpdateHpShow(targetObj.BaseAttr.HP, targetObj.BaseAttr.MaxHP, hpCount); 

        // 蓝条范围 0.345~1
        //玩家才显示蓝条
        if (targetObj.ObjType ==Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER || 
            targetObj.ObjType ==Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
            targetObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
        {
            Obj_OtherPlayer _Player = targetObj as Obj_OtherPlayer;
            if (_Player)
            {
                m_isNeedShowMp = true;
                m_TargetMPSprite.gameObject.SetActive(true);
                m_TargetMPText.gameObject.SetActive(true);
                
               
//                 m_TargetMPSprite.spriteName = "MagicBar";
//                 m_TargetMPSprite.MakePixelPerfect();
//                 m_TargetMPBakSprite.spriteName = "MagicBar1";
//                 m_TargetMPBakSprite.MakePixelPerfect();

                if (targetObj.BaseAttr.MaxMP > 0)
                {
                    m_TargetMPSprite.fillAmount = (float)targetObj.BaseAttr.MP / (float)targetObj.BaseAttr.MaxMP;
                }
                else
                {
                    m_TargetMPSprite.fillAmount = 0;
                }
                m_TargetMPText.text = Utils.ConvertLargeNumToString(targetObj.BaseAttr.MP) + "/" + Utils.ConvertLargeNumToString(targetObj.BaseAttr.MaxMP);
                if (m_TargetMPSprite.fillAmount <= 0)
                {
                    m_TargetMPSprite.fillAmount = 0;
                    m_TargetMPBakSprite.fillAmount = 0;
                    m_fMPBakSpeed = 0.003f;
                }
                else if (m_TargetMPBakSprite.fillAmount - m_TargetMPSprite.fillAmount > 0)
                {
                    m_fMPBakSpeed = (m_TargetMPBakSprite.fillAmount - m_TargetMPSprite.fillAmount) * Time.deltaTime;
                }
                else if (m_TargetMPBakSprite.fillAmount - m_TargetMPSprite.fillAmount < 0)
                {
                    m_TargetMPBakSprite.fillAmount = m_TargetMPSprite.fillAmount;
                }
                if (isSameTarget && m_nLastMp<=targetObj.BaseAttr.MP)
                {
                    m_TargetMPBakSprite.fillAmount = m_TargetMPSprite.fillAmount;
                }
            }
        }
        else
        {
            m_isNeedShowMp = false;
            m_TargetMPSprite.gameObject.SetActive(false);
            m_TargetMPText.gameObject.SetActive(false);
            m_TargetMPBakSprite.gameObject.SetActive(false);
        }
        //if (m_TargetHeadSprite != null)
        //{
        //    m_TargetHeadSprite.spriteName = targetObj.BaseAttr.HeadPic;
        //    m_TargetHeadSprite.MakePixelPerfect();
        //}
        //else
        //{
        //LogModule.WarningLog("TargetFrameRoot prefab m_TargetHeadSprite is null");
        //}
        m_nLastMp = targetObj.BaseAttr.MP;

        //if (targetObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
        //{
        //    Obj_NPC targetNPC = targetObj as Obj_NPC;
        //    if (null == targetNPC)
        //    {
        //        return;
        //    }
        //    if (targetNPC.BelongObjID != GlobeVar.INVALID_ID && targetNPC.BelongTeamID == GlobeVar.INVALID_ID)
        //    {
        //        if (Singleton<ObjManager>.Instance.MainPlayer != null &&
        //            Singleton<ObjManager>.Instance.MainPlayer.ServerID == targetNPC.BelongObjID)
        //        {
        //            m_BelongSprite.SetActive(true);
        //        }
        //        else
        //        {
        //            m_BelongSprite.SetActive(false);
        //        }
        //    }
        //    else if (targetNPC.BelongObjID == GlobeVar.INVALID_ID && targetNPC.BelongTeamID != GlobeVar.INVALID_ID)
        //    {
        //        if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID == targetNPC.BelongTeamID)
        //        {
        //            m_BelongSprite.SetActive(true);
        //        }
        //        else
        //        {
        //            m_BelongSprite.SetActive(false);
        //        }
        //    }
        //}
    }
    public void ShowTargetDebuffLogo(IList<int> debuffids)
    {
      if (m_BuffShowIcon != null && m_BuffShowIcon.Length == (int)Games.ImpactModle.BUFFICON.MAX_BUFFICONUM && debuffids != null) {
        for (int i = 0; i < (int)Games.ImpactModle.BUFFICON.MAX_BUFFICONUM; i++) {
          if (m_BuffShowIcon[i] != null) {
            m_BuffShowIcon[i].gameObject.SetActive(false);
          }
        }

        int nBuffShowIndex = 0;
        int count = debuffids.Count;
        for (int i = 0; i < count; ++i) {
          Tab_Impact _tabImpact = TableManager.GetImpactByID(debuffids[i], 0);
          if (_tabImpact != null) {
            if (_tabImpact.BuffType == (int)Games.ImpactModle.BUFFTYPE.DEBUFF && _tabImpact.BuffIcon != "-1") {
              if (nBuffShowIndex >= 0 && nBuffShowIndex < (int)Games.ImpactModle.BUFFICON.MAX_BUFFICONUM) {
                if (m_BuffShowIcon[nBuffShowIndex] != null) {
                  m_BuffShowIcon[nBuffShowIndex].gameObject.SetActive(true);
                  m_BuffShowIcon[nBuffShowIndex].spriteName = _tabImpact.BuffIcon;
                  m_BuffShowIcon[nBuffShowIndex].MakePixelPerfect();
                  nBuffShowIndex++;
                }
              } else {
                break;
              }
            }
          }
        }
      }
    }
    public void CancelTarget()
    {
        if (gameObject.activeSelf)
        {
            HideTargetFrame();
        }
        m_hasTarget = false;
        m_TargetGuid = GlobeVar.INVALID_GUID;
        m_TargetServerID = GlobeVar.INVALID_ID;
        m_strTargetName = "";

        m_TargetLevelText.text = "Lv 0";
        ClearHpShow();
        m_TargetMPSprite.fillAmount = 0;
        m_TargetMPBakSprite.fillAmount = 0;
        m_nLastMp = 0;
    }

    public void ChangeTargetNameColor(Color value)
    {
        m_TargetName.color = value;
    }
    /// <summary>
    /// 应对切换场景时UI异常消失 重新初始化Tween动画
    /// </summary>
    //void InitUITweenerWhenChangeScene()
    //{
    //    m_FoldTween.Reset();
    //    m_FoldTween.alpha = 1;
    //    m_FoldTween.from = 1;
    //    m_FoldTween.to = 0;
    //}


    void ShowTargetFrame()
    {
        //m_FoldTween.alpha = 1;
        m_TargetFrameBoxColliser.enabled = true;
        gameObject.SetActive(true);
    }

    void HideTargetFrame()
    {
        //m_FoldTween.alpha = 0;
        m_TargetFrameBoxColliser.enabled = false;
        gameObject.SetActive(false);
    }

    public void CheckHideHPText()
    {
        if ( GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO )
        {
            if (m_NormalHPText != null)
            {
                m_NormalHPText.gameObject.SetActive(false);
            }
            if (m_BossHPText != null)
            {
                m_BossHPText.gameObject.SetActive(false);
            }
        }
    }

    //void SetTargetFrameTweenAlpha()
    //{
    //    if (m_bFold)
    //    {
    //        if (!m_hasTarget)
    //        {
    //            m_FoldTween.Reset();
    //            m_FoldTween.from = 0;
    //            m_FoldTween.to = 0;
    //            m_TargetFrameBoxColliser.enabled = false;
    //            m_FoldTween.Play();
    //        }
    //        else
    //        {
    //            m_FoldTween.Reset();
    //            m_FoldTween.from = 1;
    //            m_FoldTween.to = 0;
    //            m_TargetFrameBoxColliser.enabled = false;
    //            m_FoldTween.Play();
    //        }
    //    }
    //    else
    //    {
    //        if (!m_hasTarget)
    //        {
    //            m_FoldTween.Reset();
    //            m_FoldTween.from = 0;
    //            m_FoldTween.to = 0;
    //            m_TargetFrameBoxColliser.enabled = false;
    //            m_FoldTween.Play();
    //        }
    //        else
    //        {
    //            m_FoldTween.Reset();
    //            m_FoldTween.from = 0;
    //            m_FoldTween.to = 1;
    //            m_TargetFrameBoxColliser.enabled = true;
    //            m_FoldTween.Play();
    //        }
    //    }
    //}

    //点击头像弹出菜单
    void OnClickTargetFrame()
    {
        //只有玩家可以弹出菜单，所以发现guid非法则不弹
        if (m_TargetGuid == GlobeVar.INVALID_GUID || m_strTargetName == "")
        {
            return;
        }

        //显示则点击消失，隐藏则点击显示
        if (PopMenuLogic.Instance() == null && m_HpInfo.m_TargetHPSprite != null )
        {
            //PopMenuLogic.ShowMenu("TargetFramePopMenu", m_TargetHeadSprite.gameObject);
            PopMenuLogic.ShowMenu("TargetFramePopMenu", m_HpInfo.m_TargetHPSprite.gameObject);
            return;
        }
        else
        {
            UIManager.CloseUI(UIInfo.PopMenuRoot);
        }

    }

    void SetTargetName(Obj_Character targetObj)
    {
        m_TargetName.text = targetObj.BaseAttr.RoleName;
        m_TargetName.color = targetObj.GetNameBoardColor();
    }

    bool IsGuildBossNpc(Obj_Character targetObj)
    {
        if (targetObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
        {
            Obj_NPC rNpc = targetObj as Obj_NPC;
            if (rNpc != null)
            {
                return rNpc.IsGuildActivityBoss;
            }
        }
        return false;
    }

    #region 多段血条逻辑
    private void UpdateHpShow(int curHp,int maxHp,int hpCount)
    {
        if (m_HpColorArray == null || m_HpColorArray.Length != GlobeVar.MAX_CHARACTER_HP_COUNT)
        {
            LogModule.ErrorLog("UpdateHpShow called but m_HpColorArray == null || m_HpColorArray.Length != GlobeVar.MAX_CHARACTER_HP_COUNT");
            return;
        }
        if (m_HpInfo.m_TargetHPSprite == null || m_HpInfo.m_TargetHPBakSprite == null)
        {
            LogModule.ErrorLog("UpdateHpShow called but m_TargetHPSprite == null || m_TargetHPBakSprite == null");
            return;
        }
        if (curHp > maxHp)
        {
            LogModule.ErrorLog("UpdateHpShow called but curHp {0} > maxHp {1}", curHp,maxHp);
            curHp = maxHp;
        }
        if (hpCount < 1 || hpCount > GlobeVar.MAX_CHARACTER_HP_COUNT)
        {
            LogModule.ErrorLog("UpdateHpShow called but hpCount {0} <1 || > GlobeVar.MAX_CHARACTER_HP_COUNT set it to 1.", hpCount);
            hpCount = 1;
        }

        float differ = maxHp*1f / hpCount;
        float curHpTimes = (curHp/differ)%1;
        float fillAmount = Mathf.Clamp01(curHpTimes);
        if (maxHp == curHp)
        {
            fillAmount = 1;
        }
        int index = 1;
        for (int i = 1; i <= hpCount; i++)
        {
            index = i;
            if (i*differ >= curHp)
            {
                break;
            }
        }
        /*Color bgColor;
        Color mainColor = m_HpColorArray[index -1 ];
        if (index <= 1)
        {
            bgColor = new Color(0,0,0,0);
        }
        else
        {
            bgColor = m_HpColorArray[index - 2];
        }   
        m_HpInfo.m_TargetHPSprite.color = mainColor;
        m_HpInfo.m_TargetHPBakSprite.color = bgColor;

		*/
        m_HpInfo.m_TargetHPSprite.fillAmount = fillAmount;
        if (m_HpInfo.m_TargetHpCount != null)
        {
            if (index > 1 || hpCount>1)
            {
                //m_HpInfo.m_TargetHpCount.gameObject.SetActive(true);
                NGUITools.SetActive(m_HpInfo.m_TargetHpCount.cachedGameObject, true);
            }
            else
            {
                //m_HpInfo.m_TargetHpCount.gameObject.SetActive(false);
                NGUITools.SetActive(m_HpInfo.m_TargetHpCount.cachedGameObject, false);
            }

            if (index != m_lastHpCount)
            {
                m_lastHpCount = index;
                m_HpInfo.m_TargetHpCount.text = string.Format(m_showHpCountFormat, m_lastHpCount);
            }
        }



    }

    private void InitHpColorData()
    {
        m_HpColorArray = new Color[GlobeVar.MAX_CHARACTER_HP_COUNT];
        m_HpColorArray[0] = new Color(229/255f,0,65/255f);
        m_HpColorArray[1] = new Color(255 / 255f, 122/255f, 24 / 255f);
        m_HpColorArray[2] = new Color(255 / 255f, 228 / 255f, 0);
        m_HpColorArray[3] = new Color(109 / 255f, 177 / 255f, 0);
        m_HpColorArray[4] = new Color(0, 107 / 255f, 93 / 255f);
        m_HpColorArray[5] = new Color(5 / 255f, 217 / 255f, 255 / 255f);
        m_HpColorArray[6] = new Color(0, 91 / 255f, 203 / 255f);
        m_HpColorArray[7] = new Color(154 / 255f, 127 / 255f, 255 / 255f);
        m_HpColorArray[8] = new Color(108 / 255f, 0, 199 / 255f);
    }

    private void ClearHpShow()
    {
        if (m_NormalHPSprite != null)
        {
            m_NormalHPSprite.fillAmount = 0;            
        }
        if (m_BossHPSprite != null)
        {
            m_BossHPSprite.fillAmount = 0;
        }
        if (m_NormalHPText != null)
        {
            m_NormalHPText.text = "0/0";
        }
        if (m_BossHPText != null)
        {
            m_BossHPText.text = "0/0";
        }

		if (m_NormalHPBakSprite != null) 
		{
			m_NormalHPBakSprite.fillAmount = 0.0f ;
		}
    }

	//===========================================================
    private string YELLOW_SPRITE = "BossTargetHpPre";
    private string PURPLE_SPRITE = "BossTargetHp";
    private string BLUE_SPRITE = "BossTargetHpMid";
	private bool m_isNpc = false;
	private List<string> m_spriteList = new List<string> () ;
	private void UpdateBossHpShow(int hp ,int maxHp ,int hpCount)
	{
		m_spriteList.Clear ();
		string lastSprite = "";
		for( int i = 0 ; i < hpCount ; ++i ) 
		{
			m_spriteList.Add(getBeforSprite(lastSprite) ) ;
			lastSprite =  getBeforSprite(lastSprite) ;
		}

		//获得当前的血量所获得的层级
		if (maxHp <= 0 || hpCount <= 0)
			return;

		// 每一层的 血量
		int cell = maxHp / hpCount;

		// 当前所在层
		int curCell = hp / cell  ;
		if (hp % cell > 0)
			curCell += 1;

		// 正常的 处理
		float per = 0.0f;
		if (curCell - 1 >= 0 && curCell - 1 < hpCount)
		{
			 per = (float)( hp - (curCell - 1) * cell) / cell ;

			// 设置底图 
			m_HpInfo.m_TargetHPSprite.spriteName = m_spriteList[curCell - 1 ];

			if( curCell <= 1)
				m_HpInfo.m_TargetHPotherSprite.spriteName = "" ;
			else
			    m_HpInfo.m_TargetHPotherSprite.spriteName =  getNextSprite(m_spriteList[curCell - 1 ]) ;

			// 设置显示百分比
			m_HpInfo.m_TargetHPSprite.fillAmount = per ;
		} 

		// curCell 为 0 , 已经死亡 。。神马的不显示的说
		else if (curCell == 0)
		{
			per = 0.0f ;

			// 设置底图 
			m_HpInfo.m_TargetHPSprite.spriteName = "";
			m_HpInfo.m_TargetHPSprite.fillAmount = per ;
		}
	}

	private string getBeforSprite( string temString)
	{
		if (temString == "" || temString == BLUE_SPRITE)
				return YELLOW_SPRITE;
		
		else if(  temString == YELLOW_SPRITE)
				return PURPLE_SPRITE ;

		else if(  temString == PURPLE_SPRITE)
				return  BLUE_SPRITE ;

		return "";
	}

	private string getNextSprite( string temString)
	{
		if(  temString == YELLOW_SPRITE)
			return BLUE_SPRITE ;

		else if (temString == PURPLE_SPRITE)
			return YELLOW_SPRITE;

		else if(  temString == BLUE_SPRITE)
			return  PURPLE_SPRITE ;
		
		return "";
	}

    #endregion
}
