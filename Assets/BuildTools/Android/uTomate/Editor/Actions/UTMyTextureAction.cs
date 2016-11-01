using UnityEngine;
using System.Collections;
using UnityEditor;

public class UTMyTextureAction : UTAction {
	public override IEnumerator Execute (UTContext context)
	{
		string  finalout = context["MyTextureAction"] as string;
		Debug.Log ("finalout = "+finalout);
		LowTexture.doLowTextrue(finalout);
		//BuildAssetProcess.DoAndroidLowTextrue ();
		yield return "";
	}

	[MenuItem("Assets/Create/uTomate/UTMyTextureAction", false, 200)]
	public static void AddAction() {
		Create<UTMyTextureAction>();
	}
}
