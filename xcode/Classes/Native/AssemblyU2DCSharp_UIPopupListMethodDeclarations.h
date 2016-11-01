#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPopupList
struct UIPopupList_t2074;
// UIPopupList/LegacyEvent
struct LegacyEvent_t5322;
// System.String
struct String_t;
// Localization
struct Localization_t5323;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UIWidget
struct UIWidget_t5195;
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIPopupList::.ctor()
 void UIPopupList__ctor_m37660 (UIPopupList_t2074 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPopupList/LegacyEvent UIPopupList::get_onSelectionChange()
 LegacyEvent_t5322 * UIPopupList_get_onSelectionChange_m37661 (UIPopupList_t2074 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_onSelectionChange(UIPopupList/LegacyEvent)
 void UIPopupList_set_onSelectionChange_m37662 (UIPopupList_t2074 * __this, LegacyEvent_t5322 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isOpen()
 bool UIPopupList_get_isOpen_m37663 (UIPopupList_t2074 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_value()
 String_t* UIPopupList_get_value_m37664 (UIPopupList_t2074 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_value(System.String)
 void UIPopupList_set_value_m37665 (UIPopupList_t2074 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_selection()
 String_t* UIPopupList_get_selection_m37666 (UIPopupList_t2074 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_selection(System.String)
 void UIPopupList_set_selection_m37667 (UIPopupList_t2074 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_handleEvents()
 bool UIPopupList_get_handleEvents_m37668 (UIPopupList_t2074 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_handleEvents(System.Boolean)
 void UIPopupList_set_handleEvents_m37669 (UIPopupList_t2074 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Start()
 void UIPopupList_Start_m37670 (UIPopupList_t2074 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnLocalize(Localization)
 void UIPopupList_OnLocalize_m37671 (UIPopupList_t2074 * __this, Localization_t5323 * ___loc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Highlight(UILabel,System.Boolean)
 void UIPopupList_Highlight_m37672 (UIPopupList_t2074 * __this, UILabel_t1176 * ___lbl, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemHover(UnityEngine.GameObject,System.Boolean)
 void UIPopupList_OnItemHover_m37673 (UIPopupList_t2074 * __this, GameObject_t9 * ___go, bool ___isOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Select(UILabel,System.Boolean)
 void UIPopupList_Select_m37674 (UIPopupList_t2074 * __this, UILabel_t1176 * ___lbl, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemPress(UnityEngine.GameObject,System.Boolean)
 void UIPopupList_OnItemPress_m37675 (UIPopupList_t2074 * __this, GameObject_t9 * ___go, bool ___isPressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnKey(UnityEngine.KeyCode)
 void UIPopupList_OnKey_m37676 (UIPopupList_t2074 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnSelect(System.Boolean)
 void UIPopupList_OnSelect_m37677 (UIPopupList_t2074 * __this, bool ___isSelected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateColor(UIWidget)
 void UIPopupList_AnimateColor_m37678 (UIPopupList_t2074 * __this, UIWidget_t5195 * ___widget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimatePosition(UIWidget,System.Boolean,System.Single)
 void UIPopupList_AnimatePosition_m37679 (UIPopupList_t2074 * __this, UIWidget_t5195 * ___widget, bool ___placeAbove, float ___bottom, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateScale(UIWidget,System.Boolean,System.Single)
 void UIPopupList_AnimateScale_m37680 (UIPopupList_t2074 * __this, UIWidget_t5195 * ___widget, bool ___placeAbove, float ___bottom, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Animate(UIWidget,System.Boolean,System.Single)
 void UIPopupList_Animate_m37681 (UIPopupList_t2074 * __this, UIWidget_t5195 * ___widget, bool ___placeAbove, float ___bottom, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnClick()
 void UIPopupList_OnClick_m37682 (UIPopupList_t2074 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
