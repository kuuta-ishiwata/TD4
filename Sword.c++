﻿#pragma once
#include <Novice.h>
#include "Vector2.h"
#include "Player.h"
class Sword
{

public:

	Vector2 position[4];
	
	Vector2 speed_;
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
	

	

	Vector2 GetspeedX() { return speed_; }
	float Getradius() { return radius_; }
	int GetIsShot() { return isShot_; }

	void SetSpeed(Vector2 speed) { this->speed_ = speed; }
	void Setradius(float radius) { this->radius_ = radius; }
	void SetIsShot(int isShot) { this->isShot_ = isShot; }


	bool swordflag = false;
	bool swordflag2 = false;
	bool swordflag3 = false;

	//1
	bool equipment = false;
	bool swordshot = false;
	//2
	bool equipment2 = false;
	bool swordshot2 = false;

	//3
	bool equipment3= false;
	bool swordshot3 = false;

	int ScrolX = 0;

	int Ken = Novice::LoadTexture("./ken.png");
private:


	Player* player;
	player = new Player();


};

