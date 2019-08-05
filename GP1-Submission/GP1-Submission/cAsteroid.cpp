/*
=================
cAsteroid.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cAsteroid.h"

/*
=================================================================
Defualt Constructor
=================================================================
*/
cAsteroid::cAsteroid() : cSprite()
{
	this->asteroidVelocity = 0;
}
/*
=================================================================
Update the sprite position
=================================================================
*/

void cAsteroid::update(double deltaTime)
{

	///*this->setSpriteRotAngle((float)(this->getSpriteRotAngle() +(5.0f * deltaTime))); 
	//if (this->getSpriteRotAngle() > 360)
	//{
	//	this->setSpriteRotAngle(this->getSpriteRotAngle() - 360.0f);
	//}*/

	//SDL_Rect currentSpritePos = this->getSpritePos();
	////currentSpritePos.x += (int)(this->getSpriteTranslation().x * deltaTime);
	//currentSpritePos.y -= (int)(this->getSpriteTranslation().y * deltaTime);

	//this->setSpritePos({ currentSpritePos.x, currentSpritePos.y });
	//this->setBoundingRect(this->getSpritePos());
	auto rads = PI / 180.0f * (this->getSpriteRotAngle() - 90.0f);

	/*FPoint direction = { 0.0f, 0.0f };
	direction.X = (float)(cos(rads));
	direction.Y = (float)(sin(rads));*/

	SDL_Rect currentSpritePos = this->getSpritePos();

	//currentSpritePos.x += (int)(this->rocketVelocity * direction.X * this->move * deltaTime);
	currentSpritePos.y += (int)(this->asteroidVelocity * this->move2 * deltaTime);

	this->setSpritePos({ currentSpritePos.x , currentSpritePos.y });
	this->setBoundingRect(this->getSpritePos());
}
/*
=================================================================
  Sets the velocity for the Asteroid
=================================================================
*/
void cAsteroid::setAsteroidVelocity(int AsteroidVel)
{
	asteroidVelocity = AsteroidVel;
}
/*
=================================================================
  Gets the Asteroid velocity
=================================================================
*/
int cAsteroid::getAsteroidVelocity()
{
	return asteroidVelocity;
}

void cAsteroid::setAsteroidMove(int asteroidMove)
{
	move2 = asteroidMove;
}
/*
=================================================================
Gets the rocket move value
=================================================================
*/
int cAsteroid::getAsteroidMove()
{
	return move2;
}