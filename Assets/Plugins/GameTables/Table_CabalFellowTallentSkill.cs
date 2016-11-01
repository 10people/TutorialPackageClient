//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CabalFellowTallentSkill
{ private const string TAB_FILE_DATA = "Tables/CabalFellowTallentSkill.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_SKILLDESC,
ID_ICON,
ID_BASESKILL,
ID_LOGICID,
ID_QUALITY,
ID_LEVEL,
ID_NEXTSKILLID,
ID_SKILLBOOK,
ID_LEVELUPEXP,
ID_SKILLUPEXP,
ID_SKILLUPSCALE,
ID_IMPACT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BaseSkill;
 public int BaseSkill { get{ return m_BaseSkill;}}

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Impact;
 public int Impact { get{ return m_Impact;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_LevelUpExp;
 public int LevelUpExp { get{ return m_LevelUpExp;}}

private int m_LogicID;
 public int LogicID { get{ return m_LogicID;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_NextSkillId;
 public int NextSkillId { get{ return m_NextSkillId;}}

private int m_Quality;
 public int Quality { get{ return m_Quality;}}

private int m_SkillBook;
 public int SkillBook { get{ return m_SkillBook;}}

private string m_SkillDesc;
 public string SkillDesc { get{ return m_SkillDesc;}}

private int m_SkillUpExp;
 public int SkillUpExp { get{ return m_SkillUpExp;}}

private float m_SkillUpScale;
 public float SkillUpScale { get{ return m_SkillUpScale;}}

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
 Tab_CabalFellowTallentSkill _values = new Tab_CabalFellowTallentSkill();
 _values.m_BaseSkill =  Convert.ToInt32(valuesList[(int)_ID.ID_BASESKILL] as string);
_values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Impact =  Convert.ToInt32(valuesList[(int)_ID.ID_IMPACT] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_LevelUpExp =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELUPEXP] as string);
_values.m_LogicID =  Convert.ToInt32(valuesList[(int)_ID.ID_LOGICID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_NextSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTSKILLID] as string);
_values.m_Quality =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITY] as string);
_values.m_SkillBook =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLBOOK] as string);
_values.m_SkillDesc =  valuesList[(int)_ID.ID_SKILLDESC] as string;
_values.m_SkillUpExp =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLUPEXP] as string);
_values.m_SkillUpScale =  Convert.ToSingle(valuesList[(int)_ID.ID_SKILLUPSCALE] as string );

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

