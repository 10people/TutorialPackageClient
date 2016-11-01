//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_TestTable
{ private const string TAB_FILE_DATA = "Tables/TestTable.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_SEX,
ID_LEVEL,
ID_HP,
ID_MP,
ID_ACT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Act;
 public int Act { get{ return m_Act;}}

private int m_HP;
 public int HP { get{ return m_HP;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private short m_Level;
 public short Level { get{ return m_Level;}}

private byte m_MP;
 public byte MP { get{ return m_MP;}}

private string m_NAME;
 public string NAME { get{ return m_NAME;}}

private bool m_SEX;
 public bool SEX { get{ return m_SEX;}}

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
 Tab_TestTable _values = new Tab_TestTable();
 _values.m_Act =  Convert.ToInt32(valuesList[(int)_ID.ID_ACT] as string);
_values.m_HP =  Convert.ToInt32(valuesList[(int)_ID.ID_HP] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Level =  Convert.ToInt16(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_MP =  Convert.ToByte(valuesList[(int)_ID.ID_MP] as string,10);
_values.m_NAME =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_SEX =  Convert.ToInt16(valuesList[(int)_ID.ID_SEX] as string) != 0;

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

