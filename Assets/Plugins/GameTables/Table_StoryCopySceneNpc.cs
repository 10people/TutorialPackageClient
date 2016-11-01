//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_StoryCopySceneNpc
{ private const string TAB_FILE_DATA = "Tables/StoryCopySceneNpc.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_SCENECLASSID=2,
ID_DATAID,
ID_POSX,
ID_POSZ,
ID_FACEDIRECTION,
ID_SECTION,
ID_BORNWHENENTERSCENE,
ID_KEYENEMY,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BornWhenEnterScene;
 public int BornWhenEnterScene { get{ return m_BornWhenEnterScene;}}

private int m_DataID;
 public int DataID { get{ return m_DataID;}}

private float m_FaceDirection;
 public float FaceDirection { get{ return m_FaceDirection;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_KeyEnemy;
 public int KeyEnemy { get{ return m_KeyEnemy;}}

private float m_PosX;
 public float PosX { get{ return m_PosX;}}

private float m_PosZ;
 public float PosZ { get{ return m_PosZ;}}

private int m_SceneClassID;
 public int SceneClassID { get{ return m_SceneClassID;}}

private int m_Section;
 public int Section { get{ return m_Section;}}

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
 Tab_StoryCopySceneNpc _values = new Tab_StoryCopySceneNpc();
 _values.m_BornWhenEnterScene =  Convert.ToInt32(valuesList[(int)_ID.ID_BORNWHENENTERSCENE] as string);
_values.m_DataID =  Convert.ToInt32(valuesList[(int)_ID.ID_DATAID] as string);
_values.m_FaceDirection =  Convert.ToSingle(valuesList[(int)_ID.ID_FACEDIRECTION] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_KeyEnemy =  Convert.ToInt32(valuesList[(int)_ID.ID_KEYENEMY] as string);
_values.m_PosX =  Convert.ToSingle(valuesList[(int)_ID.ID_POSX] as string );
_values.m_PosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_POSZ] as string );
_values.m_SceneClassID =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENECLASSID] as string);
_values.m_Section =  Convert.ToInt32(valuesList[(int)_ID.ID_SECTION] as string);

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

