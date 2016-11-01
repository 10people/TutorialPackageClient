using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;
using Google.ProtocolBuffers;
using System;
using Module.Log;

namespace Games.ChatHistory
{
    public struct VoiceChat
    {
        public VoiceChat(int index, byte[] buffer)
        {
            m_VoiceIndex = index;
            m_VoiceBuffer = buffer;
        }

        int m_VoiceIndex;
        public int VoiceIndex
        {
            get { return m_VoiceIndex; }
            set { m_VoiceIndex = value; }
        }

        byte[] m_VoiceBuffer;
        public byte[] VoiceBuffer
        {
            get { return m_VoiceBuffer; }
            set { m_VoiceBuffer = value; }
        }
    }

    public class VoiceChatDownload
    {
        public VoiceChatDownload()
        {
            CleanUp();
        }

        public void CleanUp()
        {
            m_Record.Clear();
            m_PlayerDownload.Clear();
            m_ForcePlayIndex = GlobeVar.INVALID_ID;
            m_PlayingVoiceIndex = GlobeVar.INVALID_ID;
        }

        public bool IsHaveVoice(int voiceindex)
        {
            for (int i = 0; i < m_Record.Count; i++)
            {
                if (m_Record[i].VoiceIndex == voiceindex)
                {
                    return true;
                }
            }

            return false;
        }

        public bool IsHaveDownload(int voiceindex)
        {
            for (int i = 0; i < m_PlayerDownload.Count; i++)
            {
                if (m_PlayerDownload[i].VoiceIndex == voiceindex)
                {
                    return true;
                }
            }

            return false;
        }

        public void ReqDownload(int voiceindex, UInt64 senderguid, bool isClick = false)
        {
            if (IsHaveVoice(voiceindex))
            {
                return;
            }

            CG_ASK_DOWNLOAD_VOICECHAT pak = (CG_ASK_DOWNLOAD_VOICECHAT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_DOWNLOAD_VOICECHAT);
            pak.VoiceChatIndex = voiceindex;
            pak.SenderGuid = senderguid;
            if (isClick)
            {
                pak.IsClickDownload = 1;
            }
            else
            {
                pak.IsClickDownload = 0;
            }
            pak.SendPacket();

            LogModule.DebugLog("ReqDownloadVoiceChat");
        }

        public bool Add(int voiceindex, byte[] voicebuffer)
        {
            if (voicebuffer == null)
            {
                return false;
            }

            if (voicebuffer.Length <= 0)
            {
                return false;
            }

            if (IsHaveVoice(voiceindex))
            {
                for (int i = 0; i < m_Record.Count; i++)
                {
                    if (m_Record[i].VoiceIndex == voiceindex)
                    {
                        m_Record.RemoveAt(i);
                        break;
                    }
                }
            }

            if (voiceindex == m_ForcePlayIndex)
            {
                if (m_PlayerDownload.Count >= m_PlayerDownloadMax)
                {
                    m_PlayerDownload.RemoveAt(0);
                }

                m_PlayerDownload.Add(new VoiceChat(voiceindex, voicebuffer));

                SpeechEngine.PlayAudio(voiceindex, voicebuffer, true);
            }
            else
            {
                if (m_Record.Count >= m_RecordMax)
                {
                    m_Record.RemoveAt(0);
                }

                m_Record.Add(new VoiceChat(voiceindex, voicebuffer));

                if (SpeechEngine.Status == SpeechEngine.SpeechStatus.SS_DEFAULT)
                {
                    PlayNextVoice();
                }
            }

            LogModule.DebugLog("PlayVoiceChat");

            return true;
        }

