

using UnityEngine;
using System.Collections;
using GCGame;
using Games.Item;
using System;
using Games.GlobeDefine;
using GCGame.Table;
using Games.UserCommonData;
public class AutoitemLogicEx : MonoBehaviour {
	
	public UILabel m_ItemName;
	public UILabel m_ItemLevel;
	public UISprite m_ItemIcon;
	//public UISprite m_ItemBack;
	public UILabel  m_ItemHasChooseText ;  // 已经选择
	public UISprite  m_ItemHasChoosePic ;    // 已经选择框子图片
	public GameObject m_ItemHasChooseBtn ; // 选择按钮 
	//public UISprite m_SelectIcon;
	//public UISprite m_BackgroundSprite;
	//public UISprite m_QualitySprite;
	public int m_nId;   //物品id
	public UInt64 m_ItemGuid;
	private AutoDrugWindow m_parent;
	public int m_Type ;
	// Use this for initialization
	void Start () {
		//m_SelectIcon.gameObject.SetActive(false);
		if (Singleton<ObjManager>.GetInstance().MainPlayer)
		{
			if (Singleton<ObjManager>.GetInstance().MainPlayer.AutoMpID == m_nId 
			    || Singleton<ObjManager>.GetInstance().MainPlayer.AutoHpID == m_nId
			    || (m_ItemGuid != GlobeVar.INVALID_GUID && Singleton<ObjManager>.GetInstance().MainPlayer.AutoEquipGuid == m_ItemGuid))
			{
			//	m_SelectIcon.gameObject.SetActive(true);
			}
		}
	}
	
	public static AutoitemLogicEx CreateItem(GameObject grid, GameObject resItem, int type,Tab_CommonItem CommonItem)
	{
		GameObject curItemObject = Utils.BindObjToParent(resItem, grid, CommonItem.Id.ToString());
		if (null != curItemObject)
		{
			AutoitemLogicEx curItemComponent = curItemObject.GetComponent<AutoitemLogicEx>();
			if (null != curItemComponent)
			{
				curItemComponent.m_Type= type ;
				curItemComponent.m_ItemName.text = CommonItem.Name;
				curItemComponent.m_ItemIcon.spriteName = CommonItem.Icon;
				curItemComponent.m_nId = CommonItem.Id;
				curItemComponent.m_ItemLevel.text = "LV " +  CommonItem.MinLevelRequire.ToString();
                curItemComponent.m_ItemIcon.transform.parent.FindChild("LV").GetComponent<UILabel>().text = "";
				//curItemComponent.m_parent = parent;
				curItemComponent.m_ItemGuid = GlobeVar.INVALID_GUID;
				//curItemComponent.m_BackgroundSprite.spriteName = "";
				//curItemComponent.m_QualitySprite.spriteName = "";
        curItemComponent.gameObject.SetActive(true);
        if (type == 1) {
          if (Singleton<ObjManager>.Instance.MainPlayer.AutoHpID == CommonItem.Id) {
            curItemComponent._showChoose();
            if (AutoFightLogic.Instance() != null) {
              AutoFightLogic.Instance().SelectItem = curItemComponent;
            }
          }
        } else if (type == 2) {
          if (Singleton<ObjManager>.Instance.MainPlayer.AutoMpID == CommonItem.Id) {
            curItemComponent._showChoose();
            if (AutoFightLogic.Instance() != null) {
              AutoFightLogic.Instance().SelectItem = curItemComponent;
            }
          }
        }
				return curItemComponent;
			}
		}
		return null;
	}
	public static AutoitemLogicEx CreateEquip(GameObject grid, GameObject resItem,  int type, GameItem equip)
	{
		GameObject curItemObject = Utils.BindObjToParent(resItem, grid, equip.DataID.ToString());
		if (null != curItemObject)
		{
			AutoitemLogicEx curItemComponent = curItemObject.GetComponent<AutoitemLogicEx>();
			if (null != curItemComponent)
			{
				Tab_CommonItem curItem = TableManager.GetCommonItemByID(equip.DataID, 0);
				if (null != curItem)
				{
					curItemComponent.m_Type= type ;
					curItemComponent.m_ItemName.text = curItem.Name;
					curItemComponent.m_ItemIcon.spriteName = curItem.Icon;
					curItemComponent.m_nId = curItem.Id;
					//curItemComponent.m_parent = parent;
					curItemComponent.m_ItemGuid = equip.Guid;
					curItemComponent.m_ItemLevel.text = "LV " +  curItem.MinLevelRequire.ToString();
					//curItemComponent.m_BackgroundSprite.spriteName = background;
					//curItemComponent.m_QualitySprite.spriteName = equip.GetQualityFrame();

                    curItemComponent.m_ItemIcon.transform.parent.GetComponent<UISprite>().spriteName  = equip.GetQualityFrame();
                    curItemComponent.m_ItemIcon.transform.parent.FindChild("LV").GetComponent<UILabel>().text = "+" + equip.EnchanceLevel.ToString();

          if (Singleton<ObjManager>.Instance.MainPlayer.AutoEquipGuid == curItemComponent.m_ItemGuid && curItemComponent.m_ItemGuid != GlobeVar.INVALID_GUID) {
            curItemComponent._showChoose();
            if (AutoFightLogic.Instance() != null) {
              AutoFightLogic.Instance().SelectItem = curItemComponent;
            }
          }
					return curItemComponent;
				}
			}
		}
		return null;
	} 
	void OnItemClick()
	{
		//if (null != m_parent) m_parent.OnOpItemClickEx(this);
		//m_SelectIcon.gameObject.SetActive(true);
	}

