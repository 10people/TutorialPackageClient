using UnityEngine;
using System.Collections;
namespace Engine.OSC
{

#if BOBJOYSTICK
    public class AbstractController : MonoSingleton<AbstractController>
    {

        public bool GetKeyDown(KeyCode keycode)
        {
            bool ret = false;
            ret = Input.GetKeyDown(keycode) || Engine.OSC.BobOSCController.Instance.GetKeyDown(keycode);
            return ret;
        }

        public bool GetKey(KeyCode keycode)
        {
            bool ret = false;
            ret = Input.GetKey(keycode) || Engine.OSC.BobOSCController.Instance.GetKey(keycode);
            return ret;
        }
        public bool GetKeyUp(KeyCode keycode)
        {
            bool ret = false;
            ret = Input.GetKeyUp(keycode) || Engine.OSC.BobOSCController.Instance.GetKeyUp(keycode);
            return ret;
        }
        public float GetAxis(string axisname)
        {
            float ret = 0;
            ret = Input.GetAxis(axisname) + Engine.OSC.BobOSCController.Instance.GetAxis(axisname);
            return ret;
        }
        private Vector2 m_deltaPos = Vector2.zero;
        private Vector2 m_temp = Vector2.zero;
        public UnityEngine.Vector2 DeltaPos
        {
            get
            {
                m_temp = new Vector2(GetAxis("LHorizontal") * 3, GetAxis("LVertical") * 3) + m_deltaPos;
                m_deltaPos = Vector2.zero;
                return m_temp;
            }
        }

        public void SetDeltaPos(float deltax, float deltay)
        {
            m_deltaPos = new Vector2(deltax, deltay);
        }
    }
#endif
}
