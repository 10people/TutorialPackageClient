//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;
 using UnityEngine;
 using System.IO;

namespace GCGame.Table{
public delegate void SerializableTable(string[] valuesList, int skey, Dictionary<int, List<object> > _hash);
 public class TableManager
 {
 private static string GetLoadPath(string localName)
 {
 string localPath = Application.persistentDataPath + "/ResData/Tables/" + localName + ".txt";
 if (File.Exists(localPath))
 {
 return localPath;
 }
 #if UNITY_ANDROID && !UNITY_EDITOR
 return localPath;
 #elif UNITY_EDITOR
 return Application.dataPath + "/BundleAssets/Tables/" + localName + ".txt";
 #else
 return Application.streamingAssetsPath + "/Tables/" + localName + ".txt";
 #endif
 }
 private static string[] MySplit(string str, string[] nTypeList, string regix)
 {
 if (string.IsNullOrEmpty(str))
 {
 return null;
 }
 String[] content = new String[nTypeList.Length];
 int nIndex = 0;
 int nstartPos = 0;
 while (nstartPos <= str.Length)
 {
 int nsPos = str.IndexOf(regix, nstartPos);
 if (nsPos < 0)
 {
 String lastdataString = str.Substring(nstartPos);
 if (string.IsNullOrEmpty(lastdataString) && nTypeList[nIndex].ToLower() != "string")
 {
 content[nIndex++] = "--";
 }
 else
 {
 content[nIndex++] = lastdataString;
 }
 break;
 }
 else
 {
 if (nstartPos == nsPos)
 {
 if (nTypeList[nIndex].ToLower() != "string")
 {
 content[nIndex++] = "--";
 }
 else
 {
 content[nIndex++] = "";
 }
 }
 else
 {
 content[nIndex++] = str.Substring(nstartPos, nsPos - nstartPos);
 }
 nstartPos = nsPos + 1;
 }
 }
 return content;
 }
 public static bool ReaderPList(String xmlFile, SerializableTable _fun, Dictionary<int, List<object> > _hash)
 {
 string m_Key="";
 string[] m_Value=null;
 string[] list= xmlFile.Split('.'); 
 string relTablePath = list[0].Substring(7);
 string tableFilePath = GetLoadPath(relTablePath);
 string[] alldataRow;
 if (File.Exists(tableFilePath))
 {
 StreamReader sr = null;
 sr = File.OpenText(tableFilePath);
 string tableData = sr.ReadToEnd();
 sr.Close();
 alldataRow = tableData.Split('\n');
 sr.Dispose(); }
 else
 {
 TextAsset testAsset = Resources.Load(list[0], typeof(TextAsset)) as TextAsset;
 alldataRow = testAsset.text.Split('\n');
 }
 //skip fort three
 int skip = 0;
 string[] typeList = null;
 foreach (string line in alldataRow)
 {
 int nKey = -1;
 if (skip == 1)
 {
 string sztemp = line;
 if (sztemp.Length >= 1)
 {
 if (sztemp[sztemp.Length - 1] == '\r')
 {
 sztemp = sztemp.TrimEnd('\r');
 }
 }
 typeList = line.Split('\t');
 m_Value = new string[typeList.Length];
 ++skip;
 continue;
 }
 if (++skip < 4) continue;
 if (String.IsNullOrEmpty(line)) continue;
 if(line[0] == '#')continue;
 string szlinetemp = line;
 if (szlinetemp.Length >= 1)
 {
 if (szlinetemp[szlinetemp.Length - 1] == '\r')
 {
 szlinetemp = szlinetemp.TrimEnd('\r');
 }
 }
 string[] strCol = MySplit(szlinetemp, typeList, "\t");
 if (strCol.Length == 0) continue;
 string skey = strCol[0];
 string[] valuesList = new string[strCol.Length];

 if (string.IsNullOrEmpty(skey) || skey.Equals("--"))
 {
 skey = m_Key;
 nKey = Int32.Parse(skey); 
 valuesList[0] = skey;
 for (int i = 1; i < strCol.Length; ++i)
 {
 if (String.IsNullOrEmpty(strCol[i]) || strCol[i]=="--")
 { valuesList[i] = m_Value[i];
 }
 else
 {
 valuesList[i] = strCol[i];
 m_Value[i] = strCol[i];
 }
 }

 } else
 {
 m_Key = skey; 
 nKey = Int32.Parse(skey); 
 
 for (int i = 0; i < strCol.Length; ++i)

 { if (strCol[i] == "--")
 {
 valuesList[i] = "0";
 m_Value[i] = "0";
 }
 else
 {
 valuesList[i] = strCol[i];
 m_Value[i] = strCol[i];
 }
 }
 }
 _fun(valuesList, nKey, _hash);
 }
 return true;
 }

private static Dictionary<int, List<Tab_AchieveNotice> > g_AchieveNotice = new Dictionary<int, List<Tab_AchieveNotice> >(); 
 public static bool InitTable_AchieveNotice()
 {
 g_AchieveNotice.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_AchieveNotice.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_AchieveNotice> values = new List<Tab_AchieveNotice>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_AchieveNotice)subit);
 }
 g_AchieveNotice.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ActivenessAward> > g_ActivenessAward = new Dictionary<int, List<Tab_ActivenessAward> >(); 
 public static bool InitTable_ActivenessAward()
 {
 g_ActivenessAward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ActivenessAward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ActivenessAward> values = new List<Tab_ActivenessAward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ActivenessAward)subit);
 }
 g_ActivenessAward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Animation> > g_Animation = new Dictionary<int, List<Tab_Animation> >(); 
 public static bool InitTable_Animation()
 {
 g_Animation.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Animation.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Animation> values = new List<Tab_Animation>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Animation)subit);
 }
 g_Animation.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_AnimationCurve> > g_AnimationCurve = new Dictionary<int, List<Tab_AnimationCurve> >(); 
 public static bool InitTable_AnimationCurve()
 {
 g_AnimationCurve.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_AnimationCurve.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_AnimationCurve> values = new List<Tab_AnimationCurve>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_AnimationCurve)subit);
 }
 g_AnimationCurve.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_AutoSearch> > g_AutoSearch = new Dictionary<int, List<Tab_AutoSearch> >(); 
 public static bool InitTable_AutoSearch()
 {
 g_AutoSearch.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_AutoSearch.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_AutoSearch> values = new List<Tab_AutoSearch>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_AutoSearch)subit);
 }
 g_AutoSearch.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BackPackUnlock> > g_BackPackUnlock = new Dictionary<int, List<Tab_BackPackUnlock> >(); 
 public static bool InitTable_BackPackUnlock()
 {
 g_BackPackUnlock.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BackPackUnlock.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BackPackUnlock> values = new List<Tab_BackPackUnlock>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BackPackUnlock)subit);
 }
 g_BackPackUnlock.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BePowerLevel> > g_BePowerLevel = new Dictionary<int, List<Tab_BePowerLevel> >(); 
 public static bool InitTable_BePowerLevel()
 {
 g_BePowerLevel.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BePowerLevel.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BePowerLevel> values = new List<Tab_BePowerLevel>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BePowerLevel)subit);
 }
 g_BePowerLevel.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Belle> > g_Belle = new Dictionary<int, List<Tab_Belle> >(); 
 public static bool InitTable_Belle()
 {
 g_Belle.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Belle.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Belle> values = new List<Tab_Belle>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Belle)subit);
 }
 g_Belle.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BelleAddition> > g_BelleAddition = new Dictionary<int, List<Tab_BelleAddition> >(); 
 public static bool InitTable_BelleAddition()
 {
 g_BelleAddition.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BelleAddition.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BelleAddition> values = new List<Tab_BelleAddition>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BelleAddition)subit);
 }
 g_BelleAddition.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BelleAward> > g_BelleAward = new Dictionary<int, List<Tab_BelleAward> >(); 
 public static bool InitTable_BelleAward()
 {
 g_BelleAward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BelleAward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BelleAward> values = new List<Tab_BelleAward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BelleAward)subit);
 }
 g_BelleAward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BelleCloseCost> > g_BelleCloseCost = new Dictionary<int, List<Tab_BelleCloseCost> >(); 
 public static bool InitTable_BelleCloseCost()
 {
 g_BelleCloseCost.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BelleCloseCost.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BelleCloseCost> values = new List<Tab_BelleCloseCost>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BelleCloseCost)subit);
 }
 g_BelleCloseCost.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BelleCloseLevel> > g_BelleCloseLevel = new Dictionary<int, List<Tab_BelleCloseLevel> >(); 
 public static bool InitTable_BelleCloseLevel()
 {
 g_BelleCloseLevel.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BelleCloseLevel.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BelleCloseLevel> values = new List<Tab_BelleCloseLevel>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BelleCloseLevel)subit);
 }
 g_BelleCloseLevel.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BelleFightShow> > g_BelleFightShow = new Dictionary<int, List<Tab_BelleFightShow> >(); 
 public static bool InitTable_BelleFightShow()
 {
 g_BelleFightShow.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BelleFightShow.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BelleFightShow> values = new List<Tab_BelleFightShow>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BelleFightShow)subit);
 }
 g_BelleFightShow.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BelleGetItemWay> > g_BelleGetItemWay = new Dictionary<int, List<Tab_BelleGetItemWay> >(); 
 public static bool InitTable_BelleGetItemWay()
 {
 g_BelleGetItemWay.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BelleGetItemWay.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BelleGetItemWay> values = new List<Tab_BelleGetItemWay>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BelleGetItemWay)subit);
 }
 g_BelleGetItemWay.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BelleLevelup> > g_BelleLevelup = new Dictionary<int, List<Tab_BelleLevelup> >(); 
 public static bool InitTable_BelleLevelup()
 {
 g_BelleLevelup.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BelleLevelup.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BelleLevelup> values = new List<Tab_BelleLevelup>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BelleLevelup)subit);
 }
 g_BelleLevelup.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BelleMatrix> > g_BelleMatrix = new Dictionary<int, List<Tab_BelleMatrix> >(); 
 public static bool InitTable_BelleMatrix()
 {
 g_BelleMatrix.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BelleMatrix.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BelleMatrix> values = new List<Tab_BelleMatrix>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BelleMatrix)subit);
 }
 g_BelleMatrix.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BelleMatrixAddition> > g_BelleMatrixAddition = new Dictionary<int, List<Tab_BelleMatrixAddition> >(); 
 public static bool InitTable_BelleMatrixAddition()
 {
 g_BelleMatrixAddition.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BelleMatrixAddition.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BelleMatrixAddition> values = new List<Tab_BelleMatrixAddition>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BelleMatrixAddition)subit);
 }
 g_BelleMatrixAddition.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_BiographyItem> > g_BiographyItem = new Dictionary<int, List<Tab_BiographyItem> >(); 
 public static bool InitTable_BiographyItem()
 {
 g_BiographyItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_BiographyItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_BiographyItem> values = new List<Tab_BiographyItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_BiographyItem)subit);
 }
 g_BiographyItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CabalFellowAttr> > g_CabalFellowAttr = new Dictionary<int, List<Tab_CabalFellowAttr> >(); 
 public static bool InitTable_CabalFellowAttr()
 {
 g_CabalFellowAttr.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CabalFellowAttr.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CabalFellowAttr> values = new List<Tab_CabalFellowAttr>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CabalFellowAttr)subit);
 }
 g_CabalFellowAttr.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CabalFellowElementSkill> > g_CabalFellowElementSkill = new Dictionary<int, List<Tab_CabalFellowElementSkill> >(); 
 public static bool InitTable_CabalFellowElementSkill()
 {
 g_CabalFellowElementSkill.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CabalFellowElementSkill.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CabalFellowElementSkill> values = new List<Tab_CabalFellowElementSkill>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CabalFellowElementSkill)subit);
 }
 g_CabalFellowElementSkill.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CabalFellowElementSkillBook> > g_CabalFellowElementSkillBook = new Dictionary<int, List<Tab_CabalFellowElementSkillBook> >(); 
 public static bool InitTable_CabalFellowElementSkillBook()
 {
 g_CabalFellowElementSkillBook.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CabalFellowElementSkillBook.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CabalFellowElementSkillBook> values = new List<Tab_CabalFellowElementSkillBook>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CabalFellowElementSkillBook)subit);
 }
 g_CabalFellowElementSkillBook.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CabalFellowStar> > g_CabalFellowStar = new Dictionary<int, List<Tab_CabalFellowStar> >(); 
 public static bool InitTable_CabalFellowStar()
 {
 g_CabalFellowStar.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CabalFellowStar.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CabalFellowStar> values = new List<Tab_CabalFellowStar>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CabalFellowStar)subit);
 }
 g_CabalFellowStar.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CabalFellowTallentSkill> > g_CabalFellowTallentSkill = new Dictionary<int, List<Tab_CabalFellowTallentSkill> >(); 
 public static bool InitTable_CabalFellowTallentSkill()
 {
 g_CabalFellowTallentSkill.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CabalFellowTallentSkill.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CabalFellowTallentSkill> values = new List<Tab_CabalFellowTallentSkill>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CabalFellowTallentSkill)subit);
 }
 g_CabalFellowTallentSkill.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CabalFellowTallentSkillBook> > g_CabalFellowTallentSkillBook = new Dictionary<int, List<Tab_CabalFellowTallentSkillBook> >(); 
 public static bool InitTable_CabalFellowTallentSkillBook()
 {
 g_CabalFellowTallentSkillBook.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CabalFellowTallentSkillBook.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CabalFellowTallentSkillBook> values = new List<Tab_CabalFellowTallentSkillBook>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CabalFellowTallentSkillBook)subit);
 }
 g_CabalFellowTallentSkillBook.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CameraRock> > g_CameraRock = new Dictionary<int, List<Tab_CameraRock> >(); 
 public static bool InitTable_CameraRock()
 {
 g_CameraRock.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CameraRock.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CameraRock> values = new List<Tab_CameraRock>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CameraRock)subit);
 }
 g_CameraRock.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CangJingGeExtraReward> > g_CangJingGeExtraReward = new Dictionary<int, List<Tab_CangJingGeExtraReward> >(); 
 public static bool InitTable_CangJingGeExtraReward()
 {
 g_CangJingGeExtraReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CangJingGeExtraReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CangJingGeExtraReward> values = new List<Tab_CangJingGeExtraReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CangJingGeExtraReward)subit);
 }
 g_CangJingGeExtraReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CangJingGeInfo> > g_CangJingGeInfo = new Dictionary<int, List<Tab_CangJingGeInfo> >(); 
 public static bool InitTable_CangJingGeInfo()
 {
 g_CangJingGeInfo.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CangJingGeInfo.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CangJingGeInfo> values = new List<Tab_CangJingGeInfo>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CangJingGeInfo)subit);
 }
 g_CangJingGeInfo.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CangKuUnlock> > g_CangKuUnlock = new Dictionary<int, List<Tab_CangKuUnlock> >(); 
 public static bool InitTable_CangKuUnlock()
 {
 g_CangKuUnlock.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CangKuUnlock.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CangKuUnlock> values = new List<Tab_CangKuUnlock>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CangKuUnlock)subit);
 }
 g_CangKuUnlock.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CharModel> > g_CharModel = new Dictionary<int, List<Tab_CharModel> >(); 
 public static bool InitTable_CharModel()
 {
 g_CharModel.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CharModel.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CharModel> values = new List<Tab_CharModel>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CharModel)subit);
 }
 g_CharModel.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CharMount> > g_CharMount = new Dictionary<int, List<Tab_CharMount> >(); 
 public static bool InitTable_CharMount()
 {
 g_CharMount.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CharMount.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CharMount> values = new List<Tab_CharMount>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CharMount)subit);
 }
 g_CharMount.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CharmItem> > g_CharmItem = new Dictionary<int, List<Tab_CharmItem> >(); 
 public static bool InitTable_CharmItem()
 {
 g_CharmItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CharmItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CharmItem> values = new List<Tab_CharmItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CharmItem)subit);
 }
 g_CharmItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ChristmasMeterialItem> > g_ChristmasMeterialItem = new Dictionary<int, List<Tab_ChristmasMeterialItem> >(); 
 public static bool InitTable_ChristmasMeterialItem()
 {
 g_ChristmasMeterialItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ChristmasMeterialItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ChristmasMeterialItem> values = new List<Tab_ChristmasMeterialItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ChristmasMeterialItem)subit);
 }
 g_ChristmasMeterialItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ChristmasTreeLevelUp> > g_ChristmasTreeLevelUp = new Dictionary<int, List<Tab_ChristmasTreeLevelUp> >(); 
 public static bool InitTable_ChristmasTreeLevelUp()
 {
 g_ChristmasTreeLevelUp.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ChristmasTreeLevelUp.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ChristmasTreeLevelUp> values = new List<Tab_ChristmasTreeLevelUp>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ChristmasTreeLevelUp)subit);
 }
 g_ChristmasTreeLevelUp.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ClientStoryTable> > g_ClientStoryTable = new Dictionary<int, List<Tab_ClientStoryTable> >(); 
 public static bool InitTable_ClientStoryTable()
 {
 g_ClientStoryTable.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ClientStoryTable.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ClientStoryTable> values = new List<Tab_ClientStoryTable>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ClientStoryTable)subit);
 }
 g_ClientStoryTable.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CollectBornMonster> > g_CollectBornMonster = new Dictionary<int, List<Tab_CollectBornMonster> >(); 
 public static bool InitTable_CollectBornMonster()
 {
 g_CollectBornMonster.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CollectBornMonster.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CollectBornMonster> values = new List<Tab_CollectBornMonster>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CollectBornMonster)subit);
 }
 g_CollectBornMonster.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CollectItem> > g_CollectItem = new Dictionary<int, List<Tab_CollectItem> >(); 
 public static bool InitTable_CollectItem()
 {
 g_CollectItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CollectItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CollectItem> values = new List<Tab_CollectItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CollectItem)subit);
 }
 g_CollectItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CommonItem> > g_CommonItem = new Dictionary<int, List<Tab_CommonItem> >(); 
 public static bool InitTable_CommonItem()
 {
 g_CommonItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CommonItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CommonItem> values = new List<Tab_CommonItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CommonItem)subit);
 }
 g_CommonItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CoolDownTime> > g_CoolDownTime = new Dictionary<int, List<Tab_CoolDownTime> >(); 
 public static bool InitTable_CoolDownTime()
 {
 g_CoolDownTime.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CoolDownTime.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CoolDownTime> values = new List<Tab_CoolDownTime>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CoolDownTime)subit);
 }
 g_CoolDownTime.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CopyScene> > g_CopyScene = new Dictionary<int, List<Tab_CopyScene> >(); 
 public static bool InitTable_CopyScene()
 {
 g_CopyScene.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CopyScene.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CopyScene> values = new List<Tab_CopyScene>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CopyScene)subit);
 }
 g_CopyScene.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CopySceneRule> > g_CopySceneRule = new Dictionary<int, List<Tab_CopySceneRule> >(); 
 public static bool InitTable_CopySceneRule()
 {
 g_CopySceneRule.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CopySceneRule.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CopySceneRule> values = new List<Tab_CopySceneRule>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CopySceneRule)subit);
 }
 g_CopySceneRule.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_CopySceneScoreCalc> > g_CopySceneScoreCalc = new Dictionary<int, List<Tab_CopySceneScoreCalc> >(); 
 public static bool InitTable_CopySceneScoreCalc()
 {
 g_CopySceneScoreCalc.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_CopySceneScoreCalc.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_CopySceneScoreCalc> values = new List<Tab_CopySceneScoreCalc>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_CopySceneScoreCalc)subit);
 }
 g_CopySceneScoreCalc.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_DailyLuckyDrawBonusInfo> > g_DailyLuckyDrawBonusInfo = new Dictionary<int, List<Tab_DailyLuckyDrawBonusInfo> >(); 
 public static bool InitTable_DailyLuckyDrawBonusInfo()
 {
 g_DailyLuckyDrawBonusInfo.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_DailyLuckyDrawBonusInfo.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_DailyLuckyDrawBonusInfo> values = new List<Tab_DailyLuckyDrawBonusInfo>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_DailyLuckyDrawBonusInfo)subit);
 }
 g_DailyLuckyDrawBonusInfo.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_DailyLuckyDrawPoolInfo> > g_DailyLuckyDrawPoolInfo = new Dictionary<int, List<Tab_DailyLuckyDrawPoolInfo> >(); 
 public static bool InitTable_DailyLuckyDrawPoolInfo()
 {
 g_DailyLuckyDrawPoolInfo.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_DailyLuckyDrawPoolInfo.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_DailyLuckyDrawPoolInfo> values = new List<Tab_DailyLuckyDrawPoolInfo>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_DailyLuckyDrawPoolInfo)subit);
 }
 g_DailyLuckyDrawPoolInfo.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_DailyMission> > g_DailyMission = new Dictionary<int, List<Tab_DailyMission> >(); 
 public static bool InitTable_DailyMission()
 {
 g_DailyMission.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_DailyMission.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_DailyMission> values = new List<Tab_DailyMission>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_DailyMission)subit);
 }
 g_DailyMission.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_DailyMissionQuality> > g_DailyMissionQuality = new Dictionary<int, List<Tab_DailyMissionQuality> >(); 
 public static bool InitTable_DailyMissionQuality()
 {
 g_DailyMissionQuality.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_DailyMissionQuality.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_DailyMissionQuality> values = new List<Tab_DailyMissionQuality>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_DailyMissionQuality)subit);
 }
 g_DailyMissionQuality.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_DamageBoardType> > g_DamageBoardType = new Dictionary<int, List<Tab_DamageBoardType> >(); 
 public static bool InitTable_DamageBoardType()
 {
 g_DamageBoardType.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_DamageBoardType.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_DamageBoardType> values = new List<Tab_DamageBoardType>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_DamageBoardType)subit);
 }
 g_DamageBoardType.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_DayAward> > g_DayAward = new Dictionary<int, List<Tab_DayAward> >(); 
 public static bool InitTable_DayAward()
 {
 g_DayAward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_DayAward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_DayAward> values = new List<Tab_DayAward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_DayAward)subit);
 }
 g_DayAward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_DropNotify> > g_DropNotify = new Dictionary<int, List<Tab_DropNotify> >(); 
 public static bool InitTable_DropNotify()
 {
 g_DropNotify.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_DropNotify.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_DropNotify> values = new List<Tab_DropNotify>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_DropNotify)subit);
 }
 g_DropNotify.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_DynamicObstacle> > g_DynamicObstacle = new Dictionary<int, List<Tab_DynamicObstacle> >(); 
 public static bool InitTable_DynamicObstacle()
 {
 g_DynamicObstacle.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_DynamicObstacle.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_DynamicObstacle> values = new List<Tab_DynamicObstacle>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_DynamicObstacle)subit);
 }
 g_DynamicObstacle.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Effect> > g_Effect = new Dictionary<int, List<Tab_Effect> >(); 
 public static bool InitTable_Effect()
 {
 g_Effect.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Effect.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Effect> values = new List<Tab_Effect>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Effect)subit);
 }
 g_Effect.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_EffectPoint> > g_EffectPoint = new Dictionary<int, List<Tab_EffectPoint> >(); 
 public static bool InitTable_EffectPoint()
 {
 g_EffectPoint.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_EffectPoint.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_EffectPoint> values = new List<Tab_EffectPoint>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_EffectPoint)subit);
 }
 g_EffectPoint.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_EquipAttr> > g_EquipAttr = new Dictionary<int, List<Tab_EquipAttr> >(); 
 public static bool InitTable_EquipAttr()
 {
 g_EquipAttr.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_EquipAttr.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_EquipAttr> values = new List<Tab_EquipAttr>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_EquipAttr)subit);
 }
 g_EquipAttr.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_EquipEnchance> > g_EquipEnchance = new Dictionary<int, List<Tab_EquipEnchance> >(); 
 public static bool InitTable_EquipEnchance()
 {
 g_EquipEnchance.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_EquipEnchance.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_EquipEnchance> values = new List<Tab_EquipEnchance>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_EquipEnchance)subit);
 }
 g_EquipEnchance.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_EquipSet> > g_EquipSet = new Dictionary<int, List<Tab_EquipSet> >(); 
 public static bool InitTable_EquipSet()
 {
 g_EquipSet.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_EquipSet.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_EquipSet> values = new List<Tab_EquipSet>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_EquipSet)subit);
 }
 g_EquipSet.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_EquipSetTransfer> > g_EquipSetTransfer = new Dictionary<int, List<Tab_EquipSetTransfer> >(); 
 public static bool InitTable_EquipSetTransfer()
 {
 g_EquipSetTransfer.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_EquipSetTransfer.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_EquipSetTransfer> values = new List<Tab_EquipSetTransfer>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_EquipSetTransfer)subit);
 }
 g_EquipSetTransfer.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_EquipStar> > g_EquipStar = new Dictionary<int, List<Tab_EquipStar> >(); 
 public static bool InitTable_EquipStar()
 {
 g_EquipStar.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_EquipStar.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_EquipStar> values = new List<Tab_EquipStar>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_EquipStar)subit);
 }
 g_EquipStar.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_EquipStarLimit> > g_EquipStarLimit = new Dictionary<int, List<Tab_EquipStarLimit> >(); 
 public static bool InitTable_EquipStarLimit()
 {
 g_EquipStarLimit.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_EquipStarLimit.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_EquipStarLimit> values = new List<Tab_EquipStarLimit>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_EquipStarLimit)subit);
 }
 g_EquipStarLimit.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_EquipStarRate> > g_EquipStarRate = new Dictionary<int, List<Tab_EquipStarRate> >(); 
 public static bool InitTable_EquipStarRate()
 {
 g_EquipStarRate.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_EquipStarRate.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_EquipStarRate> values = new List<Tab_EquipStarRate>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_EquipStarRate)subit);
 }
 g_EquipStarRate.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_FTESound> > g_FTESound = new Dictionary<int, List<Tab_FTESound> >(); 
 public static bool InitTable_FTESound()
 {
 g_FTESound.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_FTESound.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_FTESound> values = new List<Tab_FTESound>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_FTESound)subit);
 }
 g_FTESound.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_FakeObject> > g_FakeObject = new Dictionary<int, List<Tab_FakeObject> >(); 
 public static bool InitTable_FakeObject()
 {
 g_FakeObject.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_FakeObject.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_FakeObject> values = new List<Tab_FakeObject>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_FakeObject)subit);
 }
 g_FakeObject.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_FashionData> > g_FashionData = new Dictionary<int, List<Tab_FashionData> >(); 
 public static bool InitTable_FashionData()
 {
 g_FashionData.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_FashionData.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_FashionData> values = new List<Tab_FashionData>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_FashionData)subit);
 }
 g_FashionData.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_FellowGainCost> > g_FellowGainCost = new Dictionary<int, List<Tab_FellowGainCost> >(); 
 public static bool InitTable_FellowGainCost()
 {
 g_FellowGainCost.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_FellowGainCost.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_FellowGainCost> values = new List<Tab_FellowGainCost>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_FellowGainCost)subit);
 }
 g_FellowGainCost.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_FellowGainRate> > g_FellowGainRate = new Dictionary<int, List<Tab_FellowGainRate> >(); 
 public static bool InitTable_FellowGainRate()
 {
 g_FellowGainRate.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_FellowGainRate.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_FellowGainRate> values = new List<Tab_FellowGainRate>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_FellowGainRate)subit);
 }
 g_FellowGainRate.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_FlyWing> > g_FlyWing = new Dictionary<int, List<Tab_FlyWing> >(); 
 public static bool InitTable_FlyWing()
 {
 g_FlyWing.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_FlyWing.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_FlyWing> values = new List<Tab_FlyWing>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_FlyWing)subit);
 }
 g_FlyWing.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_FlyWingClient> > g_FlyWingClient = new Dictionary<int, List<Tab_FlyWingClient> >(); 
 public static bool InitTable_FlyWingClient()
 {
 g_FlyWingClient.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_FlyWingClient.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_FlyWingClient> values = new List<Tab_FlyWingClient>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_FlyWingClient)subit);
 }
 g_FlyWingClient.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GemAttr> > g_GemAttr = new Dictionary<int, List<Tab_GemAttr> >(); 
 public static bool InitTable_GemAttr()
 {
 g_GemAttr.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GemAttr.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GemAttr> values = new List<Tab_GemAttr>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GemAttr)subit);
 }
 g_GemAttr.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GemMount> > g_GemMount = new Dictionary<int, List<Tab_GemMount> >(); 
 public static bool InitTable_GemMount()
 {
 g_GemMount.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GemMount.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GemMount> values = new List<Tab_GemMount>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GemMount)subit);
 }
 g_GemMount.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GemOpenLimit> > g_GemOpenLimit = new Dictionary<int, List<Tab_GemOpenLimit> >(); 
 public static bool InitTable_GemOpenLimit()
 {
 g_GemOpenLimit.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GemOpenLimit.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GemOpenLimit> values = new List<Tab_GemOpenLimit>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GemOpenLimit)subit);
 }
 g_GemOpenLimit.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GoldMoneyShop> > g_GoldMoneyShop = new Dictionary<int, List<Tab_GoldMoneyShop> >(); 
 public static bool InitTable_GoldMoneyShop()
 {
 g_GoldMoneyShop.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GoldMoneyShop.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GoldMoneyShop> values = new List<Tab_GoldMoneyShop>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GoldMoneyShop)subit);
 }
 g_GoldMoneyShop.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GongJiShop> > g_GongJiShop = new Dictionary<int, List<Tab_GongJiShop> >(); 
 public static bool InitTable_GongJiShop()
 {
 g_GongJiShop.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GongJiShop.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GongJiShop> values = new List<Tab_GongJiShop>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GongJiShop)subit);
 }
 g_GongJiShop.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GongZhanReward> > g_GongZhanReward = new Dictionary<int, List<Tab_GongZhanReward> >(); 
 public static bool InitTable_GongZhanReward()
 {
 g_GongZhanReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GongZhanReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GongZhanReward> values = new List<Tab_GongZhanReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GongZhanReward)subit);
 }
 g_GongZhanReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildActivityBoss> > g_GuildActivityBoss = new Dictionary<int, List<Tab_GuildActivityBoss> >(); 
 public static bool InitTable_GuildActivityBoss()
 {
 g_GuildActivityBoss.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildActivityBoss.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildActivityBoss> values = new List<Tab_GuildActivityBoss>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildActivityBoss)subit);
 }
 g_GuildActivityBoss.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildAttrAddition> > g_GuildAttrAddition = new Dictionary<int, List<Tab_GuildAttrAddition> >(); 
 public static bool InitTable_GuildAttrAddition()
 {
 g_GuildAttrAddition.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildAttrAddition.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildAttrAddition> values = new List<Tab_GuildAttrAddition>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildAttrAddition)subit);
 }
 g_GuildAttrAddition.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildAutoLevelUp> > g_GuildAutoLevelUp = new Dictionary<int, List<Tab_GuildAutoLevelUp> >(); 
 public static bool InitTable_GuildAutoLevelUp()
 {
 g_GuildAutoLevelUp.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildAutoLevelUp.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildAutoLevelUp> values = new List<Tab_GuildAutoLevelUp>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildAutoLevelUp)subit);
 }
 g_GuildAutoLevelUp.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildMission> > g_GuildMission = new Dictionary<int, List<Tab_GuildMission> >(); 
 public static bool InitTable_GuildMission()
 {
 g_GuildMission.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildMission.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildMission> values = new List<Tab_GuildMission>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildMission)subit);
 }
 g_GuildMission.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildMissionAward> > g_GuildMissionAward = new Dictionary<int, List<Tab_GuildMissionAward> >(); 
 public static bool InitTable_GuildMissionAward()
 {
 g_GuildMissionAward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildMissionAward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildMissionAward> values = new List<Tab_GuildMissionAward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildMissionAward)subit);
 }
 g_GuildMissionAward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildMissionGuild> > g_GuildMissionGuild = new Dictionary<int, List<Tab_GuildMissionGuild> >(); 
 public static bool InitTable_GuildMissionGuild()
 {
 g_GuildMissionGuild.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildMissionGuild.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildMissionGuild> values = new List<Tab_GuildMissionGuild>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildMissionGuild)subit);
 }
 g_GuildMissionGuild.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildPaoShang> > g_GuildPaoShang = new Dictionary<int, List<Tab_GuildPaoShang> >(); 
 public static bool InitTable_GuildPaoShang()
 {
 g_GuildPaoShang.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildPaoShang.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildPaoShang> values = new List<Tab_GuildPaoShang>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildPaoShang)subit);
 }
 g_GuildPaoShang.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildRule> > g_GuildRule = new Dictionary<int, List<Tab_GuildRule> >(); 
 public static bool InitTable_GuildRule()
 {
 g_GuildRule.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildRule.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildRule> values = new List<Tab_GuildRule>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildRule)subit);
 }
 g_GuildRule.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildShop> > g_GuildShop = new Dictionary<int, List<Tab_GuildShop> >(); 
 public static bool InitTable_GuildShop()
 {
 g_GuildShop.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildShop.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildShop> values = new List<Tab_GuildShop>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildShop)subit);
 }
 g_GuildShop.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_GuildWealthItemMake> > g_GuildWealthItemMake = new Dictionary<int, List<Tab_GuildWealthItemMake> >(); 
 public static bool InitTable_GuildWealthItemMake()
 {
 g_GuildWealthItemMake.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_GuildWealthItemMake.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_GuildWealthItemMake> values = new List<Tab_GuildWealthItemMake>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_GuildWealthItemMake)subit);
 }
 g_GuildWealthItemMake.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_HelpItem> > g_HelpItem = new Dictionary<int, List<Tab_HelpItem> >(); 
 public static bool InitTable_HelpItem()
 {
 g_HelpItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_HelpItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_HelpItem> values = new List<Tab_HelpItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_HelpItem)subit);
 }
 g_HelpItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_HongBaoRankAwardInfo> > g_HongBaoRankAwardInfo = new Dictionary<int, List<Tab_HongBaoRankAwardInfo> >(); 
 public static bool InitTable_HongBaoRankAwardInfo()
 {
 g_HongBaoRankAwardInfo.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_HongBaoRankAwardInfo.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_HongBaoRankAwardInfo> values = new List<Tab_HongBaoRankAwardInfo>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_HongBaoRankAwardInfo)subit);
 }
 g_HongBaoRankAwardInfo.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_HuaShanReward> > g_HuaShanReward = new Dictionary<int, List<Tab_HuaShanReward> >(); 
 public static bool InitTable_HuaShanReward()
 {
 g_HuaShanReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_HuaShanReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_HuaShanReward> values = new List<Tab_HuaShanReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_HuaShanReward)subit);
 }
 g_HuaShanReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_HuaShanRewardItem> > g_HuaShanRewardItem = new Dictionary<int, List<Tab_HuaShanRewardItem> >(); 
 public static bool InitTable_HuaShanRewardItem()
 {
 g_HuaShanRewardItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_HuaShanRewardItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_HuaShanRewardItem> values = new List<Tab_HuaShanRewardItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_HuaShanRewardItem)subit);
 }
 g_HuaShanRewardItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Impact> > g_Impact = new Dictionary<int, List<Tab_Impact> >(); 
 public static bool InitTable_Impact()
 {
 g_Impact.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Impact.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Impact> values = new List<Tab_Impact>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Impact)subit);
 }
 g_Impact.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ImpactConsume> > g_ImpactConsume = new Dictionary<int, List<Tab_ImpactConsume> >(); 
 public static bool InitTable_ImpactConsume()
 {
 g_ImpactConsume.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ImpactConsume.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ImpactConsume> values = new List<Tab_ImpactConsume>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ImpactConsume)subit);
 }
 g_ImpactConsume.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ItemGetWay> > g_ItemGetWay = new Dictionary<int, List<Tab_ItemGetWay> >(); 
 public static bool InitTable_ItemGetWay()
 {
 g_ItemGetWay.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ItemGetWay.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ItemGetWay> values = new List<Tab_ItemGetWay>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ItemGetWay)subit);
 }
 g_ItemGetWay.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ItemVisual> > g_ItemVisual = new Dictionary<int, List<Tab_ItemVisual> >(); 
 public static bool InitTable_ItemVisual()
 {
 g_ItemVisual.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ItemVisual.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ItemVisual> values = new List<Tab_ItemVisual>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ItemVisual)subit);
 }
 g_ItemVisual.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_JuYiReward> > g_JuYiReward = new Dictionary<int, List<Tab_JuYiReward> >(); 
 public static bool InitTable_JuYiReward()
 {
 g_JuYiReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_JuYiReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_JuYiReward> values = new List<Tab_JuYiReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_JuYiReward)subit);
 }
 g_JuYiReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_LevelAwardPacket> > g_LevelAwardPacket = new Dictionary<int, List<Tab_LevelAwardPacket> >(); 
 public static bool InitTable_LevelAwardPacket()
 {
 g_LevelAwardPacket.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_LevelAwardPacket.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_LevelAwardPacket> values = new List<Tab_LevelAwardPacket>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_LevelAwardPacket)subit);
 }
 g_LevelAwardPacket.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_LevelUp> > g_LevelUp = new Dictionary<int, List<Tab_LevelUp> >(); 
 public static bool InitTable_LevelUp()
 {
 g_LevelUp.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_LevelUp.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_LevelUp> values = new List<Tab_LevelUp>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_LevelUp)subit);
 }
 g_LevelUp.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_LevelUpLimit> > g_LevelUpLimit = new Dictionary<int, List<Tab_LevelUpLimit> >(); 
 public static bool InitTable_LevelUpLimit()
 {
 g_LevelUpLimit.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_LevelUpLimit.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_LevelUpLimit> values = new List<Tab_LevelUpLimit>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_LevelUpLimit)subit);
 }
 g_LevelUpLimit.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_LightSkill> > g_LightSkill = new Dictionary<int, List<Tab_LightSkill> >(); 
 public static bool InitTable_LightSkill()
 {
 g_LightSkill.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_LightSkill.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_LightSkill> values = new List<Tab_LightSkill>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_LightSkill)subit);
 }
 g_LightSkill.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_LivingSkill> > g_LivingSkill = new Dictionary<int, List<Tab_LivingSkill> >(); 
 public static bool InitTable_LivingSkill()
 {
 g_LivingSkill.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_LivingSkill.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_LivingSkill> values = new List<Tab_LivingSkill>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_LivingSkill)subit);
 }
 g_LivingSkill.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_LivingSkillStuff> > g_LivingSkillStuff = new Dictionary<int, List<Tab_LivingSkillStuff> >(); 
 public static bool InitTable_LivingSkillStuff()
 {
 g_LivingSkillStuff.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_LivingSkillStuff.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_LivingSkillStuff> values = new List<Tab_LivingSkillStuff>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_LivingSkillStuff)subit);
 }
 g_LivingSkillStuff.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MapConnection> > g_MapConnection = new Dictionary<int, List<Tab_MapConnection> >(); 
 public static bool InitTable_MapConnection()
 {
 g_MapConnection.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MapConnection.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MapConnection> values = new List<Tab_MapConnection>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MapConnection)subit);
 }
 g_MapConnection.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MasterShop> > g_MasterShop = new Dictionary<int, List<Tab_MasterShop> >(); 
 public static bool InitTable_MasterShop()
 {
 g_MasterShop.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MasterShop.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MasterShop> values = new List<Tab_MasterShop>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MasterShop)subit);
 }
 g_MasterShop.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MasterSkill> > g_MasterSkill = new Dictionary<int, List<Tab_MasterSkill> >(); 
 public static bool InitTable_MasterSkill()
 {
 g_MasterSkill.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MasterSkill.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MasterSkill> values = new List<Tab_MasterSkill>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MasterSkill)subit);
 }
 g_MasterSkill.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MasterSkillLimit> > g_MasterSkillLimit = new Dictionary<int, List<Tab_MasterSkillLimit> >(); 
 public static bool InitTable_MasterSkillLimit()
 {
 g_MasterSkillLimit.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MasterSkillLimit.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MasterSkillLimit> values = new List<Tab_MasterSkillLimit>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MasterSkillLimit)subit);
 }
 g_MasterSkillLimit.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionBase> > g_MissionBase = new Dictionary<int, List<Tab_MissionBase> >(); 
 public static bool InitTable_MissionBase()
 {
 g_MissionBase.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionBase.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionBase> values = new List<Tab_MissionBase>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionBase)subit);
 }
 g_MissionBase.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionBonus> > g_MissionBonus = new Dictionary<int, List<Tab_MissionBonus> >(); 
 public static bool InitTable_MissionBonus()
 {
 g_MissionBonus.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionBonus.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionBonus> values = new List<Tab_MissionBonus>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionBonus)subit);
 }
 g_MissionBonus.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionCollectItem> > g_MissionCollectItem = new Dictionary<int, List<Tab_MissionCollectItem> >(); 
 public static bool InitTable_MissionCollectItem()
 {
 g_MissionCollectItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionCollectItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionCollectItem> values = new List<Tab_MissionCollectItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionCollectItem)subit);
 }
 g_MissionCollectItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionCopyScene> > g_MissionCopyScene = new Dictionary<int, List<Tab_MissionCopyScene> >(); 
 public static bool InitTable_MissionCopyScene()
 {
 g_MissionCopyScene.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionCopyScene.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionCopyScene> values = new List<Tab_MissionCopyScene>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionCopyScene)subit);
 }
 g_MissionCopyScene.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionDelivery> > g_MissionDelivery = new Dictionary<int, List<Tab_MissionDelivery> >(); 
 public static bool InitTable_MissionDelivery()
 {
 g_MissionDelivery.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionDelivery.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionDelivery> values = new List<Tab_MissionDelivery>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionDelivery)subit);
 }
 g_MissionDelivery.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionDictionary> > g_MissionDictionary = new Dictionary<int, List<Tab_MissionDictionary> >(); 
 public static bool InitTable_MissionDictionary()
 {
 g_MissionDictionary.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionDictionary.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionDictionary> values = new List<Tab_MissionDictionary>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionDictionary)subit);
 }
 g_MissionDictionary.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionEnterArea> > g_MissionEnterArea = new Dictionary<int, List<Tab_MissionEnterArea> >(); 
 public static bool InitTable_MissionEnterArea()
 {
 g_MissionEnterArea.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionEnterArea.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionEnterArea> values = new List<Tab_MissionEnterArea>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionEnterArea)subit);
 }
 g_MissionEnterArea.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionKillMonster> > g_MissionKillMonster = new Dictionary<int, List<Tab_MissionKillMonster> >(); 
 public static bool InitTable_MissionKillMonster()
 {
 g_MissionKillMonster.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionKillMonster.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionKillMonster> values = new List<Tab_MissionKillMonster>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionKillMonster)subit);
 }
 g_MissionKillMonster.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionLevelUp> > g_MissionLevelUp = new Dictionary<int, List<Tab_MissionLevelUp> >(); 
 public static bool InitTable_MissionLevelUp()
 {
 g_MissionLevelUp.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionLevelUp.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionLevelUp> values = new List<Tab_MissionLevelUp>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionLevelUp)subit);
 }
 g_MissionLevelUp.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionLimit> > g_MissionLimit = new Dictionary<int, List<Tab_MissionLimit> >(); 
 public static bool InitTable_MissionLimit()
 {
 g_MissionLimit.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionLimit.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionLimit> values = new List<Tab_MissionLimit>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionLimit)subit);
 }
 g_MissionLimit.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionLootItem> > g_MissionLootItem = new Dictionary<int, List<Tab_MissionLootItem> >(); 
 public static bool InitTable_MissionLootItem()
 {
 g_MissionLootItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionLootItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionLootItem> values = new List<Tab_MissionLootItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionLootItem)subit);
 }
 g_MissionLootItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionOperationNum> > g_MissionOperationNum = new Dictionary<int, List<Tab_MissionOperationNum> >(); 
 public static bool InitTable_MissionOperationNum()
 {
 g_MissionOperationNum.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionOperationNum.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionOperationNum> values = new List<Tab_MissionOperationNum>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionOperationNum)subit);
 }
 g_MissionOperationNum.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MissionUseItem> > g_MissionUseItem = new Dictionary<int, List<Tab_MissionUseItem> >(); 
 public static bool InitTable_MissionUseItem()
 {
 g_MissionUseItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MissionUseItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MissionUseItem> values = new List<Tab_MissionUseItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MissionUseItem)subit);
 }
 g_MissionUseItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MoneyTree> > g_MoneyTree = new Dictionary<int, List<Tab_MoneyTree> >(); 
 public static bool InitTable_MoneyTree()
 {
 g_MoneyTree.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MoneyTree.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MoneyTree> values = new List<Tab_MoneyTree>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MoneyTree)subit);
 }
 g_MoneyTree.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MoneyTreeVIP> > g_MoneyTreeVIP = new Dictionary<int, List<Tab_MoneyTreeVIP> >(); 
 public static bool InitTable_MoneyTreeVIP()
 {
 g_MoneyTreeVIP.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MoneyTreeVIP.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MoneyTreeVIP> values = new List<Tab_MoneyTreeVIP>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MoneyTreeVIP)subit);
 }
 g_MoneyTreeVIP.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_MountBase> > g_MountBase = new Dictionary<int, List<Tab_MountBase> >(); 
 public static bool InitTable_MountBase()
 {
 g_MountBase.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_MountBase.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_MountBase> values = new List<Tab_MountBase>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_MountBase)subit);
 }
 g_MountBase.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_NewServerAward> > g_NewServerAward = new Dictionary<int, List<Tab_NewServerAward> >(); 
 public static bool InitTable_NewServerAward()
 {
 g_NewServerAward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_NewServerAward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_NewServerAward> values = new List<Tab_NewServerAward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_NewServerAward)subit);
 }
 g_NewServerAward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_NianShouNpcScence> > g_NianShouNpcScence = new Dictionary<int, List<Tab_NianShouNpcScence> >(); 
 public static bool InitTable_NianShouNpcScence()
 {
 g_NianShouNpcScence.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_NianShouNpcScence.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_NianShouNpcScence> values = new List<Tab_NianShouNpcScence>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_NianShouNpcScence)subit);
 }
 g_NianShouNpcScence.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_NpcDialog> > g_NpcDialog = new Dictionary<int, List<Tab_NpcDialog> >(); 
 public static bool InitTable_NpcDialog()
 {
 g_NpcDialog.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_NpcDialog.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_NpcDialog> values = new List<Tab_NpcDialog>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_NpcDialog)subit);
 }
 g_NpcDialog.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_NpcOptionDialog> > g_NpcOptionDialog = new Dictionary<int, List<Tab_NpcOptionDialog> >(); 
 public static bool InitTable_NpcOptionDialog()
 {
 g_NpcOptionDialog.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_NpcOptionDialog.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_NpcOptionDialog> values = new List<Tab_NpcOptionDialog>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_NpcOptionDialog)subit);
 }
 g_NpcOptionDialog.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_OffLineExp> > g_OffLineExp = new Dictionary<int, List<Tab_OffLineExp> >(); 
 public static bool InitTable_OffLineExp()
 {
 g_OffLineExp.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_OffLineExp.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_OffLineExp> values = new List<Tab_OffLineExp>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_OffLineExp)subit);
 }
 g_OffLineExp.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_OnlineTimeRankReward> > g_OnlineTimeRankReward = new Dictionary<int, List<Tab_OnlineTimeRankReward> >(); 
 public static bool InitTable_OnlineTimeRankReward()
 {
 g_OnlineTimeRankReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_OnlineTimeRankReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_OnlineTimeRankReward> values = new List<Tab_OnlineTimeRankReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_OnlineTimeRankReward)subit);
 }
 g_OnlineTimeRankReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PVPRule> > g_PVPRule = new Dictionary<int, List<Tab_PVPRule> >(); 
 public static bool InitTable_PVPRule()
 {
 g_PVPRule.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PVPRule.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PVPRule> values = new List<Tab_PVPRule>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PVPRule)subit);
 }
 g_PVPRule.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PaoHuanBonus> > g_PaoHuanBonus = new Dictionary<int, List<Tab_PaoHuanBonus> >(); 
 public static bool InitTable_PaoHuanBonus()
 {
 g_PaoHuanBonus.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PaoHuanBonus.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PaoHuanBonus> values = new List<Tab_PaoHuanBonus>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PaoHuanBonus)subit);
 }
 g_PaoHuanBonus.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PaoHuanMission> > g_PaoHuanMission = new Dictionary<int, List<Tab_PaoHuanMission> >(); 
 public static bool InitTable_PaoHuanMission()
 {
 g_PaoHuanMission.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PaoHuanMission.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PaoHuanMission> values = new List<Tab_PaoHuanMission>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PaoHuanMission)subit);
 }
 g_PaoHuanMission.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PaoHuanRefresh> > g_PaoHuanRefresh = new Dictionary<int, List<Tab_PaoHuanRefresh> >(); 
 public static bool InitTable_PaoHuanRefresh()
 {
 g_PaoHuanRefresh.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PaoHuanRefresh.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PaoHuanRefresh> values = new List<Tab_PaoHuanRefresh>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PaoHuanRefresh)subit);
 }
 g_PaoHuanRefresh.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PatrolPoint> > g_PatrolPoint = new Dictionary<int, List<Tab_PatrolPoint> >(); 
 public static bool InitTable_PatrolPoint()
 {
 g_PatrolPoint.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PatrolPoint.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PatrolPoint> values = new List<Tab_PatrolPoint>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PatrolPoint)subit);
 }
 g_PatrolPoint.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ProfessionConmmon> > g_ProfessionConmmon = new Dictionary<int, List<Tab_ProfessionConmmon> >(); 
 public static bool InitTable_ProfessionConmmon()
 {
 g_ProfessionConmmon.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ProfessionConmmon.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ProfessionConmmon> values = new List<Tab_ProfessionConmmon>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ProfessionConmmon)subit);
 }
 g_ProfessionConmmon.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ProfessionReputationReward> > g_ProfessionReputationReward = new Dictionary<int, List<Tab_ProfessionReputationReward> >(); 
 public static bool InitTable_ProfessionReputationReward()
 {
 g_ProfessionReputationReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ProfessionReputationReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ProfessionReputationReward> values = new List<Tab_ProfessionReputationReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ProfessionReputationReward)subit);
 }
 g_ProfessionReputationReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PublicConfig> > g_PublicConfig = new Dictionary<int, List<Tab_PublicConfig> >(); 
 public static bool InitTable_PublicConfig()
 {
 g_PublicConfig.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PublicConfig.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PublicConfig> values = new List<Tab_PublicConfig>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PublicConfig)subit);
 }
 g_PublicConfig.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PushNotification> > g_PushNotification = new Dictionary<int, List<Tab_PushNotification> >(); 
 public static bool InitTable_PushNotification()
 {
 g_PushNotification.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PushNotification.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PushNotification> values = new List<Tab_PushNotification>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PushNotification)subit);
 }
 g_PushNotification.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PvpAward> > g_PvpAward = new Dictionary<int, List<Tab_PvpAward> >(); 
 public static bool InitTable_PvpAward()
 {
 g_PvpAward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PvpAward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PvpAward> values = new List<Tab_PvpAward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PvpAward)subit);
 }
 g_PvpAward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PvpRank> > g_PvpRank = new Dictionary<int, List<Tab_PvpRank> >(); 
 public static bool InitTable_PvpRank()
 {
 g_PvpRank.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PvpRank.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PvpRank> values = new List<Tab_PvpRank>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PvpRank)subit);
 }
 g_PvpRank.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_PvpShop> > g_PvpShop = new Dictionary<int, List<Tab_PvpShop> >(); 
 public static bool InitTable_PvpShop()
 {
 g_PvpShop.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_PvpShop.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_PvpShop> values = new List<Tab_PvpShop>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_PvpShop)subit);
 }
 g_PvpShop.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_QianKunDaiFormula> > g_QianKunDaiFormula = new Dictionary<int, List<Tab_QianKunDaiFormula> >(); 
 public static bool InitTable_QianKunDaiFormula()
 {
 g_QianKunDaiFormula.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_QianKunDaiFormula.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_QianKunDaiFormula> values = new List<Tab_QianKunDaiFormula>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_QianKunDaiFormula)subit);
 }
 g_QianKunDaiFormula.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_RankReward> > g_RankReward = new Dictionary<int, List<Tab_RankReward> >(); 
 public static bool InitTable_RankReward()
 {
 g_RankReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_RankReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_RankReward> values = new List<Tab_RankReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_RankReward)subit);
 }
 g_RankReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Recharge> > g_Recharge = new Dictionary<int, List<Tab_Recharge> >(); 
 public static bool InitTable_Recharge()
 {
 g_Recharge.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Recharge.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Recharge> values = new List<Tab_Recharge>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Recharge)subit);
 }
 g_Recharge.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Relation> > g_Relation = new Dictionary<int, List<Tab_Relation> >(); 
 public static bool InitTable_Relation()
 {
 g_Relation.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Relation.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Relation> values = new List<Tab_Relation>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Relation)subit);
 }
 g_Relation.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_RestaurantDesk> > g_RestaurantDesk = new Dictionary<int, List<Tab_RestaurantDesk> >(); 
 public static bool InitTable_RestaurantDesk()
 {
 g_RestaurantDesk.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_RestaurantDesk.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_RestaurantDesk> values = new List<Tab_RestaurantDesk>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_RestaurantDesk)subit);
 }
 g_RestaurantDesk.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_RestaurantFood> > g_RestaurantFood = new Dictionary<int, List<Tab_RestaurantFood> >(); 
 public static bool InitTable_RestaurantFood()
 {
 g_RestaurantFood.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_RestaurantFood.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_RestaurantFood> values = new List<Tab_RestaurantFood>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_RestaurantFood)subit);
 }
 g_RestaurantFood.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_RestaurantGuest> > g_RestaurantGuest = new Dictionary<int, List<Tab_RestaurantGuest> >(); 
 public static bool InitTable_RestaurantGuest()
 {
 g_RestaurantGuest.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_RestaurantGuest.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_RestaurantGuest> values = new List<Tab_RestaurantGuest>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_RestaurantGuest)subit);
 }
 g_RestaurantGuest.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_RestaurantLevel> > g_RestaurantLevel = new Dictionary<int, List<Tab_RestaurantLevel> >(); 
 public static bool InitTable_RestaurantLevel()
 {
 g_RestaurantLevel.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_RestaurantLevel.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_RestaurantLevel> values = new List<Tab_RestaurantLevel>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_RestaurantLevel)subit);
 }
 g_RestaurantLevel.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_RoleBaseAttr> > g_RoleBaseAttr = new Dictionary<int, List<Tab_RoleBaseAttr> >(); 
 public static bool InitTable_RoleBaseAttr()
 {
 g_RoleBaseAttr.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_RoleBaseAttr.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_RoleBaseAttr> values = new List<Tab_RoleBaseAttr>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_RoleBaseAttr)subit);
 }
 g_RoleBaseAttr.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_RoleName> > g_RoleName = new Dictionary<int, List<Tab_RoleName> >(); 
 public static bool InitTable_RoleName()
 {
 g_RoleName.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_RoleName.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_RoleName> values = new List<Tab_RoleName>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_RoleName)subit);
 }
 g_RoleName.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SNSReward> > g_SNSReward = new Dictionary<int, List<Tab_SNSReward> >(); 
 public static bool InitTable_SNSReward()
 {
 g_SNSReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SNSReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SNSReward> values = new List<Tab_SNSReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SNSReward)subit);
 }
 g_SNSReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SceneClass> > g_SceneClass = new Dictionary<int, List<Tab_SceneClass> >(); 
 public static bool InitTable_SceneClass()
 {
 g_SceneClass.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SceneClass.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SceneClass> values = new List<Tab_SceneClass>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SceneClass)subit);
 }
 g_SceneClass.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SceneFightPos> > g_SceneFightPos = new Dictionary<int, List<Tab_SceneFightPos> >(); 
 public static bool InitTable_SceneFightPos()
 {
 g_SceneFightPos.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SceneFightPos.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SceneFightPos> values = new List<Tab_SceneFightPos>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SceneFightPos)subit);
 }
 g_SceneFightPos.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SceneNpc> > g_SceneNpc = new Dictionary<int, List<Tab_SceneNpc> >(); 
 public static bool InitTable_SceneNpc()
 {
 g_SceneNpc.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SceneNpc.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SceneNpc> values = new List<Tab_SceneNpc>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SceneNpc)subit);
 }
 g_SceneNpc.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SevenDaysLogicType> > g_SevenDaysLogicType = new Dictionary<int, List<Tab_SevenDaysLogicType> >(); 
 public static bool InitTable_SevenDaysLogicType()
 {
 g_SevenDaysLogicType.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SevenDaysLogicType.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SevenDaysLogicType> values = new List<Tab_SevenDaysLogicType>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SevenDaysLogicType)subit);
 }
 g_SevenDaysLogicType.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SevenDaysReward> > g_SevenDaysReward = new Dictionary<int, List<Tab_SevenDaysReward> >(); 
 public static bool InitTable_SevenDaysReward()
 {
 g_SevenDaysReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SevenDaysReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SevenDaysReward> values = new List<Tab_SevenDaysReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SevenDaysReward)subit);
 }
 g_SevenDaysReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ShareReward> > g_ShareReward = new Dictionary<int, List<Tab_ShareReward> >(); 
 public static bool InitTable_ShareReward()
 {
 g_ShareReward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ShareReward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ShareReward> values = new List<Tab_ShareReward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ShareReward)subit);
 }
 g_ShareReward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ShenQiInfo> > g_ShenQiInfo = new Dictionary<int, List<Tab_ShenQiInfo> >(); 
 public static bool InitTable_ShenQiInfo()
 {
 g_ShenQiInfo.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ShenQiInfo.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ShenQiInfo> values = new List<Tab_ShenQiInfo>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ShenQiInfo)subit);
 }
 g_ShenQiInfo.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ShenQiSkillInfo> > g_ShenQiSkillInfo = new Dictionary<int, List<Tab_ShenQiSkillInfo> >(); 
 public static bool InitTable_ShenQiSkillInfo()
 {
 g_ShenQiSkillInfo.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ShenQiSkillInfo.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ShenQiSkillInfo> values = new List<Tab_ShenQiSkillInfo>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ShenQiSkillInfo)subit);
 }
 g_ShenQiSkillInfo.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_ShouHuaAwardInfo> > g_ShouHuaAwardInfo = new Dictionary<int, List<Tab_ShouHuaAwardInfo> >(); 
 public static bool InitTable_ShouHuaAwardInfo()
 {
 g_ShouHuaAwardInfo.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_ShouHuaAwardInfo.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_ShouHuaAwardInfo> values = new List<Tab_ShouHuaAwardInfo>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_ShouHuaAwardInfo)subit);
 }
 g_ShouHuaAwardInfo.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SkillActive> > g_SkillActive = new Dictionary<int, List<Tab_SkillActive> >(); 
 public static bool InitTable_SkillActive()
 {
 g_SkillActive.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SkillActive.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SkillActive> values = new List<Tab_SkillActive>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SkillActive)subit);
 }
 g_SkillActive.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SkillBase> > g_SkillBase = new Dictionary<int, List<Tab_SkillBase> >(); 
 public static bool InitTable_SkillBase()
 {
 g_SkillBase.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SkillBase.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SkillBase> values = new List<Tab_SkillBase>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SkillBase)subit);
 }
 g_SkillBase.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SkillEx> > g_SkillEx = new Dictionary<int, List<Tab_SkillEx> >(); 
 public static bool InitTable_SkillEx()
 {
 g_SkillEx.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SkillEx.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SkillEx> values = new List<Tab_SkillEx>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SkillEx)subit);
 }
 g_SkillEx.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SkillLevelUp> > g_SkillLevelUp = new Dictionary<int, List<Tab_SkillLevelUp> >(); 
 public static bool InitTable_SkillLevelUp()
 {
 g_SkillLevelUp.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SkillLevelUp.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SkillLevelUp> values = new List<Tab_SkillLevelUp>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SkillLevelUp)subit);
 }
 g_SkillLevelUp.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SnareObjInfo> > g_SnareObjInfo = new Dictionary<int, List<Tab_SnareObjInfo> >(); 
 public static bool InitTable_SnareObjInfo()
 {
 g_SnareObjInfo.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SnareObjInfo.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SnareObjInfo> values = new List<Tab_SnareObjInfo>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SnareObjInfo)subit);
 }
 g_SnareObjInfo.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SongHuaAwardInfo> > g_SongHuaAwardInfo = new Dictionary<int, List<Tab_SongHuaAwardInfo> >(); 
 public static bool InitTable_SongHuaAwardInfo()
 {
 g_SongHuaAwardInfo.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SongHuaAwardInfo.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SongHuaAwardInfo> values = new List<Tab_SongHuaAwardInfo>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SongHuaAwardInfo)subit);
 }
 g_SongHuaAwardInfo.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Sounds> > g_Sounds = new Dictionary<int, List<Tab_Sounds> >(); 
 public static bool InitTable_Sounds()
 {
 g_Sounds.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Sounds.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Sounds> values = new List<Tab_Sounds>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Sounds)subit);
 }
 g_Sounds.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StaminaBuyRule> > g_StaminaBuyRule = new Dictionary<int, List<Tab_StaminaBuyRule> >(); 
 public static bool InitTable_StaminaBuyRule()
 {
 g_StaminaBuyRule.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StaminaBuyRule.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StaminaBuyRule> values = new List<Tab_StaminaBuyRule>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StaminaBuyRule)subit);
 }
 g_StaminaBuyRule.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StarCondition> > g_StarCondition = new Dictionary<int, List<Tab_StarCondition> >(); 
 public static bool InitTable_StarCondition()
 {
 g_StarCondition.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StarCondition.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StarCondition> values = new List<Tab_StarCondition>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StarCondition)subit);
 }
 g_StarCondition.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StoryCopyScene> > g_StoryCopyScene = new Dictionary<int, List<Tab_StoryCopyScene> >(); 
 public static bool InitTable_StoryCopyScene()
 {
 g_StoryCopyScene.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StoryCopyScene.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StoryCopyScene> values = new List<Tab_StoryCopyScene>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StoryCopyScene)subit);
 }
 g_StoryCopyScene.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StoryCopySceneAward> > g_StoryCopySceneAward = new Dictionary<int, List<Tab_StoryCopySceneAward> >(); 
 public static bool InitTable_StoryCopySceneAward()
 {
 g_StoryCopySceneAward.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StoryCopySceneAward.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StoryCopySceneAward> values = new List<Tab_StoryCopySceneAward>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StoryCopySceneAward)subit);
 }
 g_StoryCopySceneAward.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StoryCopySceneChapter> > g_StoryCopySceneChapter = new Dictionary<int, List<Tab_StoryCopySceneChapter> >(); 
 public static bool InitTable_StoryCopySceneChapter()
 {
 g_StoryCopySceneChapter.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StoryCopySceneChapter.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StoryCopySceneChapter> values = new List<Tab_StoryCopySceneChapter>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StoryCopySceneChapter)subit);
 }
 g_StoryCopySceneChapter.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StoryCopySceneFlow> > g_StoryCopySceneFlow = new Dictionary<int, List<Tab_StoryCopySceneFlow> >(); 
 public static bool InitTable_StoryCopySceneFlow()
 {
 g_StoryCopySceneFlow.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StoryCopySceneFlow.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StoryCopySceneFlow> values = new List<Tab_StoryCopySceneFlow>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StoryCopySceneFlow)subit);
 }
 g_StoryCopySceneFlow.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StoryCopySceneNpc> > g_StoryCopySceneNpc = new Dictionary<int, List<Tab_StoryCopySceneNpc> >(); 
 public static bool InitTable_StoryCopySceneNpc()
 {
 g_StoryCopySceneNpc.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StoryCopySceneNpc.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StoryCopySceneNpc> values = new List<Tab_StoryCopySceneNpc>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StoryCopySceneNpc)subit);
 }
 g_StoryCopySceneNpc.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StoryTable> > g_StoryTable = new Dictionary<int, List<Tab_StoryTable> >(); 
 public static bool InitTable_StoryTable()
 {
 g_StoryTable.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StoryTable.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StoryTable> values = new List<Tab_StoryTable>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StoryTable)subit);
 }
 g_StoryTable.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StrDictionary> > g_StrDictionary = new Dictionary<int, List<Tab_StrDictionary> >(); 
 public static bool InitTable_StrDictionary()
 {
 g_StrDictionary.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StrDictionary.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StrDictionary> values = new List<Tab_StrDictionary>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StrDictionary)subit);
 }
 g_StrDictionary.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_StrFilter> > g_StrFilter = new Dictionary<int, List<Tab_StrFilter> >(); 
 public static bool InitTable_StrFilter()
 {
 g_StrFilter.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_StrFilter.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_StrFilter> values = new List<Tab_StrFilter>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_StrFilter)subit);
 }
 g_StrFilter.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SwordsEquipPackUnlock> > g_SwordsEquipPackUnlock = new Dictionary<int, List<Tab_SwordsEquipPackUnlock> >(); 
 public static bool InitTable_SwordsEquipPackUnlock()
 {
 g_SwordsEquipPackUnlock.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SwordsEquipPackUnlock.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SwordsEquipPackUnlock> values = new List<Tab_SwordsEquipPackUnlock>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SwordsEquipPackUnlock)subit);
 }
 g_SwordsEquipPackUnlock.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SwordsManAttr> > g_SwordsManAttr = new Dictionary<int, List<Tab_SwordsManAttr> >(); 
 public static bool InitTable_SwordsManAttr()
 {
 g_SwordsManAttr.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SwordsManAttr.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SwordsManAttr> values = new List<Tab_SwordsManAttr>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SwordsManAttr)subit);
 }
 g_SwordsManAttr.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SwordsManGainRata> > g_SwordsManGainRata = new Dictionary<int, List<Tab_SwordsManGainRata> >(); 
 public static bool InitTable_SwordsManGainRata()
 {
 g_SwordsManGainRata.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SwordsManGainRata.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SwordsManGainRata> values = new List<Tab_SwordsManGainRata>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SwordsManGainRata)subit);
 }
 g_SwordsManGainRata.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SwordsManLevelUp> > g_SwordsManLevelUp = new Dictionary<int, List<Tab_SwordsManLevelUp> >(); 
 public static bool InitTable_SwordsManLevelUp()
 {
 g_SwordsManLevelUp.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SwordsManLevelUp.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SwordsManLevelUp> values = new List<Tab_SwordsManLevelUp>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SwordsManLevelUp)subit);
 }
 g_SwordsManLevelUp.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SwordsManScoreShop> > g_SwordsManScoreShop = new Dictionary<int, List<Tab_SwordsManScoreShop> >(); 
 public static bool InitTable_SwordsManScoreShop()
 {
 g_SwordsManScoreShop.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SwordsManScoreShop.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SwordsManScoreShop> values = new List<Tab_SwordsManScoreShop>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SwordsManScoreShop)subit);
 }
 g_SwordsManScoreShop.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_SystemShop> > g_SystemShop = new Dictionary<int, List<Tab_SystemShop> >(); 
 public static bool InitTable_SystemShop()
 {
 g_SystemShop.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_SystemShop.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_SystemShop> values = new List<Tab_SystemShop>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_SystemShop)subit);
 }
 g_SystemShop.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Teleport> > g_Teleport = new Dictionary<int, List<Tab_Teleport> >(); 
 public static bool InitTable_Teleport()
 {
 g_Teleport.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Teleport.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Teleport> values = new List<Tab_Teleport>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Teleport)subit);
 }
 g_Teleport.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_TestTable> > g_TestTable = new Dictionary<int, List<Tab_TestTable> >(); 
 public static bool InitTable_TestTable()
 {
 g_TestTable.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_TestTable.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_TestTable> values = new List<Tab_TestTable>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_TestTable)subit);
 }
 g_TestTable.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_TitleData> > g_TitleData = new Dictionary<int, List<Tab_TitleData> >(); 
 public static bool InitTable_TitleData()
 {
 g_TitleData.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_TitleData.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_TitleData> values = new List<Tab_TitleData>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_TitleData)subit);
 }
 g_TitleData.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_TitleType> > g_TitleType = new Dictionary<int, List<Tab_TitleType> >(); 
 public static bool InitTable_TitleType()
 {
 g_TitleType.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_TitleType.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_TitleType> values = new List<Tab_TitleType>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_TitleType)subit);
 }
 g_TitleType.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_TrainingBook> > g_TrainingBook = new Dictionary<int, List<Tab_TrainingBook> >(); 
 public static bool InitTable_TrainingBook()
 {
 g_TrainingBook.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_TrainingBook.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_TrainingBook> values = new List<Tab_TrainingBook>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_TrainingBook)subit);
 }
 g_TrainingBook.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_TrainingPic> > g_TrainingPic = new Dictionary<int, List<Tab_TrainingPic> >(); 
 public static bool InitTable_TrainingPic()
 {
 g_TrainingPic.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_TrainingPic.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_TrainingPic> values = new List<Tab_TrainingPic>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_TrainingPic)subit);
 }
 g_TrainingPic.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Trigger> > g_Trigger = new Dictionary<int, List<Tab_Trigger> >(); 
 public static bool InitTable_Trigger()
 {
 g_Trigger.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Trigger.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Trigger> values = new List<Tab_Trigger>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Trigger)subit);
 }
 g_Trigger.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_UIPath> > g_UIPath = new Dictionary<int, List<Tab_UIPath> >(); 
 public static bool InitTable_UIPath()
 {
 g_UIPath.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_UIPath.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_UIPath> values = new List<Tab_UIPath>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_UIPath)subit);
 }
 g_UIPath.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_UsableItem> > g_UsableItem = new Dictionary<int, List<Tab_UsableItem> >(); 
 public static bool InitTable_UsableItem()
 {
 g_UsableItem.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_UsableItem.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_UsableItem> values = new List<Tab_UsableItem>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_UsableItem)subit);
 }
 g_UsableItem.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_VIPShop> > g_VIPShop = new Dictionary<int, List<Tab_VIPShop> >(); 
 public static bool InitTable_VIPShop()
 {
 g_VIPShop.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_VIPShop.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_VIPShop> values = new List<Tab_VIPShop>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_VIPShop)subit);
 }
 g_VIPShop.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_VillainGuideNpc> > g_VillainGuideNpc = new Dictionary<int, List<Tab_VillainGuideNpc> >(); 
 public static bool InitTable_VillainGuideNpc()
 {
 g_VillainGuideNpc.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_VillainGuideNpc.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_VillainGuideNpc> values = new List<Tab_VillainGuideNpc>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_VillainGuideNpc)subit);
 }
 g_VillainGuideNpc.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_VillainScene> > g_VillainScene = new Dictionary<int, List<Tab_VillainScene> >(); 
 public static bool InitTable_VillainScene()
 {
 g_VillainScene.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_VillainScene.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_VillainScene> values = new List<Tab_VillainScene>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_VillainScene)subit);
 }
 g_VillainScene.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_VipBook> > g_VipBook = new Dictionary<int, List<Tab_VipBook> >(); 
 public static bool InitTable_VipBook()
 {
 g_VipBook.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_VipBook.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_VipBook> values = new List<Tab_VipBook>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_VipBook)subit);
 }
 g_VipBook.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_WeaponModel> > g_WeaponModel = new Dictionary<int, List<Tab_WeaponModel> >(); 
 public static bool InitTable_WeaponModel()
 {
 g_WeaponModel.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_WeaponModel.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_WeaponModel> values = new List<Tab_WeaponModel>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_WeaponModel)subit);
 }
 g_WeaponModel.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_Xiaozhitiao> > g_Xiaozhitiao = new Dictionary<int, List<Tab_Xiaozhitiao> >(); 
 public static bool InitTable_Xiaozhitiao()
 {
 g_Xiaozhitiao.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_Xiaozhitiao.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_Xiaozhitiao> values = new List<Tab_Xiaozhitiao>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_Xiaozhitiao)subit);
 }
 g_Xiaozhitiao.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_YanHua> > g_YanHua = new Dictionary<int, List<Tab_YanHua> >(); 
 public static bool InitTable_YanHua()
 {
 g_YanHua.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_YanHua.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_YanHua> values = new List<Tab_YanHua>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_YanHua)subit);
 }
 g_YanHua.Add(kv.Key, values);
 }
 return true;
 }
