#include "Math.h"

class GameObject
{
protected:
	Vector3 position;
	Vector3 rotation;

public:
	virtual ~GameObject() {};
	Vector3 GetPosition(){ return position;};
	Vector3 GetRotation(){ return rotation;};
};