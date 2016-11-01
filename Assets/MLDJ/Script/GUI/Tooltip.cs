using UnityEngine;
using System.Collections;

public class Tooltip : MonoBehaviour 
{
	#region UI ref
	public UILabel lblTips;
	public UIPanel pnl;
    public UISprite sprBg;
	#endregion

    void Start()
    {
        UIEventListener.Get(sprBg.gameObject).onClick = HideTooltip;
    }

	public void ShowTooltip(string msg)
	{
        lblTips.text = msg;
        pnl.alpha = 1f;
	}

	void HideTooltip(GameObject go)
	{
        pnl.alpha = 0f;
	}
}
