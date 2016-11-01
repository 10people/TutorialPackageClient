//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_FellowGainCost
{ private const string TAB_FILE_DATA = "Tables/FellowGainCost.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_NORMALCONSUMETYPE=2,
ID_NORMALCONSUMESUBTYPE,
ID_NORMALCONSUMENUM,
ID_YUANBAOCONSUMETYPE,
ID_YUANBAOCONSUMESUBTYPE,
ID_YUANBAOCONSUMENUM,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Index;
 public int Index { get{ return m_Index;}}

private int m_NormalConsumeNum;
 public int NormalConsumeNum { get{ return m_NormalConsumeNum;}}

private int m_NormalConsumeSubType;
 public int NormalConsumeSubType { get{ return m_NormalConsumeSubType;}}

private int m_NormalConsumeType;
 public int NormalConsumeType { get{ return m_NormalConsumeType;}}

private int m_YuanBaoConsumeNum;
 public int YuanBaoConsumeNum { get{ return m_YuanBaoConsumeNum;}}

private int m_YuanBaoConsumeSubType;
 public int YuanBaoConsumeSubType { get{ return m_YuanBaoConsumeSubType;}}

private int m_YuanBaoConsumeType;
 public int YuanBaoConsumeType { get{ return m_YuanBaoConsumeType;}}

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
 Tab_FellowGainCost _values = new Tab_FellowGainCost();
 _values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_NormalConsumeNum =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALCONSUMENUM] as string);
_values.m_NormalConsumeSubType =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALCONSUMESUBTYPE] as string);
_values.m_NormalConsumeType =  Convert.ToInt32(valuesList[(int)_ID.ID_NORMALCONSUMETYPE] as string);
_values.m_YuanBaoConsumeNum =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOCONSUMENUM] as string);
_values.m_YuanBaoConsumeSubType =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOCONSUMESUBTYPE] as string);
_values.m_YuanBaoConsumeType =  Convert.ToInt32(valuesList[(int)_ID.ID_YUANBAOCONSUMETYPE] as string);

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

