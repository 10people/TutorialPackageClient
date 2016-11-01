using UnityEngine;
using System.Collections;

namespace Engine.OSC
{
#if BOBJOYSTICK
    public class BobOSCAddress
    {

        //由server端发送
        public static readonly string BOBTEST_SERVER_CONNECT_INFO = "/srv/conn/info";
        public static readonly string BOBTEST_SERVER_CONNECT_OK = "/srv/conn/ok";
        public static readonly string BOBTEST_SERVER_ALIVE = "/srv/alive";

        //由client端发送
        public static readonly string BOBTEST_CLIENT_QUERY = "/clt/query";
        public static readonly string BOBTEST_CLIENT_CONNECT_INFO = "/clt/conn/info";
        public static readonly string BOBTEST_CLIENT_DISCONNECT = "/clt/disconnect";
        public static readonly string BOBTEST_CLIENT_INPUT_INFO = "/clt/input/info";
        public static readonly string BOBTEST_CLIENT_ALIVE = "/clt/alive";
        public static readonly string BOBTEST_CLIENT_CURSOR_DELTA = "/clt/cursordelta";
        public static readonly string BOBTEST_CLIENT_MISSION = "/clt/mission";
        public static readonly string BOBTEST_CLIENT_CHANGE_TARGET = "/clt/changetarget";
        public static readonly string BOBTEST_CLIENT_CURSOR_SHOW = "/clt/showcursor";
	}
#endif
}

