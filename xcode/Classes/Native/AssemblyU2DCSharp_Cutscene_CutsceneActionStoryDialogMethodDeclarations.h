#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Cutscene.CutsceneActionStoryDialog
struct CutsceneActionStoryDialog_t4615;

// System.Void Cutscene.CutsceneActionStoryDialog::.ctor(System.Int32)
 void CutsceneActionStoryDialog__ctor_m33042 (CutsceneActionStoryDialog_t4615 * __this, int32_t ___nStoryID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionStoryDialog::Start()
 void CutsceneActionStoryDialog_Start_m33043 (CutsceneActionStoryDialog_t4615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionStoryDialog::Finish()
 void CutsceneActionStoryDialog_Finish_m33044 (CutsceneActionStoryDialog_t4615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionStoryDialog::StoryDialogOverCallback(System.Boolean)
 void CutsceneActionStoryDialog_StoryDialogOverCallback_m33045 (CutsceneActionStoryDialog_t4615 * __this, bool ___noMoreNext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionStoryDialog::SendPlayStoryOverPacket(System.Int32)
 void CutsceneActionStoryDialog_SendPlayStoryOverPacket_m33046 (CutsceneActionStoryDialog_t4615 * __this, int32_t ___nClosedStoryID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cutscene.CutsceneActionStoryDialog::IsNeedSilentMode(System.Int32)
 bool CutsceneActionStoryDialog_IsNeedSilentMode_m33047 (Object_t * __this/* static, unused */, int32_t ___storyid, MethodInfo* method) IL2CPP_METHOD_ATTR;
