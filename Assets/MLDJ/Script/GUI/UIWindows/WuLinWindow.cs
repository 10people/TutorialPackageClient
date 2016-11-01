using UnityEngine;
using System.Collections;
using GCGame;

public class WuLinWindow : MonoBehaviour
{

	// Use this for initialization
    void OnEnable()
    {
        
        
    }

    void OnDisable()
    {
        
    }

    public void ReqWuLinMemberList( )
    {
        CG_WULIN_MEMBERLIST packet = (CG_WULIN_MEMBERLIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WULIN_MEMBERLIST);
        packet.CurPage = 1;
        packet.SendPacket();
    }
}

