using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;

public class WuLinOpponentViewWindow : MonoBehaviour
{
    public UILabel Countdown;
    public UISprite HeadIcon;
    public UILabel Name;
    public UILabel CombatNum;
    public UILabel HP;
    public UILabel MP;
    public UILabel Attack;
    public UILabel Defense;
    public UILabel Critical;
    public UILabel Speed;
    public UILabel dodge;
    public UILabel Profession;
    public UILabel progress;
    public UILabel searchTip;
    
    private int UIStage { set; get; }
    private int SearchSecond { set; get; }

	// Use this for initialization
	void Start () 
	{
		InvokeRepeating ("CountdownSrearch", 1.0f, 1.0f);
	}

    void OnEnable()
    {
        SearchSecond = 0;
        UIStage = 0;
        WuLinData.delegateShowOpponentViewInfo += ShowOpponentView;
        WuLinData.delegateShowSearchOpponent += ShowSearchOppoent;
        WuLinData.delegateShowWaitForOpponet += ShowWaitForOpponent;
    }

    void OnDisable()
    {
        WuLinData.delegateShowOpponentViewInfo -= ShowOpponentView;
        WuLinData.delegateShowSearchOpponent -= ShowSearchOppoent;
        WuLinData.delegateShowWaitForOpponet -= ShowWaitForOpponent;
    }


	void CountdownSrearch () {
	    if( SearchSecond > 0 )
        {
       		Countdown.text = StrDictionary.GetClientDictionaryString("#{4809}", SearchSecond);
        	SearchSecond--;
        }
	}

    void ShowWaitForOpponent( )
    {
        string text = StrDictionary.GetClientDictionaryString("#{2344}");
        //searchTip.text = text;
        Countdown.text = text;
    }

	void ShowOpponentView()
	{
        UIStage = 1;
        SearchSecond = 0;
        progress.text = WuLinData.WuLinRounderTip();
        if (WuLinData.OppoViewInfo.guid == Games.GlobeDefine.GlobeVar.INVALID_GUID)
        {
            string text = "";
            if (WuLinData.Rounder == 1)
            {
                text = StrDictionary.GetClientDictionaryString("#{4813}");
            }
            else
            {
                string roundTips = WuLinData.WuLinRoundTipPrefix();
                text = StrDictionary.GetClientDictionaryString("#{4814}", roundTips);
            }

            searchTip.text = text;
            Countdown.text = text;

        }
        else
        {
            searchTip.text = Utils.GetDicByID(1845);
            Countdown.text = Utils.GetDicByID(1845);
            int id = (int)WuLinData.OppoViewInfo.profession;
            Tab_RoleBaseAttr roleBaseAttr = TableManager.GetRoleBaseAttrByID(id, 0);
            if (roleBaseAttr != null)
            {
                Tab_CharModel charModel = TableManager.GetCharModelByID(roleBaseAttr.CharModelID, 0);
                if (charModel != null)
                {
                    HeadIcon.spriteName = charModel.HeadPic;
                }
            }
           // if( id >= 0 && id <  CharacterDefine.PROFESSION_DICNUM.Length)
            {
                Profession.text = Utils.GetProfessionNameByType(id);
                    //Utils.GetDicByID(CharacterDefine.PROFESSION_DICNUM[id]);
            }
        }

        Name.text = WuLinData.OppoViewInfo.name;
        CombatNum.text = WuLinData.OppoViewInfo.combat.ToString();
        HP.text = WuLinData.OppoViewInfo.hp.ToString();
        MP.text = WuLinData.OppoViewInfo.mp.ToString();
        Attack.text = WuLinData.OppoViewInfo.atk.ToString();
        Defense.text = WuLinData.OppoViewInfo.def.ToString();
        Critical.text = WuLinData.OppoViewInfo.cri.ToString();
        Speed.text = WuLinData.OppoViewInfo.spd.ToString();
        dodge.text = WuLinData.OppoViewInfo.dge.ToString();
	}

    void ShowSearchOppoent(int continueSecond, int Progress)
    {
        UIStage = 0;
        SearchSecond = continueSecond;
        Countdown.text = StrDictionary.GetClientDictionaryString("#{4809}", SearchSecond);
        searchTip.text = Utils.GetDicByID(4810);
        progress.text = WuLinData.WuLinRounderTip();
        CleanViewInfoUI();
    }

    void CleanViewInfoUI()
    {
        HeadIcon.spriteName ="";
        Name.text = "";
        CombatNum.text = "";
        HP.text = "";
        MP.text = "";
        Attack.text = "";
        Defense.text = "";
        Critical.text = "";
        Speed.text = "";
        dodge.text = "";
    }

    void OnClickPkInfo()
    {
        CG_REQ_HUASHAN_PKINFO packet = (CG_REQ_HUASHAN_PKINFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_HUASHAN_PKINFO);
        packet.None = 0;
        packet.SendPacket();
    }
}
