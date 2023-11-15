#pragma once
#include "Novice.h"

class PlayerBullet {
public:

	void Initialize();
	void Update();
	void Draw();

	float GetBulletPosY() { return posY; }
	void SetBulletPosX(float posX_) { posX_ = posX; }
	void SetBulletPosY(float posY_) { posY_ = posY; }

private:
	// 弾の座標と速さ
	float posX = 0.0f;
	float posY = 0.0f;
	int radius = 10;
	int speed = 8;
};
