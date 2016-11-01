/********************************************************************************
 *	文件名：	CabalTriggerInspector.cs
 *	全路径：	\MLDJ\Editor\CabalTriggerInspector.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-07-27
 *
 *	功能说明：CabalTrigger的显示面板，有生成表数据的功能
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;
using System;

[CustomEditor(typeof(CabalTrigger))]
public class CabalTriggerInspector : Editor {

	private static string tableStr;

	[MenuItem("CABAL/CopySceneTool/CreateTrigger")]
	private static void CreateTrigger()
	{
		GameObject newTrigger = new GameObject("newTrigger" + (Convert.ToInt32(System.DateTime.Now.ToString("ddHHmmss")) * 10).ToString());
		newTrigger.AddComponent<CabalTrigger>();
		newTrigger.AddComponent<BoxCollider>();
		Selection.activeGameObject = newTrigger;
	}

	public override void OnInspectorGUI()
	{
		CabalTrigger cabalTrigger = (CabalTrigger)target;

		base.OnInspectorGUI();

		if (GUILayout.Button("Create table string"))
		{
			tableStr = string.Format("{0}\t{1}\t{2}\t{3}\t{4}\t{5}\t{6}\t{7}\t{8}\t{9}\t{10}",
			                         cabalTrigger.ID, cabalTrigger.gameObject.name, 
			                         cabalTrigger.transform.position.x, cabalTrigger.transform.position.y, cabalTrigger.transform.position.z,
			                         0, cabalTrigger.transform.rotation.eulerAngles.y, 0,
			                         cabalTrigger.transform.localScale.x, cabalTrigger.transform.localScale.y, cabalTrigger.transform.localScale.z);
		}

		// 强行设置不能绕xz旋转
		cabalTrigger.transform.localRotation = Quaternion.Euler(0, cabalTrigger.transform.localRotation.eulerAngles.y, 0);

		EditorGUILayout.TextArea(tableStr);
	}
}