#include "RUSFighter.h"



RUSFighter::RUSFighter(std::string name,						//Builder 
	std::string power,
	std::string gun,
	std::string caliber,
	std::string walk,
	std::string year,
	std::string kolvo,
	std::string weight,
	std::string mans,
	std::string country) :
	Fighter(name, power,  gun, caliber, year, kolvo, weight, mans)
{
	m_walk = walk; m_country = country;
}

RUSFighter::RUSFighter(const RUSFighter &Fighter) :
	Fighter(Fighter.m_name, Fighter.m_power,  Fighter.m_gun,
		Fighter.m_caliber, Fighter.m_walk, Fighter.m_year, Fighter.m_kolvo,
		Fighter.m_weight, Fighter.m_mans, Fighter.m_country)

{
}




void RUSFighter::EnterFighter() {
	std::cout << "\tEnter Fighter of RUS army\n\t";
	setName();			std::cout << "\t";
	setPower();			std::cout << "\t";
	setGun();			std::cout << "\t";
	std::cout << "(MM)  "; setCaliber();		std::cout << "\t";
	setYear();			std::cout << "\t";
	setKolvo();			std::cout << "\t";
	std::cout << "(KG)  "; setWeight();		std::cout << "\t";
	setMans();			std::cout << "\n";
}
void RUSFighter::OutFighter() {
	std::cout << "\n\t";
	std::cout << "RUS Fighter : \t\t\t\t" << getName() << "\n\t";
	std::cout << "Power of gun : \t\t\t\t" << getPower() << "\n\t";
	std::cout << "Gun : \t\t\t\t\t" << getGun() << "\n\t";
	std::cout << "Caliber : \t\t\t\t" << getCaliber() << " MM  \n\t";
	std::cout << "Year of issue : \t\t\t" << getYear() << "\n\t";
	std::cout << "Quanity of Fighters : \t\t\t" << getKolvo() << "\n\t";
	std::cout << "Weight : \t\t\t\t" << getWeight() << " KG   \n\t";
	std::cout << "Quanity of mans : \t\t\t" << getMans() << "\n\t";
	std::cout << "Type of walk : \t\t\t\t" << getWalk() << "\n";
}


RUSFighter::~RUSFighter()
{
}
