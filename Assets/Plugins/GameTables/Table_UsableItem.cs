//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_UsableItem
{ private const string TAB_FILE_DATA = "Tables/UsableItem.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_SCRIPTID,
ID_CONSUMEFLAG,
ID_COOLDOWNID,
ID_USEPARAMA,
ID_USEPARAMB,
ID_USEPARAMC,
ID_USEPARAMD,
ID_USEPARAME,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ConsumeFlag;
 public int ConsumeFlag { get{ return m_ConsumeFlag;}}

private int m_CoolDownId;
 public int CoolDownId { get{ return m_CoolDownId;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_ScriptId;
 public int ScriptId { get{ return m_ScriptId;}}

private int m_UseParamA;
 public int UseParamA { get{ return m_UseParamA;}}

private int m_UseParamB;
 public int UseParamB { get{ return m_UseParamB;}}

private int m_UseParamC;
 public int UseParamC { get{ return m_UseParamC;}}

private int m_UseParamD;
 public int UseParamD { get{ return m_UseParamD;}}

private string m_UseParamE;
 public string UseParamE { get{ return m_UseParamE;}}

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
 Tab_UsableItem _values = new Tab_UsableItem();
 _values.m_ConsumeFlag =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMEFLAG] as string);
_values.m_CoolDownId =  Convert.ToInt32(valuesList[(int)_ID.ID_COOLDOWNID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_ScriptId =  Convert.ToInt32(valuesList[(int)_ID.ID_SCRIPTID] as string);
_values.m_UseParamA =  Convert.ToInt32(valuesList[(int)_ID.ID_USEPARAMA] as string);
_values.m_UseParamB =  Convert.ToInt32(valuesList[(int)_ID.ID_USEPARAMB] as string);
_values.m_UseParamC =  Convert.ToInt32(valuesList[(int)_ID.ID_USEPARAMC] as string);
_values.m_UseParamD =  Convert.ToInt32(valuesList[(int)_ID.ID_USEPARAMD] as string);
_values.m_UseParamE =  valuesList[(int)_ID.ID_USEPARAME] as string;

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

