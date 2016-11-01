using UnityEngine;
using System.Collections;
using GCGame;
using SPacket.SocketInstance;
using GCGame.Table;
using System.Collections.Generic;
using Games.GlobeDefine;

public class RoleCreateLogic : UIControllerBase<RoleCreateLogic>
{
    public UIInput m_InputName;
    private ROLE_PROFESSION m_ChooseIndex;
    private ROLE_SEX m_ChooseSex;
    public const int MAX_CHAR_NAME = 14;
    private bool m_bBeginHeartBeat = false;      // 发送玩选人后，开始心跳
    private float m_HeartBeatTimer = 1.0f;

    public TabController m_SexController;
    public GameObject m_RoleImage1;
    public GameObject m_RoleImage2;
    public GameObject m_RoleImage3;
    public UILabel m_ProTitle;

    //新增的一些东西
    public GameObject m_FirstStepObj;
    public GameObject m_NextStepObj;
    public GameObject[] m_RoleItemObj;
    public ChangePerson m_ChangePersonObj;
	public MUISelectPerson m_MuiSelectPersonObj;
	public GameObject bgButton1Obj;
	public GameObject bgButton2Obj;
	public Transform firstBlurredTrans;

    private int m_CurRoleIndex;

	public UIPlayTween tweenPlayer;
    public TweenAlpha backgroundTweenerAlpha;
    public TweenScale backgroungTweenerScale;
    public TweenPosition backgroundTweenerPosition;

	public UILabel[] m_processNameArray;

    public GameObject[] m_RoleBgObj;
    public GameObject[] m_ZhiYeObj;
    public UILabel[] m_ZhiYeLabel;
    public UIPlayTween m_ZhiYeMgr;

    private bool IsClickSelectRole = false;


    public GameObject m_ResetTweenParent;
    public GameObject m_TopAnchor;

    public enum ROLE_SEX
    {        
        ROLE_FEMALE = 0,
        ROLE_MALE = 1,
    };
    //本地选择次序，实际次序CharacterDefine的PROFESSION
    public enum ROLE_PROFESSION
    {
        ROLE_SJS = 0,//双剑士
        ROLE_GJS = 1,//弓箭手
        ROLE_PRO3 = 2,
        ROLE_KZS = 3,//狂战士
        ROLE_MDS = 4,//魔导师
        ROLE_PRO6 = 5,
    };

    int GetRealProfessionID(ROLE_PROFESSION value)
    {
        if (value == ROLE_PROFESSION.ROLE_SJS)
        {
            return (int)CharacterDefine.PROFESSION.TIANSHAN;
        }
        else if (value == ROLE_PROFESSION.ROLE_GJS)
        {
            return (int)CharacterDefine.PROFESSION.DALI;
        }
        else if (value == ROLE_PROFESSION.ROLE_KZS)
        {
            return (int)CharacterDefine.PROFESSION.SHAOLIN;
        }
        else if (value == ROLE_PROFESSION.ROLE_MDS)
        {
            return (int)CharacterDefine.PROFESSION.XIAOYAO;
        }
        else
        {
            return -1;
        }
    }
    
    void Start()
    {
        RequestNewName();
        FreshNewName();
        
        //Default Choice
        m_ChooseIndex = ROLE_PROFESSION.ROLE_SJS;
        m_ChooseSex = ROLE_SEX.ROLE_FEMALE;

        m_MuiSelectPersonObj.onSelectOneItem = onSelectOneRoleItem;
		m_MuiSelectPersonObj.onBeginRotation = onSelectPanelBeginRotation;
		m_MuiSelectPersonObj.onSpringFinished = onSelectPanelFinishRotation;


        for (int i = 0; i < m_processNameArray.Length; i++)
        {
            m_processNameArray[i].text = Utils.GetLoginNameByIndex(i);
        }

    }


