/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleUnownWindow.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows\BelleUnownWindow.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows

    *  @author   : fanzhipeng
    *  @date     : 2015/7/2 23:52:03
*****************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Module.Log;
public class BelleUnOwnWindow : MonoBehaviour
{
    public GameObject EffectRoot = null;
	public GameObject[] ForeordinationHead;
    public UILabel m_belleName;
    public UILabel m_belleDesc;
    public UITexture m_belleTextTure;
    public UILabel[] m_AttrTypes;
    public UILabel[] m_AttrValues;
	public GameObject ForeordinationTips;
    public UISprite m_processBar;
    public UISprite m_belleIcon;
    public UILabel m_belleCurCount;
   

    public UILabel m_getBelleItemBtn;
    private Color m_disAbleBelleTextTure = new Color(0, 0, 0, 1);
    private Color m_ColorDisable = new Color(64 / 255.0f, 64 / 255.0f, 64 / 255.0f, 1.0f);

    public GameObject m_redGetBelle;

    //获取美人界面
    public GameObject m_getBelleItemWin;
    public UIImageButton m_CreateBelle;
    // Use this for initialization
    void Start()
    {
        // SetUnOwnBelleInfo();
    }

    // Update is called once per frame
    void Update()
    {

    }
    void OnEnable()
    {
		ShowForedinationHead ();
        SetUnOwnBelleInfo();
        CalcuteCreateBelleState();
    }

	private void ShowForedinationHead()//魔灵未激活状态 宿命也能够显示
	{
		Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
		int count = ForeordinationHead.Length;
		for (int i = 0; i < count; ++i) {
			if (ForeordinationHead[i] != null) {
				if (i < belleTab.getAffectionConditonValueCount()) {
					int id = belleTab.GetAffectionConditonValuebyIndex(i);
					ForeordinationHead[i].SetActive(true);
					bool isHas = BelleData.OwnedBelleMap.ContainsKey(id);
					Tab_Belle affectionbelle = TableManager.GetBelleByID(id, 0);
					if(affectionbelle!=null){
						Tab_CommonItem cItem = TableManager.GetCommonItemByID(affectionbelle.BelleItemID, 0);
						if (cItem != null) {
							UISprite us = ForeordinationHead[i].GetComponent<UISprite>();
							if (us != null) {
								us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[cItem.Quality - 1];
								if (isHas) {
									us.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
								} else {
									us.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
								}
							}
							Transform tf = ForeordinationHead[i].transform.Find("Head");
							if (tf != null) {
								UISprite usc = tf.GetComponent<UISprite>();
								if (usc != null) {
									usc.spriteName = cItem.Icon;
									if (isHas) {
										usc.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
									} else {
										usc.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
									}
								}
							}
						}
					}
				} else {
					ForeordinationHead[i].SetActive(false);
				}
			}
		}
	}

