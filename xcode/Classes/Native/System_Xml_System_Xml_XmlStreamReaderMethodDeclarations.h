#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlStreamReader
struct XmlStreamReader_t7003;
// System.Xml.XmlInputStream
struct XmlInputStream_t7002;
// System.IO.Stream
struct Stream_t1038;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
 void XmlStreamReader__ctor_m48305 (XmlStreamReader_t7003 * __this, XmlInputStream_t7002 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
 void XmlStreamReader__ctor_m48306 (XmlStreamReader_t7003 * __this, Stream_t1038 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.cctor()
 void XmlStreamReader__cctor_m48307 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Close()
 void XmlStreamReader_Close_m48308 (XmlStreamReader_t7003 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlStreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t XmlStreamReader_Read_m48309 (XmlStreamReader_t7003 * __this, CharU5BU5D_t1016* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Dispose(System.Boolean)
 void XmlStreamReader_Dispose_m48310 (XmlStreamReader_t7003 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
