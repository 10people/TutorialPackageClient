using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Module.Log;
using Games.GlobeDefine;
using Games.Item;
using System.Collections.Generic;
using Games.LogicObj;

public class PicGuideLogic : UIControllerBase<PicGuideLogic>
{
    public UILabel m_Title;
    public UILabel m_IntroductionA;
    public UILabel m_IntroductionB;
    public UISprite m_GuidePictureA;
    public UISprite m_GuidePictureB;

    public static int m_NewPlayerGuideIndex = GlobeVar.INVALID_ID;

    void Awake()
    {
        SetInstance(this);
    }

    void Start()
    {
        m_Title.text = StrDictionary.GetClientDictionaryString("#{5553}");
        m_IntroductionA.text = StrDictionary.GetClientDictionaryString("#{5554}");
        m_IntroductionB.text = StrDictionary.GetClientDictionaryString("#{5555}");
    }

    void OnDestroy()
    {
        SetInstance(null);
    }

    void OnClickButton()
    {
        UIManager.CloseUI(UIInfo.PicGuideRoot);

        if (m_NewPlayerGuideIndex == 0)
        {
            m_NewPlayerGuideIndex = GlobeVar.INVALID_ID;
            if (SkillBarLogic.Instance() != null)
            {
                SkillBarLogic.Instance().CrashBtnIntroGuide = true;
                SkillBarLogic.Instance().m_CrashBtn.SetActive(true);
                SkillBarLogic.Instance().NewPlayerGuide(6);
            }          
        }
    }
}
