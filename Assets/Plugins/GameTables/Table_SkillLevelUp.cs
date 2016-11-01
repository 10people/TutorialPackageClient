//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SkillLevelUp
{ private const string TAB_FILE_DATA = "Tables/SkillLevelUp.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_PROFESSION=2,
ID_LEVEL,
ID_NEEDSKILLID,
ID_NEXTSKILLID,
ID_PRESKILLID,
ID_SKILLLEVEL,
ID_NEEDCONSUME,
ID_NEEDCOIN,
ID_NEEDITEMID,
ID_NEEDITEMCOUNT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_NeedCoin;
 public int NeedCoin { get{ return m_NeedCoin;}}

private int m_NeedConsume;
 public int NeedConsume { get{ return m_NeedConsume;}}

private int m_NeedItemCount;
 public int NeedItemCount { get{ return m_NeedItemCount;}}

private int m_NeedItemId;
 public int NeedItemId { get{ return m_NeedItemId;}}

private int m_NeedSkillId;
 public int NeedSkillId { get{ return m_NeedSkillId;}}

private int m_NextSkillId;
 public int NextSkillId { get{ return m_NextSkillId;}}

private int m_PreSkillId;
 public int PreSkillId { get{ return m_PreSkillId;}}

private int m_Profession;
 public int Profession { get{ return m_Profession;}}

private int m_SkillLevel;
 public int SkillLevel { get{ return m_SkillLevel;}}

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
 Tab_SkillLevelUp _values = new Tab_SkillLevelUp();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_NeedCoin =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDCOIN] as string);
_values.m_NeedConsume =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDCONSUME] as string);
_values.m_NeedItemCount =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDITEMCOUNT] as string);
_values.m_NeedItemId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDITEMID] as string);
_values.m_NeedSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDSKILLID] as string);
_values.m_NextSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTSKILLID] as string);
_values.m_PreSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_PRESKILLID] as string);
_values.m_Profession =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSION] as string);
_values.m_SkillLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLLEVEL] as string);

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

