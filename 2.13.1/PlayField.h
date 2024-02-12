#pragma once
#include "Enemy.h"
#include "Player.h"
#include <memory>
#include <vector>
#include "Define/Defines.h"

constexpr int ENEMY_MAX = 2;

class PlayField
{
private:
	std::vector<Transform>* position_bullet;

	std::unique_ptr<Enemy>	enemies[ENEMY_MAX];
	std::unique_ptr<Player>	player;

	Transform	position_enemy[ENEMY_MAX];
	Transform	playerPosition;

public:
	PlayField();
	~PlayField();
	void	Update();
	void	Draw();

};
