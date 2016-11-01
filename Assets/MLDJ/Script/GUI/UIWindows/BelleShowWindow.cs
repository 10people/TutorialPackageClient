using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;

public class BelleShowWindow : MonoBehaviour
{
    void Awake()
    {
        UIManager.LoadItem(UIInfo.BelleShowItem, LoadSingleItemOver);
    }
    private static BelleShowWindow m_instance = null;
    public static BelleShowWindow Instance()
    {
        return m_instance;
    }
    // Use this for initialization
    void Start()
    {
        BelleOwnWindow.SetActive(false);
        m_instance = this;
    }

    void OnDisable()
    {
        ItemPerObj = null;
        m_instance = null;
    }

    void OnEnable()
    {
        if (!IsInit && ItemPerObj != null)
        {
            m_AttrDic.Clear();
            IsInit = true;
            int hasCount = 0;
			bool iscontain = true;
			bool isEnough = true;
            Dictionary<int, List<Tab_Belle>> allDataDic = TableManager.GetBelle();
            if (allDataDic != null && GridParent != null)
            {
                foreach (KeyValuePair<int, List<Tab_Belle>> pair in allDataDic)
                {
                    GameObject go = GameObject.Instantiate(ItemPerObj) as GameObject;
                    if (go != null)
                    {
                        go.transform.name = pair.Key.ToString();
                        go.transform.parent = GridParent;
                        go.transform.localPosition = Vector3.zero;
                        go.transform.localScale = Vector3.one;
                        m_GoFindIdDic.Add(go, pair.Key);
                        iscontain = BelleData.OwnedBelleMap.ContainsKey(pair.Key);
                        if (!iscontain)
                        {
                            go.transform.name = "z" + go.transform.name;
                        }

						isEnough = BelleData.RedPointBelleIds.Contains(pair.Key);//魔灵碎片是否足够生成魂器
						if (isEnough)
						{
							go.transform.name = "y" + go.transform.name;
						}


                        SetItemInfo(pair.Value[0], go, iscontain);
                        if (iscontain)
                        {
                            ++hasCount;
                            Belle curBelleData = BelleData.OwnedBelleMap[pair.Key];
                            curBelleData.UpdateAttrMap();
                            Dictionary<int, int> attrDic = curBelleData.attrMap;
                            foreach (KeyValuePair<int, int> attrpair in attrDic)
                            {
                                if (m_AttrDic.ContainsKey(attrpair.Key))
                                {
                                    m_AttrDic[attrpair.Key] += attrpair.Value;
                                }
                                else
                                {
                                    m_AttrDic.Add(attrpair.Key, attrpair.Value);
                                }
                            }
                            m_CombatAllValue += BelleData.GetPowerNum(curBelleData.attrMap);
                        }
                    }
                }
                Transform tf = transform.Find("labelBattle");
                if (tf != null)
                {
                    UILabel ul = tf.GetComponent<UILabel>();
                    if (ul != null)
                    {
                        ul.text = m_CombatAllValue.ToString();
                    }
                }
                tf = transform.Find("ProcessBar/processbarFront");
                if (tf != null)
                {
                    UISprite us = tf.GetComponent<UISprite>();
                    if (us != null)
                    {
                        us.fillAmount = (float)hasCount / allDataDic.Count;
                    }
                }
                if (CollectLabelLeft != null && CollectLabelRight != null)
                {
                    CollectLabelLeft.text = hasCount.ToString();
                    CollectLabelRight.text = allDataDic.Count.ToString();
                }
                if (AttrTypeName.Length == AttrData.Length)
                {
                    int labelcount = AttrData.Length;
                    int num = 0;
                    foreach (KeyValuePair<int, int> attrdicpair in m_AttrDic)
                    {
                        if (num < labelcount && AttrTypeName[num] != null && AttrData[num] != null)
                        {
                            AttrTypeName[num].text = GCGame.Utils.GetAttrTypeString(attrdicpair.Key);
                            AttrData[num].text = "+" + attrdicpair.Value;
                            AttrTypeName[num].gameObject.SetActive(true);
                            AttrData[num].gameObject.SetActive(true);
                            ++num;
                        }
                    }
                    for (int start = num; start < labelcount; ++start)
                    {
                        if (AttrTypeName[start] != null && AttrData[start] != null)
                        {
                            AttrTypeName[start].gameObject.SetActive(false);
                            AttrData[start].gameObject.SetActive(false);
                        }
                    }
                }
                UIGrid ug = GridParent.GetComponent<UIGrid>();
                if (ug != null)
                {
                    ug.repositionNow = true;
                }
            }
            ShowDefaultModel();
        }
        BelleItemsShowRedPoint();
    }
    public void BelleItemsShowRedPoint()
    {
        List<int> belleids = BelleData.RedPointBelleIds;
        foreach (KeyValuePair<GameObject, int> pair in m_GoFindIdDic)
        {
            Transform tf = pair.Key.transform.Find("RedPoint");
            if (tf != null)
            {
                if (belleids.Contains(pair.Value))
                {
                    tf.gameObject.SetActive(true);
                }
                else
                {
                    tf.gameObject.SetActive(false);
                }
            }
        }
    }
    public void UpdateNowClickGO()
    {
        int id;
        if (ItemClickGo != null)
        {
            if (m_GoFindIdDic.TryGetValue(ItemClickGo, out id))
            {
                List<Tab_Belle> belles = TableManager.GetBelleByID(id);
                if (belles != null && belles.Count > 0)
                {
                    SetItemInfo(belles[0], ItemClickGo, true);
                }
            }
        }
    }
    private void ItemClick(GameObject go)
    {
        int id;
        ItemClickGo = go;
        if (m_GoFindIdDic.TryGetValue(go, out id))
        {
            List<Tab_Belle> belles = TableManager.GetBelleByID(id);
            if (belles != null)
            {
                if (BelleData.OwnedBelleMap.ContainsKey(id))
                {
                    if (belles.Count > 0)
                    {
                        Tab_Belle belle = belles[0];
                        BelleInfoWindow.Instance().CurSellectedBelleData = belle;
                        BelleOwnWindow.SetActive(true);
                        BelleOwnWindow belleOwnwindow = BelleOwnWindow.GetComponent<BelleOwnWindow>();
                        if (belleOwnwindow != null)
                        {
                            belleOwnwindow.SetData();
                            belleOwnwindow.SetUpdateEva(true);
                            if (EffectController != null)
                            {
                                EffectController.gameObject.SetActive(false);
                            }
                        }
                    }
                }
                else
                {
                    Tab_Belle belle = belles[0];
                    BelleInfoWindow.Instance().CurSellectedBelleData = belle;
                    BelleUnOwnWindow.SetActive(true);
                    BelleUnOwnWindow belleUnOwnwindow = BelleUnOwnWindow.GetComponent<BelleUnOwnWindow>();
                    if (belleUnOwnwindow != null)
                    {
                        if (EffectController != null)
                        {
                            EffectController.gameObject.SetActive(false);
                        }
                    }
                }
            }
        }
        if (go.name.Equals("10") && BelleController.Instance().FTEIndex == 2)
        {
            BelleController.Instance().DoFTE(3);
        }
    }
    private void SetItemInfo(Tab_Belle tb, GameObject go, bool ishasbelle)
    {
        if (go != null && tb != null)
        {
            //if (ishasbelle) {
            UIEventListener.Get(go).onClick += ItemClick;
            //}
            UISprite usbg = go.transform.GetComponent<UISprite>();
            if (usbg != null)
            {
                if (ishasbelle)
                {
                    usbg.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
                }
                else
                {
                    usbg.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
                }
            }
            Transform tf = go.transform.Find("labelName");
            if (tf != null)
            {
                UILabel ul = tf.GetComponent<UILabel>();
                if (ul != null)
                {
                    if (ishasbelle)
                    {
                        ul.text = "[62FE9C]" + tb.Name + "[-]";
                    }
                    else
                    {
                        ul.text = tb.Name;
                    }
                }
            }
            Tab_CommonItem cItem = TableManager.GetCommonItemByID(tb.BelleItemID, 0);
            if (cItem != null)
            {
                tf = go.transform.Find("ItemIcon");
                if (tf != null)
                {
                    UISprite us = tf.GetComponent<UISprite>();
                    if (us != null)
                    {
                        us.spriteName = cItem.Icon;
                        if (ishasbelle)
                        {
                            us.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
                        }
                        else
                        {
                            us.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
                        }
                    }
                }
            }
            tf = go.transform.Find("QualitySprite");
            if (tf != null)
            {
                UISprite us = tf.GetComponent<UISprite>();
                if (us != null)
                {
                    if (ishasbelle)
                    {
                        us.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
                        us.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[BelleData.OwnedBelleMap[tb.Id].colorLevel - 1];//BelleData.GetBelleColorPicByColorLevel(BelleData.OwnedBelleMap[tb.Id].colorLevel);
                    }
                    else
                    {
                        us.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
                    }
                }
            }
            tf = go.transform.Find("level");
            if (tf != null)
            {
                UISprite us = tf.GetComponent<UISprite>();
                if (us != null)
                {
                    if (ishasbelle)
                    {
                        us.color = Games.GlobeDefine.GlobeVar.BUTTONCOLER;
                        us.spriteName = BelleData.GetBelleColorPicByColorLevel(BelleData.OwnedBelleMap[tb.Id].colorLevel);
                    }
                    else
                    {
                        us.color = Games.GlobeDefine.GlobeVar.BUTTONGRAY;
                    }
                }
            }
            tf = go.transform.Find("levelnum");
            if (tf != null)
            {
                UILabel ul = tf.GetComponent<UILabel>();
                if (ul != null)
                {
                    if (ishasbelle)
                    {
                        ul.text = "+" + BelleData.OwnedBelleMap[tb.Id].subLevel;
                    }
                    else
                    {
                        ul.text = "";
                    }
                }
            }
        }
    }
    private void LoadSingleItemOver(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            Module.Log.LogModule.ErrorLog("load ActivityRewardItem error");
            return;
        }
        ItemPerObj = resItem;
        OnEnable();
    }
    public void LeftClick()
    {
        if (EffectController != null)
        {
            //EffectController.ClearEffect();
            GameObject go = null;
            if (EffectGODic.TryGetValue(m_ShowBelleNum, out go))
            {
                if (go != null && m_ShowBelleNum > 0)
                {
                    go.SetActive(false);
                }
            }
            go = null;
            if (m_ShowBelleNum > 0)
            {
                --m_ShowBelleNum;
                if (BattleNum != null && AllBelleFightShow.Count > m_ShowBelleNum && AllBelleFightShow[m_ShowBelleNum] != null)
                {
                    BattleNum.text = AllBelleFightShow[m_ShowBelleNum].CombatForce.ToString();
                }
                if (EffectGODic.TryGetValue(m_ShowBelleNum, out go))
                {
                    if (go != null)
                    {
                        go.SetActive(true);
                        return;
                    }
                }
                if (AllBelleFightShow.Count > m_ShowBelleNum && AllBelleFightShow[m_ShowBelleNum] != null)
                {
                    EffectController.PlayEffect(AllBelleFightShow[m_ShowBelleNum].EffectId, PlayEffectOver);
                }
            }
        }
    }
    public void RightClick()
    {
        if (EffectController != null)
        {
            //EffectController.ClearEffect();
            GameObject go = null;
            if (EffectGODic.TryGetValue(m_ShowBelleNum, out go))
            {
                if (go != null && m_ShowBelleNum < (AllBelleFightShow.Count - 1))
                {
                    go.SetActive(false);
                }
            }
            if (m_ShowBelleNum < (AllBelleFightShow.Count - 1))
            {
                ++m_ShowBelleNum;
                if (BattleNum != null && AllBelleFightShow.Count > m_ShowBelleNum && AllBelleFightShow[m_ShowBelleNum] != null)
                {
                    BattleNum.text = AllBelleFightShow[m_ShowBelleNum].CombatForce.ToString();
                }
                if (EffectGODic.TryGetValue(m_ShowBelleNum, out go))
                {
                    if (go != null)
                    {
                        go.SetActive(true);
                        return;
                    }
                }
                if (AllBelleFightShow.Count > m_ShowBelleNum && AllBelleFightShow[m_ShowBelleNum] != null)
                {
                    EffectController.PlayEffect(AllBelleFightShow[m_ShowBelleNum].EffectId, PlayEffectOver);
                }
            }
        }
    }
    private void ShowDefaultModel()
    {
        Tab_BelleFightShow nowshow = null;
        Dictionary<int, List<Tab_BelleFightShow>> bfss = TableManager.GetBelleFightShow();
        foreach (KeyValuePair<int, List<Tab_BelleFightShow>> pair in bfss)
        {
            if (pair.Value != null && pair.Value.Count > 0)
            {
                if (nowshow == null)
                {
                    nowshow = pair.Value[0];
                }
                AllBelleFightShow.Add(pair.Value[0]);
                if (pair.Value[0].CombatForce < m_CombatAllValue)
                {
                    ++m_ShowBelleNum;
                    nowshow = pair.Value[0];
                }
            }
        }
        if (nowshow != null)
        {
            if (BattleNum != null)
            {
                BattleNum.text = nowshow.CombatForce.ToString();
            }
            if (EffectController != null)
            {
                EffectController.InitEffect(EffectController.gameObject);
                EffectController.PlayEffect(nowshow.EffectId, PlayEffectOver);
            }
        }
    }
    private void PlayEffectOver(GameObject effectObj, object param)
    {
        if (effectObj != null && effectObj.transform.parent != null)
            if (!EffectGODic.ContainsKey(m_ShowBelleNum))
            {
                EffectGODic.Add(m_ShowBelleNum, effectObj.transform.parent.gameObject);
            }
        Transform[] tfs = effectObj.GetComponentsInChildren<Transform>();
        if (tfs != null && tfs.Length > 0)
        {
            foreach (Transform tf in tfs)
            {
                if (tf != null)
                {
                    tf.gameObject.layer = LayerMask.NameToLayer("TipTop");
                }
            }
        }
    }
    public void ShowBelleFightEffectInt()
    {
        if (BelleFightEffectGo != null)
        {
            BelleFightEffectGo.SetActive(!BelleFightEffectGo.activeSelf);
        }
    }
    public GameObject BelleFightEffectGo;
    public UILabel CollectLabelLeft;
    public UILabel CollectLabelRight;
    public UILabel BattleNum;
    public GameObject LeftClickGO;
    public GameObject RightClickGO;
    public UIEffectBehaviourController EffectController;
    public GameObject BelleOwnWindow;
    public GameObject BelleUnOwnWindow;
    public UILabel[] AttrTypeName;
    public UILabel[] AttrData;
    public Transform GridParent = null;
    private int m_CombatAllValue = 0;
    private GameObject ItemPerObj = null;
    private GameObject ItemClickGo = null;
    private bool IsInit = false;
    private Dictionary<GameObject, int> m_GoFindIdDic = new Dictionary<GameObject, int>();
    private Dictionary<int, int> m_AttrDic = new Dictionary<int, int>();
    private int m_ShowBelleNum = -1;
    private List<Tab_BelleFightShow> AllBelleFightShow = new List<Tab_BelleFightShow>();
    private Dictionary<int, GameObject> EffectGODic = new Dictionary<int, GameObject>();
}
