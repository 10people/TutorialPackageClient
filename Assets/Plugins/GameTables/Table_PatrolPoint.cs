//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_PatrolPoint
{ private const string TAB_FILE_DATA = "Tables/PatrolPoint.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_SCENEID=2,
ID_PX_0,
ID_PY_0,
ID_PX_1,
ID_PY_1,
ID_PX_2,
ID_PY_2,
ID_PX_3,
ID_PY_3,
ID_PX_4,
ID_PY_4,
ID_PX_5,
ID_PY_5,
ID_PX_6,
ID_PY_6,
ID_PX_7,
ID_PY_7,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getPXCount() { return 8; } 
 private int[] m_PX = new int[8];
 public int GetPXbyIndex(int idx) {
 if(idx>=0 && idx<8) return m_PX[idx];
 return -1;
 }

public int getPYCount() { return 8; } 
 private int[] m_PY = new int[8];
 public int GetPYbyIndex(int idx) {
 if(idx>=0 && idx<8) return m_PY[idx];
 return -1;
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
 Tab_PatrolPoint _values = new Tab_PatrolPoint();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_PX [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PX_0] as string);
_values.m_PX [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PX_1] as string);
_values.m_PX [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PX_2] as string);
_values.m_PX [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PX_3] as string);
_values.m_PX [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PX_4] as string);
_values.m_PX [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PX_5] as string);
_values.m_PX [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PX_6] as string);
_values.m_PX [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PX_7] as string);
_values.m_PY [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PY_0] as string);
_values.m_PY [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PY_1] as string);
_values.m_PY [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PY_2] as string);
_values.m_PY [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PY_3] as string);
_values.m_PY [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PY_4] as string);
_values.m_PY [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PY_5] as string);
_values.m_PY [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PY_6] as string);
_values.m_PY [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PY_7] as string);
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

