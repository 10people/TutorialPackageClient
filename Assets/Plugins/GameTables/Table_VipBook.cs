//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_VipBook
{ private const string TAB_FILE_DATA = "Tables/VipBook.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_VIPCOST=2,
ID_VIPBAG,
ID_VIPSTORAGE,
ID_SCENEID0,
ID_BUYCOUNT0,
ID_SWEEPCOUNT0,
ID_SCENEID1,
ID_BUYCOUNT1,
ID_SWEEPCOUNT1,
ID_SCENEID2,
ID_BUYCOUNT2,
ID_SWEEPCOUNT2,
ID_SCENEID3,
ID_BUYCOUNT3,
ID_SWEEPCOUNT3,
ID_SCENEID4,
ID_BUYCOUNT4,
ID_SWEEPCOUNT4,
ID_SCENEID5,
ID_BUYCOUNT5,
ID_SWEEPCOUNT5,
ID_STORYSCENEID,
ID_BUYSTORYSCENECOUNT,
ID_STORYSCENESWEEPCOUNT,
ID_VIPMONEYTREE,
ID_SCENETOWER,
ID_TEAMSCENEID0,
ID_BUYTEAMSCENECOUNT0,
ID_TEAMSCENEID1,
ID_BUYTEAMSCENECOUNT1,
ID_TEAMSCENEID2,
ID_BUYTEAMSCENECOUNT2,
ID_VIPITEM1,
ID_VIPITEM2,
ID_VIPITEM3,
ID_VIPITEM4,
ID_VIPITEM5,
ID_ITEMCOUNT,
ID_VIPADD1,
ID_VIPADD2,
ID_VIPADD3,
ID_VIPADD4,
ID_VIPADD5,
ID_ADDCOUNT,
ID_SDCOST,
ID_HICHALLENGE,
ID_NEW1VIPADD1,
ID_NEW1VIPADD2,
ID_NEW1VIPADD3,
ID_NEW1VIPADD4,
ID_NEW1VIPADD5,
ID_NEW1ADDCOUNT,
ID_NEW2VIPADD1,
ID_NEW2VIPADD2,
ID_NEW2VIPADD3,
ID_NEW2VIPADD4,
ID_NEW2VIPADD5,
ID_NEW2ADDCOUNT,
ID_NEW3VIPADD1,
ID_NEW3VIPADD2,
ID_NEW3VIPADD3,
ID_NEW3VIPADD4,
ID_NEW3VIPADD5,
ID_NEW3ADDCOUNT,
ID_NEW4VIPADD1,
ID_NEW4VIPADD2,
ID_NEW4VIPADD3,
ID_NEW4VIPADD4,
ID_NEW4VIPADD5,
ID_NEW4ADDCOUNT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AddCount;
 public int AddCount { get{ return m_AddCount;}}

public int getBuyCountCount() { return 6; } 
 private int[] m_BuyCount = new int[6];
 public int GetBuyCountbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_BuyCount[idx];
 return -1;
 }

private int m_BuyStorySceneCount;
 public int BuyStorySceneCount { get{ return m_BuyStorySceneCount;}}

public int getBuyTeamSceneCountCount() { return 3; } 
 private int[] m_BuyTeamSceneCount = new int[3];
 public int GetBuyTeamSceneCountbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_BuyTeamSceneCount[idx];
 return -1;
 }

private int m_HiChallenge;
 public int HiChallenge { get{ return m_HiChallenge;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_ItemCount;
 public int ItemCount { get{ return m_ItemCount;}}

private int m_New1AddCount;
 public int New1AddCount { get{ return m_New1AddCount;}}

public int getNew1VipAddCount() { return 5; } 
 private int[] m_New1VipAdd = new int[5];
 public int GetNew1VipAddbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_New1VipAdd[idx];
 return -1;
 }

private int m_New2AddCount;
 public int New2AddCount { get{ return m_New2AddCount;}}

public int getNew2VipAddCount() { return 5; } 
 private int[] m_New2VipAdd = new int[5];
 public int GetNew2VipAddbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_New2VipAdd[idx];
 return -1;
 }

private int m_New3AddCount;
 public int New3AddCount { get{ return m_New3AddCount;}}

public int getNew3VipAddCount() { return 5; } 
 private int[] m_New3VipAdd = new int[5];
 public int GetNew3VipAddbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_New3VipAdd[idx];
 return -1;
 }

private int m_New4AddCount;
 public int New4AddCount { get{ return m_New4AddCount;}}

public int getNew4VipAddCount() { return 5; } 
 private int[] m_New4VipAdd = new int[5];
 public int GetNew4VipAddbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_New4VipAdd[idx];
 return -1;
 }

private int m_SDCost;
 public int SDCost { get{ return m_SDCost;}}

public int getSceneIdCount() { return 6; } 
 private int[] m_SceneId = new int[6];
 public int GetSceneIdbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_SceneId[idx];
 return -1;
 }

private int m_SceneTower;
 public int SceneTower { get{ return m_SceneTower;}}

private int m_StorySceneId;
 public int StorySceneId { get{ return m_StorySceneId;}}

private int m_StorySceneSweepCount;
 public int StorySceneSweepCount { get{ return m_StorySceneSweepCount;}}

public int getSweepCountCount() { return 6; } 
 private int[] m_SweepCount = new int[6];
 public int GetSweepCountbyIndex(int idx) {
 if(idx>=0 && idx<6) return m_SweepCount[idx];
 return -1;
 }

public int getTeamSceneIdCount() { return 3; } 
 private int[] m_TeamSceneId = new int[3];
 public int GetTeamSceneIdbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_TeamSceneId[idx];
 return -1;
 }

