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

[CustomEditor(typeof(CabalObstacle))]
public class CabalObstacleInspector : Editor {

	private static string tableStr;

	[MenuItem("CABAL/CopySceneTool/CreateObstacle")]
	private static void CreateTrigger()
	{
		GameObject newObstacle = new GameObject("newObstacle" + (Convert.ToInt32(System.DateTime.Now.ToString("ddHHmmss")) * 10).ToString());
		newObstacle.AddComponent<CabalObstacle>();		
		newObstacle.AddComponent<BoxCollider>();
		Selection.activeGameObject = newObstacle;
	}

	public override void OnInspectorGUI()
	{
		CabalObstacle cabalObstacle = (CabalObstacle)target;

		base.OnInspectorGUI();

		if (GUILayout.Button("Create table string"))
		{
			tableStr = string.Format("{0}\t{1}\t{2}\t{3}\t{4}\t{5}\t{6}\t{7}\t{8}\t{9}\t{10}\t{11}",
			                         cabalObstacle.ID, cabalObstacle.gameObject.name, "DynamisObstacleRoot",
			                         cabalObstacle.transform.position.x, cabalObstacle.transform.position.y, cabalObstacle.transform.position.z,
			                         0, cabalObstacle.transform.rotation.eulerAngles.y, 0,
			                         cabalObstacle.transform.localScale.x, cabalObstacle.transform.localScale.y, cabalObstacle.transform.localScale.z);
		}

		// 强行设置不能绕xz旋转
		cabalObstacle.transform.localRotation = Quaternion.Euler(0, cabalObstacle.transform.localRotation.eulerAngles.y, 0);

		EditorGUILayout.TextArea(tableStr);
	}
}