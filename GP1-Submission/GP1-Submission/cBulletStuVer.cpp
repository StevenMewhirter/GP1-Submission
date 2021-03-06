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
	this->theAngle = -45.0f;
	this->hit = 'p';
}
/*
=================================================================
Update the sprite position
=================================================================
*/
//this->setSpriteRotAngle((float)(this->getSpriteRotAngle() + (9.0f * deltaTime)));
	//if (this->getSpriteRotAngle() > 360)
	//{
	//	this->setSpriteRotAngle(this->getSpriteRotAngle() - 360.0f);
	//}

	//SDL_Rect currentSpritePos = this->getSpritePos();

	//currentSpritePos.x += (int)(this->bulletVelocity * /*direction.X**/ this->move3 * deltaTime);
	//currentSpritePos.y += (int)(this->bulletVelocity /** direction.Y */* this->move3 * deltaTime);
void cBullet::update(double deltaTime)
{
	auto rads = PI / 180.0f * (this->theAngle);

	FPoint direction = { 0.0f, 0.0f };
	direction.X = (float)(cos(rads));
	direction.Y = (float)(sin(rads));
	

	this->setBoundingRect(this->getSpritePos());
	
	if (this->getSpriteRotAngle() > 360)
	{
		this->setSpriteRotAngle(this->getSpriteRotAngle() - 360.0f);
	}
	
	SDL_Rect currentSpritePos = this->getSpritePos();
	currentSpritePos.x += (int)(this->getSpriteTranslation().x * direction.X * this->move3 * deltaTime);
	currentSpritePos.y -= (int)(this->getSpriteTranslation().y * direction.Y * this->move3 * deltaTime);

	if (currentSpritePos.x <= 0)

	{
		currentSpritePos.x += 15.0f;
	
		this->theAngle = 180.0f - theAngle;
		this->hit = 'l';
	} 

	else if (currentSpritePos.x > (WINDOW_WIDTH - this->getSpriteDimensions().w))

	{
		currentSpritePos.x -= (5.0f + this->getSpriteDimensions().w);
		
		this->theAngle = 180.0f - theAngle;
		this->hit = 'r';
	}

	if (currentSpritePos.y <= 0)

	{

		currentSpritePos.y += 15.0f;

		//this->move3 *= -1;

		this->theAngle = 360.0f - theAngle;

		//theBullet.setSpritePos({ theBullet.getSpritePos().x,theBullet.getSpritePos().y });

		//theBullet.setBulletMove(theBullet.getBulletMove()*(-1));

	}

	else if (currentSpritePos.y > (WINDOW_HEIGHT - this->getSpriteDimensions().h))

	{

		currentSpritePos.y -= (5.0f + this->getSpriteDimensions().h);

		//this->move3 *= -1;

		this->theAngle = 360.0f - theAngle;

	}

	
	this->setSpritePos({ currentSpritePos.x, currentSpritePos.y });
	this->setBoundingRect(this->getSpritePos());
	//cout << currentSpritePos.x << "," << currentSpritePos.y << endl;
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
void cBullet::setHit(char side)
{
	this->hit = side;
}
char cBullet::getHit()
{
	return this->hit;
}
