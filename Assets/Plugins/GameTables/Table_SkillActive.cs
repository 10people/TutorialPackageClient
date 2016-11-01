//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SkillActive
{ private const string TAB_FILE_DATA = "Tables/SkillActive.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_SKILLID=2,
ID_PROFESSION,
ID_LEVEL,
ID_SKILLINDEX,
ID_ATTACHSKILLID,
ID_ISXPAATTCH,
ID_ISXPINDEX,
ID_PRESKILLID,
ID_INTROSTAGE,
ID_SKILLITEMID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AttachSkillId;
 public int AttachSkillId { get{ return m_AttachSkillId;}}

private int m_Index;
 public int Index { get{ return m_Index;}}

private int m_IntroStage;
 public int IntroStage { get{ return m_IntroStage;}}

private int m_IsXpAattch;
 public int IsXpAattch { get{ return m_IsXpAattch;}}

private int m_IsXpIndex;
 public int IsXpIndex { get{ return m_IsXpIndex;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_PreSkillId;
 public int PreSkillId { get{ return m_PreSkillId;}}

private int m_Profession;
 public int Profession { get{ return m_Profession;}}

private int m_SKillIndex;
 public int SKillIndex { get{ return m_SKillIndex;}}

private int m_SkillId;
 public int SkillId { get{ return m_SkillId;}}

private int m_SkillItemID;
 public int SkillItemID { get{ return m_SkillItemID;}}

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
 Tab_SkillActive _values = new Tab_SkillActive();
 _values.m_AttachSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHSKILLID] as string);
_values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_IntroStage =  Convert.ToInt32(valuesList[(int)_ID.ID_INTROSTAGE] as string);
_values.m_IsXpAattch =  Convert.ToInt32(valuesList[(int)_ID.ID_ISXPAATTCH] as string);
_values.m_IsXpIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_ISXPINDEX] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_PreSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_PRESKILLID] as string);
_values.m_Profession =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSION] as string);
_values.m_SKillIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLINDEX] as string);
_values.m_SkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLID] as string);
_values.m_SkillItemID =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLITEMID] as string);

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

