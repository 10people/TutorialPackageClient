#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameTextList
struct GameTextList_t1184;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void GameTextList::.ctor()
 void GameTextList__ctor_m7078 (GameTextList_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameTextList::get_PlayerScroll()
 float GameTextList_get_PlayerScroll_m7079 (GameTextList_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::Clear()
 void GameTextList_Clear_m7080 (GameTextList_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::Add(System.String,System.Int32&)
 void GameTextList_Add_m7081 (GameTextList_t1184 * __this, String_t* ___text, int32_t* ___linesCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::Add(System.String,System.Boolean,System.Int32&)
 void GameTextList_Add_m7082 (GameTextList_t1184 * __this, String_t* ___text, bool ___updateVisible, int32_t* ___linesCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::Awake()
 void GameTextList_Awake_m7083 (GameTextList_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::OnSelect(System.Boolean)
 void GameTextList_OnSelect_m7084 (GameTextList_t1184 * __this, bool ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::UpdateVisibleText()
 void GameTextList_UpdateVisibleText_m7085 (GameTextList_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameTextList::IsOffsetHalfParagraph(System.Int32)
 int32_t GameTextList_IsOffsetHalfParagraph_m7086 (GameTextList_t1184 * __this, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::OnScroll(System.Single)
 void GameTextList_OnScroll_m7087 (GameTextList_t1184 * __this, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::OnDrag(UnityEngine.Vector2)
 void GameTextList_OnDrag_m7088 (GameTextList_t1184 * __this, Vector2_t12  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::OnScrollBarValueChange()
 void GameTextList_OnScrollBarValueChange_m7089 (GameTextList_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::UpdateScrollBarValue(System.Single)
 void GameTextList_UpdateScrollBarValue_m7090 (GameTextList_t1184 * __this, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameTextList::UpdateFakeScrollBarValue(System.Single)
 void GameTextList_UpdateFakeScrollBarValue_m7091 (GameTextList_t1184 * __this, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
