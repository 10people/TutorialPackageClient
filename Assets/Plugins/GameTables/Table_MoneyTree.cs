//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MoneyTree
{ private const string TAB_FILE_DATA = "Tables/MoneyTree.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_LEFTTIME=2,
ID_MONEY,
ID_BINDYUANBAO,
ID_FCATOR_A,
ID_FCATOR_B,
ID_FCATOR_C,
ID_FCATOR_D,
ID_FCATOR_E,
ID_FCATOR_F,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BindYuanbao;
 public int BindYuanbao { get{ return m_BindYuanbao;}}

private float m_FcatorA;
 public float FcatorA { get{ return m_FcatorA;}}

private float m_FcatorB;
 public float FcatorB { get{ return m_FcatorB;}}

private float m_FcatorC;
 public float FcatorC { get{ return m_FcatorC;}}

private float m_FcatorD;
 public float FcatorD { get{ return m_FcatorD;}}

private float m_FcatorE;
 public float FcatorE { get{ return m_FcatorE;}}

private float m_FcatorF;
 public float FcatorF { get{ return m_FcatorF;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_LeftTime;
 public int LeftTime { get{ return m_LeftTime;}}

private int m_Money;
 public int Money { get{ return m_Money;}}

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
 Tab_MoneyTree _values = new Tab_MoneyTree();
 _values.m_BindYuanbao =  Convert.ToInt32(valuesList[(int)_ID.ID_BINDYUANBAO] as string);
_values.m_FcatorA =  Convert.ToSingle(valuesList[(int)_ID.ID_FCATOR_A] as string );
_values.m_FcatorB =  Convert.ToSingle(valuesList[(int)_ID.ID_FCATOR_B] as string );
_values.m_FcatorC =  Convert.ToSingle(valuesList[(int)_ID.ID_FCATOR_C] as string );
_values.m_FcatorD =  Convert.ToSingle(valuesList[(int)_ID.ID_FCATOR_D] as string );
_values.m_FcatorE =  Convert.ToSingle(valuesList[(int)_ID.ID_FCATOR_E] as string );
_values.m_FcatorF =  Convert.ToSingle(valuesList[(int)_ID.ID_FCATOR_F] as string );
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LeftTime =  Convert.ToInt32(valuesList[(int)_ID.ID_LEFTTIME] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);

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

