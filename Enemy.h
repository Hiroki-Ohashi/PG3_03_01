#pragma once
#include "IScene.h"
#include "PlayerBullet.h"

class Enemy {
public:
	~Enemy();

	void Initialize();
	void Update();
	void Draw();
private:
	// 敵の座標と速さ
	float posX = 680.0f;
	float posY = 100.0f;
	int speed = 5;
	int radius = 20;
};