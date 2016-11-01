#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t6900;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t6867;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835;
// System.String
struct String_t;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t6871;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Xml.Serialization.ClassMap
struct ClassMap_t6891;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t6875;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t6894;
// System.Type
struct Type_t;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Serialization.ListMap
struct ListMap_t6902;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t6903;

// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
 void XmlSerializationWriterInterpreter__ctor_m47454 (XmlSerializationWriterInterpreter_t6900 * __this, XmlMapping_t6867 * ___typeMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::InitCallbacks()
 void XmlSerializationWriterInterpreter_InitCallbacks_m47455 (XmlSerializationWriterInterpreter_t6900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteRoot(System.Object)
 void XmlSerializationWriterInterpreter_WriteRoot_m47456 (XmlSerializationWriterInterpreter_t6900 * __this, Object_t * ___ob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObject(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
 void XmlSerializationWriterInterpreter_WriteObject_m47457 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapping_t6835 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, bool ___isNullable, bool ___needType, bool ___writeWrappingElem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMessage(System.Xml.Serialization.XmlMembersMapping,System.Object[])
 void XmlSerializationWriterInterpreter_WriteMessage_m47458 (XmlSerializationWriterInterpreter_t6900 * __this, XmlMembersMapping_t6871 * ___membersMap, ObjectU5BU5D_t142* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
 void XmlSerializationWriterInterpreter_WriteObjectElement_m47459 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapping_t6835 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementAttributes(System.Xml.Serialization.XmlTypeMapping,System.Object)
 void XmlSerializationWriterInterpreter_WriteObjectElementAttributes_m47460 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapping_t6835 * ___typeMap, Object_t * ___ob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementElements(System.Xml.Serialization.XmlTypeMapping,System.Object)
 void XmlSerializationWriterInterpreter_WriteObjectElementElements_m47461 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapping_t6835 * ___typeMap, Object_t * ___ob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
 void XmlSerializationWriterInterpreter_WriteMembers_m47462 (XmlSerializationWriterInterpreter_t6900 * __this, ClassMap_t6891 * ___map, Object_t * ___ob, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
 void XmlSerializationWriterInterpreter_WriteAttributeMembers_m47463 (XmlSerializationWriterInterpreter_t6900 * __this, ClassMap_t6891 * ___map, Object_t * ___ob, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteElementMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
 void XmlSerializationWriterInterpreter_WriteElementMembers_m47464 (XmlSerializationWriterInterpreter_t6900 * __this, ClassMap_t6891 * ___map, Object_t * ___ob, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
 Object_t * XmlSerializationWriterInterpreter_GetMemberValue_m47465 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapMember_t6875 * ___member, Object_t * ___ob, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriterInterpreter::MemberHasValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
 bool XmlSerializationWriterInterpreter_MemberHasValue_m47466 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapMember_t6875 * ___member, Object_t * ___ob, bool ___isValueList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMemberElement(System.Xml.Serialization.XmlTypeMapElementInfo,System.Object)
 void XmlSerializationWriterInterpreter_WriteMemberElement_m47467 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapElementInfo_t6894 * ___elem, Object_t * ___memberValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::ImplicitConvert(System.Object,System.Type)
 Object_t * XmlSerializationWriterInterpreter_ImplicitConvert_m47468 (XmlSerializationWriterInterpreter_t6900 * __this, Object_t * ___obj, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueLiteral(System.Object,System.String,System.String,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
 void XmlSerializationWriterInterpreter_WritePrimitiveValueLiteral_m47469 (XmlSerializationWriterInterpreter_t6900 * __this, Object_t * ___memberValue, String_t* ___name, String_t* ___ns, XmlTypeMapping_t6835 * ___mappedType, TypeData_t6841 * ___typeData, bool ___wrapped, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueEncoded(System.Object,System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
 void XmlSerializationWriterInterpreter_WritePrimitiveValueEncoded_m47470 (XmlSerializationWriterInterpreter_t6900 * __this, Object_t * ___memberValue, String_t* ___name, String_t* ___ns, XmlQualifiedName_t6656 * ___xsiType, XmlTypeMapping_t6835 * ___mappedType, TypeData_t6841 * ___typeData, bool ___wrapped, bool ___isNullable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
 void XmlSerializationWriterInterpreter_WriteListElement_m47471 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapping_t6835 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListContent(System.Object,System.Xml.Serialization.TypeData,System.Xml.Serialization.ListMap,System.Object,System.Text.StringBuilder)
 void XmlSerializationWriterInterpreter_WriteListContent_m47472 (XmlSerializationWriterInterpreter_t6900 * __this, Object_t * ___container, TypeData_t6841 * ___listType, ListMap_t6902 * ___map, Object_t * ___ob, StringBuilder_t1097 * ___targetString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlSerializationWriterInterpreter::GetListCount(System.Xml.Serialization.TypeData,System.Object)
 int32_t XmlSerializationWriterInterpreter_GetListCount_m47473 (XmlSerializationWriterInterpreter_t6900 * __this, TypeData_t6841 * ___listType, Object_t * ___ob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAnyElementContent(System.Xml.Serialization.XmlTypeMapMemberAnyElement,System.Object)
 void XmlSerializationWriterInterpreter_WriteAnyElementContent_m47474 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapMemberAnyElement_t6903 * ___member, Object_t * ___memberValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
 void XmlSerializationWriterInterpreter_WritePrimitiveElement_m47475 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapping_t6835 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
 void XmlSerializationWriterInterpreter_WriteEnumElement_m47476 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapping_t6835 * ___typeMap, Object_t * ___ob, String_t* ___element, String_t* ___namesp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetStringValue(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Object)
 String_t* XmlSerializationWriterInterpreter_GetStringValue_m47477 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapping_t6835 * ___typeMap, TypeData_t6841 * ___type, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetEnumXmlValue(System.Xml.Serialization.XmlTypeMapping,System.Object)
 String_t* XmlSerializationWriterInterpreter_GetEnumXmlValue_m47478 (XmlSerializationWriterInterpreter_t6900 * __this, XmlTypeMapping_t6835 * ___typeMap, Object_t * ___ob, MethodInfo* method) IL2CPP_METHOD_ATTR;
