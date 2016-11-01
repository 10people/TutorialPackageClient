#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_MapConnection
struct Tab_MapConnection_t523;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_MapConnection::.ctor()
 void Tab_MapConnection__ctor_m2527 (Tab_MapConnection_t523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_MapConnection::GetInstanceFile()
 String_t* Tab_MapConnection_GetInstanceFile_m2528 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MapConnection::get_DestSceneID()
 int32_t Tab_MapConnection_get_DestSceneID_m2529 (Tab_MapConnection_t523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MapConnection::get_SourceSceneID()
 int32_t Tab_MapConnection_get_SourceSceneID_m2530 (Tab_MapConnection_t523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_MapConnection::get_TelePosX()
 float Tab_MapConnection_get_TelePosX_m2531 (Tab_MapConnection_t523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_MapConnection::get_TelePosZ()
 float Tab_MapConnection_get_TelePosZ_m2532 (Tab_MapConnection_t523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_MapConnection::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_MapConnection_LoadTable_m2533 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_MapConnection::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_MapConnection_SerializableTable_m2534 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
