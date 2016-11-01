#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TeamPlatformWindow/TeamPlatformplayerInfo
struct TeamPlatformplayerInfo_t2077;
struct TeamPlatformplayerInfo_t2077_marshaled;

void TeamPlatformplayerInfo_t2077_marshal(const TeamPlatformplayerInfo_t2077& unmarshaled, TeamPlatformplayerInfo_t2077_marshaled& marshaled);
void TeamPlatformplayerInfo_t2077_marshal_back(const TeamPlatformplayerInfo_t2077_marshaled& marshaled, TeamPlatformplayerInfo_t2077& unmarshaled);
void TeamPlatformplayerInfo_t2077_marshal_cleanup(TeamPlatformplayerInfo_t2077_marshaled& marshaled);
