#include "Player.h"
#define _USE_MATH_DEFINES
#include <memory>
Player::~Player()
{
	

}

void Player::Initialize()
{

	player =
	{
		{64,500},
		{0,0},
		16
	};

	goalposition = {4300,50 };
	goalradius = 170;
	sword.Initialize();
	cane_.Initialize();
	spear_.Initialize();

	enemy_.Initialize();
	
	
}

void Player::Update(char* keys, char* prekeys)
{

	XINPUT_STATE joyState;
	sword.Update();
	cane_.Update();
	spear_.Update();
	enemy_.Update();
	
	//右に動く
	if (keys[DIK_A])
	{
		player.velocity.X = -5;
		 if (sword.equipment == true&&sword.swordshot ==false)
		 {
		 	sword.speed_.x = -5;
		 }

		 if (sword.equipment2 == true&&sword.swordshot2 == false)
		 {
			 sword.speed_.x = -5;
		 }

		 if (sword.equipment3 == true&&sword.swordshot3 == false)
		 {
			 sword.speed_.x = -5;
		 }

		 if (cane_.equipment == true&&cane_.canedshot == false)
		 {
			 cane_.speed_.x = -5;
		 }

		 if (cane_.equipment2 == true && cane_.caneshot2 == false)
		 {
			 cane_.speed_.x= -5;
		 }

		 if (cane_.equipment3 == true && cane_.caneshot3 == false)
		 {
			 cane_.speed_.x = -5;
		 }

		if (player.position.X >= 1500 && player.position.X <= 4500)
		{

			scrolX += player.velocity.X;

		}
	}
	

	if (keys[DIK_A] == 0 && prekeys[DIK_A])
	{
		player.velocity.X = 0;
		if (sword.equipment == true&&sword.swordshot ==false)
		{
			sword.speed_.x  = 0;
		}
		if (sword.equipment2 == true && sword.swordshot2 == false)
		{
			sword.speed_.x = 0;
		}
		if (sword.equipment3 == true && sword.swordshot3 == false)
		{
			sword.speed_.x = 0;
		}


		if (cane_.equipment == true&& cane_.canedshot == false)
		{
			cane_.speed_.x = -5;
		}

		if (cane_.equipment2 == true&&cane_.caneshot2 == false)
		{
			cane_.speed_.x = -5;
		}

		if (cane_.equipment3 == true && cane_.caneshot3 == false)
		{
			cane_.speed_.x = -5;
		}

		if (player.position.X >= 1500 && player.position.X <= 4500)
		{
			scrolX += player.velocity.X;
		}


	}


	//左に動く
	if (keys[DIK_D])
	{
		player.velocity.X = 5;
	    if (sword.equipment == true&& sword.swordshot ==false)
	    {
	    	sword.speed_.x = 5;
	    }
		if (sword.equipment2 == true && sword.swordshot2 == false)
		{
			sword.speed_.x = 5;
		}
		if (sword.equipment3 == true && sword.swordshot3 == false)
		{
			sword.speed_.x = 5;
		}

		if (cane_.equipment == true&& cane_.canedshot == false)
		{
			cane_.speed_.x = -5;
		}

		if (cane_.equipment2 == true&&cane_.caneshot2 == false)
		{
			cane_.speed_.x = -5;
		}

		if (cane_.equipment3 == true && cane_.caneshot3 == false)
		{
			cane_.speed_.x = -5;
		}
		if (player.position.X >= 800 && player.position.X <= 4500)
		{

			scrolX += player.velocity.X;
			
		}
	}

	if (keys[DIK_D] == 0 && prekeys[DIK_D])
	{

		player.velocity.X = 0;
		 if (sword.equipment == true && sword.swordshot == false)
		 {
		 	sword.speed_.x = 0;
		 }
		 if (sword.equipment2 == true && sword.swordshot2 == false)
		 {
			 sword.speed_.x = 0;
		 }
		 if (sword.equipment3 == true && sword.swordshot3 == false)
		 {
			 sword.speed_.x = 0;
		 }

		 if (cane_.equipment == true&&cane_.canedshot == false)
		 {
			 cane_.speed_.x = -5;
		 }

		 if (cane_.equipment2 == true&&cane_.caneshot2 == false)
		 {
			 cane_.speed_.x = -5;
		 }

		 if (cane_.equipment3 == true && cane_.caneshot3 == false)
		 {
			 cane_.speed_.x = -5;
		 }
		if (player.position.X >= 800 && player.position.X <= 4500)
		{

			scrolX += player.velocity.X;

		}
	
		
	}

	if (Input::GetInstance()->GetJoystickState(0, joyState)) {
		if ((float)joyState.Gamepad.sThumbLX < 0) {
			player.velocity.X = -5;
			if (sword.equipment == true && sword.swordshot == false)
			{
				sword.speed_.x = -5;
			}

			if (sword.equipment2 == true && sword.swordshot2 == false)
			{
				sword.speed_.x = -5;
			}

			if (sword.equipment3 == true && sword.swordshot3 == false)
			{
				sword.speed_.x = -5;
			}

			if (cane_.equipment == true && cane_.canedshot == false)
			{
				cane_.speed_.x = -5;
			}

			if (cane_.equipment2 == true && cane_.caneshot2 == false)
			{
				cane_.speed_.x = -5;
			}

			if (cane_.equipment3 == true && cane_.caneshot3 == false)
			{
				cane_.speed_.x = -5;
			}
			if (player.position.X >= 800 && player.position.X <= 4500)
			{

				scrolX += player.velocity.X;

			}
		}
		else if ((float)joyState.Gamepad.sThumbLX > 0) {
			player.velocity.X = 5;
			if (sword.equipment == true && sword.swordshot == false)
			{
				sword.speed_.x = 5;
			}
			if (sword.equipment2 == true && sword.swordshot2 == false)
			{
				sword.speed_.x = 5;
			}
			if (sword.equipment3 == true && sword.swordshot3 == false)
			{
				sword.speed_.x = 5;
			}

			if (cane_.equipment == true && cane_.canedshot == false)
			{
				cane_.speed_.x = -5;
			}

			if (cane_.equipment2 == true && cane_.caneshot2 == false)
			{
				cane_.speed_.x = -5;
			}

			if (cane_.equipment3 == true && cane_.caneshot3 == false)
			{
				cane_.speed_.x = -5;
			}
			if (player.position.X >= 800 && player.position.X <= 4500)
			{

				scrolX += player.velocity.X;

			}
		}
		else {
			player.velocity.X = 0;
			if (sword.equipment == true && sword.swordshot == false)
			{
				sword.speed_.x = 0;
			}
			if (sword.equipment2 == true && sword.swordshot2 == false)
			{
				sword.speed_.x = 0;
			}
			if (sword.equipment3 == true && sword.swordshot3 == false)
			{
				sword.speed_.x = 0;
			}

			if (cane_.equipment == true && cane_.canedshot == false)
			{
				cane_.speed_.x = -5;
			}

			if (cane_.equipment2 == true && cane_.caneshot2 == false)
			{
				cane_.speed_.x = -5;
			}

			if (cane_.equipment3 == true && cane_.caneshot3 == false)
			{
				cane_.speed_.x = -5;
			}
			if (player.position.X >= 800 && player.position.X <= 4500)
			{

				scrolX += player.velocity.X;


			}
		}

		// ジャンプ
		if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_A)
		{
			if (jampFlag == false)
			{

				jampFlag = true;
				player.velocity.Y -= 20;

				if (sword.equipment == true && sword.swordshot == false)
				{
					sword.speed_.y -= 20;
				}

				if (sword.equipment2 == true && sword.swordshot2 == false)
				{
					sword.speed_.y -= 20;
				}

				if (sword.equipment3 == true && sword.swordshot3 == false)
				{
					sword.speed_.y -= 20;
				}

				if (cane_.equipment == true && cane_.canedshot == false)
				{
					cane_.speed_.y -= 20;
				}

				if (cane_.equipment2 == true && cane_.caneshot2 == false)
				{
					cane_.speed_.y -= 20;
				}
				if (cane_.equipment3 == true && cane_.caneshot3 == false)
				{
					cane_.speed_.y -= 20;
				}
			}
		}
	}




	//重力をかける
	player.velocity.Y += gravity;

	


	if (sword.equipment == true&& sword.swordshot == false)
	{
		sword.speed_.y += gravity;

	}
	if (sword.equipment2 == true && sword.swordshot2 == false)
	{
		sword.speed_.y += gravity;

	}

	if (sword.equipment3 == true && sword.swordshot3 == false)
	{
		sword.speed_.y += gravity;

	}

	if (cane_.equipment == true&&cane_.canedshot == false)
	{
		cane_.speed_.y += gravity;
	}

	if (cane_.equipment2 == true&&cane_.caneshot2 == false)
	{
		cane_.speed_.y += gravity ;
	}

	if (cane_.equipment3 == true&&cane_.caneshot3 == false)
	{
		cane_.speed_.y += gravity;
	}

	if (keys[DIK_SPACE] && prekeys[DIK_SPACE] == 0)
	{
		if (jampFlag == false)
		{

			jampFlag = true;
			player.velocity.Y -= 20;
			
			if (sword.equipment == true && sword.swordshot == false)
			{
				sword.speed_.y -= 20;
			}

			if (sword.equipment2 == true && sword.swordshot2 == false)
			{
				sword.speed_.y -= 20;
			}

			if (sword.equipment3 == true && sword.swordshot3 == false)
			{
				sword.speed_.y -= 20;
			}

			if (cane_.equipment == true && cane_.canedshot == false)
			{
				cane_.speed_.y -= 20;
			}

			if (cane_.equipment2 == true && cane_.caneshot2 == false)
			{
				cane_.speed_.y -= 20;
			}
			if (cane_.equipment3 == true && cane_.caneshot3 == false)
			{
				cane_.speed_.y -= 20;
			}
		}
	}



	//4頂点の座標
	float top = player.position.Y - player.radius;
	float down = player.position.Y + player.radius - 1;
	float right = player.position.X + player.radius - 1;
	float left = player.position.X - player.radius;


	//左右の判定
	if (map[(int)(top / 32)][(int)((left + player.velocity.X) / 32)] != 0 ||
		map[(int)(top / 32)][(int)((right + player.velocity.X) / 32)] != 0 ||
		map[(int)(down / 32)][(int)((left + player.velocity.X) / 32)] != 0 ||
		map[(int)(down / 32)][(int)((right + player.velocity.X) / 32)] != 0)
	{
		
		if (player.velocity.X > 0)
		{
			while (map[(int)(top / 32)][(int)((left + 1) / 32)] == 0 &&
				map[(int)(top / 32)][(int)((right + 1) / 32)] == 0 &&
				map[(int)(down / 32)][(int)((left + 1) / 32)] == 0 &&
				map[(int)(down / 32)][(int)((right + 1) / 32)] == 0)
			{
				if (sword.equipment == true&&sword.swordshot == false)
				{
					sword.position[0].y += 1;
					
				}
				if (sword.equipment2 == true && sword.swordshot2 == false)
				{
					sword.position[1].y += 1;
				}
				if (sword.equipment3 == true && sword.swordshot3 == false)
				{
					sword.position[2].y += 1;
				}
				if (cane_.equipment == true&&cane_.canedshot == false)
				{
					cane_.position[0].y += 1;
				}
				if (cane_.equipment2 == true&&cane_.caneshot2 == false)
				{
					cane_.position[1].y += 1;
				}
				if (cane_.equipment3 == true&&cane_.caneshot3 == false)
				{
					cane_.position[2].y += 1;
				}
				player.position.Y += 1;
				left += 1;
				right += 1;

				scrolX += 0;

			}
		}

		if (player.velocity.X < 0)
		{
			while (map[(int)(top / 32)][(int)((left - 1) / 32)] == 0 &&
				map[(int)(top / 32)][(int)((right - 1) / 32)] == 0 &&
				map[(int)(down / 32)][(int)((left - 1) / 32)] == 0 &&
				map[(int)(down / 32)][(int)((right - 1) / 32)] == 0)
			{

				scrolX += 0;
				player.position.X -= 1;
				//剣
				if (sword.equipment == true && sword.swordshot == false)
				{
					sword.position[0].y += 1;
				
				}
				if (sword.equipment2 == true && sword.swordshot2 == false)
				{
					sword.position[1].y += 1;
				}
				if (sword.equipment3 == true && sword.swordshot3 == false)
				{
					sword.position[2].y += 1;
				}
				if (cane_.equipment == true&&cane_.canedshot == false)
				{
					cane_.position[0].y += 1;
				}
				if (cane_.equipment2 == true&&cane_.caneshot2 == false)
				{
					cane_.position[1].y += 1;
				}
				if (cane_.equipment3 == true && cane_.caneshot3 == false)
				{
					cane_.position[2].y += 1;
				}
				left -= 1;
				right -= 1;

			}
		}
		//剣
		if(sword.equipment == true)
		{ 
			sword.speed_.x = 0;
		}
		if (sword.equipment2 == true)
		{
			sword.speed_.x = 0;
		}
		if (sword.equipment3 == true)
		{
			sword.speed_.x = 0;
		}
		//杖
		if (cane_.equipment == true)
		{
			cane_.speed_.x = 0;
		}
		if (cane_.equipment2 == true)
		{
			cane_.speed_.x = 0;
		}
		if (cane_.equipment3 == true)
		{
			cane_.speed_.x = 0;
		}
		player.velocity.X = 0;
		
	}

	//上下の判定
	top = player.position.Y - player.radius;
	down = player.position.Y + player.radius - 1;
	right = player.position.X + player.radius - 1;
	left = player.position.X - player.radius;


	//隠しブロック
	if (map[(int)((top + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK2 ||
		map[(int)((top + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK2 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK2 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK2)
	{

		kakusiflag = true;

	}

	if (map[(int)((top + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK5 ||
		map[(int)((top + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK5 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK5 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK5)
	{

		kakusiflag5 = true;

	}

	if (map[(int)((top + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK6 ||
		map[(int)((top + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK6 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK6 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK6)
	{

		kakusiflag6 = true;

	}
	if (map[(int)((top + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK7 ||
		map[(int)((top + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK7 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK7 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK7)
	{

		kakusiflag7 = true;

	}
	//ブロッが0以外の時に判定を取る
	//ブロックが0以外の時に判定を取る
	if (map[(int)((top + player.velocity.Y) / 32)][(int)((left) / 32)] != 0 ||
		map[(int)((top + player.velocity.Y) / 32)][(int)((right) / 32)] != 0 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((left) / 32)] != 0 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((right) / 32)] != 0)
	{

		if (player.velocity.Y > 0)
		{
			while (map[(int)((top + 1) / 32)][(int)((left) / 32)] == 0 &&
				map[(int)((top + 1) / 32)][(int)((right) / 32)] == 0 &&
				map[(int)((down + 1) / 32)][(int)((left) / 32)] == 0 &&
				map[(int)((down + 1) / 32)][(int)((right) / 32)] == 0)
			{
				player.position.Y += 1;
				//剣
				if (sword.equipment == true && sword.swordshot == false)
				{
					sword.position[0].y += 1;
				}
				if (sword.equipment2 == true && sword.swordshot2 == false)
				{
					sword.position[1].y += 1;
				}
				if (sword.equipment3 == true && sword.swordshot3 == false)
				{
					sword.position[2].y += 1;
				}
				//杖
				if (cane_.equipment == true&&cane_.canedshot == false)
				{
					cane_.position[0].y += 1;
				}
				if (cane_.equipment2 == true&&cane_.caneshot2 == false)
				{
					cane_.position[1].y += 1;
				}
				if (cane_.equipment3 == true&&cane_.caneshot3 == false)
				{
					cane_.position[2].y += 1;
				}

				top += 1;
				down += 1;

			}
		}


		//1回しかジャンプしない↓
		if (map[(int)((down + 1) / 32)][(int)((left) / 32)] == 1 ||
			map[(int)((down + 1) / 32)][(int)((right) / 32)] == 1)
		{
			jampFlag = false;//貯めジャンプ
			//wallflag = false;//壁キック
		}
		//1回しかジャンプしない↑


		if (player.velocity.Y < 0)
		{
			while (map[(int)((top - 1) / 32)][(int)((left) / 32)] == 0 &&
				map[(int)((top - 1) / 32)][(int)((right) / 32)] == 0 &&
				map[(int)((down - 1) / 32)][(int)((left) / 32)] == 0 &&
				map[(int)((down - 1) / 32)][(int)((right) / 32)] == 0)
			{
				player.position.Y -= 1;
				//剣
				if (sword.equipment == true&&sword.swordshot == false)
				{
					sword.position[0].y -= 1;
				}
				if (sword.equipment2 == true && sword.swordshot2 == false)
				{
					sword.position[1].y -= 1;
				}
				if (sword.equipment3 == true && sword.swordshot3 == false)
				{
					sword.position[1].y -= 1;
				}
				//杖
				if (cane_.equipment == true&&cane_.canedshot == false)
				{
					cane_.position[0].y += 1;
				}
				if (cane_.equipment2 == true&&cane_.caneshot2 == false)
				{
					cane_.position[1].y += 1;
				}
				if (cane_.equipment3 == true&& cane_.caneshot3 == false)
				{
					cane_.position[2].y += 1;
				}
				
				top -= 1;
				down -= 1;

			}
		}

		player.velocity.Y = 0;
		//剣
		if (sword.equipment == true)
		{
			sword.speed_.y = 0;
		}
		if (sword.equipment2 == true)
		{
			sword.speed_.y = 0;
		}
		if (sword.equipment3 == true)
		{
			sword.speed_.y = 0;
		}
		//杖
		if (cane_.equipment == true)
		{
			cane_.speed_.y = 0;
		}
		if (cane_.equipment2 == true)
		{
			cane_.speed_.y = 0;
		}
		if (cane_.equipment3 == true)
		{
			cane_.speed_.y = 0;
		}

	}

	player.position.X += player.velocity.X;
	player.position.Y += player.velocity.Y;
	//剣
	if (sword.equipment == true)
	{
		sword.position[0].x += sword.speed_.x;
		sword.position[0].y += sword.speed_.y;
	}
	if (sword.equipment2 == true)
	{
		sword.position[1].x += sword.speed_.x;
		sword.position[1].y += sword.speed_.y;
	}
	if (sword.equipment3 == true)
	{
		sword.position[2].x += sword.speed_.x;
		sword.position[2].y += sword.speed_.y;
	}
	//杖
	if (cane_.equipment == true)
	{
		cane_.position[0].x += cane_.speed_.x;
		cane_.position[0].y += cane_.speed_.y;
	}

	if (cane_.equipment2 == true)
	{
		cane_.position[1].x += cane_.speed_.x;
		cane_.position[1].y += cane_.speed_.y;
	}

	if (cane_.equipment3 == true)
	{
		cane_.position[2].x += cane_.speed_.x;
		cane_.position[2].y += cane_.speed_.y;
	}


/////////////////////////////////////////////////////////////////////////

	//剣1
	if (player.position.X <= sword.position[0].x + sword.radius_[0] &&
		sword.position[0].x <= player.position.X + player.radius &&
		player.position.Y <= sword.position[0].y + sword.radius_[0] &&
		sword.position[0].y <= player.position.Y + player.radius)

	{

		sword.swordflag = true;

	}

	if (keys[DIK_K] && sword.swordflag == true && swordtimer == 0)
	{

		sword.equipment = true;
		sword.equipment2 = false;
		sword.equipment3 = false;
		
		cane_.equipment = false;
		cane_.equipment2 = false;
		cane_.equipment3 = false;
		
		sword.position[0].x = player.position.X-60;
		sword.position[0].y = player.position.Y-10;
		sword.swordshot = true;
		
	}
	if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_X && sword.swordflag == true&&swordtimer ==0)
	{

		sword.equipment = true;
		sword.equipment2 = false;
		sword.equipment3 = false;

		cane_.equipment = false;
		cane_.equipment2 = false;
		cane_.equipment3 = false;

		sword.position[0].x = player.position.X - 60;
		sword.position[0].y = player.position.Y - 10;
		sword.swordshot = true;
	

	}

	
		if (sword.swordshot == true)
		{
			
			sword.position[0].x += 5;
			swordtimer++;
		}

		if (swordtimer == 60)
		{
			sword.equipment = false;
			sword.swordshot = false;
	    
		}
	

	//剣２

	if (player.position.X <= sword.position[1].x + sword.radius_[1] &&
		sword.position[1].x <= player.position.X + player.radius &&
		player.position.Y <= sword.position[1].y + sword.radius_[1] &&
		sword.position[1].y <= player.position.Y + player.radius)

	{

		sword.swordflag2 = true;

	}
	
	if (keys[DIK_K] && sword.swordflag2 == true&&swordtimer2 ==0)
	{

		sword.equipment = false;
		sword.equipment2 = true;
		sword.equipment3 = false;

		cane_.equipment = false;
		cane_.equipment2 = false;
		cane_.equipment3 = false;

		sword.position[1].x = player.position.X - 60;
		sword.position[1].y = player.position.Y - 10;
		sword.swordshot2 = true;

	}

	if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_X && sword.swordflag2 == true&&swordtimer2 == 0)
	{
		sword.equipment = false;
		sword.equipment2 = true;
		sword.equipment3 = false;

		cane_.equipment = false;
		cane_.equipment2 = false;
		cane_.equipment3 = false;

		sword.position[1].x = player.position.X - 60;
		sword.position[1].y = player.position.Y - 10;
		sword.swordshot2 = true;

	}

		if (sword.swordshot2 == true)
		{

			swordtimer2++;
			sword.position[1].x += 5;

		}

		if (swordtimer2==60)
		{

			sword.equipment2 = false;
			sword.swordshot2 = false;

		}



	//32w
	if (player.position.X <= sword.position[2].x + sword.radius_[2] &&
		sword.position[2].x <= player.position.X + player.radius &&
		player.position.Y <= sword.position[2].y + sword.radius_[2] &&
		sword.position[2].y <= player.position.Y + player.radius)
	{

		sword.swordflag3 = true;

	}

	if (keys[DIK_K] && sword.swordflag3 == true&&swordtimer3 ==0)
	{
		sword.equipment = false;
		sword.equipment2 = false;
		sword.equipment3 = true;

		cane_.equipment = false;
		cane_.equipment2 = false;
		cane_.equipment3 = false;

		sword.position[2].x = player.position.X - 60;
		sword.position[2].y = player.position.Y - 10;
		sword.swordshot3 = true;

	}
	if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_X && sword.swordflag3 == true&& swordtimer3 ==0)
	{
		sword.equipment = false;
		sword.equipment2 = false;
		sword.equipment3 = true;

		cane_.equipment = false;
		cane_.equipment2 = false;
		cane_.equipment3 = false;

		sword.position[2].x = player.position.X - 60;
		sword.position[2].y = player.position.Y - 10;
		sword.swordshot3 = true;

	}
	
		if (sword.swordshot3 == true)
		{
			swordtimer3++;
			sword.position[2].x += 5;
		}
		if (swordtimer3 == 60)
		{

			sword.equipment3 = false;
			sword.swordshot3 = false;

		}



	//////////////////////////
	//杖
	if (player.position.X <= cane_.position[0].x + cane_.radius_[0] &&
		cane_.position[0].x <= player.position.X + player.radius &&
		player.position.Y <= cane_.position[0].y + cane_.radius_[0] &&
		cane_.position[0].y <= player.position.Y + player.radius)

	{

		cane_.caneflag = true;

	}

	if (keys[DIK_J] && cane_.caneflag == true && canetimer ==0)
	{

		cane_.equipment = true;
		cane_.equipment2 = false;
		cane_.equipment3 = false;
		sword.equipment = false;
		sword.equipment2 = false;
		sword.equipment3 = false;
	
		cane_.position[0].x = player.position.X;
		cane_.position[0].y = player.position.Y;
		cane_.canedshot = true;
		

	}
	if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_Y && cane_.caneflag == true &&canetimer ==0)
	{
		cane_.equipment = true;
		cane_.equipment2 = false;
		cane_.equipment3 = false;
		sword.equipment = false;
		sword.equipment2 = false;
		sword.equipment3 = false;

		cane_.position[0].x = player.position.X;
		cane_.position[0].y = player.position.Y;
		cane_.canedshot = true;
	}
	if (cane_.canedshot == true)
	{
		canetimer++;
		cane_.position[0].x += 5;
	}
	if (canetimer == 60)
	{

		cane_.equipment = false;
		cane_.canedshot = false;

	}

	


	//杖二本目
	if (player.position.X <= cane_.position[1].x + cane_.radius_[1] &&
		cane_.position[1].x <= player.position.X + player.radius &&
		player.position.Y <= cane_.position[1].y + cane_.radius_[1] &&
		cane_.position[1].y <= player.position.Y + player.radius)

	{

		cane_.caneflag2 = true;

	}

	if (keys[DIK_J] && cane_.caneflag2 == true && canetimer2 == 0)
	{

		cane_.equipment = false;
		cane_.equipment2 = true;
		cane_.equipment3 = false;
		sword.equipment = false;
		sword.equipment2 = false;
		sword.equipment3 = false;

		cane_.position[1].x = player.position.X;
		cane_.position[1].y = player.position.Y;
		cane_.caneshot2 = true;

	}
	if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_Y && cane_.caneflag2 == true && canetimer2 == 0)
	{
		cane_.equipment = false;
		cane_.equipment2 = true;
		cane_.equipment3 = false;
		sword.equipment = false;
		sword.equipment2 = false;
		sword.equipment3 = false;

		cane_.position[1].x = player.position.X;
		cane_.position[1].y = player.position.Y;
		cane_.caneshot2 = true;

	}
	if (cane_.caneshot2 == true)
	{
		canetimer2++;
		cane_.position[1].x += 5;
	}


	if (canetimer2 == 60)
	{

		cane_.equipment2 = false;
		cane_.caneshot2 = false;

	}


	if (player.position.X <= cane_.position[2].x + cane_.radius_[2] &&
		cane_.position[2].x <= player.position.X + player.radius &&
		player.position.Y <= cane_.position[2].y + cane_.radius_[2] &&
		cane_.position[2].y <= player.position.Y + player.radius)

	{

		cane_.caneflag3 = true;

	}
	if (keys[DIK_J] && cane_.caneflag3 == true && canetimer3 == 0)
	{

		cane_.equipment = false;
		cane_.equipment2 = false;
		cane_.equipment3 = true;
		sword.equipment = false;
		sword.equipment2 = false;
		sword.equipment3 = false;

		cane_.position[2].x = player.position.X;
		cane_.position[2].y = player.position.Y;
		cane_.caneshot3 = true;

	}
	if (joyState.Gamepad.wButtons & XINPUT_GAMEPAD_Y && cane_.caneflag3 == true && canetimer3 == 0)
	{
		cane_.equipment = false;
		cane_.equipment2 = false;
		cane_.equipment3 = true;
		sword.equipment = false;
		sword.equipment2 = false;
		sword.equipment3 = false;

		cane_.position[2].x = player.position.X;
		cane_.position[2].y = player.position.Y;
		cane_.caneshot3 = true;


	}
	if (cane_.caneshot3 == true)
	{
		canetimer3++;
		cane_.position[2].x += 5;
	

	}
	


	if (canetimer3 == 60)
	{

		cane_.equipment3 = false;
		cane_.caneshot3 = false;

	}
	/*
	//槍
	if (player.position.X <= spear_.position[0].x + spear_.radius_ &&
		spear_.position[0].x <= player.position.X + player.radius &&
		player.position.Y <= spear_.position[0].y + spear_.radius_ &&
		spear_.position[0].y <= player.position.Y + player.radius)

	{

		spear_.spearflag = true;

	}

	if (player.position.X <= spear_.position[1].x + spear_.radius_ &&
		spear_.position[1].x <= player.position.X + player.radius &&
		player.position.Y <= spear_.position[1].y + spear_.radius_ &&
		spear_.position[1].y <= player.position.Y + player.radius)

	{

		spear_.spearflag2 = true;

	}
	*/
            
	
	//playerと敵当たり判定
	if (enemy_.flag == true)
	{
		if (player.position.X <= enemy_.position[0].x + enemy_.radius_[0] &&
			enemy_.position[0].x <= player.position.X + player.radius &&
			player.position.Y <= enemy_.position[0].y + enemy_.radius_[0] &&
			enemy_.position[0].y <= player.position.Y + player.radius)
		{
			flag = false;
		}
	}


	if (enemy_.speed_.x >= 0)
	{

		enemy_.speed_.x = 2;

	}


	if (enemy_.flag2 == true)
	{
		if (player.position.X <= enemy_.position[1].x + enemy_.radius_[1] &&
			enemy_.position[1].x <= player.position.X + player.radius &&
			player.position.Y <= enemy_.position[1].y + enemy_.radius_[1] &&
			enemy_.position[1].y <= player.position.Y + player.radius)
		{
			//enemy_.ChecAllCollision();
			flag = false;
			//flag = false;
			
		}
	}


	if (enemy_.flag3 == true)
	{
		if (player.position.X <= enemy_.position[2].x + enemy_.radius_[2] &&
			enemy_.position[2].x <= player.position.X + player.radius &&
			player.position.Y <= enemy_.position[2].y + enemy_.radius_[2] &&
			enemy_.position[2].y <= player.position.Y + player.radius)

		{

			//enemy_.ChecAllCollision();
			flag = false;
			//flag = false;
			


		}
	}
	//	スライム

	if (enemy_.suraimuflag == true)
	{
		if (player.position.X <= enemy_.position[3].x + enemy_.radius_[3] &&
			enemy_.position[3].x <= player.position.X + player.radius &&
			player.position.Y <= enemy_.position[3].y + enemy_.radius_[3] &&
			enemy_.position[3].y <= player.position.Y + player.radius)
		{

			flag = false;

		

		}
	}

	if (enemy_.suraimuflag2 == true)
	{
		if (player.position.X <= enemy_.position[4].x + enemy_.radius_[4] &&
			enemy_.position[4].x <= player.position.X + player.radius &&
			player.position.Y <= enemy_.position[4].y + enemy_.radius_[4] &&
			enemy_.position[4].y <= player.position.Y + player.radius)
		{

			flag = false;

		}
	}
	if (enemy_.suraimuflag3 == true)
	{
		if (player.position.X <= enemy_.position[5].x + enemy_.radius_[5] &&
			enemy_.position[5].x <= player.position.X + player.radius &&
			player.position.Y <= enemy_.position[5].y + enemy_.radius_[5] &&
			enemy_.position[5].y <= player.position.Y + player.radius)
		{

			flag = false;

		}
	}
	if (enemy_.suraimuflag4 == true)
	{
		if (player.position.X <= enemy_.position[6].x + enemy_.radius_[5] &&
			enemy_.position[6].x <= player.position.X + player.radius &&
			player.position.Y <= enemy_.position[6].y + enemy_.radius_[5] &&
			enemy_.position[6].y <= player.position.Y + player.radius)
		{

			flag = false;

		}
	}
	///////あたり判定

	if (sword.equipment == true && enemy_.flag == true)
	{
		if (sword.position[0].x <= enemy_.position[0].x + enemy_.radius_[0] &&
			enemy_.position[0].x <= sword.position[0].x + sword.radius_[0] &&
			sword.position[0].y <= enemy_.position[0].y + enemy_.radius_[0] &&
			enemy_.position[0].y <= sword.position[0].y + sword.radius_[0])
		{

			enemy_.flag = false;
			sword.equipment = false;
		
			
		}
	}

	if (sword.equipment == true && enemy_.flag2 == true)
	{
		if (sword.position[0].x <= enemy_.position[1].x + enemy_.radius_[1] &&
			enemy_.position[1].x <= sword.position[0].x + sword.radius_[0] &&
			sword.position[0].y <= enemy_.position[1].y + enemy_.radius_[1] &&
			enemy_.position[1].y <= sword.position[0].x + sword.radius_[0])
		{
			enemy_.flag2 = false;
			sword.equipment = false;
		}
	}

	if (sword.equipment == true && enemy_.flag3 == true)
	{
		if (sword.position[0].x <= enemy_.position[2].x + enemy_.radius_[2] &&
			enemy_.position[2].x <= sword.position[0].x + sword.radius_[0] &&
			sword.position[0].y <= enemy_.position[2].y + enemy_.radius_[2] &&
			enemy_.position[2].y <= sword.position[0].y + sword.radius_[0])
		{
			enemy_.flag3 = false;
			sword.equipment = false;

		}
	}

	if (sword.equipment2 == true && enemy_.flag == true)
	{
		if (sword.position[1].x <= enemy_.position[0].x + enemy_.radius_[0] &&
			enemy_.position[0].x <= sword.position[1].x + sword.radius_[1] &&
			sword.position[1].y <= enemy_.position[0].y + enemy_.radius_[0] &&
			enemy_.position[0].y <= sword.position[1].y + sword.radius_[1])
		{
			enemy_.flag = false;
			sword.equipment2 == false;
		    

		}
	}

	if (sword.equipment2 == true && enemy_.flag2 == true)
	{
		if (sword.position[1].x <= enemy_.position[1].x + enemy_.radius_[1] &&
			enemy_.position[1].x <= sword.position[1].x + sword.radius_[1] &&
			sword.position[1].y <= enemy_.position[1].y + enemy_.radius_[1] &&
			enemy_.position[1].y <= sword.position[1].y + sword.radius_[1])
		{
			enemy_.flag2 = false;
			sword.equipment2 == false;
		}
	}


	if (sword.equipment2 == true && enemy_.flag3 == true)
	{
		if (sword.position[1].x <= enemy_.position[2].x + enemy_.radius_[2] &&
			enemy_.position[2].x <= sword.position[1].x + sword.radius_[1] &&
			sword.position[1].y <= enemy_.position[2].y + enemy_.radius_[2] &&
			enemy_.position[2].y <= sword.position[1].y + sword.radius_[1])
		{
			enemy_.flag3 = false;
			sword.equipment2 == false;
		}
	}

	if (sword.equipment3 == true && enemy_.flag == true)
	{
		if (sword.position[2].x <= enemy_.position[0].x + enemy_.radius_[0] &&
			enemy_.position[0].x <= sword.position[2].x + sword.radius_[2] &&
			sword.position[2].y <= enemy_.position[0].y + enemy_.radius_[0] &&
			enemy_.position[0].y <= sword.position[2].y + sword.radius_[2])
		{
			enemy_.flag = false;
			sword.equipment3 == false;
			
		}
	}
	if (sword.equipment3 == true && enemy_.flag2 == true)
	{
		if (sword.position[2].x <= enemy_.position[1].x + enemy_.radius_[1] &&
			enemy_.position[1].x <= sword.position[2].x + sword.radius_[2] &&
			sword.position[2].y <= enemy_.position[1].y + enemy_.radius_[1] &&
			enemy_.position[1].y <= sword.position[2].y + sword.radius_[2])
		{
			enemy_.flag2 = false;
			sword.equipment3 == false;
		}
	}
	if (sword.equipment3 == true && enemy_.flag3 == true)
	{

		if (sword.position[2].x <= enemy_.position[2].x + enemy_.radius_[2] &&
			enemy_.position[2].x <= sword.position[2].x + sword.radius_[2] &&
			sword.position[2].y <= enemy_.position[2].y + enemy_.radius_[2] &&
			enemy_.position[2].y <= sword.position[2].y + sword.radius_[2])
		{
			enemy_.flag3 = false;
			sword.equipment3 = false;
		}
	}

	/////スライム

	//杖1個目の判定
	if (cane_.caneflag == true && enemy_.suraimuflag == true)
	{
		if (cane_.position[0].x <= enemy_.position[3].x + enemy_.radius_[3] &&
			enemy_.position[3].x <= cane_.position[0].x + cane_.radius_[0] &&
			cane_.position[0].y <= enemy_.position[3].y + enemy_.radius_[3] &&
			enemy_.position[3].y <= cane_.position[0].y + cane_.radius_[0])
		{
			enemy_.suraimuflag = false;
			cane_.equipment = false;
			
		}

	}

	if (cane_.caneflag == true && enemy_.suraimuflag2 == true)
	{
		if (cane_.position[0].x <= enemy_.position[4].x + enemy_.radius_[4] &&
			enemy_.position[4].x <= cane_.position[0].x + cane_.radius_[0] &&
			cane_.position[0].y <= enemy_.position[4].y + enemy_.radius_[4] &&
			enemy_.position[4].y <= cane_.position[0].y + cane_.radius_[0])
		{
			enemy_.suraimuflag2 = false;
			cane_.equipment = false;
		}

	}

	if (cane_.caneflag == true && enemy_.suraimuflag3 == true)
	{
		if (cane_.position[0].x <= enemy_.position[5].x + enemy_.radius_[5] &&
			enemy_.position[5].x <= cane_.position[0].x + cane_.radius_[0] &&
			cane_.position[0].y <= enemy_.position[5].y + enemy_.radius_[5] &&
			enemy_.position[5].y <= cane_.position[0].y + cane_.radius_[0])
		{
			enemy_.suraimuflag3 = false;
			cane_.equipment = false;
		}

	}
	if (cane_.caneflag == true && enemy_.suraimuflag4 == true)
	{
		if (cane_.position[0].x <= enemy_.position[6].x + enemy_.radius_[6] &&
			enemy_.position[6].x <= cane_.position[0].x + cane_.radius_[0] &&
			cane_.position[6].y <= enemy_.position[6].y + enemy_.radius_[5] &&
			enemy_.position[5].y <= cane_.position[0].y + cane_.radius_[0])
		{
			enemy_.suraimuflag4 = false;
			cane_.equipment = false;
		}

	}
	//杖二個目の判定
	if (cane_.caneflag2 == true && enemy_.suraimuflag == true)
	{
		if (cane_.position[1].x <= enemy_.position[3].x + enemy_.radius_[3] &&
			enemy_.position[3].x <= cane_.position[1].x + cane_.radius_[1] &&
			cane_.position[1].y <= enemy_.position[3].y + enemy_.radius_[3] &&
			enemy_.position[3].y <= cane_.position[1].y + cane_.radius_[1])
		{
			enemy_.suraimuflag = false;
			cane_.equipment2 = false;
		}

	}

	if (cane_.caneflag2 == true && enemy_.suraimuflag2 == true)
	{
		if (cane_.position[1].x <= enemy_.position[4].x + enemy_.radius_[4] &&
			enemy_.position[4].x <= cane_.position[1].x + cane_.radius_[1] &&
			cane_.position[1].y <= enemy_.position[4].y + enemy_.radius_[4] &&
			enemy_.position[4].y <= cane_.position[1].y + cane_.radius_[1])
		{

			enemy_.suraimuflag2 = false;
			cane_.equipment2 = false;

		}

	}


	if (cane_.caneflag2 == true && enemy_.suraimuflag3 == true)
	{
		if (cane_.position[1].x <= enemy_.position[5].x + enemy_.radius_[5] &&
			enemy_.position[5].x <= cane_.position[1].x + cane_.radius_[1] &&
			cane_.position[1].y <= enemy_.position[5].y + enemy_.radius_[5] &&
			enemy_.position[5].y <= cane_.position[1].y + cane_.radius_[1])
		{
			enemy_.suraimuflag3 = false;
			cane_.equipment2 = false;
		}

	}
	if (cane_.caneflag2 == true && enemy_.suraimuflag4 == true)
	{
		if (cane_.position[1].x <= enemy_.position[6].x + enemy_.radius_[6] &&
			enemy_.position[6].x <= cane_.position[1].x + cane_.radius_[1] &&
			cane_.position[1].y <= enemy_.position[6].y + enemy_.radius_[6] &&
			enemy_.position[6].y <= cane_.position[1].y + cane_.radius_[1])
		{
			enemy_.suraimuflag4 = false;
			cane_.equipment2 = false;
		}

	}
	/////杖3コメの判定
	if (cane_.caneflag3 == true && enemy_.suraimuflag == true)
	{
		if (cane_.position[2].x <= enemy_.position[3].x + enemy_.radius_[3] &&
			enemy_.position[3].x <= cane_.position[2].x + cane_.radius_[2] &&
			cane_.position[2].y <= enemy_.position[3].y + enemy_.radius_[3] &&
			enemy_.position[3].y <= cane_.position[2].y + cane_.radius_[2])
		{
			enemy_.suraimuflag = false;
			cane_.equipment3 = false;

		}

	}
	if (cane_.caneflag3 == true && enemy_.suraimuflag2 == true)
	{
		if (cane_.position[2].x <= enemy_.position[4].x + enemy_.radius_[4] &&
			enemy_.position[4].x <= cane_.position[2].x + cane_.radius_[2] &&
			cane_.position[2].y <= enemy_.position[4].y + enemy_.radius_[4] &&
			enemy_.position[4].y <= cane_.position[2].y + cane_.radius_[2])
		{
			enemy_.suraimuflag2 = false;
			cane_.equipment3 = false;

		}

	}

	if (cane_.caneflag3 == true && enemy_.suraimuflag3 == true)
	{
		if (cane_.position[2].x <= enemy_.position[5].x + enemy_.radius_[5] &&
			enemy_.position[5].x <= cane_.position[2].x + cane_.radius_[2] &&
			cane_.position[2].y <= enemy_.position[5].y + enemy_.radius_[5] &&
			enemy_.position[5].y <= cane_.position[2].y + cane_.radius_[2])
		{
			enemy_.suraimuflag3 = false;
			cane_.equipment3 = false;

		}

	}

	if (cane_.caneflag3 == true && enemy_.suraimuflag4 == true)
	{
		if (cane_.position[2].x <= enemy_.position[6].x + enemy_.radius_[6] &&
			enemy_.position[6].x <= cane_.position[2].x + cane_.radius_[2] &&
			cane_.position[2].y <= enemy_.position[6].y + enemy_.radius_[6] &&
			enemy_.position[6].y <= cane_.position[2].y + cane_.radius_[2])
		{
			enemy_.suraimuflag4 = false;
			cane_.equipment3 = false;

		}

	}


	////goalあたり判定
	if (player.position.X <= goalposition.x + goalradius &&
		goalposition.x <= player.position.X + player.radius &&
		player.position.Y <= goalposition.y + goalradius &&
		goalposition.y <= player.position.Y + player.radius)
	{
		goalflag = false;
		
	}
	//反射
	if (enemy_.position[0].x >= 50)
	{
		enemy_.speed_.x = enemy_.speed_.x * -1;
	}
	if (enemy_.position[0].x <= 1250)
	{
		enemy_.speed_.x = enemy_.speed_.x * -1;
	}
	if (enemy_.position[1].x >= 50)
	{
		enemy_.speed_.x = enemy_.speed_.x * -1;
	}
	if (enemy_.position[1].x <= 1250)
	{
		enemy_.speed_.x = enemy_.speed_.x * -1;
	}
	if (enemy_.position[2].x >= 50)
	{
		enemy_.speed_.x = enemy_.speed_.x * -1;
	}

	if (enemy_.position[2].x <= 1250)
	{

		enemy_.speed_.x = enemy_.speed_.x * -1;

	}




	if (enemy_.position[3].x >= 1280)
	{

		enemy_.suraimuspeed.x = enemy_.suraimuspeed.x * -1;
	}
	if (enemy_.position[3].x <= 2500)
	{
		enemy_.suraimuspeed.x = enemy_.suraimuspeed.x * -1;
	}
	

	
	if (player.position.Y >= 800)
	{
		flag = false;
	}


}

void Player::Draw()
{


	   //自分
	if (flag == true) 
	{

		Novice::DrawSprite(player.position.X - player.radius - scrolX, player.position.Y - player.radius, irasuto, 1, 1, 0.0f, WHITE);

	}


		sword.Draw(scrolX);
		cane_.Draw(scrolX);
		enemy_.Draw(scrolX);
	
		//剣
		if (sword.equipment == true)
		{

			Novice::DrawSprite(sword.position[0].x-scrolX, sword.position[0].y - 20, Ken, 1, 1, 0.0f, WHITE);

		}
		if (sword.equipment2 == true)
		{

			Novice::DrawSprite(sword.position[1].x - scrolX, sword.position[1].y - 20, Ken, 1, 1, 0.0f, WHITE);

		}
		if (sword.equipment3 == true)
		{

			Novice::DrawSprite(sword.position[2].x - scrolX, sword.position[2].y - 20, Ken, 1, 1, 0.0f, WHITE);

		}
		//杖
		if (cane_.equipment == true)
		{

			Novice::DrawSprite(cane_.position[0].x - scrolX, cane_.position[0].y - 20, tue, 1, 1, 0.0f, WHITE);

		}
		if (cane_.equipment2 == true)
		{

			Novice::DrawSprite(cane_.position[1].x - scrolX, cane_.position[1].y - 20, tue, 1, 1, 0.0f, WHITE);

		}
		if (cane_.equipment3 == true)
		{
			Novice::DrawSprite(cane_.position[2].x - scrolX, cane_.position[2].y - 20, tue, 1, 1, 0.0f, WHITE);
		}


		Novice::DrawSprite(goalposition.x - scrolX, goalposition.y, Goal, 1, 1, 0.0f, WHITE);
		

	//ブロック描画
	for (int y = 0; y < 100; y++)
	{
		for (int x = 0; x < 200; x++)
		{

			if (map[y][x] == BLOCK)//普通のブロック
			{
				Novice::DrawSprite(x * BLOCKsize-scrolX, y * BLOCKsize, BLOCKirasuto, 1, 1, 0.0f, WHITE);
			}

			if (kakusiflag == true)
			{

				if (map[y][x] == BLOCK2)//隠しブロック
				{
					Novice::DrawSprite(x * BLOCKsize-scrolX, y * BLOCKsize, BLOCKkakusi, 1, 1, 0.0f, WHITE);
				}

			}

			if (kakusiflag2 == true)
			{

				if (map[y][x] == BLOCK3)//緑の隠しブロック
				{
					Novice::DrawSprite(x * BLOCKsize-scrolX, y * BLOCKsize, BLOCKkakusi2, 1, 1, 0.0f, WHITE);
				}

			}

			if (kakusiflag3 == true)
			{

				if (map[y][x] == BLOCK4)
				{
					Novice::DrawSprite(x * BLOCKsize-scrolX, y * BLOCKsize, BLOCKkakusi3, 1, 1, 0.0f, WHITE);
				}

			}

			if (kakusiflag5 == true)
			{
				if (map[y][x] == BLOCK5)
				{
					Novice::DrawSprite(x * BLOCKsize - scrolX, y * BLOCKsize, BLOCK22, 1, 1, 0.0f, WHITE);
				}
			}
			if (kakusiflag6 == true)
			{
				if (map[y][x] == BLOCK6)
				{
					Novice::DrawSprite(x * BLOCKsize - scrolX, y * BLOCKsize, BLOCK22, 1, 1, 0.0f, WHITE);
				}
			}
			if (kakusiflag7 == true)
			{
				if (map[y][x] == BLOCK6)
				{
					Novice::DrawSprite(x * BLOCKsize - scrolX, y * BLOCKsize, BLOCK22, 1, 1, 0.0f, WHITE);
				}
			}

		}
	}

}

void Player::OnCollision()
{
     flag = true;
	

	 player =
	 {
		 {64,500},
		 {0,0},
		 16
	 };
	 
	 scrolX = 0;

	 enemy_.Initialize();

	 sword.Initialize();

	 cane_.Initialize();

	 swordtimer = 0;
	 swordtimer2 = 0;
	 swordtimer3 = 0;
	 canetimer = 0;
	 canetimer2 = 0;
	 canetimer3 = 0;
	 goalflag = true;

}
