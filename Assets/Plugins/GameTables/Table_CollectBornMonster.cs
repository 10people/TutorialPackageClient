//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CollectBornMonster
{ private const string TAB_FILE_DATA = "Tables/CollectBornMonster.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_SCENEID=2,
ID_MISSIONID,
ID_COLLECTX,
ID_COLLECTZ,
ID_COLLECTDIS,
ID_MONSTERID1,
ID_MONSTERX1,
ID_MONSTERZ1,
ID_MONSTERMAX1,
ID_MONSTERID2,
ID_MONSTERX2,
ID_MONSTERZ2,
ID_MONSTERMAX2,
ID_MONSTERID3,
ID_MONSTERX3,
ID_MONSTERZ3,
ID_MONSTERMAX3,
ID_MONSTERID4,
ID_MONSTERX4,
ID_MONSTERZ4,
ID_MONSTERMAX4,
ID_MONSTERID5,
ID_MONSTERX5,
ID_MONSTERZ5,
ID_MONSTERMAX5,
ID_MONSTERID6,
ID_MONSTERX6,
ID_MONSTERZ6,
ID_MONSTERMAX6,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_CollectDis;
 public int CollectDis { get{ return m_CollectDis;}}

private float m_CollectX;
 public float CollectX { get{ return m_CollectX;}}

private float m_CollectZ;
 public float CollectZ { get{ return m_CollectZ;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MissionID;
 public int MissionID { get{ return m_MissionID;}}

public int getMonsterIDCount() { return 6; } 
 private int[] m_MonsterID = new int[6];
 public int GetMonsterIDbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_MonsterID[idx];
 return -1;
 }

public int getMonsterMaxCount() { return 6; } 
 private int[] m_MonsterMax = new int[6];
 public int GetMonsterMaxbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_MonsterMax[idx];
 return -1;
 }

public int getMonsterXCount() { return 6; } 
 private float[] m_MonsterX = new float[6];
 public float GetMonsterXbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_MonsterX[idx];
 return 0.0f;
 }

public int getMonsterZCount() { return 6; } 
 private float[] m_MonsterZ = new float[6];
 public float GetMonsterZbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_MonsterZ[idx];
 return 0.0f;
 }

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
 Tab_CollectBornMonster _values = new Tab_CollectBornMonster();
 _values.m_CollectDis =  Convert.ToInt32(valuesList[(int)_ID.ID_COLLECTDIS] as string);
_values.m_CollectX =  Convert.ToSingle(valuesList[(int)_ID.ID_COLLECTX] as string );
_values.m_CollectZ =  Convert.ToSingle(valuesList[(int)_ID.ID_COLLECTZ] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MissionID =  Convert.ToInt32(valuesList[(int)_ID.ID_MISSIONID] as string);
_values.m_MonsterID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERID1] as string);
_values.m_MonsterID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERID2] as string);
_values.m_MonsterID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERID3] as string);
_values.m_MonsterID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERID4] as string);
_values.m_MonsterID [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERID5] as string);
_values.m_MonsterID [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERID6] as string);
_values.m_MonsterMax [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERMAX1] as string);
_values.m_MonsterMax [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERMAX2] as string);
_values.m_MonsterMax [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERMAX3] as string);
_values.m_MonsterMax [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERMAX4] as string);
_values.m_MonsterMax [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERMAX5] as string);
_values.m_MonsterMax [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONSTERMAX6] as string);
_values.m_MonsterX [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERX1] as string );
_values.m_MonsterX [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERX2] as string );
_values.m_MonsterX [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERX3] as string );
_values.m_MonsterX [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERX4] as string );
_values.m_MonsterX [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERX5] as string );
_values.m_MonsterX [ 5 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERX6] as string );
_values.m_MonsterZ [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERZ1] as string );
_values.m_MonsterZ [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERZ2] as string );
_values.m_MonsterZ [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERZ3] as string );
_values.m_MonsterZ [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERZ4] as string );
_values.m_MonsterZ [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERZ5] as string );
_values.m_MonsterZ [ 5 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_MONSTERZ6] as string );
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

