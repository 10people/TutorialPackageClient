//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CangJingGeInfo
{ private const string TAB_FILE_DATA = "Tables/CangJingGeInfo.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CALCULAT=2,
ID_MONSTER1,
ID_MONSTER2,
ID_MONSTER3,
ID_DROP1,
ID_DROP2,
ID_DROP3,
ID_DROP4,
ID_REWARD1,
ID_REWARD2,
ID_REWARD3,
ID_LEVEL,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Calculat;
 public int Calculat { get{ return m_Calculat;}}

public int getDropCount() { return 4; } 
 private int[] m_Drop = new int[4];
 public int GetDropbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_Drop[idx];
 return -1;
 }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

public int getMonsterCount() { return 3; } 
 private string[] m_Monster = new string[3];
 public string GetMonsterbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_Monster[idx];
 return "";
 }

public int getRewardCount() { return 3; } 
 private int[] m_Reward = new int[3];
 public int GetRewardbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_Reward[idx];
 return -1;
 }

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
 Tab_CangJingGeInfo _values = new Tab_CangJingGeInfo();
 _values.m_Calculat =  Convert.ToInt32(valuesList[(int)_ID.ID_CALCULAT] as string);
_values.m_Drop [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DROP1] as string);
_values.m_Drop [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DROP2] as string);
_values.m_Drop [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DROP3] as string);
_values.m_Drop [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DROP4] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_Monster [ 0 ] =  valuesList[(int)_ID.ID_MONSTER1] as string;
_values.m_Monster [ 1 ] =  valuesList[(int)_ID.ID_MONSTER2] as string;
_values.m_Monster [ 2 ] =  valuesList[(int)_ID.ID_MONSTER3] as string;
_values.m_Reward [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARD1] as string);
_values.m_Reward [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARD2] as string);
_values.m_Reward [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARD3] as string);

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

