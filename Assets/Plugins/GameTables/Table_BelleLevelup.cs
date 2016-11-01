//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_BelleLevelup
{ private const string TAB_FILE_DATA = "Tables/BelleLevelup.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_BELLEID=2,
ID_LEVEL,
ID_MAINLEVEL,
ID_SUBLEVEL,
ID_DURATION,
ID_CONSUMETYPE_1,
ID_CONSUMESUBTYPE_1,
ID_CONSUMENUM_1,
ID_CONSUMETYPE_2,
ID_CONSUMESUBTYPE_2,
ID_CONSUMENUM_2,
ID_ATTRTYPE_1,
ID_ATTRVALUE_1,
ID_ATTRTYPE_2,
ID_ATTRVALUE_2,
ID_ATTRTYPE_3,
ID_ATTRVALUE_3,
ID_ATTRTYPE_4,
ID_ATTRVALUE_4,
ID_ATTRTYPE_5,
ID_ATTRVALUE_5,
ID_ATTRTYPE_6,
ID_ATTRVALUE_6,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAttrTypeCount() { return 6; } 
 private int[] m_AttrType = new int[6];
 public int GetAttrTypebyIndex(int idx) {
 if(idx>=0 && idx<6) return m_AttrType[idx];
 return -1;
 }

public int getAttrValueCount() { return 6; } 
 private int[] m_AttrValue = new int[6];
 public int GetAttrValuebyIndex(int idx) {
 if(idx>=0 && idx<6) return m_AttrValue[idx];
 return -1;
 }

private int m_BelleId;
 public int BelleId { get{ return m_BelleId;}}

public int getConsumeNumCount() { return 2; } 
 private int[] m_ConsumeNum = new int[2];
 public int GetConsumeNumbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_ConsumeNum[idx];
 return -1;
 }

public int getConsumeSubTypeCount() { return 2; } 
 private int[] m_ConsumeSubType = new int[2];
 public int GetConsumeSubTypebyIndex(int idx) {
 if(idx>=0 && idx<2) return m_ConsumeSubType[idx];
 return -1;
 }

public int getConsumeTypeCount() { return 2; } 
 private int[] m_ConsumeType = new int[2];
 public int GetConsumeTypebyIndex(int idx) {
 if(idx>=0 && idx<2) return m_ConsumeType[idx];
 return -1;
 }

private int m_Duration;
 public int Duration { get{ return m_Duration;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_MainLevel;
 public int MainLevel { get{ return m_MainLevel;}}

private int m_SubLevel;
 public int SubLevel { get{ return m_SubLevel;}}

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
 Tab_BelleLevelup _values = new Tab_BelleLevelup();
 _values.m_AttrType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_1] as string);
_values.m_AttrType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_2] as string);
_values.m_AttrType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_3] as string);
_values.m_AttrType [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_4] as string);
_values.m_AttrType [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_5] as string);
_values.m_AttrType [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_6] as string);
_values.m_AttrValue [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_1] as string);
_values.m_AttrValue [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_2] as string);
_values.m_AttrValue [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_3] as string);
_values.m_AttrValue [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_4] as string);
_values.m_AttrValue [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_5] as string);
_values.m_AttrValue [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_6] as string);
_values.m_BelleId =  Convert.ToInt32(valuesList[(int)_ID.ID_BELLEID] as string);
_values.m_ConsumeNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMENUM_1] as string);
_values.m_ConsumeNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMENUM_2] as string);
_values.m_ConsumeSubType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMESUBTYPE_1] as string);
_values.m_ConsumeSubType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMESUBTYPE_2] as string);
_values.m_ConsumeType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMETYPE_1] as string);
_values.m_ConsumeType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMETYPE_2] as string);
_values.m_Duration =  Convert.ToInt32(valuesList[(int)_ID.ID_DURATION] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_MainLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_MAINLEVEL] as string);
_values.m_SubLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_SUBLEVEL] as string);

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

