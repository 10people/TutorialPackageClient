//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using System.Collections;
using UnityEngine;

/// <summary>
/// An entry which makes a decision and then performs one or another entry.
/// </summary>
[Serializable]
[UTDoc(title="MyDecision", description="Allows androidBase of the automation plan based on a decision.")]
public class UTMyAutomationPlanDecisionEntry : UTAutomationPlanEntry
{
	[UTDoc(description="The entry to perform if the decision yields 'true'.")]
	[HideInInspector]
	[UTConnectorHint(connectorLocation=UTConnectorHint.ConnectorLocation.Bottom)]
	public UTAutomationPlanEntry entryIfTrue;
	
	[UTDoc(description="The entry to perform if the decision yields 'false'.")]
	[HideInInspector]
	[UTConnectorHint(connectorLocation=UTConnectorHint.ConnectorLocation.Bottom)]
	public UTAutomationPlanEntry entryIfFalse;
	
	private UTAutomationPlanEntry result;
	
	public override string Label {
		get {
			return "Decision";
		}
	}
	
	public override object Me {
		get {
			return null;
		}
	}
	
	public override IEnumerator Execute(UTContext context) {
		string res = context ["androidBase"].ToString();
		
		if (res.Equals("True")) {
			if(UTPreferences.DebugMode) {
				Debug.Log("Decision yielded true", this);
			}
			result = entryIfTrue;
		}
		else {
			if (UTPreferences.DebugMode) {
				Debug.Log("Decision yielded false", this);
			}
			result = entryIfFalse;
		}
		yield return "";
	}
	
	public override UTAutomationPlanEntry NextEntry {
		get {
			return result;
		}
	}
}