	public void ForeordinationClickPress(GameObject go)
	{
		int index;
		if (go!=null&&int.TryParse(go.name, out index)&&ForeordinationTips!=null) {
			Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
			if (null != belleTab) {
				--index;
				if (index > -1 && index < belleTab.getAffectionConditonValueCount()) {
					int id = belleTab.GetAffectionConditonValuebyIndex(index);
					
					bool isHas = BelleData.OwnedBelleMap.ContainsKey(id);
					Tab_Belle affectionbelle = TableManager.GetBelleByID(id, 0);
					if (affectionbelle != null) {
						Tab_CommonItem cItem = TableManager.GetCommonItemByID(affectionbelle.BelleItemID, 0);
						if (cItem != null) {
							Transform tf = ForeordinationTips.transform.Find("Item");
							if (tf != null) {
								UISprite us = tf.GetComponent<UISprite>();
								if (us != null) {
									us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[cItem.Quality - 1];
									if (isHas) {
										us.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
									} else {
										us.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
									}
								}
							}
							tf = ForeordinationTips.transform.Find("Item/Head");
							if (tf != null) {
								UISprite usc = tf.GetComponent<UISprite>();
								if (usc != null) {
									usc.spriteName = cItem.Icon;
									if (isHas) {
										usc.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
									} else {
										usc.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
									}
								}
							}
							tf = ForeordinationTips.transform.Find("belleName");
							if (tf != null) {
								UILabel ul = tf.GetComponent<UILabel>();
								if (ul != null) {
									ul.text = affectionbelle.Name;
								}
							}
							tf = ForeordinationTips.transform.Find("ForeordinationName");
							if (tf != null) {
								UILabel ul = tf.GetComponent<UILabel>();
								if (ul != null) {
									ul.text = belleTab.GetAffectionNamebyIndex(index);
								}
							}
							tf = ForeordinationTips.transform.Find("Property");
							if (tf != null) {
								UILabel ul = tf.GetComponent<UILabel>();
								if (ul != null) {
									ul.text = belleTab.GetAffectionDescbyIndex(index);
								}
							}
						}
						
					}
				}
			}
		}
		if (ForeordinationTips != null) {
			ForeordinationTips.SetActive(true);
		}
	}
	public void ForeordinationClickRelease(GameObject go)
	{
		if (ForeordinationTips != null) {
			ForeordinationTips.SetActive(false);
		}
	}
    private void CalcuteCreateBelleState()
    {
      if (BelleInfoWindow.Instance() != null && m_CreateBelle != null) {
        Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

        if (null == belleTab) {
          LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
          return;
        }

        int belleSubItemId = belleTab.BelleItemID;
        int belleTotalSubCount = belleTab.BelleItemCount;
        int belleSubItemCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(belleSubItemId);

        //数量不够显示获取界面
        if (belleTotalSubCount > 0 && belleSubItemCount < belleTotalSubCount) {
          m_CreateBelle.isEnabled = false;
        } else if (belleTotalSubCount > 0 && belleSubItemCount >= belleTotalSubCount) {
          m_CreateBelle.isEnabled = true;
        }
      }
    }
    /// <summary>
    /// 设置未获取界面数据
    /// </summary>
    public void SetUnOwnBelleInfo()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

            if (null == belleTab)
            {
                LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
                return;
            }
            //名字
            m_belleName.text = belleTab.Name;

            //背景半身像
            UnityEngine.Object belleTextureObj = ResourceManager.LoadResource(BelleData.GetBelleBigTextureName(belleTab), typeof(Texture)) as Texture;
            if (null != belleTextureObj)
            {
                m_belleTextTure.mainTexture = belleTextureObj as Texture;
                m_belleTextTure.color = m_disAbleBelleTextTure;
            }

            //描述信息
            m_belleDesc.text = belleTab.Introduction;

            //美人小图标
            Tab_CommonItem commItem = TableManager.GetCommonItemByID(belleTab.BelleItemID, 0);
            if (commItem != null)
                m_belleIcon.spriteName = commItem.Icon; 

            //美人合成需要的碎片个数
            int belleSubItemId = belleTab.BelleItemID;
            int belleTotalSubCount = belleTab.BelleItemCount;
            int belleSubItemCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(belleSubItemId);

            m_belleCurCount.text = belleSubItemCount.ToString() + "/" + belleTotalSubCount.ToString();
          /*  m_belleTotalCount.text = belleTotalSubCount.ToString();*/

            belleTotalSubCount = belleTotalSubCount <= 0 ? 1 : belleTotalSubCount;
            m_processBar.fillAmount = (float)(belleSubItemCount * 1.0 / belleTotalSubCount);

            //按钮文字
            string itemStr = "#{10259}";

            m_redGetBelle.SetActive(false);
            //可合成的提示
            if (belleTotalSubCount > 0 && belleTotalSubCount <= belleSubItemCount)
            {
                itemStr = "#{10260}";
                m_redGetBelle.SetActive(true);
            }
            m_getBelleItemBtn.text = StrDictionary.GetClientDictionaryString(itemStr);

