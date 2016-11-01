//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using System.Collections;
using UnityEngine;
using System.Collections.Generic;
using UnityEditor;
using System.IO;

[Serializable]
[UTDoc(title=" My For Each", description="Executes a set of actions for each item in the list of items.")]
public class MyUTAutomationPlanForEachEntry : UTAutomationPlanEntryBase
{
	[UTDoc(description="The sub-tree that should be executed.")]
	[HideInInspector]
	public UTAutomationPlanEntry startOfSubtree;
	
	[UTDoc(description="Name of the property which holds the list of items to iterate over.")]
	[UTInspectorHint(order=0, required=true)]
	public UTString itemsPropertyName;
	
	[UTDoc(description="Name of the property which holds the current item.")]
	[UTInspectorHint(order=1, required=true)]
	public UTString itemPropertyName;
	
	public override string Label {
		get {
			return " My For Each";
		}
	}
	
	public override IEnumerator Execute (UTContext context)
	{
		
		/*if (startOfSubtree == null) {
			Debug.LogWarning("No subtree specified.");
			yield break;
		}
		
		var theItemsPropertyName = itemsPropertyName.EvaluateIn(context);
		
		var items = context[theItemsPropertyName];
		
		var theItemPropertyName = itemPropertyName.EvaluateIn(context);
		
		if ( items is IEnumerable ) {
			foreach(var item in (IEnumerable)items) {
				context[theItemPropertyName] = item;
				var enumerator = UTAutomationPlan.ExecutePath(startOfSubtree, context);
				Debug.Log("222");
				do {
					yield return "";
				}
				while (enumerator.MoveNext());
			}
		}*/
		Dictionary<string,bool> SDK_Channel = new Dictionary<string,bool> ();
		
		SDK_Channel = context["Dictionary"] as Dictionary<string,bool>;
		
		foreach(var item in SDK_Channel.Keys){
			Debug.Log("foreach :"+item.ToString());
			
			string ss = SDK_Channel[item].ToString();
			if(ss.Equals("True")){
				var enumerator = UTAutomationPlan.ExecutePath(startOfSubtree, context);
				Debug.Log("foreach true:"+ss);
				do {
					yield return "";
				}
				while (enumerator.MoveNext());
			}
		}
		/*Debug.Log("000"+SDK_Channel["Android_91"]);
		//UTBool  android91 = context ["Android_91"] as UTBool;
		string s = context ["Android_91"].ToString();
		Debug.Log("111"+s);
		if(s.Equals("True")){
			Debug.Log("222");
		}
		yield return "";*/
	}
	
}

