using UnityEngine;
using System.Collections;

public class UILongPressButton : MonoBehaviour 
{
	public delegate void OnLongPressHandler (bool isPressed);
	
	public float pressAndHoldDelay = 1f;
	public OnLongPressHandler OnLongPress;
	
	float mPressTime = 0f;
    bool mIsNotify = false;
	
	void OnPress (bool isPressed) 
	{
		if (isPressed)
		{
			mPressTime = RealTime.time;
		}
		else
		{
			mPressTime = 0f;
            mIsNotify = false;
			OnLongPress(false);
		}
	}

	void Update()
	{
		if(mPressTime != 0f && !mIsNotify)
		{
			if (mPressTime + pressAndHoldDelay > RealTime.time)	return;
            mIsNotify = true;
			OnLongPress(true);
		}
	}
}
