#include <vector3.h>

namespace Core
{
	Vector3::Vector3() : x(0), y(0), z(0)
	{

	}

	float Vector3::GetX()
	{
		return this->x;
	}

	float Vector3::GetY()
	{
		return this->y;
	}

	float Vector3::GetZ()
	{
		return this->z;
	}
}