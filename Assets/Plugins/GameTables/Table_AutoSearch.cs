//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_AutoSearch
{ private const string TAB_FILE_DATA = "Tables/AutoSearch.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_DSTSCENEID=2,
ID_X,
ID_Z,
ID_TARGETNAME,
ID_TARGETJOB,
ID_COLOR,
ID_TYPE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_Color;
 public string Color { get{ return m_Color;}}

private int m_DstSceneID;
 public int DstSceneID { get{ return m_DstSceneID;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_TargetJob;
 public string TargetJob { get{ return m_TargetJob;}}

private string m_TargetName;
 public string TargetName { get{ return m_TargetName;}}

private int m_Type;
 public int Type { get{ return m_Type;}}

private float m_X;
 public float X { get{ return m_X;}}

private float m_Z;
 public float Z { get{ return m_Z;}}

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
 Tab_AutoSearch _values = new Tab_AutoSearch();
 _values.m_Color =  valuesList[(int)_ID.ID_COLOR] as string;
_values.m_DstSceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_DSTSCENEID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_TargetJob =  valuesList[(int)_ID.ID_TARGETJOB] as string;
_values.m_TargetName =  valuesList[(int)_ID.ID_TARGETNAME] as string;
_values.m_Type =  Convert.ToInt32(valuesList[(int)_ID.ID_TYPE] as string);
_values.m_X =  Convert.ToSingle(valuesList[(int)_ID.ID_X] as string );
_values.m_Z =  Convert.ToSingle(valuesList[(int)_ID.ID_Z] as string );

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

