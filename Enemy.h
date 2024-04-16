#pragma once
#include <Novice.h>
#include "Vector2.h"
#include "list"
#include <sstream>

class Player;

class Enemy
{
public:


	void Initialize();

	void Update();

	void Draw();

	void SetPlayer(Player* player) { player_ = player; }

	std::list<Enemy*> enemies_;
	//敵発生コマンド
	std::stringstream enemyPopCommands;
	void LoadEnemyPopData();



	/// <summary>
	/// 敵発生コマンドの更新
	/// </summary>
	void UpdateEnemyPopCommands();
	void EnemySpawn(Vector2& Position);
	void EnemyObjUpdate();
	void EnemyObjDraw();

private:

	Player* player_ = nullptr;
	Vector2 position;
	float radius = 32;
	Vector2 enemyPosition;


};

