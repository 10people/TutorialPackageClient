using UnityEngine;
using System.Collections;
using UnityOSC;

namespace Engine.OSC
{
	public class OSCExecutable
    {
#if BOBJOYSTICK
        public virtual void Execute(OSCPacket packet) { }
#endif

	}
}

