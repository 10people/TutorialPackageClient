/********************************************************************
	created:	2014/02/13
	created:	13:2:2014   19:12
	filename: 	UserConfigData.cs
	file ext:	cs
	author:		王迪
	
	purpose:	客户端配置文件类
*********************************************************************/

using System;
using Games.GlobeDefine;
using Games.SkillModle;
using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;
using System.Xml;
using Module.Log;
using Games.YuanBaoShopData;

#if UNITY_WP8
using UnityPort;
using System.Text;
using System.Xml.Serialization;
#endif

public class UserConfigData
{
    public static string DataPath { get { return Application.persistentDataPath + "/UserData/"; } }

    private static int AccountInfoMax = 5;		// role info max

    private static string AccountFileName = "Account.data";
    private static Dictionary<string, string> m_accountMap = null;

    private static string RoleInfoFileLast = ".RoleInfo";
    private static Dictionary<string, List<LoginData.PlayerRoleData>> m_roleInfoMap;
    private static string CurRoleInfoAccount = "";

    //private static string ClientResVersionFileName = "ClientResVersion.data";

    private static string FastReplyFileName = "FastReply.data";
    private static List<string> m_FastReplyList = null;

    private static string MissionClientName = "MissionClient.data";
    private static Dictionary<string, List<Games.Mission.CurOwnMission>> m_MissionClientData;

    private static string AutoConfigFileName = "AutoConfig.data";
    private static Dictionary<string, PlayerAuto> m_AutoConfigMap;

    private static string SkillBarSetFileName = "SkillBarSet.data";
    private static Dictionary<string, SkillBarInfo[]> m_SkillBarSetMap = null;

    private static string RestaurantConfigFileName = "RestaurantConfig.data";
    private static Dictionary<string, RestaurantConfigData> m_RestaurantConfigMap;

    private static string ShoppingCartFileName = "ShoppingCart.data";
    private static Dictionary<string, ShoppingCart> m_ShoppingCartInfo = null;

    private static string BelleConfigFileName = "BelleConfig.data";
    private static Dictionary<string, BelleConfigData> m_BelleConfig = null;
    public static int ClientResVersion
    {
        get
        {
            string strVersionFilePath = UpdateHelper.LocalVersionPath + "/" + UpdateHelper.VersionFileName;
            if (!File.Exists(strVersionFilePath))
            {
                return 0;
            }

            FileStream fs = new FileStream(strVersionFilePath, FileMode.Open, FileAccess.Read);
            StreamReader sr = new StreamReader(fs);

            string strLine = sr.ReadLine();

            int retValue = 0;
            if (!int.TryParse(strLine, out retValue))
            {
                LogModule.ErrorLog("res version file format error :" + strLine);
                retValue = 0;
            }

            fs.Close();

            return retValue;
        }
    }


    // 将账号信息保存在TXT文件中
    public static void AddAccountInfo(string account, string psw)
    {
        Dictionary<string, string> accountMapOrg = GetAccountList();
        Dictionary<string, string> newAccountMap = new Dictionary<string, string>();
        foreach (KeyValuePair<string, string> oldPair in accountMapOrg)
        {
            if (oldPair.Key != account)
            {
                newAccountMap.Add(oldPair.Key, oldPair.Value);
            }
        }

        newAccountMap.Add(account, psw);
        if (newAccountMap.Count > AccountInfoMax)
        {
            string delKey = null;
            foreach (string curKey in newAccountMap.Keys)
            {
                delKey = curKey;
                break;
            }

            if (null != delKey)
            {
                newAccountMap.Remove(delKey);
                RemoveRoleInfo(delKey);
            }
        }
        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }
        FileStream fs = new FileStream(DataPath + AccountFileName, FileMode.Create);
        StreamWriter sw = new StreamWriter(fs);
        foreach (KeyValuePair<string, string> curPair in newAccountMap)
        {
            sw.WriteLine(curPair.Key + '\t' + curPair.Value);
        }

        sw.Close();
        fs.Close();

        m_accountMap = newAccountMap;
    }

    // 从配置文件读取账号数据，保存在Map中
    public static Dictionary<string, string> GetAccountList()
    {
        if (m_accountMap != null)
        {
            return m_accountMap;
        }

        m_accountMap = new Dictionary<string, string>();
        string filePath = DataPath + AccountFileName;
        if (!File.Exists(filePath))
        {
            return m_accountMap;
        }
        FileStream fs = new FileStream(filePath, FileMode.Open);
        StreamReader sr = new StreamReader(fs);

        string strLine = sr.ReadLine();
        while (strLine != null)
        {
            string[] codes = strLine.Split('\t');
            if (codes.Length == 2)
            {
                if (m_accountMap.ContainsKey(codes[0]))
                {
                    m_accountMap[codes[0]] = codes[1];
                }
                else
                {
                    m_accountMap.Add(codes[0], codes[1]);
                }
            }
            strLine = sr.ReadLine();
        }

        sr.Close();
        fs.Close();
        return m_accountMap;
    }

#if UNITY_WP8
    public class RoleElement : IXmlSerializable
    {
        public string type { get; set; }
        public string level { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            if (null == reader)
            {
                return;
            }

            reader.Read();
            reader.ReadStartElement("Type");
            type = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("Level");
            level = reader.ReadContentAsString();
            reader.ReadEndElement();
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            writer.WriteElementString("Type", type);
            writer.WriteElementString("Level", level);
        }
    }

    public class ServerElement : IXmlSerializable
    {
        public List<RoleElement> list { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            list = new List<RoleElement>();
            while (reader.MoveToContent() == XmlNodeType.Element && reader.LocalName == "Role")
            {
                RoleElement element = new RoleElement();
                element.ReadXml(reader);
                list.Add(element);
                reader.Read();
            }
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            foreach (RoleElement element in list)
            {
                writer.WriteStartElement("Role");
                element.WriteXml(writer);
                writer.WriteEndElement();
            }
        }

    }

    public class RoleInfo : IXmlSerializable
    {
        public Dictionary<string, ServerElement> dic { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            dic = new Dictionary<string, ServerElement>();

            if (reader.MoveToContent() == XmlNodeType.Element && "RoleInfo" == reader.LocalName)
            {
                reader.Read();
                while (reader.MoveToContent() == XmlNodeType.Element)
                {
                    string name = reader.LocalName;
                    ServerElement elem = new ServerElement();

                    reader.Read();
                    elem.ReadXml(reader);
                    dic.Add(name, elem);
                    reader.Read();
                }
            }
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            foreach (KeyValuePair<string, ServerElement> elem in dic)
            {
                writer.WriteStartElement(elem.Key);
                elem.Value.WriteXml(writer);
                writer.WriteEndElement();
            }
        }

    }

#endif

    // 将角色信息保存在XML文件中
    public static void AddRoleInfo()
    {
        string account = PlayerPreferenceData.LastAccount;
        string serverID = PlayerPreferenceData.LastServer.ToString();

        m_roleInfoMap = GetRoleInfoList(account);
        if (m_roleInfoMap.ContainsKey(serverID))
        {
            m_roleInfoMap.Remove(serverID);
        }

        m_roleInfoMap.Add(serverID, LoginData.loginRoleList);

        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }

#if UNITY_WP8

        RoleInfo roleInfo = new RoleInfo();
        roleInfo.dic = new Dictionary<string, ServerElement>();

        foreach (KeyValuePair<string, List<LoginData.PlayerRoleData>> iter in m_roleInfoMap)
        {
            ServerElement serverElem = new ServerElement();
            serverElem.list = new List<RoleElement>();

            string name = "Server" + iter.Key;
            List<LoginData.PlayerRoleData> list = iter.Value;
            foreach (LoginData.PlayerRoleData curRoleData in list)
            {
                RoleElement roleElem = new RoleElement();
                roleElem.type = curRoleData.type.ToString();
                roleElem.level = curRoleData.level.ToString();

                serverElem.list.Add(roleElem);
            }

            roleInfo.dic.Add(name, serverElem);
        }

        XmlHelper.XmlSerializeToFile(roleInfo, DataPath + account + RoleInfoFileLast, new UTF8Encoding(false));

#else
        XmlDocument xml = new XmlDocument();
        XmlElement root = xml.CreateElement("RoleInfo");
        xml.AppendChild(root);
        foreach (string keys in m_roleInfoMap.Keys)
        {
            XmlElement curServerElement = xml.CreateElement("Server" + keys);
            root.AppendChild(curServerElement);
            List<LoginData.PlayerRoleData> curList = m_roleInfoMap[keys];
            if (null != curList)
            {
                foreach (LoginData.PlayerRoleData curRoleData in curList)
                {
                    XmlElement curRoleElement = xml.CreateElement("Role");
                    curServerElement.AppendChild(curRoleElement);
                    XmlElement curTypeElement = xml.CreateElement("Type");
                    curTypeElement.InnerText = curRoleData.type.ToString();
                    curRoleElement.AppendChild(curTypeElement);
                    curTypeElement = xml.CreateElement("Level");
                    curTypeElement.InnerText = curRoleData.level.ToString();
                    curRoleElement.AppendChild(curTypeElement);
                }
            }
        }
        xml.Save(DataPath + account + RoleInfoFileLast);
