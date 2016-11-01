using UnityEngine;
using System.Collections;
using GCGame.Table;

public class NianShouWindow : MonoBehaviour {

	public UILabel m_TimeInfo;
	// Use this for initialization
	void Start ()
	{
		int year1 = (int)GlobalData.NianShouStartTimeOne/10000;
		int mounth1 = (int)GlobalData.NianShouStartTimeOne/100 - 100*year1;
		int day1 = GlobalData.NianShouStartTimeOne - 100*((int)(GlobalData.NianShouStartTimeOne/100));
		int year2 = (int)GlobalData.NianShouEndTimeOne/10000;
		int mounth2 = (int)GlobalData.NianShouEndTimeOne/100 - 100*year2;
		int day2 = GlobalData.NianShouEndTimeOne - 100*((int)(GlobalData.NianShouEndTimeOne/100));
		m_TimeInfo.text = StrDictionary.GetClientDictionaryString("#{4863}", year1,mounth1,day1,year2,mounth2,day2);
	}


}
