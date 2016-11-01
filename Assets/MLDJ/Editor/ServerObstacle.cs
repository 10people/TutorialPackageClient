/********************************************************************************
 *	文件名：	ServerObstacle.cs
 *	全路径：	\MLDJ\Editor\ServerObstacle.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-25
 *
 *	功能说明：编辑器服务器阻挡生成选项
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using UnityEditor;
using Games;
using GCGame.Table;
using System.IO;
using System.Runtime.InteropServices;
using System;
using System.Collections.Generic;
using GCGame;

public class ServerObstacle : Editor
{
    private const byte m_nObstacle = 0;        //阻挡标识
    private const byte m_nPath = 1;            //可行走区域标识
    private static string m_szServerObstacleTag = "ServerObstacleTestPoint";    //为服务器行走面的物理体的Tag
    private static Vector3 m_TestRayOrigin = new Vector3(0, 100.0f, 0);         //进行射线检测的射线原点
    private static Vector3 m_TestRayDirection = new Vector3(0, -100.0f, 0);     //进行射线检测的射线方向
    //private static List<NavMeshAgent> m_ServerObstacleTestAgent = new List<NavMeshAgent>();           //用以进行联通关系检测的NavAgent集合

    //保存的数据结构
    private struct ObstacleInfo
    {
        public float m_fX;
        public float m_fZ;
        public byte m_Value;
    }
    //////////////////////////////////////////////////////////////////////////
    // 生成当前场景服务器阻挡
    //////////////////////////////////////////////////////////////////////////
    [MenuItem("MLDJ/ServerObstacle/Create")]
    public static void CreateObstacle()
    {
        //根据当前场景名字获得场景名称
        string curScene = EditorApplication.currentScene.Substring(EditorApplication.currentScene.LastIndexOf('/') + 1);
        curScene = curScene.Substring(0, curScene.IndexOf('.'));
        //首先获取当前场景的SceneClass
        Tab_SceneClass sceneDefine = null;
        for (int i = 0; i < TableManager.GetSceneClass().Count; ++i)
        {
            Tab_SceneClass sceneClass = TableManager.GetSceneClassByID(i, 0);
            if (null != sceneClass && sceneClass.ResName == curScene)
            {
                sceneDefine = sceneClass;
                break;
            }
        }

        //Tab_SceneClass sceneDefine = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene.ToString(), 0);
        if (null == sceneDefine)
        {
            Debug.LogError("Scene Class Not Find, SceneID:" + curScene);
            return;
        }

        //获得当前场景的实际长和宽
        int nLenth = sceneDefine.Length;
        int nWidth = sceneDefine.Width;

        //初始化文件
        string obstacleFilePath = GetCurSceneObstacleFilePath();

        FileStream fileStream = new FileStream(obstacleFilePath, FileMode.Create, FileAccess.ReadWrite);
        int nSeek = 0;
   
        //先将地图的长和宽写入文件头
        fileStream.Seek(nSeek, SeekOrigin.Begin);
        byte[] byteLen = System.BitConverter.GetBytes(nLenth);
        fileStream.Write(byteLen, 0, byteLen.Length);
        nSeek += byteLen.Length;

        fileStream.Seek(nSeek, SeekOrigin.Begin);
        byte[] byteWid = System.BitConverter.GetBytes(nWidth);
        fileStream.Write(byteWid, 0, byteWid.Length);
        nSeek += byteWid.Length;

        ////查找当前场景中的所有检测点
        //GameObject[] serverObstacleTestPoint = GameObject.FindGameObjectsWithTag("ServerObstacleTestPoint");
        //if (serverObstacleTestPoint.Length <= 0)
        //{
        //    return;
        //}

        ////获得当前场景高度图
        //if (null == GameManager.gameManager.ActiveScene)
        //{
        //    return;
        //}

        //m_ServerObstacleTestAgent.Clear();
        //for (int i = 0; i < serverObstacleTestPoint.Length; ++i)
        //{
        //    NavMeshAgent agent = serverObstacleTestPoint[i].GetComponent<NavMeshAgent>();
        //    if (null != agent)
        //    {
        //        m_ServerObstacleTestAgent.Add(agent);
        //    }
        //}

        //对当前场景进行遍历，进行寻路检测，得到每一个点的可行走类型
        for (float fX = 0.0f; fX <= (float)nLenth; fX += 0.5f)
        {
            for (float fZ = 0.0f; fZ <= (float)nWidth; fZ += 0.5f)
            {
                //Vector3 pos = new Vector3(fX, 0, fZ);
                //pos.y = GameManager.gameManager.ActiveScene.GetTerrainHeight(pos);
                ObstacleInfo nState = GetScenePosPathState(fX, fZ);
                byte[] write = Struct2Byte(nState);

                fileStream.Seek(nSeek, SeekOrigin.Begin);
                fileStream.Write(write, 0, write.Length);
                nSeek += write.Length;
            }
        }

        fileStream.Close();
        Debug.Log("Server Obstacle Create OK");
    }
    
    //////////////////////////////////////////////////////////////////////////
    // 查看当前场景服务器阻挡
    //////////////////////////////////////////////////////////////////////////
    [MenuItem("MLDJ/ServerObstacle/Show")]
    public static void ShowObstacle()
    {
        //这个选项由于用到了地表高度，所以要保证Editor在运行的时候才可以看到
        if (!Application.isPlaying)
        {
            Debug.LogError("This Function Must Run Your Unity Editor");
            return;
        }

        //初始化文件
        string obstaclFilePath = GetCurSceneObstacleFilePath();

        if (!File.Exists(obstaclFilePath))
        {
            return;
        }

        //打开文件，获得阻挡文件长和宽
        FileStream fileStream = new FileStream(obstaclFilePath, FileMode.Open, FileAccess.Read);
        int nSeek = 0;

        //先从文件头读取地图的长和宽
        byte[] byteLen = new byte[Marshal.SizeOf(typeof(int))];
        fileStream.Seek(nSeek, SeekOrigin.Begin);
        fileStream.Read(byteLen, 0, byteLen.Length);
        int nLen = System.BitConverter.ToInt32(byteLen, 0);
        nSeek += byteLen.Length;

        byte[] byteWid = new byte[Marshal.SizeOf(typeof(int))];
        fileStream.Seek(nSeek, SeekOrigin.Begin);
        fileStream.Read(byteWid, 0, byteWid.Length);
        int nWid = System.BitConverter.ToInt32(byteWid, 0);
        nSeek += byteWid.Length;

        //读取数据，显示到客户端
        int nReadLen = Marshal.SizeOf(typeof(ObstacleInfo));
        byte[] read = new byte[nReadLen];
        GameObject obstacleRoot = CreateObstacleRoot();
        if (null != obstacleRoot)
        {
            //创建路径点模型
            GameObject pathObj = AssetDatabase.LoadAssetAtPath("Assets/MLDJ/Editor/Path.prefab", typeof(GameObject)) as GameObject;
            if (null == pathObj)
            {
                return;
            }

            if (null == GameManager.gameManager.ActiveScene)
            {
                return;
            }

            for (int i=0; i<(nLen*2+1)*(nWid*2+1); ++i)
            {
                fileStream.Seek(nSeek, SeekOrigin.Begin);
                fileStream.Read(read, 0, nReadLen);
                nSeek += nReadLen;

                ObstacleInfo info = Byte2Struct(read);

                //如果该点为路径点，则放置一个叫“Path”的Prefab
                if (info.m_Value == m_nPath)
                {
                    GameObject pathInst = (GameObject)GameObject.Instantiate(pathObj);
                    Vector3 pos = new Vector3(info.m_fX, 100, info.m_fZ);
                    pos.y = GameManager.gameManager.ActiveScene.GetTerrainHeight(pos) + 5;
                    pathInst.transform.position = pos;
                    pathInst.transform.parent = obstacleRoot.transform;
                }
            }
        }

        fileStream.Close();
        Debug.Log("Server Obstacle Show OK");
    }

    //////////////////////////////////////////////////////////////////////////
    // 隐藏当前场景服务器阻挡
    //////////////////////////////////////////////////////////////////////////
    [MenuItem("MLDJ/ServerObstacle/Hide")]
    public static void HideObstacle()
    {
        //这个选项由于用到了地表高度，所以要保证Editor在运行的时候才可以看到
        if (!Application.isPlaying)
        {
            Debug.LogError("This Function Must Run Your Unity Editor");
            return;
        }

        CreateObstacleRoot();
        Debug.Log("Server Obstacle Hide OK");
    }
    
    //得到当前场景的阻挡文件全路径
    private static string GetCurSceneObstacleFilePath()
    {
        string curScene = EditorApplication.currentScene.Substring(EditorApplication.currentScene.LastIndexOf('/') + 1);
        curScene = curScene.Substring(0, curScene.IndexOf('.'));

        string filePath = Application.dataPath + "/../../Server/Scene/";
        //string filePath = Application.streamingAssetsPath + "/ServerObstacle/";
        if (!Directory.Exists(filePath))
        {
            Directory.CreateDirectory(filePath);
        }

        string obstacleFileName = curScene + ".path";
        string obstacleFilePath = filePath + obstacleFileName;

        return obstacleFilePath;
    }

    //创建Obstacle阻挡显示根节点，如果有则清空，没有则创建
    private static GameObject CreateObstacleRoot()
    {
        GameObject obRoot = GameObject.Find("ServerObstacleRoot");
        if (null == obRoot)
        {
            obRoot = new GameObject("ServerObstacleRoot");
        }

        if (null != obRoot)
        {
            Utils.CleanGrid(obRoot);
        }

        return obRoot;
    }

    //关键函数，根据某个点获取当前点状态
    private static ObstacleInfo GetScenePosPathState(float fX, float fZ)
    {
        ObstacleInfo info = new ObstacleInfo();
        info.m_fX = m_TestRayOrigin.x = fX;
        info.m_fZ = m_TestRayOrigin.z = fZ;

        Ray ray = new Ray(m_TestRayOrigin, m_TestRayDirection);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
        {
            //如果检测点是
            if (hit.collider.gameObject.CompareTag(m_szServerObstacleTag))
            {
                info.m_Value = m_nPath;
            }
            else
            {
                info.m_Value = m_nObstacle;
            }
        }

        //for (int i = 0; i < m_ServerObstacleTestAgent.Count; ++i)
        //{
        //    m_ServerObstacleTestAgent[i].destination = pos;
        //    if (m_ServerObstacleTestAgent[i].hasPath)
        //    {
        //        info.m_Value = m_nPath;
        //        break;
        //    }
        //}

        return info;
    }

    //struct与byte[]相互转换函数
    private static ObstacleInfo Byte2Struct(byte[] arr)
    {
        int structSize = Marshal.SizeOf(typeof(ObstacleInfo));
        IntPtr ptemp = Marshal.AllocHGlobal(structSize);
        Marshal.Copy(arr, 0, ptemp, structSize);
        ObstacleInfo rs = (ObstacleInfo)Marshal.PtrToStructure(ptemp, typeof(ObstacleInfo));
        Marshal.FreeHGlobal(ptemp);
        return rs;
    }

    private static byte[] Struct2Byte(ObstacleInfo s)
    {
        int structSize = Marshal.SizeOf(typeof(ObstacleInfo));
        byte[] buffer = new byte[structSize];
        //分配结构体大小的内存空间 
        IntPtr structPtr = Marshal.AllocHGlobal(structSize);
        //将结构体拷到分配好的内存空间 
        Marshal.StructureToPtr(s, structPtr, false);
        //从内存空间拷到byte数组 
        Marshal.Copy(structPtr, buffer, 0, structSize);
        //释放内存空间 
        Marshal.FreeHGlobal(structPtr);
        return buffer;
    }
}