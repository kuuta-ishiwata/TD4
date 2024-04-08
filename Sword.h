#pragma once
#include <Novice.h>
#include "Vector2.h"

class Sword
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
	void Draw();
	void Shot();
	


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


	
	bool swordflag2 = false;
	bool swordflag3 = false;
	int ScrolX = 0;

	//1
	bool equipment = false;
	bool swordflag = false;
	bool swordshot = false;

	int Ken = Novice::LoadTexture("./ken.png");

};

