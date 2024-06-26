﻿#include "Enemy.h"
#include <fstream>
#include <cassert>


void Enemy::Initialize()
{
	//
	position[0].x = 800;
	position[0].y = 550;
	position[1].x = 1700;
	position[1].y = 710;
	position[2].x = 1250;
	position[2].y = 710;
	position[3].x = 4100;
	position[3].y = 465;
	//スライム
	position[3].x = 1900;
	position[3].y = 720;
	position[4].x = 2200;
	position[4].y = 720;
	position[5].x = 2400;
	position[5].y = 720;
	position[6].x = 4000;
	position[6].y = 480;
	////
	position[7].x = 4200;
	position[7].y = 410;


	this->radius_[0] = 64.0f;
	this->radius_[1] = 64.0f;
	this->radius_[2] = 64.0f;
	this->radius_[3] = 32.0f;
	this->radius_[4] = 32.0f;
	this->radius_[5] = 32.0f;
	this->radius_[6] = 32.0f;
	this->radius_[7] = 32.0f;
	speed_ = { 0.2,0.2 };
	suraimuspeed = { 2,2 };
	flag = true;
	flag2 = true;
	flag3 = true;

	suraimuflag = true;
	suraimuflag2 = true;
	suraimuflag3 = true;
	suraimuflag4 = true;

}

void Enemy::Update()
{

	if (flag == true)
	{
		position[0].x -= speed_.x;

	}

	if (flag2 == true)
	{
		position[1].x -= speed_.x;
	}
	if (flag3 == true)
	{
		position[2].x -= speed_.x;
	}
	
	if (suraimuflag == true)
	{
		position[3].x += suraimuspeed.x;
	}

	if (suraimuflag2 == true)
	{

		position[4].x += suraimuspeed.x;

	}
	if (suraimuflag3 == true)
	{

		position[5].x += suraimuspeed.x;

	}



	
}

void Enemy::Draw(int X)
{

	if (flag == true)
	{

		Novice::DrawSprite(position[0].x - X, position[0].y , enemy, 1, 1, 0.0f, WHITE);

	}
	if (flag2 == true)
	{
		Novice::DrawSprite(position[1].x - X, position[1].y , enemy, 1, 1, 0.0f, WHITE);
	}
	if (flag3 == true)
	{
		Novice::DrawSprite(position[2].x - X, position[2].y, enemy, 1, 1, 0.0f, WHITE);
	}
	if (flag6 == true)
	{
		Novice::DrawSprite(position[7].x - X, position[7].y, enemy, 1, 1, 0.0f, WHITE);
	}

	if (suraimuflag == true)
	{
		Novice::DrawSprite(position[3].x - X, position[3].y, suraimu, 1, 1, 0.0f, WHITE);
	}
	if (suraimuflag2 == true)
	{
		Novice::DrawSprite(position[4].x - X, position[4].y, suraimu, 1, 1, 0.0f, WHITE);
	}
	if (suraimuflag3 == true)
	{
		Novice::DrawSprite(position[5].x - X, position[5].y, suraimu, 1, 1, 0.0f, WHITE);
	}
	if (suraimuflag4 == true)
	{
		Novice::DrawSprite(position[6].x - X, position[6].y, suraimu, 1, 1, 0.0f, WHITE);
	}
}




