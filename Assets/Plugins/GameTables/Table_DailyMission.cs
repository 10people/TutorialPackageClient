//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_DailyMission
{ private const string TAB_FILE_DATA = "Tables/DailyMission.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_TYPE,
ID_MINILEVEL,
ID_MAXLEVEL,
ID_WEIGHT,
ID_MISSIONID,
ID_UINAME,
ID_CONSUMENORMALREFRESHITEM,
ID_CONSUMEBANGDEDYUANBAO,
ID_CONSUMESPECIALREFRESHITEM,
ID_CONSUMEYUANBAO,
ID_AWARDACTIVENESS,
ID_AWARDMONEY,
ID_AWARDEXP,
ID_AWARDREPUTATION,
ID_AWARDITEMID,
ID_AWARDITEMNUM,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AwardActiveness;
 public int AwardActiveness { get{ return m_AwardActiveness;}}

private int m_AwardExp;
 public int AwardExp { get{ return m_AwardExp;}}

private int m_AwardItemID;
 public int AwardItemID { get{ return m_AwardItemID;}}

private int m_AwardItemNum;
 public int AwardItemNum { get{ return m_AwardItemNum;}}

private int m_AwardMoney;
 public int AwardMoney { get{ return m_AwardMoney;}}

private int m_AwardReputation;
 public int AwardReputation { get{ return m_AwardReputation;}}

private int m_ConsumeBangdedYuanBao;
 public int ConsumeBangdedYuanBao { get{ return m_ConsumeBangdedYuanBao;}}

private int m_ConsumeNormalRefreshItem;
 public int ConsumeNormalRefreshItem { get{ return m_ConsumeNormalRefreshItem;}}

private int m_ConsumeSpecialRefreshItem;
 public int ConsumeSpecialRefreshItem { get{ return m_ConsumeSpecialRefreshItem;}}

private int m_ConsumeYuanBao;
 public int ConsumeYuanBao { get{ return m_ConsumeYuanBao;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MaxLevel;
 public int MaxLevel { get{ return m_MaxLevel;}}

private int m_MiniLevel;
 public int MiniLevel { get{ return m_MiniLevel;}}

private int m_MissionID;
 public int MissionID { get{ return m_MissionID;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_Type;
 public int Type { get{ return m_Type;}}

private int m_UIName;
 public int UIName { get{ return m_UIName;}}

private int m_Weight;
 public int Weight { get{ return m_Weight;}}

public static bool LoadTable(Dictionary<int, List<object> > _tab)
 {
 if(!TableManager.ReaderPList(GetInstanceFile(),SerializableTable,_tab))
 {
 throw TableException.ErrorReader("Load File{0} Fail!!!",GetInstanceFile());
 }
 return true;
 }
 public static void SerializableTable(string[] valuesList,int skey,Dictionary<int, List<object> > _hash)
 {
 if ((int)_ID.MAX_RECORD!=valuesList.Length)
 {
 throw TableException.ErrorReader("Load {0} error as CodeSize:{1} not Equal DataSize:{2}", GetInstanceFile(),_ID.MAX_RECORD,valuesList.Length);
 }
 Tab_DailyMission _values = new Tab_DailyMission();
 _values.m_AwardActiveness =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDACTIVENESS] as string);
_values.m_AwardExp =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDEXP] as string);
_values.m_AwardItemID =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDITEMID] as string);
_values.m_AwardItemNum =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDITEMNUM] as string);
_values.m_AwardMoney =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDMONEY] as string);
_values.m_AwardReputation =  Convert.ToInt32(valuesList[(int)_ID.ID_AWARDREPUTATION] as string);
_values.m_ConsumeBangdedYuanBao =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMEBANGDEDYUANBAO] as string);
_values.m_ConsumeNormalRefreshItem =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMENORMALREFRESHITEM] as string);
_values.m_ConsumeSpecialRefreshItem =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMESPECIALREFRESHITEM] as string);
_values.m_ConsumeYuanBao =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMEYUANBAO] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MaxLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXLEVEL] as string);
_values.m_MiniLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_MINILEVEL] as string);
_values.m_MissionID =  Convert.ToInt32(valuesList[(int)_ID.ID_MISSIONID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_Type =  Convert.ToInt32(valuesList[(int)_ID.ID_TYPE] as string);
_values.m_UIName =  Convert.ToInt32(valuesList[(int)_ID.ID_UINAME] as string);
_values.m_Weight =  Convert.ToInt32(valuesList[(int)_ID.ID_WEIGHT] as string);

 if (_hash.ContainsKey(skey))
 {
 List< object> tList =_hash[skey];
 tList.Add(_values);
 }
 else
 {
 List<object> tList = new List<object>();
 tList.Add(_values); 
 _hash.Add(skey, (List<object>)tList);
 }
 }


}
}

