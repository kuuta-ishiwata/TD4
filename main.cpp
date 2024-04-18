#include <Novice.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Vector2.h"
#include "Player.h"
#include "Sword.h"
#include "cane.h"
#include "Map.h"
#include "Enemy.h"
const char kWindowTitle[] = "LE2C_02_イシワタクウタ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 800);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	Player* player;
	player = new Player();

	player->Initialize();

	Sword* sword;
	sword = new Sword();
	sword->Initialize();


	cane* cane_;
	cane_ = new cane();
	cane_->Initialize();

	
	Enemy* enemy_;
	enemy_ = new Enemy();
	enemy_->Initialize(enemy_->enemyPosition);
	

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);



		///
		/// ↓更新処理ここから
		///

		player->Update(keys, preKeys);
		enemy_->Update();
		sword->Update();
		cane_->Update();
		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///


		player->Draw();
		enemy_->Draw(player->scrolX);
		

		//cane_->Draw();
		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
