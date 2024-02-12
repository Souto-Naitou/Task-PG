#pragma once

#include <memory>
#include <vector>
#include "Define/Defines.h"
#include "Bullet.h"

class Player
{
public:
	Player(Transform _position);

	void	Update();
	void	Draw();
	void	GetPosition(Transform& _position);
	std::vector<Transform>* GetBulletPosition() { return &position_bullet; };
	void	killBullet(int _index);

private:
	std::vector<std::unique_ptr<Bullet>> bullets;
	std::vector<Transform> position_bullet;
	Transform	position;
	int			radius;
	int			moveSpeed;
	void	Shot();
};