public int getVipAddCount() { return 5; } 
 private int[] m_VipAdd = new int[5];
 public int GetVipAddbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_VipAdd[idx];
 return -1;
 }

private int m_VipBag;
 public int VipBag { get{ return m_VipBag;}}

private int m_VipCost;
 public int VipCost { get{ return m_VipCost;}}

public int getVipItemCount() { return 5; } 
 private int[] m_VipItem = new int[5];
 public int GetVipItembyIndex(int idx) {
 if(idx>=0 && idx<5) return m_VipItem[idx];
 return -1;
 }

private int m_VipMoneyTree;
 public int VipMoneyTree { get{ return m_VipMoneyTree;}}

private int m_VipStorage;
 public int VipStorage { get{ return m_VipStorage;}}

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
 Tab_VipBook _values = new Tab_VipBook();
 _values.m_AddCount =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDCOUNT] as string);
_values.m_BuyCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYCOUNT0] as string);
_values.m_BuyCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYCOUNT1] as string);
_values.m_BuyCount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYCOUNT2] as string);
_values.m_BuyCount [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYCOUNT3] as string);
_values.m_BuyCount [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYCOUNT4] as string);
_values.m_BuyCount [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYCOUNT5] as string);
_values.m_BuyStorySceneCount =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYSTORYSCENECOUNT] as string);
_values.m_BuyTeamSceneCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYTEAMSCENECOUNT0] as string);
_values.m_BuyTeamSceneCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYTEAMSCENECOUNT1] as string);
_values.m_BuyTeamSceneCount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYTEAMSCENECOUNT2] as string);
_values.m_HiChallenge =  Convert.ToInt32(valuesList[(int)_ID.ID_HICHALLENGE] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemCount =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT] as string);
_values.m_New1AddCount =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW1ADDCOUNT] as string);
_values.m_New1VipAdd [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW1VIPADD1] as string);
_values.m_New1VipAdd [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW1VIPADD2] as string);
_values.m_New1VipAdd [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW1VIPADD3] as string);
_values.m_New1VipAdd [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW1VIPADD4] as string);
_values.m_New1VipAdd [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW1VIPADD5] as string);
_values.m_New2AddCount =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW2ADDCOUNT] as string);
_values.m_New2VipAdd [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW2VIPADD1] as string);
_values.m_New2VipAdd [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW2VIPADD2] as string);
_values.m_New2VipAdd [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW2VIPADD3] as string);
_values.m_New2VipAdd [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW2VIPADD4] as string);
_values.m_New2VipAdd [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW2VIPADD5] as string);
_values.m_New3AddCount =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW3ADDCOUNT] as string);
_values.m_New3VipAdd [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW3VIPADD1] as string);
_values.m_New3VipAdd [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW3VIPADD2] as string);
_values.m_New3VipAdd [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW3VIPADD3] as string);
_values.m_New3VipAdd [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW3VIPADD4] as string);
_values.m_New3VipAdd [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW3VIPADD5] as string);
_values.m_New4AddCount =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW4ADDCOUNT] as string);
_values.m_New4VipAdd [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW4VIPADD1] as string);
_values.m_New4VipAdd [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW4VIPADD2] as string);
_values.m_New4VipAdd [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW4VIPADD3] as string);
_values.m_New4VipAdd [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW4VIPADD4] as string);
_values.m_New4VipAdd [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NEW4VIPADD5] as string);
_values.m_SDCost =  Convert.ToInt32(valuesList[(int)_ID.ID_SDCOST] as string);
_values.m_SceneId [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEID0] as string);
_values.m_SceneId [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEID1] as string);
_values.m_SceneId [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEID2] as string);
_values.m_SceneId [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEID3] as string);
_values.m_SceneId [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEID4] as string);
_values.m_SceneId [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEID5] as string);
_values.m_SceneTower =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENETOWER] as string);
_values.m_StorySceneId =  Convert.ToInt32(valuesList[(int)_ID.ID_STORYSCENEID] as string);
_values.m_StorySceneSweepCount =  Convert.ToInt32(valuesList[(int)_ID.ID_STORYSCENESWEEPCOUNT] as string);
_values.m_SweepCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SWEEPCOUNT0] as string);
_values.m_SweepCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SWEEPCOUNT1] as string);
_values.m_SweepCount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SWEEPCOUNT2] as string);
_values.m_SweepCount [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SWEEPCOUNT3] as string);
_values.m_SweepCount [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SWEEPCOUNT4] as string);
_values.m_SweepCount [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_SWEEPCOUNT5] as string);
_values.m_TeamSceneId [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TEAMSCENEID0] as string);
_values.m_TeamSceneId [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TEAMSCENEID1] as string);
_values.m_TeamSceneId [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TEAMSCENEID2] as string);
_values.m_VipAdd [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPADD1] as string);
_values.m_VipAdd [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPADD2] as string);
_values.m_VipAdd [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPADD3] as string);
_values.m_VipAdd [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPADD4] as string);
_values.m_VipAdd [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPADD5] as string);
_values.m_VipBag =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPBAG] as string);
_values.m_VipCost =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPCOST] as string);
_values.m_VipItem [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPITEM1] as string);
_values.m_VipItem [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPITEM2] as string);
_values.m_VipItem [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPITEM3] as string);
_values.m_VipItem [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPITEM4] as string);
_values.m_VipItem [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPITEM5] as string);
_values.m_VipMoneyTree =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPMONEYTREE] as string);
_values.m_VipStorage =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPSTORAGE] as string);

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

