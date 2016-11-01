using UnityEngine;
using System.Collections;

public class ChatInfoSelectLinkEmotionItemLogic : ChatInfoSelectLinkItemLogic
{

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public override void Init(ChatInfoSelectLinkLogic.Data data, int index)
    {
        base.Init(data, index);

        string strPrefabName = "";
        if (index < 10)
        {
            strPrefabName = "EmotionButton" + "0" + index.ToString();
        }
        else
        {
            strPrefabName = "EmotionButton" + index.ToString();
        }
        this.name = strPrefabName;
        this.GetComponent<UISprite>().spriteName = "emotion (" + (index + 1).ToString() + ")";
    }
}
