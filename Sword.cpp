#include "Sword.h"

void Sword::Initialize()
{

	
	position[0].x = 300;
	position[0].y = 500;
	position[1].x = 300;
	position[1].y = 600;
	position[2].x = 400;
	position[2].y = 600;
	this->speed_ = 4.0f;
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

	if (equipment == true)
	{
		position[0].x += speed_;
	}

}


void Sword::Draw()
{
	if (swordflag == false)
	{
		Novice::DrawSprite(position[0].x - ScrolX, position[0].y,Ken,1,1 , 0.0f,WHITE);

	}


	if (swordflag2 == false)
	{

		Novice::DrawSprite(position[1].x - ScrolX, position[1].y, Ken, 1, 1, 0.0f, WHITE);

	}

	if (swordflag3 == false)
	{
		Novice::DrawSprite(position[2].x - ScrolX, position[2].y, Ken, 1, 1, 0.0f, WHITE);
	}


}