    void RequestNewName()
    {
        LoginData.m_randomMaleNameList.Clear();
        LoginData.m_randomFemaleNameList.Clear();
        LoginUILogic.RequestRandomName((int)m_ChooseSex);
    }

    public void FreshNewName()
    {
        string strRet = "";
        if (m_ChooseSex == ROLE_SEX.ROLE_FEMALE)
        {
            if (LoginData.m_randomFemaleNameList.Count > 0)
            {
                strRet = LoginData.m_randomFemaleNameList[0];
                LoginData.m_randomFemaleNameList.RemoveAt(0);
                if (LoginData.m_randomFemaleNameList.Count == 1)
                {
                    LoginUILogic.RequestRandomName((int)m_ChooseSex);
                }
            }
            else
            {
                strRet = GetRandomNameFromClient();
            }
        }else
        {
            if (LoginData.m_randomMaleNameList.Count > 0)
            {
                strRet = LoginData.m_randomMaleNameList[0];
                LoginData.m_randomMaleNameList.RemoveAt(0);
                if (LoginData.m_randomMaleNameList.Count == 1)
                {
                    LoginUILogic.RequestRandomName((int)m_ChooseSex);
                }
            }
            else
            {
                strRet = GetRandomNameFromClient();
            }
        }
        

        m_InputName.value = strRet;
    }

    void FixedUpdate()
    {
        if (m_bBeginHeartBeat)
        {
            m_HeartBeatTimer -= Time.deltaTime;
            if (m_HeartBeatTimer <= 0)
            {
                CG_CONNECTED_HEARTBEAT cgBeat = (CG_CONNECTED_HEARTBEAT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CONNECTED_HEARTBEAT);
                cgBeat.SetIsresponse(0);
                cgBeat.SendPacket();
                m_HeartBeatTimer = 1.0f;
            }
        }
    }

    public void SubmitName()
    {
        if (string.IsNullOrEmpty(m_InputName.value))
        {
            //请输入人物名称
            MessageBoxLogic.OpenOKBox(1281, 1000);
            return;
        }
        if (m_InputName.value.Contains("*"))
        {
            MessageBoxLogic.OpenOKBox(1278, 1000);
            return;
        }
        string strCurName = "";
        // 过滤掉 0 非法字符
        foreach (char curChar in m_InputName.value)
        {
            if ((int)curChar != 0)
            {
                strCurName += curChar;
            }
        }
        if (string.IsNullOrEmpty(strCurName))
        {
            //请输入人物名称
            MessageBoxLogic.OpenOKBox(1281, 1000);
            return;
        }
        int curCharNum = 0;     // 英文算一个，中文算两个 
        foreach (char curChar in strCurName)
        {
            curCharNum += 2;

            if (char.IsWhiteSpace(curChar))
            {
                //名字不能包含空格
                MessageBoxLogic.OpenOKBox(1280, 1000);
                return;
            }
        }
        if (curCharNum > MAX_CHAR_NAME)
        {
            // 名字过长
            MessageBoxLogic.OpenOKBox(1279, 1000);
            return;
        }
        if (null == Utils.GetStrFilter(strCurName, (int)Games.GlobeDefine.GameDefine_Globe.STRFILTER_TYPE.STRFILTER_NAME))
        {
            SendCreateRole();
        }
        else
        {
            // 包含非法字符
            MessageBoxLogic.OpenOKBox(1278, 1000);
        }        
    }

