#include "Scene_PacLocal.h"
#include <rt2d/scene.h>
#include <vector>
#include "collider_Pacman.h"



//#include "main.cpp"

	

Scene_PacLocal::Scene_PacLocal() : Scene()
{
	char gridmembers[880] = { // 40x22
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
		0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,
	};
	
	std::vector<Cell*> grid;
	int index = 0;
    for (size_t y = 0; y < 22; y++) 
	{
        for (size_t x = 0; x < 40; x++) 
		{
            collumn = new Cell();
            collumn->position = Vector2(x*32+16, y*32+16);
            this->addChild(collumn);
            grid.push_back(collumn);

			if (gridmembers[index] == 0)
			{
				// walkable path
			}
			index++;
        }        
    }
	//PACMAN
	
	
	Pacman = new Player();
	this->addChild(Pacman);
	Pacman->position.x = 400;
	Pacman->position.y = 400;
	PAC_up = false;
	PAC_down= false;
	PAC_right= false;
	PAC_left= false;

	// GHOST

	Ghost = new Player2();
	this->addChild(Ghost);
	Ghost->position.x = 592;
	Ghost->position.y = 592;
	
	Ghost_up= false;
	Ghost_down= false;
	Ghost_right= false;
	Ghost_left= false;
	lost = false;
	Reset = false;
}
Scene_PacLocal::~Scene_PacLocal()
{
	removeChild(Pacman);
	removeChild(Ghost);
	removeChild(text);
}

void Scene_PacLocal::update(float deltaTime)
{

	Rectangle rect1 = Rectangle(Pacman->position.x, Pacman->position.y, 32, 32);
	Rectangle rect2 = Rectangle(Ghost->position.x, Ghost->position.y, 32, 32);

	
	if( Collider::rectangle2rectangle(rect1, rect2)) 
	{
		text = new Text();
		text->message("Player 1 Lost :(");
		text->scale = Point2(0.5f, 0.5f);
		text->position = Point2(500, 50);
		this ->addChild(text);
		lost = true;
	}
	
	if (input()->getKeyDown(KeyCode::Escape)) 
	{
		this->stop();
	}
// 													PACMAN
// ___________________________________________________________________________________________________________________________________
	// MOVEMENT PACMAN
	if(lost == false)
	{
		if (moving_Player1 == true)
		{
			Move_Time_Pacman +=Speed * deltaTime;
			
			if(Move_Time_Pacman > MAX_TIME)
			{
				Move_Time_Pacman = 0;
			}
		}
		if (moving_Player2 == true)
		{
			Move_Time_Ghost +=	Ghost_Speed * deltaTime;
			
			if(Move_Time_Ghost > MAX_TIME)
			{
				Move_Time_Ghost = 0;
			}
		}

		if (input()->getKeyDown(KeyCode::Up)) 
		{
			PAC_up = true;
			PAC_down = false;
			PAC_right =false;
			PAC_left = false;
			
		}
		if (input()->getKeyDown(KeyCode::Down)) 
		{
			PAC_up = false;
			PAC_down = true;
			PAC_right =false;
			PAC_left = false;
		
		}
		if (input()->getKeyDown(KeyCode::Left)) {
			PAC_up = false;
			PAC_down = false;
			PAC_right =false;
			PAC_left = true;
		}
		if (input()->getKeyDown(KeyCode::Right)) {
			PAC_up = false;
			PAC_down = false;
			PAC_right =true;
			PAC_left = false;
		}
			if(PAC_up == true)
			{
				if(Pacman->position.y > 30)
				{
					moving_Player1= true;
					if(Move_Time_Pacman >= 1)
					{
						Pacman-> position.y -= 32;
						Move_Time_Pacman = 0;
					}
				}
			}
			
			if(PAC_down == true)
			{
				if(Pacman->position.y < 680)
				{
					moving_Player1= true;
					if(Move_Time_Pacman >= 1)
					{
						Pacman-> position.y += 32;
						Move_Time_Pacman = 0;
					}
				}
			}
			if(PAC_left == true)
			{
				if(Pacman->position.x > 40)
				{
					moving_Player1= true;
					if(Move_Time_Pacman >= 1)
					{
						Pacman-> position.x -= 32;
						Move_Time_Pacman = 0;
					}
				}
			}
			if(PAC_right == true)
			{
				if(Pacman->position.x < 1260)
				{
					moving_Player1= true;
					if(Move_Time_Pacman >= 1)
					{
						Pacman-> position.x += 32;
						Move_Time_Pacman = 0;
					}
				}
			}
		// }
			// 													GHOST
	// ___________________________________________________________________________________________________________________________________
		if (input()->getKeyDown(KeyCode::W)) 
		{
			Ghost_up = true;
			Ghost_down = false;
			Ghost_right =false;
			Ghost_left = false;
		}
		if (input()->getKeyDown(KeyCode::S)) 
		{
			Ghost_up = false;
			Ghost_down = true;
			Ghost_right =false;
			Ghost_left = false;
			
		}
		if (input()->getKeyDown(KeyCode::A)) {
			Ghost_up = false;
			Ghost_down = false;
			Ghost_right =false;
			Ghost_left = true;
		}
		if (input()->getKeyDown(KeyCode::D)) {
			Ghost_up = false;
			Ghost_down = false;
			Ghost_right =true;
			Ghost_left = false;
		}

		//Collision

		if(Ghost_up == true)
			{
				if(Ghost->position.y > 30)
				{
					moving_Player2= true;
					if(Move_Time_Ghost >= 1)
					{
						Ghost-> position.y -= 32;
						Move_Time_Ghost = 0;
					}
				}
			}
			
			if(Ghost_down == true)
			{
				if(Ghost->position.y < 680)
				{
					moving_Player2= true;
					if(Move_Time_Ghost >= 1)
					{
						Ghost-> position.y += 32;
						Move_Time_Ghost = 0;
					}
				}
			}
			if(Ghost_left == true)
			{
				if(Ghost->position.x > 40)
				{
					moving_Player2= true;
					if(Move_Time_Ghost >= 1)
					{
						Ghost-> position.x -= 32;
						Move_Time_Ghost = 0;
					}
				}
			}
			if(Ghost_right == true)
			{
				if(Ghost->position.x < 1260)
				{
					moving_Player2= true;
					if(Move_Time_Ghost >= 1)
					{
						Ghost-> position.x += 32;
						Move_Time_Ghost = 0;
					}
				}
			}
	}
	if(lost == true)
	{
		if(input()->getKeyDown(KeyCode::Enter))
		{
			Reset = true;
		} 
			if(Reset == true)
			{
			Pacman->position.x = 400;
			Pacman->position.y = 400;

			PAC_up = false;
			PAC_down= false;
			PAC_right= false;
			PAC_left= false;

			// GHOST

			Ghost->position.x = 592;
			Ghost->position.y = 592;
			
			Ghost_up= false;
			Ghost_down= false;
			Ghost_right= false;
			Ghost_left= false;
			lost = false;
			Reset = false;
		}
	}
}







