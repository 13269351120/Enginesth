#pragma once
#ifdef STH_PLATFORM_WINDOWS

extern Enginesth::Application* Enginesth::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello! World");
	auto app = Enginesth::CreateApplication();
	app->Run();
	delete app;
}

#endif