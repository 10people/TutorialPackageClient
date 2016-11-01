/********************************************************************
	created:	2014/03/14
	created:	14:3:2014   16:48
	filename: 	NPCEditorRoot.cs
	author:		王迪
	
	purpose:	种怪编辑器根结点，NPC必须挂在此结点下边界，
                导入导出需要选中带有此脚本的物体
*********************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using GCGame;
using System;
using Module.Log;
public class NPCEditorRoot : MonoBehaviour {

    public float UpdateDuration = 1.0f;
    private float m_updateTimer = 1.0f;
    public float m_terrainHeight = 20.0f;
    public int curSceneID = 1;
    public int curDataID = -1;
    public float curRadius = 1;
    public Color curColor = Color.white;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void OnDrawGizmos()
    {
        m_updateTimer -= Time.deltaTime;
        if (m_updateTimer < 0)
        {
            m_updateTimer = UpdateDuration;
            foreach (NPCPresent child in transform.GetComponentsInChildren<NPCPresent>(false))
            {
                child.SetHeight(m_terrainHeight);
                if (child.DataID == curDataID )
                {
 
                    child.SetColor(curColor);
                    child.SetRadius(curRadius);
                }
            }
        }
    }

    public class NPCData
    {
        public string name;
        public int sceneID;
        public int dataID;
        public float xPos;
        public float yPos;
        public float rad;
        public int groupID;
        public int mutexID;
        public int isHideAndSeekNpc;

        public string GetString()
        {
            return (name + "\t" +
                sceneID.ToString() + "\t" +
                dataID.ToString() + "\t" +
                xPos.ToString("0.##") + "\t" +
                yPos.ToString("0.##") + "\t" +
                rad.ToString("0.##") + "\t" +
                groupID.ToString() + "\t" +
                mutexID.ToString() + "\t" +
                isHideAndSeekNpc.ToString());
        }
    };

    private Dictionary<int, List<NPCData>> m_dicNPCCache = new Dictionary<int, List<NPCData>>();
    private List<int> m_listSceneID = new List<int>();
    public void ExportData(string filePath)
    {

        LoadFile(filePath);
        if (m_dicNPCCache.ContainsKey(curSceneID))
        {
            m_dicNPCCache[curSceneID] = new List<NPCData>();
        }
        else
        {
            m_dicNPCCache.Add(curSceneID, new List<NPCData>());
        }

        foreach (NPCPresent child in transform.GetComponentsInChildren<NPCPresent>(false))
        {
            NPCData curNPC = new NPCData();
            curNPC.name = child.NPCName;
            curNPC.sceneID = curSceneID;
            curNPC.dataID = child.DataID;
            curNPC.xPos = child.transform.position.x;
            curNPC.yPos = child.transform.position.z;
            curNPC.rad = Utils.DirClientToServer(child.transform.rotation);
            curNPC.groupID = child.GroupID;
            curNPC.mutexID = child.MutexID;
            curNPC.isHideAndSeekNpc = 0;
            m_dicNPCCache[curSceneID].Add(curNPC);
        }

        WriteFile(filePath);
        //ConvertFile(filePath);
    }

    public void ImportData(string path)
    {
        foreach (Transform curObj in transform)
        {
            DestroyImmediate(curObj.gameObject);
        }

        List<GameObject> objList = new List<GameObject>();
        for (int i = 0, count = transform.childCount; i < count; i++)
        {
            objList.Add(transform.GetChild(i).gameObject);
        }

        foreach (GameObject curObj in objList)
        {
            DestroyImmediate(curObj);
        }

        LoadFile(path);
        if (!m_dicNPCCache.ContainsKey(curSceneID))
        {
            return;
        }
        List<NPCData> curDataList = m_dicNPCCache[curSceneID];

        NPCPresent curPresent = UnityEditor.AssetDatabase.LoadAssetAtPath("Assets/MLDJ/Editor/NPCInst.prefab", typeof(NPCPresent)) as NPCPresent;

        int curID = 0;
        foreach (NPCData curNPC in curDataList)
        {
            GameObject newRes = GameObject.Instantiate(curPresent.gameObject) as GameObject;
            newRes.transform.parent = transform;
            NPCPresent curNPCS = newRes.GetComponent<NPCPresent>();
            curNPCS.transform.position = new Vector3(curNPC.xPos, 0, curNPC.yPos);
            curNPCS.transform.rotation = Utils.DirServerToClient(curNPC.rad);
            curNPCS.NPCName = curNPC.name;
            curNPCS.DataID = curNPC.dataID;
            curNPCS.MutexID = curNPC.mutexID;
            curNPCS.GroupID = curNPC.groupID;
            curNPCS.isHideAndSeekNpc = curNPC.isHideAndSeekNpc;
            newRes.name = curID.ToString() + "_" + curNPC.name; ;
            curID++;
        }

        return;
    }

    private void LoadFile(string filePath)
    {
        
        m_dicNPCCache.Clear();
        m_listSceneID.Clear();
        if (File.Exists(filePath))
        {
            FileStream rfs = new FileStream(filePath, FileMode.Open);
            StreamReader sr = new StreamReader(rfs, Encoding.GetEncoding("GB2312"));

            int i = 0;
            while (!sr.EndOfStream)
            {
                string curLine = sr.ReadLine();
                LogModule.DebugLog(curLine);
                if (i++ < 4) continue;

                string[] values = curLine.Split('\t');
                if (values.Length != 10)
                {
                    LogModule.ErrorLog("table column is not equal to 9");
                    return;
                }

                NPCData curData = new NPCData();
                int curID;
                if (!int.TryParse(values[0], out curID))
                {
                    LogModule.ErrorLog("0");
                    return;
                }

                curData.name = values[1];
                if (!int.TryParse(values[2], out curData.sceneID))
                {
                    LogModule.ErrorLog("2");
                    return;
                }
                if (!int.TryParse(values[3], out curData.dataID))
                {
                    LogModule.ErrorLog("3");
                    return;
                }
                if (!float.TryParse(values[4], out curData.xPos))
                {
                    LogModule.ErrorLog("4");
                    return;
                }
                if (!float.TryParse(values[5], out curData.yPos))
                {
                    LogModule.ErrorLog("5");
                    return;
                }
                if (!float.TryParse(values[6], out curData.rad))
                {
                    LogModule.ErrorLog("6");
                    return;
                }

                if (!int.TryParse(values[7], out curData.groupID))
                {
                    LogModule.ErrorLog("7");
                    return;
                }

                if (!int.TryParse(values[8], out curData.mutexID))
                {
                    LogModule.ErrorLog("8");
                    return;
                }

                if (!int.TryParse(values[9], out curData.isHideAndSeekNpc))
                {
                    LogModule.ErrorLog("8");
                    return;
                }

                if (!m_dicNPCCache.ContainsKey(curData.sceneID))
                {
                    m_dicNPCCache.Add(curData.sceneID, new List<NPCData>());
                }

                m_dicNPCCache[curData.sceneID].Add(curData);
                if(!m_listSceneID.Contains(curData.sceneID))
                {
                    m_listSceneID.Add(curData.sceneID);
                }
                LogModule.DebugLog("get record");
            }

            rfs.Close();
            sr.Close();
        }
    }

    void WriteFile(string filePath)
    {
        if (File.Exists(filePath))
        {
            File.Delete(filePath);
        }
        FileStream wfs = new FileStream(filePath, FileMode.CreateNew);
        StreamWriter sw = new StreamWriter(wfs, Encoding.GetEncoding("GB2312"));
        sw.WriteLine("Id\tDesc\tSceneID\tDataID\tPosX\tPosZ\tFaceDirection\tGroupID\tMutexID\tIsHideAndSeekNpc");
        sw.WriteLine("INT\tSTRING\tINT\tINT\tFLOAT\tFLOAT\tFLOAT\tINT\tINT\tINT");
        sw.WriteLine("#MAX_ID=4999;MAX_RECORD=5000;TableType=Hash;\t\t\t\t\t\t\t");
        sw.WriteLine("#唯一标示\t描述，策划维护，此列程序不读\t所属场景\tDataID\t位置X\t位置Z\tNpc朝向(弧度数值)\tGroupID\tMutexID\t能否被选为公会捉迷藏NPC");

        int id = 0;
        for(int i=0; i<m_listSceneID.Count; i++)
        {
            if(!m_dicNPCCache.ContainsKey(m_listSceneID[i]))
            {
                LogModule.ErrorLog("cur npc dic not contain scene" + m_listSceneID[i]);
                return;
            }
            List<NPCData> curList = m_dicNPCCache[m_listSceneID[i]];

            foreach (NPCData curNPC in curList)
            {
                sw.WriteLine(id.ToString() + "\t" + curNPC.GetString());
                id++;
            }
        }
        sw.Close();
        wfs.Close();

    }

    void ConvertFile(string filePath)
    {
#if UNITY_EDITOR
        FileStream rfs = new FileStream(filePath, FileMode.Open);
        StreamReader sr = new StreamReader(rfs);
        string curFile = sr.ReadToEnd();
        rfs.Close();
        sr.Close();

        FileStream wfs = new FileStream(filePath, FileMode.OpenOrCreate);
        StreamWriter sw = new StreamWriter(wfs);
        Byte[] bytes = Encoding.Convert(Encoding.UTF8, Encoding.ASCII, Encoding.UTF8.GetBytes(curFile));


        //Encoding.ASCII.GetString(Encoding.ASCII.GetBytes(curFile.ToCharArray()));
        sw.Write(bytes);
        sw.Close();
        wfs.Close();
#endif
    }
}
