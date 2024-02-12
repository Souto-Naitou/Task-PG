#include "Bullet.h"
#include <Novice.h>

Bullet::Bullet(Transform _position)
{
	position = _position;
	radius = 5;
	moveSpeed = 5; 
	isAbleDelete = 0;
}

void Bullet::Update()
{
	position.y -= moveSpeed;
	if (position.y < 0) isAbleDelete = 1;
}

void Bullet::Draw()
{
	Novice::DrawEllipse(position.x, position.y, radius, radius, 0.0f, 0xffffffff, kFillModeSolid);
}

void Bullet::GetPosition(Transform& _position)
{
	_position = position;
}

int Bullet::IsAbleDelete()
{
	return isAbleDelete;
}
