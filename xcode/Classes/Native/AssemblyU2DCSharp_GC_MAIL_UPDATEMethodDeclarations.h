#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_MAIL_UPDATE
struct GC_MAIL_UPDATE_t3097;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_MAIL_UPDATE::.ctor()
 void GC_MAIL_UPDATE__ctor_m19647 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasMailGuid()
 bool GC_MAIL_UPDATE_get_HasMailGuid_m19648 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MAIL_UPDATE::get_MailGuid()
 uint64_t GC_MAIL_UPDATE_get_MailGuid_m19649 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_MailGuid(System.UInt64)
 void GC_MAIL_UPDATE_set_MailGuid_m19650 (GC_MAIL_UPDATE_t3097 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetMailGuid(System.UInt64)
 void GC_MAIL_UPDATE_SetMailGuid_m19651 (GC_MAIL_UPDATE_t3097 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasSenderType()
 bool GC_MAIL_UPDATE_get_HasSenderType_m19652 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MAIL_UPDATE::get_SenderType()
 int32_t GC_MAIL_UPDATE_get_SenderType_m19653 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_SenderType(System.Int32)
 void GC_MAIL_UPDATE_set_SenderType_m19654 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetSenderType(System.Int32)
 void GC_MAIL_UPDATE_SetSenderType_m19655 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasSenderGuid()
 bool GC_MAIL_UPDATE_get_HasSenderGuid_m19656 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MAIL_UPDATE::get_SenderGuid()
 uint64_t GC_MAIL_UPDATE_get_SenderGuid_m19657 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_SenderGuid(System.UInt64)
 void GC_MAIL_UPDATE_set_SenderGuid_m19658 (GC_MAIL_UPDATE_t3097 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetSenderGuid(System.UInt64)
 void GC_MAIL_UPDATE_SetSenderGuid_m19659 (GC_MAIL_UPDATE_t3097 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasSenderName()
 bool GC_MAIL_UPDATE_get_HasSenderName_m19660 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MAIL_UPDATE::get_SenderName()
 String_t* GC_MAIL_UPDATE_get_SenderName_m19661 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_SenderName(System.String)
 void GC_MAIL_UPDATE_set_SenderName_m19662 (GC_MAIL_UPDATE_t3097 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetSenderName(System.String)
 void GC_MAIL_UPDATE_SetSenderName_m19663 (GC_MAIL_UPDATE_t3097 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasSendTime()
 bool GC_MAIL_UPDATE_get_HasSendTime_m19664 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MAIL_UPDATE::get_SendTime()
 int32_t GC_MAIL_UPDATE_get_SendTime_m19665 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_SendTime(System.Int32)
 void GC_MAIL_UPDATE_set_SendTime_m19666 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetSendTime(System.Int32)
 void GC_MAIL_UPDATE_SetSendTime_m19667 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasRecevierGuid()
 bool GC_MAIL_UPDATE_get_HasRecevierGuid_m19668 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MAIL_UPDATE::get_RecevierGuid()
 uint64_t GC_MAIL_UPDATE_get_RecevierGuid_m19669 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_RecevierGuid(System.UInt64)
 void GC_MAIL_UPDATE_set_RecevierGuid_m19670 (GC_MAIL_UPDATE_t3097 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetRecevierGuid(System.UInt64)
 void GC_MAIL_UPDATE_SetRecevierGuid_m19671 (GC_MAIL_UPDATE_t3097 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasReadTime()
 bool GC_MAIL_UPDATE_get_HasReadTime_m19672 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MAIL_UPDATE::get_ReadTime()
 int32_t GC_MAIL_UPDATE_get_ReadTime_m19673 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_ReadTime(System.Int32)
 void GC_MAIL_UPDATE_set_ReadTime_m19674 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetReadTime(System.Int32)
 void GC_MAIL_UPDATE_SetReadTime_m19675 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasTextContent()
 bool GC_MAIL_UPDATE_get_HasTextContent_m19676 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MAIL_UPDATE::get_TextContent()
 String_t* GC_MAIL_UPDATE_get_TextContent_m19677 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_TextContent(System.String)
 void GC_MAIL_UPDATE_set_TextContent_m19678 (GC_MAIL_UPDATE_t3097 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetTextContent(System.String)
 void GC_MAIL_UPDATE_SetTextContent_m19679 (GC_MAIL_UPDATE_t3097 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasMoneyType()
 bool GC_MAIL_UPDATE_get_HasMoneyType_m19680 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MAIL_UPDATE::get_MoneyType()
 int32_t GC_MAIL_UPDATE_get_MoneyType_m19681 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_MoneyType(System.Int32)
 void GC_MAIL_UPDATE_set_MoneyType_m19682 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetMoneyType(System.Int32)
 void GC_MAIL_UPDATE_SetMoneyType_m19683 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasMoneyCount()
 bool GC_MAIL_UPDATE_get_HasMoneyCount_m19684 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MAIL_UPDATE::get_MoneyCount()
 int32_t GC_MAIL_UPDATE_get_MoneyCount_m19685 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_MoneyCount(System.Int32)
 void GC_MAIL_UPDATE_set_MoneyCount_m19686 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetMoneyCount(System.Int32)
 void GC_MAIL_UPDATE_SetMoneyCount_m19687 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasItemID()
 bool GC_MAIL_UPDATE_get_HasItemID_m19688 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MAIL_UPDATE::get_ItemID()
 int32_t GC_MAIL_UPDATE_get_ItemID_m19689 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_ItemID(System.Int32)
 void GC_MAIL_UPDATE_set_ItemID_m19690 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetItemID(System.Int32)
 void GC_MAIL_UPDATE_SetItemID_m19691 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasItemCount()
 bool GC_MAIL_UPDATE_get_HasItemCount_m19692 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MAIL_UPDATE::get_ItemCount()
 int32_t GC_MAIL_UPDATE_get_ItemCount_m19693 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_ItemCount(System.Int32)
 void GC_MAIL_UPDATE_set_ItemCount_m19694 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetItemCount(System.Int32)
 void GC_MAIL_UPDATE_SetItemCount_m19695 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::get_HasOrigin()
 bool GC_MAIL_UPDATE_get_HasOrigin_m19696 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MAIL_UPDATE::get_Origin()
 int32_t GC_MAIL_UPDATE_get_Origin_m19697 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::set_Origin(System.Int32)
 void GC_MAIL_UPDATE_set_Origin_m19698 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::SetOrigin(System.Int32)
 void GC_MAIL_UPDATE_SetOrigin_m19699 (GC_MAIL_UPDATE_t3097 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MAIL_UPDATE::SerializedSize()
 int32_t GC_MAIL_UPDATE_SerializedSize_m19700 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MAIL_UPDATE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_MAIL_UPDATE_WriteTo_m19701 (GC_MAIL_UPDATE_t3097 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_MAIL_UPDATE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_MAIL_UPDATE_MergeFrom_m19702 (GC_MAIL_UPDATE_t3097 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MAIL_UPDATE::IsInitialized()
 bool GC_MAIL_UPDATE_IsInitialized_m19703 (GC_MAIL_UPDATE_t3097 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
