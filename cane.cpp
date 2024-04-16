#include "cane.h"

void cane::Initialize()
{

	position[0].x = 650;
	position[0].y = 500;
	position[1].x = 1700;
	position[1].y = 500;
	position[2].x = 1000;
	position[2].y = 500;
	speed_ = { 0,0 };
	this->radius_ = 32.0f;
	this->isShot_ = false;

}

void cane::Update()
{


}

void cane::Oncollision()
{
	caneflag = true;

}

void cane::Oncollision2()
{
	caneflag2 = true;

}

void cane::Oncollision3()
{

	caneflag3 = true;

}

void cane::Draw(int x)
{

	if (caneflag == false)
	{
		Novice::DrawSprite(position[0].x-x, position[0].y, tue, 1, 1, 0.0f, WHITE);


	}


	if (caneflag2 == false)
	{

		Novice::DrawSprite(position[1].x-x, position[1].y, tue, 1, 1, 0.0f, WHITE);

	}
	if (caneflag3 == false)
	{

		Novice::DrawSprite(position[2].x-x, position[2].y, tue, 1, 1, 0.0f, WHITE);

	}


}
