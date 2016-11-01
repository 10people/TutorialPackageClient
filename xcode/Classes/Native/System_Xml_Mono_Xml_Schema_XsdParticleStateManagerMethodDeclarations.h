#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t6663;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657;
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t6664;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t6665;
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t6666;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t6667;
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t6668;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t6669;
// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t6670;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t6671;
// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t6672;
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void Mono.Xml.Schema.XsdParticleStateManager::.ctor()
 void XsdParticleStateManager__ctor_m45890 (XsdParticleStateManager_t6660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::get_ProcessContents()
 int32_t XsdParticleStateManager_get_ProcessContents_m45891 (XsdParticleStateManager_t6660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PushContext()
 void XsdParticleStateManager_PushContext_m45892 (XsdParticleStateManager_t6660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PopContext()
 void XsdParticleStateManager_PopContext_m45893 (XsdParticleStateManager_t6660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::SetProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
 void XsdParticleStateManager_SetProcessContents_m45894 (XsdParticleStateManager_t6660 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::Create(System.Xml.Schema.XmlSchemaObject)
 XsdValidationState_t6661 * XsdParticleStateManager_Create_m45895 (XsdParticleStateManager_t6660 * __this, XmlSchemaObject_t6662 * ___xsobj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::MakeSequence(Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
 XsdValidationState_t6661 * XsdParticleStateManager_MakeSequence_m45896 (XsdParticleStateManager_t6660 * __this, XsdValidationState_t6661 * ___head, XsdValidationState_t6661 * ___rest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdElementValidationState Mono.Xml.Schema.XsdParticleStateManager::AddElement(System.Xml.Schema.XmlSchemaElement)
 XsdElementValidationState_t6663 * XsdParticleStateManager_AddElement_m45897 (XsdParticleStateManager_t6660 * __this, XmlSchemaElement_t6657 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdSequenceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddSequence(System.Xml.Schema.XmlSchemaSequence)
 XsdSequenceValidationState_t6664 * XsdParticleStateManager_AddSequence_m45898 (XsdParticleStateManager_t6660 * __this, XmlSchemaSequence_t6665 * ___sequence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdChoiceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddChoice(System.Xml.Schema.XmlSchemaChoice)
 XsdChoiceValidationState_t6666 * XsdParticleStateManager_AddChoice_m45899 (XsdParticleStateManager_t6660 * __this, XmlSchemaChoice_t6667 * ___choice, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAllValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAll(System.Xml.Schema.XmlSchemaAll)
 XsdAllValidationState_t6668 * XsdParticleStateManager_AddAll_m45900 (XsdParticleStateManager_t6660 * __this, XmlSchemaAll_t6669 * ___all, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAny(System.Xml.Schema.XmlSchemaAny)
 XsdAnyValidationState_t6670 * XsdParticleStateManager_AddAny_m45901 (XsdParticleStateManager_t6660 * __this, XmlSchemaAny_t6671 * ___any, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdEmptyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddEmpty()
 XsdEmptyValidationState_t6672 * XsdParticleStateManager_AddEmpty_m45902 (XsdParticleStateManager_t6660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
