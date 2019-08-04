/*
=================
cRocket.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cRocket2.h"

/*
=================================================================
Defualt Constructor
=================================================================
*/
cRocket2::cRocket2() : cSprite()
{
	this->rocketVelocity2 = 0;
}
/*
=================================================================
Update the sprite position
=================================================================
*/

void cRocket2::update2(double deltaTime)
{
	auto rads = PI / 180.0f * (this->getSpriteRotAngle() - 90.0f);

	FPoint direction = { 0.0f, 0.0f };
	direction.X = (float)(cos(rads));
	direction.Y = (float)(sin(rads));

	SDL_Rect currentSpritePos = this->getSpritePos();
	
	currentSpritePos.x += (int)(this->rocketVelocity2 * direction.X * this->move2 * deltaTime);
	currentSpritePos.y -= (int)(this->rocketVelocity2 * direction.Y * this->move2 * deltaTime);

	this->setSpritePos({ currentSpritePos.x , currentSpritePos.y  });
	this->setBoundingRect(this->getSpritePos());

}
/*
=================================================================
Sets the velocity for the rocket
=================================================================
*/
void cRocket2::setRocketVelocity2(int rocketVel)
{
	rocketVelocity2 = rocketVel;
}
/*
=================================================================
Gets the rocket velocity
=================================================================
*/
int cRocket2::getRocketVelocity2()
{
	return rocketVelocity2;
}
/*
=================================================================
Sets the move value for the rocket
=================================================================
*/
void cRocket2::setRocketMove2(int rocketMove2)
{
	move2 = rocketMove2;
}
/*
=================================================================
Gets the rocket move value
=================================================================
*/
int cRocket2::getRocketMove2()
{
	return move2;
}