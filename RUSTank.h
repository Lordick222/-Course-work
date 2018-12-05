#pragma once
#include "Tank.h"
class RUSTank :
	public Tank
{
public:
	RUSTank(std::string name = "",
		std::string power = "",
		std::string length = "",
		std::string gun = "",
		std::string caliber = "",
		std::string walk = "ground",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "",
		std::string country = "RUS");

	RUSTank(const RUSTank &tank);


	void EnterTank();
	void OutTank();
	virtual ~RUSTank();
};

