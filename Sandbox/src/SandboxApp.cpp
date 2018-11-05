#include <Enginesth.h>

class Sandbox : public  Enginesth::Application
{
public :
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Enginesth::Application* Enginesth::CreateApplication()
{
	return new Sandbox();
}