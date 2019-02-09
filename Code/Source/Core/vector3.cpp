#include <Core/vector3.h>

namespace Core
{
	Vector3::Vector3() : _X(0), _Y(0), _Z(0)
	{
	}

	Vector3::Vector3(const real x, const real y, const real z) : _X(x), _Y(y), _Z(z)
	{
	}

	Vector3::Vector3(const real value) : _X(value), _Y(value), _Z(value)
	{

	}

	void Vector3::SetX(const real x)
	{
		_X = x;
	}

	void Vector3::SetY(const real y)
	{
		_Y = y;
	}

	void Vector3::SetZ(const real z)
	{
		_Z = z;
	}

	real Vector3::GetX() const
	{
		return _X;
	}

	real Vector3::GetY() const
	{
		return _Y;
	}

	real Vector3::GetZ() const
	{
		return _Z;
	}

	void Vector3::Reflect()
	{
		_X = -_X;
		_Y = -_Y;
		_Z = -_Z;
	}

	void Vector3::Normalize()
	{
		(*this) *= ((real)1) / Mag();
	}

	void Vector3::Scale(const real value)
	{
		_X *= value;
		_Y *= value;
		_Z *= value;
	}

	void Vector3::MoveX(const real dX)
	{
		_X += dX;
	}

	void Vector3::MoveY(const real dY)
	{
		_Y += dY;
	}

	void Vector3::MoveZ(const real dZ)
	{
		_Z += dZ;
	}
	
	real Vector3::SquareMag() const
	{
		return _X*_X + _Y*_Y + _Z*_Z;
	}

	real Vector3::Mag() const
	{
		return sqrt(_X*_X + _Y * _Y + _Z * _Z);
	}

	real Vector3::ScalarProd(const Vector3& V) const
	{
		return _X * V.GetX() + _Y * V.GetY() + _Z * V.GetZ();
	}

	Vector3 Vector3::VectorProd(const Vector3& V) const
	{
		return Vector3(
			_Y*V.GetZ() - V.GetY()*_Z,
			V.GetX()*_Z - _X*V.GetZ(),
			_X*V.GetY() - V.GetX()*_Y
		);
	}

	Vector3 Vector3::operator +(const Vector3& V) const
	{
		return Vector3(
			_X + V.GetX(),
			_Y + V.GetY(),
			_Z + V.GetZ()
		);
	}

	Vector3 Vector3::operator +(const real value) const
	{
		return Vector3(
			_X + value,
			_Y + value,
			_Z + value
		);
	}

	void Vector3::operator +=(const Vector3& V)
	{
		_X += V.GetX();
		_Y += V.GetY();
		_Z += V.GetZ();
	}

	void Vector3::operator +=(const real value)
	{
		_X += value;
		_Y += value;
		_Z += value;
	}

	Vector3 Vector3::operator -(const Vector3& V) const
	{
		return Vector3(
			_X - V.GetX(),
			_Y - V.GetY(),
			_Z - V.GetZ()
		);
	}

	Vector3 Vector3::operator -(const real value) const
	{
		return Vector3(
			_X - value,
			_Y - value,
			_Z - value
		);
	}

	void Vector3::operator -=(const Vector3& V)
	{
		_X -= V.GetX();
		_Y -= V.GetY();
		_Z -= V.GetZ();
	}

	void Vector3::operator -=(const real value)
	{
		_X -= value;
		_Y -= value;
		_Z -= value;
	}

	Vector3 Vector3::operator *(const Vector3& V) const
	{
		return Vector3(
			_X * V.GetX(),
			_Y * V.GetY(),
			_Z * V.GetZ()
		);
	}

	Vector3 Vector3::operator *(const real value) const
	{
		return Vector3(
			_X * value,
			_Y * value,
			_Z * value
		);
	}

	void Vector3::operator *=(const Vector3& V)
	{
		_X *= V.GetX();
		_Y *= V.GetY();
		_Z *= V.GetZ();
	}

	void Vector3::operator *=(const real value)
	{
		_X *= value;
		_Y *= value;
		_Z *= value;
	}

	Vector3 Vector3::operator /(const Vector3& V) const
	{
		return Vector3(
			_X / V.GetX(),
			_Y / V.GetY(),
			_Z / V.GetZ()
		);
	}

	Vector3 Vector3::operator /(const real value) const
	{
		return Vector3(
			_X / value,
			_Y / value,
			_Z / value
		);
	}

	void Vector3::operator /=(const Vector3& V)
	{
		_X /= V.GetX();
		_Y /= V.GetY();
		_Z /= V.GetZ();
	}
	void Vector3::operator /=(const real value)
	{
		_X /= value;
		_Y /= value;
		_Z /= value;
	}

	Vector3 Vector3::operator %(const Vector3& V) const
	{
		return VectorProd(V);
	}

	void Vector3::operator %=(const Vector3& V)
	{
		*this = VectorProd(V);
	}

	void Vector3::operator =(const Vector3& V)
	{
		*this = V;
	}

	void Vector3::operator =(const real value)
	{
		_X = value;
		_Y = value;
		_Z = value;
	}

	real Vector3::GetAngle(const Vector3& v1, const Vector3& v2)
	{
		return acos(v1.ScalarProd(v2) / sqrt(v1.SquareMag()*v2.SquareMag()));
	}

	real Vector3::GetAngleScalarProduct(const Vector3& v1, const Vector3& v2, const real ScalarProd)
	{
		return acos(ScalarProd / sqrt(v1.SquareMag()*v2.SquareMag()));
	}
}