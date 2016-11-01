using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AnimationSlow : MonoBehaviour {

    public List<float> m_SlowStart;
    public List<float> m_SlowGear;
    public List<float> m_Duration;

    private float m_StartTimer;
    private float m_DurationTimer = -1;
    private int curindex = 0;

	// Use this for initialization
	void Start () {
        
	}

    void OnEnable()
    {
        m_StartTimer = Time.fixedTime;
    }
	
	void FixedUpdate () {
        if (curindex >= m_SlowStart.Count)
        {
            return;
        }

        if (Time.fixedTime - m_StartTimer >= m_SlowStart[curindex] && m_DurationTimer == -1)
        {
            Time.timeScale = m_SlowGear[curindex];
            m_DurationTimer = Time.fixedTime;
        }

        if (Time.fixedTime - m_DurationTimer >= m_Duration[curindex] && m_DurationTimer != -1)
        {
            Time.timeScale = 1;
            m_DurationTimer = -1;
            curindex += 1;
        }
	}
}
