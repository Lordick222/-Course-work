#pragma once
#include "Header.h"
#include "ArmorCar.h"
#include "Fighter.h"
#include "Tank.h"
#include "Howitzer.h"
#include "Robot.h"
#include "ArmyFactory.h"

class Army
{
public:
	int sizeRobot = 0;
	int sizeArmorCar = 0;
	int sizeFighter = 0;
	int sizeTank = 0;
	int sizeHowitzer = 0;
	Robot**robot = new Robot*;
	ArmorCar**armorcar = new ArmorCar*;
	Fighter**fighter = new Fighter*;
	Tank**tank = new Tank*;
	Howitzer**howitzer = new Howitzer*;
};


