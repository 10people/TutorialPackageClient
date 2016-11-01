//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MapConnection
{ private const string TAB_FILE_DATA = "Tables/MapConnection.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_SOURCESCENEID,
ID_DESTSCENEID=2,
ID_TELEPOSX,
ID_TELEPOSZ,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_DestSceneID;
 public int DestSceneID { get{ return m_DestSceneID;}}

private int m_SourceSceneID;
 public int SourceSceneID { get{ return m_SourceSceneID;}}

private float m_TelePosX;
 public float TelePosX { get{ return m_TelePosX;}}

private float m_TelePosZ;
 public float TelePosZ { get{ return m_TelePosZ;}}

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
 Tab_MapConnection _values = new Tab_MapConnection();
 _values.m_DestSceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_DESTSCENEID] as string);
_values.m_SourceSceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_SOURCESCENEID] as string);
_values.m_TelePosX =  Convert.ToSingle(valuesList[(int)_ID.ID_TELEPOSX] as string );
_values.m_TelePosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_TELEPOSZ] as string );

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

