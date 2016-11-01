//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_EquipSet
{ private const string TAB_FILE_DATA = "Tables/EquipSet.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_EQUIPID1,
ID_EQUIPID2,
ID_EQUIPID3,
ID_EQUIPID4,
ID_EFFECTTYPE1,
ID_EFFECTVALUE1,
ID_EFFECTTYPE2,
ID_EFFECTVALUE2,
ID_EFFECTTYPE3,
ID_EFFECTVALUE3,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getEffectTypeCount() { return 3; } 
 private int[] m_EffectType = new int[3];
 public int GetEffectTypebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_EffectType[idx];
 return -1;
 }

public int getEffectValueCount() { return 3; } 
 private int[] m_EffectValue = new int[3];
 public int GetEffectValuebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_EffectValue[idx];
 return -1;
 }

public int getEquipIdCount() { return 4; } 
 private int[] m_EquipId = new int[4];
 public int GetEquipIdbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_EquipId[idx];
 return -1;
 }

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

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
 Tab_EquipSet _values = new Tab_EquipSet();
 _values.m_EffectType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTTYPE1] as string);
_values.m_EffectType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTTYPE2] as string);
_values.m_EffectType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTTYPE3] as string);
_values.m_EffectValue [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTVALUE1] as string);
_values.m_EffectValue [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTVALUE2] as string);
_values.m_EffectValue [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTVALUE3] as string);
_values.m_EquipId [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EQUIPID1] as string);
_values.m_EquipId [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EQUIPID2] as string);
_values.m_EquipId [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EQUIPID3] as string);
_values.m_EquipId [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_EQUIPID4] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;

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

