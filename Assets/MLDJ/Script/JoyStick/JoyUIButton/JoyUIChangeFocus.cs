using UnityEngine;
using System.Collections;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public class JoyUIChangeFocus : MonoBehaviour
{
#if BOBJOYSTICK    
    public JoyUIButton other;
    void OnClick()
    {
        JoyStickCursor.Instance.AttachCursor(other);
    }
#endif
}
