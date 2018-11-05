#pragma once

#ifdef STH_PLATFORM_WINDOWS
	#ifdef STH_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif
#else
	#error Enginesth only supports Windows!
#endif