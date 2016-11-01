//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_FlyWing
{ private const string TAB_FILE_DATA = "Tables/FlyWing.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_ID=2,
ID_DUTY,
ID_NAME,
ID_MODE,
ID_LEVEL,
ID_BASE1ID,
ID_BASE1VLUE,
ID_BASE2ID,
ID_BASE2VLUE,
ID_BASE3ID,
ID_BASE3VLUE,
ID_BASE4ID,
ID_BASE4VLUE,
ID_BASE5ID,
ID_BASE5VLUE,
ID_BASE6ID,
ID_BASE6VLUE,
ID_ABSORBNUM,
ID_ABSORBID,
ID_ABSORBVLUE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ABSORBID;
 public int ABSORBID { get{ return m_ABSORBID;}}

private int m_ABSORBNUM;
 public int ABSORBNUM { get{ return m_ABSORBNUM;}}

private int m_ABSORBVLUE;
 public int ABSORBVLUE { get{ return m_ABSORBVLUE;}}

private int m_BASE1ID;
 public int BASE1ID { get{ return m_BASE1ID;}}

private int m_BASE1VLUE;
 public int BASE1VLUE { get{ return m_BASE1VLUE;}}

private int m_BASE2ID;
 public int BASE2ID { get{ return m_BASE2ID;}}

private int m_BASE2VLUE;
 public int BASE2VLUE { get{ return m_BASE2VLUE;}}

private int m_BASE3ID;
 public int BASE3ID { get{ return m_BASE3ID;}}

private int m_BASE3VLUE;
 public int BASE3VLUE { get{ return m_BASE3VLUE;}}

private int m_BASE4ID;
 public int BASE4ID { get{ return m_BASE4ID;}}

private int m_BASE4VLUE;
 public int BASE4VLUE { get{ return m_BASE4VLUE;}}

private int m_BASE5ID;
 public int BASE5ID { get{ return m_BASE5ID;}}

private int m_BASE5VLUE;
 public int BASE5VLUE { get{ return m_BASE5VLUE;}}

private int m_BASE6ID;
 public int BASE6ID { get{ return m_BASE6ID;}}

private int m_BASE6VLUE;
 public int BASE6VLUE { get{ return m_BASE6VLUE;}}

private int m_Duty;
 public int Duty { get{ return m_Duty;}}

private int m_ID;
 public int ID { get{ return m_ID;}}

private int m_INDEX;
 public int INDEX { get{ return m_INDEX;}}

private int m_LEVEL;
 public int LEVEL { get{ return m_LEVEL;}}

private string m_MODE;
 public string MODE { get{ return m_MODE;}}

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
 Tab_FlyWing _values = new Tab_FlyWing();
 _values.m_ABSORBID =  Convert.ToInt32(valuesList[(int)_ID.ID_ABSORBID] as string);
_values.m_ABSORBNUM =  Convert.ToInt32(valuesList[(int)_ID.ID_ABSORBNUM] as string);
_values.m_ABSORBVLUE =  Convert.ToInt32(valuesList[(int)_ID.ID_ABSORBVLUE] as string);
_values.m_BASE1ID =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE1ID] as string);
_values.m_BASE1VLUE =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE1VLUE] as string);
_values.m_BASE2ID =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE2ID] as string);
_values.m_BASE2VLUE =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE2VLUE] as string);
_values.m_BASE3ID =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE3ID] as string);
_values.m_BASE3VLUE =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE3VLUE] as string);
_values.m_BASE4ID =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE4ID] as string);
_values.m_BASE4VLUE =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE4VLUE] as string);
_values.m_BASE5ID =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE5ID] as string);
_values.m_BASE5VLUE =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE5VLUE] as string);
_values.m_BASE6ID =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE6ID] as string);
_values.m_BASE6VLUE =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE6VLUE] as string);
_values.m_Duty =  Convert.ToInt32(valuesList[(int)_ID.ID_DUTY] as string);
_values.m_ID =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_INDEX =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_LEVEL =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_MODE =  valuesList[(int)_ID.ID_MODE] as string;
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

