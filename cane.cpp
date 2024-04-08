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
		Novice::DrawBox(position[0].x-scrolX, position[0].y, radius_, radius_, 0.0f, BLACK, kFillModeSolid);

	}


	if (caneflag2 == false)
	{

		Novice::DrawBox(position[1].x-scrolX, position[1].y, radius_, radius_, 0.0f, BLACK, kFillModeSolid);

	}
	if (caneflag3 == false)
	{

		Novice::DrawBox(position[2].x-scrolX, position[2].y, radius_, radius_, 0.0f, BLACK, kFillModeSolid);

	}


}
