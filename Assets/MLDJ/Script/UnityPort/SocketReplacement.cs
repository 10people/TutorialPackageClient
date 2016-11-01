using System;
using System.Threading;

namespace UnityPortSocket
{
    public enum SocketFlags
    {
        None = 0
    }

    public class SocketException : System.Net.Sockets.SocketException
    {
        public SocketException()
            : base()
        {

        }
        public SocketException(int error)
            : base(error)
        {

        }

    }

    public enum AddressFamily
    {
        InterNetwork = 2
    }

    public enum SocketType
    {
        Stream = 1
    }

    public enum ProtocolType
    {
        Tcp = 6
    }

    public enum SocketShutdown
    {
        Both = 2
    }

    public enum SelectMode
    {
        SelectRead= 0,
        SelectWrite = 1
    }

    public class Socket
    {
        System.Net.Sockets.Socket mSocket = null;
        ManualResetEvent mReadDone = new ManualResetEvent(true);
        ManualResetEvent mWriteDone = new ManualResetEvent(true);
        ManualResetEvent mConnectDone = new ManualResetEvent(false);
        uint mReadAmount = 0;
        uint mWriteAmount = 0;

        const int MAX_BUFFER_SIZE = 1024 * 1024;
        const uint SOCKET_ERROR = 0xFFFFFFFF;

        byte[] mReadBuffer = new byte[MAX_BUFFER_SIZE];
        uint mAvailable = 0;
        uint mOffset = 0;

        bool mForceReconnect = false;

        


        public bool Connected
        {
            get
            {
                if (null != mSocket)
                {
                    return mSocket.Connected;
                }

                return false;
            }
        }
        public int Available
        {
            get
            {
                return (int)mAvailable;
            }
        }

        public bool ForceReconnect
        {
            get 
            {
                return mForceReconnect;
            }
        }

        const int TIMEOUT_MILLISECONDS = 1;


        public Socket(AddressFamily af, SocketType st, ProtocolType pt)
        {
            mSocket = new System.Net.Sockets.Socket((System.Net.Sockets.AddressFamily)af, (System.Net.Sockets.SocketType)st, (System.Net.Sockets.ProtocolType)pt);

        }

        public void Connect(System.Net.EndPoint ep)
        {
            System.Net.Sockets.SocketAsyncEventArgs socketEventArg = new System.Net.Sockets.SocketAsyncEventArgs();
            socketEventArg.RemoteEndPoint = ep;
            socketEventArg.Completed += new EventHandler<System.Net.Sockets.SocketAsyncEventArgs>(
                delegate(object o, System.Net.Sockets.SocketAsyncEventArgs e)
                {
                    if (e.SocketError == System.Net.Sockets.SocketError.Success)
                    {
                        mConnectDone.Set();
                    }
                    //else
                    //{
                    //    throw new SocketException((int)e.SocketError);
                    //}
                });

            mConnectDone.Reset();
            bool ret = mSocket.ConnectAsync(socketEventArg);
            if (ret)
            {
                mConnectDone.WaitOne();
            }
            
            mReadDone.Set();
            mWriteDone.Set();

            mForceReconnect = false;

        }

        public void Shutdown(SocketShutdown ssd)
        {
            if (mSocket != null)
            {
                mSocket.Shutdown((System.Net.Sockets.SocketShutdown)ssd);
            }

        }