        public bool Add(int voiceindex, ByteString voicebuffer)
        {
            if (voicebuffer == null)
            {
                LogModule.DebugLog("voicebuffer == null");
                return false;
            }

            if (voicebuffer.IsEmpty)
            {
                LogModule.DebugLog("voicebuffer.IsEmpty");
                return false;
            }            

            if (IsHaveVoice(voiceindex))
            {
                LogModule.DebugLog("IsHaveVoice(voiceindex)");
                return false;
            }

            if (voiceindex == m_ForcePlayIndex)
            {
                if (m_PlayerDownload.Count >= m_PlayerDownloadMax)
                {
                    m_PlayerDownload.RemoveAt(0);
                }

                m_PlayerDownload.Add(new VoiceChat(voiceindex, voicebuffer.ToByteArray()));

                SpeechEngine.PlayAudio(voiceindex, voicebuffer.ToByteArray(), true);
            }
            else
            {
                if (m_Record.Count >= m_RecordMax)
                {
                    m_Record.RemoveAt(0);
                }

                m_Record.Add(new VoiceChat(voiceindex, voicebuffer.ToByteArray()));

                if (SpeechEngine.Status == SpeechEngine.SpeechStatus.SS_DEFAULT)
                {
                    PlayNextVoice();
                }
            }

            LogModule.DebugLog("PlayVoiceChat");

            return true;
        }

        public void ForcePlay(int voiceindex)
        {
            if (voiceindex == m_ForcePlayIndex)
            {
                for (int i = 0; i < m_Record.Count; i++)
                { 
                    if (m_Record[i].VoiceIndex == voiceindex)
                    {
                        SpeechEngine.PlayAudio(m_Record[i].VoiceIndex, m_Record[i].VoiceBuffer, true);
                        return;
                    }
                }
            }
        }

        public void PlayInPlayerDownload(int voiceindex)
        {
            for (int i = 0; i < m_PlayerDownload.Count; i++)
            {
                if (m_PlayerDownload[i].VoiceIndex == voiceindex)
                {
                    SpeechEngine.PlayAudio(m_PlayerDownload[i].VoiceIndex, m_PlayerDownload[i].VoiceBuffer, true);
                    return;
                }
            }
        }

        public void OnPlayRecordOver()
        {
            if (IsHaveVoice(m_PlayingVoiceIndex))
            {
                if (m_ForcePlayIndex == GlobeVar.INVALID_ID)
                {
                    m_Record.RemoveAt(0);
                }
                else
                {
                    for (int i = 0; i < m_Record.Count; i++)
                    {
                        if (m_Record[i].VoiceIndex == m_ForcePlayIndex)
                        {
                            m_Record.RemoveAt(i);
                            break;
                        }
                    }
                }
            }
            m_ForcePlayIndex = GlobeVar.INVALID_ID;
            m_PlayingVoiceIndex = GlobeVar.INVALID_ID;
            if (m_Record.Count > 0)
            {
                PlayNextVoice();
            }
        }

        void PlayNextVoice()
        {
            if (m_Record.Count > 0)
            {
                SpeechEngine.PlayAudio(m_Record[0].VoiceIndex, m_Record[0].VoiceBuffer);
            }
        }

        public void DelVoice(int voiceindex)
        {
            for (int i = 0; i < m_Record.Count; i++)
            {
                if (m_Record[i].VoiceIndex == voiceindex)
                {
                    m_Record.RemoveAt(i);
                    return;
                }
            }
        }

        List<VoiceChat> m_Record = new List<VoiceChat>();
        public List<VoiceChat> Record
        {
            get { return m_Record; }
            set { m_Record = value; }
        }

        int m_ForcePlayIndex = GlobeVar.INVALID_ID;
        public int ForcePlayIndex
        {
            get { return m_ForcePlayIndex; }
            set { m_ForcePlayIndex = value; }
        }

        int m_PlayingVoiceIndex = GlobeVar.INVALID_ID;
        public int PlayingVoiceIndex
        {
            get { return m_PlayingVoiceIndex; }
            set { m_PlayingVoiceIndex = value; }
        }

        List<VoiceChat> m_PlayerDownload = new List<VoiceChat>();
        public List<VoiceChat> PlayerDownload
        {
            get { return m_PlayerDownload; }
            set { m_PlayerDownload = value; }
        }

        const int m_RecordMax = 100;
        const int m_PlayerDownloadMax = 10;
    }
}