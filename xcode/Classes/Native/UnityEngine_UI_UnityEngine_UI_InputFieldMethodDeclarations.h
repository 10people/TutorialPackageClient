#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.InputField
struct InputField_t6113;
// UnityEngine.TextGenerator
struct TextGenerator_t6117;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6076;
// UnityEngine.UI.Graphic
struct Graphic_t6084;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t6108;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t6110;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t6112;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// UnityEngine.Event
struct Event_t5760;
struct Event_t5760_marshaled;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t5980;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t6085;
// UnityEngine.UI.InputField/ContentType[]
struct ContentTypeU5BU5D_t6118;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.InputField/EditState
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"

// System.Void UnityEngine.UI.InputField::.ctor()
 void InputField__ctor_m42896 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::.cctor()
 void InputField__cctor_m42897 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.InputField::get_cachedInputTextGenerator()
 TextGenerator_t6117 * InputField_get_cachedInputTextGenerator_m42898 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_shouldHideMobileInput(System.Boolean)
 void InputField_set_shouldHideMobileInput_m42899 (InputField_t6113 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_shouldHideMobileInput()
 bool InputField_get_shouldHideMobileInput_m42900 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
 String_t* InputField_get_text_m42901 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
 void InputField_set_text_m42902 (InputField_t6113 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
 bool InputField_get_isFocused_m42903 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::get_caretBlinkRate()
 float InputField_get_caretBlinkRate_m42904 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretBlinkRate(System.Single)
 void InputField_set_caretBlinkRate_m42905 (InputField_t6113 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
 Text_t6076 * InputField_get_textComponent_m42906 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_textComponent(UnityEngine.UI.Text)
 void InputField_set_textComponent_m42907 (InputField_t6113 * __this, Text_t6076 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
 Graphic_t6084 * InputField_get_placeholder_m42908 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_placeholder(UnityEngine.UI.Graphic)
 void InputField_set_placeholder_m42909 (InputField_t6113 * __this, Graphic_t6084 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.InputField::get_selectionColor()
 Color_t939  InputField_get_selectionColor_m42910 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
 void InputField_set_selectionColor_m42911 (InputField_t6113 * __this, Color_t939  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
 SubmitEvent_t6108 * InputField_get_onEndEdit_m42912 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onEndEdit(UnityEngine.UI.InputField/SubmitEvent)
 void InputField_set_onEndEdit_m42913 (InputField_t6113 * __this, SubmitEvent_t6108 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChange()
 OnChangeEvent_t6110 * InputField_get_onValueChange_m42914 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValueChange(UnityEngine.UI.InputField/OnChangeEvent)
 void InputField_set_onValueChange_m42915 (InputField_t6113 * __this, OnChangeEvent_t6110 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
 OnValidateInput_t6112 * InputField_get_onValidateInput_m42916 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
 void InputField_set_onValidateInput_m42917 (InputField_t6113 * __this, OnValidateInput_t6112 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
 int32_t InputField_get_characterLimit_m42918 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
 void InputField_set_characterLimit_m42919 (InputField_t6113 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
 int32_t InputField_get_contentType_m42920 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
 void InputField_set_contentType_m42921 (InputField_t6113 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
 int32_t InputField_get_lineType_m42922 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
 void InputField_set_lineType_m42923 (InputField_t6113 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::get_inputType()
 int32_t InputField_get_inputType_m42924 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
 void InputField_set_inputType_m42925 (InputField_t6113 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::get_keyboardType()
 int32_t InputField_get_keyboardType_m42926 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
 void InputField_set_keyboardType_m42927 (InputField_t6113 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::get_characterValidation()
 int32_t InputField_get_characterValidation_m42928 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
 void InputField_set_characterValidation_m42929 (InputField_t6113 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
 bool InputField_get_multiLine_m42930 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::get_asteriskChar()
 uint16_t InputField_get_asteriskChar_m42931 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_asteriskChar(System.Char)
 void InputField_set_asteriskChar_m42932 (InputField_t6113 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_wasCanceled()
 bool InputField_get_wasCanceled_m42933 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ClampPos(System.Int32&)
 void InputField_ClampPos_m42934 (InputField_t6113 * __this, int32_t* ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
 int32_t InputField_get_caretPosition_m42935 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
 void InputField_set_caretPosition_m42936 (InputField_t6113 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretSelectPos()
 int32_t InputField_get_caretSelectPos_m42937 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretSelectPos(System.Int32)
 void InputField_set_caretSelectPos_m42938 (InputField_t6113 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
 bool InputField_get_hasSelection_m42939 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEnable()
 void InputField_OnEnable_m42940 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDisable()
 void InputField_OnDisable_m42941 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::CaretBlink()
 Object_t * InputField_CaretBlink_m42942 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretVisible()
 void InputField_SetCaretVisible_m42943 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretActive()
 void InputField_SetCaretActive_m42944 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFocus()
 void InputField_OnFocus_m42945 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SelectAll()
 void InputField_SelectAll_m42946 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextEnd(System.Boolean)
 void InputField_MoveTextEnd_m42947 (InputField_t6113 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextStart(System.Boolean)
 void InputField_MoveTextStart_m42948 (InputField_t6113 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_clipboard()
 String_t* InputField_get_clipboard_m42949 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_clipboard(System.String)
 void InputField_set_clipboard_m42950 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::InPlaceEditing()
 bool InputField_InPlaceEditing_m42951 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LateUpdate()
 void InputField_LateUpdate_m42952 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.InputField::ScreenToLocal(UnityEngine.Vector2)
 Vector2_t12  InputField_ScreenToLocal_m42953 (InputField_t6113 * __this, Vector2_t12  ___screen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2,UnityEngine.TextGenerator)
 int32_t InputField_GetUnclampedCharacterLineFromPosition_m42954 (InputField_t6113 * __this, Vector2_t12  ___pos, TextGenerator_t6117 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetCharacterIndexFromPosition(UnityEngine.Vector2)
 int32_t InputField_GetCharacterIndexFromPosition_m42955 (InputField_t6113 * __this, Vector2_t12  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool InputField_MayDrag_m42956 (InputField_t6113 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnBeginDrag_m42957 (InputField_t6113 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnDrag_m42958 (InputField_t6113 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData)
 Object_t * InputField_MouseDragOutsideRect_m42959 (InputField_t6113 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnEndDrag_m42960 (InputField_t6113 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerDown_m42961 (InputField_t6113 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/EditState UnityEngine.UI.InputField::KeyPressed(UnityEngine.Event)
 int32_t InputField_KeyPressed_m42962 (InputField_t6113 * __this, Event_t5760 * ___evt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsValidChar(System.Char)
 bool InputField_IsValidChar_m42963 (InputField_t6113 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ProcessEvent(UnityEngine.Event)
 void InputField_ProcessEvent_m42964 (InputField_t6113 * __this, Event_t5760 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnUpdateSelected_m42965 (InputField_t6113 * __this, BaseEventData_t5980 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::GetSelectedString()
 String_t* InputField_GetSelectedString_m42966 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtNextWordBegin()
 int32_t InputField_FindtNextWordBegin_m42967 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
 void InputField_MoveRight_m42968 (InputField_t6113 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtPrevWordBegin()
 int32_t InputField_FindtPrevWordBegin_m42969 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
 void InputField_MoveLeft_m42970 (InputField_t6113 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::DetermineCharacterLine(System.Int32,UnityEngine.TextGenerator)
 int32_t InputField_DetermineCharacterLine_m42971 (InputField_t6113 * __this, int32_t ___charPos, TextGenerator_t6117 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineUpCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineUpCharacterPosition_m42972 (InputField_t6113 * __this, int32_t ___originalPos, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineDownCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineDownCharacterPosition_m42973 (InputField_t6113 * __this, int32_t ___originalPos, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean)
 void InputField_MoveDown_m42974 (InputField_t6113 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
 void InputField_MoveDown_m42975 (InputField_t6113 * __this, bool ___shift, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean)
 void InputField_MoveUp_m42976 (InputField_t6113 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
 void InputField_MoveUp_m42977 (InputField_t6113 * __this, bool ___shift, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Delete()
 void InputField_Delete_m42978 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ForwardSpace()
 void InputField_ForwardSpace_m42979 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Backspace()
 void InputField_Backspace_m42980 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Insert(System.Char)
 void InputField_Insert_m42981 (InputField_t6113 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChangedAndUpdateLabel()
 void InputField_SendOnValueChangedAndUpdateLabel_m42982 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChanged()
 void InputField_SendOnValueChanged_m42983 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnSubmit()
 void InputField_SendOnSubmit_m42984 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.String)
 void InputField_Append_m42985 (InputField_t6113 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.Char)
 void InputField_Append_m42986 (InputField_t6113 * __this, uint16_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateLabel()
 void InputField_UpdateLabel_m42987 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsSelectionVisible()
 bool InputField_IsSelectionVisible_m42988 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineStartPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineStartPosition_m42989 (Object_t * __this/* static, unused */, TextGenerator_t6117 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineEndPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineEndPosition_m42990 (Object_t * __this/* static, unused */, TextGenerator_t6117 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetDrawRangeToContainCaretPosition(UnityEngine.TextGenerator,System.Int32,System.Int32&,System.Int32&)
 void InputField_SetDrawRangeToContainCaretPosition_m42991 (InputField_t6113 * __this, TextGenerator_t6117 * ___gen, int32_t ___caretPos, int32_t* ___drawStart, int32_t* ___drawEnd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
 void InputField_MarkGeometryAsDirty_m42992 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate)
 void InputField_Rebuild_m42993 (InputField_t6113 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateGeometry()
 void InputField_UpdateGeometry_m42994 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::AssignPositioningIfNeeded()
 void InputField_AssignPositioningIfNeeded_m42995 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void InputField_OnFillVBO_m42996 (InputField_t6113 * __this, List_1_t6085 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateCursor(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateCursor_m42997 (InputField_t6113 * __this, List_1_t6085 * ___vbo, Vector2_t12  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::CreateCursorVerts()
 void InputField_CreateCursorVerts_m42998 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::SumLineHeights(System.Int32,UnityEngine.TextGenerator)
 float InputField_SumLineHeights_m42999 (InputField_t6113 * __this, int32_t ___endLine, TextGenerator_t6117 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateHightlight(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateHightlight_m43000 (InputField_t6113 * __this, List_1_t6085 * ___vbo, Vector2_t12  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::Validate(System.String,System.Int32,System.Char)
 uint16_t InputField_Validate_m43001 (InputField_t6113 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
 void InputField_ActivateInputField_m43002 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputFieldInternal()
 void InputField_ActivateInputFieldInternal_m43003 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSelect_m43004 (InputField_t6113 * __this, BaseEventData_t5980 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerClick_m43005 (InputField_t6113 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
 void InputField_DeactivateInputField_m43006 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnDeselect_m43007 (InputField_t6113 * __this, BaseEventData_t5980 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSubmit(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSubmit_m43008 (InputField_t6113 * __this, BaseEventData_t5980 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::EnforceContentType()
 void InputField_EnforceContentType_m43009 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField/ContentType[])
 void InputField_SetToCustomIfContentTypeIsNot_m43010 (InputField_t6113 * __this, ContentTypeU5BU5D_t6118* ___allowedContentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustom()
 void InputField_SetToCustom_m43011 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void InputField_DoStateTransition_m43012 (InputField_t6113 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool InputField_UnityEngine_UI_ICanvasElement_IsDestroyed_m43013 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t78 * InputField_UnityEngine_UI_ICanvasElement_get_transform_m43014 (InputField_t6113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