#endif
    }

    // 从配置文件读取角色数据，保存在Map中
    public static Dictionary<string, List<LoginData.PlayerRoleData>> GetRoleInfoList(string account)
    {
        if (null != m_roleInfoMap && CurRoleInfoAccount == account)
        {
            return m_roleInfoMap;
        }

        m_roleInfoMap = new Dictionary<string, List<LoginData.PlayerRoleData>>();

#if UNITY_WP8
        RoleInfo roleInfo = XmlHelper.XmlDeserializeFromFile<RoleInfo>(DataPath + account + RoleInfoFileLast, new UTF8Encoding(false));
        if (null == roleInfo)
        {
            return m_roleInfoMap;
        }

        foreach (KeyValuePair<string, ServerElement> iter in roleInfo.dic)
        {
            List<LoginData.PlayerRoleData> curList = new List<LoginData.PlayerRoleData>();
            if (iter.Key.Length > 6)
            {
                string serverID = iter.Key.Substring(6);
                m_roleInfoMap.Add(serverID, curList);

                foreach (RoleElement elem in iter.Value.list)
                {
                    LoginData.PlayerRoleData curRoleData = new LoginData.PlayerRoleData(0, 0, null, 0, -1, -1, -1);
                    string typeValue = elem.type;
                    int.TryParse(typeValue, out curRoleData.type);
                    string roleLevel = elem.level;
                    int.TryParse(roleLevel, out curRoleData.level);

                    curList.Add(curRoleData);
                }
            }
            
        }
#else
        XmlDocument xml = new XmlDocument();
        try
        {
            xml.Load(DataPath + account + RoleInfoFileLast);
        }
        catch (System.Exception)
        {
            return m_roleInfoMap;
        }

        foreach (XmlElement elemServer in xml.FirstChild.ChildNodes)
        {
            List<LoginData.PlayerRoleData> curList = new List<LoginData.PlayerRoleData>();
            string serverID = elemServer.Name.Substring(6);
            m_roleInfoMap.Add(serverID, curList);

            foreach (XmlElement roleInfo in elemServer)
            {
                if (roleInfo.Name == "Role")
                {
                    LoginData.PlayerRoleData curRoleData = new LoginData.PlayerRoleData(0, 0, null, 0, -1, -1, -1);
                    foreach (XmlElement elemDetail in roleInfo)
                    {
                        if (elemDetail.Name == "Type")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curRoleData.type);
                        }
                        else if (elemDetail.Name == "Level")
                        {
                            string roleLevel = elemDetail.InnerText;
                            int.TryParse(roleLevel, out curRoleData.level);
                        }
                    }

                    curList.Add(curRoleData);
                }
            }
        }
#endif

        return m_roleInfoMap;
    }

    public static void RemoveRoleInfo(string account)
    {
        if (File.Exists(DataPath + account + RoleInfoFileLast))
        {
            File.Delete(DataPath + account + RoleInfoFileLast);
        }
    }
    // 写入快速回复
    public static void AddFastReplyInfo(List<string> textList)
    {
        List<string> curList = GetFastReplyList();
        curList.Clear();
        foreach (string str in textList)
        {
            curList.Add(str);
        }

        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }
        FileStream fs = new FileStream(DataPath + FastReplyFileName, FileMode.OpenOrCreate);
        StreamWriter sw = new StreamWriter(fs);

        for (int i = 0; i < textList.Count; i++)
        {
            sw.WriteLine(textList[i]);
        }

        sw.Close();
    }

    // 从配置文件读取快速回复
    public static List<string> GetFastReplyList()
    {
        if (m_FastReplyList != null)
        {
            return m_FastReplyList;
        }

        m_FastReplyList = new List<string>();
        string filePath = DataPath + FastReplyFileName;
        if (!File.Exists(filePath))
        {
            return m_FastReplyList;
        }
        FileStream fs = new FileStream(filePath, FileMode.Open);
        StreamReader sr = new StreamReader(fs);

        string strLine = sr.ReadLine();
        while (strLine != null)
        {
            m_FastReplyList.Add(strLine);
            strLine = sr.ReadLine();
        }
        fs.Close();
        return m_FastReplyList;
    }

#if UNITY_WP8
    public class MissionElement : IXmlSerializable
    {
        public string state { get; set; }
        public string param0 { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            reader.Read();
            reader.ReadStartElement("State");
            state = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("Param0");
            param0 = reader.ReadContentAsString();
            reader.ReadEndElement();
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            writer.WriteElementString("State", state);
            writer.WriteElementString("Param0", param0);
        }
    }

    public class PlayerGuidElement : IXmlSerializable
    {
        public Dictionary<string, MissionElement> dic { get; set; }


        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            dic = new Dictionary<string, MissionElement>();
            while (reader.MoveToContent() == XmlNodeType.Element)
            {
                string name = reader.LocalName;
                MissionElement element = new MissionElement();
                element.ReadXml(reader);
                dic.Add(name, element);
                reader.Read();
            }
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            foreach (KeyValuePair<string, MissionElement> iter in dic)
            {
                writer.WriteStartElement(iter.Key);
                iter.Value.WriteXml(writer);
                writer.WriteEndElement();
            }
        }
    }

    public class ClientMissionData : IXmlSerializable
    {
        public Dictionary<string, PlayerGuidElement> dic { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            dic = new Dictionary<string, PlayerGuidElement>();

            if (reader.MoveToContent() == XmlNodeType.Element && "ClientMissionData" == reader.LocalName)
            {
                reader.Read();
                while (reader.MoveToContent() == XmlNodeType.Element)
                {
                    string name = reader.LocalName;
                    PlayerGuidElement elem = new PlayerGuidElement();

                    reader.Read();
                    elem.ReadXml(reader);
                    dic.Add(name, elem);
                    reader.Read();
                }
            }
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            foreach (KeyValuePair<string, PlayerGuidElement> iter in dic)
            {
                writer.WriteStartElement(iter.Key);
                iter.Value.WriteXml(writer);
                writer.WriteEndElement();
            }
        }
    }

#endif

    // 将客户端任务 信息保存
    public static void AddClientMission(string strGuid, Games.Mission.CurOwnMission oClientMission)
    {
        m_MissionClientData = GetClientMissionData();

        if (m_MissionClientData.ContainsKey(strGuid))
        {
            bool bIsHaveCurMission = false;
            for (int i = 0; i < m_MissionClientData[strGuid].Count; i++)
            {
                if (m_MissionClientData[strGuid][i].m_nMissionID == oClientMission.m_nMissionID)
                {
                    bIsHaveCurMission = true;
                    m_MissionClientData[strGuid][i] = oClientMission;
                    break;
                }
            }

            if (false == bIsHaveCurMission)
            {
                m_MissionClientData[strGuid].Add(oClientMission);
            }
        }
        else
        {
            List<Games.Mission.CurOwnMission> ClientMissionList = new List<Games.Mission.CurOwnMission>();
            ClientMissionList.Add(oClientMission);
            m_MissionClientData.Add(strGuid, ClientMissionList);
        }

        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }

#if UNITY_WP8
        ClientMissionData clientMissionData = new ClientMissionData();
        clientMissionData.dic = new Dictionary<string, PlayerGuidElement>();

        foreach (string keys in m_MissionClientData.Keys)
        {
            PlayerGuidElement playerGuidElem = new PlayerGuidElement();
            playerGuidElem.dic = new Dictionary<string, MissionElement>();
            string playerGuidName = "PlayerGuid" + keys;

            foreach (Games.Mission.CurOwnMission oMission in m_MissionClientData[keys])
            {
                MissionElement missionElem = new MissionElement();
                string missionName = "Mission" + oMission.m_nMissionID;
                missionElem.state = oMission.m_yStatus.ToString();
                missionElem.param0 = oMission.m_nParam[0].ToString();

                playerGuidElem.dic.Add(missionName, missionElem);
            }

            clientMissionData.dic.Add(playerGuidName, playerGuidElem);
        }

        XmlHelper.XmlSerializeToFile(clientMissionData, DataPath + MissionClientName, new UTF8Encoding(false));

#else

        XmlDocument xml = new XmlDocument();
        XmlElement root = xml.CreateElement("ClientMissionData");
        xml.AppendChild(root);
        foreach (string keys in m_MissionClientData.Keys)
        {
            XmlElement curUserElement = xml.CreateElement("PlayerGuid" + keys);
            root.AppendChild(curUserElement);

            foreach (Games.Mission.CurOwnMission oMission in m_MissionClientData[keys])
            {
                XmlElement curMissionElement = xml.CreateElement("Mission" + oMission.m_nMissionID);
                curUserElement.AppendChild(curMissionElement);
                XmlElement curStateElement = xml.CreateElement("State");
                curStateElement.InnerText = oMission.m_yStatus.ToString();
                curMissionElement.AppendChild(curStateElement);
                XmlElement curParam0Element = xml.CreateElement("Param0");
                curParam0Element.InnerText = oMission.m_nParam[0].ToString();
                curMissionElement.AppendChild(curParam0Element);
            }
        }
        xml.Save(DataPath + MissionClientName);
#endif
    }

    // 删除 客户端任务
    public static void DelClientMission(string strGuid, int nMissionID)
    {
        m_MissionClientData = GetClientMissionData();

        if (!m_MissionClientData.ContainsKey(strGuid))
        {
            return;
        }

        int nIndex = -1;
        for (int i = 0; i < m_MissionClientData[strGuid].Count; i++)
        {
            if (nMissionID == m_MissionClientData[strGuid][i].m_nMissionID)
            {
                nIndex = i;
                break;
            }
        }
        if (nIndex < 0 || nIndex >= m_MissionClientData[strGuid].Count)
        {
            return;
        }

        // 删除
        m_MissionClientData[strGuid].RemoveAt(nIndex);

        if (m_MissionClientData[strGuid].Count <= 0)
        {
            m_MissionClientData.Remove(strGuid);
        }

        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }

