/*
=================
cRocket2.h
- Header file for class definition - SPECIFICATION
- Header file for the Rocket class which is a child of cSprite class
=================
*/
#ifndef _CROCKET_H
#define _CROCKET_H
#include "cSprite.h"

class cRocket2 : public cSprite
{
private:
	int rocketVelocity2;
	int move2;

public:
	cRocket2();
	void update(double deltaTime);		// Rocket update method
	void setRocketVelocity2(int rocketVel2);   // Sets the velocity for the rocket
	int getRocketVelocity2();				 // Gets the rocket velocity
	void setRocketMove2(int rocketMove2);   // Sets the rocket move Value
	int getRocketMove2();				 // Gets the rocket move value
}; 
#endif