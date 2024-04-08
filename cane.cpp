#include "cane.h"

void cane::Initialize()
{

	position[0].x = 450;
	position[0].y = 500;
	position[1].x = 700;
	position[1].y = 500;
	position[2].x = 800;
	position[2].y = 500;
	this->speed_ = 4.0f;
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

void cane::Draw()
{

	if (caneflag == false)
	{
		Novice::DrawSprite(position[0].x, position[0].y, tue, 1, 1, 0.0f, WHITE);


	}


	if (caneflag2 == false)
	{

		Novice::DrawSprite(position[0].x, position[0].y, tue, 1, 1, 0.0f, WHITE);

	}
	if (caneflag3 == false)
	{

		Novice::DrawSprite(position[0].x, position[0].y, tue, 1, 1, 0.0f, WHITE);

	}


}
