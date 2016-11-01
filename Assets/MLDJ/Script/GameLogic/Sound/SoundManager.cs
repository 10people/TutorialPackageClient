/********************************************************************************
 *	ÎÄ¼þÃû£º	SoundManager.cs
 *	È«Â·¾¶£º	\Script\Scene\SoundManager.cs
 *	´´½¨ÈË£º	Íõ»ª
 *	´´½¨Ê±¼ä£º2013-11-21
 *
 *	¹¦ÄÜËµÃ÷£ºÉùÒô¹ÜÀíÆ÷
 *	ÐÞ¸Ä¼ÇÂ¼£º
 *	2013-11-22 ÏÈÈ¥µôÐ­³Ì£¬°ÑÉùÒô»º³å³Ø·Ö³É2¸ö£¬Ò»¸ö³¡¾°Ïà¹Ø£¨±ÈÈç±³¾°ÒôÀÖ£©£¬Ò»¸ö·Ç³¡¾°Ïà¹ØµÄ£¨±ÈÈçÈËÎï¼¼ÄÜ£©
 *	³¡¾°Ïà¹ØµÄ3DÒôÔ´°óÔÚÈËÎïÉíÉÏ£¬ËæÈËÎïÒÆ¶¯
 *	2013-12-12 °ÑÉùÒô±í¸ñµÚÒ»ÁÐ¸ÄÎªÃû³Æ£¬±³¾°ÒôÀÖ¹ÒÔÚÉãÏñ»úÉÏ
 *	2013-12-18 ·Ç³¡¾°ÒôÀÖ£¨±ÈÈç¼¼ÄÜÒôÀÖ£©µÄÖÐÐÄµã¹ÒÔÚÖ÷½ÇÉíÉÏ,ÉèÖÃPanLevelºÍSpread
 *	2013-12-24 PanLevelºÍSpreadÅä±íÉèÖÃ
 *	2014-03-13 ±³¾°ÒôÀÖºÍ³¡¾°¸÷ÖÖÒôÐ§Ê¹ÓÃÍ¬Ò»¸ö³Ø×Ó£¬³Ø×Ó´óÐ¡¹Ì¶¨£¬²ÉÓÃ×î³¤Ê±¼äÎ´Ê±¼ä¼´Ìæ»»Ëã·¨¸üÐÂ³Ø×ÓÄÚÈÝ£¬
 *	³õÊ¼Ê±£¬Á¢¼´´´½¨m_SFXChannelsCount¸öAudioSource£¬ÓÃÓÚ²¥·Å±³¾°ÒôÀÖºÍÒôÐ§£¬Í¬Ê±ÄÜ¹»²¥·ÅµÄ×î´óÉùÒôÊýÒ²ÊÇm_SFXChannelsCount¸ö£¬
 *	ÁíÍâ£¬AudioSource¹Ò½ÓÔÚSoundManagerÕâ¸öÎïÌåÉÏ
*********************************************************************************/

using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Games.LogicObj;
using Games.GlobeDefine;
using Module.Log;
using Games.Scene;
using GCGame;


[Serializable]
public class SoundClip
{
    private AudioClip m_Audioclip;
    public AudioClip Audioclip
    {
        get { return m_Audioclip; }
        set { m_Audioclip = value; }
    }

    //±í¸ñÊý¾Ý
    public short m_priority = 128;
    public string m_name = string.Empty;
    public string m_path = string.Empty;
    public float m_minDistance = 10;
    public float m_volume = 1.0f;
    public float m_delay = 0.0f;
    public float m_panLevel = 0.0f;
    public float m_spread = 0.0f;
    public bool m_isLoop = false;
    public short m_curMaxPlayingCount = 1;
    public short m_uID = -1;

    //ÔËÐÐÊ±Êý¾Ý
    public float m_LastActiveTime = 0.0f;  //ÉÏ´Î»îÔ¾Ê±¼ä,ÉÏ´Î²¥·ÅÊ±¼ä
}

public class SoundClipPools
{
    public class SoundClipParam
    {
        public SoundClipParam(float volumeFactor)
        {
            m_volumeFactor = volumeFactor;
            m_fadeInTime = 0;
            m_fadeOutTime = 0;
        }

        public SoundClipParam(int clipId, float fadeOutTime, float fadeInTime)
        {
            m_volumeFactor = 1;
            m_fadeInTime = fadeInTime;
            m_fadeOutTime = fadeOutTime;
            m_clipID = (short)clipId;
        }

        public float m_volumeFactor;
        public float m_fadeOutTime;
        public float m_fadeInTime;
        public short m_clipID;
    }
    public delegate void GetSoundClipDelegate(SoundClip soundClip, SoundClipParam param);

