#include "Spear.h"

void Spear::Initialize()
{

	position[0].x = 350;
	position[0].y = 500;
	position[1].x = 450;
	position[1].y = 500;
	this->speed_ = 4.0f;
	this->radius_ = 32.0f;
	this->isShot_ = false;


}

void Spear::Update()
{
	
	

}

void Spear::Oncollision()
{

	spearflag = true;


}

void Spear::Draw()
{
	if (spearflag == false)
	{
		Novice::DrawSprite(position[0].x , position[0].y,yari , 1, 1, 0.0f, WHITE);

	}
	if (spearflag2 == false)
	{
		Novice::DrawSprite(position[0].x, position[0].y, yari, 1, 1, 0.0f, WHITE);


	}



}
