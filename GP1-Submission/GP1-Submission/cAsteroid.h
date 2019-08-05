/*
=================
cAsteroid.h
- Header file for class definition - SPECIFICATION
- Header file for the Rocket class which is a child of cSprite class
=================
*/
#ifndef _CASTEROID_H
#define _CASTEROID_H
#include "cSprite.h"

class cAsteroid : public cSprite
{
private:
	int asteroidVelocity;
	int move2;

public:
	cAsteroid();
	void update(double deltaTime);		// Rocket update method
	void setAsteroidVelocity(int asteroidVel);   // Sets the velocity for the asteroid
	int getAsteroidVelocity();		
	void setAsteroidMove(int asteroidMove);   // Sets the rocket move Value
	int getAsteroidMove();				 // Gets the rocket move value// Gets the asteroid velocity
};
#endif