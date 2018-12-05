#pragma once
#include "ArmyFactory.h"
#include "USAArmorCar.h"
#include "USAFighter.h"
#include "USATank.h"
#include "USAHowitzer.h"
#include "USARobot.h"

class USAArmyFactory :
	public ArmyFactory
{
public:
	  ArmorCar* createArmorCar();
	  Fighter* createFighter();
	  Tank* createTank() ;
	  Howitzer* createHowitzer();
	  Robot* createRobot();
};

