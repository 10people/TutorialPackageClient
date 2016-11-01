//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright Â© 2011-2013 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;

/// <summary>
/// Sample script showing how easy it is to implement a standard button that swaps sprites.
/// </summary>

[AddComponentMenu("NGUI/UI/Image Button")]
public class UIImageButton : MonoBehaviour
{
	public UISprite target;
	public string normalSprite;
	public string hoverSprite;
	public string pressedSprite;
	public string disabledSprite;


    private bool m_IsNeedGreyColour = true;
    public bool IsNeedGreyColour
    {
        set { m_IsNeedGreyColour = value; }
        get { return m_IsNeedGreyColour; }
    }
	public bool isEnabled
	{
		get
		{
			Collider col = GetComponent<Collider>();
			return col && col.enabled;
		}
		set
		{
			Collider col = GetComponent<Collider>();
			if (!col) return;

			if (col.enabled != value)
			{
				col.enabled = value;
				UpdateImage();
			}
		}
	}

	void OnEnable ()
	{
		if (target == null) target = GetComponentInChildren<UISprite>();
		UpdateImage();
	}
	
	void UpdateImage()
	{
		if (target != null)
		{
			if (isEnabled)
			{
                //ç½®ç°çŠ¶æ€å˜å›žæ¥çš„æ“ä½œ
                target.color = Color.white;
				target.spriteName = UICamera.IsHighlighted(gameObject) ? hoverSprite : normalSprite;
			}
			else
			{
                // ä¸ä½¿ç”¨ç½®ç°é¢œè‰²
                if (IsNeedGreyColour == true)
                {
                    //ç½®ç°çŠ¶æ€çœèµ„æºåŠ çš„å¼€å…³ï¼Œè®©Rå€¼ä¸º0
                    target.color = new Color(0, 255, 255, 255);
                    //target.spriteName = disabledSprite;
                }
			}
			target.MakePixelPerfect();
		}
	}

	void OnHover (bool isOver)
	{
		if (isEnabled && target != null)
		{
			target.spriteName = isOver ? hoverSprite : normalSprite;
			target.MakePixelPerfect();
		}
	}

	void OnPress (bool pressed)
	{
		if (pressed)
		{
			target.spriteName = pressedSprite;
			target.MakePixelPerfect();
		}
		else UpdateImage();
	}
}