    private Dictionary<int, SoundClip> m_SoundClipMap = new Dictionary<int,SoundClip>();    //ÒôÐ§ÁÐ±í£¬ÏÞÖÆ×î´óÊýÁ¿MAX

    /// <summary>
    /// ¸ù¾ÝÉùÒôÃû³ÆµÃµ½SoundClip£¬²»´æÔÚ»á×Ô¶¯Ìí¼Ó
    /// </summary>
    /// <param name="name">Ãû³Æ</param>
    /// <returns></returns>
    public void GetSoundClip(int nSoundId, GetSoundClipDelegate delFun, SoundClipParam param)
    {
        if (nSoundId >= 0)
        {
            if (m_SoundClipMap.ContainsKey(nSoundId))
            {
                //¸üÐÂÉÏ´Î²¥·ÅÊ±¼ä
                m_SoundClipMap[nSoundId].m_LastActiveTime = Time.realtimeSinceStartup;
                if (null != delFun) delFun(m_SoundClipMap[nSoundId], param);
                return;
            }
            else
            {
                if (m_SoundClipMap.Count > SoundManager.m_SFXChannelsCount) //³¬¹ý×î´óÖµ£¬É¾³ý×î³¤Ê±¼äÎ´Ê¹ÓÃµÄ
                {
                    //LogModule.DebugLog("Warnning m_SoundClipList.Count > " + SoundManager.m_SFXChannelsCount);
                    RemoveLastUnUsedClip();
                }

                Tab_Sounds soundsTab = TableManager.GetSoundsByID(nSoundId,0);
                if (soundsTab == null)
                {
                    LogModule.DebugLog("sound id " + nSoundId.ToString() + " is null");
                    if (null != delFun) delFun(null, param);
                    return;
                }

                string fullsoundName = soundsTab.FullPathName;
                if (string.IsNullOrEmpty(fullsoundName))
                {
                    if (null != delFun) delFun(null, param);
                    return;
                }

                if (GameManager.gameManager.SceneLogic == null)
                {
                    if (null != delFun) delFun(null, param);
                    return;
                }

                GameManager.gameManager.SceneLogic.StartCoroutine(BundleManager.LoadSound(fullsoundName, OnLoadSound, soundsTab, delFun, param));

            }
        }
    }

    void OnLoadSound(string soundPath, AudioClip curAudioClip, object param1, object param2, object param3 = null)
    {
        SoundClip clip = new SoundClip();
        clip.Audioclip = curAudioClip;
        GetSoundClipDelegate delFun = param2 as GetSoundClipDelegate;
        SoundClipParam soundClipParam = param3 as SoundClipParam;
        Tab_Sounds soundsTab = param1 as Tab_Sounds;
        if (null == clip.Audioclip)
        {
            LogModule.DebugLog("sound clip " + soundPath + " is null");
            if (null != delFun) delFun(null, soundClipParam);
            return;
        }

        if (!clip.Audioclip.isReadyToPlay)
        {
            LogModule.DebugLog("Cann't decompress the sound resource " + soundPath);
            if (null != delFun) delFun(null, soundClipParam);
            return;
        }
        clip.m_LastActiveTime = Time.realtimeSinceStartup;
        clip.m_delay = soundsTab.Delay;
        clip.m_minDistance = soundsTab.MinDistance;
        clip.m_panLevel = soundsTab.PanLevel;
        clip.m_spread = soundsTab.Spread;
        clip.m_volume = soundsTab.Volume;
        clip.m_isLoop = soundsTab.IsLoop;
        clip.m_path = soundPath;
        clip.m_name = soundsTab.Name;
        clip.m_uID = (short)soundsTab.Id;
        clip.m_curMaxPlayingCount = soundsTab.CurMaxPlayingCount;

        if (!m_SoundClipMap.ContainsKey(soundsTab.Id))
        {
            m_SoundClipMap.Add(soundsTab.Id, clip);
        }


        if (null != delFun) delFun(clip, soundClipParam);
    }
    /// <summary>
    /// É¾³ý×î³¤Ê±¼äÎ´Ê¹ÓÃµÄÌõÄ¿
    /// </summary>
    private void RemoveLastUnUsedClip()
    {
        float fSmallestTime = 99999999.0f;
        int smallestId = -1;
        foreach (SoundClip clip in m_SoundClipMap.Values)
        {
            if (fSmallestTime > clip.m_LastActiveTime)
            {
                smallestId = clip.m_uID;
                fSmallestTime = clip.m_LastActiveTime;
            }
        }

        LogModule.DebugLog("RemoveLastUnUsedClip( " + smallestId.ToString() + " )");  //ÒÔºó×¢ÊÍµô

        m_SoundClipMap.Remove(smallestId);

#if UNITY_WP8
        Tab_Sounds soundsTab = TableManager.GetSoundsByID(smallestId, 0);
        if (null != soundsTab)
        {
            BundleManager.ReleaseUnreferencedSoundBundle(BundleManager.GetBundleLoadUrl("", soundsTab.FullPathName + ".data"));
        }
#endif

    }