#if UNITY_WP8
        ClientMissionData clientMissionData = new ClientMissionData();
        clientMissionData.dic = new Dictionary<string, PlayerGuidElement>();

        foreach (string keys in m_MissionClientData.Keys)
        {
            PlayerGuidElement playerGuidElem = new PlayerGuidElement();
            playerGuidElem.dic = new Dictionary<string, MissionElement>();
            string playerGuidName = "PlayerGuid" + keys;

            foreach (Games.Mission.CurOwnMission oMission in m_MissionClientData[keys])
            {
                MissionElement missionElem = new MissionElement();
                string missionName = "Mission" + oMission.m_nMissionID;
                missionElem.state = oMission.m_yStatus.ToString();
                missionElem.param0 = oMission.m_nParam[0].ToString();

                playerGuidElem.dic.Add(missionName, missionElem);
            }

            clientMissionData.dic.Add(playerGuidName, playerGuidElem);
        }

        XmlHelper.XmlSerializeToFile(clientMissionData, DataPath + MissionClientName, new UTF8Encoding(false));

#else

        XmlDocument xml = new XmlDocument();
        XmlElement root = xml.CreateElement("ClientMissionData");
        xml.AppendChild(root);
        foreach (string keys in m_MissionClientData.Keys)
        {
            XmlElement curUserElement = xml.CreateElement("PlayerGuid" + keys);
            root.AppendChild(curUserElement);

            foreach (Games.Mission.CurOwnMission oMission in m_MissionClientData[keys])
            {
                XmlElement curMissionElement = xml.CreateElement("Mission" + oMission.m_nMissionID);
                curUserElement.AppendChild(curMissionElement);
                XmlElement curStateElement = xml.CreateElement("State");
                curStateElement.InnerText = oMission.m_yStatus.ToString();
                curMissionElement.AppendChild(curStateElement);
                XmlElement curParam0Element = xml.CreateElement("Param0");
                curParam0Element.InnerText = oMission.m_nParam[0].ToString();
                curMissionElement.AppendChild(curParam0Element);
            }
        }
        xml.Save(DataPath + MissionClientName);
#endif
    }

    // 从配置文件读取账号数据，保存在Map中
    public static Dictionary<string, List<Games.Mission.CurOwnMission>> GetClientMissionData()
    {
        if (null != m_MissionClientData)
        {
            return m_MissionClientData;
        }

        m_MissionClientData = new Dictionary<string, List<Games.Mission.CurOwnMission>>();

#if UNITY_WP8
        ClientMissionData clientMissionData = XmlHelper.XmlDeserializeFromFile<ClientMissionData>(DataPath + MissionClientName, new UTF8Encoding(false));

        if (null == clientMissionData)
        {
            return m_MissionClientData;
        }

        foreach (KeyValuePair<string, PlayerGuidElement> playerGuidIter in clientMissionData.dic)
        {
            List<Games.Mission.CurOwnMission> curMissionList = new List<Games.Mission.CurOwnMission>();
            m_MissionClientData.Add(playerGuidIter.Key.Substring(10), curMissionList);

            foreach (KeyValuePair<string, MissionElement> missionIter in playerGuidIter.Value.dic)
            {
                Games.Mission.CurOwnMission oMission = new Games.Mission.CurOwnMission();
                oMission.CleanUp();

                curMissionList.Add(oMission);

                string strMissionID = missionIter.Key.Substring(7);
                oMission.m_nMissionID = int.Parse(strMissionID);

                string strState = missionIter.Value.state;
                oMission.m_yStatus = byte.Parse(strState);

                string strParam0 = missionIter.Value.param0;
                oMission.m_nParam[0] = int.Parse(strParam0);
            }
        }

#else

        XmlDocument xml = new XmlDocument();
        try
        {
            xml.Load(DataPath + MissionClientName);
        }
        catch (System.Exception)
        {
            return m_MissionClientData;
        }

        foreach (XmlElement curUserElement in xml.FirstChild.ChildNodes)
        {
            List<Games.Mission.CurOwnMission> curMissionList = new List<Games.Mission.CurOwnMission>();
            m_MissionClientData.Add(curUserElement.Name.Substring(10), curMissionList);

            foreach (XmlElement curMissionElement in curUserElement)
            {
                Games.Mission.CurOwnMission oMission = new Games.Mission.CurOwnMission();
                oMission.CleanUp();
                curMissionList.Add(oMission);
                string strMissionID = curMissionElement.Name.Substring(7);
                oMission.m_nMissionID = int.Parse(strMissionID);

                foreach (XmlElement curElement in curMissionElement)
                {
                    if (curElement.Name == "State")
                    {
                        string strState = curElement.InnerText;
                        oMission.m_yStatus = byte.Parse(strState);
                    }
                    else if (curElement.Name == "Param0")
                    {
                        string strParam0 = curElement.InnerText;
                        oMission.m_nParam[0] = int.Parse(strParam0);
                    }
                }
            }
        }
#endif

        return m_MissionClientData;
    }

#if UNITY_WP8
    public class AutoElement : IXmlSerializable
    {
        public string AutoPickUp { get; set; }
        public string AutoTaem { get; set; }
        public string AutoJoinTaem { get; set; }
        public string AutoHpPercent { get; set; }
        public string AutoHpID { get; set; }
        public string AutoMpPercent { get; set; }
        public string AutoMpID { get; set; }
        public string AutoBuyDrug { get; set; }
        public string AutoNotice { get; set; }
        public string AutoIsSelectDrug { get; set; }
        public string AutoEquipGuid { get; set; }
		public string[] AutoSkillID = new string[(int)SKILLDEFINE.MAX_SKILLNUM];

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            reader.Read();
            reader.ReadStartElement("AutoPickUp");
            AutoPickUp = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("AutoTaem");
            AutoTaem = reader.ReadContentAsString();
            reader.ReadEndElement();

             reader.ReadStartElement("AutoJoinTaem");
            AutoJoinTaem = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("AutoHpPercent");
            AutoHpPercent = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("AutoHpID");
            AutoHpID = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("AutoMpPercent");
            AutoMpPercent = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("AutoMpID");
            AutoMpID = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("AutoBuyDrug");
            AutoBuyDrug = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("AutoNotice");
            AutoNotice = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("AutoIsSelectDrug");
            AutoIsSelectDrug = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("AutoEquipGuid");
            AutoEquipGuid = reader.ReadContentAsString();
			reader.ReadEndElement();

			for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
			{
				string Elementkeystr = string.Format("keyAutoSelSkillID{0}", i);

				reader.ReadStartElement(Elementkeystr);
				AutoSkillID[i] = reader.ReadContentAsString();
				reader.ReadEndElement();
			}
		}
		
		public void WriteXml(System.Xml.XmlWriter writer)
		{
			writer.WriteElementString("AutoPickUp", AutoPickUp);
			writer.WriteElementString("AutoTaem", AutoTaem);
			writer.WriteElementString("AutoJoinTaem", AutoJoinTaem);
			writer.WriteElementString("AutoHpPercent", AutoHpPercent);
            writer.WriteElementString("AutoHpID", AutoHpID);
            writer.WriteElementString("AutoMpPercent", AutoMpPercent);
            writer.WriteElementString("AutoMpID", AutoMpID);
            writer.WriteElementString("AutoBuyDrug", AutoBuyDrug);
            writer.WriteElementString("AutoNotice", AutoNotice);
            writer.WriteElementString("AutoIsSelectDrug", AutoIsSelectDrug);
            writer.WriteElementString("AutoEquipGuid", AutoEquipGuid);

			for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
			{
				string Elementkeystr = string.Format("keyAutoSelSkillID{0}", i);

				writer.WriteElementString(Elementkeystr, AutoSkillID[i]);
			}
        }
    }


    public class AutoInfo : IXmlSerializable
    {
        public Dictionary<string, AutoElement> dic { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            dic = new Dictionary<string, AutoElement>();

            if (reader.MoveToContent() == XmlNodeType.Element && "AutoInfo" == reader.LocalName)
            {
                reader.Read();
                while (reader.MoveToContent() == XmlNodeType.Element)
                {
                    string name = reader.LocalName;

                    reader.Read();
                    if (reader.MoveToContent() == XmlNodeType.Element && "Auto" == reader.LocalName)
                    {
                        AutoElement elem = new AutoElement();
                        elem.ReadXml(reader);
                        dic.Add(name, elem);
                        reader.Read();
                    }

                    reader.Read();
                }
            }
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            foreach (KeyValuePair<string, AutoElement> elem in dic)
            {
                writer.WriteStartElement(elem.Key);
                writer.WriteStartElement("Auto");
                elem.Value.WriteXml(writer);
                writer.WriteEndElement();
                writer.WriteEndElement();
            }
        }

    }


#endif

    // 将角色个人设置信息保存在XML文件中
    public static void AddPlayerAuto(string sGUID, PlayerAuto curData)
    {
        m_AutoConfigMap = GetPlayerAutoList();

        if (m_AutoConfigMap.ContainsKey(sGUID))
        {
            m_AutoConfigMap.Remove(sGUID);
        }

        m_AutoConfigMap.Add(sGUID, curData);

        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }

