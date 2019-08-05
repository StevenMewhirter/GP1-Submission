/*
=================
cRocket.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cRocket.h"

/*
=================================================================
Defualt Constructor
=================================================================
*/
cRocket::cRocket() : cSprite()
{
	this->rocketVelocity = 0;
}
/*
=================================================================
Update the sprite position
=================================================================
*/

void cRocket::update(double deltaTime)
{
	
	//gets players 1 current position and then moves them per frame 
	SDL_Rect currentSpritePos = this->getSpritePos();
	
	
	currentSpritePos.y += (int)(this->rocketVelocity * this->move * deltaTime);

	this->setSpritePos({ currentSpritePos.x , currentSpritePos.y  });
	this->setBoundingRect(this->getSpritePos());

}
/*
=================================================================
Sets the velocity for the rocket
=================================================================
*/
void cRocket::setRocketVelocity(int rocketVel)
{
	rocketVelocity = rocketVel;
}
/*
=================================================================
Gets the rocket velocity
=================================================================
*/
int cRocket::getRocketVelocity()
{
	return rocketVelocity;
}
/*
=================================================================
Sets the move value for the rocket
=================================================================
*/
void cRocket::setRocketMove(int rocketMove)
{
	move = rocketMove;
}
/*
=================================================================
Gets the rocket move value
=================================================================
*/
int cRocket::getRocketMove()
{
	return move;
}