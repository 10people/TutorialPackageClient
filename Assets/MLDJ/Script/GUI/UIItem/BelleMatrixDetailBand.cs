using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;

public class BelleMatrixDetailBand : MonoBehaviour
{

    public UILabel labelName;
    public UILabel labelMatrixGrade;
    public UILabel labelBelleGrade;
    public UILabel labelAffectionValue;
    public UILabel[] labelAttrs;
    public UILabel[] labelAttrValues;
    private Color m_ColorHighlight = new Color(162.0f / 255.0f, 1.0f, 0, 1.0f);
    public void SetMatrix(int matrixID)
    {
        if (!BelleData.OwnedMatrixMap.ContainsKey(matrixID))
        {
            return;
        }
        Tab_BelleMatrix curMatrix = TableManager.GetBelleMatrixByID(matrixID, 0);
        if (null == curMatrix)
        {
            return;
        }

        if (null != labelName) labelName.text = curMatrix.Name;

        if (!BelleData.OwnedMatrixMap.ContainsKey(matrixID))
        {
            return;
        }
        BelleMatrix curMatrixData = BelleData.OwnedMatrixMap[matrixID];
        if (curMatrixData == null)
        {
            return;
        }

        int minLevel = 10000;

        curMatrixData.UpdateAttrMap();
        labelMatrixGrade.text =  BelleData.GetPowerNum(curMatrixData.attrMap).ToString();
        labelBelleGrade.text =  BelleData.GetPowerNum(curMatrixData.attrBelleMap).ToString();
        labelAffectionValue.text =  BelleData.GetPowerNum(curMatrixData.attrAffectionMap).ToString();
     
        for (int i = 0; i < curMatrixData.belleIDs.Length; ++i)
        {
            if (BelleData.OwnedBelleMap.ContainsKey(curMatrixData.belleIDs[i]))
            {
                int curLevel = BelleData.OwnedBelleMap[curMatrixData.belleIDs[i]].colorLevel;
                if (curLevel < minLevel)
                {
                    minLevel = curLevel;
                }
            }
        }

        for (int i = 0; i < labelAttrs.Length; i++)
        {
            if (labelAttrValues.Length > i && labelAttrs.Length > i)
            {
                if ((i + 1) == minLevel)
                {
                    if (BelleData.OwnedMatrixMap[matrixID].isActive && IsMatrixFull(matrixID))
                    {
                        labelAttrs[i].color = labelAttrValues[i].color = m_ColorHighlight;
                    }
                    else
                    {
                        labelAttrs[i].color = labelAttrValues[i].color = Color.gray;//Color.black;
                    }
                }
                else if ((i + 1) < minLevel)
                {
                    labelAttrs[i].color = labelAttrValues[i].color = Color.gray;//Color.black;
                }
                else
                {
                     labelAttrs[i].color = labelAttrValues[i].color = Color.gray;
                }

                labelAttrValues[i].text = curMatrix.GetAttrGainsbyIndex(i).ToString();
                labelAttrs[i].text = Utils.GetAttrTypeString(curMatrix.AttrType);
            }
        }
    }
    private bool IsMatrixFull(int matrixID)
    {
      if (BelleMatrixWindow.Instance() != null && BelleMatrixWindow.Instance().m_curMatrixBand != null) {
        BelleMatrix bellematrix;
        if (BelleData.OwnedMatrixMap.TryGetValue(matrixID, out bellematrix) && bellematrix != null) {
          Tab_BelleMatrix curBelleMatrix = TableManager.GetBelleMatrixByID(bellematrix.id, 0);
          System.Collections.Generic.List<int> matrixLayout;
          //BelleMatrixBand belleMatrixBand = BelleMatrixWindow.Instance().m_curMatrixBand.GetComponent<BelleMatrixBand>();
          if (/*belleMatrixBand != null &&*/ null != curBelleMatrix) {
            matrixLayout = BelleMatrixBand.GetLayOutByMatrixLayout(curBelleMatrix.Layout);
            int count = bellematrix.belleIDs.Length;
            if (matrixLayout != null && count == matrixLayout.Count) {
              for (int i = 0; i < count; ++i) {
                if (matrixLayout[i] == 1 && bellematrix.belleIDs[i] == -1) {
                  return false;
                }
              }
            }
          }
        }
      }
      return true;
    }
}
