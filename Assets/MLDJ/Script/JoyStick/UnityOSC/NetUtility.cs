using UnityEngine;
using System.Collections;
using System.Net;
using System.Net.Sockets;
using System.Net.NetworkInformation;
using System;
#if BOBJOYSTICK
namespace Engine.Net
{

    public class NetUtility
    {

        public static IPAddress[] getIPAddressList()
        {
#if UNITY_WP8
            return null;
#else
            string hostname = Dns.GetHostName();
            return Dns.GetHostAddresses(hostname);
#endif
        }

        public static IPAddress getFirstIPAddress()
        {
            IPAddress[] iplist = getIPAddressList();
            if (iplist.Length >= 1)
            {
                return iplist[0];
            }
            return null;
        }

        public enum IPAddressClass
        {
            A = 0,
            B,
            C,
            D,
            E
        }

        public static IPAddressClass getIPAddressClass(IPAddress ip)
        {
            byte[] addressbytes = ip.GetAddressBytes();
            byte leadingbyte = (byte)((addressbytes[0] >> 4) & (0xff));
            if (leadingbyte < 8)
            {
                return IPAddressClass.A;
            }
            if (leadingbyte < 12)
            {
                return IPAddressClass.B;
            }
            if (leadingbyte < 14)
            {
                return IPAddressClass.C;
            }
            if (leadingbyte < 15)
            {
                return IPAddressClass.D;
            }
            return IPAddressClass.E;
        }

        public static short getSubNetMask(IPAddress ip)
        {
            switch (getIPAddressClass(ip))
            {
                case IPAddressClass.A:
                    {
                        return 8;
                    }
                case IPAddressClass.B:
                    {
                        return 16;
                    }
                case IPAddressClass.C:
                    {
                        return 24;
                    }
                default:
                    return 4;
            }
        }

        public static byte[] ConvertMaskToByteArray(short mask)
        {
            byte[] bytearray = new byte[4];
            if (mask >= 32)
            {
                throw new Exception();
            }
            int bitMask = ~0;
            bitMask = bitMask << mask;
            bytearray[0] = (byte)(bitMask >> 24);
            bytearray[1] = (byte)(bitMask >> 16);
            bytearray[2] = (byte)(bitMask >> 8);
            bytearray[3] = (byte)(bitMask);

            return bytearray;
        }

        public static IPAddress getBroadcastAddress(IPAddress ip)
        {
            byte[] maskbytes = ConvertMaskToByteArray(getSubNetMask(ip));
            byte[] ipbytes = ip.GetAddressBytes();
            byte[] broadip = new byte[4];
            for (int i = 0; i < ipbytes.Length; i++)
            {
                broadip[i] = (byte)((ipbytes[i] & (maskbytes[i])));
                broadip[i] = (byte)((broadip[i] ^ (~maskbytes[i])));
            }
            return new IPAddress(broadip);
        }

    }
}
#endif