    //add by sunyu 2014-07-31
    //force Remove clip from pool, special for bgmusic
    public void ForceRemoveClipByID(short uid)
    {
        if(uid != -1)
        {
            int nNeeddelId = -1;
            foreach (SoundClip clip in m_SoundClipMap.Values) //dictionary µÄ foreachÈ¥²»µô
            {
                if(clip.m_uID == uid)
                {
                    nNeeddelId = clip.m_uID;
                    break;
                }
            }
            m_SoundClipMap.Remove(nNeeddelId);

#if UNITY_WP8
            Tab_Sounds soundsTab = TableManager.GetSoundsByID(nNeeddelId, 0);
            if (null != soundsTab)
            {
                BundleManager.ReleaseUnreferencedSoundBundle(BundleManager.GetBundleLoadUrl("", soundsTab.FullPathName + ".data"));
            }
#endif

        }
    }

//#if UNITY_WP8
//    public void RemoveAllClips()
//    {
//        foreach (int id in m_SoundClipMap.Keys)
//        {
//            Tab_Sounds soundsTab = TableManager.GetSoundsByID(id, 0);
//            if (null != soundsTab)
//            {
//                BundleManager.ReleaseUnreferencedBundle(BundleManager.GetBundleLoadUrl("", soundsTab.FullPathName + ".data"));
//            }
//        }

//        m_SoundClipMap.Clear();
//    }

//#endif

}

public class SoundManager : MonoBehaviour 
{
    public class MyAudioSource
    {
        public MyAudioSource()
        {
            m_uID = -1;
            m_AudioSource = null;
        }
        public short m_uID;         //ÉùÒô±í¸ñÅäµÄÎ¨Ò»±êÊ¾·û
        public AudioSource m_AudioSource;
    }

    public SoundClipPools m_SoundClipPools; //ÉùÒôÊý¾Ý³Ø 
    private MyAudioSource m_BGAudioSource = new MyAudioSource(); //±³¾°ÒôÀÖÔ´
    private float       m_CurBGVolume = 0; //µ±Ç°±³¾°ÒôÀÖÒôÁ¿
    public static int m_SFXChannelsCount = 30; //×î´óÉùµÀÊýÁ¿
    private MyAudioSource[] m_SFXChannel = new MyAudioSource[m_SFXChannelsCount]; //Sound FX£¬ÉùÒôÌØÐ§¡£
    private SoundClip m_NextSoundClip = null; 
    public static bool m_EnableBGM = true;     //ÊÇ·ñÆôÓÃ±³¾°ÒôÀÖ
    public static bool m_EnableSFX = true;      //ÊÇ·ñÆôÓÃ»·¾³ÒôÐ§
    private short m_lastMusicID = -1;     //ÉÏ´Î²¥·ÅµÄ³¡¾°±³¾°ÒôÀÖId£¬ÓÃÓÚÖÐ¶ÏºóÖØ²¥

    public float m_sfxVolume = 1.0f;        //ÒôÐ§ÒôÁ¿ÏµÊý
    public float m_bgmVolume = 1.0f;        //³¡¾°±³¾°ÒôÀÖÒôÁ¿ÏµÊý

    private enum FadeMode //²¥·ÅÄ£Ê½
    {
        None,
        FadeIn, //µ­Èë
        FadeOut //µ­³ö
    }
    private FadeMode m_fadeMode;
    private float m_fadeOutTime;
    private float m_fadeOutTimer;
    private float m_fadeInTime;
    private float m_fadeInTimer;

    public bool EnableSFX 
	{
		get{ return m_EnableSFX; }
		set{ m_EnableSFX = value; }
	}
	
	public bool EnableBGM
	{
		get{ return m_EnableBGM; }
		set
		{
			if( m_EnableBGM && !value )
			{
				if(m_BGAudioSource!=null)
				{
					if(m_BGAudioSource.m_AudioSource.isPlaying)
					{
						m_BGAudioSource.m_AudioSource.Stop();
					}
				}
			}
			else if(!m_EnableBGM && value)
			{
				if(m_BGAudioSource!=null)
				{
                    PlayBGMWithFade(m_lastMusicID, 0.1f, 0);
				}
			}
            m_EnableBGM = value;
		}
	}

