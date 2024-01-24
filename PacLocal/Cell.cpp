#include "Cell.h"


Cell::Cell(int type) : Entity()
{  
    if(type == 0)
    {
        this -> addSprite("assets/Grid.tga");
    }
   if(type == 1)
    {
        this -> addSprite("assets/Wall.tga");
    }
    if(type == 2) 
    {
        this -> addSprite("assets/ball.tga");
    }
}
Cell::~Cell()
{
    
}

void Cell::update(float deltaTime)
{
    
}
