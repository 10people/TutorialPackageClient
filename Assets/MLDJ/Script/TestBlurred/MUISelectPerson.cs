//------------------------------------------------------
//MGUI: Cyou MGUI
//CopyRight © 2014-1015 用研一部
//ALL rights reserved
//ClassName:MUISelectPerson
//Description:贝塞尔曲线选人界面
//
//created by yinyi at 2015.12.15
//-------------------------------------------------------
using UnityEngine;
using System.Collections;

public class MUISelectPerson : MonoBehaviour {
	public delegate void SelectDelegate(int index);
	public SelectDelegate onSelectOneItem;

    public delegate void VoidDelegate();
	public VoidDelegate onSpringFinished;
	public VoidDelegate onBeginRotation;

    public AnimationCurve posCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
    public AnimationCurve scaleCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));

    public float[] itemScale;
    public float[] itemAlpha;
    public float[] itemDuration;

    private MUIBezierValue m_bezier;
    private MUITweenValue tweenValue;
    private float bezierValue;
    private float preBezierValue;
    private float checkItemAmount;
    private float mDelta;
    private bool isDragOut;
    private bool isDrag;
	// Use this for initialization
	void Start () {
        m_bezier = gameObject.GetComponent<MUIBezierValue>();
        bezierValue = 0;
        mDelta = 0;
        for (int i = 0; i < transform.childCount; i++)
        {
            Transform trans = transform.GetChild(i);
            Vector2 pos = m_bezier.GetBezierValue(.25f * i);
            trans.position = pos;
            pos = trans.localPosition;
            trans.localPosition = new Vector3(-500, 0, 0);
            float duration = 0f;
            Vector3 scaleValue = Vector3.one;
            duration = itemDuration[i];
            scaleValue = Vector3.one * itemScale[i];

            TweenPosition posTween = TweenPosition.Begin(trans.gameObject, duration, pos);
            posTween.animationCurve = posCurve;
            TweenScale scaleTween = TweenScale.Begin(trans.gameObject, duration, scaleValue);
            scaleTween.animationCurve = scaleCurve;
            if(i == 0)
                EventDelegate.Add(scaleTween.onFinished, OnStartTweenFinish, true);
        }
	}

    public void OnStartTweenFinish(){
        for (int i = 0; i < transform.childCount; i++)
        {
            Transform trans = transform.GetChild(i);
            trans.position = m_bezier.GetBezierValue(.25f * i);
            trans.GetComponent<UIEventListener>().onDrag += OnDragItem;
            trans.GetComponent<UIEventListener>().onPress += OnPressItem;
            trans.GetComponent<UIEventListener>().onClick += OnMenuClick;
        }
    }

    void OnMenuClick(GameObject go)
    {
        if (isDrag)
            return;

        isDragOut = true;
        int index = int.Parse(go.name.Substring(6)) - 1;
        float amount = .25f * index + bezierValue;
        if (amount > 1)
            amount = amount % 1f;
        else if (amount < 0)
            amount = amount % 1f + 1;

        tweenValue = MUITweenValue.Begin(gameObject, .3f, 0f);
        tweenValue.CurveValue = bezierValue;
        tweenValue.startValue = bezierValue;
        if (amount < .5f)
            tweenValue.endValue = bezierValue - amount;
        else
            tweenValue.endValue = bezierValue + (1 - amount);

		if (tweenValue.startValue == tweenValue.endValue) 
        {
			if (onSelectOneItem != null) 
            {
					onSelectOneItem (index);
                    isDragOut = false;
			}
		} 
        else 
        {
			if (onBeginRotation != null) 
            {
					onBeginRotation ();
			}
		}

        tweenValue.PlayForward();
        EventDelegate.Add(tweenValue.onFinished, OnTweenMenuFinish, true);
        
    }

    void OnTweenMenuFinish()
    {
		if (onSpringFinished != null) {
			onSpringFinished ();
        }
        isDragOut = false;
    }

    void OnPressItem(GameObject go, bool state)
    {
        if (state)
        {
            for (int i = 0; i < transform.childCount; i++)
                if (go.name == transform.GetChild(i).name)
                    checkItemAmount = .25f * i + bezierValue;

            checkItemAmount = IdentityBezierAmount(checkItemAmount);
            preBezierValue = bezierValue;
            isDragOut = false;
            isDrag = false;
        }
        else if (isDrag)
        {
            isDragOut = true;

            tweenValue = MUITweenValue.Begin(gameObject, .3f, 0f);
            tweenValue.CurveValue = bezierValue;
            tweenValue.startValue = bezierValue;
            if (preBezierValue > bezierValue)
                tweenValue.endValue = bezierValue - Mathf.Abs(mDelta * 2);
            else
                tweenValue.endValue = bezierValue + Mathf.Abs(mDelta * 2);
            tweenValue.PlayForward();
            EventDelegate.Add(tweenValue.onFinished, OnTweenValueFinish, true);
        }
    }

    void OnTweenValueFinish()
    {
        float amount = bezierValue;
        if (amount > 1)
            amount = amount % 1f;
        else if (amount < 0)
            amount = amount % 1f + 1;

        tweenValue = MUITweenValue.Begin(gameObject, .3f, 0f);
        tweenValue.CurveValue = bezierValue;
        tweenValue.startValue = bezierValue;
        float endValue = 0f;
        if (amount < (.25f * .5f))
            endValue = bezierValue - amount;
        else if (amount < (.25f * .5f + .25f))
            endValue = bezierValue + (.25f - amount);
        else if (amount < (.25f * .5f + .5f))
            endValue = bezierValue + (.5f - amount);
        else if (amount < (.25f * .5f + .75f))
            endValue = bezierValue + (.75f - amount);
        else if (amount < 1f)
            endValue = bezierValue + (1 - amount);

        tweenValue.endValue = endValue;
        tweenValue.PlayForward();
        EventDelegate.Add(tweenValue.onFinished, OnSpringFinish, true);
    }

    void OnSpringFinish()
    {
        isDragOut = false;
        isDrag = false;

		if (onSpringFinished != null) {
			onSpringFinished ();
		}
    }

    void OnDragItem(GameObject go, Vector2 delta)
    {
		if (!isDrag) {
				if (onBeginRotation != null) {
						onBeginRotation ();
				}
		}

        isDrag = true;
        float dis = Vector2.Distance(delta, Vector2.zero) / 500f;
        if (Mathf.Abs(delta.x) > Mathf.Abs(delta.y))
        {
            float preBezierValue = bezierValue;
            if (checkItemAmount < .5f || checkItemAmount > .99f)
                if (delta.x > 0)
                    bezierValue -= dis;
                else
                    bezierValue += dis;
            else
                if (delta.x > 0)
                    bezierValue += dis;
                else
                    bezierValue -= dis;
            mDelta = bezierValue - preBezierValue;

            RotateItem();
        }
    }

    float IdentityBezierAmount(float value)
    {
        if (value > 1)
            value = value % 1f;
        else if (value < 0)
            value = value % 1f + 1;
        return value;
    }

    void RotateItem()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            Transform trans = transform.GetChild(i);
            float amount = .25f * i + bezierValue;
            if (amount > 1)
                amount = amount % 1f;
            else if(amount < 0)
                amount = amount % 1f + 1;
            trans.position = m_bezier.GetBezierValue(amount);
            int num = (int)(amount / .25f);
            if (num >= transform.childCount)
                num = transform.childCount - 1;
            int nextNum = (num + 1) >= transform.childCount ? 0 : (num + 1);
            trans.localScale = Vector3.one * (itemScale[num] - ((amount - (.25f * num)) * (itemScale[num] - itemScale[nextNum]) / .25f));
            trans.GetComponent<UISprite>().alpha = itemAlpha[num] - ((amount - (.25f * num)) * (itemAlpha[num] - itemAlpha[nextNum]) / .25f);
        }
    }
	
	// Update is called once per frame
	void Update () {
        if (isDragOut)
        {
            bezierValue = tweenValue.CurveValue;
            RotateItem();
        }
	}
}
