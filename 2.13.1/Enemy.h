#pragma once

#include "Define/Defines.h"

class Enemy
{
public:
	Enemy(int _x, int _y);
	void Update() ;
	void Draw() ;
	void GetPosition(Transform* _position) ;
	static	int	isDead;

private:
	Transform	position;
	int			moveSpeed;
	int			radius;

};
