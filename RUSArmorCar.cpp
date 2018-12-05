#include "RUSArmorCar.h"


RUSArmorCar::RUSArmorCar(std::string name,						//Builder 
	std::string power,
	std::string length,
	std::string gun,
	std::string caliber,
	std::string walk,
	std::string year,
	std::string kolvo,
	std::string weight,
	std::string mans,
	std::string country) :
	ArmorCar(name, power, length, gun, caliber, walk, year, kolvo, weight, mans)
{
	m_walk = walk; m_country = country;
}

RUSArmorCar::RUSArmorCar(const RUSArmorCar &ArmorCar) :
	ArmorCar(ArmorCar.m_name, ArmorCar.m_power, ArmorCar.m_length, ArmorCar.m_gun,
		ArmorCar.m_caliber, ArmorCar.m_walk, ArmorCar.m_year, ArmorCar.m_kolvo,
		ArmorCar.m_weight, ArmorCar.m_mans, ArmorCar.m_country)

{
}



void RUSArmorCar::EnterArmorCar() {
	std::cout << "\tEnter ArmorCar of RUS army\n\t";
	setName();			std::cout << "\t";
	setPower();			std::cout << "\t";
	std::cout << "(KM)  ";  setLength();		std::cout << "\t";
	setGun();			std::cout << "\t";
	std::cout << "(MM)  "; setCaliber();		std::cout << "\t";
	setYear();			std::cout << "\t";
	setKolvo();			std::cout << "\t";
	std::cout << "(KG)  "; setWeight();		std::cout << "\t";
	setMans();			std::cout << "\n";
}
void RUSArmorCar::OutArmorCar() {
	std::cout << "\n\t";
	std::cout << "RUS ArmorCar : \t\t\t\t" << getName() << "\n\t";
	std::cout << "Power of gun : \t\t\t\t" << getPower() << "\n\t";
	std::cout << "Range of gun : \t\t\t\t" << getLength() << " KM  \n\t";
	std::cout << "Gun : \t\t\t\t\t" << getGun() << "\n\t";
	std::cout << "Caliber : \t\t\t\t" << getCaliber() << " MM  \n\t";
	std::cout << "Year of issue : \t\t\t" << getYear() << "\n\t";
	std::cout << "Quanity of ArmorCars : \t\t\t" << getKolvo() << "\n\t";
	std::cout << "Weight : \t\t\t\t" << getWeight() << " KG   \n\t";
	std::cout << "Quanity of mans : \t\t\t" << getMans() << "\n\t";
	std::cout << "Type of walk : \t\t\t\t" << getWalk() << "\n";
}


RUSArmorCar::~RUSArmorCar()
{
}
