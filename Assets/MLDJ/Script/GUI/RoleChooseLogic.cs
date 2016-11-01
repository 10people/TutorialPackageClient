using UnityEngine;
using System.Collections;
using Games.FakeObject;
using Games.GlobeDefine;
using System.Collections.Generic;
using GCGame;

public class RoleChooseLogic : UIControllerBase<RoleChooseLogic>
{
    public UISprite[] m_Roles;
	public UISprite[] m_HeardPic;
    public UILabel[] m_RoleNames;
	public UILabel[] m_RoleLevels;
	public GameObject[] m_lastLoginBac ;

    public const int MAX_CHAR_NUM = 3;
    private bool m_bBeginHeartBeat = false;      // 发送玩选人后，开始心跳
    private float m_HeartBeatTimer = 1.0f;
	private int m_chooseIndex = 0;
	private FakeObject m_PlayerFakeObj;

	public GameObject m_FakeObjTopLeft;
	public GameObject m_FakeObjBottomRight;

    public GameObject[] m_NoRoleObj;

    public UISprite[] m_ProSprite;
	
	private int firtPlaceIndex = 0; //中间位置的角色索引,存得0，1，2
	private List<int> otherPlaceIndexList = new List<int>(); //剩下两个的角色索引
    private int m_choosePlace = 0; //玩家选中的位置

    void Awake()
    {
        SetInstance(this);
        StartCoroutine(Init());
    }

    void Start()
    {
        LoginUILogic.Instance().ShowChooseRoleCamera();
        
        NGUITools.SetActive(LoginUILogic.Instance().m_ClickEffect[1], false);
        for (int i = 0; i < LoginUILogic.Instance().m_ClickEffect.Length; i++)
        {
            if (i == m_choosePlace)
            {
                NGUITools.SetActive(LoginUILogic.Instance().m_ClickEffect[i], true);
            }
            else
            {
                NGUITools.SetActive(LoginUILogic.Instance().m_ClickEffect[i], false);
            }
        }
        StartCoroutine(LoadAllPlayerNew());
        
    }

    void Update()
    {
        if (m_bBeginHeartBeat)
        {
            m_HeartBeatTimer -= Time.deltaTime;
            if (m_HeartBeatTimer < 0)
            {
                CG_CONNECTED_HEARTBEAT cgBeat = (CG_CONNECTED_HEARTBEAT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CONNECTED_HEARTBEAT);
                cgBeat.SetIsresponse(0);
                cgBeat.SendPacket();
                m_HeartBeatTimer = 1.0f;
            }
        }
    }

    IEnumerator Init()
    {
			yield return StartCoroutine (BundleManager.LoadCommonShaderEx ());

			GameManager.gameManager.ActiveScene.InitFakeObjRoot (m_FakeObjTopLeft, m_FakeObjBottomRight);
			GameManager.gameManager.ActiveScene.ShowFakeObj ();

			hideLastLoginBac ();
			m_chooseIndex = 0;
			chooseLastRole ();
	}

