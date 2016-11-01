#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GMCOMMAND
struct CG_GMCOMMAND_t3045;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GMCOMMAND::.ctor()
 void CG_GMCOMMAND__ctor_m18691 (CG_GMCOMMAND_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GMCOMMAND::get_HasCmd()
 bool CG_GMCOMMAND_get_HasCmd_m18692 (CG_GMCOMMAND_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_GMCOMMAND::get_Cmd()
 String_t* CG_GMCOMMAND_get_Cmd_m18693 (CG_GMCOMMAND_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GMCOMMAND::set_Cmd(System.String)
 void CG_GMCOMMAND_set_Cmd_m18694 (CG_GMCOMMAND_t3045 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GMCOMMAND::SetCmd(System.String)
 void CG_GMCOMMAND_SetCmd_m18695 (CG_GMCOMMAND_t3045 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GMCOMMAND::SerializedSize()
 int32_t CG_GMCOMMAND_SerializedSize_m18696 (CG_GMCOMMAND_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GMCOMMAND::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GMCOMMAND_WriteTo_m18697 (CG_GMCOMMAND_t3045 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GMCOMMAND::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GMCOMMAND_MergeFrom_m18698 (CG_GMCOMMAND_t3045 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GMCOMMAND::IsInitialized()
 bool CG_GMCOMMAND_IsInitialized_m18699 (CG_GMCOMMAND_t3045 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