private static Dictionary<int, List<Tab_YuanBaoShop> > g_YuanBaoShop = new Dictionary<int, List<Tab_YuanBaoShop> >(); 
 public static bool InitTable_YuanBaoShop()
 {
 g_YuanBaoShop.Clear();
 Dictionary<int, List<object> > tmps = new Dictionary<int, List<object> >();
 if (!Tab_YuanBaoShop.LoadTable(tmps)) return false;
 foreach (KeyValuePair<int, List<object> > kv in tmps)
 {
 List<Tab_YuanBaoShop> values = new List<Tab_YuanBaoShop>();
 foreach (object subit in kv.Value)
 {
 values.Add((Tab_YuanBaoShop)subit);
 }
 g_YuanBaoShop.Add(kv.Key, values);
 }
 return true;
 }
public bool InitTable()
 {
 bool bRet=true;
 bRet &= InitTable_AchieveNotice();

bRet &= InitTable_ActivenessAward();

bRet &= InitTable_Animation();

bRet &= InitTable_AnimationCurve();

bRet &= InitTable_AutoSearch();

bRet &= InitTable_BackPackUnlock();

bRet &= InitTable_BePowerLevel();

bRet &= InitTable_Belle();

bRet &= InitTable_BelleAddition();

bRet &= InitTable_BelleAward();

bRet &= InitTable_BelleCloseCost();

bRet &= InitTable_BelleCloseLevel();

bRet &= InitTable_BelleFightShow();

bRet &= InitTable_BelleGetItemWay();

bRet &= InitTable_BelleLevelup();

bRet &= InitTable_BelleMatrix();

bRet &= InitTable_BelleMatrixAddition();

bRet &= InitTable_BiographyItem();

bRet &= InitTable_CabalFellowAttr();

bRet &= InitTable_CabalFellowElementSkill();

bRet &= InitTable_CabalFellowElementSkillBook();

bRet &= InitTable_CabalFellowStar();

bRet &= InitTable_CabalFellowTallentSkill();

bRet &= InitTable_CabalFellowTallentSkillBook();

bRet &= InitTable_CameraRock();

bRet &= InitTable_CangJingGeExtraReward();

bRet &= InitTable_CangJingGeInfo();

bRet &= InitTable_CangKuUnlock();

bRet &= InitTable_CharModel();

bRet &= InitTable_CharMount();

bRet &= InitTable_CharmItem();

bRet &= InitTable_ChristmasMeterialItem();

bRet &= InitTable_ChristmasTreeLevelUp();

bRet &= InitTable_ClientStoryTable();

bRet &= InitTable_CollectBornMonster();

bRet &= InitTable_CollectItem();

bRet &= InitTable_CommonItem();

bRet &= InitTable_CoolDownTime();

bRet &= InitTable_CopyScene();

bRet &= InitTable_CopySceneRule();

bRet &= InitTable_CopySceneScoreCalc();

bRet &= InitTable_DailyLuckyDrawBonusInfo();

bRet &= InitTable_DailyLuckyDrawPoolInfo();

bRet &= InitTable_DailyMission();

bRet &= InitTable_DailyMissionQuality();

bRet &= InitTable_DamageBoardType();

bRet &= InitTable_DayAward();

bRet &= InitTable_DropNotify();

bRet &= InitTable_DynamicObstacle();

bRet &= InitTable_Effect();

bRet &= InitTable_EffectPoint();

bRet &= InitTable_EquipAttr();

bRet &= InitTable_EquipEnchance();

bRet &= InitTable_EquipSet();

bRet &= InitTable_EquipSetTransfer();

bRet &= InitTable_EquipStar();

bRet &= InitTable_EquipStarLimit();

bRet &= InitTable_EquipStarRate();

bRet &= InitTable_FTESound();

bRet &= InitTable_FakeObject();

bRet &= InitTable_FashionData();

bRet &= InitTable_FellowGainCost();

bRet &= InitTable_FellowGainRate();

bRet &= InitTable_FlyWing();

bRet &= InitTable_FlyWingClient();

bRet &= InitTable_GemAttr();

bRet &= InitTable_GemMount();

bRet &= InitTable_GemOpenLimit();

bRet &= InitTable_GoldMoneyShop();

bRet &= InitTable_GongJiShop();

bRet &= InitTable_GongZhanReward();

bRet &= InitTable_GuildActivityBoss();

bRet &= InitTable_GuildAttrAddition();

bRet &= InitTable_GuildAutoLevelUp();

bRet &= InitTable_GuildMission();

bRet &= InitTable_GuildMissionAward();

bRet &= InitTable_GuildMissionGuild();

bRet &= InitTable_GuildPaoShang();

bRet &= InitTable_GuildRule();

bRet &= InitTable_GuildShop();

bRet &= InitTable_GuildWealthItemMake();

bRet &= InitTable_HelpItem();

bRet &= InitTable_HongBaoRankAwardInfo();

bRet &= InitTable_HuaShanReward();

bRet &= InitTable_HuaShanRewardItem();

bRet &= InitTable_Impact();

bRet &= InitTable_ImpactConsume();

bRet &= InitTable_ItemGetWay();

bRet &= InitTable_ItemVisual();

bRet &= InitTable_JuYiReward();

bRet &= InitTable_LevelAwardPacket();

bRet &= InitTable_LevelUp();

bRet &= InitTable_LevelUpLimit();

bRet &= InitTable_LightSkill();

bRet &= InitTable_LivingSkill();

bRet &= InitTable_LivingSkillStuff();

bRet &= InitTable_MapConnection();

bRet &= InitTable_MasterShop();

bRet &= InitTable_MasterSkill();

bRet &= InitTable_MasterSkillLimit();

bRet &= InitTable_MissionBase();

bRet &= InitTable_MissionBonus();

bRet &= InitTable_MissionCollectItem();

bRet &= InitTable_MissionCopyScene();

bRet &= InitTable_MissionDelivery();

bRet &= InitTable_MissionDictionary();

bRet &= InitTable_MissionEnterArea();

bRet &= InitTable_MissionKillMonster();

bRet &= InitTable_MissionLevelUp();

bRet &= InitTable_MissionLimit();

bRet &= InitTable_MissionLootItem();

bRet &= InitTable_MissionOperationNum();

bRet &= InitTable_MissionUseItem();

bRet &= InitTable_MoneyTree();

bRet &= InitTable_MoneyTreeVIP();

bRet &= InitTable_MountBase();

bRet &= InitTable_NewServerAward();

bRet &= InitTable_NianShouNpcScence();

bRet &= InitTable_NpcDialog();

bRet &= InitTable_NpcOptionDialog();

bRet &= InitTable_OffLineExp();

bRet &= InitTable_OnlineTimeRankReward();

bRet &= InitTable_PVPRule();

bRet &= InitTable_PaoHuanBonus();

bRet &= InitTable_PaoHuanMission();

bRet &= InitTable_PaoHuanRefresh();

bRet &= InitTable_PatrolPoint();

bRet &= InitTable_ProfessionConmmon();

bRet &= InitTable_ProfessionReputationReward();

bRet &= InitTable_PublicConfig();

bRet &= InitTable_PushNotification();

bRet &= InitTable_PvpAward();

bRet &= InitTable_PvpRank();

bRet &= InitTable_PvpShop();

bRet &= InitTable_QianKunDaiFormula();

bRet &= InitTable_RankReward();

bRet &= InitTable_Recharge();

bRet &= InitTable_Relation();

bRet &= InitTable_RestaurantDesk();

bRet &= InitTable_RestaurantFood();

bRet &= InitTable_RestaurantGuest();

bRet &= InitTable_RestaurantLevel();

bRet &= InitTable_RoleBaseAttr();

bRet &= InitTable_RoleName();

bRet &= InitTable_SNSReward();

bRet &= InitTable_SceneClass();

bRet &= InitTable_SceneFightPos();

bRet &= InitTable_SceneNpc();

bRet &= InitTable_SevenDaysLogicType();

bRet &= InitTable_SevenDaysReward();

bRet &= InitTable_ShareReward();

bRet &= InitTable_ShenQiInfo();

bRet &= InitTable_ShenQiSkillInfo();

bRet &= InitTable_ShouHuaAwardInfo();

bRet &= InitTable_SkillActive();

bRet &= InitTable_SkillBase();

bRet &= InitTable_SkillEx();

bRet &= InitTable_SkillLevelUp();

bRet &= InitTable_SnareObjInfo();

bRet &= InitTable_SongHuaAwardInfo();

bRet &= InitTable_Sounds();

bRet &= InitTable_StaminaBuyRule();

bRet &= InitTable_StarCondition();

bRet &= InitTable_StoryCopyScene();

bRet &= InitTable_StoryCopySceneAward();

bRet &= InitTable_StoryCopySceneChapter();

bRet &= InitTable_StoryCopySceneFlow();

bRet &= InitTable_StoryCopySceneNpc();

bRet &= InitTable_StoryTable();

bRet &= InitTable_StrDictionary();

bRet &= InitTable_StrFilter();

bRet &= InitTable_SwordsEquipPackUnlock();

bRet &= InitTable_SwordsManAttr();

bRet &= InitTable_SwordsManGainRata();

bRet &= InitTable_SwordsManLevelUp();

bRet &= InitTable_SwordsManScoreShop();

bRet &= InitTable_SystemShop();

bRet &= InitTable_Teleport();

bRet &= InitTable_TestTable();

bRet &= InitTable_TitleData();

bRet &= InitTable_TitleType();

bRet &= InitTable_TrainingBook();

bRet &= InitTable_TrainingPic();

bRet &= InitTable_Trigger();

bRet &= InitTable_UIPath();

bRet &= InitTable_UsableItem();

bRet &= InitTable_VIPShop();

bRet &= InitTable_VillainGuideNpc();

bRet &= InitTable_VillainScene();

bRet &= InitTable_VipBook();

bRet &= InitTable_WeaponModel();

bRet &= InitTable_Xiaozhitiao();

bRet &= InitTable_YanHua();

bRet &= InitTable_YuanBaoShop();


 return bRet;
 }

