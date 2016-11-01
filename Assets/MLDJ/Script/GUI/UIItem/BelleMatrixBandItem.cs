using UnityEngine;
using System.Collections;
using Module.Log;
using System;
using GCGame.Table;
using Games.LogicObj;

public class BelleMatrixBandItem : MonoBehaviour
{
    public UISprite m_QualitySprite;
    public UISprite m_SprIcon;
    public UISprite m_plusIcon;
    public GameObject m_recommondFlag;
    private int belleID;
    private int curMatrixIndex;
    /// <summary>
    /// 如果iconName == null 就默认为+，否则，如果有推荐，加个推荐的标志
    /// </summary>
    /// <param name="iconName"></param>
    /// <param name="isRecommond"></param>
    /// <param name="selectBellID"></param>
    public void SetIconName(string iconName = null, bool isRecommond = false, int selectBellID = -1,int curMatrixIndex = -1)
    {
        this.belleID = selectBellID;
        this.curMatrixIndex = curMatrixIndex;
        m_SprIcon.gameObject.SetActive(iconName != null);
        m_plusIcon.gameObject.SetActive(iconName == null);
        m_recommondFlag.SetActive(isRecommond);
        if (m_SprIcon.gameObject.activeSelf)
        {
          m_SprIcon.spriteName = iconName;
        }
        if (m_QualitySprite != null && BelleData.OwnedBelleMap.ContainsKey(selectBellID)) {
          m_QualitySprite.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[BelleData.OwnedBelleMap[selectBellID].colorLevel - 1];
          Transform tf = transform.Find("slect_btn");
          if (tf != null) {
            UIImageButton uib = tf.GetComponent<UIImageButton>();
            if (uib != null) {
              uib.normalSprite = m_QualitySprite.spriteName;
              uib.hoverSprite = m_QualitySprite.spriteName;
              uib.pressedSprite = m_QualitySprite.spriteName;
            }
          }
        } else {
          Transform tf = transform.Find("slect_btn");
          if (tf != null) {
            UIImageButton uib = tf.GetComponent<UIImageButton>();
            if (uib != null) {
              m_QualitySprite.spriteName = "QualityGrey";
              uib.normalSprite = "QualityGrey";
              uib.hoverSprite = "QualityGrey";
              uib.pressedSprite = "QualityGrey";
            }
          }
        }
    }

    // 阵型按钮点击
    void OnClickItem()
    {
        LogModule.DebugLog("matrixIndex is click !    =============================" + this.curMatrixIndex);
        if (null != BelleMatrixBand.Instance())
        {
            if (BelleController.Instance().NewPlayerGuide_Step == 2)
            {
                BelleController.Instance().NewPlayerGuide(3);
            }
            else
            {
                BelleMatrixBand.Instance().OnMatrixButtonClick(this.curMatrixIndex);
            }
        }
    }
}
