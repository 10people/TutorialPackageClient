#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t6890;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t6867;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t6871;
// System.Xml.Serialization.ClassMap
struct ClassMap_t6891;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t6875;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t6894;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
 void XmlSerializationReaderInterpreter__ctor_m47363 (XmlSerializationReaderInterpreter_t6890 * __this, XmlMapping_t6867 * ___typeMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.cctor()
 void XmlSerializationReaderInterpreter__cctor_m47364 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitCallbacks()
 void XmlSerializationReaderInterpreter_InitCallbacks_m47365 (XmlSerializationReaderInterpreter_t6890 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitIDs()
 void XmlSerializationReaderInterpreter_InitIDs_m47366 (XmlSerializationReaderInterpreter_t6890 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot()
 Object_t * XmlSerializationReaderInterpreter_ReadRoot_m47367 (XmlSerializationReaderInterpreter_t6890 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEncodedObject(System.Xml.Serialization.XmlTypeMapping)
 Object_t * XmlSerializationReaderInterpreter_ReadEncodedObject_m47368 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMessage(System.Xml.Serialization.XmlMembersMapping)
 Object_t * XmlSerializationReaderInterpreter_ReadMessage_m47369 (XmlSerializationReaderInterpreter_t6890 * __this, XmlMembersMapping_t6871 * ___typeMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot(System.Xml.Serialization.XmlTypeMapping)
 Object_t * XmlSerializationReaderInterpreter_ReadRoot_m47370 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___rootMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObject(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
 Object_t * XmlSerializationReaderInterpreter_ReadObject_m47371 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, bool ___isNullable, bool ___checkType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstance(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
 Object_t * XmlSerializationReaderInterpreter_ReadClassInstance_m47372 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, bool ___isNullable, bool ___checkType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstanceMembers(System.Xml.Serialization.XmlTypeMapping,System.Object)
 void XmlSerializationReaderInterpreter_ReadClassInstanceMembers_m47373 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, Object_t * ___ob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
 void XmlSerializationReaderInterpreter_ReadAttributeMembers_m47374 (XmlSerializationReaderInterpreter_t6890 * __this, ClassMap_t6891 * ___map, Object_t * ___ob, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean,System.Boolean)
 void XmlSerializationReaderInterpreter_ReadMembers_m47375 (XmlSerializationReaderInterpreter_t6890 * __this, ClassMap_t6891 * ___map, Object_t * ___ob, bool ___isValueList, bool ___readByOrder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetListMembersDefaults(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
 void XmlSerializationReaderInterpreter_SetListMembersDefaults_m47376 (XmlSerializationReaderInterpreter_t6890 * __this, ClassMap_t6891 * ___map, Object_t * ___ob, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FixupMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
 void XmlSerializationReaderInterpreter_FixupMembers_m47377 (XmlSerializationReaderInterpreter_t6890 * __this, ClassMap_t6891 * ___map, Object_t * ___obfixup, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownAttribute(System.Object)
 void XmlSerializationReaderInterpreter_ProcessUnknownAttribute_m47378 (XmlSerializationReaderInterpreter_t6890 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownElement(System.Object)
 void XmlSerializationReaderInterpreter_ProcessUnknownElement_m47379 (XmlSerializationReaderInterpreter_t6890 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReaderInterpreter::IsReadOnly(System.Xml.Serialization.XmlTypeMapMember,System.Xml.Serialization.TypeData,System.Object,System.Boolean)
 bool XmlSerializationReaderInterpreter_IsReadOnly_m47380 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapMember_t6875 * ___member, TypeData_t6841 * ___memType, Object_t * ___ob, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
 void XmlSerializationReaderInterpreter_SetMemberValue_m47381 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapMember_t6875 * ___member, Object_t * ___ob, Object_t * ___value, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValueFromAttr(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
 void XmlSerializationReaderInterpreter_SetMemberValueFromAttr_m47382 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapMember_t6875 * ___member, Object_t * ___ob, Object_t * ___value, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
 Object_t * XmlSerializationReaderInterpreter_GetMemberValue_m47383 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapMember_t6875 * ___member, Object_t * ___ob, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObjectElement(System.Xml.Serialization.XmlTypeMapElementInfo)
 Object_t * XmlSerializationReaderInterpreter_ReadObjectElement_m47384 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapElementInfo_t6894 * ___elem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveValue(System.Xml.Serialization.XmlTypeMapElementInfo)
 Object_t * XmlSerializationReaderInterpreter_ReadPrimitiveValue_m47385 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapElementInfo_t6894 * ___elem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetValueFromXmlString(System.String,System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlTypeMapping)
 Object_t * XmlSerializationReaderInterpreter_GetValueFromXmlString_m47386 (XmlSerializationReaderInterpreter_t6890 * __this, String_t* ___value, TypeData_t6841 * ___typeData, XmlTypeMapping_t6835 * ___typeMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Object,System.Boolean)
 Object_t * XmlSerializationReaderInterpreter_ReadListElement_m47387 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, bool ___isNullable, Object_t * ___list, bool ___canCreateInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListString(System.Xml.Serialization.XmlTypeMapping,System.String)
 Object_t * XmlSerializationReaderInterpreter_ReadListString_m47388 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, String_t* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::AddListValue(System.Xml.Serialization.TypeData,System.Object&,System.Int32,System.Object,System.Boolean)
 void XmlSerializationReaderInterpreter_AddListValue_m47389 (XmlSerializationReaderInterpreter_t6890 * __this, TypeData_t6841 * ___listType, Object_t ** ___list, int32_t ___index, Object_t * ___value, bool ___canCreateInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateInstance(System.Type)
 Object_t * XmlSerializationReaderInterpreter_CreateInstance_m47390 (XmlSerializationReaderInterpreter_t6890 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateList(System.Type)
 Object_t * XmlSerializationReaderInterpreter_CreateList_m47391 (XmlSerializationReaderInterpreter_t6890 * __this, Type_t * ___listType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::InitializeList(System.Xml.Serialization.TypeData)
 Object_t * XmlSerializationReaderInterpreter_InitializeList_m47392 (XmlSerializationReaderInterpreter_t6890 * __this, TypeData_t6841 * ___listType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FillList(System.Object,System.Object)
 void XmlSerializationReaderInterpreter_FillList_m47393 (XmlSerializationReaderInterpreter_t6890 * __this, Object_t * ___list, Object_t * ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::CopyEnumerableList(System.Object,System.Object)
 void XmlSerializationReaderInterpreter_CopyEnumerableList_m47394 (XmlSerializationReaderInterpreter_t6890 * __this, Object_t * ___source, Object_t * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNodeElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
 Object_t * XmlSerializationReaderInterpreter_ReadXmlNodeElement_m47395 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNode(System.Xml.Serialization.TypeData,System.Boolean)
 Object_t * XmlSerializationReaderInterpreter_ReadXmlNode_m47396 (XmlSerializationReaderInterpreter_t6890 * __this, TypeData_t6841 * ___type, bool ___wrapped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
 Object_t * XmlSerializationReaderInterpreter_ReadPrimitiveElement_m47397 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
 Object_t * XmlSerializationReaderInterpreter_ReadEnumElement_m47398 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetEnumValue(System.Xml.Serialization.XmlTypeMapping,System.String)
 Object_t * XmlSerializationReaderInterpreter_GetEnumValue_m47399 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlSerializableElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
 Object_t * XmlSerializationReaderInterpreter_ReadXmlSerializableElement_m47400 (XmlSerializationReaderInterpreter_t6890 * __this, XmlTypeMapping_t6835 * ___typeMap, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
