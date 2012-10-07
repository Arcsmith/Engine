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
	renderer = new D3DRenderer;
	if(renderer == 0)
		return false;

	camera = new Camera;
	if(camera == 0)
		return false;

	if(!renderer->Initialize(800,600,true,hwnd,true,100.0f,0))
		return false;

	return true;
}

bool GraphicsSystem::Frame()
{	
	renderer->BeginScene(0, 255, 0, 0);
	Render();
	return true;
}

bool GraphicsSystem::Render()
{
	renderer->EndScene();
	return true;
}

void GraphicsSystem::Shutdown()
{
	delete camera;
	
	return;
}