	void InitRoleInfo()
	{
        string strName = "";
		int temLevel = 0;
        string stricon1 = "";
        string stricon2 = "";
        for (int i = 0; i < MAX_CHAR_NUM; ++i)
        {
			int nIndex = getTargetRoleIndex(i);

            
            strName = "";
			temLevel  = 0 ;
            if (nIndex < LoginData.loginRoleList.Count)
            {
                strName  = LoginData.loginRoleList[nIndex].name;    
				temLevel = LoginData.loginRoleList[nIndex].level;
                stricon1 = Utils.GetProfessionIcon(LoginData.loginRoleList[nIndex].type);
                stricon2 = Utils.GetProPicByProfessionEx(LoginData.loginRoleList[nIndex].type);
            }

			// level 
			if( temLevel > 0  ) //MQAX_CHARACTER_LEVEL
			{
				m_RoleLevels[i].text = "Lv." + temLevel.ToString();
			}
			else
			{
				m_RoleLevels[i].text = "";
			}

			// name
            if (m_Roles.Length > i && m_RoleNames.Length > i)
            {                
                if (strName.Length > 0)
                {
                    //m_Roles[i].spriteName = "YanChi01";
                    m_RoleNames[i].text = strName;
                }
                else
                {
                    //m_Roles[i].spriteName = "YanChi02";
                    m_RoleNames[i].text = GCGame.Table.StrDictionary.GetClientDictionaryString("#{1006}"); ;
                }
            }

			//heard
			if (i < LoginData.loginRoleList.Count)
			{
				//m_HeardPic[i].spriteName = "TianShanHead" ;
			}
			else
			{
				//m_HeardPic[i].spriteName = "" ;
			}

            if (i < LoginData.loginRoleList.Count)
            {
                NGUITools.SetActive(m_NoRoleObj[i], false);
            }
            else
            {
                NGUITools.SetActive(m_NoRoleObj[i], true);
                NGUITools.SetActive(m_Roles[i].gameObject, false);
                NGUITools.SetActive(m_RoleNames[i].gameObject, false);
                
            }

            if (i < LoginData.loginRoleList.Count)
            {
                NGUITools.SetActive(m_ProSprite[i].gameObject, true);
                NGUITools.SetActive(m_HeardPic[i].gameObject, true);
                m_ProSprite[i].spriteName = stricon1;
                m_HeardPic[i].spriteName = stricon2;
            }
            else
            {
                NGUITools.SetActive(m_ProSprite[i].gameObject, false);
                NGUITools.SetActive(m_HeardPic[i].gameObject, false);
            }
        }
        OnChoose01();
    }

    void OnChoose01()
    {
        SetChoosePlace(0);
		OnChoose(firtPlaceIndex + 1);
    }

    void OnChoose02()
    {
        SetChoosePlace(1);
		int targetIndex = otherPlaceIndexList.Count >= 1 ? otherPlaceIndexList [0] + 1 : 2;
		OnChoose(targetIndex);
    }

    void OnChoose03()
    {
        SetChoosePlace(2);
		int targetIndex = otherPlaceIndexList.Count >= 2 ? otherPlaceIndexList [1] + 1 : 3;
		OnChoose(targetIndex);
    }

	int getTargetRoleIndex(int index)
	{
        if (index < LoginData.loginRoleList.Count)
        {
            if (index == 0)
            {
                return firtPlaceIndex;
            }
            else
            {
                return otherPlaceIndexList[index - 1];
            }
        }
        return index;

	}

    void OnChoose(int nIndex)
    {
		setRoleWeaponId (-1);
		setRoleProfess (-1);
        if (nIndex > 0 && nIndex <= MAX_CHAR_NUM)
        {
            if (nIndex > LoginData.loginRoleList.Count)
            {
                GotoCreateRole();
            }
            else
            {
                LoginUILogic.Instance().OnClickChangeShader();
                LoginUILogic.Instance().OnClickChangeEffect();
				m_chooseIndex =  nIndex -1 ;
				//ShowRoleMode(m_chooseIndex);
				//hideLastLoginBac();

// 				if(  m_chooseIndex >=0 && m_chooseIndex < m_lastLoginBac.Length )
// 				{
// 					m_lastLoginBac[m_chooseIndex].SetActive(true) ;
// 				}
            }
        }
    }

	public void roleIntoGame()
	{
        if (m_chooseIndex >= 0)
        {
            GotoGame(m_chooseIndex);
        }
        else
        {
            // 排错
            GotoGame(0);
        }
	}

	public void backToServer()
	{
		m_chooseIndex = 0 ;
		NetWorkLogic.GetMe().DisconnectServer();
		LoginUILogic.Instance().EnterServerChoose();
		//DestroyPartnerFakeObj ();
        LoginUILogic.Instance().DestroyRoleModeObj();
	}
    void GotoCreateRole()
    {
		//DestroyPartnerFakeObj ();
        LoginUILogic.Instance().EnterCreateRole();
        LoginUILogic.Instance().DestroyRoleModeObj();
    }

