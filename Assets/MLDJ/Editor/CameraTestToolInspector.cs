/********************************************************************************
 *	文件名：	CameraTestToolInspector.cs
 *	全路径：	\Script\Player\Controller\Camera\CameraTestToolInspector.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-03-31
 *
 *	功能说明：给美术测试场景和确定摄像机参数的工具
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using System.IO;
using System;

[CustomEditor(typeof(CameraTestTool))]
public class CameraTestToolInspector : Editor
{
	/// <summary>
	/// 保存摄像机动画文件的默认目录
	/// </summary>
	private static string DefaultSaveDir = "D:\\";
	[MenuItem("CABAL/CameraTestTool/Open")]
	private static void OpenCameraTestTool()
	{
		if (Camera.main != null)
		{
			if (Camera.main.gameObject.GetComponent<CameraTestTool>() == null)
			{
				Camera.main.gameObject.AddComponent<CameraTestTool>();
			}
			Selection.activeObject = Camera.main;
		}
		else
		{
			Debug.LogError("Cant find main camera.");
		}        
	}
	
	[MenuItem("CABAL/CameraTestTool/Close")]
	private static void CloseCameraTestTool()
	{
		if (Camera.main != null)
		{
			CameraTestTool instance = Camera.main.gameObject.GetComponent<CameraTestTool>();
			if (instance != null)
			{
				GameObject.DestroyImmediate(instance);
			}
		}
		else
		{
			Debug.LogError("Cant find main camera.");
		}
	}		
		
	public override void OnInspectorGUI()
    {
        CameraTestTool cameraTestTool = (CameraTestTool)target;
        cameraTestTool.m_TargetTransCache = EditorGUILayout.ObjectField("Target: ", cameraTestTool.m_TargetTransCache, typeof(Transform)) as Transform;
        //EditorGUILayout.Separator();
        EditorGUILayout.Space();

        cameraTestTool.m_fDefaultDistance = EditorGUILayout.FloatField("Default Distance: ", cameraTestTool.m_fDefaultDistance);
        cameraTestTool.m_fDefaultPitch = EditorGUILayout.FloatField("Default Pitch: ", cameraTestTool.m_fDefaultPitch);
        cameraTestTool.m_fDefaultYaw = EditorGUILayout.FloatField("Default Yaw: ", cameraTestTool.m_fDefaultYaw);
        if (GUILayout.Button("Rest to default"))
        {
            cameraTestTool.m_fDistance = cameraTestTool.m_fDefaultDistance;
            cameraTestTool.m_fPitch = cameraTestTool.m_fDefaultPitch;
            cameraTestTool.m_fYaw = cameraTestTool.m_fDefaultYaw;
        }
        EditorGUILayout.Space();

        EditorGUILayout.BeginHorizontal();
        cameraTestTool.m_fDistance = EditorGUILayout.FloatField("Distance: ", cameraTestTool.m_fDistance);
        cameraTestTool.m_fDistance = EditorGUILayout.Slider(cameraTestTool.m_fDistance, cameraTestTool.m_fDistanceMin, cameraTestTool.m_fDistanceMax);
        EditorGUILayout.EndHorizontal();
        EditorGUILayout.BeginHorizontal();
        cameraTestTool.m_fPitch = EditorGUILayout.FloatField("Pitch: ", cameraTestTool.m_fPitch);
        cameraTestTool.m_fPitch = EditorGUILayout.Slider(cameraTestTool.m_fPitch, cameraTestTool.m_fPitchMin, cameraTestTool.m_fPitchMax);
        EditorGUILayout.EndHorizontal();
        EditorGUILayout.BeginHorizontal();
        cameraTestTool.m_fYaw = EditorGUILayout.FloatField("Yaw: ", cameraTestTool.m_fYaw);
        cameraTestTool.m_fYaw = EditorGUILayout.Slider(cameraTestTool.m_fYaw, -180, 180);
        EditorGUILayout.EndHorizontal();
        EditorGUILayout.Space();

        base.OnInspectorGUI();

		EditorGUILayout.LabelField("Camera Anim Name:  " + cameraTestTool.m_ExportFileName);

		if (GUILayout.Button("Clear Pitch Curve"))
		{
			cameraTestTool.m_PitchRock = new AnimationCurve();
		}
		if (GUILayout.Button("Clear Yaw Curve"))
		{
			cameraTestTool.m_YawRock = new AnimationCurve();
		}
		if (GUILayout.Button("Clear Distance Curve"))
		{
			cameraTestTool.m_DistanceRock = new AnimationCurve();
		}
		if (GUILayout.Button("Clear Offset Curve"))
        {
            cameraTestTool.m_OffsetYRock = new AnimationCurve();
        }
		if (GUILayout.Button("Clear All Curve"))
		{
			if (EditorUtility.DisplayDialog("警告，不可撤销",  "清除正在编辑的所有曲线吗？", "是的", "再想想"))
			{
				cameraTestTool.m_PitchRock = new AnimationCurve();
				cameraTestTool.m_YawRock = new AnimationCurve();
				cameraTestTool.m_DistanceRock = new AnimationCurve();
				cameraTestTool.m_OffsetYRock = new AnimationCurve();
			}
		}
		cameraTestTool.m_fRockDely = EditorGUILayout.FloatField("Delay Time: ", cameraTestTool.m_fRockDely);
        cameraTestTool.m_fRockTime = EditorGUILayout.FloatField("Rock Time: ", cameraTestTool.m_fRockTime);
        if (GUILayout.Button("Test Rock"))
        {
            cameraTestTool.StartTestRock();
			if (cameraTestTool.m_TargetTransCache != null)
			{
				AnimationTest animationTest = cameraTestTool.m_TargetTransCache.gameObject.GetComponentInChildren<AnimationTest>();
				if (animationTest != null)
				{
					animationTest.Play();
				}
			}
        }
        EditorGUILayout.Space();

        if (GUILayout.Button("Export"))
        {
			string defaultName = cameraTestTool.m_ExportFileName == string.Empty ?
				"CameraAnimCurve" + (Convert.ToInt32(System.DateTime.Now.ToString("ddHHmmss")) * 10).ToString() :
					cameraTestTool.m_ExportFileName;
			string savePath = EditorUtility.SaveFilePanel("保存摄像机动画", DefaultSaveDir, defaultName, "txt");
			if (savePath.Length != 0)
			{
				cameraTestTool.m_ExportFileName = System.IO.Path.GetFileName(savePath);
				ExportCurve2TXT(cameraTestTool, savePath);
			}
        }
		if (GUILayout.Button("Import"))
		{
			if (EditorUtility.DisplayDialog("警告，不可撤销",  "导入会覆盖正在编辑的所有曲线，确定要这么做吗？", "是的", "再想想"))
			{
				string defaultFilePath = DefaultSaveDir + cameraTestTool.m_ExportFileName + ".txt";
				string filePath = EditorUtility.OpenFilePanel("打开摄像机动画", defaultFilePath, "txt");
				if (filePath.Length != 0)
				{
					cameraTestTool.m_ExportFileName = System.IO.Path.GetFileName(filePath);
					ReadCurveFromTxt(cameraTestTool, filePath);
				}
			}
		}
    }

	public void ExportCurve2TXT(CameraTestTool cameraTestTool, string savePath)
	{
		StreamWriter swRet;
//		FileInfo RetFile = new FileInfo(savePath);
//		if (RetFile.Exists)
//		{
//			swRet = new StreamWriter(savePath, true, System.Text.Encoding.Unicode);
//		}
//		else
		{
			swRet = new StreamWriter(savePath, false, System.Text.Encoding.Unicode);
			swRet.WriteLine("曲线ID\t描述\t曲线节点索引\t时间\t值\t切入正切角度\t切出正切角度\t正切模式\t开始WrapMode（0Default 1Clamp 1Once 2Loop 4PingPong 8ClampForever）\t结束WrapMode（0Default 1Clamp 1Once 2Loop 4PingPong 8ClampForever）\t"
			                + cameraTestTool.m_fRockTime + "\t"
			                + cameraTestTool.m_fRockDely);
		}
		int nIndex = 0;
		if (cameraTestTool.m_PitchRock.length > 0)
		{
			int keyCount = 0;
			for (int i = 0; i < cameraTestTool.m_PitchRock.keys.Length; i++)
			{
				Keyframe frame = cameraTestTool.m_PitchRock.keys[i];
				string strLine;
				if (i == 0)
				{
					strLine = nIndex + "\t" + "Pitch" + "\t";
				}
				else
				{
					strLine = "" + "\t" + "" + "\t";
				}
				strLine += keyCount + "\t" + frame.time + "\t" + frame.value + "\t" + frame.inTangent + "\t" +
					frame.outTangent + "\t" + frame.tangentMode + "\t" + (int)cameraTestTool.m_PitchRock.preWrapMode + "\t" + (int)cameraTestTool.m_PitchRock.postWrapMode;

				swRet.WriteLine(strLine);
				keyCount++;
			}
		}

		nIndex = 1;
		if (cameraTestTool.m_YawRock.length > 0)
		{
			int keyCount = 0;
			for (int i = 0; i < cameraTestTool.m_YawRock.keys.Length; i++)
			{
				Keyframe frame = cameraTestTool.m_YawRock.keys[i];
				string strLine;
				if (i == 0)
				{
					strLine = nIndex + "\t" + "Yaw" + "\t";;
				}
				else
				{
					strLine = "" + "\t" + "" + "\t";
				}
				strLine += keyCount + "\t" + frame.time + "\t" + frame.value + "\t" + frame.inTangent + "\t" +
					frame.outTangent + "\t" + frame.tangentMode + "\t" + (int)cameraTestTool.m_YawRock.preWrapMode + "\t" + (int)cameraTestTool.m_YawRock.postWrapMode;
				
				swRet.WriteLine(strLine);
				keyCount++;
			}
		}

		nIndex = 2;
		if (cameraTestTool.m_DistanceRock.length > 0)
		{
			int keyCount = 0;
			for (int i = 0; i < cameraTestTool.m_DistanceRock.keys.Length; i++)
			{
				Keyframe frame = cameraTestTool.m_DistanceRock.keys[i];
				string strLine;
				if (i == 0)
				{
					strLine = nIndex + "\t" + "Distance" + "\t";;
				}
				else
				{
					strLine = "" + "\t" + "" + "\t";
				}
				strLine += keyCount + "\t" + frame.time + "\t" + frame.value + "\t" + frame.inTangent + "\t" +
					frame.outTangent + "\t" + frame.tangentMode + "\t" + (int)cameraTestTool.m_DistanceRock.preWrapMode + "\t" + (int)cameraTestTool.m_DistanceRock.postWrapMode;
				swRet.WriteLine(strLine);
				keyCount++;
			}
		}

		nIndex = 3;
		if (cameraTestTool.m_OffsetYRock.length > 0)
		{
			int keyCount = 0;
			for (int i = 0; i < cameraTestTool.m_OffsetYRock.keys.Length; i++)
			{
				Keyframe frame = cameraTestTool.m_OffsetYRock.keys[i];
				string strLine;
				if (i == 0)
				{
					strLine = nIndex + "\t" + "Offset" + "\t";;
				}
				else
				{
					strLine = "" + "\t" + "" + "\t";
				}
				strLine += keyCount + "\t" + frame.time + "\t" + frame.value + "\t" + frame.inTangent + "\t" +
					frame.outTangent + "\t" + frame.tangentMode + "\t" + (int)cameraTestTool.m_OffsetYRock.preWrapMode + "\t" + (int)cameraTestTool.m_OffsetYRock.postWrapMode;
				swRet.WriteLine(strLine);
				keyCount++;
			}
		}
		swRet.Close();
		swRet.Dispose();
	}
	
	public void ReadCurveFromTxt(CameraTestTool cameraTestTool, string filePath)
	{
		StreamReader srRet;
		FileInfo RetFile = new FileInfo(filePath);
		if (RetFile.Exists ==false)
		{
			EditorUtility.DisplayDialog("出错了", "找不到指定的文件", "确定");
			return;
		}
		srRet = new StreamReader(filePath, System.Text.Encoding.Unicode);
		
		List<String> strList =new List<string>();
		// 表头
		string strLine = srRet.ReadLine();		
		int curveId = -1;

		if (strLine == null || srRet.EndOfStream == true)
		{
			EditorUtility.DisplayDialog("出错了", "数据文件错误", "确定");
			return;
		}
		// 读取总时长和延迟
		string[] SplitArrayNew = strLine.Split(new char[] { '\t' });
		cameraTestTool.m_fRockTime = (float) Convert.ToDouble(SplitArrayNew[SplitArrayNew.Length - 2]);
		cameraTestTool.m_fRockDely = (float) Convert.ToDouble(SplitArrayNew[SplitArrayNew.Length - 1]);

		// 第一行
		strLine = srRet.ReadLine();		
		SplitArrayNew = strLine.Split(new char[] { '\t' });
		if (SplitArrayNew[0] != null && SplitArrayNew[0] != "")
		{
			curveId =  Convert.ToInt32(SplitArrayNew[0]);
		}
		else
		{
			EditorUtility.DisplayDialog("出错了", "数据文件错误", "确定");
			return;
		}

		if (curveId == 0)
		{
			strList.Add(strLine);
			// 读Pitch
			while(strLine !=null && srRet.EndOfStream ==false)
			{
				strLine = srRet.ReadLine();
				if (strLine != null)
				{
					SplitArrayNew = strLine.Split(new char[] { '\t' });
					if (SplitArrayNew[0] != null && SplitArrayNew[0] != "")
					{
						curveId = Convert.ToInt32(SplitArrayNew[0]);
						break;
					} 
					strList.Add(strLine);
				}
			}
			cameraTestTool.m_PitchRock = CreateCurve(strList);
			strList.Clear();
		}

		if (curveId == 1)
		{
			strList.Add(strLine);
			// 读Yaw
			while(strLine !=null && srRet.EndOfStream ==false)
			{
				strLine = srRet.ReadLine();
				if (strLine != null)
				{
					SplitArrayNew = strLine.Split(new char[] { '\t' });
					if (SplitArrayNew[0] != null && SplitArrayNew[0] != "")
					{
						curveId = Convert.ToInt32(SplitArrayNew[0]);
						break;
					} 
					strList.Add(strLine);
				}
			}
			cameraTestTool.m_YawRock = CreateCurve(strList);
			strList.Clear();
		}
		if (curveId == 2)
		{
			strList.Add(strLine);
			// 读Distance
			while(strLine !=null && srRet.EndOfStream ==false)
			{
				strLine = srRet.ReadLine();
				if (strLine != null)
				{
					SplitArrayNew = strLine.Split(new char[] { '\t' });
					if (SplitArrayNew[0] != null && SplitArrayNew[0] != "")
					{
						curveId = Convert.ToInt32(SplitArrayNew[0]);
						break;
					} 
					strList.Add(strLine);
				}
			}
			cameraTestTool.m_DistanceRock = CreateCurve(strList);
			strList.Clear();
		}
		if (curveId == 3)
		{
			strList.Add(strLine);
			// 读Offset
			while(strLine !=null && srRet.EndOfStream ==false)
			{
				strLine = srRet.ReadLine();
				if (strLine != null)
				{
					SplitArrayNew = strLine.Split(new char[] { '\t' });
					if (SplitArrayNew[0] != null && SplitArrayNew[0] != "")
					{
						curveId = Convert.ToInt32(SplitArrayNew[0]);
						break;
					} 
					strList.Add(strLine);
				}
			}
			cameraTestTool.m_OffsetYRock = CreateCurve(strList);
		}
	}

	private AnimationCurve CreateCurve (List<string> strList)
	{
		AnimationCurve result = new AnimationCurve();
		int preWrapMode = -1;
		int postWrapMode = -1;
		if (strList.Count >0)
		{
			Keyframe[] XCurverKeyframes = new Keyframe[strList.Count];
			for (int i = 0; i < strList.Count; i++)
			{
				string[] SplitInfo = strList[i].Split(new char[] {'\t'});
				XCurverKeyframes[i].time =(float) Convert.ToDouble(SplitInfo[3]);
				XCurverKeyframes[i].value = (float)Convert.ToDouble(SplitInfo[4]);
				XCurverKeyframes[i].inTangent = (float)Convert.ToDouble(SplitInfo[5]);
				XCurverKeyframes[i].outTangent = (float)Convert.ToDouble(SplitInfo[6]);
				XCurverKeyframes[i].tangentMode = Convert.ToInt32(SplitInfo[7]);
				preWrapMode = Convert.ToInt32(SplitInfo[8]);
				postWrapMode = Convert.ToInt32(SplitInfo[9]);
			}
			result = new AnimationCurve(XCurverKeyframes);
			result.preWrapMode = (WrapMode)preWrapMode;
			result.postWrapMode = (WrapMode)postWrapMode;
		}			
		return result;
	}
}
