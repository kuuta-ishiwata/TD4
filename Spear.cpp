﻿#include "Spear.h"

void Spear::Initialize()
{

	position[0].x = 800;
	position[0].y = 500;
	position[1].x = 1000;
	position[1].y = 500;
	this->speed_ = 4.0f;
	this->radius_ = 32.0f;
	this->isShot_ = false;


}

void Spear::Update()
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
	*/

}

void Spear::Oncollision()
{

	spearflag = true;

}

void Spear::Draw(int x)
{
	if (spearflag == false)
	{
		Novice::DrawSprite(position[0].x -x, position[0].y,yari , 1, 1, 0.0f, WHITE);
	}

	if (spearflag2 == false)
	{
		Novice::DrawSprite(position[1].x -x ,position[1].y, yari, 1, 1, 0.0f, WHITE);
	}



}
