using UnityEngine;
using System.Collections;
using Games.UserCommonData ;

public class AutoPickUpItem : MonoBehaviour {

	public UIToggle m_WhitePickUpQuality ;
	public UIToggle m_GreenPickUpQuality ;
	public UIToggle m_BluePickUpQuality ;
	public UIToggle m_PurpleQuality ;
	public UIToggle m_GrayPickUpQuality ;
	// Use this for initialization
  void Start()
  {
    ulong guid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
    if (PlayerPrefs.GetInt("pickupsethasinit" + guid) != 1) {
      PlayerPreferenceData.PickUpItemWhite = 1;
      PlayerPreferenceData.PickUpItemGreen = 1;
      PlayerPreferenceData.PickUpItemBlue = 1;
      PlayerPreferenceData.PickUpItemPurple = 1;
      PlayerPreferenceData.PickUpItemGrey = 1;
      PlayerPrefs.SetInt("pickupsethasinit" + guid, 1);

      m_WhitePickUpQuality.value = true;
      m_GreenPickUpQuality.value = true;
      m_BluePickUpQuality.value = true;
      m_PurpleQuality.value = true;
      m_GrayPickUpQuality.value = true;
    } else {
      m_WhitePickUpQuality.value = PlayerPreferenceData.PickUpItemWhite == 1 ? true : false;
      m_GreenPickUpQuality.value = PlayerPreferenceData.PickUpItemGreen == 1 ? true : false;
      m_BluePickUpQuality.value = PlayerPreferenceData.PickUpItemBlue == 1 ? true : false;
      m_PurpleQuality.value = PlayerPreferenceData.PickUpItemPurple == 1 ? true : false;
      m_GrayPickUpQuality.value = PlayerPreferenceData.PickUpItemGrey == 1 ? true : false;
    }
  }
	
	// Update is called once per frame
	void Update () {
	
	}


	void OnEnable()
	{
		m_ChooseObj.SetActive (false);
	}

	public void onWhitePickUp()
	{
		PlayerPreferenceData.PickUpItemWhite = (m_WhitePickUpQuality.value == true ? 1 : 0);
		GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag ((int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_WHITE,m_WhitePickUpQuality.value);
	
	}
	public void onGreenPickUp()
	{
		PlayerPreferenceData.PickUpItemGreen = (m_GreenPickUpQuality.value == true ? 1 : 0);
		GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag ((int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_GREEN,m_GreenPickUpQuality.value);
	}

	public void onBluePickUp()
	{
		PlayerPreferenceData.PickUpItemBlue = (m_BluePickUpQuality.value == true ? 1 : 0);
		GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag ((int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_BLUE,m_BluePickUpQuality.value);
	}
	public void onPurpleQuality()
	{	
		PlayerPreferenceData.PickUpItemPurple = (m_PurpleQuality.value == true ? 1 : 0);
		GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag ((int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_PURPLE,m_PurpleQuality.value);
	}

	public void onGrayPickUp()
	{	
		PlayerPreferenceData.PickUpItemGrey = (m_GrayPickUpQuality.value == true ? 1 : 0);
		GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag ((int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_GREY,m_GrayPickUpQuality.value);
	}
	//================================
	public GameObject m_ChooseObj ;
}