            //属性信息
            for (int i = 0; i < belleTab.getAttrTypeCount(); i++)
            {
                // labelNextAttrValue.text = StrDictionary.GetClientDictionaryString("#{3084}", nextValueAdd, Utils.GetAttrTypeString(curTabBelle.GetAttrTypebyIndex(i)));
                m_AttrTypes[i].text = Utils.GetAttrTypeString(belleTab.GetAttrTypebyIndex(i));
                m_AttrValues[i].text = "+" + belleTab.GetAttrValuebyIndex(i);
                 m_AttrTypes[i].color = m_ColorDisable;
                 m_AttrValues[i].color = m_ColorDisable;
            }

            if (m_getBelleItemWin != null)
                m_getBelleItemWin.SetActive(false);
        }
    }

    public void OnGetBelle()
    {
      if (BelleInfoWindow.Instance() != null) {
        Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

        if (null == belleTab) {
          LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
          return;
        }

        int belleSubItemId = belleTab.BelleItemID;
        int belleTotalSubCount = belleTab.BelleItemCount;
        int belleSubItemCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(belleSubItemId);

        //数量不够显示获取界面
        if (m_getBelleItemWin != null) {
          m_getBelleItemWin.SetActive(true);
        }
      }
    }
    public void OnCloseGetBelle()
    {
      if (m_getBelleItemWin != null) {
        m_getBelleItemWin.SetActive(false);
      }
    }
    public void CreateBelle()
    {
      if (BelleInfoWindow.Instance() != null) {
        Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

        if (null == belleTab) {
          LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
          return;
        }

        int belleSubItemId = belleTab.BelleItemID;
        int belleTotalSubCount = belleTab.BelleItemCount;
        int belleSubItemCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(belleSubItemId);

        //数量不够显示获取界面
        if (belleTotalSubCount > 0 && belleSubItemCount < belleTotalSubCount) {
          //提示数量不够
        } else if (belleTotalSubCount > 0 && belleSubItemCount >= belleTotalSubCount) {
          //合成,发送消息包
          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////合成美人发送消息包。
          Tab_CommonItem commonItemTab = TableManager.GetCommonItemByID(belleSubItemId, 0);
          if (commonItemTab != null) {
            string tip = StrDictionary.GetClientDictionaryString("#{10257}", commonItemTab.Name, belleTotalSubCount);
            //定义一个激活美人消息包
            MessageBoxLogic.OpenOKCancelBox(tip, "", DoGetBelle);
          }
        }
      }
    }
    private void DoGetBelle()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
            if (belleTab == null)
                return;
            BelleData.delGetBelle = OnGetBelleUpdateWinInfo;
            CG_GET_BELLE getBelleReq = (CG_GET_BELLE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GET_BELLE);
            getBelleReq.SetBelleId(belleTab.Id);
            getBelleReq.SendPacket();
        }
    }

    /// <summary>
    /// 获得美人成功后的回调函数，更新界面
    /// </summary>
    public void OnGetBelleUpdateWinInfo()
    {
        if (null == BelleInfoWindow.Instance())
        {
            return;
        }

        Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
        if (null == belleTab)
        {
            return;
        }

        Belle curBelleData = null;
        if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
        {
            curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
        }
        if (null == curBelleData)
        {
            return;
        }
        else
        {
            if (BelleInfoWindow.Instance() != null)
            {
                BelleInfoWindow.Instance().UpdateScrollViewList();
                BelleInfoWindow.Instance().ShowBelleInfoWindow(belleTab, true);
            }   
        }

        //合成红点提示消失
        m_redGetBelle.SetActive(false);
    }
    public void OnChangeBelleItemCount()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;

            if (null == belleTab)
            {
                LogModule.ErrorLog("BelleInfoWindow.Instance().CurSellectedBelleData is null!");
                return;
            }
            m_belleCurCount.text = "0" + "/" + belleTab.BelleItemCount.ToString();
            m_processBar.fillAmount = 0f;
        }

    }
    public void OnClose(GameObject go)
    {
      gameObject.SetActive(false);
      if (EffectRoot != null) {
        EffectRoot.SetActive(true);
      }
    }
}
