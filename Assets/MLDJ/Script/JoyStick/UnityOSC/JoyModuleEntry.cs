
using UnityEngine;
using System.Collections;
using Engine.OSC;
using Engine;


namespace Engine.JoyUI
	{
#if BOBJOYSTICK
		/// <summary>
		/// 手柄适配模块的入口，负责创建、加载需要的功能模块
		/// </summary>
		/// 
		public class JoyModuleEntry : MonoSingleton<JoyModuleEntry> {
		
		    public static int s_port = 8987;
		    void Awake()
		    {
		        base.Awake();
		        if (JoyControllerLogic.Instance == null)
		        {
		            ResourceManager.InstantiateResource("Prefab/JoyStick/__JoyStickController", "__JoyStickController");
		        }
		        if (BobOSCLogic.Instance == null)
		        {
		            new GameObject("Singleton of " + typeof(BobOSCLogic).ToString(), typeof(BobOSCLogic));
		        }
		        if (BobOSCInput.Instance == null)
		        {
		            new GameObject("Singleton of " + typeof(BobOSCInput).ToString(), typeof(BobOSCInput));
		        }
		        if (BobOSCController.Instance == null)
		        {
		            new GameObject("Singleton of " + typeof(BobOSCController).ToString(), typeof(BobOSCController));
		        }
		        if (AbstractController.Instance == null)
		        {
		            new GameObject("Singleton of " + typeof(AbstractController).ToString(), typeof(AbstractController));
                } 
                if (BobJoyUIController.Instance == null)
                {
                    new GameObject("Singleton of " + typeof(BobJoyUIController).ToString(), typeof(BobJoyUIController));
                }
		        if (MouseSimulator.Instance == null)
		        {
		            ResourceManager.InstantiateResource("Prefab/JoyStick/MousePanel", "MousePanel");
		        }
                if (JoyUIButtonFactory.Instance == null)
                {
                    new GameObject("Singleton of " + typeof(JoyUIButtonFactory).ToString(), typeof(JoyUIButtonFactory));
                }
		
		    }
			// Use this for initialization
		    void Start()
		    {
		        StartService();
			}
			
		
		    private void StopService()
		    {
		        Engine.OSC.BobOSCController.Instance.StopService();
		    }
		    private void StartService()
		    {
		        Engine.OSC.BobOSCController.Instance.StartService();
		    }
		}
#endif
	}