#if UNITY_WP8
        AutoInfo autoInfo = new AutoInfo();
        autoInfo.dic = new Dictionary<string, AutoElement>();

        foreach (string keys in m_AutoConfigMap.Keys)
        {
            string name = "GUID" + keys;
            PlayerAuto curList = m_AutoConfigMap[keys];

            if (curList != null)
            {
                AutoElement elem = new AutoElement();
                elem.AutoPickUp = curList.AutoPickUp.ToString();
                elem.AutoTaem = curList.AutoInviteTeamAccept.ToString();
                elem.AutoJoinTaem = curList.AutoJoinTeamAccept.ToString();
                elem.AutoHpPercent = curList.AutoHpPercent.ToString();
                elem.AutoHpID = curList.AutoHpID.ToString();
                elem.AutoMpPercent = curList.AutoMpPercent.ToString();
                elem.AutoMpID = curList.AutoMpID.ToString();
                elem.AutoBuyDrug = curList.AutoBuyDrug.ToString();
                elem.AutoNotice = curList.AutoNotice.ToString();
                elem.AutoIsSelectDrug = curList.AutoIsSelectDrug.ToString();
                elem.AutoEquipGuid = curList.AutoEquipGuid.ToString();

				for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
				{
					elem.AutoSkillID[i] = curList.AutoSkillID[i].ToString();
				}

                autoInfo.dic.Add(name, elem);
            }
        }

        XmlHelper.XmlSerializeToFile(autoInfo, DataPath + AutoConfigFileName, new UTF8Encoding(false));
#else
        XmlDocument xml = new XmlDocument();
        XmlElement root = xml.CreateElement("AutoInfo");
        xml.AppendChild(root);
        foreach (string keys in m_AutoConfigMap.Keys)
        {
            XmlElement curGUIDElement = xml.CreateElement("GUID" + keys);
            root.AppendChild(curGUIDElement);
            PlayerAuto curList = m_AutoConfigMap[keys];
            if (null != curList)
            {
                //foreach (PlayerAuto curAutoData in curList)
                {
                    XmlElement curAutoElement = xml.CreateElement("Auto");
                    curGUIDElement.AppendChild(curAutoElement);

                    //                     XmlElement curAutoOpenElement = xml.CreateElement("AutoOpen");
                    //                     curAutoOpenElement.InnerText = curList.AutoFightOpenToggle.ToString();
                    //                     curAutoElement.AppendChild(curAutoOpenElement);

                    XmlElement curAutoPickUpElement = xml.CreateElement("AutoPickUp");
                    curAutoPickUpElement.InnerText = curList.AutoPickUp.ToString();
                    curAutoElement.AppendChild(curAutoPickUpElement);

                    XmlElement curAutoTaemElement = xml.CreateElement("AutoTaem");
                    curAutoTaemElement.InnerText = curList.AutoInviteTeamAccept.ToString();
                    curAutoElement.AppendChild(curAutoTaemElement);

                    XmlElement curAutoJoinTaemElement = xml.CreateElement("AutoJoinTaem");
                    curAutoJoinTaemElement.InnerText = curList.AutoJoinTeamAccept.ToString();
                    curAutoElement.AppendChild(curAutoJoinTaemElement);

                    XmlElement curAutoHpPercentElement = xml.CreateElement("AutoHpPercent");
                    curAutoHpPercentElement.InnerText = curList.AutoHpPercent.ToString();
                    curAutoElement.AppendChild(curAutoHpPercentElement);

                    XmlElement curAutoHpIDElement = xml.CreateElement("AutoHpID");
                    curAutoHpIDElement.InnerText = curList.AutoHpID.ToString();
                    curAutoElement.AppendChild(curAutoHpIDElement);

                    XmlElement curAutoMpPercentElement = xml.CreateElement("AutoMpPercent");
                    curAutoMpPercentElement.InnerText = curList.AutoMpPercent.ToString();
                    curAutoElement.AppendChild(curAutoMpPercentElement);

                    XmlElement curAutoMpIDElement = xml.CreateElement("AutoMpID");
                    curAutoMpIDElement.InnerText = curList.AutoMpID.ToString();
                    curAutoElement.AppendChild(curAutoMpIDElement);

                    XmlElement curAutoBuyDrugElement = xml.CreateElement("AutoBuyDrug");
                    curAutoBuyDrugElement.InnerText = curList.AutoBuyDrug.ToString();
                    curAutoElement.AppendChild(curAutoBuyDrugElement);

                    //                     XmlElement curAutoRadiusElement = xml.CreateElement("AutoRadius");
                    //                     curAutoRadiusElement.InnerText = curList.AutoRadius.ToString();
                    //                     curAutoElement.AppendChild(curAutoRadiusElement);

                    XmlElement curAutoNoticeElement = xml.CreateElement("AutoNotice");
                    curAutoNoticeElement.InnerText = curList.AutoNotice.ToString();
                    curAutoElement.AppendChild(curAutoNoticeElement);

                    XmlElement curAutoIsSelectDrug = xml.CreateElement("AutoIsSelectDrug");
                    curAutoIsSelectDrug.InnerText = curList.AutoIsSelectDrug.ToString();
                    curAutoElement.AppendChild(curAutoIsSelectDrug);

                    XmlElement curAutoEquipGuid = xml.CreateElement("AutoEquipGuid");
                    curAutoEquipGuid.InnerText = curList.AutoEquipGuid.ToString();
                    curAutoElement.AppendChild(curAutoEquipGuid);

					XmlElement curAutoActivityElement = xml.CreateElement("AutoActivity");
					curAutoActivityElement.InnerText = curList.AutoJoinActivity.ToString();
					curAutoElement.AppendChild(curAutoActivityElement);

                    for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
                    {
                        string Elementkeystr = string.Format("keyAutoSelSkillID{0}", i);
                        XmlElement curkeyAutoSelSkillIDElement = xml.CreateElement(Elementkeystr);
                        if (curList.AutoSkillID == null)
                        {
                            curkeyAutoSelSkillIDElement.InnerText = (-1).ToString();
                        }
                        else
                        {
                            curkeyAutoSelSkillIDElement.InnerText = curList.AutoSkillID[i].ToString();
                        }

                        curAutoElement.AppendChild(curkeyAutoSelSkillIDElement);
                    }
                }
            }
        }
        xml.Save(DataPath + AutoConfigFileName);
#endif
    }

    // 从配置文件读取角色个人设置数据，保存在Map中
    public static Dictionary<string, PlayerAuto> GetPlayerAutoList()
    {
        if (null != m_AutoConfigMap)
        {
            return m_AutoConfigMap;
        }

        m_AutoConfigMap = new Dictionary<string, PlayerAuto>();

#if UNITY_WP8
        AutoInfo autoInfo = XmlHelper.XmlDeserializeFromFile<AutoInfo>(DataPath + AutoConfigFileName, new UTF8Encoding(false));
        if (null == autoInfo)
        {
            return m_AutoConfigMap;
        }

        foreach (KeyValuePair<string, AutoElement> iter in autoInfo.dic)
        {
            string guid = iter.Key.Substring(4);
            AutoElement elem = iter.Value;

            PlayerAuto curAutoData = new PlayerAuto(0, false, false, 0, 0, false, 0, -1, -1, false, GlobeVar.INVALID_GUID,null);
            int.TryParse(elem.AutoPickUp, out curAutoData.AutoPickUp);
            int.TryParse(elem.AutoTaem, out curAutoData.AutoInviteTeamAccept);
            int.TryParse(elem.AutoJoinTaem, out curAutoData.AutoJoinTeamAccept);
            int.TryParse(elem.AutoHpPercent, out curAutoData.AutoHpPercent);
            int.TryParse(elem.AutoHpID, out curAutoData.AutoHpID);
            int.TryParse(elem.AutoMpPercent, out curAutoData.AutoMpPercent);
            int.TryParse(elem.AutoMpID, out curAutoData.AutoMpID);
            int.TryParse(elem.AutoBuyDrug, out curAutoData.AutoBuyDrug);
            int.TryParse(elem.AutoNotice, out curAutoData.AutoNotice);
            int.TryParse(elem.AutoIsSelectDrug, out curAutoData.AutoIsSelectDrug);
            ulong.TryParse(elem.AutoEquipGuid, out curAutoData.AutoEquipGuid);

			for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
			{
				int nValue = -1;
				int.TryParse(elem.AutoSkillID[i], out nValue);
				curAutoData.AutoSkillID[i] = nValue;	
			}
			
			m_AutoConfigMap.Add(guid, curAutoData);
		}
		
#else
        XmlDocument xml = new XmlDocument();
        try
        {
            xml.Load(DataPath + AutoConfigFileName);
        }
        catch (System.Exception)
        {
            return m_AutoConfigMap;
        }

        foreach (XmlElement elemGUID in xml.FirstChild.ChildNodes)
        {
            //PlayerAuto curList;
            string guid = elemGUID.Name.Substring(4);
            //m_AutoConfigMap.Add(guid, curList);

            foreach (XmlElement autoInfo in elemGUID)
            {
                if (autoInfo.Name == "Auto")
                {
                    PlayerAuto curAutoData = new PlayerAuto(0, false, false, false,0, 0, false, 0, -1, -1, false, GlobeVar.INVALID_GUID, null);
                    foreach (XmlElement elemDetail in autoInfo)
                    {
                        if (elemDetail.Name == "AutoPickUp")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoPickUp);
                        }
                        else if (elemDetail.Name == "AutoTaem")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoInviteTeamAccept);
                        }
                        else if (elemDetail.Name == "AutoJoinTaem")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoJoinTeamAccept);
                        }
						else if( elemDetail.Name == "AutoActivity")
						{
							string typeValue = elemDetail.InnerText;
							int.TryParse(typeValue, out curAutoData.AutoJoinActivity);
						}
                        else if (elemDetail.Name == "AutoHpPercent")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoHpPercent);
                        }
                        else if (elemDetail.Name == "AutoHpID")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoHpID);
                        }
                        else if (elemDetail.Name == "AutoMpPercent")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoMpPercent);
                        }
                        else if (elemDetail.Name == "AutoMpID")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoMpID);
                        }
                        else if (elemDetail.Name == "AutoBuyDrug")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoBuyDrug);
                        }
                        //                         else if (elemDetail.Name == "AutoRadius")
                        //                         {
                        //                             string typeValue = elemDetail.InnerText;
                        //                             int.TryParse(typeValue, out curAutoData.AutoRadius);
                        //                         }
                        else if (elemDetail.Name == "AutoNotice")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoNotice);
                        }
                        else if (elemDetail.Name == "AutoIsSelectDrug")
                        {
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out curAutoData.AutoIsSelectDrug);
                        }
                        else if (elemDetail.Name == "AutoEquipGuid")
                        {
                            string typeValue = elemDetail.InnerText;
                            ulong.TryParse(typeValue, out curAutoData.AutoEquipGuid);
                        }
                        else
                        {
                            for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
                            {
                                string Elementkeystr = string.Format("keyAutoSelSkillID{0}", i);
                                if (elemDetail.Name == Elementkeystr)
                                {
                                    int nValue = -1;
                                    string typeValue = elemDetail.InnerText;
                                    int.TryParse(typeValue, out nValue);
                                    curAutoData.AutoSkillID[i] = nValue;
                                }
                            }
                        }
                        // curList.Add(curAutoData);                       
                    }
                    m_AutoConfigMap.Add(guid, curAutoData);
                }
            }
        }
