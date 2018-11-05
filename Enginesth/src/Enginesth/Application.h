#pragma once

#include "Core.h"

namespace Enginesth {
	class ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}