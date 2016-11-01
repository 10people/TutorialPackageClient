//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_LightSkill
{ private const string TAB_FILE_DATA = "Tables/LightSkill.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_ICONNAME=2,
ID_PROFESSIONID,
ID_LEVEL,
ID_CONTINUETIME,
ID_COSTVALUE,
ID_PRELEVELID,
ID_ANIMID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AnimId;
 public int AnimId { get{ return m_AnimId;}}

private int m_ContinueTime;
 public int ContinueTime { get{ return m_ContinueTime;}}

private int m_CostValue;
 public int CostValue { get{ return m_CostValue;}}

private string m_IconName;
 public string IconName { get{ return m_IconName;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_PreLevelId;
 public int PreLevelId { get{ return m_PreLevelId;}}

private int m_ProfessionId;
 public int ProfessionId { get{ return m_ProfessionId;}}

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
 Tab_LightSkill _values = new Tab_LightSkill();
 _values.m_AnimId =  Convert.ToInt32(valuesList[(int)_ID.ID_ANIMID] as string);
_values.m_ContinueTime =  Convert.ToInt32(valuesList[(int)_ID.ID_CONTINUETIME] as string);
_values.m_CostValue =  Convert.ToInt32(valuesList[(int)_ID.ID_COSTVALUE] as string);
_values.m_IconName =  valuesList[(int)_ID.ID_ICONNAME] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_PreLevelId =  Convert.ToInt32(valuesList[(int)_ID.ID_PRELEVELID] as string);
_values.m_ProfessionId =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONID] as string);

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

