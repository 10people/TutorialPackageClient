/********************************************************************************
 *	文件名：	CutsceneManager.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneManager.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-03-21
 *
 *	功能说明：过场管理器，包括剧情对话、镜头动画等
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Module.Log;


namespace Cutscene
{
    public class CutsceneManager : Singleton<CutsceneManager>
    {
        #region Fields
        /// <summary>
        /// Close SyncPosToServer When necessary
        /// </summary>
        private bool m_bCloseSyncPos;
        public bool CloseSyncPos
        {
            get { return m_bCloseSyncPos; }
            set { m_bCloseSyncPos = value; }
        }
        /// <summary>
        /// The m_n current playing cutscene I.
        /// </summary>
        private int m_nCurrentPlayingCutsceneID;
        //阻塞挂机状态
        private bool m_BlockAutoBattle = false;
        /// <summary>
        /// 当前正在播放的过场动画
        /// </summary>
        Cutscene m_CurrentPlayingCutscene;

        enum CutsceneType
        {
            None,
            DialogStory,// 小对话剧情
            MovieStory, // 全屏剧情
        }

        CutsceneType m_CurCutsceneType = CutsceneType.None;
        #endregion
        #region Properties
        public bool IsPlayingMovieStory
        {
            get
            {
                return (m_CurCutsceneType == CutsceneType.MovieStory);
            }
        }
        /// <summary>
        /// 当前是否正在播放过场动画
        /// </summary>
        /// <value><c>true</c> if this instance is playing cutscene; otherwise, <c>false</c>.</value>
        public bool IsPlayingCutscene
        {
            get
            {
                return m_CurrentPlayingCutscene != null;
            }
        }
        public bool BlockAutoBattle
        {
            get { return m_BlockAutoBattle; }
            set { m_BlockAutoBattle = value; }
        }
        #endregion
        #region Methods
        /// <summary>
        /// 初始
        /// </summary>
        public void Init()
        {
            CloseSyncPos = false;
            Messenger.AddListener(MessengerConst.OnCutsceneEnd, OnCutsceneEnd);
        }
        /// <summary>
        /// 清理
        /// </summary>
        public void Clear()
        {
            Messenger.RemoveListener(MessengerConst.OnCutsceneEnd, OnCutsceneEnd);
        }
        /// <summary>
        /// 更新
        /// </summary>
        public void Update(float deltaTime)
        {
            if (m_CurrentPlayingCutscene != null)
            {
                m_CurrentPlayingCutscene.Update(deltaTime);
            }
        }

        /// <summary>
        /// 播放传统剧情动画（替换掉原来的）Legacy
        /// </summary>
        [System.Obsolete("Use PlayCutscene instead")]
        public void PlayStory(int nStoryID)
        {
            // 临时处理一下

            // Boss出场
            //			if (nStoryID == 76)
            //			{
            //				PlayCutscene(1);
            //			}
            //			// 转场
            //			else if (nStoryID == 81)
            //			{
            //                CloseSyncPos = true;
            //				PlayCutscene(2);
            //			}
            //			else if (nStoryID == 77)
            //			{
            //				PlayCutscene(3);
            //			}
            //			else if (nStoryID == 84)
            //			{
            //				PlayCutscene(4);
            //			}
            //			else if (nStoryID == 80)
            //			{
            //				PlayCutscene(5);
            //			}
            //			else
            {
                CutsceneFactoryBase factory = new CutsceneFactoryCommonDialog(nStoryID);
                m_CurrentPlayingCutscene = factory.CreatCutscene();
                m_CurrentPlayingCutscene.Play();
                m_nCurrentPlayingCutsceneID = nStoryID;
            }
        }

        public void PlayCommonStory(int nStoryID)
        {
            m_CurCutsceneType = CutsceneType.DialogStory;
            CutsceneFactoryBase factory = new CutsceneFactoryCommonDialog(nStoryID);
            m_CurrentPlayingCutscene = factory.CreatCutscene();
            m_CurrentPlayingCutscene.Play();
            m_nCurrentPlayingCutsceneID = nStoryID;
        }

        public void OnPlayerDieInDunHuang()
        {
            LogModule.DebugLog("Player Die In DunHuang.");
        }

        /// <summary>
        /// 结束一段过场动画的消息响应函数
        /// </summary>
        private void OnCutsceneEnd()
        {
            //Debug.Log("__________________________CutsceneManager::OnCutsceneEnd");
            if (null != m_CurrentPlayingCutscene)
            {
                CG_PLAYCUTSCENE_OVER packet = (CG_PLAYCUTSCENE_OVER)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PLAYCUTSCENE_OVER);
                packet.SetNCutsceneID(m_nCurrentPlayingCutsceneID);
                packet.SendPacket();

                m_CurrentPlayingCutscene.Stop();
                m_CurrentPlayingCutscene = null;
                m_nCurrentPlayingCutsceneID = -1;
                m_CurCutsceneType = CutsceneType.None;
            }
        }

        /// <summary>
        /// Tests the play cutscene.
        /// </summary>
        public void PlayCutscene(int nCutsceneID)
        {
            CutsceneFactoryBase factory = null;
            switch (nCutsceneID)
            {
                case 1:
                    {
                        factory = new CutsceneFactoryDemo01();
                        break;
                    }
                case 2:
                    {
                        CloseSyncPos = true;
                        factory = new CutsceneFactoryDemo02();
                        break;
                    }
                case 3:
                    {
                        factory = new CutsceneFactoryDemo03();
                        break;
                    }
                case 4:
                    {
                        factory = new CutsceneFactoryDemo04();
                        break;
                    }
                case 5:
                    {
                        factory = new CutsceneFactoryDemo05();
                        break;
                    }
                case 6:
                    {
                        factory = new CutsceneFactoryDemo06();
                        break;
                    }
                case 7:
                    {
                        factory = new CutsceneFactoryDemo07();
                        break;
                    }
                case 8:
                    {
                        factory = new CutsceneFactoryDemo08();
                        break;
                    }
                case 9:
                    {
                        factory = new CutsceneFactoryDemo09();
                        break;
                    }
                case 10:
                    {
                        factory = new CutsceneFactoryDemo10();
                        break;
                    }
                case 11:
                    {
                        factory = new CutsceneFactoryDemo11();
                        break;
                    }
                case 12:
                    {
                        factory = new CutsceneFactoryDemo12();
                        break;
                    }
                case 13:
                    {
                        factory = new CutsceneFactoryDemo13();
                        break;
                    }
                case 14:
                    {
                        factory = new CutsceneFactoryDemo14();
                        break;
                    }
                case 15:
                    {
                        factory = new CutsceneFactoryDemo15();
                        break;
                    }
                case 16:
                    {
                        factory = new CutsceneFactoryDemo16();
                        break;
                    }
                case 17:
                    {
                        factory = new CutsceneFactoryDemo17();
                        break;
                    }
                case 18:
                    {
                        factory = new CutsceneFactoryDemo18();
                        break;
                    }
                case 19:
                    {
                        factory = new CutsceneFactoryDemo19();
                        break;
                    }
                case 20:
                    {
                        factory = new CutsceneFactoryDemo20();
                        break;
                    }
                case 21:
                    {
                        factory = new CutsceneFactoryDemo21();
                        break;
                    }
                case 22:
                    {
                        factory = new CutsceneFactoryDemo22();
                        break;
                    }
                case 23:
                    {
                        factory = new CutsceneFactoryDemo23();
                        break;
                    }
                case 24:
                    {
                        factory = new CutsceneFactoryDemo24();
                        break;
                    }
                case 25:
                    {
                        factory = new CutsceneFactoryDemo25();
                        break;
                    }
                case 26:
                    {
                        factory = new CutsceneFactoryDemo26();
                        break;
                    }
                case 27:
                    {
                        factory = new CutsceneFactoryDemo27();
                        break;
                    }
                case 28:
                    {
                        factory = new CutsceneFactoryDemo28();
                        break;
                    }
                case 29:
                    {
                        factory = new CutsceneFactoryDemo29();
                        break;
                    }
                case 30:
                    {
                        factory = new CutsceneFactoryDemo30();
                        break;
                    }
                case 31:
                    {
                        factory = new CutsceneFactoryDemo31();
                        break;
                    }
                case 32:
                    {
                        factory = new CutsceneFactoryDemo32();
                        break;
                    }
                case 33:
                    {
                        factory = new CutsceneFactoryDemo33();
                        break;
                    }
                case 34:
                    {
                        factory = new CutsceneFactoryDemo34();
                        break;
                    }
                case 35:
                    {
                        factory = new CutsceneFactoryDemo35();
                        break;
                    }
                case 36:
                    {
                        factory = new CutsceneFactoryDemo36();
                        break;
                    }
                case 37:
                    {
                        factory = new CutsceneFactoryDemo37();
                        break;
                    }
                case 38:
                    {
                        factory = new CutsceneFactoryDemo38();
                        break;
                    }
                case 39:
                    {
                        factory = new CutsceneFactoryDemo39();
                        break;
                    }
                case 40:
                    {
                        factory = new CutsceneFactoryDemo40();
                        break;
                    }
                case 41:
                    {
                        factory = new CutsceneFactoryDemo41();
                        break;
                    }
                case 42:
                    {
                        factory = new CutsceneFactoryDemo42();
                        break;
                    }
                case 43:
                    {
                        factory = new CutsceneFactoryDemo43();
                        break;
                    }
                case 44:
                    {
                        factory = new CutsceneFactoryDemo44();
                        break;
                    }
                case 45:
                    {
                        factory = new CutsceneFactoryDemo45();
                        break;
                    }
                case 46:
                    {
                        factory = new CutsceneFactoryDemo46();
                        break;
                    }
                case 47:
                    {
                        factory = new CutsceneFactoryDemo47();
                        break;
                    }
                case 48:
                    {
                        factory = new CutsceneFactoryDemo48();
                        break;
                    }
                case 49:
                    {
                        factory = new CutsceneFactoryDemo49();
                        break;
                    }
                case 50:
                    {
                        factory = new CutsceneFactoryDemo50();
                        break;
                    }
                case 51:
                    {
                        factory = new CutsceneFactoryDemo51();
                        break;
                    }
                case 52:
                    {
                        factory = new CutsceneFactoryDemo52();
                        break;
                    }
                case 53:
                    {
                        factory = new CutsceneFactoryDemo53();
                        break;
                    }
                case 54:
                    {
                        factory = new CutsceneFactoryDemo54();
                        break;
                    }
                case 55:
                    {
                        factory = new CutsceneFactoryDemo55();
                        break;
                    }
                case 56:
                    {
                        factory = new CutsceneFactoryDemo56();
                        break;
                    }
                case 57:
                    {
                        factory = new CutsceneFactoryDemo57();
                        break;
                    }
                case 58:
                    {
                        factory = new CutsceneFactoryDemo58();
                        break;
                    }
                case 59:
                    {
                        factory = new CutsceneFactoryDemo59();
                        break;
                    }
                case 60:
                    {
                        factory = new CutsceneFactoryDemo60();
                        break;
                    }
                case 61:
                    {
                        factory = new CutsceneFactoryDemo61();
                        break;
                    }
                case 62:
                    {
                        factory = new CutsceneFactoryDemo62();
                        break;
                    }
                case 63:
                    {
                        factory = new CutsceneFactoryDemo63();
                        break;
                    }
                case 64:
                    {
                        factory = new CutsceneFactoryDemo64();
                        break;
                    }
                case 65:
                    {
                        factory = new CutsceneFactoryDemo65();
                        break;
                    }
                case 66:
                    {
                        factory = new CutsceneFactoryDemo66();
                        break;
                    }
                case 67:
                    {
                        factory = new CutsceneFactoryDemo67();
                        break;
                    }
                case 68:
                    {
                        factory = new CutsceneFactoryDemo68();
                        break;
                    }
                case 69:
                    {
                        factory = new CutsceneFactoryDemo69();
                        break;
                    }
                case 70:
                    {
                        factory = new CutsceneFactoryDemo70();
                        break;
                    }
                case 71:
                    {
                        factory = new CutsceneFactoryDemo71();
                        break;
                    }
                case 72:
                    {
                        factory = new CutsceneFactoryDemo72();
                        break;
                    }
                case 73:
                    {
                        factory = new CutsceneFactoryDemo73();
                        break;
                    }
                case 74:
                    {
                        factory = new CutsceneFactoryDemo74();
                        break;
                    }
                case 75:
                    {
                        factory = new CutsceneFactoryDemo75();
                        break;
                    }
                case 76:
                    {
                        factory = new CutsceneFactoryDemo76();
                        break;
                    }
			    case 77:
			    {
				    factory = new CutsceneFactoryDemo77();
				    break;
			    }
			    case 78:
			    {
				    factory = new CutsceneFactoryDemo78();
				    break;
			    }               
			    case 79:
			    {
				    factory = new CutsceneFactoryDemo79();
				    break;
			    }
			    case 80:
			    {
				    factory = new CutsceneFactoryDemo80();
				    break;
			    }
			    case 81:
			    {
				    factory = new CutsceneFactoryDemo81();
				    break;
			    }
			    case 82:
			    {
				    factory = new CutsceneFactoryDemo82();
				    break;
			    }               
			    case 83:
			    {
				    factory = new CutsceneFactoryDemo83();
				    break;
			    }
			    case 84:
			    {
				    factory = new CutsceneFactoryDemo84();
				    break;
			    }
			    case 85:
			    {
				    factory = new CutsceneFactoryDemo85();
				    break;
			    }
			    case 86:
			    {
				    factory = new CutsceneFactoryDemo86();
				    break;
			    }
			    case 87:
			    {
				    factory = new CutsceneFactoryDemo87();
				    break;
			    }
			    case 88:
			    {
				    factory = new CutsceneFactoryDemo88();
				    break;
			    }
			    case 89:
			    {
				    factory = new CutsceneFactoryDemo89();
				    break;
			    }
			    case 90:
			    {
				    factory = new CutsceneFactoryDemo90();
				    break;
			    }
                case 91:
                {
                    factory = new CutsceneFactoryDemo91();
                    break;
                }
			case 92:
			{
				factory = new CutsceneFactoryDemo92();
				break;
			}
			case 93:
			{
				factory = new CutsceneFactoryDemo93();
				break;
			}
			case 94:
			{
				factory = new CutsceneFactoryDemo94();
				break;
			}
			case 95:
			{
				factory = new CutsceneFactoryDemo95();
				break;
			}
			case 96:
			{
				factory = new CutsceneFactoryDemo96();
				break;
			}
			case 97:
			{
				factory = new CutsceneFactoryDemo97();
				break;
			}
			case 98:
			{
				factory = new CutsceneFactoryDemo98();
				break;
			}
			case 99:
			{
				factory = new CutsceneFactoryDemo99();
				break;
			}
			case 100:
			{
				factory = new CutsceneFactoryDemo100();
				break;
			}
			case 101:
			{
				factory = new CutsceneFactoryDemo101();
				break;
			}
			case 102:
			{
				factory = new CutsceneFactoryDemo102();
				break;
			}
             // case 999:
             //      {
             //           factory = new CutsceneFactoryTest();
             //          break;
             //       }
            }
            if (null != factory)
            {
                m_CurCutsceneType = CutsceneType.MovieStory;
                m_CurrentPlayingCutscene = factory.CreatCutscene();
                m_CurrentPlayingCutscene.Play();
            }

            m_nCurrentPlayingCutsceneID = nCutsceneID;
        }

        public void SendRFC(int rfcID)
        {
            if (null == m_CurrentPlayingCutscene) return;
            CG_CUTSCENE_RFC packet = (CG_CUTSCENE_RFC)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CUTSCENE_RFC);
            packet.SetCutsceneID(m_nCurrentPlayingCutsceneID);
            packet.SetRfcID(rfcID);
            packet.SendPacket();
        }
        #endregion
    }
}