    void SendCreateRole()
    {
        if (m_CurRoleIndex == 2)
        {
            GUIData.AddNotifyData("#{10012}");
            return;
        }
        int nChooseRole = GetRealProfessionID(m_ChooseIndex);
        if (nChooseRole < 0 )
        {
            MessageBoxLogic.OpenOKBox(10012, 1000);
            return;
        }
        // 播放过场动画需要职业信息，用于切换过场动画中的模型
        GameManager.gameManager.PlayerDataPool.EnterSceneCache.Profession = nChooseRole;

        PlatformHelper.SendUserAction(UserBehaviorDefine.RoleCreate_Enter);
        // 在这里记录有问题，应该确定发送成功，才能加入
        m_bBeginHeartBeat = true;

        GC_CREATEROLE_RETHandler.retCreateRoleFail = RetCreateRoleFail;
        CG_CREATEROLE createRolePacket = (CG_CREATEROLE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CREATEROLE);
		//createRolePacket.SetType(professionIndex[m_ChooseIndex]);
        createRolePacket.SetType(nChooseRole);
        createRolePacket.SetName(m_InputName.value);
        createRolePacket.SendPacket();
        MessageBoxLogic.OpenWaitBox(1014, GameDefines.CONNECT_TIMEOUT, GameDefines.CONNECT_WAIT_DELAY, NetManager.OnWaitPacketTimeOut);
        if (!GameManager.gameManager.OnLineState)
        {
            //LoginUILogic.Instance().EnterGame();
        }

        //app评价功能，到这儿算客户端登陆一次
        PlayerPreferenceData.ClientLoginCount = PlayerPreferenceData.ClientLoginCount + 1;
        PlayerPreferenceData.ClientClickReview = 0;
    }

    void RetCreateRoleFail(GC_CREATEROLE_RET.CREATEROLE_RESULT result)
    {
        PlatformHelper.SendUserAction(UserBehaviorDefine.CreateRoleFail + ((int)result).ToString());
        m_bBeginHeartBeat = false;
        if (result == GC_CREATEROLE_RET.CREATEROLE_RESULT.CREATEROLE_FAIL_NAMEEXIST)
        {
            // 名字被占用了，如果长度没有超的话，后面添加两位以内的随机数字
            int curCharNum = 0;
            foreach (char curChar in m_InputName.value)
            {
                curCharNum += 2;
            }
            if (curCharNum <= 10)         // 前面创建角色的最大长度是12
            {
                string rName = m_InputName.value + Random.Range(1, 99);
                m_InputName.value = rName;
            }

            // 该名称已经被占用
            MessageBoxLogic.OpenOKBox(1282, 1000);
        }
        else if (result == GC_CREATEROLE_RET.CREATEROLE_RESULT.CREATEROLE_FAIL_NAMESCREENING)
        {
            // 包含非法字符
            MessageBoxLogic.OpenOKBox(1278, 1000);
        }
        else if (result == GC_CREATEROLE_RET.CREATEROLE_RESULT.CREATEROLE_FAIL_LONGNAME)
        {
            MessageBoxLogic.OpenOKBox(1279, 1000);
        }
        else
        {
            // 创建人物失败，点击确定返回登录界面
            MessageBoxLogic.OpenOKBox(1283, 1000, OnEnterLogin);
        }
    }

    void OnEnterLogin()
    {
        if (null != LoginUILogic.Instance())
        {
            LoginUILogic.Instance().EnterServerChoose();
        }
    }

    void OnClickOK()
    {
        SubmitName();
    }

    void OnCreate01()
    {
        m_RoleImage1.SetActive(true);
        m_RoleImage2.SetActive(false);
        m_RoleImage3.SetActive(false);
        if (m_ChooseSex == ROLE_SEX.ROLE_FEMALE)
        {
            m_ChooseIndex = ROLE_PROFESSION.ROLE_SJS;
        }
        else
        {
            m_ChooseIndex = ROLE_PROFESSION.ROLE_KZS;
        }
        RequestNewName();
    }

    void OnCreate02()
    {
        m_RoleImage1.SetActive(false);
        m_RoleImage2.SetActive(true);
        m_RoleImage3.SetActive(false);
        if (m_ChooseSex == ROLE_SEX.ROLE_FEMALE)
        {
            m_ChooseIndex = ROLE_PROFESSION.ROLE_GJS;
        }
        else
        {
            m_ChooseIndex = ROLE_PROFESSION.ROLE_MDS;
        }
        RequestNewName();
    }

