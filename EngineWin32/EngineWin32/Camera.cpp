#include "Camera.h"

Camera::Camera()
{
	position = Vector3(0,0,0);
	rotation = Vector3(0,0,0);
}

Camera::Camera(const Camera& other)
{
	position = other.position;
	rotation = other.rotation;
}

Camera::~Camera()
{
}

