//------------------------------------------------------
//MGUI: Cyou MGUI
//CopyRight © 2014-1015 用研一部
//ALL rights reserved
//ClassName:MUITweenValue
//Description:贝塞尔曲线值生成类,CurveValue为实时生成的曲线值
//
//created by yinyi at 2015.07.17
//-------------------------------------------------------
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

//[ExecuteInEditMode]
public class MUITweenValue : MonoBehaviour {

    public enum Style
    {
        Once,
        Loop,
        PingPong,
    }

    public AnimationCurve animationCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
    public Style style = Style.Once;
    public float duration = 1f;
    public float startDelay = 0f;
    public float startValue = 0f;
    public float endValue = 0f;
    public List<EventDelegate> onFinished = new List<EventDelegate>();
    private float mStartTime = 0f;
    private float mFactor = 0f;
    private bool mStarted = false;
    private float mAmountPerDelta = 0f;
    protected float finalValue = int.MaxValue;
    public float CurveValue
    {
        get { return finalValue; }
        set { finalValue = value; }
    }

    public bool isStart
    {
        get { return mStarted; }
        set { mStarted = value; }
    }

    void OnEnable()
    {
        hideFlags = HideFlags.HideInInspector;
        mStartTime = RealTime.time;
    }
    // Use this for initialization
    void Start()
    {
        //mStarted = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (mStarted)
        {
            CurveValue = UpdateCurveValue();
        }
    }

    static public MUITweenValue Begin(GameObject go, float duration, float toValue)
    {
        MUITweenValue comp = go.GetComponent<MUITweenValue>();
#if UNITY_FLASH
		if ((object)comp == null) comp = (MUITweenValue)go.AddComponent<MUITweenValue>();
#else
        if (comp == null) comp = go.AddComponent<MUITweenValue>();
#endif
        comp.mStarted = false;
        comp.duration = duration;
        comp.mFactor = 0f;
        comp.animationCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
        comp.enabled = true;
        comp.endValue = toValue;

        if (duration <= 0f)
        {
            comp.enabled = false;
        }
        return comp;
    }

    static public MUITweenValue BeginNew(GameObject go, float duration, float toValue)
    {
        MUITweenValue comp;
#if UNITY_FLASH
		if ((object)comp == null) comp = (MUITweenValue)go.AddComponent<MUITweenValue>();
#else
        comp = go.AddComponent<MUITweenValue>();
#endif
        comp.mStarted = false;
        comp.duration = duration;
        comp.mFactor = 0f;
        comp.animationCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
        comp.enabled = true;
        comp.endValue = toValue;

        if (duration <= 0f)
        {
            comp.enabled = false;
        }
        return comp;
    }

    public void Play()
    {
        mStarted = true;
        mStartTime += startDelay;
        mAmountPerDelta = 1f / duration;
    }

    public void PlayForward()
    {
        mStarted = true;
        OnEnable();
        mStartTime += startDelay;
        mFactor = 0f;
        mAmountPerDelta = 1f / duration;
    }

    public void PlayReverse()
    {
        mStarted = true;
        OnEnable();
        mStartTime += startDelay;
        mFactor = 1f;
        mAmountPerDelta = -1f / duration;
    }

    public void ResetToBeginning()
    {
        mStarted = false;
        mFactor = 0f;
    }

    protected float UpdateCurveValue()
    {
        if (duration == 0f || mFactor > 1f || mFactor < 0f)
        {
            mStarted = false;
            mFactor = Mathf.Clamp01(mFactor);
            if (onFinished != null)
            {
                List<EventDelegate> mTemp = null;
                mTemp = onFinished;
                onFinished = new List<EventDelegate>();

                // Notify the listener delegates
                EventDelegate.Execute(mTemp);

                // Re-add the previous persistent delegates
                for (int i = 0; i < mTemp.Count; ++i)
                    EventDelegate.Add(onFinished, mTemp[i]);
                mTemp = null;
            }
            return finalValue;
        }
        else
        {
            float delta = RealTime.deltaTime;
            float time = RealTime.time;
            //Avoid long delay
            if (delta > .1f)
            {
                mStartTime = time + startDelay;
                delta = 0;
            }

            if (time < mStartTime) return startValue;

            mFactor += mAmountPerDelta * delta;

            // Loop style simply resets the play factor after it exceeds 1.
            if (style == Style.Loop)
            {
                if (mFactor > 1f)
                {
                    mFactor -= Mathf.Floor(mFactor);
                }
            }
            else if (style == Style.PingPong)
            {
                // Ping-pong style reverses the direction
                if (mFactor > 1f)
                {
                    mFactor = 1f - (mFactor - Mathf.Floor(mFactor));
                    mAmountPerDelta = -mAmountPerDelta;
                }
                else if (mFactor < 0f)
                {
                    mFactor = -mFactor;
                    mFactor -= Mathf.Floor(mFactor);
                    mAmountPerDelta = -mAmountPerDelta;
                }
            }

            float val = animationCurve.Evaluate(Mathf.Clamp01(mFactor));
            finalValue = startValue * (1 - val) + endValue * val;
            return finalValue;
        }
    }
}