    void OnCreate03()
    {
        m_RoleImage1.SetActive(false);
        m_RoleImage2.SetActive(false);
        m_RoleImage3.SetActive(true);
        if (m_ChooseSex == ROLE_SEX.ROLE_FEMALE)
        {
            m_ChooseIndex = ROLE_PROFESSION.ROLE_PRO3;
        }
        else
        {
            m_ChooseIndex = ROLE_PROFESSION.ROLE_PRO6;
        }
        RequestNewName();
    }

    void OnTabChange(TabButton button)
    {
        int chooseIndex = ((int)m_ChooseIndex + 3)%6;
        if (button.name == "boy")
        {
            m_ChooseSex = ROLE_SEX.ROLE_MALE;
            m_ChooseIndex = (ROLE_PROFESSION)chooseIndex;
        }
        else if (button.name == "girl")
        {
            m_ChooseSex = ROLE_SEX.ROLE_FEMALE;
            m_ChooseIndex = (ROLE_PROFESSION)chooseIndex;
        }
        RequestNewName();
        RefreshCreateRolePanelInfo(chooseIndex);
    }

    void RefreshCreateRolePanelInfo(int chooseIndex)
    {
        ROLE_PROFESSION m_ChooseProType = (ROLE_PROFESSION)chooseIndex;
        if (ROLE_PROFESSION.ROLE_SJS == m_ChooseProType)
        {
            m_ProTitle.text = StrDictionary.GetClientDictionaryString("#{1700}");
        }
        else if (ROLE_PROFESSION.ROLE_KZS == m_ChooseProType)
        {
            m_ProTitle.text = StrDictionary.GetClientDictionaryString("#{1699}");
        }
    }

    void Awake()
    {
        SetInstance(this);
    }

    string GetRandomChar()
    {
        int nMaxNum = 2;
        System.Text.StringBuilder returnChar = new System.Text.StringBuilder();
        for (int n = 0; n < nMaxNum;++n )
        {
            char c;
            if ( Random.Range(0,10)%2 == 0 )
                c = (char)('A' + Random.Range(0, 26));
            else
                c = (char)('a' + Random.Range(0, 26));
            returnChar.Append(c);
        }
        return returnChar.ToString();
    }

    string GetRandomNameFromClient()
    {
        List<Tab_RoleName> male1 = TableManager.GetRoleNameByID(1);
        List<Tab_RoleName> male2 = TableManager.GetRoleNameByID(2);
        List<Tab_RoleName> female1 = TableManager.GetRoleNameByID(3);
        List<Tab_RoleName> female2 = TableManager.GetRoleNameByID(4);
        List<Tab_RoleName> token = TableManager.GetRoleNameByID(5);

        string rMale1 = male1[Random.Range(0, male1.Count)].Name;
        string rMale2 = male2[Random.Range(0, male2.Count)].Name;
        string rFemale1 = female1[Random.Range(0, female1.Count)].Name;
        string rFemale2 = female2[Random.Range(0, female2.Count)].Name;
        string rToken = token[Random.Range(0, token.Count)].Name;
        int rNum = Random.Range(1, 9999);

        int randomType = Random.Range(0, 2);        
        System.Text.StringBuilder returnName = new System.Text.StringBuilder();
        switch (randomType)
        {
            case 0://直接+
                if (m_ChooseSex == ROLE_SEX.ROLE_MALE)
                {
                    returnName.Append(rMale1);
                    returnName.Append(rMale2);
                }
                else
                {
                    returnName.Append(rFemale1);
                    returnName.Append(rFemale2);
                }
                break;
            case 1://带符号+
                if (m_ChooseSex == ROLE_SEX.ROLE_MALE)
                {
                    returnName.Append(rMale1);
                    returnName.Append(rToken);
                    returnName.Append(rMale2);
                }
                else
                {
                    returnName.Append(rFemale1);
                    returnName.Append(rToken);
                    returnName.Append(rFemale2);
                }
                break;
            case 2://带数字
                if (m_ChooseSex == ROLE_SEX.ROLE_MALE)
                {
                    if (Random.Range(0, 9) % 2 == 0)
                    {
                        returnName.Append(rMale1);
                    }
                    else
                    {
                        returnName.Append(rMale2);
                    }
                    returnName.Append(rNum);
                }
                else
                {
                    if (Random.Range(0, 9) % 2 == 0)
                    {
                        returnName.Append(rFemale1);
                    }
                    else
                    {
                        returnName.Append(rFemale2);
                    }
                    returnName.Append(rNum);
                }
                break;
            case 3://带字母
                if (m_ChooseSex == ROLE_SEX.ROLE_MALE)
                {
                    if (Random.Range(0, 9) % 2 == 0)
                    {
                        returnName.Append(rMale1);
                    }
                    else
                    {
                        returnName.Append(rMale2);
                    }
                    returnName.Append(GetRandomChar());
                }
                else
                {
                    if (Random.Range(0, 9) % 2 == 0)
                    {
                        returnName.Append(rFemale1);
                    }
                    else
                    {
                        returnName.Append(rFemale2);
                    }
                    returnName.Append(GetRandomChar());
                }
                break;
        }
        return returnName.ToString();
    }

