using UnityEngine;
using UnityEditor;
using System.Collections;
using System.IO;
using System.Collections.Generic;


[UTDoc(title="Set Android Channels", description="Sets the Channels for Android builds.")]
[UTInspectorGroups(groups=new string[]{"SDK Channels", "CPS Channels"})]
[UTRequiresAndroid]
public class UTMyChooseChannel : UTAction
{
	[UTDoc(description="Should setHighRes for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=0)]
	public UTBool setHighRes;
	
	[UTDoc(description="Should build all channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=0)]
	public UTBool Build_All_SDK_Channel;
	
	[UTDoc(description="Should build Android_91 channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=1)]
	public UTBool Android_91;

	
	[UTDoc(description="Should build Android_360 channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=2)]
	public UTBool Android_360;
	
	[UTDoc(description="Should build Android_uc channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=3)]
	public UTBool Android_uc;
	
	[UTDoc(description="Should build Android_xiaomi channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=4)]
	public UTBool Android_xiaomi;
	
	[UTDoc(description="Should build Android_wdj channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=5)]
	public UTBool Android_wdj;
	
	[UTDoc(description="Should build Android_oppo channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=6)]
	public UTBool Android_oppo;
	
	[UTDoc(description="Should build Android_hauwei channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=7)]
	public UTBool Android_hauwei;
	
	[UTDoc(description="Should build Android_sogou channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=8)]
	public UTBool Android_sogou;
	
	[UTDoc(description="Should build Android_anzhi channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=9)]
	public UTBool Android_anzhi;
	
	[UTDoc(description="Should build Android_cyou channel for your apk file?")]
	[UTInspectorHint(group="SDK Channels", order=10)]
	public UTBool Android_cyou;
	
	[UTDoc(description="Should build Build_All_SDK_Channel channel for your apk file?")]
	[UTInspectorHint(group="CPS Channels", order=0)]
	public UTBool Build_All_CPS_Channel;
	
	[UTDoc(description="Should build Android_baoruan channel for your apk file?")]
	[UTInspectorHint(group="CPS Channels", order=1)]
	public UTBool Android_baoruan;



	public Dictionary<string,bool> SDK_Channel;
	public override IEnumerator Execute (UTContext context)
	{
		context ["setHighRes"] = setHighRes.EvaluateIn(context);
		Debug.Log("My-uTmote: Build_All_SDK_Channel = "+Build_All_SDK_Channel.EvaluateIn(context));
		if(Build_All_SDK_Channel.EvaluateIn(context)){
			Android_91.Value = true;
			Android_360.Value = true;
			Android_uc.Value = true;
			Android_xiaomi.Value = true;
			Android_wdj.Value = true;
			Android_oppo.Value = true;
			Android_hauwei.Value = true;
			Android_sogou.Value = true;
			Android_anzhi.Value = true;
			Android_cyou.Value = true;	
		}
		
		Debug.Log("My-uTmote: Build_All_CPS_Channel = "+Build_All_CPS_Channel.EvaluateIn(context));
		if(Build_All_CPS_Channel.EvaluateIn(context)){
			Android_baoruan.Value = true;
		}
		
		
		
		SDK_Channel = new Dictionary<string,bool>();
		SDK_Channel.Add("Android_91",Android_91.EvaluateIn(context));
		SDK_Channel.Add("Android_360",Android_360.EvaluateIn(context));
		SDK_Channel.Add("Android_uc",Android_uc.EvaluateIn(context));
		SDK_Channel.Add("Android_xiaomi",Android_xiaomi.EvaluateIn(context));
		SDK_Channel.Add("Android_oppo",Android_oppo.EvaluateIn(context));
		SDK_Channel.Add("Android_hauwei",Android_hauwei.EvaluateIn(context));
		SDK_Channel.Add("Android_sogou",Android_sogou.EvaluateIn(context));
		Debug.Log("My-uTmote: isBiuldUCChannel = "+SDK_Channel.ContainsKey("Android_uc"));
		
		context["Dictionary"] = SDK_Channel;
		
		context ["Android_91"] = Android_91.EvaluateIn(context);
		context ["Android_360"] = Android_360.EvaluateIn(context);
		context ["Android_uc"] = Android_uc.EvaluateIn(context);
		context ["Android_xiaomi"] = Android_xiaomi.EvaluateIn(context);
		context ["Android_wdj"] = Android_wdj.EvaluateIn(context);
		context ["Android_oppo"] = Android_oppo.EvaluateIn(context);
		context ["Android_hauwei"] = Android_hauwei.EvaluateIn(context);
		context ["Android_sogou"] = Android_sogou.EvaluateIn(context);
		context ["Android_anzhi"] = Android_anzhi.EvaluateIn(context);
		context ["Android_cyou"] = Android_cyou.EvaluateIn(context);

		

		yield return "";
			
	}
	
	[MenuItem("Assets/Create/uTomate/MyChooseChannel", false, 300)]
	public static void AddAction ()
	{
		Create<UTMyChooseChannel> ();
	}
}
