using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

#if BOBJOYSTICK
using Engine.JoyUI;
#endif

namespace Engine.OSC
{
    class OSC_CS_CURSORDELTA : OSCExecutable
    {
#if BOBJOYSTICK
        public override void Execute(UnityOSC.OSCPacket packet)
        {
            float deltax = (float)packet.Data[0];
            float deltay = (float)packet.Data[1];
            UnityEngine.Debug.Log(packet.Address + " "+ deltax + " "+ deltay);
            AbstractController.Instance.SetDeltaPos(deltax, deltay);

            MouseSimulator.Instance.resetEnableTime();
            if (MouseSimulator.Instance.MouseEnable == false)
            {
                MouseSimulator.Instance.MouseEnable = true;
            }
        }
#endif
    }
}