	//=================================
	void OnCloseClick()
	{
		// 未选择角色（直接退出创建流程）
		//if (m_ChooseIndex == 0)
		{
			if (LoginData.loginRoleList.Count > 0)
			{
				LoginUILogic.Instance().EnterChooseRole();
				//HideProfeesion(); 
			}
			else
			{
				//NetManager.SendUserLogout();
				NetWorkLogic.GetMe().DisconnectServer();
				LoginUILogic.Instance().EnterServerChoose();
			}
			
		}
		// 已选择角色，退到展示界面（未做）
		//else
		//{
			//ReturnChooseChar();
			//ShowProfessionDelay(m_delaySelectBack);
			//HideProDetail();
		//}        
	}

    void onSelectOneRoleItem(int index)
    {
        if (index == 2)//弓箭手
        {
            GUIData.AddNotifyData("#{10012}");
            return;
        }
        if (IsClickSelectRole == true)
        {
            return;
        }
        IsClickSelectRole = true;
		NGUITools.SetActive (bgButton1Obj, false);
		NGUITools.SetActive (bgButton2Obj, true);

		tweenPlayer.tweenGroup = 1;
		tweenPlayer.Play (true);

        //Debug.Log("curselectinde " + index);

//        NGUITools.SetActive(m_FirstStepObj, false);
		m_CurRoleIndex = index;
        SetRoleProfessional(m_CurRoleIndex);
        FreshNewName();
		Invoke ("ShowNextStep", 0.7f);
    }

	void ShowNextStep()
	{
// 		tweenPlayer.resetOnPlay = true;
// 		tweenPlayer.tweenGroup = 1;
// 		tweenPlayer.Play (false);
		NGUITools.SetActive(m_NextStepObj, true);
//         for (int i = 0; i < m_RoleBgObj.Length; i++)
//         {
//             m_RoleBgObj[i].GetComponent<UITexture>().alpha = 0;
//         }


            SetBGDepth(m_CurRoleIndex);

		UIPlayTween curTweenPlay = m_RoleBgObj [m_CurRoleIndex].GetComponent<UIPlayTween> ();
		curTweenPlay.tweenGroup = 3;
		curTweenPlay.resetOnPlay = true;
		curTweenPlay.Play (true);

        m_ZhiYeMgr.resetOnPlay = true;
        m_ZhiYeMgr.Play(true);
		
        //NGUITools.SetActive(m_RoleBgObj[m_CurRoleIndex], true);
		m_ChangePersonObj.BeginChangePlayer(firstBlurredTrans, m_RoleItemObj[m_CurRoleIndex].transform);
        IsClickSelectRole = false;
        AdaptBg();
	}

