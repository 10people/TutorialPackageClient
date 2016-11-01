//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SceneNpc
{ private const string TAB_FILE_DATA = "Tables/SceneNpc.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_SCENEID=2,
ID_DATAID,
ID_POSX,
ID_POSZ,
ID_FACEDIRECTION,
ID_GROUPID,
ID_MUTEXID,
ID_ISHIDEANDSEEKNPC,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_DataID;
 public int DataID { get{ return m_DataID;}}

private float m_FaceDirection;
 public float FaceDirection { get{ return m_FaceDirection;}}

private int m_GroupID;
 public int GroupID { get{ return m_GroupID;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsHideAndSeekNpc;
 public int IsHideAndSeekNpc { get{ return m_IsHideAndSeekNpc;}}

private int m_MutexID;
 public int MutexID { get{ return m_MutexID;}}

private float m_PosX;
 public float PosX { get{ return m_PosX;}}

private float m_PosZ;
 public float PosZ { get{ return m_PosZ;}}

private int m_SceneID;
 public int SceneID { get{ return m_SceneID;}}

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
 Tab_SceneNpc _values = new Tab_SceneNpc();
 _values.m_DataID =  Convert.ToInt32(valuesList[(int)_ID.ID_DATAID] as string);
_values.m_FaceDirection =  Convert.ToSingle(valuesList[(int)_ID.ID_FACEDIRECTION] as string );
_values.m_GroupID =  Convert.ToInt32(valuesList[(int)_ID.ID_GROUPID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsHideAndSeekNpc =  Convert.ToInt32(valuesList[(int)_ID.ID_ISHIDEANDSEEKNPC] as string);
_values.m_MutexID =  Convert.ToInt32(valuesList[(int)_ID.ID_MUTEXID] as string);
_values.m_PosX =  Convert.ToSingle(valuesList[(int)_ID.ID_POSX] as string );
_values.m_PosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_POSZ] as string );
_values.m_SceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEID] as string);

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

