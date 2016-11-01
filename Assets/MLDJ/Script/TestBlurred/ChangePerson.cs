using UnityEngine;
using System.Collections;

public class ChangePerson : MonoBehaviour {
	public AnimationCurve reverseHeightCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
	public AnimationCurve reverseAlphaCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));

	public AnimationCurve forwardHeightCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
	public AnimationCurve forwardAlphaCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));

    public Transform select1;
    public Transform select2;

	private MUIBlurredSprite callBackBlurred;

    public bool IsMotion = false;
	//
	public void BeginChangePlayer(Transform target1, Transform target2)
	{
        IsMotion = true;

		NGUITools.SetActive (target1.gameObject, true);
		if (!target1.name.Equals (target2.name)) {
			NGUITools.SetActive (target2.gameObject, false);
		}

		this.select1 = target1;
		this.select2 = target2;
		
		MUIBlurredSprite[] blurredSprites = select1.GetComponentsInChildren<MUIBlurredSprite>();
		
		for (int i = 0; i < blurredSprites.Length; i++) {
			blurredSprites[i].GetComponent<UISprite> ().enabled = true;

			blurredSprites[i].heightCurve = reverseHeightCurve;
			blurredSprites[i].alphaCurve = reverseAlphaCurve;
			blurredSprites[i].PlayReverse ();
			if (i == 0){
				callBackBlurred = blurredSprites[i];
				blurredSprites[i].onBlurredFinish += OnBlurredFinish;
			}
		}
	}

    void OnBlurredFinish()
    {
        PlayNext();
    }

    void PlayNext()
    {
		if(callBackBlurred != null){
			callBackBlurred.onBlurredFinish -= OnBlurredFinish;
		}

		MUIBlurredSprite[] blurredSprites = select1.GetComponentsInChildren<MUIBlurredSprite>();
		
		for (int i = 0; i < blurredSprites.Length; i++) {
			blurredSprites[i].GetComponent<UISprite> ().height = (int)(blurredSprites[i].GetSpriteOriHeight());
		}
		select1.gameObject.SetActive(false);
        select2.gameObject.SetActive(true);
		blurredSprites = select2.GetComponentsInChildren<MUIBlurredSprite>();
        for (int i = 0; i < blurredSprites.Length; i++)
        {
			blurredSprites[i].heightCurve = forwardHeightCurve;
			blurredSprites[i].alphaCurve = forwardAlphaCurve;

			blurredSprites[i].PlayForward();
			blurredSprites[i].GetComponent<UISprite>().height = 0;

            if (i == 0)
            {
                //在这里可以重复使用callBackBlurred
                callBackBlurred = blurredSprites[i];
                callBackBlurred.onBlurredFinish += OnTotalFinish;
            }
        }
    }

    void OnTotalFinish()
    {
        if (callBackBlurred != null)
        {
            callBackBlurred.onBlurredFinish -= OnTotalFinish;
        }

        Invoke("SetIsMotion", .1f);
    }

    void SetIsMotion()
    {
        IsMotion = false;
    }
}
