#pragma once

#include <data_types.h>

namespace Core
{
    class Vector3
    {
    private:
        // Coordinte variables
        float x, y, z;
    public:
        Vector3();

		float GetX();
		float GetY();
		float GetZ();
    };
}

