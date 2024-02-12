#pragma once

class Vector2
{
public:
	float x;
	float y;
	
	Vector2 operator+(const Vector2& _obj);
	Vector2 operator-(const Vector2& _obj);
};