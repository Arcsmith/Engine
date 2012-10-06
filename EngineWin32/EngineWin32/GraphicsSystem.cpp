#include "GraphicsSystem.h"

GraphicsSystem::GraphicsSystem()
{

}

GraphicsSystem::GraphicsSystem(const GraphicsSystem& other)
{

}

GraphicsSystem::~GraphicsSystem()
{

}

bool GraphicsSystem::Initialize(int screenWidth, int screenHeight, HWND hwnd)
{
	bool result = false;

	camera = new Camera;
	if(camera == 0)
		return false;

	return true;
}

bool GraphicsSystem::Frame()
{	
	Render();
	return true;
}

bool GraphicsSystem::Render()
{
	return true;
}

void GraphicsSystem::Shutdown()
{
	delete camera;
	
	return;
}