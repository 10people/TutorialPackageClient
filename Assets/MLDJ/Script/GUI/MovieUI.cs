//********************************************************************
// 文件名: MovieUI.cs
// 描述: 过场动画时模仿电影风格的上下黑边
//********************************************************************

using UnityEngine;
using Module.Log;

public class MovieUI : MonoBehaviour {

	private static MovieUI m_Instance = null;
	public static MovieUI Instance()
    {
        return m_Instance;
    }


	public UISprite m_StoryDialogMovieUp;
    public UISprite m_StoryDialogMovieDn;

    private TweenHeight m_cahcedMoveBgUpTweener = null;
    private TweenHeight m_cahcedMoveBgDownTweener = null;
   
	void OnEnable ()
	{
		m_Instance = this;
		m_StoryDialogMovieDn.gameObject.SetActive (false);
		m_StoryDialogMovieUp.gameObject.SetActive (false);
	}

	void OnDisable ()
	{
		m_Instance = null;
		m_StoryDialogMovieDn.gameObject.SetActive (false);
		m_StoryDialogMovieUp.gameObject.SetActive (false);
	}
				

	public void ShowMovieUI ()
	{
//        m_StoryDialogBottom.SetActive(false);

        NGUITools.SetActive(m_StoryDialogMovieUp.cachedGameObject,true);
        NGUITools.SetActive(m_StoryDialogMovieDn.cachedGameObject,true);
	    if (m_cahcedMoveBgUpTweener == null)
	    {
	        m_cahcedMoveBgUpTweener = m_StoryDialogMovieUp.cachedGameObject.AddComponent<TweenHeight>();
	    }
	    if (m_cahcedMoveBgDownTweener == null)
	    {
            m_cahcedMoveBgDownTweener = m_StoryDialogMovieDn.cachedGameObject.AddComponent<TweenHeight>();
	    }
	    OperatorHeightTweener(m_cahcedMoveBgUpTweener, true);
        OperatorHeightTweener(m_cahcedMoveBgDownTweener, true);
	}

    private void OperatorHeightTweener(TweenHeight tweener,bool isFadeIn)
    {
        if (tweener == null)
        {
            return;
        }
        tweener.eventReceiver = null;
        tweener.callWhenFinished = "";
        tweener.Reset();
        if (isFadeIn)
        {
            tweener.from = 20;
            tweener.to = 100;
        }
        else
        {
            tweener.from = 100;
            tweener.to = 20;
            tweener.eventReceiver = gameObject;
            tweener.callWhenFinished = "OnFadeOutTweenerFinish";
        }
        tweener.duration = 0.5f;
        tweener.Play();     
    }

    private void OnFadeOutTweenerFinish(TweenHeight tweener)
    {
        if (tweener != null)
        {
            NGUITools.SetActive(tweener.gameObject,false);
        }
    }

	public void HideMovieUI ()
	{
        if (m_cahcedMoveBgUpTweener == null)
        {
            m_cahcedMoveBgUpTweener = m_StoryDialogMovieUp.cachedGameObject.AddComponent<TweenHeight>();
        }
        if (m_cahcedMoveBgDownTweener == null)
        {
            m_cahcedMoveBgDownTweener = m_StoryDialogMovieDn.cachedGameObject.AddComponent<TweenHeight>();
        }
        OperatorHeightTweener(m_cahcedMoveBgUpTweener, false);
        OperatorHeightTweener(m_cahcedMoveBgDownTweener, false);
        //NGUITools.SetActive(m_StoryDialogMovieUp.cachedGameObject, false);
        //NGUITools.SetActive(m_StoryDialogMovieDn.cachedGameObject, false);
	}
}
