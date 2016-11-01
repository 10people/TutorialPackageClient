using UnityEngine;
using System.Collections;

public class VoiceChatSetup : MonoBehaviour {

    public UIToggle m_AutoVoiceChatDownload_Friend;     // 自动下载好友频道语音
    public UIToggle m_AutoVoiceChatDownload_Team;       // 自动下载队伍频道语音
    public UIToggle m_AutoVoiceChatDownload_Guild;      // 自动下载帮会频道语音
    public UIToggle m_AutoVoiceChatDownload_Master;     // 自动下载师门频道语音
	

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnEnable()
    {
        if (AutoFightLogic.Instance())
        {
            AutoFightLogic.Instance().AutoFightOK(); //切UI的时候存储挂机设置
        }
        m_AutoVoiceChatDownload_Friend.value = PlayerPreferenceData.AutoDownloadVoiceChat_Friend;
        m_AutoVoiceChatDownload_Team.value = PlayerPreferenceData.AutoDownloadVoiceChat_Team;
        m_AutoVoiceChatDownload_Guild.value = PlayerPreferenceData.AutoDownloadVoiceChat_Guild;
        m_AutoVoiceChatDownload_Master.value = PlayerPreferenceData.AutoDownloadVoiceChat_Master;

		//if (PlayerPreferenceData.IsFirstOpenMusicGame == true)
		{
			//m_MusicSlider.value = 0.99f ;
			//PlayerPreferenceData.SystemMusicVoice = 99 ;
          //  PlayerPreferenceData.IsFirstOpenMusicGame = false;
		}
		//else
		{
            m_MusicSlider.value = (float)PlayerPreferenceData.SystemMusicVoice /100;
		}

		m_Music.value = PlayerPreferenceData.SystemMusic == 1 ? true : false;

		//if (PlayerPreferenceData.IsFirstOpenVioceGame == true) 
		{
		//	PlayerPreferenceData.SystemSoundEffectVoice = 99 ;
		//	m_SoundSlider.value = 0.99f ;
       //     PlayerPreferenceData.IsFirstOpenVioceGame = false;
		}

		//else
		{
            m_SoundSlider.value = (float)PlayerPreferenceData.SystemSoundEffectVoice /100;
		}
		m_SoundEffect.value = PlayerPreferenceData.SystemSoundEffect == 1 ? true : false;
    }

    public void OnChangeVoiceChatDownload_Friend()
    {
        PlayerPreferenceData.AutoDownloadVoiceChat_Friend = m_AutoVoiceChatDownload_Friend.value;
    }

    public void OnChangeVoiceChatDownload_Team()
    {
        PlayerPreferenceData.AutoDownloadVoiceChat_Team = m_AutoVoiceChatDownload_Team.value;
    }

    public void OnChangeVoiceChatDownload_Guild()
    {
        PlayerPreferenceData.AutoDownloadVoiceChat_Guild = m_AutoVoiceChatDownload_Guild.value;
    }

    public void OnChangeVoiceChatDownload_Master()
    {
        PlayerPreferenceData.AutoDownloadVoiceChat_Master = m_AutoVoiceChatDownload_Master.value;
    }

	//================================================================
	public UIToggle  m_Music ;
	public UISlider  m_MusicSlider ;
	public UILabel    m_Music_Lab ;
	public UILabel    m_Music_Pre ;    // 百分比文字
	public UIToggle  m_SoundEffect ;
	public UISlider  m_SoundSlider ;
	public UILabel    m_SoundEffect_Lab;  //音效
	public UILabel    m_SoundEffect_Pre ;    // 百分比文字

	private Color m_ChooseColor = new Color(0/255f,247/255f,235/255f);
	private Color m_NoChooseColor = new Color(10/255f,125/255f,123/255f);

	public void OnMusic()
	{
		GameManager.gameManager.SoundManager.EnableBGM = m_Music.value;
		PlayerPreferenceData.SystemMusic = m_Music.value ? 1 : 0;

		if (m_Music.value == true) 
		{
			m_Music_Lab.color = m_ChooseColor ;
			m_Music_Pre.color = m_ChooseColor ;
			m_ThumbMusicHightBack.SetActive(true);
		}

		else if(m_Music.value == false )
		{
			m_Music_Lab.color = m_NoChooseColor ;
			m_Music_Pre.color = m_NoChooseColor ;
			m_ThumbMusicHightBack.SetActive(false);
		}
	}
	public void OnMusicChange()
	{
		m_Music_Pre.text = ((int)(m_MusicSlider.value * 99 )).ToString(); 
		PlayerPreferenceData.SystemMusicVoice =(int) (m_MusicSlider.value * 100);
	}
	public void 	OnSoundChange()
	{
		m_SoundEffect_Pre.text = ((int)(m_SoundSlider.value * 99 )).ToString(); 
		PlayerPreferenceData.SystemSoundEffectVoice = (int)(m_SoundSlider.value * 100);
	}
	public void OnSoundEffect()
	{
		GameManager.gameManager.SoundManager.EnableSFX = m_SoundEffect.value;
		PlayerPreferenceData.SystemSoundEffect = m_SoundEffect.value ? 1 : 0;
		
		if (GameManager.gameManager.ActiveScene != null)
		{
			GameManager.gameManager.ActiveScene.SetSceneSoundEffect(m_SoundEffect.value);
		}

		if (m_SoundEffect.value == true) 
		{
			m_SoundEffect_Lab.color = m_ChooseColor ;
			m_SoundEffect_Pre.color = m_ChooseColor ;
			m_ThumbSoundHightBack.SetActive(true);
		}
		
		else if(m_SoundEffect.value == false )
		{
			m_SoundEffect_Lab.color = m_NoChooseColor ;
			m_SoundEffect_Pre.color = m_NoChooseColor ;
			m_ThumbSoundHightBack.SetActive(false);
		}
	}
	//========================================================
	public GameObject m_ThumbMusicHightBack ;
	public GameObject m_ThumbSoundHightBack ;

}
