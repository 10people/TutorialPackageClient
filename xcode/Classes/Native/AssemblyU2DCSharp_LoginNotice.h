#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LoginNotice
struct LoginNotice_t2011  : public MonoBehaviour_t18
{
	// UILabel LoginNotice::labelText
	UILabel_t1176 * ___labelText;
	// UnityEngine.GameObject LoginNotice::objChild
	GameObject_t9 * ___objChild;
	// System.Boolean LoginNotice::m_bRequesting
	bool ___m_bRequesting;
};
struct LoginNotice_t2011_StaticFields{
	// System.Boolean LoginNotice::m_bReceiveData
	bool ___m_bReceiveData;
	// System.String LoginNotice::m_text
	String_t* ___m_text;
};
