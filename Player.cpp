#include "Player.h"

void Player::Initialize()
{

	player =
	{
		{64,300},
		{0,0},
		16
	};



	sword.Initialize();
	cane_.Initialize();
	spear_.Initialize();

}

void Player::Update(char* keys, char* prekeys)
{
	//右に動く
	if (keys[DIK_A])
	{
		player.velocity.X = -5;
		 if (sword.equipment == true)
		 {
		 	sword.speed_.x = -5;
		 }

		 if (sword.equipment2 == true)
		 {
			 sword.speed_.x = -5;
		 }

		 if (sword.equipment3 == true)
		 {
			 sword.speed_.x = -5;
		 }

		 if (cane_.equipment == true)
		 {
			 cane_.speed_.x = -5;
		 }

		 if (cane_.equipment2 == true)
		 {
			 cane_.speed_.x= -5;
		 }

		 if (cane_.equipment3 == true)
		 {
			 cane_.speed_.x = -5;
		 }
		if (player.position.X >= 580 && player.position.X <= 2550)
		{

			scrolX += player.velocity.X;

		}
		
		
	}
	if (keys[DIK_A] == 0 && prekeys[DIK_A])
	{
		player.velocity.X = 0;
		if (sword.equipment == true)
		{
			sword.speed_.x  = 0;
		}
		if (sword.equipment2 == true)
		{
			sword.speed_.x = 0;
		}
		if (sword.equipment3 == true)
		{
			sword.speed_.x = 0;
		}


		if (cane_.equipment == true)
		{
			cane_.speed_.x = -5;
		}

		if (cane_.equipment2 == true)
		{
			cane_.speed_.x = -5;
		}

		if (cane_.equipment3 == true)
		{
			cane_.speed_.x = -5;
		}
		if (player.position.X >= 580 && player.position.X <= 2550)
		{

			scrolX += player.velocity.X;
		
		}

		
	}

	//左に動く
	if (keys[DIK_D])
	{
		player.velocity.X = 5;
	    if (sword.equipment == true)
	    {
	    	sword.speed_.x = 5;
	    }
		if (sword.equipment2 == true)
		{
			sword.speed_.x = 5;
		}
		if (sword.equipment3 == true)
		{
			sword.speed_.x = 5;
		}

		if (cane_.equipment == true)
		{
			cane_.speed_.x = -5;
		}

		if (cane_.equipment2 == true)
		{
			cane_.speed_.x = -5;
		}

		if (cane_.equipment3 == true)
		{
			cane_.speed_.x = -5;
		}
		if (player.position.X >= 580 && player.position.X <= 2550)
		{

			scrolX += player.velocity.X;
			
		}
	}

	if (keys[DIK_D] == 0 && prekeys[DIK_D])
	{

		player.velocity.X = 0;
		 if (sword.equipment == true)
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

		 if (cane_.equipment == true)
		 {
			 cane_.speed_.x = -5;
		 }

		 if (cane_.equipment2 == true)
		 {
			 cane_.speed_.x = -5;
		 }

		 if (cane_.equipment3 == true)
		 {
			 cane_.speed_.x = -5;
		 }
		if (player.position.X >= 580 && player.position.X <= 2550)
		{

			scrolX += player.velocity.X;
			
		
		}
	
		
	}
	//重力をかける
	player.velocity.Y += gravity;

	if (sword.equipment == true)
	{
		sword.speed_.y += gravity;

	}
	if (sword.equipment2 == true)
	{
		sword.speed_.y += gravity;

	}
	if (sword.equipment3 == true)
	{
		sword.speed_.y += gravity;

	}

	if (cane_.equipment == true)
	{
		cane_.speed_.y += gravity;
	}

	if (cane_.equipment2 == true)
	{
		cane_.speed_.y += gravity ;
	}

	if (cane_.equipment3 == true)
	{
		cane_.speed_.y += gravity;
	}

	if (keys[DIK_SPACE] && prekeys[DIK_SPACE] == 0)
	{
		if (jampFlag == false)
		{

			jampFlag = true;
			player.velocity.Y -= 20;

			if (sword.equipment == true)
			{
				sword.speed_.y -= 20;
			}

			if (sword.equipment2 == true)
			{
				sword.speed_.y -= 20;
			}

			if (sword.equipment3 == true)
			{
				sword.speed_.y -= 20;
			}

			if (cane_.equipment == true)
			{
				cane_.speed_.y -= 20;
			}

			if (cane_.equipment2 == true)
			{
				cane_.speed_.y -= 20;
			}
			if (cane_.equipment3 == true)
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

				sword.position[0].y += 1;
				sword.position[1].y += 1;
				sword.position[2].y += 1;
				cane_.position[0].y += 1;
				cane_.position[1].y += 1;
				cane_.position[2].y += 1;

				player.position.Y += 1;
				left += 1;
				right += 1;

			}
		}

		if (player.velocity.X < 0)
		{
			while (map[(int)(top / 32)][(int)((left - 1) / 32)] == 0 &&
				map[(int)(top / 32)][(int)((right - 1) / 32)] == 0 &&
				map[(int)(down / 32)][(int)((left - 1) / 32)] == 0 &&
				map[(int)(down / 32)][(int)((right - 1) / 32)] == 0)
			{
				player.position.X -= 1;
				//剣
				sword.position[0].x -= 1;
				sword.position[1].x -= 1;
				sword.position[2].x -= 1;
				//杖
				cane_.position[0].x += 1;
				cane_.position[1].x += 1;
				cane_.position[2].x += 1;
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

	//緑の隠しブロック
	if (map[(int)((top + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK3 ||
		map[(int)((top + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK3 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((left) / 32)] == BLOCK3 ||
		map[(int)((down + player.velocity.Y) / 32)][(int)((right) / 32)] == BLOCK3)
	{

		kakusiflag2 = true;

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
				if (sword.equipment == true)
				{
					sword.position[0].y += 1;
				}
				if (sword.equipment2 == true)
				{
					sword.position[1].y += 1;
				}
				if (sword.equipment3 == true)
				{
					sword.position[2].y += 1;
				}
				//杖
				if (cane_.equipment == true)
				{
					cane_.position[0].y += 1;
				}
				if (cane_.equipment2 == true)
				{
					cane_.position[1].y += 1;
				}
				if (cane_.equipment3 == true)
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
				if (sword.equipment == true)
				{
					sword.position[0].y -= 1;
				}
				if (sword.equipment2 == true)
				{
					sword.position[1].y -= 1;
				}
				if (sword.equipment3 == true)
				{
					sword.position[1].y -= 1;
				}
				//杖
				if (cane_.equipment == true)
				{
					cane_.position[0].y += 1;
				}
				if (cane_.equipment2 == true)
				{
					cane_.position[1].y += 1;
				}
				if (cane_.equipment3 == true)
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
	if (player.position.X <= sword.position[0].x + sword.radius_ &&
		sword.position[0].x <= player.position.X + player.radius &&
		player.position.Y <= sword.position[0].y + sword.radius_ &&
		sword.position[0].y <= player.position.Y + player.radius)

	{

		sword.swordflag = true;

	}

	if (keys[DIK_0] && sword.swordflag == true)
	{
		sword.equipment = true;
		sword.equipment2 = false;
		sword.equipment3 = false;
		sword.position[0].x = player.position.X;
		sword.position[0].y = player.position.Y;
		
	}
	if (keys[DIK_O] && sword.swordflag == true)
	{

		sword.swordshot = true;

	}


	if (sword.swordshot == true)
	{
		sword.speed_.x = 0;
		sword.speed_.y = 0;
		sword.position[0].x += 5;

	}

	//剣２
	if (player.position.X <= sword.position[1].x + sword.radius_ &&
		sword.position[1].x <= player.position.X + player.radius &&
		player.position.Y <= sword.position[1].y + sword.radius_ &&
		sword.position[1].y <= player.position.Y + player.radius)

	{

		sword.swordflag2 = true;

	}
	if (keys[DIK_9] && sword.swordflag2 == true)
	{
		sword.equipment = false;
		sword.equipment2 = true;
		sword.equipment3 = false;
		sword.position[1].x = player.position.X;
		sword.position[1].y = player.position.Y;


	}


	if (keys[DIK_I] && sword.swordflag2 == true)
	{

		sword.swordshot2 = true;
	}

	if (sword.swordshot2 == true)
	{
		sword.speed_.x = 0;
		sword.speed_.y = 0;
		sword.position[1].x += 5;

	}



	//3
	if (player.position.X <= sword.position[2].x + sword.radius_ &&
		sword.position[2].x <= player.position.X + player.radius &&
		player.position.Y <= sword.position[2].y + sword.radius_ &&
		sword.position[2].y <= player.position.Y + player.radius)

	{

		sword.swordflag3 = true;

	}

	if (keys[DIK_8] && sword.swordflag3 == true)
	{

		sword.equipment = false;
		sword.equipment2 = false;
		sword.equipment3 = true;
		sword.position[2].x = player.position.X;
		sword.position[2].y = player.position.Y;
		

	}
	if (keys[DIK_U] && sword.swordflag3 == true)
	{

		sword.swordshot3 = true;
	}

	if (sword.swordshot3 == true)
	{
		sword.speed_.x = 0;
		sword.speed_.y = 0;
		sword.position[2].x += 5;

	}


	//杖
	if (player.position.X <= cane_.position[0].x + cane_.radius_ &&
		cane_.position[0].x <= player.position.X + player.radius &&
		player.position.Y <= cane_.position[0].y + cane_.radius_ &&
		cane_.position[0].y <= player.position.Y + player.radius)

	{

		cane_.caneflag = true;

	}
	if (keys[DIK_7] && cane_.caneflag == true)
	{
		cane_.equipment = true;
		cane_.equipment2 = false;
		cane_.equipment3 = false;
		cane_.position[0].x = player.position.X;
		cane_.position[0].y = player.position.Y;


	}

	if (keys[DIK_Y] && cane_.caneflag == true)
	{

		cane_.caneshot2 = true;
	}

	if (cane_.caneshot2 == true)
	{
		cane_.speed_.x = 0;
		cane_.speed_.y = 0;
		cane_.position[0].x += 5;

	}


	//杖二本目
	if (player.position.X <= cane_.position[1].x + cane_.radius_ &&
		cane_.position[1].x <= player.position.X + player.radius &&
		player.position.Y <= cane_.position[1].y + cane_.radius_ &&
		cane_.position[1].y <= player.position.Y + player.radius)

	{

		cane_.caneflag2 = true;
		
	}
	if (keys[DIK_6] && cane_.caneflag2 == true)
	{
		cane_.equipment = false;
		cane_.equipment2 = true;
		cane_.equipment3 = false;
		cane_.position[1].x = player.position.X;
		cane_.position[1].y = player.position.Y;


	}

	if (keys[DIK_T]&& cane_.caneflag2 == true)
	{

		cane_.caneshot3 = true;
	}

	if (sword.swordshot3 == true)
	{
		cane_.speed_.x = 0;
		cane_.speed_.y = 0;
		cane_.position[2].x += 5;

	}


	if (player.position.X <= cane_.position[2].x + cane_.radius_ &&
		cane_.position[2].x <= player.position.X + player.radius &&
		player.position.Y <= cane_.position[2].y + cane_.radius_ &&
		cane_.position[2].y <= player.position.Y + player.radius)

	{

		cane_.caneflag3 = true;

	}

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




}

void Player::Draw()
{


	   //自分
		Novice::DrawSprite(player.position.X - player.radius - scrolX , player.position.Y - player.radius, irasuto, 1, 1, 0.0f, WHITE);
		sword.Draw(scrolX);
		cane_.Draw(scrolX);
		spear_.Draw(scrolX);

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

		
	//グリッド線描画
	for (int i = 0; i < 50; i++)
	{

		Novice::DrawLine(i * 32, 0, i * 32, 1280, 0xAAAAAAFF);
		Novice::DrawLine(0, i * 32, 1280, i * 32, 0xAAAAAAFF);

	}

	//ブロック描画
	for (int y = 0; y < 100; y++)
	{
		for (int x = 0; x < 100; x++)
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
		}
	}


}
