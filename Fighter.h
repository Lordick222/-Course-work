#pragma once
#include "Header.h"
class Fighter
{
protected:
	std::string m_name;
	std::string m_power;
	std::string m_length;
	std::string m_gun;
	std::string m_caliber;
	std::string m_walk;
	std::string m_year;
	std::string m_kolvo;
	std::string m_weight;
	std::string m_mans;
	std::string m_country;
public:
	Fighter(std::string name = "",
		std::string power = "",
		std::string gun = "",
		std::string walk = "air",
		std::string caliber = "",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "",
		std::string m_country="");

	Fighter(const Fighter &Fighter);


	std::string getName();
	std::string getPower();
	std::string getGun();
	std::string getCaliber();
	std::string getWalk();
	std::string getYear();
	std::string getKolvo();
	std::string getWeight();
	std::string getMans();
	std::string getCountry();

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

	virtual void EnterFighter() = 0;
	virtual void OutFighter() = 0;
	virtual ~Fighter();
};

