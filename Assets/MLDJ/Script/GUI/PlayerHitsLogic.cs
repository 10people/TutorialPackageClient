//********************************************************************
// 文件名: PlayerHitsLogic.cs
// 描述: 玩家连击数逻辑 暂时
// 作者: WangZhe
// 创建时间: 2013-11-19
//
// 修改历史:
// 2013-11-19 王喆创建
//********************************************************************

using GCGame;
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using Games.GlobeDefine;

public class PlayerHitsLogic : MonoBehaviour {

//    //鼠标按键枚举
//    public enum MOUSE_BUTTON
//    {
//        MOUSE_BUTTON_LEFT,
//        MOUSE_BUTTON_RIGHT,
//        MOUSE_BUTTON_MIDDLE,
//    }   

    public GameObject m_FirstChild;
    public UISprite m_BackGround;
    //public UISprite m_NumPic_Ge;
    //public UISprite m_NumPic_Shi;
    //public UISprite m_NumPic_Bai;
    public UILabel m_NumLabel;
        
    public GameObject m_EffectOffset;
    private TweenPosition m_JumpEffect;
    private TweenScale m_CriticalEffect;

    private Transform m_CachedTrans;
    private Transform m_CachedFirstChildTrans;
    public UISprite m_SpriteHit;
    public Vector3 m_PositionOffset = new Vector3(0.6f,0.1f,0);
     

    public Vector3 m_PlayerModelHeightOffset = new Vector3(0,1.3f,0);