    private float m_BGMPauseVolume = GlobeVar.INVALID_ID;
    private float[] m_SFXPauseVolume = new float[m_SFXChannelsCount];
    private bool m_NeedRecoverBGM = false;
    private bool m_NeedRecoverSFX = false;

    ////////////////////////////////////·½·¨ÊµÏÖ//////////////////////////////////////////
	
	void Awake()
	{
        DontDestroyOnLoad(this.gameObject);

        for (int i = 0; i < m_SFXChannelsCount; ++i)
        {
            m_SFXChannel[i] = new MyAudioSource();
            m_SFXChannel[i].m_uID = -1;
            m_SFXChannel[i].m_AudioSource = gameObject.AddComponent<AudioSource>() as AudioSource;
        }
        m_BGAudioSource.m_AudioSource = gameObject.AddComponent<AudioSource>() as AudioSource;
        m_BGAudioSource.m_uID = -1;
        m_SoundClipPools = new SoundClipPools();
	}
    void OnEnable()
    {
        /*if (PlayerPreferenceData.SystemMusic == 0)
        {
            EnableBGM = false;
        }
        if (PlayerPreferenceData.SystemSoundEffect == 0)
        {
            EnableSFX = false;
        }*/
	}
    

	void Start()
	{
        ChangeSoundState();
	}
	
    void FixedUpdate()
    {
        UpdateBGMusic();
    }
    public void ChangeSoundState()
    {
        m_BGAudioSource.m_AudioSource.volume = (float)PlayerPreferenceData.SystemMusicVoice / 100;

        if (PlayerPreferenceData.SystemMusic == 0 || PlayerPreferenceData.SystemMusicVoice == 0)
        {
            EnableBGM = false;
        }
        else
        {
            EnableBGM = true;
        }
        if (PlayerPreferenceData.SystemSoundEffect == 0 || PlayerPreferenceData.SystemSoundEffectVoice == 0)
        {
            EnableSFX = false;
        }
        else
        {
            EnableSFX = true;
        }
    }
//#if UNITY_WP8
//    public void ClearSoundClipPool()
//    {
//        m_SoundClipPools.RemoveAllClips();

//        for (int nIndex = 0; nIndex < m_SFXChannelsCount; ++nIndex)
//        {
//            if (m_SFXChannel[nIndex] != null)
//            {
//                m_SFXChannel[nIndex].m_uID = -1;
//                m_SFXChannel[nIndex].m_AudioSource.clip = null;
//            }
//        }
//    }

//#endif

    void UpdateBGMusic()
    {
        if (m_fadeMode == FadeMode.FadeOut)
        {
            if (Math.Abs(m_fadeOutTime) < 0.001f)
                return;  //±£»¤´úÂë

            m_fadeOutTimer += Time.deltaTime;
            m_BGAudioSource.m_AudioSource.volume = (1 - m_fadeOutTimer / m_fadeOutTime) * m_bgmVolume;
            if (m_fadeOutTimer >= m_fadeOutTime)
            {
                //add by sunyu 2014-07-31
                //force Remove clip from pool, special for bgmusic
                short deluid = m_BGAudioSource.m_uID;
                SetAudioSource(ref m_BGAudioSource, m_NextSoundClip, 1.0f);
#if UNITY_WP8
                if (m_BGAudioSource.m_uID != deluid)
                {
                    m_SoundClipPools.ForceRemoveClipByID(deluid);
                }
#else
                m_SoundClipPools.ForceRemoveClipByID(deluid);
#endif
                if (m_fadeInTime > 0)
                {
                    m_fadeMode = FadeMode.FadeIn;
                    m_fadeOutTimer = 0;
                    m_BGAudioSource.m_AudioSource.volume = 0;
                }
                else
                {
                    m_fadeMode = FadeMode.None;
                    //m_BGAudioSource.volume = m_bgmVolume;
                }
                m_BGAudioSource.m_AudioSource.Play();
            }
        }
        else if (m_fadeMode == FadeMode.FadeIn)
        {
            if (Math.Abs(m_fadeInTime) < 0.001f)
                return; //±£»¤´úÂë

            m_fadeInTimer += Time.deltaTime;
            m_BGAudioSource.m_AudioSource.volume = m_fadeInTimer / m_fadeInTime * m_bgmVolume;
            if (m_fadeInTimer >= m_fadeInTime)
            {
                m_fadeMode = FadeMode.None;
                m_fadeInTimer = 0;
                m_BGAudioSource.m_AudioSource.volume = m_CurBGVolume;
            }
        }
        else
        {
            //if(PlayerPreferenceData.SystemMusicVoice > 0)
            m_BGAudioSource.m_AudioSource.volume = (float)PlayerPreferenceData.SystemMusicVoice / 100;
        }
    }

