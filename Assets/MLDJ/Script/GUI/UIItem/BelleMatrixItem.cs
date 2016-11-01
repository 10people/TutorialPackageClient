/********************************************************************
	created:	2014/01/16
	created:	16:1:2014   15:40
	filename: 	BelleMatrixItem.cs
	author:		王迪
	
	purpose:	美人阵列表
*********************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using System;
using Games.LogicObj;
using GCGame;

public class BelleMatrixItem : MonoBehaviour {

    public UISprite sprBack;
    public GameObject activeFlag;
    public GameObject sprHighlight;
    public UILabel labelName;
    public UISprite matrixPic;
    public GameObject openFlag;
    public GameObject activeTip;

    private BelleMatrixWindow parentWindow;
   
    public void SetData(BelleMatrixWindow belleMatrixWindow, int id, Tab_BelleMatrix tabMatrix)
    {
        if (null == tabMatrix)
            return;

        parentWindow = belleMatrixWindow;
        gameObject.name = id.ToString();

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null != mainPlayer && tabMatrix.OpenLevel <= mainPlayer.BaseAttr.Level)
        {
            labelName.text = tabMatrix.Name;
            openFlag.SetActive(false);
            UpdateActiveRedTip();
        }
        else
        {
            labelName.text = tabMatrix.OpenLevel + GCGame.Utils.GetDicByID(5057);
            openFlag.SetActive(true);
        }
        matrixPic.spriteName = tabMatrix.Icon;
        
        EnableHightLight(false);
        UpdateData();
    }

    public void UpdateData()
    {
        int nID = Int32.Parse(gameObject.name);
        activeFlag.SetActive(BelleData.OwnedMatrixMap.ContainsKey(nID) && BelleData.OwnedMatrixMap[nID].isActive);
    }

    public void UpdateActiveRedTip()
    {
//            int nID = Int32.Parse(gameObject.name);
            //activeTip.gameObject.SetActive(Utils.GetBelleMatrixFlagByBit(nID) != '1');
    }
    void OnItemClick()
    {
        if (activeTip.activeSelf)
        {
            //activeTip.SetActive(false);
            int nID = Int32.Parse(gameObject.name);
            Utils.SetBelleMatrixFlagByBit(nID);
        }

        if (null != parentWindow)
        {
            parentWindow.OnMatrixListItemClick(gameObject);
        }
    }

    public void EnableHightLight(bool bEnable)
    {
        if (null != sprHighlight)
        {
            sprHighlight.SetActive(bEnable);
            sprBack.gameObject.SetActive(!bEnable);
        }
    }
}
