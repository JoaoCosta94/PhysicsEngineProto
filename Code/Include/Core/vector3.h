#pragma once

#include <math.h>
#include <data_types.h>

namespace Core
{
    class Vector3
    {
    private:
        // Coordinte variables
        real _X, _Y, _Z, _pad;
    public:
        Vector3();
        Vector3(const real x, const real y, const real z);
        Vector3(const real value);

		// Setters
		void SetX(const real x);
		void SetY(const real y);
		void SetZ(const real z);

		// Getters
		real GetX() const;
		real GetY() const;
		real GetZ() const;

		// Modifiers
		void Reflect();
		void Normalize();
		void Scale(const real value);
		void MoveX(const real dX);
		void MoveY(const real dY);
		void MoveZ(const real dZ);

		// Math operations
		real SquareMag() const;
		real Mag() const;
		real ScalarProd(const Vector3& V) const;
		Vector3 VectorProd(const Vector3& V) const;

		// Overloads
		Vector3 operator +(const Vector3& V) const;
		Vector3 operator +(const real value) const;

		void operator +=(const Vector3& V);
		void operator +=(const real value);

		Vector3 operator -(const Vector3& V) const;
		Vector3 operator -(const real value) const;

		void operator -=(const Vector3& V);
		void operator -=(const real value);

		Vector3 operator *(const Vector3& V) const;
		Vector3 operator *(const real value) const;

		void operator *=(const Vector3& V);
		void operator *=(const real value);

		Vector3 operator /(const Vector3& V) const;
		Vector3 operator /(const real value) const;

		void operator /=(const Vector3& V);
		void operator /=(const real value);

		Vector3 operator %(const Vector3& V) const;

		void operator %=(const Vector3& V);

		void operator =(const Vector3& V);
		void operator =(const real value);

		// Static helpers
		static real GetAngle(const Vector3& v1, const Vector3& v2);
		static real GetAngleScalarProduct(const Vector3& v1, const Vector3& v2, const real ScalarProd);
    };
} // Namespace Core