    /// <summary>
    /// µ­Èëµ­³ö²¥·Å±³¾°ÒôÀÖ
    /// </summary>
    /// <param name="clipName"></param>
    /// <param name="fadeInTime">µ­ÈëÊ±¼ä</param>
    /// <param name="fadeOutTime">µ­³öÊ±¼ä</param>
    private void PlayBGMWithFade(int nSoundclipId, float fadeOutTime, float fadeInTime)
    {
        Debug.LogWarning("PlayBGMWithFade" + nSoundclipId);
        m_SoundClipPools.GetSoundClip(nSoundclipId, OnPlayBGMWithFade, new SoundClipPools.SoundClipParam(nSoundclipId, fadeOutTime, fadeInTime));
    }

    void OnPlayBGMWithFade(SoundClip bgSoundClip, SoundClipPools.SoundClipParam param)
    {
        if (m_BGAudioSource != null && bgSoundClip != null)
        {
            m_lastMusicID = param.m_clipID;
            if (m_BGAudioSource.m_AudioSource.isPlaying) //Õý³£²¥·ÅÉÏÒ»Ê×±³¾°ÒôÀÖ
            {
                if (m_NextSoundClip != null && m_NextSoundClip.m_uID == bgSoundClip.m_uID)
                {
                    return;
                }
                m_fadeOutTime = param.m_fadeOutTime;
                m_fadeInTime = param.m_fadeInTime;
                m_fadeOutTimer = 0;
                m_fadeInTimer = 0;
                if (m_fadeOutTime <= 0)
                {
                    //add by sunyu 2014-07-31
                    //force Remove clip from pool, special for bgmusic
                    short deluid = m_BGAudioSource.m_uID;
                    SetAudioSource(ref m_BGAudioSource, bgSoundClip, 1.0f);
#if UNITY_WP8
                    if (m_BGAudioSource.m_uID != deluid)
                    {
                        m_SoundClipPools.ForceRemoveClipByID(deluid);
                    }
#else
                    m_SoundClipPools.ForceRemoveClipByID(deluid);
#endif

                    m_CurBGVolume = bgSoundClip.m_volume;
                    if (m_fadeInTime <= 0)
                    {
                        m_BGAudioSource.m_AudioSource.Play();
                        m_fadeMode = FadeMode.None;
                    }
                    else
                    {
                        m_BGAudioSource.m_AudioSource.volume = 0;
                        m_BGAudioSource.m_AudioSource.Play();
                        m_fadeMode = FadeMode.FadeIn;
                    }
                }
                else
                {
                    m_NextSoundClip = bgSoundClip;
                    m_fadeMode = FadeMode.FadeOut;
                }
            }
            else //Ã»ÔÚ²¥·Å£¬Ö±½Ó²¥·Å
            {
                m_fadeInTime = param.m_fadeInTime;
                m_fadeInTimer = 0;

                //add by sunyu 2014-07-31
                //force Remove clip from pool, special for bgmusic
                short deluid = m_BGAudioSource.m_uID;
                SetAudioSource(ref m_BGAudioSource, bgSoundClip, 1.0f);
#if UNITY_WP8
                if (m_BGAudioSource.m_uID != deluid)
                {
                    m_SoundClipPools.ForceRemoveClipByID(deluid);
                }
#else
                m_SoundClipPools.ForceRemoveClipByID(deluid);
#endif

                m_CurBGVolume = bgSoundClip.m_volume;
                if (m_fadeInTime <= 0)
                {
                    m_BGAudioSource.m_AudioSource.Play();
                    m_fadeMode = FadeMode.None;
                }
                else
                {
                    m_BGAudioSource.m_AudioSource.volume = 0;
                    m_BGAudioSource.m_AudioSource.Play();
                    m_fadeMode = FadeMode.FadeIn;
                }
            }
        }
    }

    /// <summary>
    /// µ­Èëµ­³ö²¥·Å±³¾°ÒôÀÖ
    /// </summary>
    /// <param name="clipName"></param>
    /// <param name="fadeOutTime">µ­³öÊ±¼ä</param>
    /// <param name="fadeInTime">µ­ÈëÊ±¼ä</param>
    public void PlayBGMusic(int nClipID, float fadeOutTime, float fadeInTime)
    {
		if ( AudioListener.volume == 0 )
			return;

        if (nClipID < 0)
        {
            LogModule.ErrorLog("PlayBGM id < 0");
            return;
        }

        m_lastMusicID = (short)nClipID;

        if (m_EnableBGM)
        {
            PlayBGMWithFade(nClipID, fadeOutTime, fadeInTime);
        }
        else
		{
			 //m_BGAudioSource.clip = null;
		}
    }

    

