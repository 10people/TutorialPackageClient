using UnityEngine;
using System.Collections;
using UnityOSC;
using System.Net;
using System.Collections.Generic;
using System.Diagnostics;
using Engine.Utils;
using System;
namespace Engine.OSC
{

#if BOBJOYSTICK
    public enum OSCInputState
    {
        INVALID = -1,
        IDLE,
        WAIT_FOR_CONNECT,
        WAIT_FOR_CONFIRM,
        WAIT_FOR_INPUT
    }
    public class InputEventArgs : EventArgs
    {
        public OSCPacket m_packet;
        public InputEventArgs(OSCPacket packet)
        {
            m_packet = packet;
        }
    }
    public class BobOSCInput : MonoSingleton<BobOSCInput>
    {
        /// <summary>
        /// 当有表示输入的数据到达时触发该事件进行处理
        /// </summary>
        public event EventHandler<InputEventArgs> InputEventHandler;

        #region 用来和客户端建立连接
        /// <summary>
        /// 监听的端口号
        /// </summary>
        public int m_port = 8986;
        /// <summary>
        /// 用于向局域网发广播消息
        /// </summary>
        public OSCClient m_broadcastClient = null;
        /// <summary>
        /// 用于和连接的设备进行通信
        /// </summary>
        public OSCClient m_client = null;

        public OSCMessage m_serverinfoMsg = new OSCMessage(BobOSCAddress.BOBTEST_SERVER_CONNECT_INFO);
        public OSCMessage m_serverOKMsg = new OSCMessage(BobOSCAddress.BOBTEST_SERVER_CONNECT_OK);
        public OSCMessage m_serverAliveMsg = new OSCMessage(BobOSCAddress.BOBTEST_SERVER_ALIVE);

        public OSCInputState m_state = OSCInputState.IDLE;
        public void StopDoingAnything()
        {
            m_state = OSCInputState.IDLE;
        }
        public void WaitforConnection()
        {
            if(m_client == null)
            {
                m_state = OSCInputState.WAIT_FOR_CONNECT;
            }
        }
        public void WaitforConfirmConnection()
        {
            m_state = OSCInputState.WAIT_FOR_CONFIRM;
        }
        public void WaitforInput()
        {
            if (m_state != OSCInputState.WAIT_FOR_CONFIRM)
            {
                return;
            }
            m_state = OSCInputState.WAIT_FOR_INPUT;
        }

        private void CreateServer(int port)
        {
            BobOSCLogic.Instance.CreateServer(port);
            m_serverinfoMsg.Append(BobOSCLogic.Instance.m_localIP.ToString());
            m_serverinfoMsg.Append(port);
        }
        public void CreateBroadcastClient(int port)
        {
            IPAddress destination = Engine.Net.NetUtility.getBroadcastAddress(BobOSCLogic.Instance.m_localIP);
            m_broadcastClient = new OSCClient(destination, port);
        }
        public void RemoveClientAndStopDoingAnything(OSCPacket packet)
        {
            if (m_client != null)
            {
                m_client.Close();
                m_client = null;
            }
            StopDoingAnything();
        }
        public void AddClientAndWaitForConnect(OSCPacket packet)
        {
            if (m_state != OSCInputState.WAIT_FOR_CONNECT)
            {
                return;
            }
           
            IPAddress clientip = IPAddress.Parse((string)packet.Data[0]);
            int clientport = (int)packet.Data[1];
            m_client = new OSCClient(clientip, clientport);
            WaitforConfirmConnection();
        }
        #endregion
        void InitExecutable()
        {
            BobOSCLogic.Instance.AddExecute(BobOSCAddress.BOBTEST_CLIENT_QUERY, new OSC_CS_QUERY());
            BobOSCLogic.Instance.AddExecute(BobOSCAddress.BOBTEST_CLIENT_CONNECT_INFO, new OSC_CS_CONNECT());
            BobOSCLogic.Instance.AddExecute(BobOSCAddress.BOBTEST_CLIENT_DISCONNECT, new OSC_CS_DISCONNECT());
            BobOSCLogic.Instance.AddExecute(BobOSCAddress.BOBTEST_CLIENT_INPUT_INFO, new OSC_CS_INPUT());
            BobOSCLogic.Instance.AddExecute(BobOSCAddress.BOBTEST_CLIENT_ALIVE, new OSC_CS_ALIVE());
            BobOSCLogic.Instance.AddExecute(BobOSCAddress.BOBTEST_CLIENT_CURSOR_DELTA, new OSC_CS_CURSORDELTA());
            BobOSCLogic.Instance.AddExecute(BobOSCAddress.BOBTEST_CLIENT_MISSION, new OSC_CS_MISSION());
            BobOSCLogic.Instance.AddExecute(BobOSCAddress.BOBTEST_CLIENT_CHANGE_TARGET, new OSC_CS_CHANGE_TARGET());
            BobOSCLogic.Instance.AddExecute(BobOSCAddress.BOBTEST_CLIENT_CURSOR_SHOW, new OSC_CS_SHOW_CURSOR());
        }
        public void ProcessInputPacket(OSCPacket packet)
        {            
            if (m_state != OSCInputState.WAIT_FOR_INPUT)
            {
                return;
            }
            if (InputEventHandler != null)
            {
                InputEventHandler(this, new InputEventArgs(packet));
            }

        }
        public void OnAliveMsgReceived()
        {
            m_aliveCount = 0;
        }
        void sendalivemsg()
        {
            if (m_client != null)
            {
                m_client.Send(m_serverAliveMsg);
            }
        }
        #region Mono Event
        void Start()
        {
            InitExecutable();
            CreateServer(m_port);
            CreateBroadcastClient(m_port);
            WaitforInput();
            InvokeRepeating("sendalivemsg", 1, 0.5f);
        }


        int confirmcount = 0;

        int m_aliveInterval = 100;
        public int m_aliveCount = 0;

        int sendserverinterval = 100;
        int sendservercount = 0;
        void Update()
        {
            switch (m_state)
            {
                case OSCInputState.WAIT_FOR_CONNECT:
                    {
                        sendservercount++;
                        if (sendservercount >= sendserverinterval)
                        {
                            m_broadcastClient.Send(m_serverinfoMsg);
                            sendservercount = 0;
                        }
                        break;
                    }
                case OSCInputState.WAIT_FOR_CONFIRM:
                    {
                        if (m_client != null)
                        {
                            m_client.Send(m_serverOKMsg);
                        }
                        //发送10次确认信息后自动转入接收输入状态，而不等待客户端确认
                        confirmcount++;
                        if (confirmcount >= 10)
                        {
                            confirmcount = 0;
                            WaitforInput();
                        }
                        break;
                    }
                case OSCInputState.WAIT_FOR_INPUT:
                    {
                        m_aliveCount++;
                        if (m_aliveCount >= m_aliveInterval)
                        {
                            m_aliveCount = 0;
                            RemoveClientAndStopDoingAnything(null);
                        }
                        break;
                    }
            }
        }
        #endregion
    }
#endif
}
