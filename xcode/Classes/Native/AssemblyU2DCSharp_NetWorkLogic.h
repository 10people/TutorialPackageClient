#pragma once
#include <stdint.h>
// NetWorkLogic/ConnectDelegate
struct ConnectDelegate_t2201;
// NetWorkLogic/ConnectLostDelegate
struct ConnectLostDelegate_t2202;
// NetWorkLogic
struct NetWorkLogic_t2203;
// System.String
struct String_t;
// SPacket.SocketInstance.SocketInstance
struct SocketInstance_t2204;
// SPacket.SocketInstance.PacketFactoryManagerInstance
struct PacketFactoryManagerInstance_t2205;
// SPacket.SocketInstance.SocketInputStream
struct SocketInputStream_t2206;
// SPacket.SocketInstance.SocketOutputStream
struct SocketOutputStream_t2207;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Threading.Thread
struct Thread_t2208;
// System.Object
#include "mscorlib_System_Object.h"
// NetWorkLogic/ConnectStatus
#include "AssemblyU2DCSharp_NetWorkLogic_ConnectStatus.h"
// NetWorkLogic
struct NetWorkLogic_t2203  : public Object_t
{
	// System.Boolean NetWorkLogic::m_bCanProcessPacket
	bool ___m_bCanProcessPacket;
	// NetWorkLogic/ConnectStatus NetWorkLogic::m_connectStatus
	int32_t ___m_connectStatus;
	// System.Boolean NetWorkLogic::m_bConnectFinish
	bool ___m_bConnectFinish;
	// System.String NetWorkLogic::m_strConnectResult
	String_t* ___m_strConnectResult;
	// System.String NetWorkLogic::m_strServerAddr
	String_t* ___m_strServerAddr;
	// System.Int32 NetWorkLogic::m_nServerPort
	int32_t ___m_nServerPort;
	// System.Int32 NetWorkLogic::m_nConnectSleep
	int32_t ___m_nConnectSleep;
	// SPacket.SocketInstance.SocketInstance NetWorkLogic::m_Socket
	SocketInstance_t2204 * ___m_Socket;
	// SPacket.SocketInstance.PacketFactoryManagerInstance NetWorkLogic::m_PacketFactoryManager
	PacketFactoryManagerInstance_t2205 * ___m_PacketFactoryManager;
	// SPacket.SocketInstance.SocketInputStream NetWorkLogic::m_SocketInputStream
	SocketInputStream_t2206 * ___m_SocketInputStream;
	// SPacket.SocketInstance.SocketOutputStream NetWorkLogic::m_SocketOutputStream
	SocketOutputStream_t2207 * ___m_SocketOutputStream;
	// System.Byte NetWorkLogic::m_nPacketIndex
	uint8_t ___m_nPacketIndex;
	// System.Byte[] NetWorkLogic::m_SendbyteData
	ByteU5BU5D_t1033* ___m_SendbyteData;
	// System.Byte[] NetWorkLogic::m_LenbyteData
	ByteU5BU5D_t1033* ___m_LenbyteData;
	// System.Byte[] NetWorkLogic::m_PacketIDbyteData
	ByteU5BU5D_t1033* ___m_PacketIDbyteData;
	// System.Int32 NetWorkLogic::m_MaxRevOnePacketbyteCount
	int32_t ___m_MaxRevOnePacketbyteCount;
	// System.Byte[] NetWorkLogic::m_MaxRevOnePacketbyte
	ByteU5BU5D_t1033* ___m_MaxRevOnePacketbyte;
	// System.Byte[] NetWorkLogic::m_HeadbyteData
	ByteU5BU5D_t1033* ___m_HeadbyteData;
	// System.Int32 NetWorkLogic::m_nEachFrame_ProcessPacket_Count
	int32_t ___m_nEachFrame_ProcessPacket_Count;
	// System.Threading.Thread NetWorkLogic::m_hConnectThread
	Thread_t2208 * ___m_hConnectThread;
	// System.Single NetWorkLogic::m_timeConnectBegin
	float ___m_timeConnectBegin;
};
struct NetWorkLogic_t2203_StaticFields{
	// System.UInt32 NetWorkLogic::SOCKET_ERROR
	uint32_t ___SOCKET_ERROR;
	// System.Int32 NetWorkLogic::PACKET_HEADER_SIZE
	int32_t ___PACKET_HEADER_SIZE;
	// System.Int32 NetWorkLogic::MAX_ONE_PACKET_BYTE_SIZE
	int32_t ___MAX_ONE_PACKET_BYTE_SIZE;
	// System.Int32 NetWorkLogic::EACHFRAME_PROCESSPACKET_COUNT
	int32_t ___EACHFRAME_PROCESSPACKET_COUNT;
	// NetWorkLogic/ConnectDelegate NetWorkLogic::m_delConnect
	ConnectDelegate_t2201 * ___m_delConnect;
	// NetWorkLogic/ConnectLostDelegate NetWorkLogic::m_delConnectLost
	ConnectLostDelegate_t2202 * ___m_delConnectLost;
	// NetWorkLogic NetWorkLogic::m_Impl
	NetWorkLogic_t2203 * ___m_Impl;
	// System.Int32 NetWorkLogic::s_nReceiveCount
	int32_t ___s_nReceiveCount;
	// System.Int32 NetWorkLogic::s_nSendCount
	int32_t ___s_nSendCount;
};
