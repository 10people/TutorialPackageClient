#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>
struct Dictionary_2_t4385;
// System.Collections.Generic.List`1<GameRes.AssetLoader>
struct List_1_t4386;
// GameRes.AssetManager/LoadingStartedHandler
struct LoadingStartedHandler_t4384;
// GameRes.AssetManager/LoadingHandler
struct LoadingHandler_t4383;
// System.Object
#include "mscorlib_System_Object.h"
// GameRes.AssetManager
struct AssetManager_t4387  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader> GameRes.AssetManager::_caches
	Dictionary_2_t4385 * ____caches;
	// System.Collections.Generic.List`1<GameRes.AssetLoader> GameRes.AssetManager::_loadings
	List_1_t4386 * ____loadings;
	// System.Collections.Generic.List`1<GameRes.AssetLoader> GameRes.AssetManager::_waitings
	List_1_t4386 * ____waitings;
	// GameRes.AssetManager/LoadingStartedHandler GameRes.AssetManager::LoadingStarted
	LoadingStartedHandler_t4384 * ___LoadingStarted;
	// GameRes.AssetManager/LoadingHandler GameRes.AssetManager::LoadingEvent
	LoadingHandler_t4383 * ___LoadingEvent;
};
