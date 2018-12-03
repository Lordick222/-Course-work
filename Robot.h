#pragma once
#include "Header.h"
class Robot
{
protected:
	std::string m_name;
	std::string m_power;
	std::string m_gun;
	std::string m_caliber;
	std::string m_walk;
	std::string m_year;
	std::string m_kolvo;
	std::string m_weight;
	std::string m_mans;
public:
	Robot(std::string name = "",
		std::string power = "",
		std::string gun = "",
		std::string walk = "ground",
		std::string caliber = "",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "");

	Robot(const Robot &robot);


	std::string getName();
	std::string getPower();
	std::string getGun();
	std::string getCaliber();
	std::string getWalk();
	std::string getYear();
	std::string getKolvo();
	std::string getWeight();
	std::string getMans();

	void setName();
	void setPower();
	void setGun();
	void setCaliber();
	void setYear();
	void setKolvo();
	void setWeight();
	void setMans();

	void set_Name(std::string a);
	void set_Power(std::string a);
	void set_Gun(std::string a);
	void set_Caliber(std::string a);
	void set_Year(std::string a);
	void set_Kolvo(std::string a);
	void set_Weight(std::string a);
	void set_Mans(std::string a);
	void set_Walk(std::string a);

	virtual void EnterRobot() = 0;
	virtual void OutRobot() = 0;


	virtual ~Robot();
};

