#ifndef SCENE_PACLOCAL_H
#define SCENE_PACLOCAL_H

#include <rt2d/scene.h>
#include <rt2d/canvas.h>
#include "Player.h"
#include "Player2.h"
#include "Cell.h"
#include <rt2d/text.h>
#include <bitset>

class Scene_PacLocal: public Scene
{

	
public:
	Scene_PacLocal();
	virtual ~Scene_PacLocal();
	
	void update(float deltaTime);
	void Player1_Move(float deltaTime);
	void Player2_Move(float deltaTime);
	void Game_Reset();
private:

	Player * Pacman;

	Player2 * Ghost;
	Text* text;
	std::vector<Cell*> grid;
	Cell * grids;
	
	// Cell * grids;

	int timer = 32;
	int MaxTime = 32;
	bool Can_Move;

	bool PAC_up;
	bool PAC_down;
	bool PAC_right;
	bool PAC_left;

	bool PAC_Move_up;
	bool PAC_Move_down;
	bool PAC_Move_right;
	bool PAC_Move_left;

	int MAX_TIME = 2;
	bool Ghost_up;
	bool Ghost_down;
	bool Ghost_right;
	bool Ghost_left;

	int Speed =50;
	bool moving_Player1;
	float Move_Time_Pacman = 0;
	int speed_Pacman=5;

	int Ghost_Speed = 100;
	bool moving_Player2;
	float Move_Time_Ghost = 0;

	bool lost;

	bool Reset;

};

#endif 
