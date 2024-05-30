#include "Sword.h"

void Sword::Initialize()
{

	position[0].x = 300;
	position[0].y = 500;
	position[1].x = 500;
	position[1].y = 500;
	position[2].x = 600;
	position[2].y = 500;
	speed_= { 0,0 };
	this->radius_[0] = 32.0f;
	this->radius_[1] = 32.0f;
	this->radius_[2] = 32.0f;
	this->isShot_ = false;

	swordflag = false;
	swordflag2 = false;
	swordflag3 = false;

	equipment = false;
	swordshot = false;
	equipment2 = false;
	swordshot2 = false;
	equipment3 = false;
	swordshot3 = false;

}

void Sword::Update()
{

	
	


}

void Sword::Oncollision()
{

	swordflag = true;

}

void Sword::Oncollision2()
{

	swordflag2 = true;

}

void Sword::Shot()
{


}


void Sword::Draw(int x)
{


	if (swordflag == false)
	{

		Novice::DrawSprite(position[0].x-x , position[0].y,Ken,1, 1, 0.0f, WHITE);
	}

	if (swordflag2 == false)
	{

		Novice::DrawSprite(position[1].x-x, position[1].y, Ken, 1, 1, 0.0f, WHITE);
	}

	if (swordflag3 == false)
	{
		Novice::DrawSprite(position[2].x-x, position[2].y, Ken, 1, 1, 0.0f, WHITE);
	}


}
