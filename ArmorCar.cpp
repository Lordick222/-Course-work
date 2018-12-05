#include "ArmorCar.h"


ArmorCar::ArmorCar(std::string name,						//Builder 
	std::string power,
	std::string length,
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
	m_length(length),
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

ArmorCar::ArmorCar(const ArmorCar &ArmorCar)						//Builder
	: m_name(ArmorCar.m_name),
	m_power(ArmorCar.m_power),
	m_length(ArmorCar.m_length),
	m_gun(ArmorCar.m_gun),
	m_caliber(ArmorCar.m_caliber),
	m_walk(ArmorCar.m_walk),
	m_year(ArmorCar.m_year),
	m_kolvo(ArmorCar.m_kolvo),
	m_weight(ArmorCar.m_weight),
	m_mans(ArmorCar.m_mans),
	m_country(ArmorCar.m_country)
{
}



std::string ArmorCar::getName() { return m_name; };							//getter
std::string ArmorCar::getPower() { return m_power; };
std::string ArmorCar::getLength() { return m_length; };
std::string ArmorCar::getGun() { return m_gun; };
std::string ArmorCar::getCaliber() { return m_caliber; };
std::string ArmorCar::getWalk() { return m_walk; };
std::string ArmorCar::getYear() { return m_year; };
std::string ArmorCar::getKolvo() { return m_kolvo; };
std::string ArmorCar::getWeight() { return m_weight; };
std::string ArmorCar::getMans() { return m_mans; };
std::string ArmorCar::getCountry() { return m_country; };


void ArmorCar::setName() {
	std::cout << "Enter name of ArmorCar: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_name = a;
}
void ArmorCar::setPower() {
	std::cout << "Enter power of gun: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_power = a;
}
void ArmorCar::setLength() {
	std::cout << "Enter range of gun:\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_length = a;
}
void ArmorCar::setGun() {
	std::cout << "Enter gun: \t\t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_gun = a;
}
void ArmorCar::setCaliber() {
	std::cout << "Enter caliber of Gun: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_caliber = a;
}
void ArmorCar::setYear() {
	std::cout << "Enter	year of issue: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_year = a;
}
void ArmorCar::setKolvo() {
	std::cout << "Enter quanity of ArmorCars: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_kolvo = a;
}
void ArmorCar::setWeight() {
	std::cout << "Enter weight of ArmorCar: \t";
	std::string a;
	std::getline(std::cin, a);
	m_weight = a;
}
void ArmorCar::setMans() {
	std::cout << "Enter quanity of mans: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_mans = a;
}


void ArmorCar::set_Name(std::string a) {
	m_name = a;
}
void ArmorCar::set_Power(std::string a) {
	m_power = a;
}
void ArmorCar::set_Length(std::string a) {
	m_length = a;
}
void ArmorCar::set_Gun(std::string a) {
	m_gun = a;
}
void ArmorCar::set_Caliber(std::string a) {
	m_caliber = a;
}
void ArmorCar::set_Year(std::string a) {
	m_year = a;
}
void ArmorCar::set_Kolvo(std::string a) {
	m_kolvo = a;
}
void ArmorCar::set_Weight(std::string a) {
	m_weight = a;
}
void ArmorCar::set_Mans(std::string a) {
	m_mans = a;
}
void ArmorCar::set_Walk(std::string a) {
	m_walk = a;
}

ArmorCar::~ArmorCar()
{
}
