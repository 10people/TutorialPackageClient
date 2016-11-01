#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIOStat
struct MonoIOStat_t7913;
struct MonoIOStat_t7913_marshaled;

void MonoIOStat_t7913_marshal(const MonoIOStat_t7913& unmarshaled, MonoIOStat_t7913_marshaled& marshaled);
void MonoIOStat_t7913_marshal_back(const MonoIOStat_t7913_marshaled& marshaled, MonoIOStat_t7913& unmarshaled);
void MonoIOStat_t7913_marshal_cleanup(MonoIOStat_t7913_marshaled& marshaled);
