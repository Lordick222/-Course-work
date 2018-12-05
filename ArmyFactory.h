#pragma once
#include "Header.h"
#include "ArmorCar.h"
#include "Fighter.h"
#include "Tank.h"
#include "Howitzer.h"
#include "Robot.h"

class ArmyFactory
{
public:
	virtual ArmorCar* createArmorCar() = 0;
	virtual Fighter* createFighter() = 0;
	virtual Tank* createTank() = 0;
	virtual Howitzer* createHowitzer() = 0;
	virtual Robot* createRobot() = 0;
};

