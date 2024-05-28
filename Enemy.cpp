#include "Enemy.h"
#include <fstream>
#include <cassert>


void Enemy::Initialize()
{

	position[0].x = 800;
	position[0].y = 720;
	position[1].x = 1700;
	position[1].y = 720;
	position[2].x = 1250;
	position[2].y = 720;
	position[3].x = 1900;
	position[3].y = 720;
	position[4].x = 2200;
	position[4].y = 720;
	position[5].x = 2400;
	position[5].y = 720;


	this->radius_[0] = 32.0f;
	this->radius_[1] = 32.0f;
	this->radius_[2] = 32.0f;
	this->radius_[3] = 32.0f;
	this->radius_[4] = 32.0f;
	this->radius_[5] = 32.0f;
	

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
	
	position[3].x += 0.4f;

	position[4].x += 0.4f;

	

	
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

}