	public void OnClickMedicneItem()
	{
		GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
	
		if (Singleton<ObjManager>.Instance.MainPlayer)
		{
			if (AutoFightLogic.Instance ())
			{
				AutoFightLogic.Instance().OnClickSelectItem (this);
			}

			if (m_Type == 1)
			{
				Singleton<ObjManager>.Instance.MainPlayer.AutoHpID = m_nId;
				Singleton<ObjManager>.Instance.MainPlayer.HpDrugGUID = BackPack.GetItemGuidByDataID(m_nId);
				Singleton<ObjManager>.Instance.MainPlayer.AutoIsSelectDrug = true;
			}
			else if (m_Type == 2)
			{
				Singleton<ObjManager>.Instance.MainPlayer.AutoMpID = m_nId;
				Singleton<ObjManager>.Instance.MainPlayer.MpDrugGUID = BackPack.GetItemGuidByDataID(m_nId);
				Singleton<ObjManager>.Instance.MainPlayer.AutoIsSelectDrug = true;
			}
			else if (m_Type == 3)
			{
				Singleton<ObjManager>.Instance.MainPlayer.AutoEquipGuid = m_ItemGuid;
        if (AutoFightLogic.Instance() != null) {
          AutoFightLogic.Instance().UpdateDrug();
        }
			}
			_showChoose ();
		}
	}
	public void OnCancelChoose()
	{
		_hideChoose ();
	}
	private void _showChoose()
	{
		//m_ItemBack.gameObject.SetActive (true);
		m_ItemHasChooseText.gameObject.SetActive (true);
		m_ItemHasChoosePic.gameObject.SetActive (true);
		m_ItemHasChooseBtn.gameObject.SetActive (false);
        GameManager.gameManager.PlayerDataPool.CommonData.AskSetCommonFlag((int)USER_COMMONFLAG.CF_AUTOENHANCE_OPENFLAG, true);
	}
	private void _hideChoose()
	{
		m_ItemHasChooseText.gameObject.SetActive (false);
		m_ItemHasChoosePic.gameObject.SetActive (false);
		m_ItemHasChooseBtn.gameObject.SetActive (true);
	}
}



