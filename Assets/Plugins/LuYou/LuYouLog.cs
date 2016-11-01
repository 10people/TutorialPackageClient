using UnityEngine;
public class LuYouLog: MonoBehaviour
{
	public static void v(string msg){
		Debug.Log (msg);
	}
	public static void d(string msg){
		Debug.Log ("debug " + msg);
	}	
	public static void e(string msg){
		Debug.LogError (msg);
	}	
	public static void i(string msg){
		Debug.Log ("info " + msg);
	}
	public static void w(string msg){
		Debug.LogWarning (msg);
	}
}