    /// <summary>
    /// Í£Ö¹±³¾°ÒôÀÖ
    /// </summary>
    /// <param name="_fadeTime"></param>
    public void StopBGM(float _fadeTime)
    {
        if (m_EnableBGM)
        {
            StartCoroutine(StopBGMWithFade(_fadeTime));
        }
    }

    private IEnumerator StopBGMWithFade(float _fadeTime)
    {
        if (m_BGAudioSource != null)
        {
            if (m_BGAudioSource.m_AudioSource.isPlaying)
            {
                float time = _fadeTime;
                while (time > 0)
                {
                    m_BGAudioSource.m_AudioSource.volume = (time / m_fadeOutTime) * m_bgmVolume;
                    time -= Time.deltaTime;

                    yield return null;
                }

                m_BGAudioSource.m_AudioSource.Stop();
            }
        }
    }

    /// <summary>
    /// Í£Ö¹ÒôÐ§
    /// </summary>
    /// <param name="name">Ãû³Æ,ÉùÒô±í¸ñµÚÒ»ÁÐ</param>
    public void StopSoundEffect(int nSoundID)
    {
        if (nSoundID < 0) return;
        
        if (m_SFXChannel == null)
        {
            return;
        }

        for (int nIndex = 0; nIndex < m_SFXChannelsCount; nIndex++)
        {
            if (m_SFXChannel[nIndex].m_AudioSource == null)
            {
                continue;
            }

            if (m_SFXChannel[nIndex].m_uID == nSoundID)
            {
                m_SFXChannel[nIndex].m_AudioSource.Stop();
            }
        }
    }

    public void StopAllSoundEffect()
    {
        if (m_SFXChannel != null)
        {
            for (int nIndex = 0; nIndex < m_SFXChannelsCount; ++nIndex)
            {
                if (m_SFXChannel[nIndex] != null)
                {
                    m_SFXChannel[nIndex].m_AudioSource.Stop();
                }
            }
        }
    }

    public void MusicRecover()
    {
        /*m_BGAudioSource.m_AudioSource.volume = m_BGMPauseVolume;

        for (int nIndex = 0; nIndex < m_SFXChannelsCount; ++nIndex)
        {
            if (m_SFXChannel[nIndex] != null)
            {
                m_SFXChannel[nIndex].m_AudioSource.volume = m_SFXPauseVolume[nIndex];
            }
        }*/
        if (m_NeedRecoverBGM)
        {
            m_BGAudioSource.m_AudioSource.Play();
        }
        if (m_NeedRecoverSFX)
        {
            EnableSFX = true;
            if (GameManager.gameManager.ActiveScene != null)
            {
                GameManager.gameManager.ActiveScene.SetSceneSoundEffect(true);
            }
        }
        m_NeedRecoverBGM = false;
        m_NeedRecoverSFX = false;
    }

    public void MusicDown()
    {
        /*m_BGMPauseVolume = m_BGAudioSource.m_AudioSource.volume;
        m_BGAudioSource.m_AudioSource.volume = 0.1f;

        for (int nIndex = 0; nIndex < m_SFXChannelsCount; ++nIndex)
        {
            if (m_SFXChannel[nIndex] != null)
            {
                m_SFXPauseVolume[nIndex] = m_SFXChannel[nIndex].m_AudioSource.volume;
                m_SFXChannel[nIndex].m_AudioSource.volume = 0.1f;
            }
        }*/
        if (EnableBGM)
        {
            m_BGAudioSource.m_AudioSource.Pause();
            m_NeedRecoverBGM = true;
        }
        if (EnableSFX)
        {
            EnableSFX = false;
            if (GameManager.gameManager.ActiveScene != null)
            {
                GameManager.gameManager.ActiveScene.SetSceneSoundEffect(false);
            }
            m_NeedRecoverSFX = true;
        }
    }


    //////////////////////////////////²¥·ÅÒôÐ§////////////////////////////////////
    /// <summary>
    /// ¸ù¾ÝÄ¿±êµÄ×ø±êºÍ½ÓÊÕÕßµÄ×ø±êlistenerPosµÄ¾àÀëÀ´È·¶¨ÒôÁ¿,ÓÃÓÚ¼¼ÄÜÒôÐ§
    /// </summary>
    /// <param name="nSoundID"></param>
    /// <param name="playSoundPos"></param>
    /// <param name="listenerPos"></param>
    public void PlaySoundEffectAtPos(int nSoundID, Vector3 playSoundPos, Vector3 listenerPos)
    {
        if (nSoundID < 0)
        {
            return;
        }

        float volume = 1.0f;
        listenerPos.y = 0;
        playSoundPos.y = 0;

        float distance = Vector3.Distance(listenerPos, playSoundPos);

        volume = (1.0f - distance / 10.0f)*2.5f;
        if (volume < 0.01f)
        {
            volume = 0.01f;
            return;     //ÉùÒô¹ýµÍ¾Í·µ»Ø
        }
        else if (volume > 1.0f)
        {
            volume = 1.0f;
        }

        PlaySoundEffect(nSoundID, volume);
    }

