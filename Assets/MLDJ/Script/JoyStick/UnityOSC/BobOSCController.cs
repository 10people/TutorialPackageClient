using UnityEngine;
using System.Collections;
using UnityOSC;
using System.Collections.Generic;
using Engine.Utils;

#if BOBJOYSTICK
using Engine.JoyUI;
#endif

namespace Engine.OSC
{

#if BOBJOYSTICK
    public class BobOSCController : MonoSingleton<BobOSCController>
    {
        public void StartService()
        {
            BobOSCInput.Instance.m_port = JoyModuleEntry.s_port;
            BobOSCInput.Instance.InputEventHandler += this.ProcessInputPacket;
        }
        public void StopService()
        {
            BobOSCInput.Instance.InputEventHandler -= this.ProcessInputPacket;
            Destroy(BobOSCInput.Instance.gameObject);
            Destroy(BobOSCLogic.Instance.gameObject);
            Destroy(gameObject);
        }

        #region 获取输入
        public bool GetKeyDown(KeyCode code)
        {
            return GetKeyDown((int)(code - KeyCode.JoystickButton0));
        }
        public bool GetKey(KeyCode code)
        {
            return GetKey((int)(code - KeyCode.JoystickButton0));
        }
        public bool GetKeyUp(KeyCode code)
        {
            return GetKeyUp((int)(code - KeyCode.JoystickButton0));
        }
        public float GetAxis(string axisname) {
            float ret = 0;
            switch (axisname)
            {
                case "LHorizontal":
                    {
                        ret = axis[0];
                        break;
                    }
                case "LVertical":
                    {
                        ret = axis[1];
                        break;
                    }
                case "RHorizontal":
                    {
                        ret = axis[2];
                        break;
                    }
                case "RVertical":
                    {
                        ret = axis[3];
                        break;
                    }
                case "DHorizontal":
                    {
                        ret = axis[4];
                        break;
                    }
                case "DVertical":
                    {
                        ret = axis[5];
                        break;
                    }
            }
            return ret;
        }
        private bool GetKeyDown(int index)
        {
            index = getindex(index);
            return last_button[index] == 0 && button[index] == 1;
        }
        private bool GetKey(int index)
        {
            index = getindex(index);
            return last_button[index] == 1 && button[index] == 1;
        }
        private bool GetKeyUp(int index)
        {
            index = getindex(index);
            return last_button[index] == 1 && button[index] == 0;
        }
        #endregion

        private int getindex(int index)
        {
            if (index == 10)
            {
                index = 8;
            }
            if (index == 11)
            {
                index = 9;
            }
            if (index > 11)
            {
                throw new System.Exception(string.Format("index:{0}; too large; should be 0~11",index));
            }
            return index;
        }
        float[] axis = new float[6];
        int[] last_button = new int[10];
        int[] button = new int[10];

        private void ProcessInputPacket(object sender, InputEventArgs args)
        {
            OSCPacket packet = args.m_packet;
            List<object> datalist = packet.Data;
            for (int i = 0; i < 6; i++)
            {
                axis[i] = (float)datalist[i];
            }

            for (int i = 0; i < 10; i++)
            {
                last_button[i] = button[i];
                button[i] = (int)datalist[i + 6];
            }
        }

    }
#endif
}
