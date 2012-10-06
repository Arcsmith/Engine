#ifndef _CAMERA_H_
#define _CAMERA_H_

#include <D3DX10math.h>
#include "RenderObject.h"

class Camera : RenderObject
{
public:
	Camera();
	Camera(const Camera&);
	~Camera();
	void Render();
};

#endif