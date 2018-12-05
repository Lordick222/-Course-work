#include "USAArmyFactory.h"

ArmorCar* USAArmyFactory::createArmorCar() {
	return new USAArmorCar;
}
Fighter* USAArmyFactory::createFighter() {
	return new USAFighter;
}
Howitzer* USAArmyFactory::createHowitzer() {
	return new USAHowitzer;
}
Robot* USAArmyFactory::createRobot() {
	return new USARobot;
}
Tank* USAArmyFactory::createTank()
{
	return new USATank;
}
