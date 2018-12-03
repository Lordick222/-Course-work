#include "USARobot.h"

USARobot::USARobot(std::string name,						//Builder 
	std::string power,
	std::string gun,
	std::string caliber,
	std::string walk,
	std::string year,
	std::string kolvo,
	std::string weight,
	std::string mans) :
	Robot(name, power, gun, caliber, year, kolvo, weight, mans)
{
	m_walk = walk;
}

USARobot::USARobot(const USARobot &tank) :
	Robot(tank.m_name, tank.m_power, tank.m_gun,
		tank.m_caliber, tank.m_walk, tank.m_year, tank.m_kolvo,
		tank.m_weight, tank.m_mans)

{
}




void USARobot::EnterRobot() {
	std::cout << "\tEnter Robot of USA army\n\t";
	setName();			std::cout << "\t";
	setPower();			std::cout << "\t";
	setGun();			std::cout << "\t";
	std::cout << "(MM)  "; setCaliber();		std::cout << "\t";
	setYear();			std::cout << "\t";
	setKolvo();			std::cout << "\t";
	std::cout << "(KG)  "; setWeight();		std::cout << "\t";
	setMans();			std::cout << "\n";
}
void USARobot::OutRobot() {
	std::cout << "\n\t";
	std::cout << "USA Robot : \t\t\t\t" << getName() << "\n\t";
	std::cout << "Power of gun : \t\t\t\t" << getPower() << "\n\t";
	std::cout << "Gun : \t\t\t\t\t" << getGun() << "\n\t";
	std::cout << "Caliber : \t\t\t\t" << getCaliber() << " MM  \n\t";
	std::cout << "Year of issue : \t\t\t" << getYear() << "\n\t";
	std::cout << "Quanity of Tanks : \t\t\t" << getKolvo() << "\n\t";
	std::cout << "Weight : \t\t\t\t" << getWeight() << " KG   \n\t";
	std::cout << "Quanity of mans : \t\t\t" << getMans() << "\n\t";
	std::cout << "Type of walk : \t\t\t\t" << getWalk() << "\n";
}


USARobot::~USARobot()
{
}
