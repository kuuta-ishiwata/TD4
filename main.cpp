#include <Novice.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Vector2.h"
#include "Player.h"
#include "Sword.h"
#include "cane.h"
#include "Map.h"
#include  "Input.h"

const char kWindowTitle[] = "ウェポンソルジャー";

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

	Input* input_ = nullptr;
	XINPUT_STATE joyState;
	input_ = Input::GetInstance();


	cane* cane_;
	cane_ = new cane();
	cane_->Initialize();

	Enemy* enemy_;
	enemy_ = new Enemy();
	enemy_->Initialize();

	int view = Novice::LoadTexture("./sky.png");
	int op = Novice::LoadTexture("./opening.png");
	int opword = Novice::LoadTexture("./openingword.png");
	int Gameover = Novice::LoadTexture("./GameOver-.png");
	int clear = Novice::LoadTexture("./clear.png");
	int setumei = Novice::LoadTexture("./setumei.png");

	int scene = 0;

	int maou;

	maou = Novice::LoadAudio("./maou.wav");


	

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

		input_->GetJoystickState(0, joyState);
	

		switch (scene) {
		
		case 0:
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				scene = 1;
			}
			else if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_A)
			{
				scene = 1;
			}

			break;
		
		case 1:
			
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					scene = 2;
				}
				else if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_B)
				{
					scene = 2;
				}

			break;

		case 2:
			if (player->flag == false)
			{
				scene = 3;
			}
			else if (player->goalflag == false)
			{
				scene = 4;
			}
			if (!Novice::IsPlayingAudio(maou))
			{
				Novice::PlayAudio(maou, true, 0.5f);
			}

			player->Update(keys, preKeys);
			break;
		case 3:

			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{

				scene = 0;
				player->OnCollision();

			}
			else if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_B)
			{
				scene = 0;
				player->OnCollision();
			}
		case 4:
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{

				scene = 0;
				player->OnCollision();

			}
			else if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_B)
			{
				scene = 0;
				player->OnCollision();
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
			Novice::DrawSprite(0, 0, setumei, 1, 1, 0.0f, WHITE);

		}
		else if(scene ==2)
		{
			Novice::DrawSprite(0, 0, view, 1, 1, 0.0f, WHITE);
			player->Draw();
		}
		else if(scene == 3)
		{
			Novice::DrawSprite(0, 0, Gameover, 1, 1, 0.0f, WHITE);
		}
		else if(scene == 4)
		{
			Novice::DrawSprite(0, 0, op, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(0, 0, clear, 1, 1, 0.0f, WHITE);
			
		}
		else
		{

			Novice::DrawSprite(0, 0, op, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(0, 0, opword, 1, 1, 0.0f, WHITE);

		}
		
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