#endif
        return m_AutoConfigMap;
    }

#if UNITY_WP8
    public class RestaurantElement : IXmlSerializable
    {
        public string RestaurantFilterExp { get; set; }
        public string RestaurantFilterCoin { get; set; }
        public string RestaurantFilterMeterial { get; set; }
        public string []RestaurantFilterLv = new string[RestaurantData.FoodLevelMax];
        

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            reader.Read();
            reader.ReadStartElement("keyRestaurantFilterExp");
            RestaurantFilterExp = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("keyRestaurantFilterCoin");
            RestaurantFilterCoin = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("keyRestaurantFilterMeterial");
            RestaurantFilterMeterial = reader.ReadContentAsString();
            reader.ReadEndElement();

            for (int i = 1; i <= RestaurantData.FoodLevelMax; i++)
            {
                string Elementkeystr = string.Format("keyRestaurantFilterLv{0}", i);
                reader.ReadStartElement(Elementkeystr);
                RestaurantFilterLv[i-1] = reader.ReadContentAsString();
                reader.ReadEndElement();          
            }        
               
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            writer.WriteElementString("keyRestaurantFilterExp", RestaurantFilterExp);
            writer.WriteElementString("keyRestaurantFilterCoin", RestaurantFilterCoin);
            writer.WriteElementString("keyRestaurantFilterMeterial", RestaurantFilterMeterial);
            for (int i = 1; i <= RestaurantData.FoodLevelMax; i++)
            {
                string Elementkeystr = string.Format("keyRestaurantFilterLv{0}", i);
                writer.WriteElementString(Elementkeystr, RestaurantFilterLv[i - 1]);
            }                     
        }
    }


    public class RestaurantConfigInfo : IXmlSerializable
    {
        public Dictionary<string, RestaurantElement> dic { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            dic = new Dictionary<string, RestaurantElement>();
            if (reader.MoveToContent() == XmlNodeType.Element && "RestaurantInfo" == reader.LocalName)
            {
                reader.Read();
                while (reader.MoveToContent() == XmlNodeType.Element)
                {
                    string name = reader.LocalName;

                    reader.Read();
                    if (reader.MoveToContent() == XmlNodeType.Element && "Restaurant" == reader.LocalName)
                    {
                        RestaurantElement elem = new RestaurantElement();
                        elem.ReadXml(reader);
                        dic.Add(name, elem);
                        reader.Read();
                    }

                    reader.Read();
                }
            }
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            foreach (KeyValuePair<string, RestaurantElement> elem in dic)
            {
                writer.WriteStartElement(elem.Key);
                writer.WriteStartElement("Restaurant");
                elem.Value.WriteXml(writer);
                writer.WriteEndElement();
                writer.WriteEndElement();
            }
        }

    }


#endif


    // 将角色个人设置信息保存在XML文件中
    public static void AddRestaurantConfig(string sGUID, RestaurantConfigData curData)
    {
        m_RestaurantConfigMap = GetRestaurantConfigList();
        if (null == m_RestaurantConfigMap)
        {
            return;
        }
        if (m_RestaurantConfigMap.ContainsKey(sGUID))
        {
            m_RestaurantConfigMap.Remove(sGUID);
        }

        m_RestaurantConfigMap.Add(sGUID, curData);

        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }

#if UNITY_WP8

        RestaurantConfigInfo oRestaurantConfigInfo = new RestaurantConfigInfo();
        oRestaurantConfigInfo.dic = new Dictionary<string, RestaurantElement>();

        foreach (string keys in m_RestaurantConfigMap.Keys)
        {
            string name = "GUID" + keys;
            RestaurantConfigData curList = m_RestaurantConfigMap[keys];

            if (curList != null)
            {
                RestaurantElement elem = new RestaurantElement();
                elem.RestaurantFilterExp = curList.RestaurantFilterExp.ToString();
                elem.RestaurantFilterCoin = curList.RestaurantFilterCoin.ToString();
                elem.RestaurantFilterMeterial = curList.RestaurantFilterMeterial.ToString();

                for (int i = 0; i < RestaurantData.FoodLevelMax && i < elem.RestaurantFilterLv.Length; i++)
                {
                    elem.RestaurantFilterLv[i] = curList.GetRestaurantFilterLv(i+1).ToString();
                }       
                oRestaurantConfigInfo.dic.Add(name, elem);
            }
        }

        XmlHelper.XmlSerializeToFile(oRestaurantConfigInfo, DataPath + RestaurantConfigFileName, new UTF8Encoding(false));
#else
        XmlDocument xml = new XmlDocument();
        XmlElement root = xml.CreateElement("RestaurantInfo");
        xml.AppendChild(root);
        foreach (string keys in m_RestaurantConfigMap.Keys)
        {
            XmlElement curGUIDElement = xml.CreateElement("GUID" + keys);
            root.AppendChild(curGUIDElement);
            RestaurantConfigData curList = m_RestaurantConfigMap[keys];
            if (null != curList)
            {

                XmlElement curRestaurantElement = xml.CreateElement("Restaurant");
                curGUIDElement.AppendChild(curRestaurantElement);


                XmlElement curRestaurantFilterExpElement = xml.CreateElement("keyRestaurantFilterExp");
                curRestaurantFilterExpElement.InnerText = curList.RestaurantFilterExp.ToString();
                curRestaurantElement.AppendChild(curRestaurantFilterExpElement);

                XmlElement curRestaurantFilterCoinElement = xml.CreateElement("keyRestaurantFilterCoin");
                curRestaurantFilterCoinElement.InnerText = curList.RestaurantFilterCoin.ToString();
                curRestaurantElement.AppendChild(curRestaurantFilterCoinElement);

                XmlElement curRestaurantFilterMeterialElement = xml.CreateElement("keyRestaurantFilterMeterial");
                curRestaurantFilterMeterialElement.InnerText = curList.RestaurantFilterMeterial.ToString();
                curRestaurantElement.AppendChild(curRestaurantFilterMeterialElement);

                for (int i = 1; i <= RestaurantData.FoodLevelMax; i++)
                {
                    string Elementkeystr = string.Format("keyRestaurantFilterLv{0}", i);
                    XmlElement curRestaurantFilterLvElement = xml.CreateElement(Elementkeystr);
                    curRestaurantFilterLvElement.InnerText = curList.GetRestaurantFilterLv(i).ToString();
                    curRestaurantElement.AppendChild(curRestaurantFilterLvElement);
                }
            }
        }
        xml.Save(DataPath + RestaurantConfigFileName);
#endif
    }

    // 从配置文件读取角色个人设置数据，保存在Map中
    public static Dictionary<string, RestaurantConfigData> GetRestaurantConfigList()
    {
        if (m_RestaurantConfigMap != null)
        {
            return m_RestaurantConfigMap;
        }

        m_RestaurantConfigMap = new Dictionary<string, RestaurantConfigData>();

#if UNITY_WP8
        RestaurantConfigInfo oRestaurantConfigInfo = XmlHelper.XmlDeserializeFromFile<RestaurantConfigInfo>(DataPath + RestaurantConfigFileName, new UTF8Encoding(false));
        if (null == oRestaurantConfigInfo)
        {
            return m_RestaurantConfigMap;
        }

        foreach (KeyValuePair<string, RestaurantElement> iter in oRestaurantConfigInfo.dic)
        {
            string guid = iter.Key.Substring(4);
            RestaurantElement elem = iter.Value;

            RestaurantConfigData curConfigData = new RestaurantConfigData();
            int nValue = 1;
            int.TryParse(elem.RestaurantFilterExp, out nValue);
            curConfigData.RestaurantFilterExp = nValue;

            nValue = 1;
            int.TryParse(elem.RestaurantFilterCoin, out nValue);
            curConfigData.RestaurantFilterCoin = nValue;

            nValue = 1;
            int.TryParse(elem.RestaurantFilterMeterial, out nValue);
            curConfigData.RestaurantFilterMeterial = nValue;

            for (int i = 0; i < RestaurantData.FoodLevelMax && i < elem.RestaurantFilterLv.Length; i++)
            {
                nValue = 1;
                int.TryParse(elem.RestaurantFilterLv[i], out nValue);
                curConfigData.SetRestaurantFilterLv(i + 1, nValue);
            }

            m_RestaurantConfigMap.Add(guid, curConfigData);
        }
#else
        XmlDocument xml = new XmlDocument();
        try
        {
            xml.Load(DataPath + RestaurantConfigFileName);
        }
        catch (System.Exception)
        {
            return m_RestaurantConfigMap;
        }

        foreach (XmlElement elemGUID in xml.FirstChild.ChildNodes)
        {
            string guid = elemGUID.Name.Substring(4);
            foreach (XmlElement RestaurantElem in elemGUID)
            {
                if (RestaurantElem.Name == "Restaurant")
                {
                    RestaurantConfigData curRrestaurantData = new RestaurantConfigData();
                    foreach (XmlElement elemDetail in RestaurantElem)
                    {
                        if (elemDetail.Name == "keyRestaurantFilterExp")
                        {
                            int nValue = 1;
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out nValue);
                            curRrestaurantData.RestaurantFilterExp = nValue;
                        }
                        else if (elemDetail.Name == "keyRestaurantFilterCoin")
                        {
                            int nValue = 1;
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out nValue);
                            curRrestaurantData.RestaurantFilterCoin = nValue;
                        }
                        else if (elemDetail.Name == "keyRestaurantFilterMeterial")
                        {
                            int nValue = 1;
                            string typeValue = elemDetail.InnerText;
                            int.TryParse(typeValue, out nValue);
                            curRrestaurantData.RestaurantFilterMeterial = nValue;
                        }
                        else
                        {
                            for (int i = 1; i <= RestaurantData.FoodLevelMax; i++)
                            {
                                string Elementkeystr = string.Format("keyRestaurantFilterLv{0}", i);
                                if (elemDetail.Name == Elementkeystr)
                                {
                                    int nValue = 1;
                                    string typeValue = elemDetail.InnerText;
                                    int.TryParse(typeValue, out nValue);
                                    curRrestaurantData.SetRestaurantFilterLv(i, nValue);
                                }
                            }
                        }
                    }
                    m_RestaurantConfigMap.Add(guid, curRrestaurantData);
                }
            }
        }
