#ifndef _GRAPHICSSYSTEM_H_
#define _GRAPHICSSYSTEM_H_

#include <Windows.h>
#include "D3DRenderer.h"
#include "Camera.h"

const bool FULL_SCREEN = false;
const bool VYSNCE_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;

class GraphicsSystem
{
public:
	GraphicsSystem();
	GraphicsSystem(const GraphicsSystem&);
	~GraphicsSystem();

	bool Initialize(int,int,HWND);
	void Shutdown();
	bool Frame();

	D3DRenderer* renderer;
	Camera* camera;

private:
	bool Render();
};

#endif