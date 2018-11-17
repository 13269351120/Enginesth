#pragma once
#include "Core.h"
#include <memory>
#include "spdlog/spdlog.h"

namespace Enginesth {
	class ENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}
//Core Log marcos
#define STH_CORE_ERROR(...)    ::Enginesth::Log::GetCoreLogger()->error(__VA_ARGS__)
#define STH_CORE_WARN(...)     ::Enginesth::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define STH_CORE_TRACE(...)    ::Enginesth::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define STH_CORE_INFO(...)     ::Enginesth::Log::GetCoreLogger()->info(__VA_ARGS__)
#define STH_CORE_FATAL(...)    ::Enginesth::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//Core Log marcos
#define STH_ERROR(...)         ::Enginesth::Log::GetClientLogger()->error(__VA_ARGS__)
#define STH_WARN(...)          ::Enginesth::Log::GetClientLogger()->warn(__VA_ARGS__)
#define STH_TRACE(...)         ::Enginesth::Log::GetClientLogger()->trace(__VA_ARGS__)
#define STH_INFO(...)          ::Enginesth::Log::GetClientLogger()->info(__VA_ARGS__)
#define STH_FATAL(...)         ::Enginesth::Log::GetClientLogger()->fatal(__VA_ARGS__)
