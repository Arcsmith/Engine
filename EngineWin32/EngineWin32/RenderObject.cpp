#include "RenderObject.h"

RenderObject::RenderObject()
{
	position = Vector3(0,0,0);
	rotation = Vector3(0,0,0);
}

RenderObject::RenderObject(const RenderObject& other)
{
	position = other.position;
	rotation = other.rotation;
}

RenderObject::~RenderObject()
{
}