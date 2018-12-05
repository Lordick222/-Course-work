#include "Howitzer.h"


Howitzer::Howitzer(std::string name,						//Builder 
	std::string power,
	std::string gun,
	std::string walk,
	std::string caliber,
	std::string year,
	std::string kolvo,
	std::string weight,
	std::string mans,
	std::string country) :
	m_name(name),
	m_power(power),
	m_gun(gun),
	m_walk(walk),
	m_caliber(caliber),
	m_year(year),
	m_kolvo(kolvo),
	m_weight(weight),
	m_mans(mans),
	m_country(country)
{
}

Howitzer::Howitzer(const Howitzer &tank)						//Builder
	: m_name(tank.m_name),
	m_power(tank.m_power),
	m_gun(tank.m_gun),
	m_caliber(tank.m_caliber),
	m_walk(tank.m_walk),
	m_year(tank.m_year),
	m_kolvo(tank.m_kolvo),
	m_weight(tank.m_weight),
	m_mans(tank.m_mans),
	m_country(tank.m_country)
{
}



std::string Howitzer::getName() { return m_name; };							//getter
std::string Howitzer::getPower() { return m_power; };
std::string Howitzer::getGun() { return m_gun; };
std::string Howitzer::getCaliber() { return m_caliber; };
std::string Howitzer::getWalk() { return m_walk; };
std::string Howitzer::getYear() { return m_year; };
std::string Howitzer::getKolvo() { return m_kolvo; };
std::string Howitzer::getWeight() { return m_weight; };
std::string Howitzer::getMans() { return m_mans; };
std::string Howitzer::getCountry() { return m_country; };


void Howitzer::setName() {
	std::cout << "Enter name of Howitzer: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_name = a;
}
void Howitzer::setPower() {
	std::cout << "Enter power of gun: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_power = a;
}
void Howitzer::setGun() {
	std::cout << "Enter gun: \t\t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_gun = a;
}
void Howitzer::setCaliber() {
	std::cout << "Enter caliber of Gun: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_caliber = a;
}
void Howitzer::setYear() {
	std::cout << "Enter	year of issue: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_year = a;
}
void Howitzer::setKolvo() {
	std::cout << "Enter quanity of Howitzer: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_kolvo = a;
}
void Howitzer::setWeight() {
	std::cout << "Enter weight of Howitzer: \t";
	std::string a;
	std::getline(std::cin, a);
	m_weight = a;
}
void Howitzer::setMans() {
	std::cout << "Enter quanity of mans: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_mans = a;
}


void Howitzer::set_Name(std::string a) {
	m_name = a;
}
void Howitzer::set_Power(std::string a) {
	m_power = a;
}
void Howitzer::set_Gun(std::string a) {
	m_gun = a;
}
void Howitzer::set_Caliber(std::string a) {
	m_caliber = a;
}
void Howitzer::set_Year(std::string a) {
	m_year = a;
}
void Howitzer::set_Kolvo(std::string a) {
	m_kolvo = a;
}
void Howitzer::set_Weight(std::string a) {
	m_weight = a;
}
void Howitzer::set_Mans(std::string a) {
	m_mans = a;
}
void Howitzer::set_Walk(std::string a) {
	m_walk = a;
}
void Howitzer::set_Country(std::string a) {
	m_country = a;
}

Howitzer::~Howitzer()
{
}
