#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.TitleInvestitive.GameTitleInvestitive
struct GameTitleInvestitive_t4841;
// Games.TitleInvestitive.GameSystemTitleInvestitive[]
struct GameSystemTitleInvestitiveU5BU5D_t4839;
// Games.TitleInvestitive.GameUserDefTitleInvestitive[]
struct GameUserDefTitleInvestitiveU5BU5D_t4840;
// GC_UPDATE_ALL_TITLEINVESTITIVE
struct GC_UPDATE_ALL_TITLEINVESTITIVE_t3002;
// System.String
struct String_t;

// System.Void Games.TitleInvestitive.GameTitleInvestitive::.ctor()
 void GameTitleInvestitive__ctor_m34440 (GameTitleInvestitive_t4841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.TitleInvestitive.GameSystemTitleInvestitive[] Games.TitleInvestitive.GameTitleInvestitive::get_SystemTitle()
 GameSystemTitleInvestitiveU5BU5D_t4839* GameTitleInvestitive_get_SystemTitle_m34441 (GameTitleInvestitive_t4841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.TitleInvestitive.GameUserDefTitleInvestitive[] Games.TitleInvestitive.GameTitleInvestitive::get_UserDefTitle()
 GameUserDefTitleInvestitiveU5BU5D_t4840* GameTitleInvestitive_get_UserDefTitle_m34442 (GameTitleInvestitive_t4841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.TitleInvestitive.GameTitleInvestitive::get_ActiveTitle()
 int32_t GameTitleInvestitive_get_ActiveTitle_m34443 (GameTitleInvestitive_t4841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.TitleInvestitive.GameTitleInvestitive::set_ActiveTitle(System.Int32)
 void GameTitleInvestitive_set_ActiveTitle_m34444 (GameTitleInvestitive_t4841 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.TitleInvestitive.GameTitleInvestitive::ReadAllTitleInvestitive(GC_UPDATE_ALL_TITLEINVESTITIVE)
 bool GameTitleInvestitive_ReadAllTitleInvestitive_m34445 (GameTitleInvestitive_t4841 * __this, GC_UPDATE_ALL_TITLEINVESTITIVE_t3002 * ___rData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.TitleInvestitive.GameTitleInvestitive::GetCurrentTitleID()
 int32_t GameTitleInvestitive_GetCurrentTitleID_m34446 (GameTitleInvestitive_t4841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.TitleInvestitive.GameTitleInvestitive::GetCurrentTitle()
 String_t* GameTitleInvestitive_GetCurrentTitle_m34447 (GameTitleInvestitive_t4841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.TitleInvestitive.GameTitleInvestitive::ChangeTitle(System.Int32)
 bool GameTitleInvestitive_ChangeTitle_m34448 (GameTitleInvestitive_t4841 * __this, int32_t ___nNewIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.TitleInvestitive.GameTitleInvestitive::HandleDeleteTitle(System.Int32,System.Int32)
 void GameTitleInvestitive_HandleDeleteTitle_m34449 (GameTitleInvestitive_t4841 * __this, int32_t ___nDeleteIndex, int32_t ___nActiveTitle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.TitleInvestitive.GameTitleInvestitive::HandleGainTitle(System.Int32,System.Int32,System.Int32,System.String,System.Int32)
 void GameTitleInvestitive_HandleGainTitle_m34450 (GameTitleInvestitive_t4841 * __this, int32_t ___nTitleIndex, int32_t ___nTitleID, int32_t ___nGainTime, String_t* ___strUserDef, int32_t ___nActiveTitle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.TitleInvestitive.GameTitleInvestitive::HandleUpdateDefTitle(System.Int32,System.String)
 void GameTitleInvestitive_HandleUpdateDefTitle_m34451 (GameTitleInvestitive_t4841 * __this, int32_t ___nTitleID, String_t* ___strUserDef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.TitleInvestitive.GameTitleInvestitive::ClearData()
 void GameTitleInvestitive_ClearData_m34452 (GameTitleInvestitive_t4841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.TitleInvestitive.GameTitleInvestitive::IsHaveType(System.Int32)
 bool GameTitleInvestitive_IsHaveType_m34453 (GameTitleInvestitive_t4841 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
