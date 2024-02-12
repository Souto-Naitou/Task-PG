#include "Vector2.h"

Vector2 Vector2::operator+(const Vector2& _obj)
{
	Vector2 result{};

	result.x = this->x + _obj.x;
	result.y = this->y + _obj.y;

	return result;
}

Vector2 Vector2::operator-(const Vector2& _obj)
{
	Vector2 result{};

	result.x = this->x - _obj.x;
	result.y = this->y - _obj.y;

	return result;
}