public static List<Tab_AchieveNotice> GetAchieveNoticeByID(int nKey)
 {
 if(g_AchieveNotice.Count==0)
 {
 InitTable_AchieveNotice();
 }
 if( g_AchieveNotice.ContainsKey(nKey))
 {
 return g_AchieveNotice[nKey];
 }
 return null;
 }
 public static Tab_AchieveNotice GetAchieveNoticeByID(int nKey, int nIndex)
 {
 if(g_AchieveNotice.Count==0)
 {
 InitTable_AchieveNotice();
 }
 if( g_AchieveNotice.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_AchieveNotice[nKey].Count)
 return g_AchieveNotice[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_AchieveNotice> > GetAchieveNotice()
 {
 if(g_AchieveNotice.Count==0)
 {
 InitTable_AchieveNotice();
 }
 return g_AchieveNotice;
 }

public static List<Tab_ActivenessAward> GetActivenessAwardByID(int nKey)
 {
 if(g_ActivenessAward.Count==0)
 {
 InitTable_ActivenessAward();
 }
 if( g_ActivenessAward.ContainsKey(nKey))
 {
 return g_ActivenessAward[nKey];
 }
 return null;
 }
 public static Tab_ActivenessAward GetActivenessAwardByID(int nKey, int nIndex)
 {
 if(g_ActivenessAward.Count==0)
 {
 InitTable_ActivenessAward();
 }
 if( g_ActivenessAward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ActivenessAward[nKey].Count)
 return g_ActivenessAward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ActivenessAward> > GetActivenessAward()
 {
 if(g_ActivenessAward.Count==0)
 {
 InitTable_ActivenessAward();
 }
 return g_ActivenessAward;
 }

public static List<Tab_Animation> GetAnimationByID(int nKey)
 {
 if(g_Animation.Count==0)
 {
 InitTable_Animation();
 }
 if( g_Animation.ContainsKey(nKey))
 {
 return g_Animation[nKey];
 }
 return null;
 }
 public static Tab_Animation GetAnimationByID(int nKey, int nIndex)
 {
 if(g_Animation.Count==0)
 {
 InitTable_Animation();
 }
 if( g_Animation.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Animation[nKey].Count)
 return g_Animation[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Animation> > GetAnimation()
 {
 if(g_Animation.Count==0)
 {
 InitTable_Animation();
 }
 return g_Animation;
 }

public static List<Tab_AnimationCurve> GetAnimationCurveByID(int nKey)
 {
 if(g_AnimationCurve.Count==0)
 {
 InitTable_AnimationCurve();
 }
 if( g_AnimationCurve.ContainsKey(nKey))
 {
 return g_AnimationCurve[nKey];
 }
 return null;
 }
 public static Tab_AnimationCurve GetAnimationCurveByID(int nKey, int nIndex)
 {
 if(g_AnimationCurve.Count==0)
 {
 InitTable_AnimationCurve();
 }
 if( g_AnimationCurve.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_AnimationCurve[nKey].Count)
 return g_AnimationCurve[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_AnimationCurve> > GetAnimationCurve()
 {
 if(g_AnimationCurve.Count==0)
 {
 InitTable_AnimationCurve();
 }
 return g_AnimationCurve;
 }

public static List<Tab_AutoSearch> GetAutoSearchByID(int nKey)
 {
 if(g_AutoSearch.Count==0)
 {
 InitTable_AutoSearch();
 }
 if( g_AutoSearch.ContainsKey(nKey))
 {
 return g_AutoSearch[nKey];
 }
 return null;
 }
 public static Tab_AutoSearch GetAutoSearchByID(int nKey, int nIndex)
 {
 if(g_AutoSearch.Count==0)
 {
 InitTable_AutoSearch();
 }
 if( g_AutoSearch.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_AutoSearch[nKey].Count)
 return g_AutoSearch[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_AutoSearch> > GetAutoSearch()
 {
 if(g_AutoSearch.Count==0)
 {
 InitTable_AutoSearch();
 }
 return g_AutoSearch;
 }

public static List<Tab_BackPackUnlock> GetBackPackUnlockByID(int nKey)
 {
 if(g_BackPackUnlock.Count==0)
 {
 InitTable_BackPackUnlock();
 }
 if( g_BackPackUnlock.ContainsKey(nKey))
 {
 return g_BackPackUnlock[nKey];
 }
 return null;
 }
 public static Tab_BackPackUnlock GetBackPackUnlockByID(int nKey, int nIndex)
 {
 if(g_BackPackUnlock.Count==0)
 {
 InitTable_BackPackUnlock();
 }
 if( g_BackPackUnlock.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BackPackUnlock[nKey].Count)
 return g_BackPackUnlock[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BackPackUnlock> > GetBackPackUnlock()
 {
 if(g_BackPackUnlock.Count==0)
 {
 InitTable_BackPackUnlock();
 }
 return g_BackPackUnlock;
 }

public static List<Tab_BePowerLevel> GetBePowerLevelByID(int nKey)
 {
 if(g_BePowerLevel.Count==0)
 {
 InitTable_BePowerLevel();
 }
 if( g_BePowerLevel.ContainsKey(nKey))
 {
 return g_BePowerLevel[nKey];
 }
 return null;
 }
 public static Tab_BePowerLevel GetBePowerLevelByID(int nKey, int nIndex)
 {
 if(g_BePowerLevel.Count==0)
 {
 InitTable_BePowerLevel();
 }
 if( g_BePowerLevel.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BePowerLevel[nKey].Count)
 return g_BePowerLevel[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BePowerLevel> > GetBePowerLevel()
 {
 if(g_BePowerLevel.Count==0)
 {
 InitTable_BePowerLevel();
 }
 return g_BePowerLevel;
 }

public static List<Tab_Belle> GetBelleByID(int nKey)
 {
 if(g_Belle.Count==0)
 {
 InitTable_Belle();
 }
 if( g_Belle.ContainsKey(nKey))
 {
 return g_Belle[nKey];
 }
 return null;
 }
 public static Tab_Belle GetBelleByID(int nKey, int nIndex)
 {
 if(g_Belle.Count==0)
 {
 InitTable_Belle();
 }
 if( g_Belle.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Belle[nKey].Count)
 return g_Belle[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Belle> > GetBelle()
 {
 if(g_Belle.Count==0)
 {
 InitTable_Belle();
 }
 return g_Belle;
 }

public static List<Tab_BelleAddition> GetBelleAdditionByID(int nKey)
 {
 if(g_BelleAddition.Count==0)
 {
 InitTable_BelleAddition();
 }
 if( g_BelleAddition.ContainsKey(nKey))
 {
 return g_BelleAddition[nKey];
 }
 return null;
 }
 public static Tab_BelleAddition GetBelleAdditionByID(int nKey, int nIndex)
 {
 if(g_BelleAddition.Count==0)
 {
 InitTable_BelleAddition();
 }
 if( g_BelleAddition.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BelleAddition[nKey].Count)
 return g_BelleAddition[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BelleAddition> > GetBelleAddition()
 {
 if(g_BelleAddition.Count==0)
 {
 InitTable_BelleAddition();
 }
 return g_BelleAddition;
 }

public static List<Tab_BelleAward> GetBelleAwardByID(int nKey)
 {
 if(g_BelleAward.Count==0)
 {
 InitTable_BelleAward();
 }
 if( g_BelleAward.ContainsKey(nKey))
 {
 return g_BelleAward[nKey];
 }
 return null;
 }
 public static Tab_BelleAward GetBelleAwardByID(int nKey, int nIndex)
 {
 if(g_BelleAward.Count==0)
 {
 InitTable_BelleAward();
 }
 if( g_BelleAward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BelleAward[nKey].Count)
 return g_BelleAward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BelleAward> > GetBelleAward()
 {
 if(g_BelleAward.Count==0)
 {
 InitTable_BelleAward();
 }
 return g_BelleAward;
 }

public static List<Tab_BelleCloseCost> GetBelleCloseCostByID(int nKey)
 {
 if(g_BelleCloseCost.Count==0)
 {
 InitTable_BelleCloseCost();
 }
 if( g_BelleCloseCost.ContainsKey(nKey))
 {
 return g_BelleCloseCost[nKey];
 }
 return null;
 }
 public static Tab_BelleCloseCost GetBelleCloseCostByID(int nKey, int nIndex)
 {
 if(g_BelleCloseCost.Count==0)
 {
 InitTable_BelleCloseCost();
 }
 if( g_BelleCloseCost.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BelleCloseCost[nKey].Count)
 return g_BelleCloseCost[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BelleCloseCost> > GetBelleCloseCost()
 {
 if(g_BelleCloseCost.Count==0)
 {
 InitTable_BelleCloseCost();
 }
 return g_BelleCloseCost;
 }

public static List<Tab_BelleCloseLevel> GetBelleCloseLevelByID(int nKey)
 {
 if(g_BelleCloseLevel.Count==0)
 {
 InitTable_BelleCloseLevel();
 }
 if( g_BelleCloseLevel.ContainsKey(nKey))
 {
 return g_BelleCloseLevel[nKey];
 }
 return null;
 }
 public static Tab_BelleCloseLevel GetBelleCloseLevelByID(int nKey, int nIndex)
 {
 if(g_BelleCloseLevel.Count==0)
 {
 InitTable_BelleCloseLevel();
 }
 if( g_BelleCloseLevel.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BelleCloseLevel[nKey].Count)
 return g_BelleCloseLevel[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BelleCloseLevel> > GetBelleCloseLevel()
 {
 if(g_BelleCloseLevel.Count==0)
 {
 InitTable_BelleCloseLevel();
 }
 return g_BelleCloseLevel;
 }

public static List<Tab_BelleFightShow> GetBelleFightShowByID(int nKey)
 {
 if(g_BelleFightShow.Count==0)
 {
 InitTable_BelleFightShow();
 }
 if( g_BelleFightShow.ContainsKey(nKey))
 {
 return g_BelleFightShow[nKey];
 }
 return null;
 }
 public static Tab_BelleFightShow GetBelleFightShowByID(int nKey, int nIndex)
 {
 if(g_BelleFightShow.Count==0)
 {
 InitTable_BelleFightShow();
 }
 if( g_BelleFightShow.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BelleFightShow[nKey].Count)
 return g_BelleFightShow[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BelleFightShow> > GetBelleFightShow()
 {
 if(g_BelleFightShow.Count==0)
 {
 InitTable_BelleFightShow();
 }
 return g_BelleFightShow;
 }

public static List<Tab_BelleGetItemWay> GetBelleGetItemWayByID(int nKey)
 {
 if(g_BelleGetItemWay.Count==0)
 {
 InitTable_BelleGetItemWay();
 }
 if( g_BelleGetItemWay.ContainsKey(nKey))
 {
 return g_BelleGetItemWay[nKey];
 }
 return null;
 }
 public static Tab_BelleGetItemWay GetBelleGetItemWayByID(int nKey, int nIndex)
 {
 if(g_BelleGetItemWay.Count==0)
 {
 InitTable_BelleGetItemWay();
 }
 if( g_BelleGetItemWay.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BelleGetItemWay[nKey].Count)
 return g_BelleGetItemWay[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BelleGetItemWay> > GetBelleGetItemWay()
 {
 if(g_BelleGetItemWay.Count==0)
 {
 InitTable_BelleGetItemWay();
 }
 return g_BelleGetItemWay;
 }

public static List<Tab_BelleLevelup> GetBelleLevelupByID(int nKey)
 {
 if(g_BelleLevelup.Count==0)
 {
 InitTable_BelleLevelup();
 }
 if( g_BelleLevelup.ContainsKey(nKey))
 {
 return g_BelleLevelup[nKey];
 }
 return null;
 }
 public static Tab_BelleLevelup GetBelleLevelupByID(int nKey, int nIndex)
 {
 if(g_BelleLevelup.Count==0)
 {
 InitTable_BelleLevelup();
 }
 if( g_BelleLevelup.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BelleLevelup[nKey].Count)
 return g_BelleLevelup[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BelleLevelup> > GetBelleLevelup()
 {
 if(g_BelleLevelup.Count==0)
 {
 InitTable_BelleLevelup();
 }
 return g_BelleLevelup;
 }

public static List<Tab_BelleMatrix> GetBelleMatrixByID(int nKey)
 {
 if(g_BelleMatrix.Count==0)
 {
 InitTable_BelleMatrix();
 }
 if( g_BelleMatrix.ContainsKey(nKey))
 {
 return g_BelleMatrix[nKey];
 }
 return null;
 }
 public static Tab_BelleMatrix GetBelleMatrixByID(int nKey, int nIndex)
 {
 if(g_BelleMatrix.Count==0)
 {
 InitTable_BelleMatrix();
 }
 if( g_BelleMatrix.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BelleMatrix[nKey].Count)
 return g_BelleMatrix[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BelleMatrix> > GetBelleMatrix()
 {
 if(g_BelleMatrix.Count==0)
 {
 InitTable_BelleMatrix();
 }
 return g_BelleMatrix;
 }

public static List<Tab_BelleMatrixAddition> GetBelleMatrixAdditionByID(int nKey)
 {
 if(g_BelleMatrixAddition.Count==0)
 {
 InitTable_BelleMatrixAddition();
 }
 if( g_BelleMatrixAddition.ContainsKey(nKey))
 {
 return g_BelleMatrixAddition[nKey];
 }
 return null;
 }
 public static Tab_BelleMatrixAddition GetBelleMatrixAdditionByID(int nKey, int nIndex)
 {
 if(g_BelleMatrixAddition.Count==0)
 {
 InitTable_BelleMatrixAddition();
 }
 if( g_BelleMatrixAddition.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BelleMatrixAddition[nKey].Count)
 return g_BelleMatrixAddition[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BelleMatrixAddition> > GetBelleMatrixAddition()
 {
 if(g_BelleMatrixAddition.Count==0)
 {
 InitTable_BelleMatrixAddition();
 }
 return g_BelleMatrixAddition;
 }

public static List<Tab_BiographyItem> GetBiographyItemByID(int nKey)
 {
 if(g_BiographyItem.Count==0)
 {
 InitTable_BiographyItem();
 }
 if( g_BiographyItem.ContainsKey(nKey))
 {
 return g_BiographyItem[nKey];
 }
 return null;
 }
 public static Tab_BiographyItem GetBiographyItemByID(int nKey, int nIndex)
 {
 if(g_BiographyItem.Count==0)
 {
 InitTable_BiographyItem();
 }
 if( g_BiographyItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_BiographyItem[nKey].Count)
 return g_BiographyItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_BiographyItem> > GetBiographyItem()
 {
 if(g_BiographyItem.Count==0)
 {
 InitTable_BiographyItem();
 }
 return g_BiographyItem;
 }

public static List<Tab_CabalFellowAttr> GetCabalFellowAttrByID(int nKey)
 {
 if(g_CabalFellowAttr.Count==0)
 {
 InitTable_CabalFellowAttr();
 }
 if( g_CabalFellowAttr.ContainsKey(nKey))
 {
 return g_CabalFellowAttr[nKey];
 }
 return null;
 }
 public static Tab_CabalFellowAttr GetCabalFellowAttrByID(int nKey, int nIndex)
 {
 if(g_CabalFellowAttr.Count==0)
 {
 InitTable_CabalFellowAttr();
 }
 if( g_CabalFellowAttr.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CabalFellowAttr[nKey].Count)
 return g_CabalFellowAttr[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CabalFellowAttr> > GetCabalFellowAttr()
 {
 if(g_CabalFellowAttr.Count==0)
 {
 InitTable_CabalFellowAttr();
 }
 return g_CabalFellowAttr;
 }

public static List<Tab_CabalFellowElementSkill> GetCabalFellowElementSkillByID(int nKey)
 {
 if(g_CabalFellowElementSkill.Count==0)
 {
 InitTable_CabalFellowElementSkill();
 }
 if( g_CabalFellowElementSkill.ContainsKey(nKey))
 {
 return g_CabalFellowElementSkill[nKey];
 }
 return null;
 }
 public static Tab_CabalFellowElementSkill GetCabalFellowElementSkillByID(int nKey, int nIndex)
 {
 if(g_CabalFellowElementSkill.Count==0)
 {
 InitTable_CabalFellowElementSkill();
 }
 if( g_CabalFellowElementSkill.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CabalFellowElementSkill[nKey].Count)
 return g_CabalFellowElementSkill[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CabalFellowElementSkill> > GetCabalFellowElementSkill()
 {
 if(g_CabalFellowElementSkill.Count==0)
 {
 InitTable_CabalFellowElementSkill();
 }
 return g_CabalFellowElementSkill;
 }

public static List<Tab_CabalFellowElementSkillBook> GetCabalFellowElementSkillBookByID(int nKey)
 {
 if(g_CabalFellowElementSkillBook.Count==0)
 {
 InitTable_CabalFellowElementSkillBook();
 }
 if( g_CabalFellowElementSkillBook.ContainsKey(nKey))
 {
 return g_CabalFellowElementSkillBook[nKey];
 }
 return null;
 }
 public static Tab_CabalFellowElementSkillBook GetCabalFellowElementSkillBookByID(int nKey, int nIndex)
 {
 if(g_CabalFellowElementSkillBook.Count==0)
 {
 InitTable_CabalFellowElementSkillBook();
 }
 if( g_CabalFellowElementSkillBook.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CabalFellowElementSkillBook[nKey].Count)
 return g_CabalFellowElementSkillBook[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CabalFellowElementSkillBook> > GetCabalFellowElementSkillBook()
 {
 if(g_CabalFellowElementSkillBook.Count==0)
 {
 InitTable_CabalFellowElementSkillBook();
 }
 return g_CabalFellowElementSkillBook;
 }

public static List<Tab_CabalFellowStar> GetCabalFellowStarByID(int nKey)
 {
 if(g_CabalFellowStar.Count==0)
 {
 InitTable_CabalFellowStar();
 }
 if( g_CabalFellowStar.ContainsKey(nKey))
 {
 return g_CabalFellowStar[nKey];
 }
 return null;
 }
 public static Tab_CabalFellowStar GetCabalFellowStarByID(int nKey, int nIndex)
 {
 if(g_CabalFellowStar.Count==0)
 {
 InitTable_CabalFellowStar();
 }
 if( g_CabalFellowStar.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CabalFellowStar[nKey].Count)
 return g_CabalFellowStar[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CabalFellowStar> > GetCabalFellowStar()
 {
 if(g_CabalFellowStar.Count==0)
 {
 InitTable_CabalFellowStar();
 }
 return g_CabalFellowStar;
 }

public static List<Tab_CabalFellowTallentSkill> GetCabalFellowTallentSkillByID(int nKey)
 {
 if(g_CabalFellowTallentSkill.Count==0)
 {
 InitTable_CabalFellowTallentSkill();
 }
 if( g_CabalFellowTallentSkill.ContainsKey(nKey))
 {
 return g_CabalFellowTallentSkill[nKey];
 }
 return null;
 }
 public static Tab_CabalFellowTallentSkill GetCabalFellowTallentSkillByID(int nKey, int nIndex)
 {
 if(g_CabalFellowTallentSkill.Count==0)
 {
 InitTable_CabalFellowTallentSkill();
 }
 if( g_CabalFellowTallentSkill.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CabalFellowTallentSkill[nKey].Count)
 return g_CabalFellowTallentSkill[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CabalFellowTallentSkill> > GetCabalFellowTallentSkill()
 {
 if(g_CabalFellowTallentSkill.Count==0)
 {
 InitTable_CabalFellowTallentSkill();
 }
 return g_CabalFellowTallentSkill;
 }

public static List<Tab_CabalFellowTallentSkillBook> GetCabalFellowTallentSkillBookByID(int nKey)
 {
 if(g_CabalFellowTallentSkillBook.Count==0)
 {
 InitTable_CabalFellowTallentSkillBook();
 }
 if( g_CabalFellowTallentSkillBook.ContainsKey(nKey))
 {
 return g_CabalFellowTallentSkillBook[nKey];
 }
 return null;
 }
 public static Tab_CabalFellowTallentSkillBook GetCabalFellowTallentSkillBookByID(int nKey, int nIndex)
 {
 if(g_CabalFellowTallentSkillBook.Count==0)
 {
 InitTable_CabalFellowTallentSkillBook();
 }
 if( g_CabalFellowTallentSkillBook.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CabalFellowTallentSkillBook[nKey].Count)
 return g_CabalFellowTallentSkillBook[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CabalFellowTallentSkillBook> > GetCabalFellowTallentSkillBook()
 {
 if(g_CabalFellowTallentSkillBook.Count==0)
 {
 InitTable_CabalFellowTallentSkillBook();
 }
 return g_CabalFellowTallentSkillBook;
 }

public static List<Tab_CameraRock> GetCameraRockByID(int nKey)
 {
 if(g_CameraRock.Count==0)
 {
 InitTable_CameraRock();
 }
 if( g_CameraRock.ContainsKey(nKey))
 {
 return g_CameraRock[nKey];
 }
 return null;
 }
 public static Tab_CameraRock GetCameraRockByID(int nKey, int nIndex)
 {
 if(g_CameraRock.Count==0)
 {
 InitTable_CameraRock();
 }
 if( g_CameraRock.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CameraRock[nKey].Count)
 return g_CameraRock[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CameraRock> > GetCameraRock()
 {
 if(g_CameraRock.Count==0)
 {
 InitTable_CameraRock();
 }
 return g_CameraRock;
 }

public static List<Tab_CangJingGeExtraReward> GetCangJingGeExtraRewardByID(int nKey)
 {
 if(g_CangJingGeExtraReward.Count==0)
 {
 InitTable_CangJingGeExtraReward();
 }
 if( g_CangJingGeExtraReward.ContainsKey(nKey))
 {
 return g_CangJingGeExtraReward[nKey];
 }
 return null;
 }
 public static Tab_CangJingGeExtraReward GetCangJingGeExtraRewardByID(int nKey, int nIndex)
 {
 if(g_CangJingGeExtraReward.Count==0)
 {
 InitTable_CangJingGeExtraReward();
 }
 if( g_CangJingGeExtraReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CangJingGeExtraReward[nKey].Count)
 return g_CangJingGeExtraReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CangJingGeExtraReward> > GetCangJingGeExtraReward()
 {
 if(g_CangJingGeExtraReward.Count==0)
 {
 InitTable_CangJingGeExtraReward();
 }
 return g_CangJingGeExtraReward;
 }

public static List<Tab_CangJingGeInfo> GetCangJingGeInfoByID(int nKey)
 {
 if(g_CangJingGeInfo.Count==0)
 {
 InitTable_CangJingGeInfo();
 }
 if( g_CangJingGeInfo.ContainsKey(nKey))
 {
 return g_CangJingGeInfo[nKey];
 }
 return null;
 }
 public static Tab_CangJingGeInfo GetCangJingGeInfoByID(int nKey, int nIndex)
 {
 if(g_CangJingGeInfo.Count==0)
 {
 InitTable_CangJingGeInfo();
 }
 if( g_CangJingGeInfo.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CangJingGeInfo[nKey].Count)
 return g_CangJingGeInfo[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CangJingGeInfo> > GetCangJingGeInfo()
 {
 if(g_CangJingGeInfo.Count==0)
 {
 InitTable_CangJingGeInfo();
 }
 return g_CangJingGeInfo;
 }

public static List<Tab_CangKuUnlock> GetCangKuUnlockByID(int nKey)
 {
 if(g_CangKuUnlock.Count==0)
 {
 InitTable_CangKuUnlock();
 }
 if( g_CangKuUnlock.ContainsKey(nKey))
 {
 return g_CangKuUnlock[nKey];
 }
 return null;
 }
 public static Tab_CangKuUnlock GetCangKuUnlockByID(int nKey, int nIndex)
 {
 if(g_CangKuUnlock.Count==0)
 {
 InitTable_CangKuUnlock();
 }
 if( g_CangKuUnlock.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CangKuUnlock[nKey].Count)
 return g_CangKuUnlock[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CangKuUnlock> > GetCangKuUnlock()
 {
 if(g_CangKuUnlock.Count==0)
 {
 InitTable_CangKuUnlock();
 }
 return g_CangKuUnlock;
 }

public static List<Tab_CharModel> GetCharModelByID(int nKey)
 {
 if(g_CharModel.Count==0)
 {
 InitTable_CharModel();
 }
 if( g_CharModel.ContainsKey(nKey))
 {
 return g_CharModel[nKey];
 }
 return null;
 }
 public static Tab_CharModel GetCharModelByID(int nKey, int nIndex)
 {
 if(g_CharModel.Count==0)
 {
 InitTable_CharModel();
 }
 if( g_CharModel.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CharModel[nKey].Count)
 return g_CharModel[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CharModel> > GetCharModel()
 {
 if(g_CharModel.Count==0)
 {
 InitTable_CharModel();
 }
 return g_CharModel;
 }

public static List<Tab_CharMount> GetCharMountByID(int nKey)
 {
 if(g_CharMount.Count==0)
 {
 InitTable_CharMount();
 }
 if( g_CharMount.ContainsKey(nKey))
 {
 return g_CharMount[nKey];
 }
 return null;
 }
 public static Tab_CharMount GetCharMountByID(int nKey, int nIndex)
 {
 if(g_CharMount.Count==0)
 {
 InitTable_CharMount();
 }
 if( g_CharMount.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CharMount[nKey].Count)
 return g_CharMount[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CharMount> > GetCharMount()
 {
 if(g_CharMount.Count==0)
 {
 InitTable_CharMount();
 }
 return g_CharMount;
 }

public static List<Tab_CharmItem> GetCharmItemByID(int nKey)
 {
 if(g_CharmItem.Count==0)
 {
 InitTable_CharmItem();
 }
 if( g_CharmItem.ContainsKey(nKey))
 {
 return g_CharmItem[nKey];
 }
 return null;
 }
 public static Tab_CharmItem GetCharmItemByID(int nKey, int nIndex)
 {
 if(g_CharmItem.Count==0)
 {
 InitTable_CharmItem();
 }
 if( g_CharmItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CharmItem[nKey].Count)
 return g_CharmItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CharmItem> > GetCharmItem()
 {
 if(g_CharmItem.Count==0)
 {
 InitTable_CharmItem();
 }
 return g_CharmItem;
 }

public static List<Tab_ChristmasMeterialItem> GetChristmasMeterialItemByID(int nKey)
 {
 if(g_ChristmasMeterialItem.Count==0)
 {
 InitTable_ChristmasMeterialItem();
 }
 if( g_ChristmasMeterialItem.ContainsKey(nKey))
 {
 return g_ChristmasMeterialItem[nKey];
 }
 return null;
 }
 public static Tab_ChristmasMeterialItem GetChristmasMeterialItemByID(int nKey, int nIndex)
 {
 if(g_ChristmasMeterialItem.Count==0)
 {
 InitTable_ChristmasMeterialItem();
 }
 if( g_ChristmasMeterialItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ChristmasMeterialItem[nKey].Count)
 return g_ChristmasMeterialItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ChristmasMeterialItem> > GetChristmasMeterialItem()
 {
 if(g_ChristmasMeterialItem.Count==0)
 {
 InitTable_ChristmasMeterialItem();
 }
 return g_ChristmasMeterialItem;
 }

public static List<Tab_ChristmasTreeLevelUp> GetChristmasTreeLevelUpByID(int nKey)
 {
 if(g_ChristmasTreeLevelUp.Count==0)
 {
 InitTable_ChristmasTreeLevelUp();
 }
 if( g_ChristmasTreeLevelUp.ContainsKey(nKey))
 {
 return g_ChristmasTreeLevelUp[nKey];
 }
 return null;
 }
 public static Tab_ChristmasTreeLevelUp GetChristmasTreeLevelUpByID(int nKey, int nIndex)
 {
 if(g_ChristmasTreeLevelUp.Count==0)
 {
 InitTable_ChristmasTreeLevelUp();
 }
 if( g_ChristmasTreeLevelUp.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ChristmasTreeLevelUp[nKey].Count)
 return g_ChristmasTreeLevelUp[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ChristmasTreeLevelUp> > GetChristmasTreeLevelUp()
 {
 if(g_ChristmasTreeLevelUp.Count==0)
 {
 InitTable_ChristmasTreeLevelUp();
 }
 return g_ChristmasTreeLevelUp;
 }

public static List<Tab_ClientStoryTable> GetClientStoryTableByID(int nKey)
 {
 if(g_ClientStoryTable.Count==0)
 {
 InitTable_ClientStoryTable();
 }
 if( g_ClientStoryTable.ContainsKey(nKey))
 {
 return g_ClientStoryTable[nKey];
 }
 return null;
 }
 public static Tab_ClientStoryTable GetClientStoryTableByID(int nKey, int nIndex)
 {
 if(g_ClientStoryTable.Count==0)
 {
 InitTable_ClientStoryTable();
 }
 if( g_ClientStoryTable.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ClientStoryTable[nKey].Count)
 return g_ClientStoryTable[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ClientStoryTable> > GetClientStoryTable()
 {
 if(g_ClientStoryTable.Count==0)
 {
 InitTable_ClientStoryTable();
 }
 return g_ClientStoryTable;
 }

public static List<Tab_CollectBornMonster> GetCollectBornMonsterByID(int nKey)
 {
 if(g_CollectBornMonster.Count==0)
 {
 InitTable_CollectBornMonster();
 }
 if( g_CollectBornMonster.ContainsKey(nKey))
 {
 return g_CollectBornMonster[nKey];
 }
 return null;
 }
 public static Tab_CollectBornMonster GetCollectBornMonsterByID(int nKey, int nIndex)
 {
 if(g_CollectBornMonster.Count==0)
 {
 InitTable_CollectBornMonster();
 }
 if( g_CollectBornMonster.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CollectBornMonster[nKey].Count)
 return g_CollectBornMonster[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CollectBornMonster> > GetCollectBornMonster()
 {
 if(g_CollectBornMonster.Count==0)
 {
 InitTable_CollectBornMonster();
 }
 return g_CollectBornMonster;
 }

public static List<Tab_CollectItem> GetCollectItemByID(int nKey)
 {
 if(g_CollectItem.Count==0)
 {
 InitTable_CollectItem();
 }
 if( g_CollectItem.ContainsKey(nKey))
 {
 return g_CollectItem[nKey];
 }
 return null;
 }
 public static Tab_CollectItem GetCollectItemByID(int nKey, int nIndex)
 {
 if(g_CollectItem.Count==0)
 {
 InitTable_CollectItem();
 }
 if( g_CollectItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CollectItem[nKey].Count)
 return g_CollectItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CollectItem> > GetCollectItem()
 {
 if(g_CollectItem.Count==0)
 {
 InitTable_CollectItem();
 }
 return g_CollectItem;
 }

public static List<Tab_CommonItem> GetCommonItemByID(int nKey)
 {
 if(g_CommonItem.Count==0)
 {
 InitTable_CommonItem();
 }
 if( g_CommonItem.ContainsKey(nKey))
 {
 return g_CommonItem[nKey];
 }
 return null;
 }
 public static Tab_CommonItem GetCommonItemByID(int nKey, int nIndex)
 {
 if(g_CommonItem.Count==0)
 {
 InitTable_CommonItem();
 }
 if( g_CommonItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CommonItem[nKey].Count)
 return g_CommonItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CommonItem> > GetCommonItem()
 {
 if(g_CommonItem.Count==0)
 {
 InitTable_CommonItem();
 }
 return g_CommonItem;
 }

public static List<Tab_CoolDownTime> GetCoolDownTimeByID(int nKey)
 {
 if(g_CoolDownTime.Count==0)
 {
 InitTable_CoolDownTime();
 }
 if( g_CoolDownTime.ContainsKey(nKey))
 {
 return g_CoolDownTime[nKey];
 }
 return null;
 }
 public static Tab_CoolDownTime GetCoolDownTimeByID(int nKey, int nIndex)
 {
 if(g_CoolDownTime.Count==0)
 {
 InitTable_CoolDownTime();
 }
 if( g_CoolDownTime.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CoolDownTime[nKey].Count)
 return g_CoolDownTime[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CoolDownTime> > GetCoolDownTime()
 {
 if(g_CoolDownTime.Count==0)
 {
 InitTable_CoolDownTime();
 }
 return g_CoolDownTime;
 }

public static List<Tab_CopyScene> GetCopySceneByID(int nKey)
 {
 if(g_CopyScene.Count==0)
 {
 InitTable_CopyScene();
 }
 if( g_CopyScene.ContainsKey(nKey))
 {
 return g_CopyScene[nKey];
 }
 return null;
 }
 public static Tab_CopyScene GetCopySceneByID(int nKey, int nIndex)
 {
 if(g_CopyScene.Count==0)
 {
 InitTable_CopyScene();
 }
 if( g_CopyScene.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CopyScene[nKey].Count)
 return g_CopyScene[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CopyScene> > GetCopyScene()
 {
 if(g_CopyScene.Count==0)
 {
 InitTable_CopyScene();
 }
 return g_CopyScene;
 }

public static List<Tab_CopySceneRule> GetCopySceneRuleByID(int nKey)
 {
 if(g_CopySceneRule.Count==0)
 {
 InitTable_CopySceneRule();
 }
 if( g_CopySceneRule.ContainsKey(nKey))
 {
 return g_CopySceneRule[nKey];
 }
 return null;
 }
 public static Tab_CopySceneRule GetCopySceneRuleByID(int nKey, int nIndex)
 {
 if(g_CopySceneRule.Count==0)
 {
 InitTable_CopySceneRule();
 }
 if( g_CopySceneRule.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CopySceneRule[nKey].Count)
 return g_CopySceneRule[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CopySceneRule> > GetCopySceneRule()
 {
 if(g_CopySceneRule.Count==0)
 {
 InitTable_CopySceneRule();
 }
 return g_CopySceneRule;
 }

public static List<Tab_CopySceneScoreCalc> GetCopySceneScoreCalcByID(int nKey)
 {
 if(g_CopySceneScoreCalc.Count==0)
 {
 InitTable_CopySceneScoreCalc();
 }
 if( g_CopySceneScoreCalc.ContainsKey(nKey))
 {
 return g_CopySceneScoreCalc[nKey];
 }
 return null;
 }
 public static Tab_CopySceneScoreCalc GetCopySceneScoreCalcByID(int nKey, int nIndex)
 {
 if(g_CopySceneScoreCalc.Count==0)
 {
 InitTable_CopySceneScoreCalc();
 }
 if( g_CopySceneScoreCalc.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_CopySceneScoreCalc[nKey].Count)
 return g_CopySceneScoreCalc[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_CopySceneScoreCalc> > GetCopySceneScoreCalc()
 {
 if(g_CopySceneScoreCalc.Count==0)
 {
 InitTable_CopySceneScoreCalc();
 }
 return g_CopySceneScoreCalc;
 }

public static List<Tab_DailyLuckyDrawBonusInfo> GetDailyLuckyDrawBonusInfoByID(int nKey)
 {
 if(g_DailyLuckyDrawBonusInfo.Count==0)
 {
 InitTable_DailyLuckyDrawBonusInfo();
 }
 if( g_DailyLuckyDrawBonusInfo.ContainsKey(nKey))
 {
 return g_DailyLuckyDrawBonusInfo[nKey];
 }
 return null;
 }
 public static Tab_DailyLuckyDrawBonusInfo GetDailyLuckyDrawBonusInfoByID(int nKey, int nIndex)
 {
 if(g_DailyLuckyDrawBonusInfo.Count==0)
 {
 InitTable_DailyLuckyDrawBonusInfo();
 }
 if( g_DailyLuckyDrawBonusInfo.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_DailyLuckyDrawBonusInfo[nKey].Count)
 return g_DailyLuckyDrawBonusInfo[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_DailyLuckyDrawBonusInfo> > GetDailyLuckyDrawBonusInfo()
 {
 if(g_DailyLuckyDrawBonusInfo.Count==0)
 {
 InitTable_DailyLuckyDrawBonusInfo();
 }
 return g_DailyLuckyDrawBonusInfo;
 }

public static List<Tab_DailyLuckyDrawPoolInfo> GetDailyLuckyDrawPoolInfoByID(int nKey)
 {
 if(g_DailyLuckyDrawPoolInfo.Count==0)
 {
 InitTable_DailyLuckyDrawPoolInfo();
 }
 if( g_DailyLuckyDrawPoolInfo.ContainsKey(nKey))
 {
 return g_DailyLuckyDrawPoolInfo[nKey];
 }
 return null;
 }
 public static Tab_DailyLuckyDrawPoolInfo GetDailyLuckyDrawPoolInfoByID(int nKey, int nIndex)
 {
 if(g_DailyLuckyDrawPoolInfo.Count==0)
 {
 InitTable_DailyLuckyDrawPoolInfo();
 }
 if( g_DailyLuckyDrawPoolInfo.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_DailyLuckyDrawPoolInfo[nKey].Count)
 return g_DailyLuckyDrawPoolInfo[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_DailyLuckyDrawPoolInfo> > GetDailyLuckyDrawPoolInfo()
 {
 if(g_DailyLuckyDrawPoolInfo.Count==0)
 {
 InitTable_DailyLuckyDrawPoolInfo();
 }
 return g_DailyLuckyDrawPoolInfo;
 }

public static List<Tab_DailyMission> GetDailyMissionByID(int nKey)
 {
 if(g_DailyMission.Count==0)
 {
 InitTable_DailyMission();
 }
 if( g_DailyMission.ContainsKey(nKey))
 {
 return g_DailyMission[nKey];
 }
 return null;
 }
 public static Tab_DailyMission GetDailyMissionByID(int nKey, int nIndex)
 {
 if(g_DailyMission.Count==0)
 {
 InitTable_DailyMission();
 }
 if( g_DailyMission.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_DailyMission[nKey].Count)
 return g_DailyMission[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_DailyMission> > GetDailyMission()
 {
 if(g_DailyMission.Count==0)
 {
 InitTable_DailyMission();
 }
 return g_DailyMission;
 }

public static List<Tab_DailyMissionQuality> GetDailyMissionQualityByID(int nKey)
 {
 if(g_DailyMissionQuality.Count==0)
 {
 InitTable_DailyMissionQuality();
 }
 if( g_DailyMissionQuality.ContainsKey(nKey))
 {
 return g_DailyMissionQuality[nKey];
 }
 return null;
 }
 public static Tab_DailyMissionQuality GetDailyMissionQualityByID(int nKey, int nIndex)
 {
 if(g_DailyMissionQuality.Count==0)
 {
 InitTable_DailyMissionQuality();
 }
 if( g_DailyMissionQuality.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_DailyMissionQuality[nKey].Count)
 return g_DailyMissionQuality[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_DailyMissionQuality> > GetDailyMissionQuality()
 {
 if(g_DailyMissionQuality.Count==0)
 {
 InitTable_DailyMissionQuality();
 }
 return g_DailyMissionQuality;
 }

public static List<Tab_DamageBoardType> GetDamageBoardTypeByID(int nKey)
 {
 if(g_DamageBoardType.Count==0)
 {
 InitTable_DamageBoardType();
 }
 if( g_DamageBoardType.ContainsKey(nKey))
 {
 return g_DamageBoardType[nKey];
 }
 return null;
 }
 public static Tab_DamageBoardType GetDamageBoardTypeByID(int nKey, int nIndex)
 {
 if(g_DamageBoardType.Count==0)
 {
 InitTable_DamageBoardType();
 }
 if( g_DamageBoardType.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_DamageBoardType[nKey].Count)
 return g_DamageBoardType[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_DamageBoardType> > GetDamageBoardType()
 {
 if(g_DamageBoardType.Count==0)
 {
 InitTable_DamageBoardType();
 }
 return g_DamageBoardType;
 }

public static List<Tab_DayAward> GetDayAwardByID(int nKey)
 {
 if(g_DayAward.Count==0)
 {
 InitTable_DayAward();
 }
 if( g_DayAward.ContainsKey(nKey))
 {
 return g_DayAward[nKey];
 }
 return null;
 }
 public static Tab_DayAward GetDayAwardByID(int nKey, int nIndex)
 {
 if(g_DayAward.Count==0)
 {
 InitTable_DayAward();
 }
 if( g_DayAward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_DayAward[nKey].Count)
 return g_DayAward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_DayAward> > GetDayAward()
 {
 if(g_DayAward.Count==0)
 {
 InitTable_DayAward();
 }
 return g_DayAward;
 }

public static List<Tab_DropNotify> GetDropNotifyByID(int nKey)
 {
 if(g_DropNotify.Count==0)
 {
 InitTable_DropNotify();
 }
 if( g_DropNotify.ContainsKey(nKey))
 {
 return g_DropNotify[nKey];
 }
 return null;
 }
 public static Tab_DropNotify GetDropNotifyByID(int nKey, int nIndex)
 {
 if(g_DropNotify.Count==0)
 {
 InitTable_DropNotify();
 }
 if( g_DropNotify.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_DropNotify[nKey].Count)
 return g_DropNotify[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_DropNotify> > GetDropNotify()
 {
 if(g_DropNotify.Count==0)
 {
 InitTable_DropNotify();
 }
 return g_DropNotify;
 }

public static List<Tab_DynamicObstacle> GetDynamicObstacleByID(int nKey)
 {
 if(g_DynamicObstacle.Count==0)
 {
 InitTable_DynamicObstacle();
 }
 if( g_DynamicObstacle.ContainsKey(nKey))
 {
 return g_DynamicObstacle[nKey];
 }
 return null;
 }
 public static Tab_DynamicObstacle GetDynamicObstacleByID(int nKey, int nIndex)
 {
 if(g_DynamicObstacle.Count==0)
 {
 InitTable_DynamicObstacle();
 }
 if( g_DynamicObstacle.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_DynamicObstacle[nKey].Count)
 return g_DynamicObstacle[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_DynamicObstacle> > GetDynamicObstacle()
 {
 if(g_DynamicObstacle.Count==0)
 {
 InitTable_DynamicObstacle();
 }
 return g_DynamicObstacle;
 }

public static List<Tab_Effect> GetEffectByID(int nKey)
 {
 if(g_Effect.Count==0)
 {
 InitTable_Effect();
 }
 if( g_Effect.ContainsKey(nKey))
 {
 return g_Effect[nKey];
 }
 return null;
 }
 public static Tab_Effect GetEffectByID(int nKey, int nIndex)
 {
 if(g_Effect.Count==0)
 {
 InitTable_Effect();
 }
 if( g_Effect.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Effect[nKey].Count)
 return g_Effect[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Effect> > GetEffect()
 {
 if(g_Effect.Count==0)
 {
 InitTable_Effect();
 }
 return g_Effect;
 }

public static List<Tab_EffectPoint> GetEffectPointByID(int nKey)
 {
 if(g_EffectPoint.Count==0)
 {
 InitTable_EffectPoint();
 }
 if( g_EffectPoint.ContainsKey(nKey))
 {
 return g_EffectPoint[nKey];
 }
 return null;
 }
 public static Tab_EffectPoint GetEffectPointByID(int nKey, int nIndex)
 {
 if(g_EffectPoint.Count==0)
 {
 InitTable_EffectPoint();
 }
 if( g_EffectPoint.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_EffectPoint[nKey].Count)
 return g_EffectPoint[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_EffectPoint> > GetEffectPoint()
 {
 if(g_EffectPoint.Count==0)
 {
 InitTable_EffectPoint();
 }
 return g_EffectPoint;
 }

public static List<Tab_EquipAttr> GetEquipAttrByID(int nKey)
 {
 if(g_EquipAttr.Count==0)
 {
 InitTable_EquipAttr();
 }
 if( g_EquipAttr.ContainsKey(nKey))
 {
 return g_EquipAttr[nKey];
 }
 return null;
 }
 public static Tab_EquipAttr GetEquipAttrByID(int nKey, int nIndex)
 {
 if(g_EquipAttr.Count==0)
 {
 InitTable_EquipAttr();
 }
 if( g_EquipAttr.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_EquipAttr[nKey].Count)
 return g_EquipAttr[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_EquipAttr> > GetEquipAttr()
 {
 if(g_EquipAttr.Count==0)
 {
 InitTable_EquipAttr();
 }
 return g_EquipAttr;
 }

public static List<Tab_EquipEnchance> GetEquipEnchanceByID(int nKey)
 {
 if(g_EquipEnchance.Count==0)
 {
 InitTable_EquipEnchance();
 }
 if( g_EquipEnchance.ContainsKey(nKey))
 {
 return g_EquipEnchance[nKey];
 }
 return null;
 }
 public static Tab_EquipEnchance GetEquipEnchanceByID(int nKey, int nIndex)
 {
 if(g_EquipEnchance.Count==0)
 {
 InitTable_EquipEnchance();
 }
 if( g_EquipEnchance.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_EquipEnchance[nKey].Count)
 return g_EquipEnchance[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_EquipEnchance> > GetEquipEnchance()
 {
 if(g_EquipEnchance.Count==0)
 {
 InitTable_EquipEnchance();
 }
 return g_EquipEnchance;
 }

public static List<Tab_EquipSet> GetEquipSetByID(int nKey)
 {
 if(g_EquipSet.Count==0)
 {
 InitTable_EquipSet();
 }
 if( g_EquipSet.ContainsKey(nKey))
 {
 return g_EquipSet[nKey];
 }
 return null;
 }
 public static Tab_EquipSet GetEquipSetByID(int nKey, int nIndex)
 {
 if(g_EquipSet.Count==0)
 {
 InitTable_EquipSet();
 }
 if( g_EquipSet.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_EquipSet[nKey].Count)
 return g_EquipSet[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_EquipSet> > GetEquipSet()
 {
 if(g_EquipSet.Count==0)
 {
 InitTable_EquipSet();
 }
 return g_EquipSet;
 }

public static List<Tab_EquipSetTransfer> GetEquipSetTransferByID(int nKey)
 {
 if(g_EquipSetTransfer.Count==0)
 {
 InitTable_EquipSetTransfer();
 }
 if( g_EquipSetTransfer.ContainsKey(nKey))
 {
 return g_EquipSetTransfer[nKey];
 }
 return null;
 }
 public static Tab_EquipSetTransfer GetEquipSetTransferByID(int nKey, int nIndex)
 {
 if(g_EquipSetTransfer.Count==0)
 {
 InitTable_EquipSetTransfer();
 }
 if( g_EquipSetTransfer.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_EquipSetTransfer[nKey].Count)
 return g_EquipSetTransfer[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_EquipSetTransfer> > GetEquipSetTransfer()
 {
 if(g_EquipSetTransfer.Count==0)
 {
 InitTable_EquipSetTransfer();
 }
 return g_EquipSetTransfer;
 }

public static List<Tab_EquipStar> GetEquipStarByID(int nKey)
 {
 if(g_EquipStar.Count==0)
 {
 InitTable_EquipStar();
 }
 if( g_EquipStar.ContainsKey(nKey))
 {
 return g_EquipStar[nKey];
 }
 return null;
 }
 public static Tab_EquipStar GetEquipStarByID(int nKey, int nIndex)
 {
 if(g_EquipStar.Count==0)
 {
 InitTable_EquipStar();
 }
 if( g_EquipStar.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_EquipStar[nKey].Count)
 return g_EquipStar[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_EquipStar> > GetEquipStar()
 {
 if(g_EquipStar.Count==0)
 {
 InitTable_EquipStar();
 }
 return g_EquipStar;
 }

public static List<Tab_EquipStarLimit> GetEquipStarLimitByID(int nKey)
 {
 if(g_EquipStarLimit.Count==0)
 {
 InitTable_EquipStarLimit();
 }
 if( g_EquipStarLimit.ContainsKey(nKey))
 {
 return g_EquipStarLimit[nKey];
 }
 return null;
 }
 public static Tab_EquipStarLimit GetEquipStarLimitByID(int nKey, int nIndex)
 {
 if(g_EquipStarLimit.Count==0)
 {
 InitTable_EquipStarLimit();
 }
 if( g_EquipStarLimit.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_EquipStarLimit[nKey].Count)
 return g_EquipStarLimit[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_EquipStarLimit> > GetEquipStarLimit()
 {
 if(g_EquipStarLimit.Count==0)
 {
 InitTable_EquipStarLimit();
 }
 return g_EquipStarLimit;
 }

public static List<Tab_EquipStarRate> GetEquipStarRateByID(int nKey)
 {
 if(g_EquipStarRate.Count==0)
 {
 InitTable_EquipStarRate();
 }
 if( g_EquipStarRate.ContainsKey(nKey))
 {
 return g_EquipStarRate[nKey];
 }
 return null;
 }
 public static Tab_EquipStarRate GetEquipStarRateByID(int nKey, int nIndex)
 {
 if(g_EquipStarRate.Count==0)
 {
 InitTable_EquipStarRate();
 }
 if( g_EquipStarRate.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_EquipStarRate[nKey].Count)
 return g_EquipStarRate[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_EquipStarRate> > GetEquipStarRate()
 {
 if(g_EquipStarRate.Count==0)
 {
 InitTable_EquipStarRate();
 }
 return g_EquipStarRate;
 }

public static List<Tab_FTESound> GetFTESoundByID(int nKey)
 {
 if(g_FTESound.Count==0)
 {
 InitTable_FTESound();
 }
 if( g_FTESound.ContainsKey(nKey))
 {
 return g_FTESound[nKey];
 }
 return null;
 }
 public static Tab_FTESound GetFTESoundByID(int nKey, int nIndex)
 {
 if(g_FTESound.Count==0)
 {
 InitTable_FTESound();
 }
 if( g_FTESound.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_FTESound[nKey].Count)
 return g_FTESound[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_FTESound> > GetFTESound()
 {
 if(g_FTESound.Count==0)
 {
 InitTable_FTESound();
 }
 return g_FTESound;
 }

public static List<Tab_FakeObject> GetFakeObjectByID(int nKey)
 {
 if(g_FakeObject.Count==0)
 {
 InitTable_FakeObject();
 }
 if( g_FakeObject.ContainsKey(nKey))
 {
 return g_FakeObject[nKey];
 }
 return null;
 }
 public static Tab_FakeObject GetFakeObjectByID(int nKey, int nIndex)
 {
 if(g_FakeObject.Count==0)
 {
 InitTable_FakeObject();
 }
 if( g_FakeObject.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_FakeObject[nKey].Count)
 return g_FakeObject[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_FakeObject> > GetFakeObject()
 {
 if(g_FakeObject.Count==0)
 {
 InitTable_FakeObject();
 }
 return g_FakeObject;
 }

public static List<Tab_FashionData> GetFashionDataByID(int nKey)
 {
 if(g_FashionData.Count==0)
 {
 InitTable_FashionData();
 }
 if( g_FashionData.ContainsKey(nKey))
 {
 return g_FashionData[nKey];
 }
 return null;
 }
 public static Tab_FashionData GetFashionDataByID(int nKey, int nIndex)
 {
 if(g_FashionData.Count==0)
 {
 InitTable_FashionData();
 }
 if( g_FashionData.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_FashionData[nKey].Count)
 return g_FashionData[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_FashionData> > GetFashionData()
 {
 if(g_FashionData.Count==0)
 {
 InitTable_FashionData();
 }
 return g_FashionData;
 }

public static List<Tab_FellowGainCost> GetFellowGainCostByID(int nKey)
 {
 if(g_FellowGainCost.Count==0)
 {
 InitTable_FellowGainCost();
 }
 if( g_FellowGainCost.ContainsKey(nKey))
 {
 return g_FellowGainCost[nKey];
 }
 return null;
 }
 public static Tab_FellowGainCost GetFellowGainCostByID(int nKey, int nIndex)
 {
 if(g_FellowGainCost.Count==0)
 {
 InitTable_FellowGainCost();
 }
 if( g_FellowGainCost.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_FellowGainCost[nKey].Count)
 return g_FellowGainCost[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_FellowGainCost> > GetFellowGainCost()
 {
 if(g_FellowGainCost.Count==0)
 {
 InitTable_FellowGainCost();
 }
 return g_FellowGainCost;
 }

public static List<Tab_FellowGainRate> GetFellowGainRateByID(int nKey)
 {
 if(g_FellowGainRate.Count==0)
 {
 InitTable_FellowGainRate();
 }
 if( g_FellowGainRate.ContainsKey(nKey))
 {
 return g_FellowGainRate[nKey];
 }
 return null;
 }
 public static Tab_FellowGainRate GetFellowGainRateByID(int nKey, int nIndex)
 {
 if(g_FellowGainRate.Count==0)
 {
 InitTable_FellowGainRate();
 }
 if( g_FellowGainRate.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_FellowGainRate[nKey].Count)
 return g_FellowGainRate[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_FellowGainRate> > GetFellowGainRate()
 {
 if(g_FellowGainRate.Count==0)
 {
 InitTable_FellowGainRate();
 }
 return g_FellowGainRate;
 }

public static List<Tab_FlyWing> GetFlyWingByID(int nKey)
 {
 if(g_FlyWing.Count==0)
 {
 InitTable_FlyWing();
 }
 if( g_FlyWing.ContainsKey(nKey))
 {
 return g_FlyWing[nKey];
 }
 return null;
 }
 public static Tab_FlyWing GetFlyWingByID(int nKey, int nIndex)
 {
 if(g_FlyWing.Count==0)
 {
 InitTable_FlyWing();
 }
 if( g_FlyWing.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_FlyWing[nKey].Count)
 return g_FlyWing[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_FlyWing> > GetFlyWing()
 {
 if(g_FlyWing.Count==0)
 {
 InitTable_FlyWing();
 }
 return g_FlyWing;
 }

public static List<Tab_FlyWingClient> GetFlyWingClientByID(int nKey)
 {
 if(g_FlyWingClient.Count==0)
 {
 InitTable_FlyWingClient();
 }
 if( g_FlyWingClient.ContainsKey(nKey))
 {
 return g_FlyWingClient[nKey];
 }
 return null;
 }
 public static Tab_FlyWingClient GetFlyWingClientByID(int nKey, int nIndex)
 {
 if(g_FlyWingClient.Count==0)
 {
 InitTable_FlyWingClient();
 }
 if( g_FlyWingClient.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_FlyWingClient[nKey].Count)
 return g_FlyWingClient[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_FlyWingClient> > GetFlyWingClient()
 {
 if(g_FlyWingClient.Count==0)
 {
 InitTable_FlyWingClient();
 }
 return g_FlyWingClient;
 }

public static List<Tab_GemAttr> GetGemAttrByID(int nKey)
 {
 if(g_GemAttr.Count==0)
 {
 InitTable_GemAttr();
 }
 if( g_GemAttr.ContainsKey(nKey))
 {
 return g_GemAttr[nKey];
 }
 return null;
 }
 public static Tab_GemAttr GetGemAttrByID(int nKey, int nIndex)
 {
 if(g_GemAttr.Count==0)
 {
 InitTable_GemAttr();
 }
 if( g_GemAttr.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GemAttr[nKey].Count)
 return g_GemAttr[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GemAttr> > GetGemAttr()
 {
 if(g_GemAttr.Count==0)
 {
 InitTable_GemAttr();
 }
 return g_GemAttr;
 }

public static List<Tab_GemMount> GetGemMountByID(int nKey)
 {
 if(g_GemMount.Count==0)
 {
 InitTable_GemMount();
 }
 if( g_GemMount.ContainsKey(nKey))
 {
 return g_GemMount[nKey];
 }
 return null;
 }
 public static Tab_GemMount GetGemMountByID(int nKey, int nIndex)
 {
 if(g_GemMount.Count==0)
 {
 InitTable_GemMount();
 }
 if( g_GemMount.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GemMount[nKey].Count)
 return g_GemMount[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GemMount> > GetGemMount()
 {
 if(g_GemMount.Count==0)
 {
 InitTable_GemMount();
 }
 return g_GemMount;
 }

public static List<Tab_GemOpenLimit> GetGemOpenLimitByID(int nKey)
 {
 if(g_GemOpenLimit.Count==0)
 {
 InitTable_GemOpenLimit();
 }
 if( g_GemOpenLimit.ContainsKey(nKey))
 {
 return g_GemOpenLimit[nKey];
 }
 return null;
 }
 public static Tab_GemOpenLimit GetGemOpenLimitByID(int nKey, int nIndex)
 {
 if(g_GemOpenLimit.Count==0)
 {
 InitTable_GemOpenLimit();
 }
 if( g_GemOpenLimit.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GemOpenLimit[nKey].Count)
 return g_GemOpenLimit[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GemOpenLimit> > GetGemOpenLimit()
 {
 if(g_GemOpenLimit.Count==0)
 {
 InitTable_GemOpenLimit();
 }
 return g_GemOpenLimit;
 }

public static List<Tab_GoldMoneyShop> GetGoldMoneyShopByID(int nKey)
 {
 if(g_GoldMoneyShop.Count==0)
 {
 InitTable_GoldMoneyShop();
 }
 if( g_GoldMoneyShop.ContainsKey(nKey))
 {
 return g_GoldMoneyShop[nKey];
 }
 return null;
 }
 public static Tab_GoldMoneyShop GetGoldMoneyShopByID(int nKey, int nIndex)
 {
 if(g_GoldMoneyShop.Count==0)
 {
 InitTable_GoldMoneyShop();
 }
 if( g_GoldMoneyShop.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GoldMoneyShop[nKey].Count)
 return g_GoldMoneyShop[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GoldMoneyShop> > GetGoldMoneyShop()
 {
 if(g_GoldMoneyShop.Count==0)
 {
 InitTable_GoldMoneyShop();
 }
 return g_GoldMoneyShop;
 }

public static List<Tab_GongJiShop> GetGongJiShopByID(int nKey)
 {
 if(g_GongJiShop.Count==0)
 {
 InitTable_GongJiShop();
 }
 if( g_GongJiShop.ContainsKey(nKey))
 {
 return g_GongJiShop[nKey];
 }
 return null;
 }
 public static Tab_GongJiShop GetGongJiShopByID(int nKey, int nIndex)
 {
 if(g_GongJiShop.Count==0)
 {
 InitTable_GongJiShop();
 }
 if( g_GongJiShop.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GongJiShop[nKey].Count)
 return g_GongJiShop[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GongJiShop> > GetGongJiShop()
 {
 if(g_GongJiShop.Count==0)
 {
 InitTable_GongJiShop();
 }
 return g_GongJiShop;
 }

public static List<Tab_GongZhanReward> GetGongZhanRewardByID(int nKey)
 {
 if(g_GongZhanReward.Count==0)
 {
 InitTable_GongZhanReward();
 }
 if( g_GongZhanReward.ContainsKey(nKey))
 {
 return g_GongZhanReward[nKey];
 }
 return null;
 }
 public static Tab_GongZhanReward GetGongZhanRewardByID(int nKey, int nIndex)
 {
 if(g_GongZhanReward.Count==0)
 {
 InitTable_GongZhanReward();
 }
 if( g_GongZhanReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GongZhanReward[nKey].Count)
 return g_GongZhanReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GongZhanReward> > GetGongZhanReward()
 {
 if(g_GongZhanReward.Count==0)
 {
 InitTable_GongZhanReward();
 }
 return g_GongZhanReward;
 }

public static List<Tab_GuildActivityBoss> GetGuildActivityBossByID(int nKey)
 {
 if(g_GuildActivityBoss.Count==0)
 {
 InitTable_GuildActivityBoss();
 }
 if( g_GuildActivityBoss.ContainsKey(nKey))
 {
 return g_GuildActivityBoss[nKey];
 }
 return null;
 }
 public static Tab_GuildActivityBoss GetGuildActivityBossByID(int nKey, int nIndex)
 {
 if(g_GuildActivityBoss.Count==0)
 {
 InitTable_GuildActivityBoss();
 }
 if( g_GuildActivityBoss.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildActivityBoss[nKey].Count)
 return g_GuildActivityBoss[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildActivityBoss> > GetGuildActivityBoss()
 {
 if(g_GuildActivityBoss.Count==0)
 {
 InitTable_GuildActivityBoss();
 }
 return g_GuildActivityBoss;
 }

public static List<Tab_GuildAttrAddition> GetGuildAttrAdditionByID(int nKey)
 {
 if(g_GuildAttrAddition.Count==0)
 {
 InitTable_GuildAttrAddition();
 }
 if( g_GuildAttrAddition.ContainsKey(nKey))
 {
 return g_GuildAttrAddition[nKey];
 }
 return null;
 }
 public static Tab_GuildAttrAddition GetGuildAttrAdditionByID(int nKey, int nIndex)
 {
 if(g_GuildAttrAddition.Count==0)
 {
 InitTable_GuildAttrAddition();
 }
 if( g_GuildAttrAddition.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildAttrAddition[nKey].Count)
 return g_GuildAttrAddition[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildAttrAddition> > GetGuildAttrAddition()
 {
 if(g_GuildAttrAddition.Count==0)
 {
 InitTable_GuildAttrAddition();
 }
 return g_GuildAttrAddition;
 }

public static List<Tab_GuildAutoLevelUp> GetGuildAutoLevelUpByID(int nKey)
 {
 if(g_GuildAutoLevelUp.Count==0)
 {
 InitTable_GuildAutoLevelUp();
 }
 if( g_GuildAutoLevelUp.ContainsKey(nKey))
 {
 return g_GuildAutoLevelUp[nKey];
 }
 return null;
 }
 public static Tab_GuildAutoLevelUp GetGuildAutoLevelUpByID(int nKey, int nIndex)
 {
 if(g_GuildAutoLevelUp.Count==0)
 {
 InitTable_GuildAutoLevelUp();
 }
 if( g_GuildAutoLevelUp.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildAutoLevelUp[nKey].Count)
 return g_GuildAutoLevelUp[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildAutoLevelUp> > GetGuildAutoLevelUp()
 {
 if(g_GuildAutoLevelUp.Count==0)
 {
 InitTable_GuildAutoLevelUp();
 }
 return g_GuildAutoLevelUp;
 }

public static List<Tab_GuildMission> GetGuildMissionByID(int nKey)
 {
 if(g_GuildMission.Count==0)
 {
 InitTable_GuildMission();
 }
 if( g_GuildMission.ContainsKey(nKey))
 {
 return g_GuildMission[nKey];
 }
 return null;
 }
 public static Tab_GuildMission GetGuildMissionByID(int nKey, int nIndex)
 {
 if(g_GuildMission.Count==0)
 {
 InitTable_GuildMission();
 }
 if( g_GuildMission.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildMission[nKey].Count)
 return g_GuildMission[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildMission> > GetGuildMission()
 {
 if(g_GuildMission.Count==0)
 {
 InitTable_GuildMission();
 }
 return g_GuildMission;
 }

public static List<Tab_GuildMissionAward> GetGuildMissionAwardByID(int nKey)
 {
 if(g_GuildMissionAward.Count==0)
 {
 InitTable_GuildMissionAward();
 }
 if( g_GuildMissionAward.ContainsKey(nKey))
 {
 return g_GuildMissionAward[nKey];
 }
 return null;
 }
 public static Tab_GuildMissionAward GetGuildMissionAwardByID(int nKey, int nIndex)
 {
 if(g_GuildMissionAward.Count==0)
 {
 InitTable_GuildMissionAward();
 }
 if( g_GuildMissionAward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildMissionAward[nKey].Count)
 return g_GuildMissionAward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildMissionAward> > GetGuildMissionAward()
 {
 if(g_GuildMissionAward.Count==0)
 {
 InitTable_GuildMissionAward();
 }
 return g_GuildMissionAward;
 }

public static List<Tab_GuildMissionGuild> GetGuildMissionGuildByID(int nKey)
 {
 if(g_GuildMissionGuild.Count==0)
 {
 InitTable_GuildMissionGuild();
 }
 if( g_GuildMissionGuild.ContainsKey(nKey))
 {
 return g_GuildMissionGuild[nKey];
 }
 return null;
 }
 public static Tab_GuildMissionGuild GetGuildMissionGuildByID(int nKey, int nIndex)
 {
 if(g_GuildMissionGuild.Count==0)
 {
 InitTable_GuildMissionGuild();
 }
 if( g_GuildMissionGuild.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildMissionGuild[nKey].Count)
 return g_GuildMissionGuild[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildMissionGuild> > GetGuildMissionGuild()
 {
 if(g_GuildMissionGuild.Count==0)
 {
 InitTable_GuildMissionGuild();
 }
 return g_GuildMissionGuild;
 }

public static List<Tab_GuildPaoShang> GetGuildPaoShangByID(int nKey)
 {
 if(g_GuildPaoShang.Count==0)
 {
 InitTable_GuildPaoShang();
 }
 if( g_GuildPaoShang.ContainsKey(nKey))
 {
 return g_GuildPaoShang[nKey];
 }
 return null;
 }
 public static Tab_GuildPaoShang GetGuildPaoShangByID(int nKey, int nIndex)
 {
 if(g_GuildPaoShang.Count==0)
 {
 InitTable_GuildPaoShang();
 }
 if( g_GuildPaoShang.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildPaoShang[nKey].Count)
 return g_GuildPaoShang[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildPaoShang> > GetGuildPaoShang()
 {
 if(g_GuildPaoShang.Count==0)
 {
 InitTable_GuildPaoShang();
 }
 return g_GuildPaoShang;
 }

public static List<Tab_GuildRule> GetGuildRuleByID(int nKey)
 {
 if(g_GuildRule.Count==0)
 {
 InitTable_GuildRule();
 }
 if( g_GuildRule.ContainsKey(nKey))
 {
 return g_GuildRule[nKey];
 }
 return null;
 }
 public static Tab_GuildRule GetGuildRuleByID(int nKey, int nIndex)
 {
 if(g_GuildRule.Count==0)
 {
 InitTable_GuildRule();
 }
 if( g_GuildRule.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildRule[nKey].Count)
 return g_GuildRule[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildRule> > GetGuildRule()
 {
 if(g_GuildRule.Count==0)
 {
 InitTable_GuildRule();
 }
 return g_GuildRule;
 }

public static List<Tab_GuildShop> GetGuildShopByID(int nKey)
 {
 if(g_GuildShop.Count==0)
 {
 InitTable_GuildShop();
 }
 if( g_GuildShop.ContainsKey(nKey))
 {
 return g_GuildShop[nKey];
 }
 return null;
 }
 public static Tab_GuildShop GetGuildShopByID(int nKey, int nIndex)
 {
 if(g_GuildShop.Count==0)
 {
 InitTable_GuildShop();
 }
 if( g_GuildShop.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildShop[nKey].Count)
 return g_GuildShop[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildShop> > GetGuildShop()
 {
 if(g_GuildShop.Count==0)
 {
 InitTable_GuildShop();
 }
 return g_GuildShop;
 }

public static List<Tab_GuildWealthItemMake> GetGuildWealthItemMakeByID(int nKey)
 {
 if(g_GuildWealthItemMake.Count==0)
 {
 InitTable_GuildWealthItemMake();
 }
 if( g_GuildWealthItemMake.ContainsKey(nKey))
 {
 return g_GuildWealthItemMake[nKey];
 }
 return null;
 }
 public static Tab_GuildWealthItemMake GetGuildWealthItemMakeByID(int nKey, int nIndex)
 {
 if(g_GuildWealthItemMake.Count==0)
 {
 InitTable_GuildWealthItemMake();
 }
 if( g_GuildWealthItemMake.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_GuildWealthItemMake[nKey].Count)
 return g_GuildWealthItemMake[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_GuildWealthItemMake> > GetGuildWealthItemMake()
 {
 if(g_GuildWealthItemMake.Count==0)
 {
 InitTable_GuildWealthItemMake();
 }
 return g_GuildWealthItemMake;
 }

public static List<Tab_HelpItem> GetHelpItemByID(int nKey)
 {
 if(g_HelpItem.Count==0)
 {
 InitTable_HelpItem();
 }
 if( g_HelpItem.ContainsKey(nKey))
 {
 return g_HelpItem[nKey];
 }
 return null;
 }
 public static Tab_HelpItem GetHelpItemByID(int nKey, int nIndex)
 {
 if(g_HelpItem.Count==0)
 {
 InitTable_HelpItem();
 }
 if( g_HelpItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_HelpItem[nKey].Count)
 return g_HelpItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_HelpItem> > GetHelpItem()
 {
 if(g_HelpItem.Count==0)
 {
 InitTable_HelpItem();
 }
 return g_HelpItem;
 }

public static List<Tab_HongBaoRankAwardInfo> GetHongBaoRankAwardInfoByID(int nKey)
 {
 if(g_HongBaoRankAwardInfo.Count==0)
 {
 InitTable_HongBaoRankAwardInfo();
 }
 if( g_HongBaoRankAwardInfo.ContainsKey(nKey))
 {
 return g_HongBaoRankAwardInfo[nKey];
 }
 return null;
 }
 public static Tab_HongBaoRankAwardInfo GetHongBaoRankAwardInfoByID(int nKey, int nIndex)
 {
 if(g_HongBaoRankAwardInfo.Count==0)
 {
 InitTable_HongBaoRankAwardInfo();
 }
 if( g_HongBaoRankAwardInfo.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_HongBaoRankAwardInfo[nKey].Count)
 return g_HongBaoRankAwardInfo[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_HongBaoRankAwardInfo> > GetHongBaoRankAwardInfo()
 {
 if(g_HongBaoRankAwardInfo.Count==0)
 {
 InitTable_HongBaoRankAwardInfo();
 }
 return g_HongBaoRankAwardInfo;
 }

public static List<Tab_HuaShanReward> GetHuaShanRewardByID(int nKey)
 {
 if(g_HuaShanReward.Count==0)
 {
 InitTable_HuaShanReward();
 }
 if( g_HuaShanReward.ContainsKey(nKey))
 {
 return g_HuaShanReward[nKey];
 }
 return null;
 }
 public static Tab_HuaShanReward GetHuaShanRewardByID(int nKey, int nIndex)
 {
 if(g_HuaShanReward.Count==0)
 {
 InitTable_HuaShanReward();
 }
 if( g_HuaShanReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_HuaShanReward[nKey].Count)
 return g_HuaShanReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_HuaShanReward> > GetHuaShanReward()
 {
 if(g_HuaShanReward.Count==0)
 {
 InitTable_HuaShanReward();
 }
 return g_HuaShanReward;
 }

public static List<Tab_HuaShanRewardItem> GetHuaShanRewardItemByID(int nKey)
 {
 if(g_HuaShanRewardItem.Count==0)
 {
 InitTable_HuaShanRewardItem();
 }
 if( g_HuaShanRewardItem.ContainsKey(nKey))
 {
 return g_HuaShanRewardItem[nKey];
 }
 return null;
 }
 public static Tab_HuaShanRewardItem GetHuaShanRewardItemByID(int nKey, int nIndex)
 {
 if(g_HuaShanRewardItem.Count==0)
 {
 InitTable_HuaShanRewardItem();
 }
 if( g_HuaShanRewardItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_HuaShanRewardItem[nKey].Count)
 return g_HuaShanRewardItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_HuaShanRewardItem> > GetHuaShanRewardItem()
 {
 if(g_HuaShanRewardItem.Count==0)
 {
 InitTable_HuaShanRewardItem();
 }
 return g_HuaShanRewardItem;
 }

public static List<Tab_Impact> GetImpactByID(int nKey)
 {
 if(g_Impact.Count==0)
 {
 InitTable_Impact();
 }
 if( g_Impact.ContainsKey(nKey))
 {
 return g_Impact[nKey];
 }
 return null;
 }
 public static Tab_Impact GetImpactByID(int nKey, int nIndex)
 {
 if(g_Impact.Count==0)
 {
 InitTable_Impact();
 }
 if( g_Impact.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Impact[nKey].Count)
 return g_Impact[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Impact> > GetImpact()
 {
 if(g_Impact.Count==0)
 {
 InitTable_Impact();
 }
 return g_Impact;
 }

public static List<Tab_ImpactConsume> GetImpactConsumeByID(int nKey)
 {
 if(g_ImpactConsume.Count==0)
 {
 InitTable_ImpactConsume();
 }
 if( g_ImpactConsume.ContainsKey(nKey))
 {
 return g_ImpactConsume[nKey];
 }
 return null;
 }
 public static Tab_ImpactConsume GetImpactConsumeByID(int nKey, int nIndex)
 {
 if(g_ImpactConsume.Count==0)
 {
 InitTable_ImpactConsume();
 }
 if( g_ImpactConsume.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ImpactConsume[nKey].Count)
 return g_ImpactConsume[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ImpactConsume> > GetImpactConsume()
 {
 if(g_ImpactConsume.Count==0)
 {
 InitTable_ImpactConsume();
 }
 return g_ImpactConsume;
 }

public static List<Tab_ItemGetWay> GetItemGetWayByID(int nKey)
 {
 if(g_ItemGetWay.Count==0)
 {
 InitTable_ItemGetWay();
 }
 if( g_ItemGetWay.ContainsKey(nKey))
 {
 return g_ItemGetWay[nKey];
 }
 return null;
 }
 public static Tab_ItemGetWay GetItemGetWayByID(int nKey, int nIndex)
 {
 if(g_ItemGetWay.Count==0)
 {
 InitTable_ItemGetWay();
 }
 if( g_ItemGetWay.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ItemGetWay[nKey].Count)
 return g_ItemGetWay[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ItemGetWay> > GetItemGetWay()
 {
 if(g_ItemGetWay.Count==0)
 {
 InitTable_ItemGetWay();
 }
 return g_ItemGetWay;
 }

public static List<Tab_ItemVisual> GetItemVisualByID(int nKey)
 {
 if(g_ItemVisual.Count==0)
 {
 InitTable_ItemVisual();
 }
 if( g_ItemVisual.ContainsKey(nKey))
 {
 return g_ItemVisual[nKey];
 }
 return null;
 }
 public static Tab_ItemVisual GetItemVisualByID(int nKey, int nIndex)
 {
 if(g_ItemVisual.Count==0)
 {
 InitTable_ItemVisual();
 }
 if( g_ItemVisual.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ItemVisual[nKey].Count)
 return g_ItemVisual[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ItemVisual> > GetItemVisual()
 {
 if(g_ItemVisual.Count==0)
 {
 InitTable_ItemVisual();
 }
 return g_ItemVisual;
 }

public static List<Tab_JuYiReward> GetJuYiRewardByID(int nKey)
 {
 if(g_JuYiReward.Count==0)
 {
 InitTable_JuYiReward();
 }
 if( g_JuYiReward.ContainsKey(nKey))
 {
 return g_JuYiReward[nKey];
 }
 return null;
 }
 public static Tab_JuYiReward GetJuYiRewardByID(int nKey, int nIndex)
 {
 if(g_JuYiReward.Count==0)
 {
 InitTable_JuYiReward();
 }
 if( g_JuYiReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_JuYiReward[nKey].Count)
 return g_JuYiReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_JuYiReward> > GetJuYiReward()
 {
 if(g_JuYiReward.Count==0)
 {
 InitTable_JuYiReward();
 }
 return g_JuYiReward;
 }

public static List<Tab_LevelAwardPacket> GetLevelAwardPacketByID(int nKey)
 {
 if(g_LevelAwardPacket.Count==0)
 {
 InitTable_LevelAwardPacket();
 }
 if( g_LevelAwardPacket.ContainsKey(nKey))
 {
 return g_LevelAwardPacket[nKey];
 }
 return null;
 }
 public static Tab_LevelAwardPacket GetLevelAwardPacketByID(int nKey, int nIndex)
 {
 if(g_LevelAwardPacket.Count==0)
 {
 InitTable_LevelAwardPacket();
 }
 if( g_LevelAwardPacket.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_LevelAwardPacket[nKey].Count)
 return g_LevelAwardPacket[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_LevelAwardPacket> > GetLevelAwardPacket()
 {
 if(g_LevelAwardPacket.Count==0)
 {
 InitTable_LevelAwardPacket();
 }
 return g_LevelAwardPacket;
 }

public static List<Tab_LevelUp> GetLevelUpByID(int nKey)
 {
 if(g_LevelUp.Count==0)
 {
 InitTable_LevelUp();
 }
 if( g_LevelUp.ContainsKey(nKey))
 {
 return g_LevelUp[nKey];
 }
 return null;
 }
 public static Tab_LevelUp GetLevelUpByID(int nKey, int nIndex)
 {
 if(g_LevelUp.Count==0)
 {
 InitTable_LevelUp();
 }
 if( g_LevelUp.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_LevelUp[nKey].Count)
 return g_LevelUp[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_LevelUp> > GetLevelUp()
 {
 if(g_LevelUp.Count==0)
 {
 InitTable_LevelUp();
 }
 return g_LevelUp;
 }

public static List<Tab_LevelUpLimit> GetLevelUpLimitByID(int nKey)
 {
 if(g_LevelUpLimit.Count==0)
 {
 InitTable_LevelUpLimit();
 }
 if( g_LevelUpLimit.ContainsKey(nKey))
 {
 return g_LevelUpLimit[nKey];
 }
 return null;
 }
 public static Tab_LevelUpLimit GetLevelUpLimitByID(int nKey, int nIndex)
 {
 if(g_LevelUpLimit.Count==0)
 {
 InitTable_LevelUpLimit();
 }
 if( g_LevelUpLimit.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_LevelUpLimit[nKey].Count)
 return g_LevelUpLimit[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_LevelUpLimit> > GetLevelUpLimit()
 {
 if(g_LevelUpLimit.Count==0)
 {
 InitTable_LevelUpLimit();
 }
 return g_LevelUpLimit;
 }

public static List<Tab_LightSkill> GetLightSkillByID(int nKey)
 {
 if(g_LightSkill.Count==0)
 {
 InitTable_LightSkill();
 }
 if( g_LightSkill.ContainsKey(nKey))
 {
 return g_LightSkill[nKey];
 }
 return null;
 }
 public static Tab_LightSkill GetLightSkillByID(int nKey, int nIndex)
 {
 if(g_LightSkill.Count==0)
 {
 InitTable_LightSkill();
 }
 if( g_LightSkill.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_LightSkill[nKey].Count)
 return g_LightSkill[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_LightSkill> > GetLightSkill()
 {
 if(g_LightSkill.Count==0)
 {
 InitTable_LightSkill();
 }
 return g_LightSkill;
 }

public static List<Tab_LivingSkill> GetLivingSkillByID(int nKey)
 {
 if(g_LivingSkill.Count==0)
 {
 InitTable_LivingSkill();
 }
 if( g_LivingSkill.ContainsKey(nKey))
 {
 return g_LivingSkill[nKey];
 }
 return null;
 }
 public static Tab_LivingSkill GetLivingSkillByID(int nKey, int nIndex)
 {
 if(g_LivingSkill.Count==0)
 {
 InitTable_LivingSkill();
 }
 if( g_LivingSkill.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_LivingSkill[nKey].Count)
 return g_LivingSkill[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_LivingSkill> > GetLivingSkill()
 {
 if(g_LivingSkill.Count==0)
 {
 InitTable_LivingSkill();
 }
 return g_LivingSkill;
 }

public static List<Tab_LivingSkillStuff> GetLivingSkillStuffByID(int nKey)
 {
 if(g_LivingSkillStuff.Count==0)
 {
 InitTable_LivingSkillStuff();
 }
 if( g_LivingSkillStuff.ContainsKey(nKey))
 {
 return g_LivingSkillStuff[nKey];
 }
 return null;
 }
 public static Tab_LivingSkillStuff GetLivingSkillStuffByID(int nKey, int nIndex)
 {
 if(g_LivingSkillStuff.Count==0)
 {
 InitTable_LivingSkillStuff();
 }
 if( g_LivingSkillStuff.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_LivingSkillStuff[nKey].Count)
 return g_LivingSkillStuff[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_LivingSkillStuff> > GetLivingSkillStuff()
 {
 if(g_LivingSkillStuff.Count==0)
 {
 InitTable_LivingSkillStuff();
 }
 return g_LivingSkillStuff;
 }

public static List<Tab_MapConnection> GetMapConnectionByID(int nKey)
 {
 if(g_MapConnection.Count==0)
 {
 InitTable_MapConnection();
 }
 if( g_MapConnection.ContainsKey(nKey))
 {
 return g_MapConnection[nKey];
 }
 return null;
 }
 public static Tab_MapConnection GetMapConnectionByID(int nKey, int nIndex)
 {
 if(g_MapConnection.Count==0)
 {
 InitTable_MapConnection();
 }
 if( g_MapConnection.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MapConnection[nKey].Count)
 return g_MapConnection[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MapConnection> > GetMapConnection()
 {
 if(g_MapConnection.Count==0)
 {
 InitTable_MapConnection();
 }
 return g_MapConnection;
 }

public static List<Tab_MasterShop> GetMasterShopByID(int nKey)
 {
 if(g_MasterShop.Count==0)
 {
 InitTable_MasterShop();
 }
 if( g_MasterShop.ContainsKey(nKey))
 {
 return g_MasterShop[nKey];
 }
 return null;
 }
 public static Tab_MasterShop GetMasterShopByID(int nKey, int nIndex)
 {
 if(g_MasterShop.Count==0)
 {
 InitTable_MasterShop();
 }
 if( g_MasterShop.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MasterShop[nKey].Count)
 return g_MasterShop[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MasterShop> > GetMasterShop()
 {
 if(g_MasterShop.Count==0)
 {
 InitTable_MasterShop();
 }
 return g_MasterShop;
 }

public static List<Tab_MasterSkill> GetMasterSkillByID(int nKey)
 {
 if(g_MasterSkill.Count==0)
 {
 InitTable_MasterSkill();
 }
 if( g_MasterSkill.ContainsKey(nKey))
 {
 return g_MasterSkill[nKey];
 }
 return null;
 }
 public static Tab_MasterSkill GetMasterSkillByID(int nKey, int nIndex)
 {
 if(g_MasterSkill.Count==0)
 {
 InitTable_MasterSkill();
 }
 if( g_MasterSkill.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MasterSkill[nKey].Count)
 return g_MasterSkill[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MasterSkill> > GetMasterSkill()
 {
 if(g_MasterSkill.Count==0)
 {
 InitTable_MasterSkill();
 }
 return g_MasterSkill;
 }

public static List<Tab_MasterSkillLimit> GetMasterSkillLimitByID(int nKey)
 {
 if(g_MasterSkillLimit.Count==0)
 {
 InitTable_MasterSkillLimit();
 }
 if( g_MasterSkillLimit.ContainsKey(nKey))
 {
 return g_MasterSkillLimit[nKey];
 }
 return null;
 }
 public static Tab_MasterSkillLimit GetMasterSkillLimitByID(int nKey, int nIndex)
 {
 if(g_MasterSkillLimit.Count==0)
 {
 InitTable_MasterSkillLimit();
 }
 if( g_MasterSkillLimit.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MasterSkillLimit[nKey].Count)
 return g_MasterSkillLimit[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MasterSkillLimit> > GetMasterSkillLimit()
 {
 if(g_MasterSkillLimit.Count==0)
 {
 InitTable_MasterSkillLimit();
 }
 return g_MasterSkillLimit;
 }

public static List<Tab_MissionBase> GetMissionBaseByID(int nKey)
 {
 if(g_MissionBase.Count==0)
 {
 InitTable_MissionBase();
 }
 if( g_MissionBase.ContainsKey(nKey))
 {
 return g_MissionBase[nKey];
 }
 return null;
 }
 public static Tab_MissionBase GetMissionBaseByID(int nKey, int nIndex)
 {
 if(g_MissionBase.Count==0)
 {
 InitTable_MissionBase();
 }
 if( g_MissionBase.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionBase[nKey].Count)
 return g_MissionBase[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionBase> > GetMissionBase()
 {
 if(g_MissionBase.Count==0)
 {
 InitTable_MissionBase();
 }
 return g_MissionBase;
 }

public static List<Tab_MissionBonus> GetMissionBonusByID(int nKey)
 {
 if(g_MissionBonus.Count==0)
 {
 InitTable_MissionBonus();
 }
 if( g_MissionBonus.ContainsKey(nKey))
 {
 return g_MissionBonus[nKey];
 }
 return null;
 }
 public static Tab_MissionBonus GetMissionBonusByID(int nKey, int nIndex)
 {
 if(g_MissionBonus.Count==0)
 {
 InitTable_MissionBonus();
 }
 if( g_MissionBonus.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionBonus[nKey].Count)
 return g_MissionBonus[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionBonus> > GetMissionBonus()
 {
 if(g_MissionBonus.Count==0)
 {
 InitTable_MissionBonus();
 }
 return g_MissionBonus;
 }

public static List<Tab_MissionCollectItem> GetMissionCollectItemByID(int nKey)
 {
 if(g_MissionCollectItem.Count==0)
 {
 InitTable_MissionCollectItem();
 }
 if( g_MissionCollectItem.ContainsKey(nKey))
 {
 return g_MissionCollectItem[nKey];
 }
 return null;
 }
 public static Tab_MissionCollectItem GetMissionCollectItemByID(int nKey, int nIndex)
 {
 if(g_MissionCollectItem.Count==0)
 {
 InitTable_MissionCollectItem();
 }
 if( g_MissionCollectItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionCollectItem[nKey].Count)
 return g_MissionCollectItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionCollectItem> > GetMissionCollectItem()
 {
 if(g_MissionCollectItem.Count==0)
 {
 InitTable_MissionCollectItem();
 }
 return g_MissionCollectItem;
 }

public static List<Tab_MissionCopyScene> GetMissionCopySceneByID(int nKey)
 {
 if(g_MissionCopyScene.Count==0)
 {
 InitTable_MissionCopyScene();
 }
 if( g_MissionCopyScene.ContainsKey(nKey))
 {
 return g_MissionCopyScene[nKey];
 }
 return null;
 }
 public static Tab_MissionCopyScene GetMissionCopySceneByID(int nKey, int nIndex)
 {
 if(g_MissionCopyScene.Count==0)
 {
 InitTable_MissionCopyScene();
 }
 if( g_MissionCopyScene.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionCopyScene[nKey].Count)
 return g_MissionCopyScene[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionCopyScene> > GetMissionCopyScene()
 {
 if(g_MissionCopyScene.Count==0)
 {
 InitTable_MissionCopyScene();
 }
 return g_MissionCopyScene;
 }

public static List<Tab_MissionDelivery> GetMissionDeliveryByID(int nKey)
 {
 if(g_MissionDelivery.Count==0)
 {
 InitTable_MissionDelivery();
 }
 if( g_MissionDelivery.ContainsKey(nKey))
 {
 return g_MissionDelivery[nKey];
 }
 return null;
 }
 public static Tab_MissionDelivery GetMissionDeliveryByID(int nKey, int nIndex)
 {
 if(g_MissionDelivery.Count==0)
 {
 InitTable_MissionDelivery();
 }
 if( g_MissionDelivery.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionDelivery[nKey].Count)
 return g_MissionDelivery[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionDelivery> > GetMissionDelivery()
 {
 if(g_MissionDelivery.Count==0)
 {
 InitTable_MissionDelivery();
 }
 return g_MissionDelivery;
 }

public static List<Tab_MissionDictionary> GetMissionDictionaryByID(int nKey)
 {
 if(g_MissionDictionary.Count==0)
 {
 InitTable_MissionDictionary();
 }
 if( g_MissionDictionary.ContainsKey(nKey))
 {
 return g_MissionDictionary[nKey];
 }
 return null;
 }
 public static Tab_MissionDictionary GetMissionDictionaryByID(int nKey, int nIndex)
 {
 if(g_MissionDictionary.Count==0)
 {
 InitTable_MissionDictionary();
 }
 if( g_MissionDictionary.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionDictionary[nKey].Count)
 return g_MissionDictionary[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionDictionary> > GetMissionDictionary()
 {
 if(g_MissionDictionary.Count==0)
 {
 InitTable_MissionDictionary();
 }
 return g_MissionDictionary;
 }

public static List<Tab_MissionEnterArea> GetMissionEnterAreaByID(int nKey)
 {
 if(g_MissionEnterArea.Count==0)
 {
 InitTable_MissionEnterArea();
 }
 if( g_MissionEnterArea.ContainsKey(nKey))
 {
 return g_MissionEnterArea[nKey];
 }
 return null;
 }
 public static Tab_MissionEnterArea GetMissionEnterAreaByID(int nKey, int nIndex)
 {
 if(g_MissionEnterArea.Count==0)
 {
 InitTable_MissionEnterArea();
 }
 if( g_MissionEnterArea.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionEnterArea[nKey].Count)
 return g_MissionEnterArea[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionEnterArea> > GetMissionEnterArea()
 {
 if(g_MissionEnterArea.Count==0)
 {
 InitTable_MissionEnterArea();
 }
 return g_MissionEnterArea;
 }

public static List<Tab_MissionKillMonster> GetMissionKillMonsterByID(int nKey)
 {
 if(g_MissionKillMonster.Count==0)
 {
 InitTable_MissionKillMonster();
 }
 if( g_MissionKillMonster.ContainsKey(nKey))
 {
 return g_MissionKillMonster[nKey];
 }
 return null;
 }
 public static Tab_MissionKillMonster GetMissionKillMonsterByID(int nKey, int nIndex)
 {
 if(g_MissionKillMonster.Count==0)
 {
 InitTable_MissionKillMonster();
 }
 if( g_MissionKillMonster.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionKillMonster[nKey].Count)
 return g_MissionKillMonster[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionKillMonster> > GetMissionKillMonster()
 {
 if(g_MissionKillMonster.Count==0)
 {
 InitTable_MissionKillMonster();
 }
 return g_MissionKillMonster;
 }

public static List<Tab_MissionLevelUp> GetMissionLevelUpByID(int nKey)
 {
 if(g_MissionLevelUp.Count==0)
 {
 InitTable_MissionLevelUp();
 }
 if( g_MissionLevelUp.ContainsKey(nKey))
 {
 return g_MissionLevelUp[nKey];
 }
 return null;
 }
 public static Tab_MissionLevelUp GetMissionLevelUpByID(int nKey, int nIndex)
 {
 if(g_MissionLevelUp.Count==0)
 {
 InitTable_MissionLevelUp();
 }
 if( g_MissionLevelUp.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionLevelUp[nKey].Count)
 return g_MissionLevelUp[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionLevelUp> > GetMissionLevelUp()
 {
 if(g_MissionLevelUp.Count==0)
 {
 InitTable_MissionLevelUp();
 }
 return g_MissionLevelUp;
 }

public static List<Tab_MissionLimit> GetMissionLimitByID(int nKey)
 {
 if(g_MissionLimit.Count==0)
 {
 InitTable_MissionLimit();
 }
 if( g_MissionLimit.ContainsKey(nKey))
 {
 return g_MissionLimit[nKey];
 }
 return null;
 }
 public static Tab_MissionLimit GetMissionLimitByID(int nKey, int nIndex)
 {
 if(g_MissionLimit.Count==0)
 {
 InitTable_MissionLimit();
 }
 if( g_MissionLimit.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionLimit[nKey].Count)
 return g_MissionLimit[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionLimit> > GetMissionLimit()
 {
 if(g_MissionLimit.Count==0)
 {
 InitTable_MissionLimit();
 }
 return g_MissionLimit;
 }

public static List<Tab_MissionLootItem> GetMissionLootItemByID(int nKey)
 {
 if(g_MissionLootItem.Count==0)
 {
 InitTable_MissionLootItem();
 }
 if( g_MissionLootItem.ContainsKey(nKey))
 {
 return g_MissionLootItem[nKey];
 }
 return null;
 }
 public static Tab_MissionLootItem GetMissionLootItemByID(int nKey, int nIndex)
 {
 if(g_MissionLootItem.Count==0)
 {
 InitTable_MissionLootItem();
 }
 if( g_MissionLootItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionLootItem[nKey].Count)
 return g_MissionLootItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionLootItem> > GetMissionLootItem()
 {
 if(g_MissionLootItem.Count==0)
 {
 InitTable_MissionLootItem();
 }
 return g_MissionLootItem;
 }

public static List<Tab_MissionOperationNum> GetMissionOperationNumByID(int nKey)
 {
 if(g_MissionOperationNum.Count==0)
 {
 InitTable_MissionOperationNum();
 }
 if( g_MissionOperationNum.ContainsKey(nKey))
 {
 return g_MissionOperationNum[nKey];
 }
 return null;
 }
 public static Tab_MissionOperationNum GetMissionOperationNumByID(int nKey, int nIndex)
 {
 if(g_MissionOperationNum.Count==0)
 {
 InitTable_MissionOperationNum();
 }
 if( g_MissionOperationNum.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionOperationNum[nKey].Count)
 return g_MissionOperationNum[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionOperationNum> > GetMissionOperationNum()
 {
 if(g_MissionOperationNum.Count==0)
 {
 InitTable_MissionOperationNum();
 }
 return g_MissionOperationNum;
 }

public static List<Tab_MissionUseItem> GetMissionUseItemByID(int nKey)
 {
 if(g_MissionUseItem.Count==0)
 {
 InitTable_MissionUseItem();
 }
 if( g_MissionUseItem.ContainsKey(nKey))
 {
 return g_MissionUseItem[nKey];
 }
 return null;
 }
 public static Tab_MissionUseItem GetMissionUseItemByID(int nKey, int nIndex)
 {
 if(g_MissionUseItem.Count==0)
 {
 InitTable_MissionUseItem();
 }
 if( g_MissionUseItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MissionUseItem[nKey].Count)
 return g_MissionUseItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MissionUseItem> > GetMissionUseItem()
 {
 if(g_MissionUseItem.Count==0)
 {
 InitTable_MissionUseItem();
 }
 return g_MissionUseItem;
 }

public static List<Tab_MoneyTree> GetMoneyTreeByID(int nKey)
 {
 if(g_MoneyTree.Count==0)
 {
 InitTable_MoneyTree();
 }
 if( g_MoneyTree.ContainsKey(nKey))
 {
 return g_MoneyTree[nKey];
 }
 return null;
 }
 public static Tab_MoneyTree GetMoneyTreeByID(int nKey, int nIndex)
 {
 if(g_MoneyTree.Count==0)
 {
 InitTable_MoneyTree();
 }
 if( g_MoneyTree.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MoneyTree[nKey].Count)
 return g_MoneyTree[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MoneyTree> > GetMoneyTree()
 {
 if(g_MoneyTree.Count==0)
 {
 InitTable_MoneyTree();
 }
 return g_MoneyTree;
 }

public static List<Tab_MoneyTreeVIP> GetMoneyTreeVIPByID(int nKey)
 {
 if(g_MoneyTreeVIP.Count==0)
 {
 InitTable_MoneyTreeVIP();
 }
 if( g_MoneyTreeVIP.ContainsKey(nKey))
 {
 return g_MoneyTreeVIP[nKey];
 }
 return null;
 }
 public static Tab_MoneyTreeVIP GetMoneyTreeVIPByID(int nKey, int nIndex)
 {
 if(g_MoneyTreeVIP.Count==0)
 {
 InitTable_MoneyTreeVIP();
 }
 if( g_MoneyTreeVIP.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MoneyTreeVIP[nKey].Count)
 return g_MoneyTreeVIP[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MoneyTreeVIP> > GetMoneyTreeVIP()
 {
 if(g_MoneyTreeVIP.Count==0)
 {
 InitTable_MoneyTreeVIP();
 }
 return g_MoneyTreeVIP;
 }

public static List<Tab_MountBase> GetMountBaseByID(int nKey)
 {
 if(g_MountBase.Count==0)
 {
 InitTable_MountBase();
 }
 if( g_MountBase.ContainsKey(nKey))
 {
 return g_MountBase[nKey];
 }
 return null;
 }
 public static Tab_MountBase GetMountBaseByID(int nKey, int nIndex)
 {
 if(g_MountBase.Count==0)
 {
 InitTable_MountBase();
 }
 if( g_MountBase.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_MountBase[nKey].Count)
 return g_MountBase[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_MountBase> > GetMountBase()
 {
 if(g_MountBase.Count==0)
 {
 InitTable_MountBase();
 }
 return g_MountBase;
 }

public static List<Tab_NewServerAward> GetNewServerAwardByID(int nKey)
 {
 if(g_NewServerAward.Count==0)
 {
 InitTable_NewServerAward();
 }
 if( g_NewServerAward.ContainsKey(nKey))
 {
 return g_NewServerAward[nKey];
 }
 return null;
 }
 public static Tab_NewServerAward GetNewServerAwardByID(int nKey, int nIndex)
 {
 if(g_NewServerAward.Count==0)
 {
 InitTable_NewServerAward();
 }
 if( g_NewServerAward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_NewServerAward[nKey].Count)
 return g_NewServerAward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_NewServerAward> > GetNewServerAward()
 {
 if(g_NewServerAward.Count==0)
 {
 InitTable_NewServerAward();
 }
 return g_NewServerAward;
 }

public static List<Tab_NianShouNpcScence> GetNianShouNpcScenceByID(int nKey)
 {
 if(g_NianShouNpcScence.Count==0)
 {
 InitTable_NianShouNpcScence();
 }
 if( g_NianShouNpcScence.ContainsKey(nKey))
 {
 return g_NianShouNpcScence[nKey];
 }
 return null;
 }
 public static Tab_NianShouNpcScence GetNianShouNpcScenceByID(int nKey, int nIndex)
 {
 if(g_NianShouNpcScence.Count==0)
 {
 InitTable_NianShouNpcScence();
 }
 if( g_NianShouNpcScence.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_NianShouNpcScence[nKey].Count)
 return g_NianShouNpcScence[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_NianShouNpcScence> > GetNianShouNpcScence()
 {
 if(g_NianShouNpcScence.Count==0)
 {
 InitTable_NianShouNpcScence();
 }
 return g_NianShouNpcScence;
 }

public static List<Tab_NpcDialog> GetNpcDialogByID(int nKey)
 {
 if(g_NpcDialog.Count==0)
 {
 InitTable_NpcDialog();
 }
 if( g_NpcDialog.ContainsKey(nKey))
 {
 return g_NpcDialog[nKey];
 }
 return null;
 }
 public static Tab_NpcDialog GetNpcDialogByID(int nKey, int nIndex)
 {
 if(g_NpcDialog.Count==0)
 {
 InitTable_NpcDialog();
 }
 if( g_NpcDialog.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_NpcDialog[nKey].Count)
 return g_NpcDialog[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_NpcDialog> > GetNpcDialog()
 {
 if(g_NpcDialog.Count==0)
 {
 InitTable_NpcDialog();
 }
 return g_NpcDialog;
 }

public static List<Tab_NpcOptionDialog> GetNpcOptionDialogByID(int nKey)
 {
 if(g_NpcOptionDialog.Count==0)
 {
 InitTable_NpcOptionDialog();
 }
 if( g_NpcOptionDialog.ContainsKey(nKey))
 {
 return g_NpcOptionDialog[nKey];
 }
 return null;
 }
 public static Tab_NpcOptionDialog GetNpcOptionDialogByID(int nKey, int nIndex)
 {
 if(g_NpcOptionDialog.Count==0)
 {
 InitTable_NpcOptionDialog();
 }
 if( g_NpcOptionDialog.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_NpcOptionDialog[nKey].Count)
 return g_NpcOptionDialog[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_NpcOptionDialog> > GetNpcOptionDialog()
 {
 if(g_NpcOptionDialog.Count==0)
 {
 InitTable_NpcOptionDialog();
 }
 return g_NpcOptionDialog;
 }

public static List<Tab_OffLineExp> GetOffLineExpByID(int nKey)
 {
 if(g_OffLineExp.Count==0)
 {
 InitTable_OffLineExp();
 }
 if( g_OffLineExp.ContainsKey(nKey))
 {
 return g_OffLineExp[nKey];
 }
 return null;
 }
 public static Tab_OffLineExp GetOffLineExpByID(int nKey, int nIndex)
 {
 if(g_OffLineExp.Count==0)
 {
 InitTable_OffLineExp();
 }
 if( g_OffLineExp.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_OffLineExp[nKey].Count)
 return g_OffLineExp[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_OffLineExp> > GetOffLineExp()
 {
 if(g_OffLineExp.Count==0)
 {
 InitTable_OffLineExp();
 }
 return g_OffLineExp;
 }

public static List<Tab_OnlineTimeRankReward> GetOnlineTimeRankRewardByID(int nKey)
 {
 if(g_OnlineTimeRankReward.Count==0)
 {
 InitTable_OnlineTimeRankReward();
 }
 if( g_OnlineTimeRankReward.ContainsKey(nKey))
 {
 return g_OnlineTimeRankReward[nKey];
 }
 return null;
 }
 public static Tab_OnlineTimeRankReward GetOnlineTimeRankRewardByID(int nKey, int nIndex)
 {
 if(g_OnlineTimeRankReward.Count==0)
 {
 InitTable_OnlineTimeRankReward();
 }
 if( g_OnlineTimeRankReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_OnlineTimeRankReward[nKey].Count)
 return g_OnlineTimeRankReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_OnlineTimeRankReward> > GetOnlineTimeRankReward()
 {
 if(g_OnlineTimeRankReward.Count==0)
 {
 InitTable_OnlineTimeRankReward();
 }
 return g_OnlineTimeRankReward;
 }

public static List<Tab_PVPRule> GetPVPRuleByID(int nKey)
 {
 if(g_PVPRule.Count==0)
 {
 InitTable_PVPRule();
 }
 if( g_PVPRule.ContainsKey(nKey))
 {
 return g_PVPRule[nKey];
 }
 return null;
 }
 public static Tab_PVPRule GetPVPRuleByID(int nKey, int nIndex)
 {
 if(g_PVPRule.Count==0)
 {
 InitTable_PVPRule();
 }
 if( g_PVPRule.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PVPRule[nKey].Count)
 return g_PVPRule[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PVPRule> > GetPVPRule()
 {
 if(g_PVPRule.Count==0)
 {
 InitTable_PVPRule();
 }
 return g_PVPRule;
 }

public static List<Tab_PaoHuanBonus> GetPaoHuanBonusByID(int nKey)
 {
 if(g_PaoHuanBonus.Count==0)
 {
 InitTable_PaoHuanBonus();
 }
 if( g_PaoHuanBonus.ContainsKey(nKey))
 {
 return g_PaoHuanBonus[nKey];
 }
 return null;
 }
 public static Tab_PaoHuanBonus GetPaoHuanBonusByID(int nKey, int nIndex)
 {
 if(g_PaoHuanBonus.Count==0)
 {
 InitTable_PaoHuanBonus();
 }
 if( g_PaoHuanBonus.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PaoHuanBonus[nKey].Count)
 return g_PaoHuanBonus[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PaoHuanBonus> > GetPaoHuanBonus()
 {
 if(g_PaoHuanBonus.Count==0)
 {
 InitTable_PaoHuanBonus();
 }
 return g_PaoHuanBonus;
 }

public static List<Tab_PaoHuanMission> GetPaoHuanMissionByID(int nKey)
 {
 if(g_PaoHuanMission.Count==0)
 {
 InitTable_PaoHuanMission();
 }
 if( g_PaoHuanMission.ContainsKey(nKey))
 {
 return g_PaoHuanMission[nKey];
 }
 return null;
 }
 public static Tab_PaoHuanMission GetPaoHuanMissionByID(int nKey, int nIndex)
 {
 if(g_PaoHuanMission.Count==0)
 {
 InitTable_PaoHuanMission();
 }
 if( g_PaoHuanMission.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PaoHuanMission[nKey].Count)
 return g_PaoHuanMission[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PaoHuanMission> > GetPaoHuanMission()
 {
 if(g_PaoHuanMission.Count==0)
 {
 InitTable_PaoHuanMission();
 }
 return g_PaoHuanMission;
 }

public static List<Tab_PaoHuanRefresh> GetPaoHuanRefreshByID(int nKey)
 {
 if(g_PaoHuanRefresh.Count==0)
 {
 InitTable_PaoHuanRefresh();
 }
 if( g_PaoHuanRefresh.ContainsKey(nKey))
 {
 return g_PaoHuanRefresh[nKey];
 }
 return null;
 }
 public static Tab_PaoHuanRefresh GetPaoHuanRefreshByID(int nKey, int nIndex)
 {
 if(g_PaoHuanRefresh.Count==0)
 {
 InitTable_PaoHuanRefresh();
 }
 if( g_PaoHuanRefresh.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PaoHuanRefresh[nKey].Count)
 return g_PaoHuanRefresh[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PaoHuanRefresh> > GetPaoHuanRefresh()
 {
 if(g_PaoHuanRefresh.Count==0)
 {
 InitTable_PaoHuanRefresh();
 }
 return g_PaoHuanRefresh;
 }

public static List<Tab_PatrolPoint> GetPatrolPointByID(int nKey)
 {
 if(g_PatrolPoint.Count==0)
 {
 InitTable_PatrolPoint();
 }
 if( g_PatrolPoint.ContainsKey(nKey))
 {
 return g_PatrolPoint[nKey];
 }
 return null;
 }
 public static Tab_PatrolPoint GetPatrolPointByID(int nKey, int nIndex)
 {
 if(g_PatrolPoint.Count==0)
 {
 InitTable_PatrolPoint();
 }
 if( g_PatrolPoint.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PatrolPoint[nKey].Count)
 return g_PatrolPoint[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PatrolPoint> > GetPatrolPoint()
 {
 if(g_PatrolPoint.Count==0)
 {
 InitTable_PatrolPoint();
 }
 return g_PatrolPoint;
 }

public static List<Tab_ProfessionConmmon> GetProfessionConmmonByID(int nKey)
 {
 if(g_ProfessionConmmon.Count==0)
 {
 InitTable_ProfessionConmmon();
 }
 if( g_ProfessionConmmon.ContainsKey(nKey))
 {
 return g_ProfessionConmmon[nKey];
 }
 return null;
 }
 public static Tab_ProfessionConmmon GetProfessionConmmonByID(int nKey, int nIndex)
 {
 if(g_ProfessionConmmon.Count==0)
 {
 InitTable_ProfessionConmmon();
 }
 if( g_ProfessionConmmon.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ProfessionConmmon[nKey].Count)
 return g_ProfessionConmmon[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ProfessionConmmon> > GetProfessionConmmon()
 {
 if(g_ProfessionConmmon.Count==0)
 {
 InitTable_ProfessionConmmon();
 }
 return g_ProfessionConmmon;
 }

public static List<Tab_ProfessionReputationReward> GetProfessionReputationRewardByID(int nKey)
 {
 if(g_ProfessionReputationReward.Count==0)
 {
 InitTable_ProfessionReputationReward();
 }
 if( g_ProfessionReputationReward.ContainsKey(nKey))
 {
 return g_ProfessionReputationReward[nKey];
 }
 return null;
 }
 public static Tab_ProfessionReputationReward GetProfessionReputationRewardByID(int nKey, int nIndex)
 {
 if(g_ProfessionReputationReward.Count==0)
 {
 InitTable_ProfessionReputationReward();
 }
 if( g_ProfessionReputationReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ProfessionReputationReward[nKey].Count)
 return g_ProfessionReputationReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ProfessionReputationReward> > GetProfessionReputationReward()
 {
 if(g_ProfessionReputationReward.Count==0)
 {
 InitTable_ProfessionReputationReward();
 }
 return g_ProfessionReputationReward;
 }

public static List<Tab_PublicConfig> GetPublicConfigByID(int nKey)
 {
 if(g_PublicConfig.Count==0)
 {
 InitTable_PublicConfig();
 }
 if( g_PublicConfig.ContainsKey(nKey))
 {
 return g_PublicConfig[nKey];
 }
 return null;
 }
 public static Tab_PublicConfig GetPublicConfigByID(int nKey, int nIndex)
 {
 if(g_PublicConfig.Count==0)
 {
 InitTable_PublicConfig();
 }
 if( g_PublicConfig.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PublicConfig[nKey].Count)
 return g_PublicConfig[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PublicConfig> > GetPublicConfig()
 {
 if(g_PublicConfig.Count==0)
 {
 InitTable_PublicConfig();
 }
 return g_PublicConfig;
 }

public static List<Tab_PushNotification> GetPushNotificationByID(int nKey)
 {
 if(g_PushNotification.Count==0)
 {
 InitTable_PushNotification();
 }
 if( g_PushNotification.ContainsKey(nKey))
 {
 return g_PushNotification[nKey];
 }
 return null;
 }
 public static Tab_PushNotification GetPushNotificationByID(int nKey, int nIndex)
 {
 if(g_PushNotification.Count==0)
 {
 InitTable_PushNotification();
 }
 if( g_PushNotification.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PushNotification[nKey].Count)
 return g_PushNotification[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PushNotification> > GetPushNotification()
 {
 if(g_PushNotification.Count==0)
 {
 InitTable_PushNotification();
 }
 return g_PushNotification;
 }

public static List<Tab_PvpAward> GetPvpAwardByID(int nKey)
 {
 if(g_PvpAward.Count==0)
 {
 InitTable_PvpAward();
 }
 if( g_PvpAward.ContainsKey(nKey))
 {
 return g_PvpAward[nKey];
 }
 return null;
 }
 public static Tab_PvpAward GetPvpAwardByID(int nKey, int nIndex)
 {
 if(g_PvpAward.Count==0)
 {
 InitTable_PvpAward();
 }
 if( g_PvpAward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PvpAward[nKey].Count)
 return g_PvpAward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PvpAward> > GetPvpAward()
 {
 if(g_PvpAward.Count==0)
 {
 InitTable_PvpAward();
 }
 return g_PvpAward;
 }

public static List<Tab_PvpRank> GetPvpRankByID(int nKey)
 {
 if(g_PvpRank.Count==0)
 {
 InitTable_PvpRank();
 }
 if( g_PvpRank.ContainsKey(nKey))
 {
 return g_PvpRank[nKey];
 }
 return null;
 }
 public static Tab_PvpRank GetPvpRankByID(int nKey, int nIndex)
 {
 if(g_PvpRank.Count==0)
 {
 InitTable_PvpRank();
 }
 if( g_PvpRank.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PvpRank[nKey].Count)
 return g_PvpRank[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PvpRank> > GetPvpRank()
 {
 if(g_PvpRank.Count==0)
 {
 InitTable_PvpRank();
 }
 return g_PvpRank;
 }

public static List<Tab_PvpShop> GetPvpShopByID(int nKey)
 {
 if(g_PvpShop.Count==0)
 {
 InitTable_PvpShop();
 }
 if( g_PvpShop.ContainsKey(nKey))
 {
 return g_PvpShop[nKey];
 }
 return null;
 }
 public static Tab_PvpShop GetPvpShopByID(int nKey, int nIndex)
 {
 if(g_PvpShop.Count==0)
 {
 InitTable_PvpShop();
 }
 if( g_PvpShop.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_PvpShop[nKey].Count)
 return g_PvpShop[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_PvpShop> > GetPvpShop()
 {
 if(g_PvpShop.Count==0)
 {
 InitTable_PvpShop();
 }
 return g_PvpShop;
 }

public static List<Tab_QianKunDaiFormula> GetQianKunDaiFormulaByID(int nKey)
 {
 if(g_QianKunDaiFormula.Count==0)
 {
 InitTable_QianKunDaiFormula();
 }
 if( g_QianKunDaiFormula.ContainsKey(nKey))
 {
 return g_QianKunDaiFormula[nKey];
 }
 return null;
 }
 public static Tab_QianKunDaiFormula GetQianKunDaiFormulaByID(int nKey, int nIndex)
 {
 if(g_QianKunDaiFormula.Count==0)
 {
 InitTable_QianKunDaiFormula();
 }
 if( g_QianKunDaiFormula.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_QianKunDaiFormula[nKey].Count)
 return g_QianKunDaiFormula[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_QianKunDaiFormula> > GetQianKunDaiFormula()
 {
 if(g_QianKunDaiFormula.Count==0)
 {
 InitTable_QianKunDaiFormula();
 }
 return g_QianKunDaiFormula;
 }

public static List<Tab_RankReward> GetRankRewardByID(int nKey)
 {
 if(g_RankReward.Count==0)
 {
 InitTable_RankReward();
 }
 if( g_RankReward.ContainsKey(nKey))
 {
 return g_RankReward[nKey];
 }
 return null;
 }
 public static Tab_RankReward GetRankRewardByID(int nKey, int nIndex)
 {
 if(g_RankReward.Count==0)
 {
 InitTable_RankReward();
 }
 if( g_RankReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_RankReward[nKey].Count)
 return g_RankReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_RankReward> > GetRankReward()
 {
 if(g_RankReward.Count==0)
 {
 InitTable_RankReward();
 }
 return g_RankReward;
 }

public static List<Tab_Recharge> GetRechargeByID(int nKey)
 {
 if(g_Recharge.Count==0)
 {
 InitTable_Recharge();
 }
 if( g_Recharge.ContainsKey(nKey))
 {
 return g_Recharge[nKey];
 }
 return null;
 }
 public static Tab_Recharge GetRechargeByID(int nKey, int nIndex)
 {
 if(g_Recharge.Count==0)
 {
 InitTable_Recharge();
 }
 if( g_Recharge.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Recharge[nKey].Count)
 return g_Recharge[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Recharge> > GetRecharge()
 {
 if(g_Recharge.Count==0)
 {
 InitTable_Recharge();
 }
 return g_Recharge;
 }

public static List<Tab_Relation> GetRelationByID(int nKey)
 {
 if(g_Relation.Count==0)
 {
 InitTable_Relation();
 }
 if( g_Relation.ContainsKey(nKey))
 {
 return g_Relation[nKey];
 }
 return null;
 }
 public static Tab_Relation GetRelationByID(int nKey, int nIndex)
 {
 if(g_Relation.Count==0)
 {
 InitTable_Relation();
 }
 if( g_Relation.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Relation[nKey].Count)
 return g_Relation[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Relation> > GetRelation()
 {
 if(g_Relation.Count==0)
 {
 InitTable_Relation();
 }
 return g_Relation;
 }

public static List<Tab_RestaurantDesk> GetRestaurantDeskByID(int nKey)
 {
 if(g_RestaurantDesk.Count==0)
 {
 InitTable_RestaurantDesk();
 }
 if( g_RestaurantDesk.ContainsKey(nKey))
 {
 return g_RestaurantDesk[nKey];
 }
 return null;
 }
 public static Tab_RestaurantDesk GetRestaurantDeskByID(int nKey, int nIndex)
 {
 if(g_RestaurantDesk.Count==0)
 {
 InitTable_RestaurantDesk();
 }
 if( g_RestaurantDesk.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_RestaurantDesk[nKey].Count)
 return g_RestaurantDesk[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_RestaurantDesk> > GetRestaurantDesk()
 {
 if(g_RestaurantDesk.Count==0)
 {
 InitTable_RestaurantDesk();
 }
 return g_RestaurantDesk;
 }

public static List<Tab_RestaurantFood> GetRestaurantFoodByID(int nKey)
 {
 if(g_RestaurantFood.Count==0)
 {
 InitTable_RestaurantFood();
 }
 if( g_RestaurantFood.ContainsKey(nKey))
 {
 return g_RestaurantFood[nKey];
 }
 return null;
 }
 public static Tab_RestaurantFood GetRestaurantFoodByID(int nKey, int nIndex)
 {
 if(g_RestaurantFood.Count==0)
 {
 InitTable_RestaurantFood();
 }
 if( g_RestaurantFood.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_RestaurantFood[nKey].Count)
 return g_RestaurantFood[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_RestaurantFood> > GetRestaurantFood()
 {
 if(g_RestaurantFood.Count==0)
 {
 InitTable_RestaurantFood();
 }
 return g_RestaurantFood;
 }

public static List<Tab_RestaurantGuest> GetRestaurantGuestByID(int nKey)
 {
 if(g_RestaurantGuest.Count==0)
 {
 InitTable_RestaurantGuest();
 }
 if( g_RestaurantGuest.ContainsKey(nKey))
 {
 return g_RestaurantGuest[nKey];
 }
 return null;
 }
 public static Tab_RestaurantGuest GetRestaurantGuestByID(int nKey, int nIndex)
 {
 if(g_RestaurantGuest.Count==0)
 {
 InitTable_RestaurantGuest();
 }
 if( g_RestaurantGuest.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_RestaurantGuest[nKey].Count)
 return g_RestaurantGuest[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_RestaurantGuest> > GetRestaurantGuest()
 {
 if(g_RestaurantGuest.Count==0)
 {
 InitTable_RestaurantGuest();
 }
 return g_RestaurantGuest;
 }

public static List<Tab_RestaurantLevel> GetRestaurantLevelByID(int nKey)
 {
 if(g_RestaurantLevel.Count==0)
 {
 InitTable_RestaurantLevel();
 }
 if( g_RestaurantLevel.ContainsKey(nKey))
 {
 return g_RestaurantLevel[nKey];
 }
 return null;
 }
 public static Tab_RestaurantLevel GetRestaurantLevelByID(int nKey, int nIndex)
 {
 if(g_RestaurantLevel.Count==0)
 {
 InitTable_RestaurantLevel();
 }
 if( g_RestaurantLevel.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_RestaurantLevel[nKey].Count)
 return g_RestaurantLevel[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_RestaurantLevel> > GetRestaurantLevel()
 {
 if(g_RestaurantLevel.Count==0)
 {
 InitTable_RestaurantLevel();
 }
 return g_RestaurantLevel;
 }

public static List<Tab_RoleBaseAttr> GetRoleBaseAttrByID(int nKey)
 {
 if(g_RoleBaseAttr.Count==0)
 {
 InitTable_RoleBaseAttr();
 }
 if( g_RoleBaseAttr.ContainsKey(nKey))
 {
 return g_RoleBaseAttr[nKey];
 }
 return null;
 }
 public static Tab_RoleBaseAttr GetRoleBaseAttrByID(int nKey, int nIndex)
 {
 if(g_RoleBaseAttr.Count==0)
 {
 InitTable_RoleBaseAttr();
 }
 if( g_RoleBaseAttr.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_RoleBaseAttr[nKey].Count)
 return g_RoleBaseAttr[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_RoleBaseAttr> > GetRoleBaseAttr()
 {
 if(g_RoleBaseAttr.Count==0)
 {
 InitTable_RoleBaseAttr();
 }
 return g_RoleBaseAttr;
 }

public static List<Tab_RoleName> GetRoleNameByID(int nKey)
 {
 if(g_RoleName.Count==0)
 {
 InitTable_RoleName();
 }
 if( g_RoleName.ContainsKey(nKey))
 {
 return g_RoleName[nKey];
 }
 return null;
 }
 public static Tab_RoleName GetRoleNameByID(int nKey, int nIndex)
 {
 if(g_RoleName.Count==0)
 {
 InitTable_RoleName();
 }
 if( g_RoleName.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_RoleName[nKey].Count)
 return g_RoleName[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_RoleName> > GetRoleName()
 {
 if(g_RoleName.Count==0)
 {
 InitTable_RoleName();
 }
 return g_RoleName;
 }

public static List<Tab_SNSReward> GetSNSRewardByID(int nKey)
 {
 if(g_SNSReward.Count==0)
 {
 InitTable_SNSReward();
 }
 if( g_SNSReward.ContainsKey(nKey))
 {
 return g_SNSReward[nKey];
 }
 return null;
 }
 public static Tab_SNSReward GetSNSRewardByID(int nKey, int nIndex)
 {
 if(g_SNSReward.Count==0)
 {
 InitTable_SNSReward();
 }
 if( g_SNSReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SNSReward[nKey].Count)
 return g_SNSReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SNSReward> > GetSNSReward()
 {
 if(g_SNSReward.Count==0)
 {
 InitTable_SNSReward();
 }
 return g_SNSReward;
 }

public static List<Tab_SceneClass> GetSceneClassByID(int nKey)
 {
 if(g_SceneClass.Count==0)
 {
 InitTable_SceneClass();
 }
 if( g_SceneClass.ContainsKey(nKey))
 {
 return g_SceneClass[nKey];
 }
 return null;
 }
 public static Tab_SceneClass GetSceneClassByID(int nKey, int nIndex)
 {
 if(g_SceneClass.Count==0)
 {
 InitTable_SceneClass();
 }
 if( g_SceneClass.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SceneClass[nKey].Count)
 return g_SceneClass[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SceneClass> > GetSceneClass()
 {
 if(g_SceneClass.Count==0)
 {
 InitTable_SceneClass();
 }
 return g_SceneClass;
 }

public static List<Tab_SceneFightPos> GetSceneFightPosByID(int nKey)
 {
 if(g_SceneFightPos.Count==0)
 {
 InitTable_SceneFightPos();
 }
 if( g_SceneFightPos.ContainsKey(nKey))
 {
 return g_SceneFightPos[nKey];
 }
 return null;
 }
 public static Tab_SceneFightPos GetSceneFightPosByID(int nKey, int nIndex)
 {
 if(g_SceneFightPos.Count==0)
 {
 InitTable_SceneFightPos();
 }
 if( g_SceneFightPos.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SceneFightPos[nKey].Count)
 return g_SceneFightPos[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SceneFightPos> > GetSceneFightPos()
 {
 if(g_SceneFightPos.Count==0)
 {
 InitTable_SceneFightPos();
 }
 return g_SceneFightPos;
 }

public static List<Tab_SceneNpc> GetSceneNpcByID(int nKey)
 {
 if(g_SceneNpc.Count==0)
 {
 InitTable_SceneNpc();
 }
 if( g_SceneNpc.ContainsKey(nKey))
 {
 return g_SceneNpc[nKey];
 }
 return null;
 }
 public static Tab_SceneNpc GetSceneNpcByID(int nKey, int nIndex)
 {
 if(g_SceneNpc.Count==0)
 {
 InitTable_SceneNpc();
 }
 if( g_SceneNpc.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SceneNpc[nKey].Count)
 return g_SceneNpc[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SceneNpc> > GetSceneNpc()
 {
 if(g_SceneNpc.Count==0)
 {
 InitTable_SceneNpc();
 }
 return g_SceneNpc;
 }

public static List<Tab_SevenDaysLogicType> GetSevenDaysLogicTypeByID(int nKey)
 {
 if(g_SevenDaysLogicType.Count==0)
 {
 InitTable_SevenDaysLogicType();
 }
 if( g_SevenDaysLogicType.ContainsKey(nKey))
 {
 return g_SevenDaysLogicType[nKey];
 }
 return null;
 }
 public static Tab_SevenDaysLogicType GetSevenDaysLogicTypeByID(int nKey, int nIndex)
 {
 if(g_SevenDaysLogicType.Count==0)
 {
 InitTable_SevenDaysLogicType();
 }
 if( g_SevenDaysLogicType.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SevenDaysLogicType[nKey].Count)
 return g_SevenDaysLogicType[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SevenDaysLogicType> > GetSevenDaysLogicType()
 {
 if(g_SevenDaysLogicType.Count==0)
 {
 InitTable_SevenDaysLogicType();
 }
 return g_SevenDaysLogicType;
 }

public static List<Tab_SevenDaysReward> GetSevenDaysRewardByID(int nKey)
 {
 if(g_SevenDaysReward.Count==0)
 {
 InitTable_SevenDaysReward();
 }
 if( g_SevenDaysReward.ContainsKey(nKey))
 {
 return g_SevenDaysReward[nKey];
 }
 return null;
 }
 public static Tab_SevenDaysReward GetSevenDaysRewardByID(int nKey, int nIndex)
 {
 if(g_SevenDaysReward.Count==0)
 {
 InitTable_SevenDaysReward();
 }
 if( g_SevenDaysReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SevenDaysReward[nKey].Count)
 return g_SevenDaysReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SevenDaysReward> > GetSevenDaysReward()
 {
 if(g_SevenDaysReward.Count==0)
 {
 InitTable_SevenDaysReward();
 }
 return g_SevenDaysReward;
 }

public static List<Tab_ShareReward> GetShareRewardByID(int nKey)
 {
 if(g_ShareReward.Count==0)
 {
 InitTable_ShareReward();
 }
 if( g_ShareReward.ContainsKey(nKey))
 {
 return g_ShareReward[nKey];
 }
 return null;
 }
 public static Tab_ShareReward GetShareRewardByID(int nKey, int nIndex)
 {
 if(g_ShareReward.Count==0)
 {
 InitTable_ShareReward();
 }
 if( g_ShareReward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ShareReward[nKey].Count)
 return g_ShareReward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ShareReward> > GetShareReward()
 {
 if(g_ShareReward.Count==0)
 {
 InitTable_ShareReward();
 }
 return g_ShareReward;
 }

public static List<Tab_ShenQiInfo> GetShenQiInfoByID(int nKey)
 {
 if(g_ShenQiInfo.Count==0)
 {
 InitTable_ShenQiInfo();
 }
 if( g_ShenQiInfo.ContainsKey(nKey))
 {
 return g_ShenQiInfo[nKey];
 }
 return null;
 }
 public static Tab_ShenQiInfo GetShenQiInfoByID(int nKey, int nIndex)
 {
 if(g_ShenQiInfo.Count==0)
 {
 InitTable_ShenQiInfo();
 }
 if( g_ShenQiInfo.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ShenQiInfo[nKey].Count)
 return g_ShenQiInfo[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ShenQiInfo> > GetShenQiInfo()
 {
 if(g_ShenQiInfo.Count==0)
 {
 InitTable_ShenQiInfo();
 }
 return g_ShenQiInfo;
 }

public static List<Tab_ShenQiSkillInfo> GetShenQiSkillInfoByID(int nKey)
 {
 if(g_ShenQiSkillInfo.Count==0)
 {
 InitTable_ShenQiSkillInfo();
 }
 if( g_ShenQiSkillInfo.ContainsKey(nKey))
 {
 return g_ShenQiSkillInfo[nKey];
 }
 return null;
 }
 public static Tab_ShenQiSkillInfo GetShenQiSkillInfoByID(int nKey, int nIndex)
 {
 if(g_ShenQiSkillInfo.Count==0)
 {
 InitTable_ShenQiSkillInfo();
 }
 if( g_ShenQiSkillInfo.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ShenQiSkillInfo[nKey].Count)
 return g_ShenQiSkillInfo[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ShenQiSkillInfo> > GetShenQiSkillInfo()
 {
 if(g_ShenQiSkillInfo.Count==0)
 {
 InitTable_ShenQiSkillInfo();
 }
 return g_ShenQiSkillInfo;
 }

public static List<Tab_ShouHuaAwardInfo> GetShouHuaAwardInfoByID(int nKey)
 {
 if(g_ShouHuaAwardInfo.Count==0)
 {
 InitTable_ShouHuaAwardInfo();
 }
 if( g_ShouHuaAwardInfo.ContainsKey(nKey))
 {
 return g_ShouHuaAwardInfo[nKey];
 }
 return null;
 }
 public static Tab_ShouHuaAwardInfo GetShouHuaAwardInfoByID(int nKey, int nIndex)
 {
 if(g_ShouHuaAwardInfo.Count==0)
 {
 InitTable_ShouHuaAwardInfo();
 }
 if( g_ShouHuaAwardInfo.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_ShouHuaAwardInfo[nKey].Count)
 return g_ShouHuaAwardInfo[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_ShouHuaAwardInfo> > GetShouHuaAwardInfo()
 {
 if(g_ShouHuaAwardInfo.Count==0)
 {
 InitTable_ShouHuaAwardInfo();
 }
 return g_ShouHuaAwardInfo;
 }

public static List<Tab_SkillActive> GetSkillActiveByID(int nKey)
 {
 if(g_SkillActive.Count==0)
 {
 InitTable_SkillActive();
 }
 if( g_SkillActive.ContainsKey(nKey))
 {
 return g_SkillActive[nKey];
 }
 return null;
 }
 public static Tab_SkillActive GetSkillActiveByID(int nKey, int nIndex)
 {
 if(g_SkillActive.Count==0)
 {
 InitTable_SkillActive();
 }
 if( g_SkillActive.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SkillActive[nKey].Count)
 return g_SkillActive[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SkillActive> > GetSkillActive()
 {
 if(g_SkillActive.Count==0)
 {
 InitTable_SkillActive();
 }
 return g_SkillActive;
 }

public static List<Tab_SkillBase> GetSkillBaseByID(int nKey)
 {
 if(g_SkillBase.Count==0)
 {
 InitTable_SkillBase();
 }
 if( g_SkillBase.ContainsKey(nKey))
 {
 return g_SkillBase[nKey];
 }
 return null;
 }
 public static Tab_SkillBase GetSkillBaseByID(int nKey, int nIndex)
 {
 if(g_SkillBase.Count==0)
 {
 InitTable_SkillBase();
 }
 if( g_SkillBase.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SkillBase[nKey].Count)
 return g_SkillBase[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SkillBase> > GetSkillBase()
 {
 if(g_SkillBase.Count==0)
 {
 InitTable_SkillBase();
 }
 return g_SkillBase;
 }

public static List<Tab_SkillEx> GetSkillExByID(int nKey)
 {
 if(g_SkillEx.Count==0)
 {
 InitTable_SkillEx();
 }
 if( g_SkillEx.ContainsKey(nKey))
 {
 return g_SkillEx[nKey];
 }
 return null;
 }
 public static Tab_SkillEx GetSkillExByID(int nKey, int nIndex)
 {
 if(g_SkillEx.Count==0)
 {
 InitTable_SkillEx();
 }
 if( g_SkillEx.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SkillEx[nKey].Count)
 return g_SkillEx[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SkillEx> > GetSkillEx()
 {
 if(g_SkillEx.Count==0)
 {
 InitTable_SkillEx();
 }
 return g_SkillEx;
 }

public static List<Tab_SkillLevelUp> GetSkillLevelUpByID(int nKey)
 {
 if(g_SkillLevelUp.Count==0)
 {
 InitTable_SkillLevelUp();
 }
 if( g_SkillLevelUp.ContainsKey(nKey))
 {
 return g_SkillLevelUp[nKey];
 }
 return null;
 }
 public static Tab_SkillLevelUp GetSkillLevelUpByID(int nKey, int nIndex)
 {
 if(g_SkillLevelUp.Count==0)
 {
 InitTable_SkillLevelUp();
 }
 if( g_SkillLevelUp.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SkillLevelUp[nKey].Count)
 return g_SkillLevelUp[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SkillLevelUp> > GetSkillLevelUp()
 {
 if(g_SkillLevelUp.Count==0)
 {
 InitTable_SkillLevelUp();
 }
 return g_SkillLevelUp;
 }

public static List<Tab_SnareObjInfo> GetSnareObjInfoByID(int nKey)
 {
 if(g_SnareObjInfo.Count==0)
 {
 InitTable_SnareObjInfo();
 }
 if( g_SnareObjInfo.ContainsKey(nKey))
 {
 return g_SnareObjInfo[nKey];
 }
 return null;
 }
 public static Tab_SnareObjInfo GetSnareObjInfoByID(int nKey, int nIndex)
 {
 if(g_SnareObjInfo.Count==0)
 {
 InitTable_SnareObjInfo();
 }
 if( g_SnareObjInfo.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SnareObjInfo[nKey].Count)
 return g_SnareObjInfo[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SnareObjInfo> > GetSnareObjInfo()
 {
 if(g_SnareObjInfo.Count==0)
 {
 InitTable_SnareObjInfo();
 }
 return g_SnareObjInfo;
 }

public static List<Tab_SongHuaAwardInfo> GetSongHuaAwardInfoByID(int nKey)
 {
 if(g_SongHuaAwardInfo.Count==0)
 {
 InitTable_SongHuaAwardInfo();
 }
 if( g_SongHuaAwardInfo.ContainsKey(nKey))
 {
 return g_SongHuaAwardInfo[nKey];
 }
 return null;
 }
 public static Tab_SongHuaAwardInfo GetSongHuaAwardInfoByID(int nKey, int nIndex)
 {
 if(g_SongHuaAwardInfo.Count==0)
 {
 InitTable_SongHuaAwardInfo();
 }
 if( g_SongHuaAwardInfo.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SongHuaAwardInfo[nKey].Count)
 return g_SongHuaAwardInfo[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SongHuaAwardInfo> > GetSongHuaAwardInfo()
 {
 if(g_SongHuaAwardInfo.Count==0)
 {
 InitTable_SongHuaAwardInfo();
 }
 return g_SongHuaAwardInfo;
 }

public static List<Tab_Sounds> GetSoundsByID(int nKey)
 {
 if(g_Sounds.Count==0)
 {
 InitTable_Sounds();
 }
 if( g_Sounds.ContainsKey(nKey))
 {
 return g_Sounds[nKey];
 }
 return null;
 }
 public static Tab_Sounds GetSoundsByID(int nKey, int nIndex)
 {
 if(g_Sounds.Count==0)
 {
 InitTable_Sounds();
 }
 if( g_Sounds.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Sounds[nKey].Count)
 return g_Sounds[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Sounds> > GetSounds()
 {
 if(g_Sounds.Count==0)
 {
 InitTable_Sounds();
 }
 return g_Sounds;
 }

public static List<Tab_StaminaBuyRule> GetStaminaBuyRuleByID(int nKey)
 {
 if(g_StaminaBuyRule.Count==0)
 {
 InitTable_StaminaBuyRule();
 }
 if( g_StaminaBuyRule.ContainsKey(nKey))
 {
 return g_StaminaBuyRule[nKey];
 }
 return null;
 }
 public static Tab_StaminaBuyRule GetStaminaBuyRuleByID(int nKey, int nIndex)
 {
 if(g_StaminaBuyRule.Count==0)
 {
 InitTable_StaminaBuyRule();
 }
 if( g_StaminaBuyRule.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StaminaBuyRule[nKey].Count)
 return g_StaminaBuyRule[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StaminaBuyRule> > GetStaminaBuyRule()
 {
 if(g_StaminaBuyRule.Count==0)
 {
 InitTable_StaminaBuyRule();
 }
 return g_StaminaBuyRule;
 }

public static List<Tab_StarCondition> GetStarConditionByID(int nKey)
 {
 if(g_StarCondition.Count==0)
 {
 InitTable_StarCondition();
 }
 if( g_StarCondition.ContainsKey(nKey))
 {
 return g_StarCondition[nKey];
 }
 return null;
 }
 public static Tab_StarCondition GetStarConditionByID(int nKey, int nIndex)
 {
 if(g_StarCondition.Count==0)
 {
 InitTable_StarCondition();
 }
 if( g_StarCondition.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StarCondition[nKey].Count)
 return g_StarCondition[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StarCondition> > GetStarCondition()
 {
 if(g_StarCondition.Count==0)
 {
 InitTable_StarCondition();
 }
 return g_StarCondition;
 }

public static List<Tab_StoryCopyScene> GetStoryCopySceneByID(int nKey)
 {
 if(g_StoryCopyScene.Count==0)
 {
 InitTable_StoryCopyScene();
 }
 if( g_StoryCopyScene.ContainsKey(nKey))
 {
 return g_StoryCopyScene[nKey];
 }
 return null;
 }
 public static Tab_StoryCopyScene GetStoryCopySceneByID(int nKey, int nIndex)
 {
 if(g_StoryCopyScene.Count==0)
 {
 InitTable_StoryCopyScene();
 }
 if( g_StoryCopyScene.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StoryCopyScene[nKey].Count)
 return g_StoryCopyScene[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StoryCopyScene> > GetStoryCopyScene()
 {
 if(g_StoryCopyScene.Count==0)
 {
 InitTable_StoryCopyScene();
 }
 return g_StoryCopyScene;
 }

public static List<Tab_StoryCopySceneAward> GetStoryCopySceneAwardByID(int nKey)
 {
 if(g_StoryCopySceneAward.Count==0)
 {
 InitTable_StoryCopySceneAward();
 }
 if( g_StoryCopySceneAward.ContainsKey(nKey))
 {
 return g_StoryCopySceneAward[nKey];
 }
 return null;
 }
 public static Tab_StoryCopySceneAward GetStoryCopySceneAwardByID(int nKey, int nIndex)
 {
 if(g_StoryCopySceneAward.Count==0)
 {
 InitTable_StoryCopySceneAward();
 }
 if( g_StoryCopySceneAward.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StoryCopySceneAward[nKey].Count)
 return g_StoryCopySceneAward[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StoryCopySceneAward> > GetStoryCopySceneAward()
 {
 if(g_StoryCopySceneAward.Count==0)
 {
 InitTable_StoryCopySceneAward();
 }
 return g_StoryCopySceneAward;
 }

public static List<Tab_StoryCopySceneChapter> GetStoryCopySceneChapterByID(int nKey)
 {
 if(g_StoryCopySceneChapter.Count==0)
 {
 InitTable_StoryCopySceneChapter();
 }
 if( g_StoryCopySceneChapter.ContainsKey(nKey))
 {
 return g_StoryCopySceneChapter[nKey];
 }
 return null;
 }
 public static Tab_StoryCopySceneChapter GetStoryCopySceneChapterByID(int nKey, int nIndex)
 {
 if(g_StoryCopySceneChapter.Count==0)
 {
 InitTable_StoryCopySceneChapter();
 }
 if( g_StoryCopySceneChapter.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StoryCopySceneChapter[nKey].Count)
 return g_StoryCopySceneChapter[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StoryCopySceneChapter> > GetStoryCopySceneChapter()
 {
 if(g_StoryCopySceneChapter.Count==0)
 {
 InitTable_StoryCopySceneChapter();
 }
 return g_StoryCopySceneChapter;
 }

public static List<Tab_StoryCopySceneFlow> GetStoryCopySceneFlowByID(int nKey)
 {
 if(g_StoryCopySceneFlow.Count==0)
 {
 InitTable_StoryCopySceneFlow();
 }
 if( g_StoryCopySceneFlow.ContainsKey(nKey))
 {
 return g_StoryCopySceneFlow[nKey];
 }
 return null;
 }
 public static Tab_StoryCopySceneFlow GetStoryCopySceneFlowByID(int nKey, int nIndex)
 {
 if(g_StoryCopySceneFlow.Count==0)
 {
 InitTable_StoryCopySceneFlow();
 }
 if( g_StoryCopySceneFlow.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StoryCopySceneFlow[nKey].Count)
 return g_StoryCopySceneFlow[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StoryCopySceneFlow> > GetStoryCopySceneFlow()
 {
 if(g_StoryCopySceneFlow.Count==0)
 {
 InitTable_StoryCopySceneFlow();
 }
 return g_StoryCopySceneFlow;
 }

public static List<Tab_StoryCopySceneNpc> GetStoryCopySceneNpcByID(int nKey)
 {
 if(g_StoryCopySceneNpc.Count==0)
 {
 InitTable_StoryCopySceneNpc();
 }
 if( g_StoryCopySceneNpc.ContainsKey(nKey))
 {
 return g_StoryCopySceneNpc[nKey];
 }
 return null;
 }
 public static Tab_StoryCopySceneNpc GetStoryCopySceneNpcByID(int nKey, int nIndex)
 {
 if(g_StoryCopySceneNpc.Count==0)
 {
 InitTable_StoryCopySceneNpc();
 }
 if( g_StoryCopySceneNpc.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StoryCopySceneNpc[nKey].Count)
 return g_StoryCopySceneNpc[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StoryCopySceneNpc> > GetStoryCopySceneNpc()
 {
 if(g_StoryCopySceneNpc.Count==0)
 {
 InitTable_StoryCopySceneNpc();
 }
 return g_StoryCopySceneNpc;
 }

public static List<Tab_StoryTable> GetStoryTableByID(int nKey)
 {
 if(g_StoryTable.Count==0)
 {
 InitTable_StoryTable();
 }
 if( g_StoryTable.ContainsKey(nKey))
 {
 return g_StoryTable[nKey];
 }
 return null;
 }
 public static Tab_StoryTable GetStoryTableByID(int nKey, int nIndex)
 {
 if(g_StoryTable.Count==0)
 {
 InitTable_StoryTable();
 }
 if( g_StoryTable.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StoryTable[nKey].Count)
 return g_StoryTable[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StoryTable> > GetStoryTable()
 {
 if(g_StoryTable.Count==0)
 {
 InitTable_StoryTable();
 }
 return g_StoryTable;
 }

public static List<Tab_StrDictionary> GetStrDictionaryByID(int nKey)
 {
 if(g_StrDictionary.Count==0)
 {
 InitTable_StrDictionary();
 }
 if( g_StrDictionary.ContainsKey(nKey))
 {
 return g_StrDictionary[nKey];
 }
 return null;
 }
 public static Tab_StrDictionary GetStrDictionaryByID(int nKey, int nIndex)
 {
 if(g_StrDictionary.Count==0)
 {
 InitTable_StrDictionary();
 }
 if( g_StrDictionary.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StrDictionary[nKey].Count)
 return g_StrDictionary[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StrDictionary> > GetStrDictionary()
 {
 if(g_StrDictionary.Count==0)
 {
 InitTable_StrDictionary();
 }
 return g_StrDictionary;
 }

public static List<Tab_StrFilter> GetStrFilterByID(int nKey)
 {
 if(g_StrFilter.Count==0)
 {
 InitTable_StrFilter();
 }
 if( g_StrFilter.ContainsKey(nKey))
 {
 return g_StrFilter[nKey];
 }
 return null;
 }
 public static Tab_StrFilter GetStrFilterByID(int nKey, int nIndex)
 {
 if(g_StrFilter.Count==0)
 {
 InitTable_StrFilter();
 }
 if( g_StrFilter.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_StrFilter[nKey].Count)
 return g_StrFilter[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_StrFilter> > GetStrFilter()
 {
 if(g_StrFilter.Count==0)
 {
 InitTable_StrFilter();
 }
 return g_StrFilter;
 }

public static List<Tab_SwordsEquipPackUnlock> GetSwordsEquipPackUnlockByID(int nKey)
 {
 if(g_SwordsEquipPackUnlock.Count==0)
 {
 InitTable_SwordsEquipPackUnlock();
 }
 if( g_SwordsEquipPackUnlock.ContainsKey(nKey))
 {
 return g_SwordsEquipPackUnlock[nKey];
 }
 return null;
 }
 public static Tab_SwordsEquipPackUnlock GetSwordsEquipPackUnlockByID(int nKey, int nIndex)
 {
 if(g_SwordsEquipPackUnlock.Count==0)
 {
 InitTable_SwordsEquipPackUnlock();
 }
 if( g_SwordsEquipPackUnlock.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SwordsEquipPackUnlock[nKey].Count)
 return g_SwordsEquipPackUnlock[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SwordsEquipPackUnlock> > GetSwordsEquipPackUnlock()
 {
 if(g_SwordsEquipPackUnlock.Count==0)
 {
 InitTable_SwordsEquipPackUnlock();
 }
 return g_SwordsEquipPackUnlock;
 }

public static List<Tab_SwordsManAttr> GetSwordsManAttrByID(int nKey)
 {
 if(g_SwordsManAttr.Count==0)
 {
 InitTable_SwordsManAttr();
 }
 if( g_SwordsManAttr.ContainsKey(nKey))
 {
 return g_SwordsManAttr[nKey];
 }
 return null;
 }
 public static Tab_SwordsManAttr GetSwordsManAttrByID(int nKey, int nIndex)
 {
 if(g_SwordsManAttr.Count==0)
 {
 InitTable_SwordsManAttr();
 }
 if( g_SwordsManAttr.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SwordsManAttr[nKey].Count)
 return g_SwordsManAttr[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SwordsManAttr> > GetSwordsManAttr()
 {
 if(g_SwordsManAttr.Count==0)
 {
 InitTable_SwordsManAttr();
 }
 return g_SwordsManAttr;
 }

public static List<Tab_SwordsManGainRata> GetSwordsManGainRataByID(int nKey)
 {
 if(g_SwordsManGainRata.Count==0)
 {
 InitTable_SwordsManGainRata();
 }
 if( g_SwordsManGainRata.ContainsKey(nKey))
 {
 return g_SwordsManGainRata[nKey];
 }
 return null;
 }
 public static Tab_SwordsManGainRata GetSwordsManGainRataByID(int nKey, int nIndex)
 {
 if(g_SwordsManGainRata.Count==0)
 {
 InitTable_SwordsManGainRata();
 }
 if( g_SwordsManGainRata.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SwordsManGainRata[nKey].Count)
 return g_SwordsManGainRata[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SwordsManGainRata> > GetSwordsManGainRata()
 {
 if(g_SwordsManGainRata.Count==0)
 {
 InitTable_SwordsManGainRata();
 }
 return g_SwordsManGainRata;
 }

public static List<Tab_SwordsManLevelUp> GetSwordsManLevelUpByID(int nKey)
 {
 if(g_SwordsManLevelUp.Count==0)
 {
 InitTable_SwordsManLevelUp();
 }
 if( g_SwordsManLevelUp.ContainsKey(nKey))
 {
 return g_SwordsManLevelUp[nKey];
 }
 return null;
 }
 public static Tab_SwordsManLevelUp GetSwordsManLevelUpByID(int nKey, int nIndex)
 {
 if(g_SwordsManLevelUp.Count==0)
 {
 InitTable_SwordsManLevelUp();
 }
 if( g_SwordsManLevelUp.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SwordsManLevelUp[nKey].Count)
 return g_SwordsManLevelUp[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SwordsManLevelUp> > GetSwordsManLevelUp()
 {
 if(g_SwordsManLevelUp.Count==0)
 {
 InitTable_SwordsManLevelUp();
 }
 return g_SwordsManLevelUp;
 }

public static List<Tab_SwordsManScoreShop> GetSwordsManScoreShopByID(int nKey)
 {
 if(g_SwordsManScoreShop.Count==0)
 {
 InitTable_SwordsManScoreShop();
 }
 if( g_SwordsManScoreShop.ContainsKey(nKey))
 {
 return g_SwordsManScoreShop[nKey];
 }
 return null;
 }
 public static Tab_SwordsManScoreShop GetSwordsManScoreShopByID(int nKey, int nIndex)
 {
 if(g_SwordsManScoreShop.Count==0)
 {
 InitTable_SwordsManScoreShop();
 }
 if( g_SwordsManScoreShop.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SwordsManScoreShop[nKey].Count)
 return g_SwordsManScoreShop[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SwordsManScoreShop> > GetSwordsManScoreShop()
 {
 if(g_SwordsManScoreShop.Count==0)
 {
 InitTable_SwordsManScoreShop();
 }
 return g_SwordsManScoreShop;
 }

public static List<Tab_SystemShop> GetSystemShopByID(int nKey)
 {
 if(g_SystemShop.Count==0)
 {
 InitTable_SystemShop();
 }
 if( g_SystemShop.ContainsKey(nKey))
 {
 return g_SystemShop[nKey];
 }
 return null;
 }
 public static Tab_SystemShop GetSystemShopByID(int nKey, int nIndex)
 {
 if(g_SystemShop.Count==0)
 {
 InitTable_SystemShop();
 }
 if( g_SystemShop.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_SystemShop[nKey].Count)
 return g_SystemShop[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_SystemShop> > GetSystemShop()
 {
 if(g_SystemShop.Count==0)
 {
 InitTable_SystemShop();
 }
 return g_SystemShop;
 }

public static List<Tab_Teleport> GetTeleportByID(int nKey)
 {
 if(g_Teleport.Count==0)
 {
 InitTable_Teleport();
 }
 if( g_Teleport.ContainsKey(nKey))
 {
 return g_Teleport[nKey];
 }
 return null;
 }
 public static Tab_Teleport GetTeleportByID(int nKey, int nIndex)
 {
 if(g_Teleport.Count==0)
 {
 InitTable_Teleport();
 }
 if( g_Teleport.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Teleport[nKey].Count)
 return g_Teleport[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Teleport> > GetTeleport()
 {
 if(g_Teleport.Count==0)
 {
 InitTable_Teleport();
 }
 return g_Teleport;
 }

public static List<Tab_TestTable> GetTestTableByID(int nKey)
 {
 if(g_TestTable.Count==0)
 {
 InitTable_TestTable();
 }
 if( g_TestTable.ContainsKey(nKey))
 {
 return g_TestTable[nKey];
 }
 return null;
 }
 public static Tab_TestTable GetTestTableByID(int nKey, int nIndex)
 {
 if(g_TestTable.Count==0)
 {
 InitTable_TestTable();
 }
 if( g_TestTable.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_TestTable[nKey].Count)
 return g_TestTable[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_TestTable> > GetTestTable()
 {
 if(g_TestTable.Count==0)
 {
 InitTable_TestTable();
 }
 return g_TestTable;
 }

public static List<Tab_TitleData> GetTitleDataByID(int nKey)
 {
 if(g_TitleData.Count==0)
 {
 InitTable_TitleData();
 }
 if( g_TitleData.ContainsKey(nKey))
 {
 return g_TitleData[nKey];
 }
 return null;
 }
 public static Tab_TitleData GetTitleDataByID(int nKey, int nIndex)
 {
 if(g_TitleData.Count==0)
 {
 InitTable_TitleData();
 }
 if( g_TitleData.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_TitleData[nKey].Count)
 return g_TitleData[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_TitleData> > GetTitleData()
 {
 if(g_TitleData.Count==0)
 {
 InitTable_TitleData();
 }
 return g_TitleData;
 }

public static List<Tab_TitleType> GetTitleTypeByID(int nKey)
 {
 if(g_TitleType.Count==0)
 {
 InitTable_TitleType();
 }
 if( g_TitleType.ContainsKey(nKey))
 {
 return g_TitleType[nKey];
 }
 return null;
 }
 public static Tab_TitleType GetTitleTypeByID(int nKey, int nIndex)
 {
 if(g_TitleType.Count==0)
 {
 InitTable_TitleType();
 }
 if( g_TitleType.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_TitleType[nKey].Count)
 return g_TitleType[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_TitleType> > GetTitleType()
 {
 if(g_TitleType.Count==0)
 {
 InitTable_TitleType();
 }
 return g_TitleType;
 }

public static List<Tab_TrainingBook> GetTrainingBookByID(int nKey)
 {
 if(g_TrainingBook.Count==0)
 {
 InitTable_TrainingBook();
 }
 if( g_TrainingBook.ContainsKey(nKey))
 {
 return g_TrainingBook[nKey];
 }
 return null;
 }
 public static Tab_TrainingBook GetTrainingBookByID(int nKey, int nIndex)
 {
 if(g_TrainingBook.Count==0)
 {
 InitTable_TrainingBook();
 }
 if( g_TrainingBook.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_TrainingBook[nKey].Count)
 return g_TrainingBook[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_TrainingBook> > GetTrainingBook()
 {
 if(g_TrainingBook.Count==0)
 {
 InitTable_TrainingBook();
 }
 return g_TrainingBook;
 }

public static List<Tab_TrainingPic> GetTrainingPicByID(int nKey)
 {
 if(g_TrainingPic.Count==0)
 {
 InitTable_TrainingPic();
 }
 if( g_TrainingPic.ContainsKey(nKey))
 {
 return g_TrainingPic[nKey];
 }
 return null;
 }
 public static Tab_TrainingPic GetTrainingPicByID(int nKey, int nIndex)
 {
 if(g_TrainingPic.Count==0)
 {
 InitTable_TrainingPic();
 }
 if( g_TrainingPic.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_TrainingPic[nKey].Count)
 return g_TrainingPic[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_TrainingPic> > GetTrainingPic()
 {
 if(g_TrainingPic.Count==0)
 {
 InitTable_TrainingPic();
 }
 return g_TrainingPic;
 }

public static List<Tab_Trigger> GetTriggerByID(int nKey)
 {
 if(g_Trigger.Count==0)
 {
 InitTable_Trigger();
 }
 if( g_Trigger.ContainsKey(nKey))
 {
 return g_Trigger[nKey];
 }
 return null;
 }
 public static Tab_Trigger GetTriggerByID(int nKey, int nIndex)
 {
 if(g_Trigger.Count==0)
 {
 InitTable_Trigger();
 }
 if( g_Trigger.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Trigger[nKey].Count)
 return g_Trigger[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Trigger> > GetTrigger()
 {
 if(g_Trigger.Count==0)
 {
 InitTable_Trigger();
 }
 return g_Trigger;
 }

public static List<Tab_UIPath> GetUIPathByID(int nKey)
 {
 if(g_UIPath.Count==0)
 {
 InitTable_UIPath();
 }
 if( g_UIPath.ContainsKey(nKey))
 {
 return g_UIPath[nKey];
 }
 return null;
 }
 public static Tab_UIPath GetUIPathByID(int nKey, int nIndex)
 {
 if(g_UIPath.Count==0)
 {
 InitTable_UIPath();
 }
 if( g_UIPath.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_UIPath[nKey].Count)
 return g_UIPath[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_UIPath> > GetUIPath()
 {
 if(g_UIPath.Count==0)
 {
 InitTable_UIPath();
 }
 return g_UIPath;
 }

public static List<Tab_UsableItem> GetUsableItemByID(int nKey)
 {
 if(g_UsableItem.Count==0)
 {
 InitTable_UsableItem();
 }
 if( g_UsableItem.ContainsKey(nKey))
 {
 return g_UsableItem[nKey];
 }
 return null;
 }
 public static Tab_UsableItem GetUsableItemByID(int nKey, int nIndex)
 {
 if(g_UsableItem.Count==0)
 {
 InitTable_UsableItem();
 }
 if( g_UsableItem.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_UsableItem[nKey].Count)
 return g_UsableItem[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_UsableItem> > GetUsableItem()
 {
 if(g_UsableItem.Count==0)
 {
 InitTable_UsableItem();
 }
 return g_UsableItem;
 }

public static List<Tab_VIPShop> GetVIPShopByID(int nKey)
 {
 if(g_VIPShop.Count==0)
 {
 InitTable_VIPShop();
 }
 if( g_VIPShop.ContainsKey(nKey))
 {
 return g_VIPShop[nKey];
 }
 return null;
 }
 public static Tab_VIPShop GetVIPShopByID(int nKey, int nIndex)
 {
 if(g_VIPShop.Count==0)
 {
 InitTable_VIPShop();
 }
 if( g_VIPShop.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_VIPShop[nKey].Count)
 return g_VIPShop[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_VIPShop> > GetVIPShop()
 {
 if(g_VIPShop.Count==0)
 {
 InitTable_VIPShop();
 }
 return g_VIPShop;
 }

public static List<Tab_VillainGuideNpc> GetVillainGuideNpcByID(int nKey)
 {
 if(g_VillainGuideNpc.Count==0)
 {
 InitTable_VillainGuideNpc();
 }
 if( g_VillainGuideNpc.ContainsKey(nKey))
 {
 return g_VillainGuideNpc[nKey];
 }
 return null;
 }
 public static Tab_VillainGuideNpc GetVillainGuideNpcByID(int nKey, int nIndex)
 {
 if(g_VillainGuideNpc.Count==0)
 {
 InitTable_VillainGuideNpc();
 }
 if( g_VillainGuideNpc.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_VillainGuideNpc[nKey].Count)
 return g_VillainGuideNpc[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_VillainGuideNpc> > GetVillainGuideNpc()
 {
 if(g_VillainGuideNpc.Count==0)
 {
 InitTable_VillainGuideNpc();
 }
 return g_VillainGuideNpc;
 }

public static List<Tab_VillainScene> GetVillainSceneByID(int nKey)
 {
 if(g_VillainScene.Count==0)
 {
 InitTable_VillainScene();
 }
 if( g_VillainScene.ContainsKey(nKey))
 {
 return g_VillainScene[nKey];
 }
 return null;
 }
 public static Tab_VillainScene GetVillainSceneByID(int nKey, int nIndex)
 {
 if(g_VillainScene.Count==0)
 {
 InitTable_VillainScene();
 }
 if( g_VillainScene.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_VillainScene[nKey].Count)
 return g_VillainScene[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_VillainScene> > GetVillainScene()
 {
 if(g_VillainScene.Count==0)
 {
 InitTable_VillainScene();
 }
 return g_VillainScene;
 }

public static List<Tab_VipBook> GetVipBookByID(int nKey)
 {
 if(g_VipBook.Count==0)
 {
 InitTable_VipBook();
 }
 if( g_VipBook.ContainsKey(nKey))
 {
 return g_VipBook[nKey];
 }
 return null;
 }
 public static Tab_VipBook GetVipBookByID(int nKey, int nIndex)
 {
 if(g_VipBook.Count==0)
 {
 InitTable_VipBook();
 }
 if( g_VipBook.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_VipBook[nKey].Count)
 return g_VipBook[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_VipBook> > GetVipBook()
 {
 if(g_VipBook.Count==0)
 {
 InitTable_VipBook();
 }
 return g_VipBook;
 }

public static List<Tab_WeaponModel> GetWeaponModelByID(int nKey)
 {
 if(g_WeaponModel.Count==0)
 {
 InitTable_WeaponModel();
 }
 if( g_WeaponModel.ContainsKey(nKey))
 {
 return g_WeaponModel[nKey];
 }
 return null;
 }
 public static Tab_WeaponModel GetWeaponModelByID(int nKey, int nIndex)
 {
 if(g_WeaponModel.Count==0)
 {
 InitTable_WeaponModel();
 }
 if( g_WeaponModel.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_WeaponModel[nKey].Count)
 return g_WeaponModel[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_WeaponModel> > GetWeaponModel()
 {
 if(g_WeaponModel.Count==0)
 {
 InitTable_WeaponModel();
 }
 return g_WeaponModel;
 }

public static List<Tab_Xiaozhitiao> GetXiaozhitiaoByID(int nKey)
 {
 if(g_Xiaozhitiao.Count==0)
 {
 InitTable_Xiaozhitiao();
 }
 if( g_Xiaozhitiao.ContainsKey(nKey))
 {
 return g_Xiaozhitiao[nKey];
 }
 return null;
 }
 public static Tab_Xiaozhitiao GetXiaozhitiaoByID(int nKey, int nIndex)
 {
 if(g_Xiaozhitiao.Count==0)
 {
 InitTable_Xiaozhitiao();
 }
 if( g_Xiaozhitiao.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_Xiaozhitiao[nKey].Count)
 return g_Xiaozhitiao[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_Xiaozhitiao> > GetXiaozhitiao()
 {
 if(g_Xiaozhitiao.Count==0)
 {
 InitTable_Xiaozhitiao();
 }
 return g_Xiaozhitiao;
 }

public static List<Tab_YanHua> GetYanHuaByID(int nKey)
 {
 if(g_YanHua.Count==0)
 {
 InitTable_YanHua();
 }
 if( g_YanHua.ContainsKey(nKey))
 {
 return g_YanHua[nKey];
 }
 return null;
 }
 public static Tab_YanHua GetYanHuaByID(int nKey, int nIndex)
 {
 if(g_YanHua.Count==0)
 {
 InitTable_YanHua();
 }
 if( g_YanHua.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_YanHua[nKey].Count)
 return g_YanHua[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_YanHua> > GetYanHua()
 {
 if(g_YanHua.Count==0)
 {
 InitTable_YanHua();
 }
 return g_YanHua;
 }

public static List<Tab_YuanBaoShop> GetYuanBaoShopByID(int nKey)
 {
 if(g_YuanBaoShop.Count==0)
 {
 InitTable_YuanBaoShop();
 }
 if( g_YuanBaoShop.ContainsKey(nKey))
 {
 return g_YuanBaoShop[nKey];
 }
 return null;
 }
 public static Tab_YuanBaoShop GetYuanBaoShopByID(int nKey, int nIndex)
 {
 if(g_YuanBaoShop.Count==0)
 {
 InitTable_YuanBaoShop();
 }
 if( g_YuanBaoShop.ContainsKey(nKey))
 {
 if(nIndex>=0 && nIndex<g_YuanBaoShop[nKey].Count)
 return g_YuanBaoShop[nKey][nIndex];
 }
 return null;
 }
 public static Dictionary<int, List<Tab_YuanBaoShop> > GetYuanBaoShop()
 {
 if(g_YuanBaoShop.Count==0)
 {
 InitTable_YuanBaoShop();
 }
 return g_YuanBaoShop;
 }


}
}

