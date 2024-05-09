#include "Spear.h"

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
	
	if (position[0].x <= enemy_.position[0].x + enemy_.radius_ &&
		enemy_.position[0].x <= position[0].x + radius_ &&
		position[0].y <= enemy_.position[0].y + enemy_.radius_ &&
		enemy_.position[0].y <= position[0].x + radius_)
	{
		enemy_.flag = false;
		
	}

	if (position[0].x <= enemy_.position[1].x + enemy_.radius_ &&
		enemy_.position[1].x <= position[0].x + radius_ &&
		position[0].y <= enemy_.position[1].y + enemy_.radius_ &&
		enemy_.position[1].y <= position[0].x + radius_)
	{
		enemy_.flag2 = false;

	}

	if (position[0].x <= enemy_.position[2].x + enemy_.radius_ &&
		enemy_.position[2].x <= position[0].x + radius_ &&
		position[0].y <= enemy_.position[2].y + enemy_.radius_ &&
		enemy_.position[2].y <= position[0].x + radius_)
	{
		enemy_.flag3 = false;

	}

	

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
