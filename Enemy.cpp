#include "Enemy.h"
#include <fstream>
#include <cassert>


void Enemy::Initialize(Vector2& position)
{

	enemyPosition.x = position.x;
	enemyPosition.y = position.y;
	

	
	LoadEnemyPopData();

}

void Enemy::Update()
{

	UpdateEnemyPopCommands();
	
	//enemyPosition.x += 2;
	//ChecAllCollision();

}

void Enemy::Draw(int X)
{

	if (flag == true)
	{

		Novice::DrawBox(enemyPosition.x - X, enemyPosition.y, radius_, radius_, 0.0f, RED, kFillModeSolid);
		EnemyObjDraw(X);

	}
	
}

void Enemy::ChecAllCollision()
{
	flag = false;

}



void Enemy::EnemySpawn(Vector2& Positon)
{

	Enemy* enemy = new Enemy;

	enemy->Initialize(enemyPosition);

	//enemy->SetPlayer();


	enemies_.push_back(enemy);


}

void Enemy::EnemyObjUpdate()
{

	for (Enemy* enemy : enemies_)
	{

		enemy->Update();
		
	}

}

void Enemy::EnemyObjDraw(int X)
{

	for (Enemy* enemy : enemies_) 
	{

		enemy->Draw(X);

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

			enemyPosition = (Vector2(x,y));

			EnemySpawn(enemyPosition);

		}

	}

}