    void GotoGame(int nIndex)
    {
        if (nIndex >= 0 && nIndex < LoginData.loginRoleList.Count)
        {
            NetManager.SendChooseRole(LoginData.loginRoleList[nIndex].guid, RetSelectRoleFail);

            if (!GameManager.gameManager.OnLineState)
            {
                //LoginUILogic.Instance().EnterGame();
            }
            else
            {
                MessageBoxLogic.OpenWaitBox(1290, GameDefines.CONNECT_TIMEOUT, GameDefines.CONNECT_WAIT_DELAY, NetManager.OnWaitPacketTimeOut);
            }

            //app评价功能，到这儿算客户端登陆一次
            PlayerPreferenceData.ClientLoginCount = PlayerPreferenceData.ClientLoginCount + 1;
            PlayerPreferenceData.ClientClickReview = 0;
        }
        
    }

    void RetSelectRoleFail(GC_SELECTROLE_RET.SELECTROLE_RESULT result)
    {
        m_bBeginHeartBeat = false;        
        MessageBoxLogic.OpenOKBox(1291, 1000, OnEnterServerMain);
    }

    void OnEnterServerMain()
    {
        if (null != LoginUILogic.Instance())
        {
            LoginUILogic.Instance().EnterServerChoose();
        }
    }

	void ShowRoleMode(int index )
	{
	
		//yield return StartCoroutine(BundleManager.LoadCommonShader()); 

		if (index < 0 || index >= LoginData.loginRoleList.Count)
			return;
	
		setRoleWeaponId (LoginData.loginRoleList[index].WeaponID);
		setRoleProfess (LoginData.loginRoleList[index].type);
		CreatePartnerFakeObj (LoginData.loginRoleList[index].type,LoginData.loginRoleList[index].ModelVisualID);
	}

	void OnDestroy()
	{
		DestroyPartnerFakeObj ();
	}
	private void DestroyPartnerFakeObj()
	{
		if (m_PlayerFakeObj != null)
		{
			m_PlayerFakeObj.Destroy();
			m_PlayerFakeObj = null;
		}
	}
	private void CreatePartnerFakeObj(int pro,int modelVisualID)
	{
		if (m_PlayerFakeObj != null)
		{
			DestroyPartnerFakeObj();
		}
		CharacterDefine.PROFESSION profession = (CharacterDefine.PROFESSION)pro;
		//对应FakeObject.txt配置
		int fakeObjId = -1;
		switch (profession)
		{
		case CharacterDefine.PROFESSION.SHAOLIN:
			fakeObjId = 7;
			break;
		case CharacterDefine.PROFESSION.TIANSHAN:
			fakeObjId = 8;
			break;
		case CharacterDefine.PROFESSION.DALI:
			fakeObjId = 10;
			break;
		case CharacterDefine.PROFESSION.XIAOYAO:
			fakeObjId = 9;
			break;
		case CharacterDefine.PROFESSION.GAIBANG:
			fakeObjId = 62;
			break;
		default:
			fakeObjId = 7;
			break;
		}
		
		m_PlayerFakeObj = new FakeObject();
		if (m_PlayerFakeObj == null)
		{
			return;
		}
		//fakeObjId = 8;
	//	m_PlayerFakeObjID = fakeObjId;
		GameObject temFakeObject = null ;
		m_PlayerFakeObj.initFakeObject(fakeObjId, GameManager.gameManager.ActiveScene.FakeObjTrans, out temFakeObject,modelVisualID,(int)profession);

		if (m_PlayerFakeObj !=null)
		{
			m_PlayerFakeObj.PlayAnim(0);
		}

		GameManager.gameManager.ActiveScene.ShowFakeObj();
		//if (null != m_PlayerFakeObj.ObjAnim)
		//	m_ModelDrag.ModelTrans = m_PlayerFakeObj.ObjAnim.transform;
	}

