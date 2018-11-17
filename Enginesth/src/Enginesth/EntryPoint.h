#pragma once
#ifdef STH_PLATFORM_WINDOWS

extern Enginesth::Application* Enginesth::CreateApplication();

int main(int argc, char** argv)
{
	Enginesth::Log::Init();
	STH_CORE_WARN("Initialized Log!");
	int a = 5;
	STH_INFO("Hello! Client {0}",a);
//	printf("Hello! World");
	auto app = Enginesth::CreateApplication();
	app->Run();
	delete app;
}

#endif