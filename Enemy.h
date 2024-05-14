#pragma once
#include <Novice.h>
#include "Vector2.h"
#include "list"
#include <sstream>
#include "Sword.h"
//#include "Player.h"

class Enemy
{

public:

	Vector2 position[4];
	Vector2 speed_;
	void Initialize();

	void Update();

	void Draw(int X);
	
   
	
	float GetcenterX() { return position[0].x; }
	float GetcenterY() { return position[0].y; }
	void SetposX(float posX) { this->position[0].x = posX; }
	void SetposY(float posY) { this->position[0].y = posY; }




	Vector2 GetspeedX() { return speed_; }
	float Getradius() { return radius_[0]; }
	
	void SetSpeed(Vector2 speed) { this->speed_ = speed; }
	void Setradius(float radius) { this->radius_[0] = radius; }
	
	float radius_[4];
	bool flag = true;
	bool flag2 = true;
	bool flag3 = true;

private:
	

	

	int X = 0;

	

};

