#include "GameObject.h"

class RenderObject : protected GameObject
{
public:
	RenderObject();
	RenderObject(const RenderObject&);
	~RenderObject();
};