#include "Player.h"
#include <Novice.h>
#include "KeyManager.h"

using KM = KeyManager;

Player::Player(Transform _position)
{
	position = _position;
	radius = 20;
	moveSpeed = 5;
}

void Player::Update()
{
	if (KM::GetKeys(DIK_W)) position.y -= moveSpeed;
	if (KM::GetKeys(DIK_S)) position.y += moveSpeed;
	if (KM::GetKeys(DIK_A)) position.x -= moveSpeed;
	if (KM::GetKeys(DIK_D)) position.x += moveSpeed;
	if (KM::GetKeys(DIK_SPACE) && !KM::GetPreKeys(DIK_SPACE))
 		this->Shot();
	int cnt = 0;
	position_bullet.clear();
	for (auto& obj : bullets)
	{
		obj->Update();
		if (obj->IsAbleDelete()) {
			obj.reset();
			bullets.erase(bullets.begin() + cnt);
			break;
		}
		position_bullet.push_back(Transform(0, 0));
		obj->GetPosition(position_bullet[cnt]);
		
		cnt++;
	}
}

void Player::Draw()
{
	for (auto& obj : bullets)
	{
		obj->Draw();
	}
	Novice::DrawEllipse(position.x, position.y, radius, radius, 0.0f, 0x11ff11ff, kFillModeSolid);
}

void Player::GetPosition(Transform& _position)
{
	_position = position;
}

void Player::killBullet(int _index)
{
	bullets.erase(bullets.begin() + _index);
}

void Player::Shot()
{
	bullets.push_back(std::make_unique<Bullet>(position));
}
