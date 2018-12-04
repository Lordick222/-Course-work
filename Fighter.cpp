#include "Fighter.h"


Fighter::Fighter(std::string name,						//Builder 
	std::string power,
	std::string gun,
	std::string walk,
	std::string caliber,
	std::string year,
	std::string kolvo,
	std::string weight,
	std::string mans) :
	m_name(name),
	m_power(power),
	m_gun(gun),
	m_walk(walk),
	m_caliber(caliber),
	m_year(year),
	m_kolvo(kolvo),
	m_weight(weight),
	m_mans(mans)
{
}

Fighter::Fighter(const Fighter &Fighter)						//Builder
	: m_name(Fighter.m_name),
	m_power(Fighter.m_power),
	m_gun(Fighter.m_gun),
	m_caliber(Fighter.m_caliber),
	m_walk(Fighter.m_walk),
	m_year(Fighter.m_year),
	m_kolvo(Fighter.m_kolvo),
	m_weight(Fighter.m_weight),
	m_mans(Fighter.m_mans)
{
}



std::string Fighter::getName() { return m_name; };							//getter
std::string Fighter::getPower() { return m_power; };
std::string Fighter::getGun() { return m_gun; };
std::string Fighter::getCaliber() { return m_caliber; };
std::string Fighter::getWalk() { return m_walk; };
std::string Fighter::getYear() { return m_year; };
std::string Fighter::getKolvo() { return m_kolvo; };
std::string Fighter::getWeight() { return m_weight; };
std::string Fighter::getMans() { return m_mans; };


void Fighter::setName() {
	std::cout << "Enter name of Fighter: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_name = a;
}
void Fighter::setPower() {
	std::cout << "Enter power of gun: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_power = a;
}
void Fighter::setGun() {
	std::cout << "Enter gun: \t\t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_gun = a;
}
void Fighter::setCaliber() {
	std::cout << "Enter caliber of Gun: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_caliber = a;
}
void Fighter::setYear() {
	std::cout << "Enter	year of issue: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_year = a;
}
void Fighter::setKolvo() {
	std::cout << "Enter quanity of Fighters: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_kolvo = a;
}
void Fighter::setWeight() {
	std::cout << "Enter weight of Fighter: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_weight = a;
}
void Fighter::setMans() {
	std::cout << "Enter quanity of mans: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_mans = a;
}


void Fighter::set_Name(std::string a) {
	m_name = a;
}
void Fighter::set_Power(std::string a) {
	m_power = a;
}
void Fighter::set_Gun(std::string a) {
	m_gun = a;
}
void Fighter::set_Caliber(std::string a) {
	m_caliber = a;
}
void Fighter::set_Year(std::string a) {
	m_year = a;
}
void Fighter::set_Kolvo(std::string a) {
	m_kolvo = a;
}
void Fighter::set_Weight(std::string a) {
	m_weight = a;
}
void Fighter::set_Mans(std::string a) {
	m_mans = a;
}
void Fighter::set_Walk(std::string a) {
	m_walk = a;
}


Fighter::~Fighter()
{
}
