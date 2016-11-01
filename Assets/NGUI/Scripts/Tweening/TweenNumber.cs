using UnityEngine;
using System.Collections;

public class TweenNumber : UITweener
{
    public delegate void OnUpdatingNumDelegate(TweenNumber tw, bool isFinished);
    public OnUpdatingNumDelegate onUpdatingNum;

    public float from;
    public float to;
    public float value { get; set; }

    protected override void OnUpdate(float factor, bool isFinished)
    {
        value = from * (1f - factor) + to * factor;

        if(onUpdatingNum != null)
        {
            onUpdatingNum(this, isFinished);
        }
    }

    static public TweenNumber Begin(GameObject go, float duration, float fromNum, float toNum)
    {
        TweenNumber comp = UITweener.Begin<TweenNumber>(go, duration);
        comp.from = fromNum;
        comp.to = toNum;

        if (duration <= 0f)
        {
            comp.Sample(1f, true);
            comp.enabled = false;
        }
        return comp;
    }
}
