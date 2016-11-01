using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Engine.OSC
{
    class OSC_CS_CHANGE_TARGET : OSCExecutable
    {
#if BOBJOYSTICK
        public override void Execute(UnityOSC.OSCPacket packet)
        {
            if (SkillBarLogic.Instance() != null)
            {
                SkillBarLogic.Instance().SwitchTarget();
            }
        }
#endif
    }
}