#endif
        return m_RestaurantConfigMap;
    }



#if UNITY_WP8
    public class SkillIndexElement : IXmlSerializable
    {
        public string SkillIndex { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            reader.Read();
            SkillIndex = reader.ReadContentAsString();
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            writer.WriteElementString("SkillIndex", SkillIndex);
        }
    }

    public class GUIDElement : IXmlSerializable
    {
        public List<SkillIndexElement> list { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            list = new List<SkillIndexElement>();
            while (reader.MoveToContent() == XmlNodeType.Element && reader.LocalName == "SkillIndex")
            {
                SkillIndexElement elem = new SkillIndexElement();
                elem.ReadXml(reader);
                list.Add(elem);
                reader.Read();
            }
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            foreach (SkillIndexElement elem in list)
            {
                elem.WriteXml(writer);
            }
        }
    }

    public class SkillBarSetInfo : IXmlSerializable
    {
        public Dictionary<string, GUIDElement> dic { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            dic = new Dictionary<string, GUIDElement>();

            if (reader.MoveToContent() == XmlNodeType.Element && "SkillBarSetInfo" == reader.LocalName)
            {
                reader.Read();
                while (reader.MoveToContent() == XmlNodeType.Element)
                {
                    string name = reader.LocalName;
                    GUIDElement elem = new GUIDElement();
                    reader.Read();
                    elem.ReadXml(reader);
                    dic.Add(name, elem);
                    reader.Read();
                }
            }
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            foreach (KeyValuePair<string, GUIDElement> elem in dic)
            {
                writer.WriteStartElement(elem.Key);
                elem.Value.WriteXml(writer);
                writer.WriteEndElement();
            }
        }
    }

#endif

    // 将技能栏设置信息保存在XML文件中
    public static void AddSkillBarSetInfo(string guid, SkillBarInfo[] curData)
    {
        m_SkillBarSetMap = GetSkillBarSetInfo();
        if (m_SkillBarSetMap.ContainsKey(guid))
        {
            m_SkillBarSetMap.Remove(guid);
        }
        m_SkillBarSetMap.Add(guid, curData);
        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }
#if UNITY_WP8
        SkillBarSetInfo skillBarSetInfo = new SkillBarSetInfo();
        skillBarSetInfo.dic = new Dictionary<string, GUIDElement>();

        foreach (string keys in m_SkillBarSetMap.Keys)
        {
            string name = "GUID" + keys;
            SkillBarInfo[] _skillBarInfo = m_SkillBarSetMap[keys];

            if (null != _skillBarInfo)
            {
                GUIDElement guidElem = new GUIDElement();
                guidElem.list = new List<SkillIndexElement>();
                
                for (int i = 0; i < _skillBarInfo.Length; ++i)
                {
                    SkillIndexElement skillIndexElem = new SkillIndexElement();
                    skillIndexElem.SkillIndex = _skillBarInfo[i].SkillIndex.ToString();
                    guidElem.list.Add(skillIndexElem);
                }

                skillBarSetInfo.dic.Add(name, guidElem);
            }
        }

        XmlHelper.XmlSerializeToFile(skillBarSetInfo, DataPath + SkillBarSetFileName, new UTF8Encoding(false));

#else
        XmlDocument xml = new XmlDocument();
        XmlElement root = xml.CreateElement("SkillBarSetInfo");
        xml.AppendChild(root);
        foreach (string keys in m_SkillBarSetMap.Keys)
        {
            XmlElement curGUIDElement = xml.CreateElement("GUID" + keys);
            root.AppendChild(curGUIDElement);
            SkillBarInfo[] _skillBarInfo = m_SkillBarSetMap[keys];
            if (null != _skillBarInfo)
            {
                for (int i = 0; i < _skillBarInfo.Length; i++)
                {
                    XmlElement curAutoElement = xml.CreateElement("SkillIndex");
                    curAutoElement.InnerText = _skillBarInfo[i].SkillIndex.ToString();
                    curGUIDElement.AppendChild(curAutoElement);
                }
            }
        }
        xml.Save(DataPath + SkillBarSetFileName);