    //////////////////////////////////²¥·ÅÒôÐ§////////////////////////////////////
    /// <summary>
    /// ¸ù¾ÝÄ¿±êµÄ×ø±êºÍ½ÓÊÕÕßµÄ×ø±êlistenerPosµÄ¾àÀëÀ´È·¶¨ÒôÁ¿£¬ÓÃÓÚÊÜ»÷¡¢ËÀÍö
    /// </summary>
    /// <param name="nSoundID"></param>
    /// <param name="playSoundPos"></param>
    /// <param name="listenerPos"></param>
    public void PlaySoundEffectAtPos2(int nSoundID, Vector3 playSoundPos, Vector3 listenerPos)
    {
        if (nSoundID < 0)
        {
            return;
        }

        float volume = 1.0f;
        listenerPos.y = 0;
        playSoundPos.y = 0;

        float distance = Vector3.Distance(listenerPos, playSoundPos);

        volume = (0.6f - distance / 10.0f)*1.67f;
        if (volume < 0.05f)
        {
            volume = 0.05f;
            return;     //ÉùÒô¹ýµÍ¾Í·µ»Ø
        }
        else if (volume > 1.0f)
        {
            volume = 1.0f;
        }

        PlaySoundEffect(nSoundID, volume);
    }


    /// <summary>
    /// ²¥·ÅÒôÐ§£¬Ä¬ÈÏÒôÁ¿Ëõ·ÅÏµÊý¿ÉÒÔ²»Ìî£¬Åä±íÖµ
    /// </summary>
    /// <param name="name"></param>
    /// <param name="volumeFactor">ÒôÁ¿Ëõ·ÅÏµÊý</param>
    /// <returns></returns>
    public void PlaySoundEffect(int nSoundID, float volumeFactor = 1.0f)
    {
        if (nSoundID < 0) return;
        if (nSoundID == 30) // ²ß»®ÒªÇó ,ÓÉÓÚºóÃæ¿ÉÄÜ»¹»áÔÙ³öÀ´£¬ÔÝÊ±ÆÁ±Î 30µÄ ÒôÐ§  
            return;

        if (AudioListener.volume == 0)
            return;

        if (!m_EnableSFX)
        {
            return;
        }

        if (name == null)
        {
            LogModule.ErrorLog("PlaySoundEffect name is null");
            return;
        }

        name = name.Trim();
        Debug.LogWarning("PlaySoundEffect : " + nSoundID);
        m_SoundClipPools.GetSoundClip(nSoundID, OnPlaySoundEffect, new SoundClipPools.SoundClipParam(volumeFactor));           
    }

    void OnPlaySoundEffect(SoundClip soundClip, SoundClipPools.SoundClipParam param)
    {
        if (soundClip == null)
        {
            LogModule.ErrorLog("soundClip is null");
            return;
        }
        PlaySoundEffect(soundClip, param.m_volumeFactor);
    }



