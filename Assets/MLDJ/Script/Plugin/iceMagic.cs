using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Module.Log;
public class iceMagic : MonoBehaviour {

    public enum PlayMode
    {
        ONCE,
        LOOP,
    }
    public Texture[] frames;   //ÉùÃ÷Ò»¸öÊý×é£¬´æ·ÅÌùÍ¼£¬ÉùÃ÷ºó£¬ÔÚinspector»á¿´µ½Ò»¸öframesµÄÊý×é£¬Êý×éµÄ³¤¶È¿ÉÒÔ×Ô¼ºÌî£¬Ìî1£¬¾Í´ú±íÖ»ÓÐ1ÕÅÍ¼£¬¿ÉÒÔ°ÑÒ»ÕÅtextureÍÏ½øÈ¥£¬Ìî2¾Í´ú±í2ÕÅ£¬ÒÔ´ËÀàÍÆ
	public float TailTime = 0.05f;
    public int framesPerSecond = 10;  //ÉùÃ÷fps,Ã¿Ãë²¥·Å¼¸Ö¡£¬Ó°Ïì¶¯»­µÄËÙ¶È¡£

    public int xCount;
    public int yCount;
    public PlayMode curMode = PlayMode.LOOP;
    private List<Texture2D> curTextrueList = new List<Texture2D>();
    private int cellFrameCount = 0;
	private int m_curIndex = 0;
    private float m_curTimer;

	private float m_delayTimer = 0;

	// Use this for initialization
	void OnEnable()
	{
		m_curIndex = 0;
        m_curTimer = 0;
		if (gameObject.GetComponent<ParticleSystem>() != null) {
			m_delayTimer = gameObject.GetComponent<ParticleSystem>().startDelay;
			if(frames.Length > 0)
			{
				framesPerSecond = (int)(frames.Length / (gameObject.GetComponent<ParticleSystem>().startLifetime - TailTime));
			}
			else
			{
				framesPerSecond = (int)(xCount * yCount / (gameObject.GetComponent<ParticleSystem>().startLifetime - TailTime));
			}

		}
	}

	void Start () 
	{
        if (frames.Length > 0)
        {
            m_curIndex = 0;
            m_curTimer = 0;
            cellFrameCount = 0;
        }
        else
        {
            m_curIndex = 0;
            m_curTimer = 0;
            if (xCount > 0 && yCount > 0 && null != GetComponent<Renderer>())
            {
                Texture2D resTexture = GetComponent<Renderer>().material.mainTexture as Texture2D;
                int cellWidth = resTexture.width / xCount;
                int cellHeight = resTexture.height / yCount;
                cellFrameCount = xCount * yCount;
                for (int j = 0; j < yCount; j++)
                {
                    for (int i = 0; i < xCount; i++)
                    {
                        Texture2D curTexture = new Texture2D(cellWidth, cellHeight, resTexture.format, false);
                        curTexture.SetPixels(0, 0, cellWidth, cellHeight, resTexture.GetPixels(i * cellWidth, resTexture.height - (j + 1) * cellHeight, cellWidth, cellHeight));
                        curTexture.Apply();
                        curTextrueList.Add(curTexture);
                    }
                }
            }
        }
		
	}

    // Update is called once per frame
	void Update() 
    {
		if (m_delayTimer > 0) {
			m_delayTimer -= Time.deltaTime;
			return;
				}
        if (cellFrameCount > 0)
        {
            if (curMode == PlayMode.LOOP)
            {
                m_curIndex = (int)(Time.time * framesPerSecond) % cellFrameCount;
                if (null != GetComponent<Renderer>())
                    GetComponent<Renderer>().material.SetTexture("_MainTex", curTextrueList[m_curIndex]);
            }
            else
            {
                m_curTimer += Time.deltaTime;
                m_curIndex = (int)(framesPerSecond * m_curTimer);

                if (null != GetComponent<Renderer>())
                {
                    if (m_curIndex >= curTextrueList.Count)
                    {
                        GetComponent<Renderer>().material.SetTexture("_MainTex", curTextrueList[curTextrueList.Count - 1]);
                    }
                    else
                    {
                        GetComponent<Renderer>().material.SetTexture("_MainTex", curTextrueList[m_curIndex]);
                    }
                }
            }
            
			
        }
        else if (null != frames && frames.Length > 0)
        {
            if (curMode == PlayMode.LOOP)
            {
                m_curIndex = (int)(Time.time * framesPerSecond) % frames.Length;
                if (null != GetComponent<Renderer>())
                    GetComponent<Renderer>().material.mainTexture = frames[m_curIndex];                      //äÖÈ¾Õâ¸öÌùÍ¼
            }
            else
            {
                m_curTimer += Time.deltaTime;
                m_curIndex = (int)(framesPerSecond * m_curTimer);
                if (null != GetComponent<Renderer>())
                {
                    if (m_curIndex >= frames.Length)
                    {
                        GetComponent<Renderer>().material.SetTexture("_MainTex", frames[frames.Length - 1]);
                    }
                    else
                    {
                        GetComponent<Renderer>().material.SetTexture("_MainTex", frames[m_curIndex]);
                    }
                }
            }
            
			
        }
	}
}