#endif
    }

    // 从配置文件读取角色数据，保存在Map中
    public static Dictionary<string, SkillBarInfo[]> GetSkillBarSetInfo()
    {
        if (null != m_SkillBarSetMap)
        {
            return m_SkillBarSetMap;
        }

        m_SkillBarSetMap = new Dictionary<string, SkillBarInfo[]>();
#if UNITY_WP8
        SkillBarSetInfo skillBarSetInfo = XmlHelper.XmlDeserializeFromFile<SkillBarSetInfo>(DataPath + SkillBarSetFileName, new UTF8Encoding(false));
        if (null == skillBarSetInfo)
        {
            return m_SkillBarSetMap;
        }

        foreach (KeyValuePair<string, GUIDElement> iter in skillBarSetInfo.dic)
        {
            string guid = iter.Key.Substring(4);
            GUIDElement guidElem = iter.Value;

            SkillBarInfo[] _skillBarInfo = new SkillBarInfo[(int)SKILLBAR.MAXSKILLBARNUM];
            for (int i = 0; i < (int)SKILLBAR.MAXSKILLBARNUM; i++)
            {
                _skillBarInfo[i] = new SkillBarInfo();
            }

            int nCount = 0;
            foreach (SkillIndexElement skillIndexElem in guidElem.list)
            {
                if (nCount >= 0 && nCount < _skillBarInfo.Length)
                {
                    string typeValue = skillIndexElem.SkillIndex;
                    _skillBarInfo[nCount].SkillIndex = Convert.ToInt32(typeValue);
                    nCount++;
                }
            }
            m_SkillBarSetMap.Add(guid, _skillBarInfo);

        }    

#else
        XmlDocument xml = new XmlDocument();
        try
        {
            xml.Load(DataPath + SkillBarSetFileName);
        }
        catch (System.Exception)
        {
            return m_SkillBarSetMap;
        }

        foreach (XmlElement elemGUID in xml.FirstChild.ChildNodes)
        {
            string guid = elemGUID.Name.Substring(4);
            SkillBarInfo[] _skillBarInfo = new SkillBarInfo[(int)SKILLBAR.MAXSKILLBARNUM];
            for (int i = 0; i < (int)SKILLBAR.MAXSKILLBARNUM; i++)
            {
                _skillBarInfo[i] = new SkillBarInfo();
                _skillBarInfo[i].CleanUp();
            }
            int nCount = 0;
            foreach (XmlElement _ownSkillElement in elemGUID)
            {
                if (_ownSkillElement.Name == "SkillIndex")
                {
                    if (nCount >= 0 && nCount < _skillBarInfo.Length)
                    {
                        string typeValue = _ownSkillElement.InnerText;
                        _skillBarInfo[nCount].SkillIndex = Convert.ToInt32(typeValue);
                        nCount++;
                    }
                }
            }
            m_SkillBarSetMap.Add(guid, _skillBarInfo);
        }
#endif
        return m_SkillBarSetMap;
    }
    public static void SetSystemDefault()
    {
        // 经过测试始终Android下始终关闭不掉FastBloom，所以在这里进行一次处理
//#if UNITY_ANDROID && !UNITY_EDITOR
//            if (PlayerPreferenceData.SystemTableau == 0)    //安卓第一次进入
//            {
//                PlayerPreferenceData.SystemFloodlight = 0;
//                PlayerPreferenceData.SystemWallVisionEnable = false;

//                string ret = AndroidHelper.platformHelper("shouldShowWarnning");
//                if(ret.EndsWith("1")) //低端机型,单核CPU或者512内存，设置为低
//                {
//                    PlayerPreferenceData.SystemShowOtherPlayerCount = 4;
//                    PlayerPreferenceData.SystemTableau = 3;
//                    PlayerPreferenceData.SystemNameBoard = 0;
//                }
//                else if(ret.EndsWith("2")) //双核CPU，默认设置为中，并且把头顶信息,这个选择关闭
//                {
//                    PlayerPreferenceData.SystemShowOtherPlayerCount = 15;
//                    PlayerPreferenceData.SystemTableau = 2;
//                    PlayerPreferenceData.SystemNameBoard = 0;
//                }
//                else  //其它默认为中
//                {
//                    PlayerPreferenceData.SystemShowOtherPlayerCount = 15;
//                    PlayerPreferenceData.SystemTableau = 2;
//                }
//            }
//        //ios处理
//#elif !UNITY_EDITOR && UNITY_IPHONE 
//            if (PlayerPreferenceData.SystemTableau == 0)
//            {
//                 if (
//                     iPhoneGeneration.iPhone3GS == iPhone.generation
//                     || iPhoneGeneration.iPhone3G == iPhone.generation
//                     || iPhoneGeneration.iPhone4 == iPhone.generation                    
//                     )
//                {
//                    PlayerPreferenceData.SystemFloodlight = 0;
//                    PlayerPreferenceData.SystemWallVisionEnable = false;
//                    PlayerPreferenceData.SystemMusic = 0;
//                    PlayerPreferenceData.SystemSoundEffect = 0;
//                    PlayerPreferenceData.SystemScreenMove = 1;
//                    PlayerPreferenceData.NewPlayerGuideClose  = false;
//                    PlayerPreferenceData.DeathPushDisable = false;
//                    PlayerPreferenceData.KillNpcExp = true;
//                    PlayerPreferenceData.SystemSkillEffectEnable = false;
//                    PlayerPreferenceData.SystemDamageBoardEnable = false;
//                    PlayerPreferenceData.SystemShowOtherPlayerCount = 4;
//                    PlayerPreferenceData.SystemTableau = 3;
//                }
//                else if (
//                    iPhoneGeneration.iPadMini1Gen == iPhone.generation
//                     || iPhoneGeneration.iPad2Gen == iPhone.generation
//                     || iPhoneGeneration.iPhone4S == iPhone.generation
//                     || iPhoneGeneration.iPodTouch5Gen == iPhone.generation
//                    )
//                {
//                    PlayerPreferenceData.SystemFloodlight = 0;
//                    PlayerPreferenceData.SystemWallVisionEnable = false;
//                    PlayerPreferenceData.SystemMusic = 1;
//                    PlayerPreferenceData.SystemSoundEffect = 1;
//                    PlayerPreferenceData.SystemScreenMove = 1;
//                    PlayerPreferenceData.NewPlayerGuideClose  = false;
//                    PlayerPreferenceData.DeathPushDisable = true;
//                    PlayerPreferenceData.KillNpcExp = true;
//                    PlayerPreferenceData.SystemSkillEffectEnable = true;
//                    PlayerPreferenceData.SystemDamageBoardEnable = true;
//                    PlayerPreferenceData.SystemShowOtherPlayerCount = 15;
//                    PlayerPreferenceData.SystemTableau = 2;
//                }
//                 else
//                 {
//                     PlayerPreferenceData.SystemTableau = 1;
//                 }
//            }
//#elif !UNITY_EDITOR && UNITY_WP8

//        // To do 
//        //if (PlayerPreferenceData.SystemTableau == 0)
//        //{
//        //    PlayerPreferenceData.SystemFloodlight = 0;
//        //    PlayerPreferenceData.SystemWallVisionEnable = false;
//        //    PlayerPreferenceData.SystemMusic = 1;
//        //    PlayerPreferenceData.SystemSoundEffect = 1;
//        //    PlayerPreferenceData.SystemScreenMove = 1;
//        //    PlayerPreferenceData.NewPlayerGuideClose  = false;
//        //   PlayerPreferenceData.DeathPushDisable = true;
//        //    PlayerPreferenceData.KillNpcExp = true;
//        //    PlayerPreferenceData.SystemSkillEffectEnable = true;
//        //    PlayerPreferenceData.SystemDamageBoardEnable = true;
//        //    PlayerPreferenceData.SystemShowOtherPlayerCount = 15;
//        //    PlayerPreferenceData.SystemTableau = 2;
//        //}

//#endif

    }

#if UNITY_WP8

    public class KeyCreateTimeElement : IXmlSerializable
    {
        public string KeyCreateTime { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            reader.Read();
            KeyCreateTime = reader.ReadContentAsString();
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            writer.WriteElementString("KeyCreateTime", KeyCreateTime);
        }
    }

    public class KeyGoodsElement : IXmlSerializable
    {
        public string keyGoodsID { get; set; }
        public string keyGoodsCount { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            reader.ReadStartElement("keyGoodsID");
            keyGoodsID = reader.ReadContentAsString();
            reader.ReadEndElement();

            reader.ReadStartElement("keyGoodsCount");
            keyGoodsCount = reader.ReadContentAsString();
            reader.ReadEndElement();
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            writer.WriteElementString("keyGoodsID", keyGoodsID);
            writer.WriteElementString("keyGoodsCount", keyGoodsCount);

        }
    }

    public class ShoppingGUIDElement : IXmlSerializable
    {
        public KeyCreateTimeElement time { get; set; }
        public List<KeyGoodsElement> list { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            list = new List<KeyGoodsElement>();

            if (reader.MoveToContent() == XmlNodeType.Element && reader.LocalName == "KeyCreateTime")
            {
                time = new KeyCreateTimeElement();
                time.ReadXml(reader);
                reader.Read();
            }

            //while (reader.MoveToContent() == XmlNodeType.Element && reader.LocalName == "keyGoodsID")

            while (reader.MoveToContent() == XmlNodeType.Element)
            {
                KeyGoodsElement elem = new KeyGoodsElement();
                elem.ReadXml(reader);
                list.Add(elem);
                //reader.Read();
            }
        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            time.WriteXml(writer);

            foreach (KeyGoodsElement elem in list)
            {
                elem.WriteXml(writer);
            }
        }
    }


    public class ShoppingCartInfo : IXmlSerializable
    {
        public Dictionary<string, ShoppingGUIDElement> dic { get; set; }

        public System.Xml.Schema.XmlSchema GetSchema() { return null; }

        public void ReadXml(System.Xml.XmlReader reader)
        {
            dic = new Dictionary<string, ShoppingGUIDElement>();

            if (reader.MoveToContent() == XmlNodeType.Element && "ShoppingCartInfo" == reader.LocalName)
            {
                reader.Read();
                while (reader.MoveToContent() == XmlNodeType.Element)
                {
                    string name = reader.LocalName;
                    ShoppingGUIDElement elem = new ShoppingGUIDElement();
                    reader.Read();
                    elem.ReadXml(reader);
                    dic.Add(name, elem);
                    reader.Read();
                }
            }

        }

        public void WriteXml(System.Xml.XmlWriter writer)
        {
            foreach (KeyValuePair<string, ShoppingGUIDElement> elem in dic)
            {
                writer.WriteStartElement(elem.Key);
                elem.Value.WriteXml(writer);
                writer.WriteEndElement();
            }

        }
    }


#endif

    public static void AddShoppingCartInfo(string strGuid, ShoppingCart curData)
    {
        m_ShoppingCartInfo = GetShoppingCartInfo();
        if (null == m_ShoppingCartInfo)
        {
            return;
        }
        if (m_ShoppingCartInfo.ContainsKey(strGuid))
        {
            m_ShoppingCartInfo.Remove(strGuid);
        }

        m_ShoppingCartInfo.Add(strGuid, curData);

        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }

#if UNITY_WP8
        ShoppingCartInfo shopingCartInfo = new ShoppingCartInfo();
        shopingCartInfo.dic = new Dictionary<string, ShoppingGUIDElement>();

        foreach (string keys in m_ShoppingCartInfo.Keys)
        {
            string name = "GUID" + keys;
            ShoppingCart curShoppingCart = m_ShoppingCartInfo[keys];

            if (curShoppingCart != null)
            {
                ShoppingGUIDElement guidElem = new ShoppingGUIDElement();
                guidElem.time = new KeyCreateTimeElement();
                guidElem.time.KeyCreateTime = curShoppingCart.CreateTime.ToString();

                guidElem.list = new List<KeyGoodsElement>();

                int valid = 0;
                for (int i = 0; i < curShoppingCart.GoodsInfo.Count; i++)
                {
                    KeyGoodsElement goodsElem = new KeyGoodsElement();
                    goodsElem.keyGoodsID = curShoppingCart.GoodsInfo[i].GoodsId.ToString();
                    goodsElem.keyGoodsCount = curShoppingCart.GoodsInfo[i].GoodsCount.ToString();

                    guidElem.list.Add(goodsElem);

                    valid += 1;
                }

                for (int i = 0; i < GlobeVar.SHOPPINGLIST_GOODSMAX - valid; ++i)
                {
                    KeyGoodsElement goodsElem = new KeyGoodsElement();
                    goodsElem.keyGoodsID = GlobeVar.INVALID_ID.ToString();
                    goodsElem.keyGoodsCount = GlobeVar.INVALID_ID.ToString();

                    guidElem.list.Add(goodsElem);
                }

                shopingCartInfo.dic.Add(name, guidElem);
            }
        }

        XmlHelper.XmlSerializeToFile(shopingCartInfo, DataPath + ShoppingCartFileName, new UTF8Encoding(false));

