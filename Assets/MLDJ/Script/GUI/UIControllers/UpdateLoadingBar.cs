using UnityEngine;
using System.Collections;
using System.Text;

public class UpdateLoadingBar : MonoBehaviour {

    public UILabel LabelState;
    public ClipSlider SliderLoading;
	public UISlider   SliderLoading1 ;
	// Use this for initialization

	public UILabel LabelLoadingProgressNum1;
	public UILabel LabelLoadingProgressNum2;

	public void SetStateString(string strState)
    {
        //LabelState.text = strState;
    }

    public void SetLoadingPrecent(float percent)
    {
        //SliderLoading.SetNextProgress(percent);
		SliderLoading1.sliderValue = percent;
		StringBuilder sb = new StringBuilder("");
		sb.AppendFormat("{0}%", (int)(percent * 100));
		LabelLoadingProgressNum1.text = sb.ToString();
		LabelLoadingProgressNum2.text = sb.ToString();
    }


}
