#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ChatLinkLogic/MissonLinkInfo
struct MissonLinkInfo_t1182;
struct MissonLinkInfo_t1182_marshaled;

// System.Boolean ChatLinkLogic/MissonLinkInfo::IsValid()
 bool MissonLinkInfo_IsValid_m7853 (MissonLinkInfo_t1182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic/MissonLinkInfo::CleanUp()
 void MissonLinkInfo_CleanUp_m7854 (MissonLinkInfo_t1182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void MissonLinkInfo_t1182_marshal(const MissonLinkInfo_t1182& unmarshaled, MissonLinkInfo_t1182_marshaled& marshaled);
void MissonLinkInfo_t1182_marshal_back(const MissonLinkInfo_t1182_marshaled& marshaled, MissonLinkInfo_t1182& unmarshaled);
void MissonLinkInfo_t1182_marshal_cleanup(MissonLinkInfo_t1182_marshaled& marshaled);
