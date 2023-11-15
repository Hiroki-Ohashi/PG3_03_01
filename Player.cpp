#include "Player.h"

Player::~Player()
{
	delete playerBullet;
}

void Player::Initialize()
{
	playerBullet = new PlayerBullet;
}

void Player::Attack()
{
	
	playerBullet->SetBulletPosX(posX);
	playerBullet->SetBulletPosX(posY);
	isBulletShot = true;
	

	// 弾道
	if ((bool)isBulletShot == true) {
		if (playerBullet->GetBulletPosY() <= 0) {
			isBulletShot = false;
		}
		playerBullet->Update();
	}

	// 弾が画面外に行くと初期化
	if ((int)playerBullet->GetBulletPosY() <= 0) {
		isBulletShot = false;
	}
}

void Player::Update()
{

	// Dキーを押すと右へ移動し、画面端で静止
	if (keys[DIK_D]) {
		if ((int)posX >= 1260) {
			speed = 0;
		}
		posX += speed;
	}

	// Aキーを押すと左へ移動し、画面端で静止
	if (keys[DIK_A]) {
		if ((int)posX <= 20) {
			speed = 0;
		}
		posX -= speed;
	}

	// Wキーを押すと上へ移動し、画面端で静止
	if (keys[DIK_W]) {
		if ((int)posY <= 20) {
			speed = 0;
		}
		posY -= speed;
	}

	// Sキーを押すと下へ移動し、画面端で静止
	if (keys[DIK_S]) {
		if ((int)posY >= 700) {
			speed = 0;
		}
		posY += speed;
	}

	// スペースキーで弾を発射
	if ((bool)isBulletShot == false) {
		if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0) {
			Attack();
		}
	}
}

void Player::Draw()
{
	Novice::DrawEllipse(
		(int)posX, (int)posY,
		20, 20,
		0.0f,
		WHITE,
		kFillModeSolid
	);

	if ((bool)isBulletShot == true) {
		playerBullet->Draw();
	}
}
