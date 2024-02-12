#pragma once

#include "Define/Defines.h"

class Bullet
{
public:
	Bullet(Transform _position);

	void	Update();
	void	Draw();
	void	GetPosition(Transform& _position);
	int		IsAbleDelete();
private:
	Transform	position;
	int			radius;
	int			moveSpeed;
	int			isAbleDelete;
};
