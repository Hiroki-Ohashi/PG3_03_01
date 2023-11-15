#include "PlayerBullet.h"

void PlayerBullet::Initialize()
{

}

void PlayerBullet::Update()
{
	speed = 8;
	posY -= speed;
}

void PlayerBullet::Draw()
{
	Novice::DrawTriangle(
		(int)posX, (int)posY - radius,
		(int)posX - radius, (int)posY + radius,
		(int)posX + radius, (int)posY + radius,
		WHITE,
		kFillModeSolid
	);
}