        public bool Poll(uint id, SelectMode sm)
        {
            if ((sm == SelectMode.SelectRead))
            {
                if (mReadDone.WaitOne(TIMEOUT_MILLISECONDS))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

            if ((sm == SelectMode.SelectWrite))
            {
                return true;
            }

            return false;
        }

        public void Close()
        {
            if (mSocket != null)
            {
                mSocket.Close();
                mSocket = null;
            }
        }

        public uint Receive(Byte[] buff, int len, SocketFlags flags)
        {
            if (mForceReconnect)
            {
                mReadDone.Reset();
                return SOCKET_ERROR;
            }

            uint AmountRead = 0;

            if (mSocket != null)
            {
                if (mAvailable != 0)
                {
                    AmountRead = (mAvailable <= len) ? mAvailable : (uint)len;

                    if (mOffset + AmountRead > MAX_BUFFER_SIZE)
                    {
                        throw new SocketException();
                    }

                    for (int i = 0; i < AmountRead; ++i)
                    {
                        buff[i] = mReadBuffer[mOffset + i];
                    }

                    mAvailable -= AmountRead;
                    mOffset += AmountRead;

                    if (mAvailable == 0)
                    {
                        Array.Clear(mReadBuffer, 0, MAX_BUFFER_SIZE);
                        mOffset = 0;
                    }

                }
                else
                {
                    mReadDone.WaitOne();
                    mReadDone.Reset();
                }

                if (mReadAmount != 0)
                {
                    if (mReadAmount <= (uint)len)
                    {
                        AmountRead = mReadAmount;
                        mAvailable = 0;
                        mOffset = 0;
                    }
                    else
                    {
                        AmountRead = (uint)len;
                        mAvailable = mReadAmount - (uint)len;
                        mOffset = (uint)len;
                    }

                    if (AmountRead > MAX_BUFFER_SIZE)
                    {
                        throw new SocketException();
                    }

                    for (int i = 0; i < AmountRead; ++i)
                    {
                        buff[i] = mReadBuffer[i];
                    }

                    if (mAvailable == 0)
                    {
                        Array.Clear(mReadBuffer, 0, MAX_BUFFER_SIZE);
                    }

                    mReadAmount = 0;
                }

                if (mAvailable == 0)
                {
                    System.Net.Sockets.SocketAsyncEventArgs socketEventArg = new System.Net.Sockets.SocketAsyncEventArgs();
                    socketEventArg.RemoteEndPoint = mSocket.RemoteEndPoint;
                    socketEventArg.UserToken = this;

                    // Setup the buffer to receive the data
                    socketEventArg.SetBuffer(mReadBuffer, 0, MAX_BUFFER_SIZE);

                    socketEventArg.Completed += new EventHandler<System.Net.Sockets.SocketAsyncEventArgs>(
                        delegate(object s, System.Net.Sockets.SocketAsyncEventArgs e)
                        {
                            Socket userToken = e.UserToken as Socket;

                            if (null != userToken)
                            {
                                if (e.SocketError == System.Net.Sockets.SocketError.Success)
                                {
                                    userToken.mReadAmount = (uint)e.BytesTransferred;
                                    userToken.mReadDone.Set();
                                }
                                else
                                {
                                    mForceReconnect = true;
                                    userToken.mReadDone.Set();
                                }

                                if (!userToken.Connected)
                                {
                                    mForceReconnect = true;
                                    userToken.mReadDone.Set();
                                }
                            }
                        });

                    mSocket.ReceiveAsync(socketEventArg);
                }
                
            }

            if (!Connected)
            {
                return SOCKET_ERROR;
            }

            return AmountRead;
        }

        public uint Send(Byte[] buff, int len, SocketFlags flags)
        {
            uint AmountWrite = 0;

            if (mSocket != null)
            {
                mWriteDone.Reset();

                System.Net.Sockets.SocketAsyncEventArgs socketEventArg = new System.Net.Sockets.SocketAsyncEventArgs();
                socketEventArg.RemoteEndPoint = mSocket.RemoteEndPoint;
                socketEventArg.UserToken = this;
                
                socketEventArg.Completed += new EventHandler<System.Net.Sockets.SocketAsyncEventArgs>(
                    delegate(object s, System.Net.Sockets.SocketAsyncEventArgs e)
                    {
                        if (e.SocketError == System.Net.Sockets.SocketError.Success)
                        {
                            Socket userToken = e.UserToken as Socket;
                            userToken.mWriteAmount = (uint)e.BytesTransferred;
                            userToken.mWriteDone.Set();
                        }
                        //else
                        //{
                        //    throw new SocketException((int)(e.SocketError));
                        //}

                    });

                // Add the data to be sent into the buffer
                socketEventArg.SetBuffer(buff, 0, len);

                mSocket.SendAsync(socketEventArg);
                mWriteDone.WaitOne();
                AmountWrite = mWriteAmount;

            }

            return AmountWrite;
        }
    }

}