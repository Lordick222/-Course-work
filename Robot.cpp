#include "Robot.h"
Robot::Robot(std::string name,						//Builder 
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

Robot::Robot(const Robot &robot)						//Builder
	: m_name(robot.m_name),
	m_power(robot.m_power),
	m_gun(robot.m_gun),
	m_caliber(robot.m_caliber),
	m_walk(robot.m_walk),
	m_year(robot.m_year),
	m_kolvo(robot.m_kolvo),
	m_weight(robot.m_weight),
	m_mans(robot.m_mans),
	m_country(robot.m_country)
{
}



std::string Robot::getName() { return m_name; };							//getter
std::string Robot::getPower() { return m_power; };
std::string Robot::getGun() { return m_gun; };
std::string Robot::getCaliber() { return m_caliber; };
std::string Robot::getWalk() { return m_walk; };
std::string Robot::getYear() { return m_year; };
std::string Robot::getKolvo() { return m_kolvo; };
std::string Robot::getWeight() { return m_weight; };
std::string Robot::getMans() { return m_mans; };
std::string Robot::getCountry() { return m_country; };


void Robot::setName() {
	std::cout << "Enter name of Robot: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_name = a;
}
void Robot::setPower() {
	std::cout << "Enter power of gun: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_power = a;
}
void Robot::setGun() {
	std::cout << "Enter gun: \t\t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_gun = a;
}
void Robot::setCaliber() {
	std::cout << "Enter caliber of Gun: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_caliber = a;
}
void Robot::setYear() {
	std::cout << "Enter	year of issue: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_year = a;
}
void Robot::setKolvo() {
	std::cout << "Enter quanity of Robot: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_kolvo = a;
}
void Robot::setWeight() {
	std::cout << "Enter weight of Robot: \t\t";
	std::string a;
	std::getline(std::cin, a);
	m_weight = a;
}
void Robot::setMans() {
	std::cout << "Enter quanity of mans: \t\t\t";
	std::string a;
	std::getline(std::cin, a);
	m_mans = a;
}


void Robot::set_Name(std::string a) {
	m_name = a;
}
void Robot::set_Power(std::string a) {
	m_power = a;
}
void Robot::set_Gun(std::string a) {
	m_gun = a;
}
void Robot::set_Caliber(std::string a) {
	m_caliber = a;
}
void Robot::set_Year(std::string a) {
	m_year = a;
}
void Robot::set_Kolvo(std::string a) {
	m_kolvo = a;
}
void Robot::set_Weight(std::string a) {
	m_weight = a;
}
void Robot::set_Mans(std::string a) {
	m_mans = a;
}
void Robot::set_Walk(std::string a) {
	m_walk = a;
}
void Robot::set_Country(std::string a) {
	m_country = a;
}
Robot::~Robot()
{
}
