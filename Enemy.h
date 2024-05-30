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

	Vector2 position[10];
	Vector2 speed_;
	Vector2 suraimuspeed;
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
	
	float radius_[7];
	bool flag = true;
	bool flag2 = true;
	bool flag3 = true;
	bool flag4 = true;
	bool flag5 = true;
	bool suraimuflag = true;
	bool suraimuflag2 = true;
	bool suraimuflag3 = true;

	

private:
	

	int enemy = Novice::LoadTexture("./enemy.png");
	int suraimu = Novice::LoadTexture("./suraimu.png");
	int X = 0;

	

};

