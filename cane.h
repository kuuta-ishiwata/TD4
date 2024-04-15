#pragma once

#include <Novice.h>
#include "Vector2.h"


class cane
{
public:

	Vector2 position[4];
	float speed_;
	float radius_;
	int isShot_;


	void Initialize();

	void Update();

	void Oncollision();
	void Oncollision2();
	void Oncollision3();

	void Draw(int x);



public:



	float GetcenterX() { return position[0].x; }
	float GetcenterY() { return position[0].y; }
	void SetposX(float posX) { this->position[0].x = posX; }
	void SetposY(float posY) { this->position[0].y = posY; }
	float GetspeedX() { return speed_; }
	float Getradius() { return radius_; }
	int GetIsShot() { return isShot_; }

	void SetSpeed(float speed) { this->speed_ = speed; }
	void Setradius(float radius) { this->radius_ = radius; }
	void SetIsShot(int isShot) { this->isShot_ = isShot; }


	bool caneflag = false;
	bool caneflag2 = false;
	bool caneflag3 = false;
	//スクロール
	int scrolX = 0;

	int tue = Novice::LoadTexture("./tue.png");


};

