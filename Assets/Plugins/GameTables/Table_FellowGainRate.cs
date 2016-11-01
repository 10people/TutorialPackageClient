//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_FellowGainRate
{ private const string TAB_FILE_DATA = "Tables/FellowGainRate.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_FELLOWID=2,
ID_QUALITY,
ID_NORMALWEIGHT10,
ID_NORMALWEIGHT20,
ID_NORMALWEIGHT30,
ID_NORMALWEIGHT40,
ID_NORMALWEIGHT50,
ID_NORMALWEIGHT60,
ID_NORMALWEIGHT70,
ID_NORMALWEIGHT80,
ID_NORMALWEIGHT90,
ID_NORMALWEIGHT100,
ID_YUANBAOWEIGHT10,
ID_YUANBAOWEIGHT20,
ID_YUANBAOWEIGHT30,
ID_YUANBAOWEIGHT40,
ID_YUANBAOWEIGHT50,
ID_YUANBAOWEIGHT60,
ID_YUANBAOWEIGHT70,
ID_YUANBAOWEIGHT80,
ID_YUANBAOWEIGHT90,
ID_YUANBAOWEIGHT100,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_FellowId;
 public int FellowId { get{ return m_FellowId;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getNormalWeightCount() { return 10; } 
 private int[] m_NormalWeight = new int[10];
 public int GetNormalWeightbyIndex(int idx) {
 if(idx>=0 && idx<10) return m_NormalWeight[idx];
 return -1;
 }

private int m_Quality;
 public int Quality { get{ return m_Quality;}}

public int getYuanBaoWeightCount() { return 10; } 
 private int[] m_YuanBaoWeight = new int[10];
 public int GetYuanBaoWeightbyIndex(int idx) {
 if(idx>=0 && idx<10) return m_YuanBaoWeight[idx];
 return -1;
 }

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
 Tab_FellowGainRate _values = new Tab_FellowGainRate();
 _values.m_FellowId =  Convert.ToInt32(valuesList[(int)_ID.ID_FELLOWID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_NormalWeight [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT10] as string);
_values.m_NormalWeight [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT20] as string);
_values.m_NormalWeight [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT30] as string);
_values.m_NormalWeight [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT40] as string);
_values.m_NormalWeight [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT50] as string);
_values.m_NormalWeight [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT60] as string);
_values.m_NormalWeight [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT70] as string);
_values.m_NormalWeight [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT80] as string);
_values.m_NormalWeight [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT90] as string);
_values.m_NormalWeight [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALWEIGHT100] as string);
_values.m_Quality =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITY] as string);
_values.m_YuanBaoWeight [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT10] as string);
_values.m_YuanBaoWeight [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT20] as string);
_values.m_YuanBaoWeight [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT30] as string);
_values.m_YuanBaoWeight [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT40] as string);
_values.m_YuanBaoWeight [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT50] as string);
_values.m_YuanBaoWeight [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT60] as string);
_values.m_YuanBaoWeight [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT70] as string);
_values.m_YuanBaoWeight [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT80] as string);
_values.m_YuanBaoWeight [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT90] as string);
_values.m_YuanBaoWeight [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOWEIGHT100] as string);

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

