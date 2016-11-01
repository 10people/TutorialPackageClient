using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

#if BOBJOYSTICK
using Engine.JoyUI;
#endif
namespace Engine.OSC
{
    class OSC_CS_MISSION : OSCExecutable
    {
#if BOBJOYSTICK
        public override void Execute(UnityOSC.OSCPacket packet)
        {
            if (MouseSimulator.Instance.MouseEnable == false)
            {
                MouseSimulator.Instance.MouseEnable = true;
            }
            if (UIRootJoyControllerHelper.Instance.m_state == UIRootJoyControllerHelper.JoyUIState.HIDE)
            {
                UIRootJoyControllerHelper.Instance.GotoMissionState();
            }
        }
#endif
    }
}
