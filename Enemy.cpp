#include "Enemy.h"

Enemy::~Enemy()
{
}

void Enemy::Initialize()
{
}

void Enemy::Update()
{
	// 敵の速さ
	posX =posX + speed;

	// 右端で反射
	if (posX >= 1260) {
		speed *= -1;
	}

	// 左端で反射
	if (posX <= 20) {
		speed *= -1;
	}
}

void Enemy::Draw()
{
	Novice::DrawEllipse(
		(int)posX, (int)posY,
		radius, radius,
		0.0f,
		RED,
		kFillModeSolid
	);
}
