using UnityEngine;
using System.Collections;
using UnityOSC;
using System.Net;
using System.Collections.Generic;
using System.Diagnostics;
using Engine.Utils;
namespace Engine.OSC
{

#if BOBJOYSTICK
    public class BobOSCLogic : MonoSingleton<BobOSCLogic>
    {

        public int m_port;
        public Dictionary<string, OSCExecutable> m_Executables = new Dictionary<string, OSCExecutable>();

        public void AddExecute(string address, OSCExecutable executable){
            m_Executables.Add(address, executable);
        }        


        

        public IPAddress m_localIP;
        public IPAddress m_broadcastIP;
        public OSCServer m_server = null;
        private Queue<OSCPacket> m_packetQueue = new Queue<OSCPacket>();
        public void CreateServer(int port)
        {
            try
            {
                m_port = port;
                m_localIP = Engine.Net.NetUtility.getFirstIPAddress();
                m_broadcastIP = Engine.Net.NetUtility.getBroadcastAddress(m_localIP);
                m_server = new OSCServer(port);
                m_server.PacketReceivedEvent += server_PacketReceivedEvent;
            }
            catch (System.Exception ex)
            {
                throw ex;
            }
        }

        void server_PacketReceivedEvent(OSCServer sender, OSCPacket packet)
        {
            if (string.Equals(packet.IPAddress, m_localIP.ToString()))
            {//不接收自己发的消息
                return;
            }
            m_packetQueue.Enqueue(packet);
        }


        private void dispatchPacket()
        {
            while (m_packetQueue.Count > 0)
            {
                OSCPacket packet = m_packetQueue.Dequeue();

                BobLog.Instance.Log(packet.Address);
                if (m_Executables.ContainsKey(packet.Address))
                {
                    try
                    {
                        m_Executables[packet.Address].Execute(packet);
                    }
                    catch (System.Exception ex)
                    {
                        throw ex;
                    }
                }
            }
        }
        #region Mono Event
        void Update() {
            dispatchPacket();

        }
        void OnDestroy()
        {
            stopService();
        }
        void OnApplicationQuit()
        {
            stopService();

            base.OnApplicationQuit();
        }

        private void stopService()
        {
            if (m_server != null)
            {
                m_server.Close();
                m_server = null;
            }
        }
        #endregion
    }
#endif
}
