#pragma once
#include "ArmyFactory.h"
#include "RUSArmorCar.h"
#include "RUSFighter.h"
#include "RUSTank.h"
#include "RUSHowitzer.h"
#include "RUSRobot.h"
class RUSArmyFactory :
	public ArmyFactory
{
public:
	ArmorCar * createArmorCar();
	Fighter* createFighter();
	Tank* createTank();
	Howitzer* createHowitzer();
	Robot* createRobot();
};

