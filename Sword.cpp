﻿#include "Sword.h"

void Sword::Initialize()
{

	position[0].x = 300;
	position[0].y = 500;
	position[1].x = 1230;
	position[1].y = 600;
	position[2].x = 2000;
	position[2].y = 600;
	speed_= { 0,0 };
	this->radius_ = 32.0f;
	this->isShot_ = false;

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

		Novice::DrawSprite(position[0].x-x , position[0].y,Ken,1,1 , 0.0f,WHITE);

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
