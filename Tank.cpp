#include "Tank.h"

Tank::Tank(std::string name,						//Builder 
	std::string power ,
	std::string length,
	std::string gun ,
	std::string walk,
	std::string caliber,
	std::string year,
	std::string kolvo,
	std::string weight,
	std::string mans):
	m_name(name),
	m_power(power),
	m_length(length),
	m_gun(gun),
	m_walk(walk),
	m_caliber(caliber),
	m_year(year),
	m_kolvo(kolvo),
	m_weight(weight),
	m_mans(mans)
{
}

Tank::Tank(const Tank &tank)						//Builder
	: m_name(tank.m_name),
	m_power(tank.m_power),
	m_length(tank.m_length),
	m_gun(tank.m_gun),
	m_caliber(tank.m_caliber),
	m_walk(tank.m_walk),
	m_year(tank.m_year),
	m_kolvo(tank.m_kolvo),
	m_weight(tank.m_weight),
	m_mans(tank.m_mans)
{
}



std::string Tank::getName() { return m_name; };							//getter
std::string Tank::getPower() { return m_power; };
std::string Tank::getLength() { return m_length; };
std::string Tank::getGun() { return m_gun; };
std::string Tank::getCaliber() { return m_caliber; };
std::string Tank::getWalk() { return m_walk; };
std::string Tank::getYear() { return m_year; };
std::string Tank::getKolvo() { return m_kolvo; };
std::string Tank::getWeight() { return m_weight; };
std::string Tank::getMans() { return m_mans; };


void Tank::setName(){
	std::cout << "Enter name of Tank: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_name = a;
}
void Tank::setPower() {
	std::cout << "Enter power of gun: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_power = a;
}
void Tank::setLength() {
	std::cout << "Enter range of gun:\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_length = a;
}
void Tank::setGun() {
	std::cout << "Enter gun: \t\t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_gun = a;
}
void Tank::setCaliber() {
	std::cout << "Enter caliber of Gun: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_caliber = a;
}
void Tank::setYear() {
	std::cout << "Enter	year of issue: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_year = a;
}
void Tank::setKolvo() {
	std::cout << "Enter quanity of Tanks: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_kolvo = a;
}
void Tank::setWeight() {
	std::cout << "Enter weight of Tank: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_weight = a;
}
void Tank::setMans() {
	std::cout << "Enter quanity of mans: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_mans = a;
}


void Tank::set_Name(std::string a) {
	m_name = a;
}
void Tank::set_Power(std::string a) {
	m_power = a;
}
void Tank::set_Length(std::string a) {
	m_length = a;
}
void Tank::set_Gun(std::string a) {
	m_gun = a;
}
void Tank::set_Caliber(std::string a) {
	m_caliber = a;
}
void Tank::set_Year(std::string a) {
	m_year = a;
}
void Tank::set_Kolvo(std::string a) {
	m_kolvo = a;
}
void Tank::set_Weight(std::string a) {
	m_weight = a;
}
void Tank::set_Mans(std::string a) {
	m_mans = a;
}
void Tank::set_Walk(std::string a) {
	m_walk = a; 
}

Tank::~Tank()
{
}
