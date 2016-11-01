//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;

/// <summary>
/// Tween the widget's size.
/// </summary>

[RequireComponent(typeof(UIWidget))]
[AddComponentMenu("NGUI/Tween/Tween Fill Amount")]
public class TweenFillcount : UITweener
{
    public float from = 0;
    public float to = 1;
    public bool invertFill = false;
    public UISprite.FillDirection fillDir = UISprite.FillDirection.Horizontal;

	UISprite mSprite;

    public UISprite cachedWidget { get { if (mSprite == null) mSprite = GetComponent<UISprite>(); return mSprite; } }

	/// <summary>
    /// UISprite's current value.
	/// </summary>

	public float value {
        get { 
            return cachedWidget.fillAmount; 
        }
        set {
            cachedWidget.fillAmount = value; 
        } 
    }

    public bool bInit = false;

    public override void Reset()
    {
        base.Reset();
        bInit = false;
    }

	/// <summary>
	/// Tween the value.
	/// </summary>

	protected override void OnUpdate (float factor, bool isFinished)
	{
        if (!bInit)
        {
            cachedWidget.fillDirection = fillDir;
            cachedWidget.invert = invertFill;
            bInit = true;
        }

		value = from * (1f - factor) + to * factor;
	}

	/// <summary>
	/// Start the tweening operation.
	/// </summary>

    static public TweenFillcount Begin(UISprite uSprite, float duration, float fillAmount)
	{
        TweenFillcount comp = UITweener.Begin<TweenFillcount>(uSprite.gameObject, duration);
        comp.from = uSprite.fillAmount;
        comp.to = fillAmount;

		if (duration <= 0f)
		{
			comp.Sample(1f, true);
			comp.enabled = false;
		}
		return comp;
	}
}