    private int m_curShowCount = -1;
    private bool m_isInverse = false;
    private static PlayerHitsLogic m_Instance = null;
    public static PlayerHitsLogic Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
        m_CachedTrans = transform;
        
    }


    private void InitUIPosition()
    {
        UIAnchor anchor = GetComponent<UIAnchor>();
        if (anchor != null)
        {
            Destroy(anchor);
        }
        Utils.SetParent(m_CachedTrans,null);
        Utils.SetLayerIncludeChild(gameObject,Games.GlobeDefine.GameDefine_Globe.ESceneLayer.Default);
        if (m_FirstChild != null)
        {
            m_CachedFirstChildTrans = m_FirstChild.transform;
            m_CachedFirstChildTrans.localPosition = new Vector3(70,60,41);
            m_CachedFirstChildTrans.transform.localScale = new Vector3(0.006f, 0.006f, 0.01f);
            m_CachedTrans.localEulerAngles = new Vector3(27.64507f, 319.0001f, 0);
        }
        UIPanel panel = GetComponent<UIPanel>();
        panel.depth = 21;
    }

	// Use this for initialization
	void Start () 
    {
        InitUIPosition();
        m_BackGround.gameObject.SetActive(true);
        m_BackGround.color = GlobeVar.TRANSPARENT_COLOR;

	    if (m_NumLabel != null)
	    {
            m_NumLabel.gameObject.SetActive(true);
            m_NumLabel.color = GlobeVar.TRANSPARENT_COLOR;
	    }

        m_JumpEffect = m_EffectOffset.GetComponent<TweenPosition>();
        m_CriticalEffect = m_EffectOffset.GetComponent<TweenScale>();

        m_FirstChild.SetActive(true);

        gameObject.SetActive(false);
	}

	
	// Update is called once per frame
	void Update () {
       
        // 5秒后没有连击算作中断 清空连击数
        ClearPlayerHits();
	}

    void OnDestroy()
    {
        m_Instance = null;
    }
    
    /// <summary>
    /// 增加连击数
    /// </summary>
    public void AddPlayerHits(int nHitNum, bool bCritical = false)
    {
        if (m_NumLabel == null)
        {
            return;
        }
        Obj_MainPlayer main = ObjManager.Instance.MainPlayer;
        if (main != null && m_CachedTrans != null && m_CachedFirstChildTrans!=null)
        {
            Vector3 localPos = m_CachedTrans.InverseTransformPoint(main.ObjTransform.TransformPoint(m_PlayerModelHeightOffset));
            localPos.z -= 3;
            Vector3 randomPos = Random.insideUnitCircle * 0.1f;
            m_CachedFirstChildTrans.localPosition = localPos + m_PositionOffset + randomPos;
        }
        if (nHitNum >= 2)
        {
            m_BackGround.color = Color.white;
            //if (nHitNum < 10)
            //{
            //    m_NumPic_Ge.color = Color.white;
            //    m_NumPic_Shi.color = GlobeVar.TRANSPARENT_COLOR;
            //    m_NumPic_Bai.color = GlobeVar.TRANSPARENT_COLOR;
            //    m_NumPicGrid.transform.localPosition = new Vector3(-156, -25, 0);
            //}
            //else if (nHitNum < 100)
            //{
            //    m_NumPic_Ge.color = Color.white;
            //    m_NumPic_Shi.color = Color.white;
            //    m_NumPic_Bai.color = GlobeVar.TRANSPARENT_COLOR;
            //    m_NumPicGrid.transform.localPosition = new Vector3(-132, -26, 0);
            //}
            //else if (nHitNum < 1000)
            //{
            //    m_NumPic_Ge.color = Color.white;
            //    m_NumPic_Shi.color = Color.white;
            //    m_NumPic_Bai.color = Color.white;
            //    m_NumPicGrid.transform.localPosition = new Vector3(-108, -26, 0);
            //}
            //m_NumPic_Ge.spriteName = "Num" + (nHitNum % 10).ToString();
            //m_NumPic_Shi.spriteName = "Num" + (nHitNum % 100 / 10).ToString();
            //m_NumPic_Bai.spriteName = "Num" + (nHitNum / 100).ToString();
            //ClearTweenAlphaTwinkle();
            UpdateHitCountShow(nHitNum);
            ResetNumFadeAni();

            if (!gameObject.activeInHierarchy)
            {
                gameObject.SetActive(true);
            }

            if (bCritical)
            {
                PlayScaleEffect();
            }
            else
            {
                PlayJumpEffect();
            }
        }
    }

    private void UpdateHitCountShow(int count)
    {
        if (m_NumLabel == null || m_SpriteHit == null || m_BackGround == null)
        {
            return;
        }
        if (m_curShowCount == count)
        {
            return;
        }
        m_curShowCount = count;
        m_NumLabel.text = count.ToString();
        Vector3 labelLocalPos = m_NumLabel.cachedTransform.localPosition;
        labelLocalPos.x += m_NumLabel.localSize.x/2 + 4;
        labelLocalPos.y = -7;
        m_SpriteHit.cachedTransform.localPosition = labelLocalPos;

        bool curValue = Random.Range(0, 5)%2 == 0;
        if (curValue != m_isInverse)
        {
            m_isInverse = curValue;
            int yAnagelValue = m_isInverse ? 180 : 0;
            int xValue = m_isInverse ? -44 : 12;
            m_BackGround.cachedTransform.localEulerAngles = new Vector3(0, yAnagelValue,0); 
            m_BackGround.cachedTransform.localPosition = new Vector3(xValue,0,0);
        }

    }

    /// <summary>
    /// 清空连击数
    /// </summary>
    void ClearPlayerHits()
    {
        if (gameObject.activeInHierarchy)
        {
            if (Singleton<ObjManager>.Instance.MainPlayer == null)
            {
                return;
            }

            if (Time.time - Singleton<ObjManager>.Instance.MainPlayer.LastHitPointTime > 5.0f)
            {
                m_BackGround.color = GlobeVar.TRANSPARENT_COLOR;

                ResetNumFadeAni();

                gameObject.SetActive(false);
            }
            else if (Time.time - Singleton<ObjManager>.Instance.MainPlayer.LastHitPointTime > 1.0f)
            {
                PlayNumFadeAni();
            }
        }
    }
    
    /// <summary>
    /// 填充动画
    /// </summary>
    void PlayNumFadeAni()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        float fillamount = 1.0f - (Time.fixedTime - Singleton<ObjManager>.Instance.MainPlayer.LastHitPointTime - 1.0f) / 4.0f;
        if (m_SpriteHit != null)
        {
            m_SpriteHit.alpha = fillamount;
        }
        if (m_NumLabel != null)
        {
            m_NumLabel.alpha = fillamount;
        }
        if (m_BackGround != null)
        {
            m_BackGround.alpha = fillamount;
        }
    }

    void ResetNumFadeAni()
    {
        if (m_NumLabel != null)
        {
            m_NumLabel.alpha = 1;
        }
        if (m_BackGround != null)
        {
            m_BackGround.alpha = 1;
        }
        if (m_SpriteHit != null)
        {
            m_SpriteHit.alpha = 1;
        }
    }

    public void PlayJumpEffect()
    {
        m_JumpEffect.Reset();
        m_JumpEffect.Play();
    }

    void PlayScaleEffect()
    {
        m_CriticalEffect.Reset();
        m_CriticalEffect.Play();
    }

    public void PlayTween(bool nDirection)
    {
        gameObject.SetActive(!nDirection);
    }
}
