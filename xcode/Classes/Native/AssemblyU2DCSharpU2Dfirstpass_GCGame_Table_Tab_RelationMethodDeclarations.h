#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_Relation
struct Tab_Relation_t605;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_Relation::.ctor()
 void Tab_Relation__ctor_m2959 (Tab_Relation_t605 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_Relation::GetInstanceFile()
 String_t* Tab_Relation_GetInstanceFile_m2960 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Relation::get_Id()
 int32_t Tab_Relation_get_Id_m2961 (Tab_Relation_t605 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Relation::getRelationCount()
 int32_t Tab_Relation_getRelationCount_m2962 (Tab_Relation_t605 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Relation::GetRelationbyIndex(System.Int32)
 int32_t Tab_Relation_GetRelationbyIndex_m2963 (Tab_Relation_t605 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_Relation::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_Relation_LoadTable_m2964 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_Relation::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_Relation_SerializableTable_m2965 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
