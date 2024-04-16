#include "Enemy.h"
#include <fstream>
#include <cassert>
void Enemy::Initialize()
{
	
	LoadEnemyPopData();
}

void Enemy::Update()
{

	UpdateEnemyPopCommands();

}

void Enemy::Draw()
{

	Novice::DrawBox(enemyPosition.x,enemyPosition.y,radius,radius,0.0f,RED,kFillModeSolid);
	

	EnemyObjDraw();


}



void Enemy::EnemySpawn(Vector2& Position)
{

	Enemy* enemy = new Enemy;

	enemy->Initialize();

	enemy->SetPlayer(player_);

	enemies_.push_back(enemy);

}

void Enemy::EnemyObjUpdate()
{



}

void Enemy::EnemyObjDraw()
{

	for (Enemy* enemy : enemies_) 
	{
		enemy->Draw();

	}

}


void Enemy::LoadEnemyPopData()
{
	// ファイルを開く
	std::ifstream file{};
	file.open("NoviceResources/enemyPop.csv");
	assert(file.is_open());

	// ファイルの内容を文字列ストリームにコピー
	enemyPopCommands << file.rdbuf();

	// ファイルを閉じる
	file.close();

}

void Enemy::UpdateEnemyPopCommands()
{
	// 1行列分の文字列を入れる変数
	std::string line;

	// コマンド実行ループ
	while (getline(enemyPopCommands, line)) {

		// 1行分の文字列をストリームに変換して解析しやすくする
		std::istringstream line_stream(line);

		std::string word;
		// 区切りで行の先頭文字列を取得
		getline(line_stream, word, ',');


		if (word.find("//") == 0) {
			continue;
		}

		if (word.find("POP") == 0) {
			// x座標
			getline(line_stream, word, ',');
			float x = (float)std::atof(word.c_str());

			// y座標
			getline(line_stream, word, ',');
			float y = (float)std::atof(word.c_str());

			
			// 敵を発生させる

			enemyPosition = { x, y };


			EnemySpawn(enemyPosition);


		}

	}

}