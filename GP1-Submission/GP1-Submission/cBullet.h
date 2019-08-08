/*
=================
cBullet.h
- Header file for class definition - SPECIFICATION
- Header file for the Bullet class which is a child of cSprite class
=================
*/
#ifndef _CBULLET_H
#define _CBULLET_H
#include "cSprite.h"


class cBullet : public cSprite
{
private:
	int bulletVelocity;
	int move3 = 1;
	float theAngle;
	char hit;
	

public:
	cBullet();
	void update(double deltaTime);		// Bullet update method
	void setBulletVelocity(int bulletVel);   // Sets the velocity for the Bullet
	int getBulletVelocity();				 // Gets the Bullet velocity
	void setBulletMove(int bulletMove);   // Sets the rocket move Value
	int getBulletMove();
	void setHit(char side); //set the bullet for collision with the wall to add score
	char getHit();

};
#endif