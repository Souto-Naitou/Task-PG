#include "Enemy.h"
#include <Novice.h>

int Enemy::isDead;

Enemy::Enemy(int _x, int _y)
{
	position = Transform(_x, _y);
	radius = 30;
	moveSpeed = 5;
}

void Enemy::Update()
{
	if (position.x - radius < 0)
	{
		position.x = radius;
		moveSpeed *= -1;
	}
	else if (position.x + radius > 1280)
	{
		position.x = 1280 - radius;
		moveSpeed *= -1;
	}
	
	position.x += moveSpeed;
}

void Enemy::Draw()
{
	// 静的
	if (!isDead)
		Novice::DrawEllipse(position.x, position.y, radius, radius, 0.0f, 0xff0000ff, kFillModeSolid);
}

void Enemy::GetPosition(Transform* _position)
{
	*_position = position;
}

