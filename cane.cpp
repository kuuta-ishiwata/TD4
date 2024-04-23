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
	/*
	if (position[0].x <= enemy_.enemyPosition.x + enemy_.radius_ &&
		enemy_.enemyPosition.x <= position[0].x + radius_ &&
		position[0].y <= enemy_.enemyPosition.y + enemy_.radius_ &&
		enemy_.enemyPosition.y <= position[0].x + radius_)
	{
		enemy_.flag = false;
		equipment = false;
	}

	if (position[1].x <= enemy_.enemyPosition.x + enemy_.radius_ &&
		enemy_.enemyPosition.x <= position[1].x + radius_ &&
		position[1].y <= enemy_.enemyPosition.y + enemy_.radius_ &&
		enemy_.enemyPosition.y <= position[1].x + radius_)
	{
		enemy_.flag = false;
		equipment = false;
	}
	if (position[1].x <= enemy_.enemyPosition.x + enemy_.radius_ &&
		enemy_.enemyPosition.x <= position[1].x + radius_ &&
		position[1].y <= enemy_.enemyPosition.y + enemy_.radius_ &&
		enemy_.enemyPosition.y <= position[1].x + radius_)
	{
		enemy_.flag = false;
		equipment2 = false;
	}
	if (position[2].x <= enemy_.enemyPosition.x + enemy_.radius_ &&
		enemy_.enemyPosition.x <= position[2].x + radius_ &&
		position[2].y <= enemy_.enemyPosition.y + enemy_.radius_ &&
		enemy_.enemyPosition.y <= position[2].x + radius_)
	{
		enemy_.flag = false;
		equipment3 = false;
	}
	*/

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
