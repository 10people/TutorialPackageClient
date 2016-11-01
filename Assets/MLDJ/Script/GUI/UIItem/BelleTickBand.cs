//     using UnityEngine;
// using System.Collections;
// using GCGame.Table;
// using GCGame;
// 
// public class BelleTickBand : MonoBehaviour {
// 
//     public UILabel LabelNextCloseTimeValue;
//     public UILabel LabelAlreadyCloseCount;
//     //public UILabel labelNextEvolutionTimeValue;
//     //public GameObject labelEvolution;
//     //public GameObject labelEvolutionRapid;
//     public UIImageButton btnClose;
//     public UIImageButton btnEvolution;
//     public UILabel labelCloseValue;
//     public GameObject objBelleCloseTip;
//     public UISlider sliderBelleExp;
//     public UILabel labelEvoItemCount;       // 进化材料数量
//     //private int m_curItemNextEvolutionTime;
//     private float m_curTimer = 1;
//     private int m_curBelleID = -1;
//     private bool m_bGuideMode = false;
// 
//     private Belle m_curBelleData;
//     // 新手指引
//     private int m_NewPlayerGuide_Step = -1;
// 
//     private bool m_bBeginProcessCloseBar = false;
//     public int NewPlayerGuide_Step
//     {
//         get { return m_NewPlayerGuide_Step; }
//         set { m_NewPlayerGuide_Step = value;}
//     }
// 
//     private static int m_freeCloseTime = -1;        // 变量在Start时根据表格赋值。
//     private static int m_maxCloseTime = -1;
// 
//     void Awake()
//     {
//         m_bGuideMode = false;
//         m_bBeginProcessCloseBar = false;
//         if (m_freeCloseTime < 0)
//         {
//             m_freeCloseTime = 0;
//             m_maxCloseTime = TableManager.GetBelleCloseCost().Count;
//             for (int i = 0; i < m_maxCloseTime; i++)
//             {
//                 Tab_BelleCloseCost cost = TableManager.GetBelleCloseCostByID(i, 0);
//                 if (cost != null && cost.YuanBaoCost > 0)
//                 {
//                     break;
//                 }
// 
//                 m_freeCloseTime++;
//             }
//         }
//     }
// 
//     void OnEnable()
//     {
//         BelleData.delClose += UpdateCloseState;
//         ShowCurBelleState();
//     }
// 
//     void OnDisable()
//     {
//         BelleData.delClose -= UpdateCloseState;
//     }
// 	
// 	// Update is called once per frame
// 	void Update () {
//        
//         UpdateTickBand();
// 
//         if (m_bBeginProcessCloseBar)
//         {
//             float curSliderValue = sliderBelleExp.value;
//             float curFavorValue = m_curBelleData.favourValue / 100.0f;
//             if (curSliderValue > curFavorValue)
//             {
//                 sliderBelleExp.value += 0.03f;
// 
//                 if (sliderBelleExp.value >= 1.0f)
//                 {
//                     sliderBelleExp.value = 0;
//                 }
//             }
//             else if (curSliderValue <= curFavorValue)
//             {
//                 sliderBelleExp.value += 0.03f;
// 
//                 if (sliderBelleExp.value >= curFavorValue)
//                 {
//                     sliderBelleExp.value = curFavorValue;
//                     m_bBeginProcessCloseBar = false;
//                 }
//             }
//         }
// 	}
// 
//     // 更新倒计时板
//     void UpdateTickBand()
//     {
//         m_curTimer += Time.deltaTime;
//         if (m_curTimer < 1)
//         {
//             return;
//         }
// 
//         m_curTimer = 0;
//         // 背包物品同步无法做到进化后立即获取，所以在Update里更新。
//         if (GameManager.gameManager.PlayerDataPool == null)
//         {
//             return;
//         }
//         Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
//         if (backPack == null)
//         {
//             return;
//         }
//         int evoItemCount = backPack.GetItemCountByDataId(28);
//         labelEvoItemCount.text = StrDictionary.GetClientDictionaryString("#{3231}", evoItemCount);
//         Utils.SetTimeDiffToLabel(LabelNextCloseTimeValue, BelleData.GetBelleCloseTimeDiff());
//         //Utils.SetTimeDiffToLabel(labelNextEvolutionTimeValue, EvolutionTimeDiff());
//         UpdateButtonState();
//     }
// 
//     // 更新按钮状态
//     void UpdateButtonState()
//     {
//         btnClose.isEnabled =BelleData.GetBelleCloseTimeDiff() <= 0 && BelleData.dayCloseTime < m_maxCloseTime;
//         if (objBelleCloseTip.activeSelf != BelleData.IsCanCloseFree())
//         {
//             objBelleCloseTip.SetActive(BelleData.IsCanCloseFree());
//         }
//         
//         //labelEvolution.SetActive(EvolutionTimeDiff() <= 0);
//         //labelEvolutionRapid.SetActive(EvolutionTimeDiff() > 0);
//         if (null != m_curBelleData)
//         {
//             Tab_BelleLevelup curTabBelleLevel = TableManager.GetBelleLevelupByID(m_curBelleData.orgLevel, 0);
//             btnEvolution.isEnabled = curTabBelleLevel != null;
//         }
//     }
// 
//     public void ShowCurBelleState()
//     {
//         ShowBelleState(m_curBelleID);
//     }
// 
//     public void UpdateCloseState()
//     {
//         ShowCurBelleState();
//         m_bBeginProcessCloseBar = true;
//         sliderBelleExp.value += 0.01f;
//     }
// 
//     /*
//     // 距离下次进化还有多少秒
//     int EvolutionTimeDiff()
//     {
//         return m_curItemNextEvolutionTime - (int)Time.realtimeSinceStartup;
//     }
//     */
// 
//     // 更新亲密时间标签
//     void UpdateCloseTimeLabel()
//     {
//         if (BelleData.dayCloseTime < m_freeCloseTime)
//         {
//             LabelAlreadyCloseCount.text = StrDictionary.GetClientDictionaryString("#{1306}", BelleData.dayCloseTime, m_freeCloseTime);
//         }
//         else
//         {
//             LabelAlreadyCloseCount.text = StrDictionary.GetClientDictionaryString("#{2493}", BelleData.dayCloseTime - m_freeCloseTime, m_maxCloseTime - m_freeCloseTime);
//         }
//         
//     }
// 
//     public void ShowBelleState(int belleID)
//     {
//         if(!BelleData.OwnedBelleMap.ContainsKey(belleID))
//         {
//             return;
//         }
// 
// 		if (!BelleData.OwnedBelleMap.ContainsKey(belleID))
//         {
//             return;
//         }
//         Belle curBelle = BelleData.OwnedBelleMap[belleID];
//         if (curBelle == null)
//         {
//             return;
//         }
//         //m_curItemNextEvolutionTime = curBelle.nextEvolutionTime;
//         m_curBelleID = curBelle.id;
//         m_curTimer = 1;
//         m_curBelleData = curBelle;
//         labelCloseValue.text = "(" + curBelle.favourValue.ToString() + "/100)";
//         sliderBelleExp.value = curBelle.favourValue / 100.0f;
//        
//         UpdateCloseTimeLabel();
//         UpdateTickBand();
// 
//         m_bBeginProcessCloseBar = false;
//     }
// 
//     // 进化按钮响应
//     void OnEvolutionClick()
//     {
//         
//         // 新手指引
//         if (m_NewPlayerGuide_Step == 2)
//         {
//             m_bGuideMode = true;
//             NewPlayerGuide(3);
//         }
// 
//         BelleEvolution();
//         /*
//         if (labelEvolution.activeSelf)
//         {
//             BelleEvolution();
//         }
//         else
//         {
//             BelleEvolutionRapid();
//         }
//          * */
//     }
// 
//     // 亲密按钮响应
//     void OnCloseBelleClick()
//     {
//         if (m_curBelleID < 0) return;
//         
//          //新手指引
//         if (m_NewPlayerGuide_Step == 1)
//         {
//             NewPlayerGuide(2);
//         }
// 
//         Tab_BelleCloseCost curCost = TableManager.GetBelleCloseCostByID(BelleData.dayCloseTime, 0);
//         if(null == curCost)
//         {
//             return;
//         }
// 
// 
// 
//         if (curCost.YuanBaoCost > 0)
//         {
//             string tip = StrDictionary.GetClientDictionaryString("#{5292}", curCost.YuanBaoCost);
//             MessageBoxLogic.OpenOKCancelBox(tip, "", DoBelleClose);
//         }
//         else
//         {
//             DoBelleClose();
//         }
//     }
// 
//     void BelleEvolution()
//     {
//         if (m_curBelleID < 0) return;
//         if (!BelleData.OwnedBelleMap.ContainsKey(m_curBelleID))
//         {
//             return;
//         }
// 
//         if (m_bGuideMode)
//         {
//             DoEvlolution();
//         }
//         else
//         {
//             Belle curBelle = BelleData.OwnedBelleMap[m_curBelleID];
// 
//             int nextBelleLevel = curBelle.subLevel + 1;
//             if (nextBelleLevel > 9)
//             {
//                 nextBelleLevel = 1;
//             }
//             Tab_BelleLevelup curTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelle.orgLevel, 0);
//             string strTip = "";
//             
//             if (null != curTabBelleLevelup)
//             {
//                 strTip = StrDictionary.GetClientDictionaryString("#{1404}", nextBelleLevel, curTabBelleLevelup.GetConsumeNumbyIndex(0), curTabBelleLevelup.GetConsumeNumbyIndex(1));
//             }
// 
//             MessageBoxLogic.OpenOKCancelBox(strTip,"", DoEvlolution);
//         }
//         
//     }
// 
//     /*
//     void BelleEvolutionRapid()
//     {
//         if (m_curBelleID < 0) return;
//         string tip = StrDictionary.GetClientDictionaryString("#{1400}") +(int)(EvolutionTimeDiff() * 0.42f/60.0f + 1.0f) + StrDictionary.GetClientDictionaryString("#{1401}");
//         MessageBoxLogic.OpenOKCancelBox(tip, "", DoBelleEvolutionRapid);
//     }
//     */
//     void DoBelleClose()
//     {
//         CG_BELLE_CLOSE closeRequest = (CG_BELLE_CLOSE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_CLOSE);
//         closeRequest.SetBelleID(m_curBelleID);
//         closeRequest.SendPacket();
//     }
// 
//     void DoEvlolution()
//     {
//         BelleData.delEvolution = ShowCurBelleState;
//         CG_BELLE_EVOLUTION evolutionRequest = (CG_BELLE_EVOLUTION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_EVOLUTION);
//         evolutionRequest.SetBelleID(m_curBelleID);
//         evolutionRequest.SendPacket();
//     }
//     void DoBelleEvolutionRapid()
//     {
//         CG_BELLE_EVOLUTIONRAPID evolutionRequest = (CG_BELLE_EVOLUTIONRAPID)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_EVOLUTIONRAPID);
//         evolutionRequest.SetBelleID(m_curBelleID);
//         evolutionRequest.SendPacket();
//     }
// 
// 
//     public void NewPlayerGuide(int nIndex)
//     {
//         m_NewPlayerGuide_Step = nIndex;
//         switch (nIndex)
//         {
//             case 1:
//                 {
//                     if (btnClose)
//                     {
//                         if (btnClose.isEnabled)
//                         {
//                             NewPlayerGuidLogic.OpenWindow(btnClose.gameObject, 180, 70, "", "right", 0, true, true);
//                         }
//                         else
//                         {
//                             NewPlayerGuide(2);
//                         }
//                     }
//                 }
//                 break;
//             case 2:
//                 {
//                     if (btnEvolution)
//                     {
//                         NewPlayerGuidLogic.OpenWindow(btnEvolution.gameObject, 180, 70, "", "right", 0, true, true);
//                     }
//                 }
//                 break;
//             case 3:
//                 {
//                     if (BelleController.Instance())
//                     {
//                         BelleController.Instance().NewPlayerGuide(2);
//                     }
//                     m_NewPlayerGuide_Step = -1;
//                 }
//                 break;
//         }
//     }
// }
