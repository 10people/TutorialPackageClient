// using UnityEngine;
// using System.Collections;
// using GCGame.Table;
// using Module.Log;
// 
// public class BelleDetailWindow : MonoBehaviour {
// 
//    
//     public BelleDetailBand belleDetailBand;
//     public BelleTickBand belleTickBand;
//     public GameObject btnBattle;
//     public GameObject btnRest;
//     public UITexture texCard;
//     public GameObject objCardDrag;
//     public GameObject objUnActive;
// 
//     private int m_belleID;
// 
//     private bool m_bBeginTouch =false;
//     private float m_dragDiff = 0;
//     private float m_dragCooldownTimer = 0;
//     private const float m_dragMax = 30.0f;
//     public void ShowBelle(int id)
//     {
//         Tab_Belle curBelle = TableManager.GetBelleByID(id, 0);
//         if (null == curBelle)
//         {
//             LogModule.ErrorLog("can not find cur belle id:" + id);
//             return;
//         }
// 
//         SetData(id, curBelle);
//     }
// 
//     void Start()
//     {
//         UIEventListener.Get(objCardDrag).onDrag = OnCardDrag;
//     }
//   
//     void OnEnable()
//     {
//         BelleData.delRest += Ret_Rest;
//         BelleData.delEvolutionRapid += OnUpdateCurrentBelle;
//         BelleData.delClose += OnUpdateCurrentBelle;
//     }
// 
//     void OnDisable()
//     {
//         BelleData.delRest -= Ret_Rest;
//         BelleData.delEvolutionRapid -= OnUpdateCurrentBelle;
//         BelleData.delClose -= OnUpdateCurrentBelle;
//     }
// 
//     void SetData(int belleID, Tab_Belle tabBelle)
//     {
//         texCard.mainTexture = ResourceManager.LoadResource(BelleData.GetBelleBigTextureName(tabBelle), typeof(Texture)) as Texture;
//         belleDetailBand.SetBelle(belleID);
// 
//         btnBattle.SetActive(false);
//         btnRest.SetActive(false);
//         if (BelleData.OwnedBelleMap.ContainsKey(belleID))
//         {
//             objUnActive.SetActive(false);
//             belleTickBand.ShowBelleState(belleID);
//             belleTickBand.gameObject.SetActive(true);
//             if (BelleData.OwnedBelleMap[belleID].matrixID >= 0)
//             {
//                 btnRest.SetActive(true);
//             }
//             else
//             {
//                 btnBattle.SetActive(true);
//             }
//         }
//         else
//         {
//             belleTickBand.gameObject.SetActive(false);
//             objUnActive.SetActive(true);
//         }
// 
//         m_belleID = belleID;
//     }
// 
//     void OnUpdateCurrentBelle()
//     {
//         ShowBelle(m_belleID);
//     }
// 
//    
// 
//     void OnBattleClick()
//     {
//         if (null != BelleController.Instance())
//         {
//             BelleController.Instance().ChangeMatrixWindow();
//             //BelleController.Instance().SelectMatrix(m_belleID, BelleMatrixWindow.SelectFromType.TYPE_BELLEDETAIL);
//         }
//     }
// 
//     void OnRestClick()
//     {
//         CG_BELLE_REST restRequest = (CG_BELLE_REST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_REST);
//         restRequest.SetBelleID(m_belleID);
//         restRequest.SendPacket();
//     }
// 
//     void OnCardDrag(GameObject obj, Vector2 vec)
//     {
//         if (m_bBeginTouch)
//         {
//             m_dragDiff += vec.x;
//         }
//     }
// 
//     void OnCardPress()
//     {
//         if (Time.realtimeSinceStartup - m_dragCooldownTimer < 0.3f)
//         {
//             return;
//         }
// 
//         m_dragCooldownTimer = Time.realtimeSinceStartup;
//         m_bBeginTouch = true;
//         m_dragDiff = 0;
//     }
// 
//     void OnCardRelease()
//     {
//         m_bBeginTouch = false;
//         int nextBelleCard = m_belleID;
//         if (m_dragDiff < -m_dragMax)
//         {
//             nextBelleCard = m_belleID + 1;
//         }
//         else if (m_dragDiff > m_dragMax)
//         {
//             nextBelleCard = m_belleID - 1;
//         }
// 
//         m_dragDiff = 0;
//         if (m_belleID == nextBelleCard || nextBelleCard < 0 || nextBelleCard >= TableManager.GetBelle().Count)
//         {
//             return;
//         }
// 
//         ShowBelle(nextBelleCard);
// 
//         
//     }
//     void Ret_Rest()
//     {
//         if (BelleData.OwnedBelleMap.ContainsKey(m_belleID))
//         {
//             if (BelleData.OwnedBelleMap[m_belleID].matrixID >= 0)
//             {
//                 btnRest.SetActive(true);
//                 btnBattle.SetActive(false);
//             }
//             else
//             {
//                 btnBattle.SetActive(true);
//                 btnRest.SetActive(false);
//             }
//         }
//        
//     }
// }
