#pragma once

#include <Novice.h>
#include "Vector2.h"
#include "Enemy.h"

class cane
{
public:

	Vector2 position[4];
	Vector2 speed_;
	float radius_[4];
	int isShot_;


	void Initialize();

	void Update();

	void Oncollision();
	void Oncollision2();
	void Oncollision3();

	void Draw(int x);



public:

	Enemy enemy_;

	float GetcenterX() { return position[0].x; }
	float GetcenterY() { return position[0].y; }
	void SetposX(float posX) { this->position[0].x = posX; }
	void SetposY(float posY) { this->position[0].y = posY; }

	Vector2 GetspeedX() { return speed_; }
	float Getradius() { return radius_[0]; }
	int GetIsShot() { return isShot_; }

	void SetSpeed(Vector2 speed) { this->speed_ = speed; }
	void Setradius(float radius) { this->radius_[0] = radius; }
	void SetIsShot(int isShot) { this->isShot_ = isShot; }


	bool caneflag = false;
	bool caneflag2 = false;
	bool caneflag3 = false;
	//スクロール
	int scrolX = 0;

	int tue = Novice::LoadTexture("./tue.png");

	//1
	bool equipment = false;
	bool canedshot = false;
	//2
	bool equipment2 = false;
	bool caneshot2 = false;

	//3
	bool equipment3 = false;
	bool caneshot3 = false;


};

