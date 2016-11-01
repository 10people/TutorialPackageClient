using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

using UnityEngine; 
using System.Collections; 
using System.Runtime.InteropServices;  
public class TessarSDK4iOS : MonoBehaviour{


		[DllImport ("__Internal")]
	private static extern void _Init(string proj, string channel, string version);
	[DllImport ("__Internal")]private static extern void _Initproj(string proj, string channel, string version, string reportpolicy, bool isdebug);
	[DllImport ("__Internal")] private static extern void onLogInfo(string userName, string role,uint level, uint coin,string gamestate);
	[DllImport ("__Internal")] private static extern void onNewMission(uint level, uint coin, string costtime);
	[DllImport ("__Internal")] private static extern void onMission(string mission,uint level,uint coin);
	[DllImport ("__Internal")] private static extern void pay(double money, uint coin, uint source);
	[DllImport ("__Internal")] private static extern void buy(string item, uint number, double price);
	[DllImport ("__Internal")] private static extern void bonus(double coin, uint trigger_t);
	[DllImport ("__Internal")] private static extern void bonusextra(string item, uint num_t,double price_t,uint trigger_t);
	[DllImport ("__Internal")] private static extern void onKeyValue( uint value, int keyType,int trigger);
	[DllImport ("__Internal")] private static extern void recordusingsendbyte(uint bytesize);
	[DllImport ("__Internal")] private static extern void sendusingrecivebyte(uint bytesize);
	[DllImport ("__Internal")] private static extern void reportErrorFile(string logfilename);
	[DllImport ("__Internal")] private static extern void exceptionExtra(string crashName, string crashReson,string creashStack);

	[DllImport ("__Internal")] private static extern void startUIClick(string UIevent);
	[DllImport ("__Internal")] private static extern void doUIClick(int x,int y);
	[DllImport ("__Internal")] private static extern void finishUIclick(string UIevent);

	[DllImport ("__Internal")] private static extern void registerException(string errorMsg);
	[DllImport ("__Internal")] private static extern int getNetstatus();
	[DllImport ("__Internal")] private static extern int getDeviceFreeMemory();
	[DllImport ("__Internal")] private static extern int getDeviceTotalMemory();
	[DllImport ("__Internal")] private static extern void controlScreenState(bool scrstate);
	[DllImport ("__Internal")] private static extern void setSendInfoInterval (double second);
	[DllImport ("__Internal")] private static extern string getDeviceUUID();
//	[DllImport ("__Internal")] private static extern void catchScreenshot ();
	[DllImport ("__Internal")]private static extern void SavePhoto(string readAddr);

//	[DllImport ("__Internal")] private static extern void catchScreenshot(void* imagedata, uint imagelen);
//
//	public static void CatchScreenShot(void* imagedata, uint imagelen)
//	{
//		if (Application.platform != RuntimePlatform.OSXEditor) {
//			
//			catchScreenshot(imagedata, imagelen);
//		}
//	}
	public static void CatchScreenshot()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			
		
			var cptrAddr = "testpic"; //捕捉地址
			var readAddr = Application.persistentDataPath + "/" + cptrAddr;//读取地址，这两个地址在iOS里不一样
			Application.CaptureScreenshot(cptrAddr);
			//var readAddr1 = Application.persistentDataPath + "/" + _cptrAddr;
			SavePhoto (readAddr);
		}
	}

	public static void CSavePhoto(string readAddr)
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {

			SavePhoto (readAddr);
		}
	}

//	public static void CatchScreenShot()
//	{
//		if (Application.platform != RuntimePlatform.OSXEditor) {
//			
//			catchScreenshot ();
//		}
//	}
	public static string GetDeviceUUID()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			
			return getDeviceUUID();
		}
		else
		{
			return "";
		}
	}
	public static int GetDeviceFreeMemory()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			
			return getDeviceFreeMemory ();
		} else 
		{
			return -1;
		}
	}
	public static int GetDeviceTotalMemory()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			
			return getDeviceTotalMemory ();
		} else 
		{
			return -1;
		}
	}
	public static void ControlScreenState(bool scrstate)
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {

			controlScreenState (scrstate);
		}
	}
	public static int GetNetStatus()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			
			return getNetstatus ();
		} else 
		{
			return -1;
		}
	}

	public static void SetSendInfoInterval(double second)
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			
			setSendInfoInterval (second);
		} 
		
	}
	public static void UregisterException(string errorMsg)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			registerException(errorMsg);
		}
	}


	public static void Init(string proj, string channel, string version)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			_Init(proj, channel, version);
		}
	}
	public static void Initproj(string proj, string channel, string version, string reportpolicy,bool isdebug)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			_Initproj(proj, channel, version,reportpolicy,isdebug);
		}
	}
	public static void OnlogInfo(string userName, string role, uint level, uint coin, string gamestate)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			onLogInfo(userName, role, level,  coin,  gamestate);
		}
	}
	public static void OnNewMission(uint level, uint coin, string costtime)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			onNewMission(level, coin, costtime);
		}
	}
	public static void OnMission(string mission, uint level, uint coin)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			onMission(mission,level,coin);
		}
	}
	public static void OnPay(double money, uint coin, uint source)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			pay(money,coin,source);
		}
	}
	public static void Onbuy(string item, uint number, double price)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			buy(item, number, price);
		}
	}
	public static void Onbonus(string item, uint number, double price, uint trigger)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			bonusextra(item,number,price,trigger);
		}
	}
	public static void Onbonus(double coin, uint trigger)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			bonus(coin, trigger);
		}
	}
	public static void OnKeyValue( uint value, int keyType,int trigger)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			onKeyValue( value, keyType,trigger);
		}
	}
	public static void Onusingsendbyte(uint bytesize)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			recordusingsendbyte(bytesize);
		}
	}

	public static void Onusingrecivebyte(uint bytesize)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			sendusingrecivebyte(bytesize);
		}
	}
	public static void OnReportErrorFile(string logfilename)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			reportErrorFile(logfilename);
		}
	}
	public static void OnexceptionExtra(string crashName, string crashReson,string creashStack)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			exceptionExtra(crashName, crashReson,creashStack);
		}
	}
	public static void OnstartUIClick(string UIevent)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			startUIClick(UIevent);
		}
	}
	public static void OnfinishUIclick(string UIevent)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			finishUIclick(UIevent);
		}
	}
	public static void OndoUIClick(int x,int y)
	{
		if (Application.platform != RuntimePlatform.OSXEditor)
		{
			doUIClick(x,y);
		}
	}


}