#else
        XmlDocument xml = new XmlDocument();
        XmlElement root = xml.CreateElement("ShoppingCartInfo");
        xml.AppendChild(root);
        foreach (string keys in m_ShoppingCartInfo.Keys)
        {
            XmlElement curGUIDElement = xml.CreateElement("GUID" + keys);
            root.AppendChild(curGUIDElement);
            ShoppingCart curShoppingCart = m_ShoppingCartInfo[keys];
            if (null != curShoppingCart)
            {
                XmlElement curCreateTimeElement = xml.CreateElement("KeyCreateTime");
                curCreateTimeElement.InnerText = curShoppingCart.CreateTime.ToString();
                curGUIDElement.AppendChild(curCreateTimeElement);

                int valid = 0;
                for (int i = 0; i < curShoppingCart.GoodsInfo.Count; i++ )
                {
                    XmlElement curGoodsIDElement = xml.CreateElement("keyGoodsID");
                    curGoodsIDElement.InnerText = curShoppingCart.GoodsInfo[i].GoodsId.ToString();
                    curGUIDElement.AppendChild(curGoodsIDElement);

                    XmlElement curGoodsCountElement = xml.CreateElement("keyGoodsCount");
                    curGoodsCountElement.InnerText = curShoppingCart.GoodsInfo[i].GoodsCount.ToString();
                    curGUIDElement.AppendChild(curGoodsCountElement);

                    valid += 1;
                }

                // 不够5个用-1填满
                for (int i = 0; i < GlobeVar.SHOPPINGLIST_GOODSMAX - valid; i++)
                {
                    XmlElement curGoodsIDElement = xml.CreateElement("keyGoodsID");
                    curGoodsIDElement.InnerText = GlobeVar.INVALID_ID.ToString();
                    curGUIDElement.AppendChild(curGoodsIDElement);

                    XmlElement curGoodsCountElement = xml.CreateElement("keyGoodsCount");
                    curGoodsCountElement.InnerText = GlobeVar.INVALID_ID.ToString();
                    curGUIDElement.AppendChild(curGoodsCountElement);
                }
            }
        }
        xml.Save(DataPath + ShoppingCartFileName);
#endif
    }

    // 从配置文件读取角色个人设置数据，保存在Map中
    public static Dictionary<string, ShoppingCart> GetShoppingCartInfo()
    {
        if (m_ShoppingCartInfo != null)
        {
            return m_ShoppingCartInfo;
        }

        m_ShoppingCartInfo = new Dictionary<string, ShoppingCart>();

#if UNITY_WP8
        ShoppingCartInfo shoppingCartInfo = XmlHelper.XmlDeserializeFromFile<ShoppingCartInfo>(DataPath + ShoppingCartFileName, new UTF8Encoding(false));
        if (null == shoppingCartInfo)
        {
            return m_ShoppingCartInfo;
        }

        foreach(KeyValuePair<string, ShoppingGUIDElement> iter in shoppingCartInfo.dic)
        {
            string guid = iter.Key.Substring(4);
            ShoppingGUIDElement guidElem = iter.Value;

            ShoppingCart curShoppingCartData = new ShoppingCart();

            string timeValue = guidElem.time.KeyCreateTime;
            curShoppingCartData.CreateTime = Convert.ToInt32(timeValue);

            foreach (KeyGoodsElement goodElem in guidElem.list)
            {
                string goodsIDValue = goodElem.keyGoodsID;
                int goodsID = Convert.ToInt32(goodsIDValue);

                string goodsCountValue = goodElem.keyGoodsCount;
                int goodsCount = Convert.ToInt32(goodsCountValue);

                if (goodsID != GlobeVar.INVALID_ID && goodsCount != GlobeVar.INVALID_ID)
                {
                    curShoppingCartData.GoodsInfo.Add(new ShoppingCartItem(goodsID, goodsCount));
                }
            }

            m_ShoppingCartInfo.Add(guid, curShoppingCartData);
        }

#else
        XmlDocument xml = new XmlDocument();
        try
        {
            xml.Load(DataPath + ShoppingCartFileName);
        }
        catch (System.Exception)
        {
            return m_ShoppingCartInfo;
        }

        foreach (XmlElement elemGUID in xml.FirstChild.ChildNodes)
        {
            string guid = elemGUID.Name.Substring(4);
            ShoppingCart curShoppingCartData = new ShoppingCart();
            int nGoodsID = GlobeVar.INVALID_ID;
            int nGoodsCount = GlobeVar.INVALID_ID;
            bool bGoodsIDRead = false;
            bool bGoodsCountRead = false;
            foreach (XmlElement ShoppingCartElem in elemGUID)
            {                
                if (ShoppingCartElem.Name == "KeyCreateTime")
                {
                    int nValue = GlobeVar.INVALID_ID;
                    string typeValue = ShoppingCartElem.InnerText;
                    int.TryParse(typeValue, out nValue);
                    curShoppingCartData.CreateTime = nValue;
                }
                else
                {
                    if (ShoppingCartElem.Name == "keyGoodsID")
                    {
                        string typeValue = ShoppingCartElem.InnerText;
                        int.TryParse(typeValue, out nGoodsID);
                        bGoodsIDRead = true;
                    }
                    else if (ShoppingCartElem.Name == "keyGoodsCount")
                    {
                        string typeValue = ShoppingCartElem.InnerText;
                        int.TryParse(typeValue, out nGoodsCount);
                        bGoodsCountRead = true;
                    }

                    if (bGoodsIDRead && bGoodsCountRead)
                    {
                        // 读取只要不是-1的 保证配置文件永远是5个
                        if (nGoodsID != GlobeVar.INVALID_ID && nGoodsCount != GlobeVar.INVALID_ID)
                        {
                            curShoppingCartData.GoodsInfo.Add(new ShoppingCartItem(nGoodsID, nGoodsCount));
                            nGoodsID = GlobeVar.INVALID_ID;
                            nGoodsCount = GlobeVar.INVALID_ID;
                            bGoodsIDRead = false;
                            bGoodsCountRead = false;
                        }
                    }
                }
            }
            m_ShoppingCartInfo.Add(guid, curShoppingCartData);
        }
#endif
        return m_ShoppingCartInfo;
    }

    public static void AddBelleConfigInfo(string guid,BelleConfigData belleConfigData)
    {
        m_BelleConfig = GetBelleConfigData();
        if (m_BelleConfig.ContainsKey(guid))
        {
            m_BelleConfig.Remove(guid);
        }
        if (null == belleConfigData)
            return;
        m_BelleConfig.Add(guid, belleConfigData);
        if (!Directory.Exists(DataPath))
        {
            Directory.CreateDirectory(DataPath);
        }
        XmlDocument xml = new XmlDocument();
        XmlElement root = xml.CreateElement("BelleConfigData");
        xml.AppendChild(root);
        foreach (string keys in m_BelleConfig.Keys)
        {
            XmlElement curGUIDElement = xml.CreateElement("GUID" + keys);
            root.AppendChild(curGUIDElement);
            BelleConfigData _belleConfigData = m_BelleConfig[keys];
            if (null != _belleConfigData)
            {

                XmlElement curActiveBelleElement = xml.CreateElement("ActiveBelleCount");
                curActiveBelleElement.InnerText = _belleConfigData.ActiveCount.ToString();
                curGUIDElement.AppendChild(curActiveBelleElement);

                XmlElement curBelleGetElement = xml.CreateElement("BelleGetBits");
                curBelleGetElement.InnerText = _belleConfigData.BelleGetBits;
                curGUIDElement.AppendChild(curBelleGetElement);

                XmlElement curBelleItemElement = xml.CreateElement("BelleItemBits");
                curBelleItemElement.InnerText = _belleConfigData.BelleItemBits;
                curGUIDElement.AppendChild(curBelleItemElement);

                XmlElement curBelleEvoElement = xml.CreateElement("BelleEvoBits");
                curBelleEvoElement.InnerText = _belleConfigData.BelleCanEvoBeits;
                curGUIDElement.AppendChild(curBelleEvoElement);

                XmlElement curMatrixUnlockBitsElement = xml.CreateElement("MatrixUnlockBits");
                curMatrixUnlockBitsElement.InnerText = _belleConfigData.MatrixUnlockBits;
                curGUIDElement.AppendChild(curMatrixUnlockBitsElement);
               
            }
        }

        
        xml.Save(DataPath + BelleConfigFileName);
    }

    public static Dictionary<string, BelleConfigData> GetBelleConfigData()
    {
        if (null != m_BelleConfig)
        {
            return m_BelleConfig;
        }

        m_BelleConfig = new Dictionary<string, BelleConfigData>();

        XmlDocument xml = new XmlDocument();
        try
        {
            xml.Load(DataPath + BelleConfigFileName);
        }
        catch (System.Exception)
        {
            return m_BelleConfig;
        }

        foreach (XmlElement elemGUID in xml.FirstChild.ChildNodes)
        {
            string guid = elemGUID.Name.Substring(4);
            BelleConfigData belleConfigData = new BelleConfigData();
            foreach (XmlElement _ownSkillElement in elemGUID)
            {
                switch (_ownSkillElement.Name)
                {
                    case "ActiveBelleCount":
                        belleConfigData.ActiveCount = Convert.ToInt32(_ownSkillElement.InnerText);
                        break;
                    case "BelleGetBits":
                        belleConfigData.BelleGetBits = _ownSkillElement.InnerText;
                        break;
                    case "BelleItemBits":
                        belleConfigData.BelleItemBits = _ownSkillElement.InnerText;
                        break;
                    case "BelleEvoBits":
                        belleConfigData.BelleCanEvoBeits = _ownSkillElement.InnerText;
                        break;
                    case "MatrixUnlockBits":
                        belleConfigData.MatrixUnlockBits = _ownSkillElement.InnerText;
                        break;
                }
            }
            m_BelleConfig.Add(guid, belleConfigData);
        }
        return m_BelleConfig;
    }
}
