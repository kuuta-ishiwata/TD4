#include <Novice.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Vector2.h"
#include "Player.h"
#include "Sword.h"
#include "cane.h"
#include "Map.h"
#include "Input.h"

const char kWindowTitle[] = "LE2C_02_イシワタクウタ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 800);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	Input* input = nullptr;
	XINPUT_STATE joyState;

	input = Input::GetInstance();

	Player* player;
	player = new Player();

	player->Initialize();

	Sword* sword;
	sword = new Sword();
	sword->Initialize();


	cane* cane_;
	cane_ = new cane();
	cane_->Initialize();

	int view = Novice::LoadTexture("./sky.png");
	int op = Novice::LoadTexture("./opening.png");
	int opword = Novice::LoadTexture("./openingword.png");
	int Gameover = Novice::LoadTexture("./GameOver-.png");
	int scene = 0;

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

		input->GetJoystickState(0, joyState);
	
		switch (scene) {
		
		case 0:
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				scene = 1;
			}
			else if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_A) {
				scene = 1;
			}
			
			break;
		
		case 1:
			if (keys[DIK_M] && preKeys[DIK_M] == 0)
			{

				scene = 0;

				
				

			}
			player->Update(keys, preKeys);

			sword->Update();
			cane_->Update();
		
			break;

		case 2:
			if (player->flag == false)
			{
				scene = 2;
			}
		
			break;
		}

		
		
		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///
		
		if (scene == 1)
		{
			Novice::DrawSprite(0, 0, view, 1, 1, 0.0f, WHITE);
			player->Draw();

		}
		else if(scene ==2)
		{
			Novice::DrawSprite(0, 0, Gameover, 1, 1, 0.0f, WHITE);
		}
		else
		{
			
			Novice::DrawSprite(0, 0, op, 1, 1, 0.0f, WHITE);
			Novice::DrawSprite(0, 0, opword, 1, 1, 0.0f, WHITE);

			
		}
	
		//
		//enemy_->Draw(player->scrolX);
		

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
