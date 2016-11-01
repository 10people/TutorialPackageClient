using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using System.Collections.Generic;

public class PowerLeftItem : MonoBehaviour {

    public UILabel labelScore;
    public UILabel labelLevel;
    public UISprite SpriteLevel;

    public int ItemLevel { set; get; }

	// Use this for initialization
	void Start () {
	
	}
	

    public void SetData(int type, int score, int level, bool setSlider = false)
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
            return;

        if( type > (int)BePowerData.BePowerType.BPTDEFINE_Null &&
            type < (int)BePowerData.BePowerType.BPTDEFINE_MAX)
        {
            BePowerData.BePowerType eType = (BePowerData.BePowerType)type;
            switch (eType)
            {
                case BePowerData.BePowerType.BPTDEFINE_BELLE:
                    int bellCombat = BelleData.GetActiveMatrixPowerNum();
                    SetLevel(eType, bellCombat, setSlider);
                    break;
                case BePowerData.BePowerType.BPTDEFINE_EQUIP:
                    int equipCombat = Singleton<ObjManager>.Instance.MainPlayer.GetTotalEquipCombatValue();
                    SetLevel(eType, equipCombat, setSlider);
                    break;
                case BePowerData.BePowerType.BPTDEFINE_FELLOW:
                    int fellowCombat = Singleton<ObjManager>.Instance.MainPlayer.GetTotalFellowCombatValue();
                    SetLevel(eType, fellowCombat, setSlider);
                    break;
                case BePowerData.BePowerType.BPTDEFINE_GEM:
                    int gemCombat = Singleton<ObjManager>.Instance.MainPlayer.GetTotalGemCombatValue();
                    SetLevel(eType, gemCombat, setSlider);
                    break;
                case BePowerData.BePowerType.BPTDEFINE_SKILL:
                    int skillCombat = Singleton<ObjManager>.Instance.MainPlayer.GetTotalStudySkillCombatValue();
                    SetLevel(eType, skillCombat, setSlider);
                    break;
                case BePowerData.BePowerType.BPTDEFINE_XIAKE:
                    int xkCombat = Singleton<ObjManager>.Instance.MainPlayer.GetTotalSwordsManCombat();
                    SetLevel(eType, xkCombat, setSlider);
                    break;
                default:
                    break;
            }
        }
    }

    void SetLevel( BePowerData.BePowerType type, int combat, bool setSlider )
    {
        if (labelLevel == null)
            return;

        int level = 5;
        Tab_BePowerLevel powerLevel = TableManager.GetBePowerLevelByID((int)type, 0);
        if (powerLevel != null)
        {
            for (int i = 0; i < powerLevel.getValueCount(); i++)
            {
                if (powerLevel.GetValuebyIndex(i) >= combat)
                {
                    level = powerLevel.GetLevelbyIndex(i);
                    break;
                }
            }
        }
        else
        {
            level = 1;
        }

        ItemLevel = level;

        switch (level)
        {
            case 1:
                labelLevel.text = Utils.GetDicByID(2376);
                //SpriteLevel.spriteName = "pingmin";
                SpriteLevel.spriteName = "dengjiC";
                break;
            case 2:
                labelLevel.text = Utils.GetDicByID(2377);
                //SpriteLevel.spriteName = "xiake";
                SpriteLevel.spriteName = "dengjiB";
                break;
            case 3:
                labelLevel.text = Utils.GetDicByID(2378);
                //SpriteLevel.spriteName = "yingxiong";
                SpriteLevel.spriteName = "dengjiA";
                break;
            case 4:
                labelLevel.text = Utils.GetDicByID(2379);
                //SpriteLevel.spriteName = "bazhu";
                SpriteLevel.spriteName = "dengjiS";
                break;
            case 5:
                labelLevel.text = Utils.GetDicByID(2380);
                //SpriteLevel.spriteName = "zongshi";
                SpriteLevel.spriteName = "dengjiSS";
                break;
            default:
                labelLevel.text = Utils.GetDicByID(2376);
                //SpriteLevel.spriteName = "pingmin";
                SpriteLevel.spriteName = "dengjiC";
                break;
        }

//2376	死亡推送_UI_20140623	[FFFFFF]平民
//2377	死亡推送_UI_20140623	[33CC66]侠客c
//2378	死亡推送_UI_20140623	[33CCFF]英雄
//2379	死亡推送_UI_20140623	[CC66FF]霸主
//2380	死亡推送_UI_20140623	[FF9933]宗师
    }
}
