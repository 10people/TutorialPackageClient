#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.NameTable
struct NameTable_t6975;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.Xml.NameTable::.ctor()
 void NameTable__ctor_m48004 (NameTable_t6975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.Char[],System.Int32,System.Int32)
 String_t* NameTable_Add_m48005 (NameTable_t6975 * __this, CharU5BU5D_t1016* ___key, int32_t ___start, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.String)
 String_t* NameTable_Add_m48006 (NameTable_t6975 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Get(System.String)
 String_t* NameTable_Get_m48007 (NameTable_t6975 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::AddEntry(System.String,System.Int32)
 String_t* NameTable_AddEntry_m48008 (NameTable_t6975 * __this, String_t* ___str, int32_t ___hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.NameTable::StrEqArray(System.String,System.Char[],System.Int32)
 bool NameTable_StrEqArray_m48009 (Object_t * __this/* static, unused */, String_t* ___str, CharU5BU5D_t1016* ___str2, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