    void SetBGDepth(int curindex)
    {
        for (int i = 0; i < m_RoleBgObj.Length; i++)
        {
            if (curindex == i)
            {
                m_RoleBgObj[i].GetComponent<UITexture>().depth = 1;
            }
            else
            {
                m_RoleBgObj[i].GetComponent<UITexture>().depth = 0;
            }
        }

        for (int j = 0; j < m_ZhiYeObj.Length; j++)
        {
            if (curindex == j)
            {
                NGUITools.SetActive(m_ZhiYeObj[j], true);
            }
            else
            {
                NGUITools.SetActive(m_ZhiYeObj[j], false);
            }
        }
        m_ZhiYeMgr.resetOnPlay = true;
        m_ZhiYeMgr.Play(true);
    }

    void BackFirstStep()
    {
        if (m_ChangePersonObj.IsMotion)
        {
            return;
        }
        for (int i = 0; i < m_RoleItemObj.Length; i++)
        {
            NGUITools.SetActive(m_RoleItemObj[i], false);
        }
        NGUITools.SetActive(m_FirstStepObj, true);
        NGUITools.SetActive(m_NextStepObj, false);

        tweenPlayer.resetOnPlay = true;
        tweenPlayer.tweenGroup = 2;
        tweenPlayer.Play(true);
        for (int j = 0; j < m_RoleBgObj.Length; j++)
        {
            m_RoleBgObj[j].GetComponent<UITexture>().height = 0;
        }
        for (int x = 0; x < m_RoleBgObj.Length; x++)
        {
            NGUITools.SetActive(m_ZhiYeObj[x], false);
        }


            Invoke("ShowFirstStep", 0.4f);
    }

    void ShowFirstStep()
    {
        NGUITools.SetActive(bgButton1Obj, true);
        NGUITools.SetActive(bgButton2Obj, false);
    }

    void PreRoleButton()
    {
        ResetTween();
        BeginChangePerson(m_CurRoleIndex, m_CurRoleIndex - 1);
    }
    void NextRoleButton()
    {
        ResetTween();
        BeginChangePerson(m_CurRoleIndex, m_CurRoleIndex + 1);
    }

    void BeginChangePerson(int oriIndex, int targetIndex)
    {
        if (m_ChangePersonObj.IsMotion)
        {
            return;
        }
        
        if (targetIndex < 0)
        {
            targetIndex = 3;
        }

        if (targetIndex > 3)
        {
            targetIndex = 0;
        }
        for (int i = 0; i < m_RoleBgObj.Length; i++)
        {
            if (i != targetIndex && i != oriIndex)
            {
                m_RoleBgObj[i].GetComponent<UITexture>().alpha = 0;
            }
        }

        //NGUITools.SetActive(m_RoleBgObj[targetIndex], true);

		UIPlayTween lastTweenPlay = m_RoleBgObj [oriIndex].GetComponent<UIPlayTween> ();
		lastTweenPlay.tweenGroup = 2;
		lastTweenPlay.resetOnPlay = true;
		lastTweenPlay.Play (true);

		m_CurRoleIndex = targetIndex;
		Invoke("SetBg", 0.3f);

		UIPlayTween curTweenPlay = m_RoleBgObj [targetIndex].GetComponent<UIPlayTween> ();
		curTweenPlay.tweenGroup = 3;
		curTweenPlay.resetOnPlay = true;
		curTweenPlay.Play (true);
        
        NGUITools.SetActive(m_RoleItemObj[oriIndex], true);
        m_ChangePersonObj.BeginChangePlayer(m_RoleItemObj[oriIndex].transform, m_RoleItemObj[targetIndex].transform);
        m_CurRoleIndex = targetIndex;
        SetRoleProfessional(m_CurRoleIndex);
        FreshNewName();
    }

    void SetBg()
    {
        SetBGDepth(m_CurRoleIndex);
    }


