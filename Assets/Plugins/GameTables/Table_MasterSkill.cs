//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MasterSkill
{ private const string TAB_FILE_DATA = "Tables/MasterSkill.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_BASESKILL=2,
ID_LEVEL,
ID_NEXTSKILLID,
ID_MINMASTERTORCH,
ID_MINLEVEL,
ID_CONSUMETYPE,
ID_CONSUMESUBTYPE,
ID_CONSUMENUM,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BaseSkill;
 public int BaseSkill { get{ return m_BaseSkill;}}

private int m_ConsumeNum;
 public int ConsumeNum { get{ return m_ConsumeNum;}}

private int m_ConsumeSubType;
 public int ConsumeSubType { get{ return m_ConsumeSubType;}}

private int m_ConsumeType;
 public int ConsumeType { get{ return m_ConsumeType;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_MinLevel;
 public int MinLevel { get{ return m_MinLevel;}}

private int m_MinMasterTorch;
 public int MinMasterTorch { get{ return m_MinMasterTorch;}}

private int m_NextSkillId;
 public int NextSkillId { get{ return m_NextSkillId;}}

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
 Tab_MasterSkill _values = new Tab_MasterSkill();
 _values.m_BaseSkill =  Convert.ToInt32(valuesList[(int)_ID.ID_BASESKILL] as string);
_values.m_ConsumeNum =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMENUM] as string);
_values.m_ConsumeSubType =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMESUBTYPE] as string);
_values.m_ConsumeType =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMETYPE] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_MinLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_MINLEVEL] as string);
_values.m_MinMasterTorch =  Convert.ToInt32(valuesList[(int)_ID.ID_MINMASTERTORCH] as string);
_values.m_NextSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTSKILLID] as string);

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

