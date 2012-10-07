#include "PlayerObject.h"

PlayerObject::PlayerObject()
{
	position = Vector3(0,0,0);
	rotation = Vector3(0,0,0);
}

PlayerObject::PlayerObject(const PlayerObject& other)
{
	position = other.position;
	rotation = other.rotation;
}

PlayerObject::~PlayerObject()
{
}