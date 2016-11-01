//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ShareReward
{ private const string TAB_FILE_DATA = "Tables/ShareReward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_SHAREREWARDBINDYUANBAO=2,
ID_TARGETTYPE1,
ID_ITEMDATAID1,
ID_TARGETTYPE2,
ID_ITEMDATAID2,
ID_TARGETTYPE3,
ID_ITEMDATAID3,
ID_TARGETTYPE4,
ID_ITEMDATAID4,
ID_TARGETTYPE5,
ID_ITEMDATAID5,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Index;
 public int Index { get{ return m_Index;}}

public int getItemDataIdCount() { return 5; } 
 private int[] m_ItemDataId = new int[5];
 public int GetItemDataIdbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_ItemDataId[idx];
 return -1;
 }

private int m_ShareRewardBindYuanBao;
 public int ShareRewardBindYuanBao { get{ return m_ShareRewardBindYuanBao;}}

public int getTargetTypeCount() { return 5; } 
 private int[] m_TargetType = new int[5];
 public int GetTargetTypebyIndex(int idx) {
 if(idx>=0 && idx<5) return m_TargetType[idx];
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
 Tab_ShareReward _values = new Tab_ShareReward();
 _values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_ItemDataId [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID1] as string);
_values.m_ItemDataId [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID2] as string);
_values.m_ItemDataId [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID3] as string);
_values.m_ItemDataId [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID4] as string);
_values.m_ItemDataId [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMDATAID5] as string);
_values.m_ShareRewardBindYuanBao =  Convert.ToInt32(valuesList[(int)_ID.ID_SHAREREWARDBINDYUANBAO] as string);
_values.m_TargetType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETTYPE1] as string);
_values.m_TargetType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETTYPE2] as string);
_values.m_TargetType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETTYPE3] as string);
_values.m_TargetType [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETTYPE4] as string);
_values.m_TargetType [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETTYPE5] as string);

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

