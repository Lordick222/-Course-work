#include "RUSArmyFactory.h"

ArmorCar* RUSArmyFactory::createArmorCar() {
	return new RUSArmorCar;
}
Fighter* RUSArmyFactory::createFighter() {
	return new RUSFighter;
}
Howitzer* RUSArmyFactory::createHowitzer() {
	return new RUSHowitzer;
}
Robot* RUSArmyFactory::createRobot() {
	return new RUSRobot;
}
Tank* RUSArmyFactory::createTank(){
	return new RUSTank;
}