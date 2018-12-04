#include "USAArmorCar.h"



USAArmorCar::USAArmorCar(std::string name,						//Builder 
	std::string power,
	std::string length,
	std::string gun,
	std::string caliber,
	std::string walk,
	std::string year,
	std::string kolvo,
	std::string weight,
	std::string mans) :
	ArmorCar(name, power, length, gun, caliber, walk, year, kolvo, weight, mans)
{
	m_walk = walk;
}

USAArmorCar::USAArmorCar(const USAArmorCar &ArmorCar) :
	ArmorCar(ArmorCar.m_name, ArmorCar.m_power, ArmorCar.m_length, ArmorCar.m_gun,
		ArmorCar.m_caliber, ArmorCar.m_walk, ArmorCar.m_year, ArmorCar.m_kolvo,
		ArmorCar.m_weight, ArmorCar.m_mans)

{
}



void USAArmorCar::EnterArmorCar() {
	std::cout << "\tEnter ArmorCar of USA army\n\t";
	setName();			std::cout << "\t";
	setPower();			std::cout << "\t";
	std::cout << "(In)  ";  setLength();		std::cout << "\t";
	setGun();			std::cout << "\t";
	std::cout << "(In s)  "; setCaliber();		std::cout << "\t";
	setYear();			std::cout << "\t";
	setKolvo();			std::cout << "\t";
	std::cout << "(po)  "; setWeight();		std::cout << "\t";
	setMans();			std::cout << "\n";
}
void USAArmorCar::OutArmorCar() {
	std::cout << "\n\t";
	std::cout << "USA ArmorCar : \t\t\t\t" << getName() << "\n\t";
	std::cout << "Power of gun : \t\t\t\t" << getPower() << "\n\t";
	std::cout << "Range of gun : \t\t\t\t" << getLength() << " Inch  \n\t";
	std::cout << "Gun : \t\t\t\t\t" << getGun() << "\n\t";
	std::cout << "Caliber : \t\t\t\t" << getCaliber() << " Inch s  \n\t";
	std::cout << "Year of issue : \t\t\t" << getYear() << "\n\t";
	std::cout << "Quanity of ArmorCars : \t\t\t" << getKolvo() << "\n\t";
	std::cout << "Weight : \t\t\t\t" << getWeight() << " pounds   \n\t";
	std::cout << "Quanity of mans : \t\t\t" << getMans() << "\n\t";
	std::cout << "Type of walk : \t\t\t\t" << getWalk() << "\n";
}


USAArmorCar::~USAArmorCar()
{
}
