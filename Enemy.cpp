#include "Enemy.h"
#include <fstream>
#include <cassert>


void Enemy::Initialize()
{

	position[0].x = 800;
	position[0].y = 740;
	position[1].x = 1700;
	position[1].y = 740;
	position[2].x = 1250;
	position[2].y = 740;
	this->radius_[0] = 32.0f;
	this->radius_[1] = 32.0f;
	this->radius_[2] = 32.0f;
	
}

void Enemy::Update()
{

	if (flag == true)
	{
		position[0].x -= 1;
	}
	if (flag2 == true)
	{
		position[1].x -= 1;
	}
	if (flag3 == true)
	{
		position[2].x -= 1;
	}
	


}

void Enemy::Draw(int X)
{

	if (flag == true)
	{

		Novice::DrawBox(position[0].x - X, position[0].y, radius_[0], radius_[0], 0.0f, RED, kFillModeSolid);
	}
	if (flag2 == true)
	{
		Novice::DrawBox(position[1].x - X, position[1].y, radius_[1], radius_[1], 0.0f, RED, kFillModeSolid);
	}
	if (flag3 == true)
	{
		Novice::DrawBox(position[2].x - X, position[2].y, radius_[2], radius_[2], 0.0f, RED, kFillModeSolid);
	}
	
}




