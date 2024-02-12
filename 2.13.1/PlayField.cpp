#include "PlayField.h"
#include "Bullet.h"
#include <math.h>
#include "KeyManager.h"
#include <Novice.h>


PlayField::PlayField()
{
	enemies[0]	= std::make_unique<Enemy>(100, 360);
	enemies[1]	= std::make_unique<Enemy>(500, 500);
	player		= std::make_unique<Player>(Transform(640,560));
	
	for (int i = 0; i < ENEMY_MAX; i++)
	{
		position_enemy[i] = 0;
	}
}


void PlayField::Update()
{
	using KM = KeyManager;
	if (KM::GetKeys(DIK_R) && !KM::GetPreKeys(DIK_R))
	{
		Enemy::isDead = 0;
	}

	for (int i = 0; i < ENEMY_MAX; i++)
	{
		enemies[i]->Update();
		enemies[i]->GetPosition(&position_enemy[i]);
	}
	player->Update();
	position_bullet = player->GetBulletPosition();

	// 当たり判定
	for (int i = 0; i < position_bullet->size(); i++)
	{
		for (int j = 0; j < ENEMY_MAX; j++)
		{
			Transform dist = {
				position_enemy[j].x - (*position_bullet)[i].x, position_enemy[j].y - (*position_bullet)[i].y
			};
			dist.x *= dist.x;
			dist.y *= dist.y;
			int	e2b = dist.x + dist.y;
			int	radiusDistance = 30 * 30 + 5 * 5;
			if (e2b < radiusDistance)
			{
				player->killBullet(i);
				Enemy::isDead = 1;
				break;
			}
		}
	}
}

void PlayField::Draw()
{
	for (auto& obj : enemies)
	{
		obj->Draw();
	}
	player->Draw();
}

PlayField::~PlayField()
{
}
