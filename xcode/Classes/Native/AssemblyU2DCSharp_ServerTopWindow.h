#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// LoginNotice
struct LoginNotice_t2011;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ServerTopWindow
struct ServerTopWindow_t1831  : public MonoBehaviour_t18
{
	// UILabel ServerTopWindow::labelCurServer
	UILabel_t1176 * ___labelCurServer;
	// UILabel ServerTopWindow::labelVersion
	UILabel_t1176 * ___labelVersion;
	// UILabel ServerTopWindow::labelMore
	UILabel_t1176 * ___labelMore;
	// UISprite ServerTopWindow::curServerState
	UISprite_t1202 * ___curServerState;
	// UISprite ServerTopWindow::sprRecommand
	UISprite_t1202 * ___sprRecommand;
	// LoginNotice ServerTopWindow::loginNotice
	LoginNotice_t2011 * ___loginNotice;
	// UnityEngine.GameObject ServerTopWindow::objHelpButton
	GameObject_t9 * ___objHelpButton;
};