	private void chooseLastRole()
	{
		ulong lastRoleGuid =  PlayerPreferenceData.LastRoleGUID;

		for (int i = 0; i < LoginData.loginRoleList.Count; ++i) 
		{
			if( LoginData.loginRoleList[i].guid == lastRoleGuid)
			{
				OnChoose(i + 1);
				//m_lastLoginBac[i].SetActive(true) ;
				return ;
			}
		}
	}

	private void hideLastLoginBac()
	{
		for (int i = 0; i < m_lastLoginBac.Length; ++i)
		{
			m_lastLoginBac[i].SetActive(false);
		}
	}
	// ==============================================
	private int m_RoleWeaponId ;
	private int m_RoleProfess ;
	public int GetRoleWeaponId()
	{
		return m_RoleWeaponId;
	}
	private void setRoleWeaponId( int id)
	{
		m_RoleWeaponId = id;
	}
	public int GetRoleProfess()
	{
		return m_RoleProfess;
	}
	private void setRoleProfess( int id)
	{
		m_RoleProfess = id;
	}
    //==================================================
    // 翅膀 
    private int m_playerCurEquipFlyWingId = GlobeVar.INVALID_ID;
    private int m_playerCurDreamFlyWingId = GlobeVar.INVALID_ID;
    private bool m_playerIsShowHideFlyWing = false;
    public int GetPlayerLoginFlyWingId()
    {
       if (m_playerIsShowHideFlyWing)
       {
           if (m_playerCurDreamFlyWingId != GlobeVar.INVALID_ID)
               return m_playerCurDreamFlyWingId;

           else if (m_playerCurEquipFlyWingId != GlobeVar.INVALID_ID)
               return m_playerCurEquipFlyWingId;
       }
       return GlobeVar.INVALID_ID;
    }
    public int PlayerCurEquipFlyWingId
    {
        set { m_playerCurEquipFlyWingId = value; }
    }
    public int PlayerCurDreamFlyWingId
    {
        set { m_playerCurDreamFlyWingId = value; }
    }
    public bool PlayerIsShowHideFlyWing
    {
        set { m_playerIsShowHideFlyWing = value; }
    }

    IEnumerator LoadAllPlayerNew()
    {
        yield return new WaitForSeconds(0.1f);
        int Type = -1;
        int ModelVisualID = -1;
        int WeaponID = -1;
        int WeaponEffectGem = -1;
        int index = 0;
		firtPlaceIndex = 0;

        ulong lastRoleGuid = PlayerPreferenceData.LastRoleGUID;

        for (int j = 0; j < MAX_CHAR_NUM; j++)
        {
            if (j < LoginData.loginRoleList.Count)
             {
                 if (LoginData.loginRoleList[j].guid == lastRoleGuid)
                 {
					firtPlaceIndex = j;
                 }
             }
        }
         for (int i = 0; i < MAX_CHAR_NUM; i++)
         {
             if (i < LoginData.loginRoleList.Count)
             {
                //LoginUILogic.Instance().SetLoadModelMark(false); //在这里设置还没有加载完模型

                 Type = LoginData.loginRoleList[i].type;
                 ModelVisualID = LoginData.loginRoleList[i].ModelVisualID;
                 WeaponID = LoginData.loginRoleList[i].WeaponID;
                 WeaponEffectGem = LoginData.loginRoleList[i].WeaponEffectGem;
				 if (i == firtPlaceIndex)
                 {
                     LoginUILogic.Instance().ShowModel(Type, ModelVisualID, WeaponID, WeaponEffectGem, 0);
                 }
                 else
                 {
					 otherPlaceIndexList.Add(i);
                     index++;
                     LoginUILogic.Instance().ShowModel(Type, ModelVisualID, WeaponID, WeaponEffectGem, index);
                 }
                 
                //yield return LoginUILogic.Instance().GetLoadModelMark(); //等待，一直到加载模型结束
                 yield return new WaitForSeconds(0.5f);
             }
        }

		InitRoleInfo ();
    }

    public void SetChoosePlace(int choosePlace)
    {
        m_choosePlace = choosePlace;
    }

    public int GetChoosePlace()
    {
        return m_choosePlace;
    }

}
