using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Engine.OSC
{
    class OSC_CS_ALIVE : OSCExecutable
    {
#if BOBJOYSTICK
        public override void Execute(UnityOSC.OSCPacket packet)
        {
            BobOSCInput.Instance.OnAliveMsgReceived();
        }
#endif
    }
}
