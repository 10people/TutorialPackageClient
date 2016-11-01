//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SwordsManGainRata
{ private const string TAB_FILE_DATA = "Tables/SwordsManGainRata.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_STATEUPRATA=2,
ID_STATEKEEPRATA,
ID_STATEDOWNRATA,
ID_COSTCOINNUM,
ID_REWARDSCORE,
ID_WHITERATA,
ID_GREENRATA,
ID_BLUERATA,
ID_PRUPLERATA,
ID_ORANGERATA,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BlueRata;
 public int BlueRata { get{ return m_BlueRata;}}

private int m_CostCoinNum;
 public int CostCoinNum { get{ return m_CostCoinNum;}}

private int m_GreenRata;
 public int GreenRata { get{ return m_GreenRata;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_OrangeRata;
 public int OrangeRata { get{ return m_OrangeRata;}}

private int m_PrupleRata;
 public int PrupleRata { get{ return m_PrupleRata;}}

private int m_RewardScore;
 public int RewardScore { get{ return m_RewardScore;}}

private int m_StateDownRata;
 public int StateDownRata { get{ return m_StateDownRata;}}

private int m_StateKeepRata;
 public int StateKeepRata { get{ return m_StateKeepRata;}}

private int m_StateUpRata;
 public int StateUpRata { get{ return m_StateUpRata;}}

private int m_WhiteRata;
 public int WhiteRata { get{ return m_WhiteRata;}}

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
 Tab_SwordsManGainRata _values = new Tab_SwordsManGainRata();
 _values.m_BlueRata =  Convert.ToInt32(valuesList[(int)_ID.ID_BLUERATA] as string);
_values.m_CostCoinNum =  Convert.ToInt32(valuesList[(int)_ID.ID_COSTCOINNUM] as string);
_values.m_GreenRata =  Convert.ToInt32(valuesList[(int)_ID.ID_GREENRATA] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_OrangeRata =  Convert.ToInt32(valuesList[(int)_ID.ID_ORANGERATA] as string);
_values.m_PrupleRata =  Convert.ToInt32(valuesList[(int)_ID.ID_PRUPLERATA] as string);
_values.m_RewardScore =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDSCORE] as string);
_values.m_StateDownRata =  Convert.ToInt32(valuesList[(int)_ID.ID_STATEDOWNRATA] as string);
_values.m_StateKeepRata =  Convert.ToInt32(valuesList[(int)_ID.ID_STATEKEEPRATA] as string);
_values.m_StateUpRata =  Convert.ToInt32(valuesList[(int)_ID.ID_STATEUPRATA] as string);
_values.m_WhiteRata =  Convert.ToInt32(valuesList[(int)_ID.ID_WHITERATA] as string);

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

