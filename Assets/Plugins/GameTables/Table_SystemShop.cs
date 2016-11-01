//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SystemShop
{ private const string TAB_FILE_DATA = "Tables/SystemShop.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_ISDYNAMIC,
ID_CANBUYBACK,
ID_CANBUYMULTY,
ID_PNUM,
ID_PID1,
ID_NUMPERGROUP1,
ID_MONEYTYPE1,
ID_MONEYSUBTYPE1,
ID_PRICE1,
ID_DISCOUNT1,
ID_ISBIND1,
ID_PID2,
ID_NUMPERGROUP2,
ID_MONEYTYPE2,
ID_MONEYSUBTYPE2,
ID_PRICE2,
ID_DISCOUNT2,
ID_ISBIND2,
ID_PID3,
ID_NUMPERGROUP3,
ID_MONEYTYPE3,
ID_MONEYSUBTYPE3,
ID_PRICE3,
ID_DISCOUNT3,
ID_ISBIND3,
ID_PID4,
ID_NUMPERGROUP4,
ID_MONEYTYPE4,
ID_MONEYSUBTYPE4,
ID_PRICE4,
ID_DISCOUNT4,
ID_ISBIND4,
ID_PID5,
ID_NUMPERGROUP5,
ID_MONEYTYPE5,
ID_MONEYSUBTYPE5,
ID_PRICE5,
ID_DISCOUNT5,
ID_ISBIND5,
ID_PID6,
ID_NUMPERGROUP6,
ID_MONEYTYPE6,
ID_MONEYSUBTYPE6,
ID_PRICE6,
ID_DISCOUNT6,
ID_ISBIND6,
ID_PID7,
ID_NUMPERGROUP7,
ID_MONEYTYPE7,
ID_MONEYSUBTYPE7,
ID_PRICE7,
ID_DISCOUNT7,
ID_ISBIND7,
ID_PID8,
ID_NUMPERGROUP8,
ID_MONEYTYPE8,
ID_MONEYSUBTYPE8,
ID_PRICE8,
ID_DISCOUNT8,
ID_ISBIND8,
ID_PID9,
ID_NUMPERGROUP9,
ID_MONEYTYPE9,
ID_MONEYSUBTYPE9,
ID_PRICE9,
ID_DISCOUNT9,
ID_ISBIND9,
ID_PID10,
ID_NUMPERGROUP10,
ID_MONEYTYPE10,
ID_MONEYSUBTYPE10,
ID_PRICE10,
ID_DISCOUNT10,
ID_ISBIND10,
ID_PID11,
ID_NUMPERGROUP11,
ID_MONEYTYPE11,
ID_MONEYSUBTYPE11,
ID_PRICE11,
ID_DISCOUNT11,
ID_ISBIND11,
ID_PID12,
ID_NUMPERGROUP12,
ID_MONEYTYPE12,
ID_MONEYSUBTYPE12,
ID_PRICE12,
ID_DISCOUNT12,
ID_ISBIND12,
ID_PID13,
ID_NUMPERGROUP13,
ID_MONEYTYPE13,
ID_MONEYSUBTYPE13,
ID_PRICE13,
ID_DISCOUNT13,
ID_ISBIND13,
ID_PID14,
ID_NUMPERGROUP14,
ID_MONEYTYPE14,
ID_MONEYSUBTYPE14,
ID_PRICE14,
ID_DISCOUNT14,
ID_ISBIND14,
ID_PID15,
ID_NUMPERGROUP15,
ID_MONEYTYPE15,
ID_MONEYSUBTYPE15,
ID_PRICE15,
ID_DISCOUNT15,
ID_ISBIND15,
ID_PID16,
ID_NUMPERGROUP16,
ID_MONEYTYPE16,
ID_MONEYSUBTYPE16,
ID_PRICE16,
ID_DISCOUNT16,
ID_ISBIND16,
ID_PID17,
ID_NUMPERGROUP17,
ID_MONEYTYPE17,
ID_MONEYSUBTYPE17,
ID_PRICE17,
ID_DISCOUNT17,
ID_ISBIND17,
ID_PID18,
ID_NUMPERGROUP18,
ID_MONEYTYPE18,
ID_MONEYSUBTYPE18,
ID_PRICE18,
ID_DISCOUNT18,
ID_ISBIND18,
ID_PID19,
ID_NUMPERGROUP19,
ID_MONEYTYPE19,
ID_MONEYSUBTYPE19,
ID_PRICE19,
ID_DISCOUNT19,
ID_ISBIND19,
ID_PID20,
ID_NUMPERGROUP20,
ID_MONEYTYPE20,
ID_MONEYSUBTYPE20,
ID_PRICE20,
ID_DISCOUNT20,
ID_ISBIND20,
ID_PID21,
ID_NUMPERGROUP21,
ID_MONEYTYPE21,
ID_MONEYSUBTYPE21,
ID_PRICE21,
ID_DISCOUNT21,
ID_ISBIND21,
ID_PID22,
ID_NUMPERGROUP22,
ID_MONEYTYPE22,
ID_MONEYSUBTYPE22,
ID_PRICE22,
ID_DISCOUNT22,
ID_ISBIND22,
ID_PID23,
ID_NUMPERGROUP23,
ID_MONEYTYPE23,
ID_MONEYSUBTYPE23,
ID_PRICE23,
ID_DISCOUNT23,
ID_ISBIND23,
ID_PID24,
ID_NUMPERGROUP24,
ID_MONEYTYPE24,
ID_MONEYSUBTYPE24,
ID_PRICE24,
ID_DISCOUNT24,
ID_ISBIND24,
ID_PID25,
ID_NUMPERGROUP25,
ID_MONEYTYPE25,
ID_MONEYSUBTYPE25,
ID_PRICE25,
ID_DISCOUNT25,
ID_ISBIND25,
ID_PID26,
ID_NUMPERGROUP26,
ID_MONEYTYPE26,
ID_MONEYSUBTYPE26,
ID_PRICE26,
ID_DISCOUNT26,
ID_ISBIND26,
ID_PID27,
ID_NUMPERGROUP27,
ID_MONEYTYPE27,
ID_MONEYSUBTYPE27,
ID_PRICE27,
ID_DISCOUNT27,
ID_ISBIND27,
ID_PID28,
ID_NUMPERGROUP28,
ID_MONEYTYPE28,
ID_MONEYSUBTYPE28,
ID_PRICE28,
ID_DISCOUNT28,
ID_ISBIND28,
ID_PID29,
ID_NUMPERGROUP29,
ID_MONEYTYPE29,
ID_MONEYSUBTYPE29,
ID_PRICE29,
ID_DISCOUNT29,
ID_ISBIND29,
ID_PID30,
ID_NUMPERGROUP30,
ID_MONEYTYPE30,
ID_MONEYSUBTYPE30,
ID_PRICE30,
ID_DISCOUNT30,
ID_ISBIND30,
ID_PID31,
ID_NUMPERGROUP31,
ID_MONEYTYPE31,
ID_MONEYSUBTYPE31,
ID_PRICE31,
ID_DISCOUNT31,
ID_ISBIND31,
ID_PID32,
ID_NUMPERGROUP32,
ID_MONEYTYPE32,
ID_MONEYSUBTYPE32,
ID_PRICE32,
ID_DISCOUNT32,
ID_ISBIND32,
ID_PID33,
ID_NUMPERGROUP33,
ID_MONEYTYPE33,
ID_MONEYSUBTYPE33,
ID_PRICE33,
ID_DISCOUNT33,
ID_ISBIND33,
ID_PID34,
ID_NUMPERGROUP34,
ID_MONEYTYPE34,
ID_MONEYSUBTYPE34,
ID_PRICE34,
ID_DISCOUNT34,
ID_ISBIND34,
ID_PID35,
ID_NUMPERGROUP35,
ID_MONEYTYPE35,
ID_MONEYSUBTYPE35,
ID_PRICE35,
ID_DISCOUNT35,
ID_ISBIND35,
ID_PID36,
ID_NUMPERGROUP36,
ID_MONEYTYPE36,
ID_MONEYSUBTYPE36,
ID_PRICE36,
ID_DISCOUNT36,
ID_ISBIND36,
ID_PID37,
ID_NUMPERGROUP37,
ID_MONEYTYPE37,
ID_MONEYSUBTYPE37,
ID_PRICE37,
ID_DISCOUNT37,
ID_ISBIND37,
ID_PID38,
ID_NUMPERGROUP38,
ID_MONEYTYPE38,
ID_MONEYSUBTYPE38,
ID_PRICE38,
ID_DISCOUNT38,
ID_ISBIND38,
ID_PID39,
ID_NUMPERGROUP39,
ID_MONEYTYPE39,
ID_MONEYSUBTYPE39,
ID_PRICE39,
ID_DISCOUNT39,
ID_ISBIND39,
ID_PID40,
ID_NUMPERGROUP40,
ID_MONEYTYPE40,
ID_MONEYSUBTYPE40,
ID_PRICE40,
ID_DISCOUNT40,
ID_ISBIND40,
ID_PID41,
ID_NUMPERGROUP41,
ID_MONEYTYPE41,
ID_MONEYSUBTYPE41,
ID_PRICE41,
ID_DISCOUNT41,
ID_ISBIND41,
ID_PID42,
ID_NUMPERGROUP42,
ID_MONEYTYPE42,
ID_MONEYSUBTYPE42,
ID_PRICE42,
ID_DISCOUNT42,
ID_ISBIND42,
ID_PID43,
ID_NUMPERGROUP43,
ID_MONEYTYPE43,
ID_MONEYSUBTYPE43,
ID_PRICE43,
ID_DISCOUNT43,
ID_ISBIND43,
ID_PID44,
ID_NUMPERGROUP44,
ID_MONEYTYPE44,
ID_MONEYSUBTYPE44,
ID_PRICE44,
ID_DISCOUNT44,
ID_ISBIND44,
ID_PID45,
ID_NUMPERGROUP45,
ID_MONEYTYPE45,
ID_MONEYSUBTYPE45,
ID_PRICE45,
ID_DISCOUNT45,
ID_ISBIND45,
ID_PID46,
ID_NUMPERGROUP46,
ID_MONEYTYPE46,
ID_MONEYSUBTYPE46,
ID_PRICE46,
ID_DISCOUNT46,
ID_ISBIND46,
ID_PID47,
ID_NUMPERGROUP47,
ID_MONEYTYPE47,
ID_MONEYSUBTYPE47,
ID_PRICE47,
ID_DISCOUNT47,
ID_ISBIND47,
ID_PID48,
ID_NUMPERGROUP48,
ID_MONEYTYPE48,
ID_MONEYSUBTYPE48,
ID_PRICE48,
ID_DISCOUNT48,
ID_ISBIND48,
ID_PID49,
ID_NUMPERGROUP49,
ID_MONEYTYPE49,
ID_MONEYSUBTYPE49,
ID_PRICE49,
ID_DISCOUNT49,
ID_ISBIND49,
ID_PID50,
ID_NUMPERGROUP50,
ID_MONEYTYPE50,
ID_MONEYSUBTYPE50,
ID_PRICE50,
ID_DISCOUNT50,
ID_ISBIND50,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_CanBuyBack;
 public int CanBuyBack { get{ return m_CanBuyBack;}}

private int m_CanBuyMulty;
 public int CanBuyMulty { get{ return m_CanBuyMulty;}}

public int getDiscountCount() { return 50; } 
 private int[] m_Discount = new int[50];
 public int GetDiscountbyIndex(int idx) {
 if(idx>=0 && idx<50) return m_Discount[idx];
 return -1;
 }

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getIsBindCount() { return 50; } 
 private int[] m_IsBind = new int[50];
 public int GetIsBindbyIndex(int idx) {
 if(idx>=0 && idx<50) return m_IsBind[idx];
 return -1;
 }

private int m_IsDynamic;
 public int IsDynamic { get{ return m_IsDynamic;}}

public int getMoneySubTypeCount() { return 50; } 
 private int[] m_MoneySubType = new int[50];
 public int GetMoneySubTypebyIndex(int idx) {
 if(idx>=0 && idx<50) return m_MoneySubType[idx];
 return -1;
 }

public int getMoneyTypeCount() { return 50; } 
 private int[] m_MoneyType = new int[50];
 public int GetMoneyTypebyIndex(int idx) {
 if(idx>=0 && idx<50) return m_MoneyType[idx];
 return -1;
 }

private string m_Name;
 public string Name { get{ return m_Name;}}

public int getNumPerGroupCount() { return 50; } 
 private int[] m_NumPerGroup = new int[50];
 public int GetNumPerGroupbyIndex(int idx) {
 if(idx>=0 && idx<50) return m_NumPerGroup[idx];
 return -1;
 }

public int getPidCount() { return 50; } 
 private int[] m_Pid = new int[50];
 public int GetPidbyIndex(int idx) {
 if(idx>=0 && idx<50) return m_Pid[idx];
 return -1;
 }

private int m_Pnum;
 public int Pnum { get{ return m_Pnum;}}

public int getPriceCount() { return 50; } 
 private int[] m_Price = new int[50];
 public int GetPricebyIndex(int idx) {
 if(idx>=0 && idx<50) return m_Price[idx];
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
 Tab_SystemShop _values = new Tab_SystemShop();
 _values.m_CanBuyBack =  Convert.ToInt32(valuesList[(int)_ID.ID_CANBUYBACK] as string);
_values.m_CanBuyMulty =  Convert.ToInt32(valuesList[(int)_ID.ID_CANBUYMULTY] as string);
_values.m_Discount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT1] as string);
_values.m_Discount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT2] as string);
_values.m_Discount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT3] as string);
_values.m_Discount [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT4] as string);
_values.m_Discount [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT5] as string);
_values.m_Discount [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT6] as string);
_values.m_Discount [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT7] as string);
_values.m_Discount [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT8] as string);
_values.m_Discount [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT9] as string);
_values.m_Discount [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT10] as string);
_values.m_Discount [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT11] as string);
_values.m_Discount [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT12] as string);
_values.m_Discount [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT13] as string);
_values.m_Discount [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT14] as string);
_values.m_Discount [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT15] as string);
_values.m_Discount [ 15 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT16] as string);
_values.m_Discount [ 16 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT17] as string);
_values.m_Discount [ 17 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT18] as string);
_values.m_Discount [ 18 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT19] as string);
_values.m_Discount [ 19 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT20] as string);
_values.m_Discount [ 20 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT21] as string);
_values.m_Discount [ 21 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT22] as string);
_values.m_Discount [ 22 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT23] as string);
_values.m_Discount [ 23 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT24] as string);
_values.m_Discount [ 24 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT25] as string);
_values.m_Discount [ 25 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT26] as string);
_values.m_Discount [ 26 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT27] as string);
_values.m_Discount [ 27 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT28] as string);
_values.m_Discount [ 28 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT29] as string);
_values.m_Discount [ 29 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT30] as string);
_values.m_Discount [ 30 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT31] as string);
_values.m_Discount [ 31 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT32] as string);
_values.m_Discount [ 32 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT33] as string);
_values.m_Discount [ 33 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT34] as string);
_values.m_Discount [ 34 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT35] as string);
_values.m_Discount [ 35 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT36] as string);
_values.m_Discount [ 36 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT37] as string);
_values.m_Discount [ 37 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT38] as string);
_values.m_Discount [ 38 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT39] as string);
_values.m_Discount [ 39 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT40] as string);
_values.m_Discount [ 40 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT41] as string);
_values.m_Discount [ 41 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT42] as string);
_values.m_Discount [ 42 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT43] as string);
_values.m_Discount [ 43 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT44] as string);
_values.m_Discount [ 44 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT45] as string);
_values.m_Discount [ 45 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT46] as string);
_values.m_Discount [ 46 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT47] as string);
_values.m_Discount [ 47 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT48] as string);
_values.m_Discount [ 48 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT49] as string);
_values.m_Discount [ 49 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_DISCOUNT50] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsBind [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND1] as string);
_values.m_IsBind [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND2] as string);
_values.m_IsBind [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND3] as string);
_values.m_IsBind [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND4] as string);
_values.m_IsBind [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND5] as string);
_values.m_IsBind [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND6] as string);
_values.m_IsBind [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND7] as string);
_values.m_IsBind [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND8] as string);
_values.m_IsBind [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND9] as string);
_values.m_IsBind [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND10] as string);
_values.m_IsBind [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND11] as string);
_values.m_IsBind [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND12] as string);
_values.m_IsBind [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND13] as string);
_values.m_IsBind [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND14] as string);
_values.m_IsBind [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND15] as string);
_values.m_IsBind [ 15 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND16] as string);
_values.m_IsBind [ 16 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND17] as string);
_values.m_IsBind [ 17 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND18] as string);
_values.m_IsBind [ 18 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND19] as string);
_values.m_IsBind [ 19 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND20] as string);
_values.m_IsBind [ 20 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND21] as string);
_values.m_IsBind [ 21 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND22] as string);
_values.m_IsBind [ 22 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND23] as string);
_values.m_IsBind [ 23 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND24] as string);
_values.m_IsBind [ 24 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND25] as string);
_values.m_IsBind [ 25 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND26] as string);
_values.m_IsBind [ 26 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND27] as string);
_values.m_IsBind [ 27 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND28] as string);
_values.m_IsBind [ 28 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND29] as string);
_values.m_IsBind [ 29 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND30] as string);
_values.m_IsBind [ 30 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND31] as string);
_values.m_IsBind [ 31 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND32] as string);
_values.m_IsBind [ 32 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND33] as string);
_values.m_IsBind [ 33 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND34] as string);
_values.m_IsBind [ 34 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND35] as string);
_values.m_IsBind [ 35 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND36] as string);
_values.m_IsBind [ 36 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND37] as string);
_values.m_IsBind [ 37 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND38] as string);
_values.m_IsBind [ 38 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND39] as string);
_values.m_IsBind [ 39 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND40] as string);
_values.m_IsBind [ 40 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND41] as string);
_values.m_IsBind [ 41 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND42] as string);
_values.m_IsBind [ 42 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND43] as string);
_values.m_IsBind [ 43 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND44] as string);
_values.m_IsBind [ 44 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND45] as string);
_values.m_IsBind [ 45 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND46] as string);
_values.m_IsBind [ 46 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND47] as string);
_values.m_IsBind [ 47 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND48] as string);
_values.m_IsBind [ 48 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND49] as string);
_values.m_IsBind [ 49 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBIND50] as string);
_values.m_IsDynamic =  Convert.ToInt32(valuesList[(int)_ID.ID_ISDYNAMIC] as string);
_values.m_MoneySubType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE1] as string);
_values.m_MoneySubType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE2] as string);
_values.m_MoneySubType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE3] as string);
_values.m_MoneySubType [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE4] as string);
_values.m_MoneySubType [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE5] as string);
_values.m_MoneySubType [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE6] as string);
_values.m_MoneySubType [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE7] as string);
_values.m_MoneySubType [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE8] as string);
_values.m_MoneySubType [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE9] as string);
_values.m_MoneySubType [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE10] as string);
_values.m_MoneySubType [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE11] as string);
_values.m_MoneySubType [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE12] as string);
_values.m_MoneySubType [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE13] as string);
_values.m_MoneySubType [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE14] as string);
_values.m_MoneySubType [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE15] as string);
_values.m_MoneySubType [ 15 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE16] as string);
_values.m_MoneySubType [ 16 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE17] as string);
_values.m_MoneySubType [ 17 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE18] as string);
_values.m_MoneySubType [ 18 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE19] as string);
_values.m_MoneySubType [ 19 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE20] as string);
_values.m_MoneySubType [ 20 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE21] as string);
_values.m_MoneySubType [ 21 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE22] as string);
_values.m_MoneySubType [ 22 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE23] as string);
_values.m_MoneySubType [ 23 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE24] as string);
_values.m_MoneySubType [ 24 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE25] as string);
_values.m_MoneySubType [ 25 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE26] as string);
_values.m_MoneySubType [ 26 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE27] as string);
_values.m_MoneySubType [ 27 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE28] as string);
_values.m_MoneySubType [ 28 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE29] as string);
_values.m_MoneySubType [ 29 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE30] as string);
_values.m_MoneySubType [ 30 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE31] as string);
_values.m_MoneySubType [ 31 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE32] as string);
_values.m_MoneySubType [ 32 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE33] as string);
_values.m_MoneySubType [ 33 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE34] as string);
_values.m_MoneySubType [ 34 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE35] as string);
_values.m_MoneySubType [ 35 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE36] as string);
_values.m_MoneySubType [ 36 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE37] as string);
_values.m_MoneySubType [ 37 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE38] as string);
_values.m_MoneySubType [ 38 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE39] as string);
_values.m_MoneySubType [ 39 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE40] as string);
_values.m_MoneySubType [ 40 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE41] as string);
_values.m_MoneySubType [ 41 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE42] as string);
_values.m_MoneySubType [ 42 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE43] as string);
_values.m_MoneySubType [ 43 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE44] as string);
_values.m_MoneySubType [ 44 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE45] as string);
_values.m_MoneySubType [ 45 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE46] as string);
_values.m_MoneySubType [ 46 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE47] as string);
_values.m_MoneySubType [ 47 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE48] as string);
_values.m_MoneySubType [ 48 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE49] as string);
_values.m_MoneySubType [ 49 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYSUBTYPE50] as string);
_values.m_MoneyType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE1] as string);
_values.m_MoneyType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE2] as string);
_values.m_MoneyType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE3] as string);
_values.m_MoneyType [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE4] as string);
_values.m_MoneyType [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE5] as string);
_values.m_MoneyType [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE6] as string);
_values.m_MoneyType [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE7] as string);
_values.m_MoneyType [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE8] as string);
_values.m_MoneyType [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE9] as string);
_values.m_MoneyType [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE10] as string);
_values.m_MoneyType [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE11] as string);
_values.m_MoneyType [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE12] as string);
_values.m_MoneyType [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE13] as string);
_values.m_MoneyType [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE14] as string);
_values.m_MoneyType [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE15] as string);
_values.m_MoneyType [ 15 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE16] as string);
_values.m_MoneyType [ 16 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE17] as string);
_values.m_MoneyType [ 17 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE18] as string);
_values.m_MoneyType [ 18 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE19] as string);
_values.m_MoneyType [ 19 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE20] as string);
_values.m_MoneyType [ 20 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE21] as string);
_values.m_MoneyType [ 21 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE22] as string);
_values.m_MoneyType [ 22 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE23] as string);
_values.m_MoneyType [ 23 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE24] as string);
_values.m_MoneyType [ 24 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE25] as string);
_values.m_MoneyType [ 25 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE26] as string);
_values.m_MoneyType [ 26 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE27] as string);
_values.m_MoneyType [ 27 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE28] as string);
_values.m_MoneyType [ 28 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE29] as string);
_values.m_MoneyType [ 29 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE30] as string);
_values.m_MoneyType [ 30 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE31] as string);
_values.m_MoneyType [ 31 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE32] as string);
_values.m_MoneyType [ 32 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE33] as string);
_values.m_MoneyType [ 33 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE34] as string);
_values.m_MoneyType [ 34 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE35] as string);
_values.m_MoneyType [ 35 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE36] as string);
_values.m_MoneyType [ 36 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE37] as string);
_values.m_MoneyType [ 37 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE38] as string);
_values.m_MoneyType [ 38 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE39] as string);
_values.m_MoneyType [ 39 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE40] as string);
_values.m_MoneyType [ 40 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE41] as string);
_values.m_MoneyType [ 41 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE42] as string);
_values.m_MoneyType [ 42 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE43] as string);
_values.m_MoneyType [ 43 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE44] as string);
_values.m_MoneyType [ 44 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE45] as string);
_values.m_MoneyType [ 45 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE46] as string);
_values.m_MoneyType [ 46 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE47] as string);
_values.m_MoneyType [ 47 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE48] as string);
_values.m_MoneyType [ 48 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE49] as string);
_values.m_MoneyType [ 49 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEYTYPE50] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_NumPerGroup [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP1] as string);
_values.m_NumPerGroup [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP2] as string);
_values.m_NumPerGroup [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP3] as string);
_values.m_NumPerGroup [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP4] as string);
_values.m_NumPerGroup [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP5] as string);
_values.m_NumPerGroup [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP6] as string);
_values.m_NumPerGroup [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP7] as string);
_values.m_NumPerGroup [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP8] as string);
_values.m_NumPerGroup [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP9] as string);
_values.m_NumPerGroup [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP10] as string);
_values.m_NumPerGroup [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP11] as string);
_values.m_NumPerGroup [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP12] as string);
_values.m_NumPerGroup [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP13] as string);
_values.m_NumPerGroup [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP14] as string);
_values.m_NumPerGroup [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP15] as string);
_values.m_NumPerGroup [ 15 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP16] as string);
_values.m_NumPerGroup [ 16 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP17] as string);
_values.m_NumPerGroup [ 17 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP18] as string);
_values.m_NumPerGroup [ 18 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP19] as string);
_values.m_NumPerGroup [ 19 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP20] as string);
_values.m_NumPerGroup [ 20 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP21] as string);
_values.m_NumPerGroup [ 21 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP22] as string);
_values.m_NumPerGroup [ 22 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP23] as string);
_values.m_NumPerGroup [ 23 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP24] as string);
_values.m_NumPerGroup [ 24 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP25] as string);
_values.m_NumPerGroup [ 25 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP26] as string);
_values.m_NumPerGroup [ 26 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP27] as string);
_values.m_NumPerGroup [ 27 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP28] as string);
_values.m_NumPerGroup [ 28 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP29] as string);
_values.m_NumPerGroup [ 29 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP30] as string);
_values.m_NumPerGroup [ 30 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP31] as string);
_values.m_NumPerGroup [ 31 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP32] as string);
_values.m_NumPerGroup [ 32 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP33] as string);
_values.m_NumPerGroup [ 33 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP34] as string);
_values.m_NumPerGroup [ 34 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP35] as string);
_values.m_NumPerGroup [ 35 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP36] as string);
_values.m_NumPerGroup [ 36 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP37] as string);
_values.m_NumPerGroup [ 37 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP38] as string);
_values.m_NumPerGroup [ 38 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP39] as string);
_values.m_NumPerGroup [ 39 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP40] as string);
_values.m_NumPerGroup [ 40 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP41] as string);
_values.m_NumPerGroup [ 41 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP42] as string);
_values.m_NumPerGroup [ 42 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP43] as string);
_values.m_NumPerGroup [ 43 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP44] as string);
_values.m_NumPerGroup [ 44 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP45] as string);
_values.m_NumPerGroup [ 45 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP46] as string);
_values.m_NumPerGroup [ 46 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP47] as string);
_values.m_NumPerGroup [ 47 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP48] as string);
_values.m_NumPerGroup [ 48 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP49] as string);
_values.m_NumPerGroup [ 49 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_NUMPERGROUP50] as string);
_values.m_Pid [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID1] as string);
_values.m_Pid [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID2] as string);
_values.m_Pid [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID3] as string);
_values.m_Pid [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID4] as string);
_values.m_Pid [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID5] as string);
_values.m_Pid [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID6] as string);
_values.m_Pid [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID7] as string);
_values.m_Pid [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID8] as string);
_values.m_Pid [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID9] as string);
_values.m_Pid [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID10] as string);
_values.m_Pid [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID11] as string);
_values.m_Pid [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID12] as string);
_values.m_Pid [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID13] as string);
_values.m_Pid [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID14] as string);
_values.m_Pid [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID15] as string);
_values.m_Pid [ 15 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID16] as string);
_values.m_Pid [ 16 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID17] as string);
_values.m_Pid [ 17 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID18] as string);
_values.m_Pid [ 18 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID19] as string);
_values.m_Pid [ 19 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID20] as string);
_values.m_Pid [ 20 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID21] as string);
_values.m_Pid [ 21 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID22] as string);
_values.m_Pid [ 22 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID23] as string);
_values.m_Pid [ 23 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID24] as string);
_values.m_Pid [ 24 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID25] as string);
_values.m_Pid [ 25 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID26] as string);
_values.m_Pid [ 26 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID27] as string);
_values.m_Pid [ 27 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID28] as string);
_values.m_Pid [ 28 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID29] as string);
_values.m_Pid [ 29 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID30] as string);
_values.m_Pid [ 30 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID31] as string);
_values.m_Pid [ 31 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID32] as string);
_values.m_Pid [ 32 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID33] as string);
_values.m_Pid [ 33 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID34] as string);
_values.m_Pid [ 34 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID35] as string);
_values.m_Pid [ 35 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID36] as string);
_values.m_Pid [ 36 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID37] as string);
_values.m_Pid [ 37 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID38] as string);
_values.m_Pid [ 38 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID39] as string);
_values.m_Pid [ 39 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID40] as string);
_values.m_Pid [ 40 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID41] as string);
_values.m_Pid [ 41 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID42] as string);
_values.m_Pid [ 42 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID43] as string);
_values.m_Pid [ 43 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID44] as string);
_values.m_Pid [ 44 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID45] as string);
_values.m_Pid [ 45 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID46] as string);
_values.m_Pid [ 46 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID47] as string);
_values.m_Pid [ 47 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID48] as string);
_values.m_Pid [ 48 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID49] as string);
_values.m_Pid [ 49 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PID50] as string);
_values.m_Pnum =  Convert.ToInt32(valuesList[(int)_ID.ID_PNUM] as string);
_values.m_Price [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE1] as string);
_values.m_Price [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE2] as string);
_values.m_Price [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE3] as string);
_values.m_Price [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE4] as string);
_values.m_Price [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE5] as string);
_values.m_Price [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE6] as string);
_values.m_Price [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE7] as string);
_values.m_Price [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE8] as string);
_values.m_Price [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE9] as string);
_values.m_Price [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE10] as string);
_values.m_Price [ 10 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE11] as string);
_values.m_Price [ 11 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE12] as string);
_values.m_Price [ 12 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE13] as string);
_values.m_Price [ 13 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE14] as string);
_values.m_Price [ 14 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE15] as string);
_values.m_Price [ 15 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE16] as string);
_values.m_Price [ 16 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE17] as string);
_values.m_Price [ 17 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE18] as string);
_values.m_Price [ 18 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE19] as string);
_values.m_Price [ 19 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE20] as string);
_values.m_Price [ 20 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE21] as string);
_values.m_Price [ 21 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE22] as string);
_values.m_Price [ 22 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE23] as string);
_values.m_Price [ 23 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE24] as string);
_values.m_Price [ 24 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE25] as string);
_values.m_Price [ 25 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE26] as string);
_values.m_Price [ 26 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE27] as string);
_values.m_Price [ 27 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE28] as string);
_values.m_Price [ 28 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE29] as string);
_values.m_Price [ 29 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE30] as string);
_values.m_Price [ 30 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE31] as string);
_values.m_Price [ 31 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE32] as string);
_values.m_Price [ 32 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE33] as string);
_values.m_Price [ 33 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE34] as string);
_values.m_Price [ 34 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE35] as string);
_values.m_Price [ 35 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE36] as string);
_values.m_Price [ 36 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE37] as string);
_values.m_Price [ 37 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE38] as string);
_values.m_Price [ 38 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE39] as string);
_values.m_Price [ 39 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE40] as string);
_values.m_Price [ 40 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE41] as string);
_values.m_Price [ 41 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE42] as string);
_values.m_Price [ 42 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE43] as string);
_values.m_Price [ 43 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE44] as string);
_values.m_Price [ 44 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE45] as string);
_values.m_Price [ 45 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE46] as string);
_values.m_Price [ 46 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE47] as string);
_values.m_Price [ 47 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE48] as string);
_values.m_Price [ 48 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE49] as string);
_values.m_Price [ 49 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE50] as string);

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

