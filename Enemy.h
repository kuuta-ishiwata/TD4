#pragma once
#include <Novice.h>
#include "Vector2.h"
#include "list"
#include <sstream>


class Enemy
{
public:


	void Initialize(Vector2 position);

	void Update();

	void Draw(int X);
	
   // void SetPlayer(Player* player) { player_ = player; }

	void ChecAllCollision();
	float GetcenterX() { return enemyPosition.x; }
	float GetcenterY() { return enemyPosition.y; }
	float GetRadius() { return radius_; }

	void SerRadius(float radius) { this->radius_ = radius; }
	void SetposX(float posX) { this->enemyPosition.x = posX; }
	void SetposY(float posY) { this->enemyPosition.y = posY; }

	

	Vector2 position;

	Vector2 enemyPosition;
	float radius_ = 32;
	bool flag = true;
private:


	Enemy* enemy_;
	std::list<Enemy*> enemies_;
	//敵発生コマンド
	std::stringstream enemyPopCommands;
	void LoadEnemyPopData();



	/// <summary>
	/// 敵発生コマンドの更新f
	/// </summary>
	void UpdateEnemyPopCommands();
	void EnemySpawn(Vector2& Positon);
	void EnemyObjUpdate();
	void EnemyObjDraw(int X);
	
	//Player* player_ = nullptr;
	int X = 0;

	

};

