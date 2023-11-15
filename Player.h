#pragma once
#include "IScene.h"
#include "PlayerBullet.h"

class Player {
public:
	Player();
	~Player();

	void Initialize();
	void Attack();
	void Update();
	void Draw();
private:

	PlayerBullet* playerBullet = nullptr;

	// プレイヤーの座標と速さ
	float posX = 680.0f;
	float posY = 340.0f;
	int speed = 5;

	int isBulletShot = false;

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

};
