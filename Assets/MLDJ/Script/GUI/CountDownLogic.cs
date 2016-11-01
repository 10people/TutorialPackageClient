using System;
using UnityEngine;
using System.Collections;

public class CountDownLogic : UIControllerBase<CountDownLogic>
{
    public UISprite SpriteNumber;
    public string[] SpriteName = {"0","1", "2", "3", "4","5"};

    static public  int Countdown{ get; set; }
    private float m_CurTime = 0;

    void Awake()
    {
        UIControllerBase<CountDownLogic>.SetInstance(this);
    }
	// Use this for initialization
	void Start () {
        Countdown = Countdown % SpriteName.Length;
	}
	
	// Update is called once per frame
	void Update () {
        if (Countdown > 0)
        {
            m_CurTime += Time.deltaTime * 1000;
            if( Countdown > 0 && m_CurTime > 1000)
            {
                m_CurTime = 0;
                Countdown = Countdown - 1;
                if (Countdown > 0)
                {
                    SpriteNumber.spriteName = SpriteName[Countdown];
                }
                else
                {
                    UIManager.CloseUI(UIInfo.CountDown);
                }
            }
        }
	}

    static public void ShowCountDown( int sec )
    {
        Countdown = sec;
        UIManager.ShowUI(UIInfo.CountDown);
    }
}
