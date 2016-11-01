#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
struct CharacterInfo_t5415;
struct CharacterInfo_t5415_marshaled;

void CharacterInfo_t5415_marshal(const CharacterInfo_t5415& unmarshaled, CharacterInfo_t5415_marshaled& marshaled);
void CharacterInfo_t5415_marshal_back(const CharacterInfo_t5415_marshaled& marshaled, CharacterInfo_t5415& unmarshaled);
void CharacterInfo_t5415_marshal_cleanup(CharacterInfo_t5415_marshaled& marshaled);