    void SetRoleProfessional(int curRoleIndex)
    {
        switch (curRoleIndex)
        {
            case 0:
                m_ChooseIndex = ROLE_PROFESSION.ROLE_SJS;
                break;
            case 1:
                m_ChooseIndex = ROLE_PROFESSION.ROLE_KZS;
                break;
            case 2:
                m_ChooseIndex = ROLE_PROFESSION.ROLE_GJS;
                break;
            case 3:
                m_ChooseIndex = ROLE_PROFESSION.ROLE_MDS;
                break;
            default:
                m_ChooseIndex = ROLE_PROFESSION.ROLE_SJS;
                break;
        }
        SetRoleSexByProfessional();
    }

    void SetRoleSexByProfessional()
    {
          if (m_ChooseIndex == ROLE_PROFESSION.ROLE_SJS || m_ChooseIndex == ROLE_PROFESSION.ROLE_GJS)
          {
              m_ChooseSex = ROLE_SEX.ROLE_FEMALE;
          }
          else
          {
              m_ChooseSex = ROLE_SEX.ROLE_MALE;
          }

    }

	void onSelectPanelFinishRotation()
    {
		int curIndex = 0;

		for (int i = 0; i < m_MuiSelectPersonObj.transform.childCount; i++)
		{
			Transform trans = m_MuiSelectPersonObj.transform.GetChild(i);

			if(trans.GetComponent<UISprite>().alpha == 1){
				curIndex = int.Parse(trans.name.Substring(6)) - 1;
				break;
			}
		}

// 		Debug.LogWarning ("这里运动结束, 最前面的索引是：" + curIndex + "剩下的逆时针分别是:" + 
// 		                  (curIndex + 1) % 4 + " ," + (curIndex + 2) % 4 + " ," + (curIndex + 3) % 4);

		NGUITools.SetActive (tweenPlayer.gameObject, true);
		tweenPlayer.tweenGroup = 0;
		tweenPlayer.resetOnPlay = true;
		tweenPlayer.Play (true);

        backgroundTweenerAlpha.Play(true);
        backgroungTweenerScale.Play(true);
        backgroundTweenerPosition.Play(true);

// 		m_processNameArray [0].text = curIndex.ToString ();
// 		m_processNameArray [1].text = ((curIndex + 1) % 4).ToString ();
// 		m_processNameArray [2].text = ((curIndex + 2) % 4).ToString ();
// 		m_processNameArray [3].text = ((curIndex + 3) % 4).ToString ();

        m_processNameArray[0].text = Utils.GetLoginNameByIndex(curIndex);
        m_processNameArray[1].text = Utils.GetLoginNameByIndex((curIndex + 1) % 4);
        m_processNameArray[2].text = Utils.GetLoginNameByIndex((curIndex + 2) % 4);
        m_processNameArray[3].text = Utils.GetLoginNameByIndex((curIndex + 3) % 4);
    }

	void onSelectPanelBeginRotation()
	{
		//Debug.LogWarning ("在这里把那些界面给隐藏");
        backgroundTweenerAlpha.Play(false);
        backgroungTweenerScale.Play(false);
        backgroundTweenerPosition.Play(false);
		NGUITools.SetActive (tweenPlayer.gameObject, false);
	}


    void ResetTween()
    {
        UITweener[] m_Tweens = m_ResetTweenParent.GetComponentsInChildren<UITweener>();
        if (m_Tweens.Length != 0)
        {
            for (int i = 0; i < m_Tweens.Length; i++)
            {
                UITweener tw = m_Tweens[i];
                if (tw.tweenGroup == 10)
                {
                    tw.Reset();
                }
            }
        }
    }

    /// <summary>
    /// 自适应背景
    /// </summary>
    void AdaptBg()
    {
        UISprite[] sprs = m_TopAnchor.GetComponentsInChildren<UISprite>();
        for (int i = 0; i < sprs.Length; i++ )
        {
            sprs[i].height = UIRootAdapter.GetLogicHeight() - 320;
        }
    }
}
