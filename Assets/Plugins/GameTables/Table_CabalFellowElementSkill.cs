//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CabalFellowElementSkill
{ private const string TAB_FILE_DATA = "Tables/CabalFellowElementSkill.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_BASESKILL=2,
ID_TYPE,
ID_LEVEL,
ID_NEXTSKILLID,
ID_NEEDBOOKID,
ID_NEEDBOOKCOUNT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BaseSkill;
 public int BaseSkill { get{ return m_BaseSkill;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_NeedBookCount;
 public int NeedBookCount { get{ return m_NeedBookCount;}}

private int m_NeedBookId;
 public int NeedBookId { get{ return m_NeedBookId;}}

private int m_NextSkillId;
 public int NextSkillId { get{ return m_NextSkillId;}}

private int m_Type;
 public int Type { get{ return m_Type;}}

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
 Tab_CabalFellowElementSkill _values = new Tab_CabalFellowElementSkill();
 _values.m_BaseSkill =  Convert.ToInt32(valuesList[(int)_ID.ID_BASESKILL] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_NeedBookCount =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDBOOKCOUNT] as string);
_values.m_NeedBookId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDBOOKID] as string);
_values.m_NextSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTSKILLID] as string);
_values.m_Type =  Convert.ToInt32(valuesList[(int)_ID.ID_TYPE] as string);

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

