//------------------------------------------------------
//MGUI: Cyou MGUI
//CopyRight © 2014-1015 用研一部
//ALL rights reserved
//ClassName:MUIBlurredSprite
//Description:图片切片错位花屏动效
//
//created by yinyi at 2015.11.05
//-------------------------------------------------------
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MUIBlurredSprite : MonoBehaviour
{
    public AnimationCurve heightCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
    public AnimationCurve alphaCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
    public float duration = 1f;
    public int pieceCount = 10;
    public int shakeRange = 100;
    public float redMove = .005f;

    public delegate void VoidDelegate();
    public VoidDelegate onBlurredFinish;
    private UISprite mSp;
    private MUITweenValue tweenValue;
    private bool isEnd;
    private bool isChange;
    private bool isReverse;
    private int timeCount;
    private float spriteHeight;
    // Use this for initialization

	public float GetSpriteOriHeight(){
		return spriteHeight;
	}

    public void PlayForward()
    {
        mSp = transform.GetComponent<UISprite>();
        spriteHeight = mSp.localSize.y;
        mSp.onPostFill += OnPostFill;
        mSp.enabled = true;
        TweenHeight tween = TweenHeight.Begin(mSp, duration * .9f, (int)spriteHeight);
        mSp.alpha = 0;
        tween.from = 0;
        tween.to = (int)spriteHeight;
        tween.animationCurve = heightCurve;
        EventDelegate.Add(tween.onFinished, OnTweenFinish, true);

        tweenValue = MUITweenValue.Begin(gameObject, duration * .9f, 1f);
        tweenValue.startValue = 0f;
        tweenValue.endValue = 1f;
        tweenValue.animationCurve = alphaCurve;
        tweenValue.PlayForward();

        timeCount = 0;
        isEnd = false;
        isChange = true;
        isReverse = false;
        //Invoke("ChangeAlphaAni", duration / 10f);
    }

    public void PlayReverse()
    {
        mSp = transform.GetComponent<UISprite>();
        spriteHeight = mSp.localSize.y;
        mSp.onPostFill += OnPostFill;
        TweenHeight tween = TweenHeight.Begin(mSp, duration * .9f, (int)spriteHeight);
        mSp.alpha = 1;
        tween.from = (int)spriteHeight;
        tween.to = 0;
        tween.animationCurve = heightCurve;
        EventDelegate.Add(tween.onFinished, OnTweenFinish, true);

        tweenValue = MUITweenValue.Begin(gameObject, duration * .9f, 1f);
        tweenValue.startValue = 0f;
        tweenValue.endValue = 1f;
        tweenValue.animationCurve = alphaCurve;
        tweenValue.PlayForward();

        timeCount = 0;
        isEnd = false;
        isChange = true;
        isReverse = true;
        //Invoke("ChangeAlphaAni", duration / 10f);
    }

    void OnTweenFinish()
    {
        isEnd = true;
		mSp.onPostFill -= OnPostFill;
        mSp.color = Color.white;
        Invoke("StopChange", .1f);
    }

    void OnRenderMaterial(UIDrawCall drawCall)
    {
        if (drawCall == null)
            return;
        //if (isEnd)
        //    drawCall.dynamicMat.shader = Shader.Find("Unlit/Transparent Colored");
        //else
        //{
        //    drawCall.dynamicMat.shader = Shader.Find("MGUI/ColorMove Shader");
        //    drawCall.dynamicMat.SetFloat("_Move", redMove);
        //}
    }

    void ChangeAlphaAni()
    {
        if (timeCount < 10)
        {
            float alpha = timeCount / 10f;
            if (isReverse)
                alpha = (10 - timeCount) / 10f;
            mSp.alpha = alpha;
            timeCount++;
            Invoke("ChangeAlphaAni", duration / 15f);
        }
    }

    void StopChange()
    {
        isChange = false;
        if (isReverse)
            mSp.enabled = false;
        mSp.alpha = 1f;
        if (onBlurredFinish != null)
            onBlurredFinish();
    }

    void OnPostFill(UIWidget widget, BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        //if (mSp.localSize.y > (spriteHeight * .9f))
        //    return;
		Vector4 v = mSp.drawingDimensions;
        Vector4 u = new Vector4(uvs[0].x, uvs[0].y, uvs[2].x, uvs[1].y);
        Color32 c = cols[0];

        verts.Clear();
        uvs.Clear();
        cols.Clear();

        int count = pieceCount;
        float rangeY = (v.w - v.y) / (float)count;
        float rangeUvY = (u.w - u.y) / (float)count;
        for (int i = 0; i < count; i++)
        {
            Color32 mColor = c;
            float randomX = Random.Range(-shakeRange, shakeRange);
            if (isEnd)
                randomX = 0;
            verts.Add(new Vector3(v.x + randomX, rangeY * i + v.y));
            verts.Add(new Vector3(v.x + randomX, rangeY * (i + 1) + v.y));
            verts.Add(new Vector3(v.z + randomX, rangeY * (i + 1) + v.y));
            verts.Add(new Vector3(v.z + randomX, rangeY * i + v.y));

            uvs.Add(new Vector2(u.x, rangeUvY * i + u.y));
            uvs.Add(new Vector2(u.x, rangeUvY * (i + 1) + u.y));
            uvs.Add(new Vector2(u.z, rangeUvY * (i + 1) + u.y));
            uvs.Add(new Vector2(u.z, rangeUvY * i + u.y));

            cols.Add(mColor);
            cols.Add(mColor);
            cols.Add(mColor);
            cols.Add(mColor);
        }
    }

    int[] GetPieceRandom(int amount)
    {
        int[] finalNums = new int[amount];
        int[] nums = new int[amount];
        for (int i = 0; i < amount; i++)
            nums[i] = i;

        for (int i = 0; i < amount; i++)
        {
            int no = Random.Range(0, amount - i);
            finalNums[i] = nums[no];
            for (int j = no; j < amount - 1 - i; j++)
            {
                nums[j] = nums[j + 1];
            }
        }
        return finalNums;
    }

    // Update is called once per frame
    void Update()
    {
        if (isChange)
        {
            mSp.MarkAsChanged();
            OnRenderMaterial(mSp.panel.GetDrawCall(mSp.material,mSp.depth));
            mSp.color = new Color(255, 255, 255, tweenValue.CurveValue);
        }
    }
}
