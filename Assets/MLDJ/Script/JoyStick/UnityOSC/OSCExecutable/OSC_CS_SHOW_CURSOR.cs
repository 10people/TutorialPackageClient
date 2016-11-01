using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

#if BOBJOYSTICK
using Engine.JoyUI;
#endif
namespace Engine.OSC
{
    class OSC_CS_SHOW_CURSOR : OSCExecutable
    {
#if BOBJOYSTICK
        public override void Execute(UnityOSC.OSCPacket packet)
        {
            List<object> datalist = packet.Data;
            int showflag = (int)datalist[0];
            MouseSimulator.Instance.MouseEnable = (showflag == 1) ? true : false;
            UnityEngine.Debug.Log(packet.Address);
        }
#endif
    }
}
