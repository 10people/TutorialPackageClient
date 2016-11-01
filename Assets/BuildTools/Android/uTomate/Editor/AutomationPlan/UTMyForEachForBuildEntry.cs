//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
[UTDoc(title = "My For Each", description = "Executes a set of actions for each item in the list of items.")]
public class UTMyForEachForBuildEntry : UTAutomationPlanEntryBase
{
      
    [UTDoc(description = "The sub-tree that should be executed.")]
    [HideInInspector]
    public UTAutomationPlanEntry startOfSubtree;
    /*
    [UTDoc(description = "Name of the property which holds the list of items to iterate over.")]
    [UTInspectorHint(order = 0, required = true)]
    public UTString itemsPropertyName;

    [UTDoc(description = "Name of the property which holds the current item.")]
    [UTInspectorHint(order = 1, required = true)]
    public UTString itemPropertyName;
    */
    public override string Label
    {
        get
        {
            return "My For Each For Build";

        }
    }

    public override IEnumerator Execute(UTContext context)
    {
        
        if (startOfSubtree == null)
        {
            Debug.LogError("No subtree specified.");
            yield break;
        }

        Dictionary<string, bool> SDK_Channel = context["SDK_Channel"] as Dictionary<string, bool>;

        Debug.Log("For Each: Items == " + SDK_Channel);

        var i = 0;

        if (SDK_Channel is IEnumerable)
        {
            foreach (string channelID in (IEnumerable)SDK_Channel.Keys)
            {
                i++;
                Debug.Log("For Each: i == " + i + "  channelID==" + channelID);
                Debug.Log("For Each: is Build " + channelID + "?? " + SDK_Channel[channelID]);
                if (SDK_Channel[channelID])
                {
                    context["channelID_forBuild"] = channelID;
                    Debug.Log("ExecutePath next step");
                    var enumerator = UTAutomationPlan.ExecutePath(startOfSubtree, context);
                    do
                    {
                        yield return "";
                    }
                    while (enumerator.MoveNext());
                }
            }
        }
    }

}

