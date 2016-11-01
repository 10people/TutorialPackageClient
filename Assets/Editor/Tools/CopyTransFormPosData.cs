#region
/*************************************************************************************
   * filename:          CopyTransFormPosData
   * date:              4/15/2015 5:52:08 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System.Text;
using UnityEditor;
using UnityEngine;

public class CopyTransFormPosData
{
    #region 变量

    #endregion

    #region 属性

    #endregion

    #region 方法

    [MenuItem("CABAL/CopyTransData")]
    public static void CopyTransFormDataFun()
    {
        StringBuilder res = new StringBuilder();
        Object curSelect = Selection.activeObject;
        TextEditor te = new TextEditor();
        if (curSelect != null && curSelect is GameObject)
        {
            Transform tmpTrans = ((GameObject) curSelect).transform;

            res.AppendLine(tmpTrans.localPosition.x + "_" + tmpTrans.localPosition.y + "_" + tmpTrans.localPosition.z);
            res.AppendLine(tmpTrans.localEulerAngles.x + "_" + tmpTrans.localEulerAngles.y + "_" + tmpTrans.localEulerAngles.z);
            te.content = new GUIContent(res.ToString());
        }
        else
        {
            te.content = new GUIContent("Error!");
        }
        te.OnFocus();
        te.Copy();
    }

    #endregion
}