    /// <summary>
    /// ²¥·ÅsoundClipÖÐµÄÒôÐ§
    /// </summary>
    /// <param name="soundClip"></param>
    /// <param name="volume"></param>
    /// <returns></returns>
    private void PlaySoundEffect(SoundClip soundClip, float volumeFactor)
    {
        if (m_EnableSFX && !string.IsNullOrEmpty(soundClip.m_path))
        {
            if (soundClip.Audioclip == null)
            {
                LogModule.ErrorLog("PlaySoundEffect soundClip.Audioclip is null");
                return;
            }

            int leastImportantIndex = 0;
            int nCurMaxPlayingCount = 0; //×î´ó²¥·Å´ÎÊý
            int nFirstEmptyIndex = -1; //µÚÒ»¸ö¿ÕÎ»
            int nFirstSameClipValidIndex = -1; //µÚÒ»¸öÒÑ¾­Í£Ö¹µÄÉÏ´Î²¥·Å¹ýµÄÎ»ÖÃ

            for (int nIndex = 0; nIndex < m_SFXChannelsCount; ++nIndex)   //ÏÈÕÒÒÑ¾­ÔÚ²¥·Å»òÕß²¥·Å¹ýµÄ
            {
                if (m_SFXChannel[nIndex] == null) return; //error

                if (nFirstEmptyIndex == -1 && !m_SFXChannel[nIndex].m_AudioSource.isPlaying)  //¼ÇÂ¼µÚÒ»¸ö¿ÉÓÃµÄ¿ÕÎ»ÖÃ
                {
                    nFirstEmptyIndex = nIndex;
                }

                if (m_SFXChannel[nIndex].m_AudioSource.clip == null) continue;

                if (m_SFXChannel[nIndex].m_uID == soundClip.m_uID) //ÓÐ²¥·Å¹ýµÄÄÚÈÝ
                {
                    if (nFirstSameClipValidIndex == -1 && !m_SFXChannel[nIndex].m_AudioSource.isPlaying)  //¼ÇÂ¼µÚÒ»¸öÒÑ¾­Í£Ö¹µÄÉÏ´Î²¥·Å¹ýµÄÎ»ÖÃ
                    {
                        nFirstSameClipValidIndex = nIndex;
                    }

                    if (m_SFXChannel[nIndex].m_AudioSource.isPlaying) ++nCurMaxPlayingCount;  //ÕýÔÚ²¥·ÅµÄ¼ÆÊý
                    if (nCurMaxPlayingCount >= soundClip.m_curMaxPlayingCount) //ÒÑ¾­³¬¹ýÁË£¬²»²¥·ÅÁË
                    {
                        break;
                    }
                }

                if (m_SFXChannel[leastImportantIndex].m_AudioSource.priority < m_SFXChannel[nIndex].m_AudioSource.priority)  //¼ÇÂ¼×îµÍÓÅÏÈ¼¶
                {
                    leastImportantIndex = nIndex;
                }
            }

            if (nCurMaxPlayingCount < soundClip.m_curMaxPlayingCount)    //Ã»µ½²¥·ÅÊýÁ¿ÏÞÖÆ£¬Ö±½Ó²¥·Å
            {
                int nValidIndex = -1;        //ÏÈÑ¡ÔñÒÑ¾­Í£Ö¹²¥·ÅµÄ£¬Èç¹ûÃ»ÓÐ£¬Ñ¡µÚÒ»¸ö¿ÕµÄ£¬Èç¹ûÒ²Ã»ÓÐ¿ÕµÄ£¬Ìæ»»ÓÅÏÈÊý×Ö×î¸ßµÄ
                if (nFirstSameClipValidIndex != -1)
                {
                    nValidIndex = nFirstSameClipValidIndex;
                }
                else
                {
                    if (nFirstEmptyIndex != -1)
                    {
                        nValidIndex = nFirstEmptyIndex;
                    }
                    else
                    {
                        nValidIndex = leastImportantIndex;
                    }
                }

                if (nValidIndex >= 0 && nValidIndex < m_SFXChannelsCount)
                {
                    m_SFXChannel[nValidIndex].m_AudioSource.Stop();
                    //ÎªÊ²Ã´ÊÇvoice£¿
                    float fSystemParam = (float)PlayerPreferenceData.SystemSoundEffectVoice / 100;

                    SetAudioSource(ref m_SFXChannel[nValidIndex], soundClip, volumeFactor * fSystemParam);
                    m_SFXChannel[nValidIndex].m_AudioSource.PlayDelayed(soundClip.m_delay);

                    return;// m_SFXChannel[nValidIndex]; 
                }
            }
            else
            {
                //´ïµ½²¥·ÅÉÏÏÞ£¬²»²¥·Å
                //LogModule.DebugLog("Warning PlaySoundEffect " + soundClip.m_name + " PlayingCount = " + nCurMaxPlayingCount);
            }

        }
    }

    //¸³Öµ
    private void SetAudioSource(ref MyAudioSource audioSource, SoundClip clip, float volumeFactor)
    {
        if (clip == null)
        {
            LogModule.ErrorLog("Error Clip null, please resolve");
            return;
        }
        audioSource.m_AudioSource.clip = clip.Audioclip;
        audioSource.m_AudioSource.volume = clip.m_volume * volumeFactor * m_sfxVolume;
        audioSource.m_AudioSource.spread = clip.m_spread;
        audioSource.m_AudioSource.priority = clip.m_priority;
        audioSource.m_AudioSource.spatialBlend = clip.m_panLevel;
        audioSource.m_AudioSource.minDistance = clip.m_minDistance;
        audioSource.m_AudioSource.loop = clip.m_isLoop;
        audioSource.m_uID = clip.m_uID;
    }

    //////////////////////////////////²¥·ÅÒôÐ§½áÊø////////////////////////////////////
	
}
