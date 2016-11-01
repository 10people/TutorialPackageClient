using UnityEngine;
using System.Collections;
using System;
using Module.Log;
using Google.ProtocolBuffers;
using Games.GlobeDefine;
using GCGame.Table;
using GCGame;



public class AddFriendRet : MonoBehaviour {
    public UISprite m_PlayerHeadPic;
	void Awake()
	{
		m_Instance = this;
		_onShow ();
	}

	// Use this for initialization
	void Start () {

	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	private static AddFriendRet m_Instance = null;
	public static AddFriendRet Instance()
	{
		return m_Instance;
	}

	//===========================================================\
	void _onShow()
	{
		setFightVlue ();
		setProfession ();
		setName ();
		setlevel ();
		setGuid ();
        setHeadPic();
	}
	// 战力数值
	public UILabel m_fightVlue ;
	public void setFightVlue()
	{
		m_fightVlue.text = GameManager.gameManager.PlayerDataPool.AddFriendVlue.m_fight.ToString();
	}
	//职业 
	public void setProfession( )
	{

	}
	// 名字
	public UILabel m_playerName ;
	public void setName( )
	{
		m_playerName.text = GameManager.gameManager.PlayerDataPool.AddFriendVlue.m_name;
	}
	// 等级 
	public UILabel m_level ;
	public void setlevel()
	{ 
		m_level.text  = "Lv" + GameManager.gameManager.PlayerDataPool.AddFriendVlue.m_level.ToString();
	}
    //小头像
    public void setHeadPic()
    {
        if (m_PlayerHeadPic == null)
        {
            return;
        }
        int nProfession = GameManager.gameManager.PlayerDataPool.AddFriendVlue.m_profess;

        if (nProfession < 0 || nProfession >= (int)CharacterDefine.PROFESSION.MAX)
        {
            return;
        }
        m_PlayerHeadPic.spriteName = Utils.GetHeadPicByProfession(nProfession);
    }

	// GUID
	public void setGuid ()
	{
		m_Guid = GameManager.gameManager.PlayerDataPool.AddFriendVlue.m_guid;
	}
	// 忽略好友
	public void onIgnoreFriend()
	{
		UIManager.CloseUI (UIInfo.AddFriend);
	}
	
	// 接受好友
	private UInt64 m_Guid = GlobeVar.INVALID_GUID ;
	public void onAcceptFriend()
	{
		if (m_Guid == GlobeVar.INVALID_GUID)
		{
			return;
		}
		
		if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
		{
			Singleton<ObjManager>.GetInstance().MainPlayer.ReqAddFriend(m_Guid);
		}
		UIManager.CloseUI (UIInfo.AddFriend);
	}

	// 查看资料
	public void onKnowFriend()
	{
		if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
		{
			return;
		}
		if (GlobeVar.INVALID_GUID != m_Guid)
		{
			Singleton<ObjManager>.GetInstance().MainPlayer.ReqViewOtherPlayer(m_Guid, OtherRoleViewLogic.OPEN_TYPE.OPEN_TYPE_ADD_FRIEND_RET);
		}
		//UIManager.CloseUI (UIInfo.AddFriend);
	}

	// 拉黑
	public void onBlackFriend()
	{
		if (m_Guid == GlobeVar.INVALID_GUID)
		{
			return;
		}

		//string dicStr = StrDictionary.GetClientDictionaryString("#{5251}");
		string dicStr = "确定设置黑名单？";
		MessageBoxLogic.OpenOKCancelBox(dicStr, "", DelBlackOK, DelBlackNo);
	}

	public void DelBlackOK()
	{
		if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
		{
			Singleton<ObjManager>.GetInstance().MainPlayer.ReqAddBlack(m_Guid);
		}

		UIManager.CloseUI (UIInfo.AddFriend);
	}

	public void DelBlackNo()
	{

	}
}
