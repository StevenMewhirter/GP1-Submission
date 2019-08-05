/*
=================
cBullet.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cBullet.h"

/*
=================================================================
Defualt Constructor
=================================================================
*/
cBullet::cBullet() : cSprite()
{
	this->bulletVelocity = 0;
}
/*
=================================================================
Update the sprite position
=================================================================
*/

void cBullet::update(double deltaTime)
{
	//auto rads = PI / 180.0f * (this->getSpriteRotAngle() - 90.0f);

	/*FPoint direction = { 0.0f, 0.0f };
	direction.X = (float)(cos(rads));
	direction.Y = (float)(sin(rads));*/
	//this->setSpriteRotAngle((float)(this->getSpriteRotAngle() + (9.0f * deltaTime)));
	//if (this->getSpriteRotAngle() > 360)
	//{
	//	this->setSpriteRotAngle(this->getSpriteRotAngle() - 360.0f);
	//}

	//SDL_Rect currentSpritePos = this->getSpritePos();

	//currentSpritePos.x += (int)(this->bulletVelocity /** direction.X*/ * this->move3 * deltaTime);
	//currentSpritePos.y += (int)(this->bulletVelocity /** direction.Y*/ * this->move3 * deltaTime);

	//this->setSpritePos({ currentSpritePos.x , currentSpritePos.y });
	//this->setBoundingRect(this->getSpritePos());
	/*this->setSpriteRotAngle((float)(this->getSpriteRotAngle() + (5.0f * deltaTime)));
	if (this->getSpriteRotAngle() > 360)
	{
		this->setSpriteRotAngle(this->getSpriteRotAngle() - 360.0f);
	}*/
	auto rads = PI / 180.0f * (this->getSpriteRotAngle() - 90.0f);
	SDL_Rect currentSpritePos = this->getSpritePos();
	currentSpritePos.x += (int)(this->getSpriteTranslation().x * deltaTime);
	//currentSpritePos.y -= (int)(this->getSpriteTranslation().y * deltaTime);

	this->setSpritePos({ currentSpritePos.x, currentSpritePos.y });
	this->setBoundingRect(this->getSpritePos());

}
/*
=================================================================
  Sets the velocity for the Bullet
=================================================================
*/
void cBullet::setBulletVelocity(int bulletVel)
{
	this->bulletVelocity = bulletVel;
}
/*
=================================================================
  Gets the Bullet velocity
=================================================================
*/
int cBullet::getBulletVelocity()
{
	return this->bulletVelocity;
}
void cBullet::setBulletMove(int bulletMove)
{
	move3 = bulletMove;
}
/*
=================================================================
Gets the rocket move value
=================================================================
*/
int cBullet::getBulletMove()
{
	return move3;
}
